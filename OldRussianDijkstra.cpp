﻿
#include "летописи/Ве_крест_крест.h"
#include "летописи/Стрела.h"
#include "летописи/Очередь_с_кумовством.h"
#include "летописи/Тропа.h"
#include "летописи/Путеводный_камень.h"


внедрить хутор Русь;


царь_батюшка_главный()
{
	вперёд_славяне;


	Путеводный_камень путевод("путеводные_камни\\путеводный_камень.txt", кривда);
	//Путеводный_камень путевод("путеводные_камни\\путеводный_камень_1.txt", кривда);
	//Путеводный_камень путевод("путеводные_камни\\1000.txt", правда);

	молвить << путевод << прыг_скок;


	Тропа лучший_тропа = путевод.наказ_Дейкстра();

	молвить << лучший_тропа << прыг_скок;

	воздать ноль;
}

