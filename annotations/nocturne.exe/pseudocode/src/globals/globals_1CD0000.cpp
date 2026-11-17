#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x1CD0000
// =============================================================================

// SHuffmanTable[34]
SHuffmanTable g_HuffmanTables[34] = {};

// char[256]
char g_CurrentMp3Filename[256] = {};

// double[12][6]
double g_Mp3DctMatrix[12][6] = {};

// double[200]
double g_MpegRequantPowerTable[200] = {};
double g_MpegRequantGainTable[200] = {};

// double[36][18]
double g_Mp3PolyCoefficients[36][18] = {};

// double[4][36]
double g_Mp3WindowTables[4][36] = {};

// double[8]
double g_Mp3AntiAliasCS[8] = {};
double g_Mp3AntiAliasCA[8] = {};

// float[64][32]
float g_MpegSynthesisDctTable[64][32] = {};

// int
int g_MorphReverseWinding = {};
int g_RenderMotionDebug = {};
int g_HuffmanTablesInitialized = {};
int g_MpegRequantTablesInitialized = {};

