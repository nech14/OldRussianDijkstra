
#ifndef ����������_������_H
#define ����������_������_H


�������� ����� ����;


�������� ����������_������{

��������:
	������ �����_������;
	������ ������;
	������ ����;

	������** �������;

	����������_������() {
		�����_������ = 1;
		������ = 1;
		���� = 1;

		
		������� = ���� ������ * [�����_������];

		���(������ � = 0; � < �����_������; ++�) {
			�������[�] = ���� ������[�����_������];
		}

		���(������ � = 0; � < �����_������; ++�) {
			���(������ �� = 0; �� < �����_������; ++��) {
				�������[�][��] = � * �����_������ + ��;
			}
		}

	}

	����������_������(�����_����� ��������_��������) {

		������_�������� ��������(��������_��������);

		������ �������_1, �������_2, �����_�����;

		����(��������.������_�������()) {
			����(��������.������_�������()) {
				�������� >> �����_������;
				�������� >> ������ >> ����;

				�������_�������();

				������(�������� >> �������_1 >> �������_2 >> �����_�����) {
					�������[�������_1 - 1][�������_2 - 1] = �����_�����;
				}
				��������.����������();
			}

		} ������{
			������� << "�����!" << ����_����;
		}

	}


	����������_������(������ �����_������, ������ ������, ������ ����) : �����_������(�����_������), ������(������), ����(����) {

		������� = ���� ������ * [�����_������];

		���(������ � = 0; � < �����_������; ++�) {
			�������[�] = ���� ������[�����_������];
		}

		���(������ � = 0; � < �����_������; ++�) {
			���(������ �� = 0; �� < �����_������; ++��) {
				�������[�][��] = � * �����_������ + ��;
			}
		}

	}

	~����������_������() {

		���(������ � = 0; � < �����_������; ++�) {
			�����[] �������[�];
		}
		�����[] �������;


	}

	��������� �������_�������() {

		������� = ���� ������ * [�����_������];

		���(������ � = 0; � < �����_������; ++�) {
			�������[�] = ���� ������[�����_������];
		}

		���(������ � = 0; � < �����_������; ++�) {
			���(������ �� = 0; �� < �����_������; ++��) {
				�������[�][��] = 0;
			}
		}
	}

	����� �����_��������() {
		
		�������_�_����������<�����, ������<�����>, ���������������> ����;

		������ ����� = ������;

		���(������ � = 0; � < �����_������; ++�) {

			����(� == ����� - 1) {
				������_������;
			}

			������ ����� = �������[����� - 1][�];

			����(����� <= 0) {
				������_������;
			}

			������<������> ������ = { ����� };
			������.��������(� + 1);


			����.���������(
				�����(������, �����)
			);
		}

		������ ����_����� = ����;
		������ ���� = ����.���().������[����.���().������.������() - 1];

		������(���� != ����_�����) {
			����� ������_�������� = ����.���();
			����.��������();

			������ ����� = ������_��������.������[������_��������.������.������() - 1];

			���(������ �� = 0; �� < �����_������; ++��) {

				����(������������(������_��������.������.������(), ������_��������.������.�����(), ��+1) != ������_��������.������.�����()) {
					������_������;
				}

				������ ����� = �������[����� - 1][��];

				����(����� <= 0) {
					������_������;
				}

				����� += ������_��������.�����;

				������<������> ������ = ������_��������.������;
				������.��������(�� + 1);

				����.���������(
					�����(������, �����)
				);

			}
			���� = ����.���().������[����.���().������.������() - 1];

		}

		������� ����.���();
	
	}


	����� ������_�������& �������� << (������_������� & ��, ������_������ ����������_������ & ������) {
		�� << "���������� ������: " << ������.�����_������ << ����_����;

		������ ����_����� = 2;

		���(������ � = 0; � < ������.�����_������; ++�) {
			���(������ �� = 0; �� < ������.�����_������; ++��) {
				������ ����� = �_����������(������.�������[�][��]).��������();
				����_����� = �������(����_�����, �����);
			}
		}

		���(������ � = 0; � < ������.�����_������; ++�) {
			���(������ �� = 0; �� < ������.�����_������; ++��) {
				�� << ����(����_�����) << ������.�������[�][��] << "  ";
			}
			�� << ����_����;
		}


		������� ��;
	}

};




#endif
