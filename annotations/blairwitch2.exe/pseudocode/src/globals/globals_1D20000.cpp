#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1D20000
// =============================================================================

// SHuffmanTable[34]
SHuffmanTable g_HuffmanTables[34] = {};

// char[256]
char g_CurrentMp3Filename[256] = {};

// double[12][6]
double g_Mp3DctMatrix[12][6] = {};

// double[36][18]
double g_Mp3PolyCoefficients[36][18] = {};

// double[4][36]
double g_Mp3WindowTables[4][36] = {};

// double[8]
double g_Mp3AntiAliasCS[8] = {};
double g_Mp3AntiAliasCA[8] = {};

// float
float g_FLOAT_01d207d8 = {};

