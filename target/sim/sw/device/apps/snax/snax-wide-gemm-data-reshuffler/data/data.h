#include <stdint.h>

#include <stdbool.h> 

int8_t Batch = 1;

int32_t strideC = 0;

int8_t tempLoop0_A = 1;

int8_t tempLoop1_A = 2;

int8_t tempLoop0_B = 1;

int8_t tempLoop1_B = 3;

int32_t DMAtempStride0_A_in = 64;

int32_t DMAtempStride1_A_in = 64;

int32_t DMAspatialStride1_A_in = 8;

int32_t tempStride0_A_in = 8;

int32_t tempStride1_A_in = 64;

int32_t spatialStride1_A_in = 8;

int32_t tempStride0_A_out = 64;

int32_t tempStride1_A_out = 64;

int32_t spatialStride1_A_out = 8;

int32_t delta_local_A_in = 0;

int32_t delta_local_A_out = 128;

int32_t DMAtempStride0_B_in = 64;

int32_t DMAtempStride1_B_in = 64;

int32_t DMAspatialStride1_B_in = 8;

int32_t tempStride0_B_in = 8;

int32_t tempStride1_B_in = 64;

int32_t spatialStride1_B_in = 8;

int32_t tempStride0_B_out = 64;

int32_t tempStride1_B_out = 64;

int32_t spatialStride1_B_out = 8;

int32_t delta_local_B_in = 256;

int32_t delta_local_B_out = 448;

int32_t DMAtempStride0_C_in = 256;

int32_t DMAtempStride1_C_in = 768;

int32_t DMAspatialStride1_C_in = 32;

int32_t tempStride0_C_in = 512;

int32_t tempStride1_C_in = 32;

int32_t spatialStride1_C_in = 256;

int32_t tempStride0_C_out = 256;

int32_t tempStride1_C_out = 512;

int32_t spatialStride1_C_out = 32;

int32_t delta_local_C_in = 640;

int32_t delta_local_C_out = 8192;

int8_t subtraction_a = -26;

int8_t subtraction_b = 51;

bool transpose_A = 0;

bool transpose_B = 0;

bool transpose_C = 0;

int8_t A[128]  = {
	-36,
	-114,
	-22,
	-57,
	60,
	-108,
	-26,
	-7,
	82,
	86,
	-54,
	74,
	-41,
	-12,
	-29,
	-25,
	23,
	2,
	21,
	-76,
	-127,
	-41,
	107,
	29,
	-91,
	1,
	63,
	59,
	-108,
	32,
	75,
	-71,
	-107,
	124,
	107,
	-40,
	-80,
	90,
	-70,
	126,
	41,
	91,
	59,
	79,
	-114,
	61,
	61,
	46,
	61,
	-78,
	-21,
	-74,
	115,
	-65,
	120,
	2,
	100,
	-78,
	6,
	-108,
	-56,
	38,
	-111,
	3,
	-40,
	-69,
	-115,
	113,
	121,
	-120,
	-39,
	-76,
	1,
	-45,
	-37,
	-18,
	59,
	70,
	43,
	124,
	-121,
	46,
	-94,
	77,
	-48,
	35,
	-79,
	-25,
	3,
	-127,
	125,
	5,
	-75,
	-23,
	-125,
	-75,
	92,
	62,
	17,
	89,
	-85,
	33,
	73,
	61,
	99,
	-115,
	-34,
	-81,
	-114,
	71,
	77,
	86,
	123,
	120,
	61,
	-89,
	84,
	79,
	108,
	-47,
	-18,
	-76,
	-105,
	25,
	88,
	123,
	59,
	-5,
};

int8_t B[192]  = {
	108,
	-88,
	28,
	-114,
	-84,
	-64,
	-40,
	-58,
	-120,
	-41,
	0,
	107,
	7,
	87,
	-66,
	10,
	114,
	-48,
	7,
	34,
	34,
	-96,
	-6,
	-124,
	105,
	102,
	121,
	-88,
	-101,
	6,
	72,
	-57,
	-117,
	33,
	-96,
	-81,
	118,
	22,
	-67,
	87,
	-92,
	-30,
	43,
	-25,
	85,
	90,
	-94,
	64,
	98,
	-28,
	46,
	77,
	2,
	-128,
	-124,
	89,
	118,
	126,
	13,
	-26,
	-102,
	8,
	78,
	-114,
	-39,
	-87,
	-5,
	76,
	50,
	-66,
	-33,
	102,
	112,
	-77,
	124,
	-33,
	3,
	93,
	100,
	22,
	102,
	108,
	14,
	42,
	-100,
	-93,
	-116,
	31,
	-58,
	58,
	114,
	-43,
	-101,
	-63,
	41,
	-84,
	-67,
	56,
	116,
	5,
	-101,
	-101,
	-21,
	-85,
	-45,
	-99,
	61,
	-54,
	-1,
	121,
	118,
	-37,
	88,
	102,
	61,
	96,
	0,
	-8,
	-102,
	61,
	-8,
	-13,
	76,
	104,
	-126,
	-26,
	69,
	71,
	26,
	8,
	-67,
	36,
	96,
	-78,
	105,
	43,
	23,
	78,
	-70,
	-11,
	31,
	-33,
	87,
	104,
	51,
	-16,
	-67,
	112,
	57,
	-77,
	-117,
	125,
	-90,
	1,
	2,
	-16,
	-28,
	-16,
	55,
	-48,
	58,
	-16,
	-127,
	1,
	91,
	-75,
	-42,
	100,
	95,
	96,
	0,
	18,
	-3,
	1,
	-76,
	43,
	89,
	31,
	69,
	31,
	118,
	-61,
	54,
	74,
	55,
	-6,
	16,
	126,
	-91,
	-105,
	-60,
	-13,
};

int32_t C_golden[384]  = {
	12434,
	351,
	15700,
	-11873,
	15592,
	10855,
	16842,
	-17802,
	-24689,
	-20270,
	-6559,
	-2837,
	-30265,
	-31408,
	-2240,
	10447,
	3332,
	-30064,
	-14187,
	27194,
	-29091,
	-28440,
	-14995,
	18061,
	-23416,
	4576,
	-17143,
	9117,
	-34583,
	-15820,
	-29172,
	7947,
	-44830,
	-2048,
	-65793,
	180,
	-3113,
	10477,
	-21328,
	-21147,
	-45614,
	-26803,
	-41739,
	4452,
	-55810,
	-38996,
	-27539,
	2141,
	-10896,
	-38874,
	1339,
	-10567,
	-13721,
	-22154,
	-17490,
	-15139,
	28468,
	-10606,
	3944,
	14553,
	-6904,
	6348,
	13729,
	4398,
	22522,
	5427,
	-6953,
	-2649,
	-766,
	5571,
	-5571,
	-3849,
	-22428,
	-17060,
	12758,
	-21573,
	-18372,
	-36477,
	14336,
	-7397,
	-18667,
	16176,
	-3094,
	10823,
	289,
	5089,
	-12302,
	16368,
	-18218,
	4562,
	-17771,
	15808,
	12176,
	13206,
	-11456,
	19803,
	-23278,
	-12356,
	-4618,
	-5522,
	-7331,
	-17320,
	9515,
	636,
	-38038,
	-3451,
	-9213,
	-18131,
	-22530,
	-23998,
	785,
	8132,
	-8548,
	14296,
	-38897,
	-27246,
	-37817,
	1794,
	-28491,
	-22990,
	-6845,
	22688,
	11945,
	-10175,
	-12268,
	2427,
	9689,
	-8220,
	18323,
	5517,
	15951,
	4510,
	21367,
	-4277,
	17455,
	1875,
	-8363,
	-3743,
	596,
	-26020,
	-8800,
	8403,
	-3199,
	2743,
	-3093,
	7780,
	-27432,
	-3191,
	-19223,
	-8458,
	-275,
	-8396,
	-16671,
	-15471,
	-35340,
	5210,
	-44542,
	-19928,
	-15830,
	-4274,
	-40895,
	-11099,
	-23130,
	-20388,
	-38827,
	-1647,
	-16650,
	-29851,
	-29372,
	-14112,
	-32416,
	-32154,
	-46795,
	-10810,
	-14087,
	-16842,
	19227,
	5727,
	-16652,
	-17410,
	3951,
	-21613,
	20293,
	-32399,
	-17888,
	-10019,
	2760,
	-16369,
	2832,
	13261,
	-722,
	-1947,
	-18111,
	12392,
	25738,
	-41487,
	10170,
	-1800,
	16796,
	-22034,
	-42031,
	-16367,
	-41810,
	-33384,
	-3464,
	-4263,
	-24691,
	-39834,
	-30185,
	28181,
	-17619,
	-21157,
	14111,
	9798,
	-7663,
	-7165,
	27724,
	14224,
	19265,
	13202,
	-22795,
	12639,
	26720,
	-977,
	-42782,
	-34457,
	-33663,
	-3119,
	-57123,
	-46015,
	-20320,
	-1175,
	7899,
	-25138,
	-20261,
	8374,
	-27793,
	-19110,
	-15304,
	-167,
	-40237,
	-62753,
	-29092,
	13976,
	-44376,
	-40909,
	-55037,
	8216,
	-41741,
	-341,
	-24298,
	-39253,
	-1520,
	-2703,
	-40287,
	-29158,
	25046,
	-23714,
	-6613,
	-22196,
	-11062,
	-18386,
	2192,
	-11295,
	-8455,
	1587,
	-40553,
	-49325,
	-57244,
	-6969,
	-18776,
	-18423,
	2385,
	-27635,
	4217,
	-6322,
	164,
	-11400,
	9754,
	3019,
	9162,
	22164,
	14336,
	17442,
	25246,
	11058,
	15806,
	15851,
	-33020,
	-2949,
	-9452,
	-30840,
	-34939,
	-29998,
	-290,
	3998,
	-14096,
	33150,
	-18028,
	-23414,
	-37201,
	15456,
	-18343,
	7407,
	-64727,
	8349,
	-40419,
	-31011,
	-47771,
	-16263,
	-21523,
	-44862,
	-11737,
	1179,
	-53263,
	-48992,
	-57627,
	8936,
	-28149,
	-26245,
	29055,
	3220,
	33260,
	-1245,
	28158,
	-3786,
	15134,
	14368,
	-4713,
	236,
	-9211,
	-30575,
	-4743,
	-18723,
	-352,
	-42129,
	-5971,
	-93,
	10521,
	3566,
	-2123,
	3990,
	-16776,
	5048,
	-22211,
	-29165,
	3168,
	-390,
	-16990,
	3468,
	177,
	23528,
	-19149,
	-8862,
	-22055,
	-38359,
	-33212,
	-9869,
	-7065,
	-14807,
	-9336,
	1731,
	-18408,
	-19321,
	-8821,
	-10357,
	-6389,
	-19509,
	-20515,
	-14160,
	-60737,
	-41461,
	-43396,
	-17272,
	1097,
	-61026,
	838,
	-5800,
	-15331,
	-18902,
	-6172,
	-24121,
	-9450,
	-40739,
};

int8_t A_data_layout_golden[128]  = {
	-36,
	-114,
	-22,
	-57,
	60,
	-108,
	-26,
	-7,
	82,
	86,
	-54,
	74,
	-41,
	-12,
	-29,
	-25,
	23,
	2,
	21,
	-76,
	-127,
	-41,
	107,
	29,
	-91,
	1,
	63,
	59,
	-108,
	32,
	75,
	-71,
	-107,
	124,
	107,
	-40,
	-80,
	90,
	-70,
	126,
	41,
	91,
	59,
	79,
	-114,
	61,
	61,
	46,
	61,
	-78,
	-21,
	-74,
	115,
	-65,
	120,
	2,
	100,
	-78,
	6,
	-108,
	-56,
	38,
	-111,
	3,
	-40,
	-69,
	-115,
	113,
	121,
	-120,
	-39,
	-76,
	1,
	-45,
	-37,
	-18,
	59,
	70,
	43,
	124,
	-121,
	46,
	-94,
	77,
	-48,
	35,
	-79,
	-25,
	3,
	-127,
	125,
	5,
	-75,
	-23,
	-125,
	-75,
	92,
	62,
	17,
	89,
	-85,
	33,
	73,
	61,
	99,
	-115,
	-34,
	-81,
	-114,
	71,
	77,
	86,
	123,
	120,
	61,
	-89,
	84,
	79,
	108,
	-47,
	-18,
	-76,
	-105,
	25,
	88,
	123,
	59,
	-5,
};

int8_t B_data_layout_golden[192]  = {
	108,
	-88,
	28,
	-114,
	-84,
	-64,
	-40,
	-58,
	-120,
	-41,
	0,
	107,
	7,
	87,
	-66,
	10,
	114,
	-48,
	7,
	34,
	34,
	-96,
	-6,
	-124,
	105,
	102,
	121,
	-88,
	-101,
	6,
	72,
	-57,
	-117,
	33,
	-96,
	-81,
	118,
	22,
	-67,
	87,
	-92,
	-30,
	43,
	-25,
	85,
	90,
	-94,
	64,
	98,
	-28,
	46,
	77,
	2,
	-128,
	-124,
	89,
	118,
	126,
	13,
	-26,
	-102,
	8,
	78,
	-114,
	-39,
	-87,
	-5,
	76,
	50,
	-66,
	-33,
	102,
	112,
	-77,
	124,
	-33,
	3,
	93,
	100,
	22,
	102,
	108,
	14,
	42,
	-100,
	-93,
	-116,
	31,
	-58,
	58,
	114,
	-43,
	-101,
	-63,
	41,
	-84,
	-67,
	56,
	116,
	5,
	-101,
	-101,
	-21,
	-85,
	-45,
	-99,
	61,
	-54,
	-1,
	121,
	118,
	-37,
	88,
	102,
	61,
	96,
	0,
	-8,
	-102,
	61,
	-8,
	-13,
	76,
	104,
	-126,
	-26,
	69,
	71,
	26,
	8,
	-67,
	36,
	96,
	-78,
	105,
	43,
	23,
	78,
	-70,
	-11,
	31,
	-33,
	87,
	104,
	51,
	-16,
	-67,
	112,
	57,
	-77,
	-117,
	125,
	-90,
	1,
	2,
	-16,
	-28,
	-16,
	55,
	-48,
	58,
	-16,
	-127,
	1,
	91,
	-75,
	-42,
	100,
	95,
	96,
	0,
	18,
	-3,
	1,
	-76,
	43,
	89,
	31,
	69,
	31,
	118,
	-61,
	54,
	74,
	55,
	-6,
	16,
	126,
	-91,
	-105,
	-60,
	-13,
};
