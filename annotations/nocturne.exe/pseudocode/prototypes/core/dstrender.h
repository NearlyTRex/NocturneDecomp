#pragma once

// Function prototypes for core/dstrender.cpp
// Generated from Ghidra function signatures

// Original: core_dstrender.cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_00464afc
// Address: 00464afc
void __cdecl blendHBilerpLightmapSharedU64toU64pBB12Px2MMX(undefined8 *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5);

// Original: core_dstrender.cpp_blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX_FUN_00464fda
// Address: 00464fda
void __cdecl blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX(undefined8 *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5);

// Original: core_dstrender.cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_004652d0
// Address: 004652d0
void __cdecl blendLightmapSharedU32toU32NoBiasPx1MMX(undefined4 *param_1,undefined4 *param_2,byte *param_3,byte *param_4);

// Original: core_dstrender.cpp_memcpyMMX_FUN_00465341
// Address: 00465341
undefined4 memcpyMMX(uint param_1,uint param_2,uint param_3);

// Original: core_dstrender.cpp_verticalBlur3TapMMXStride320_FUN_00465382
// Address: 00465382
void __cdecl verticalBlur3TapMMXStride320(undefined8 *param_1,undefined8 *param_2,int param_3);

// Original: core_dstrender.cpp_spatialFilter9TapMMX_FUN_004654c5
// Address: 004654c5
void spatialFilter9TapMMX(undefined4 *param_1,undefined4 *param_2,int param_3);

// Original: core_dstrender.cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_004657a7
// Address: 004657a7
void __cdecl blendLightmapPerPxU32toU32BB12Px2MMX(undefined4 *param_1,undefined4 *param_2,byte *param_3,byte *param_4,int param_5);

// Original: core_dstrender.cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_00465c9b
// Address: 00465c9b
void __cdecl blendLightmapPerPxU64toU32AmbientPx2MMX(undefined4 *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5);

// Original: core_dstrender.cpp_alphaBlendPixelsMMX_FUN_00465f50
// Address: 00465f50
void __cdecl alphaBlendPixelsMMX(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,int param_6);

// Original: core_dstrender.cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00465fc9
// Address: 00465fc9
void __cdecl blendHBilerpLightmapSharedU64toU16pBB56Px2MMX(uint *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5);

// Original: core_dstrender.cpp_blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX_FUN_00466520
// Address: 00466520
void __cdecl blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX(uint *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5);

// Original: core_dstrender.cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_00466886
// Address: 00466886
void __cdecl blendLightmapSharedU32toU16pNoBiasPx1MMX(ushort *param_1,undefined4 *param_2,byte *param_3,byte *param_4);

// Original: core_dstrender.cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00466930
// Address: 00466930
void __cdecl blendLightmapPerPxU32toU16pBB12Px2MMX(uint *param_1,undefined4 *param_2,byte *param_3,byte *param_4,int param_5);

// Original: core_dstrender.cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_00466e94
// Address: 00466e94
void __cdecl blendLightmapPerPxU64toU16pAmbientPx2MMX(uint *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5);
