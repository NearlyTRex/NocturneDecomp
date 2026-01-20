#pragma once

// Type dependencies
#include "system/basetypes.h"

// =============================================================================
// GLOBAL VARIABLES - Range 0x2F40000
// =============================================================================

// char[131072]
extern char g_MpegPCMDecodeTestBuffer[131072];

// double[12][6]
extern double g_Mp3DctMatrix[12][6];

// double[200]
extern double g_MpegRequantPowerTable[200];
extern double g_MpegRequantGainTable[200];

// double[36][18]
extern double g_Mp3PolyCoefficients[36][18];

// double[4][36]
extern double g_Mp3WindowTables[4][36];

// double[8]
extern double g_Mp3AntiAliasCS[8];
extern double g_Mp3AntiAliasCA[8];

// float[64][32]
extern float g_MpegSynthesisDctTable[64][32];

// int
extern int g_HuffmanTablesInitialized;
extern int g_MpegRequantTablesInitialized;

// undefined4
extern undefined4 DAT_02f43974;
extern undefined4 DAT_02f43978;

