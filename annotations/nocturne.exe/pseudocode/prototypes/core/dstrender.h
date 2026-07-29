#pragma once

// Function prototypes for core/dstrender.cpp
// Generated from Ghidra function signatures

// Original: core_dstrender.cpp_saveMMXRegisters_FUN_00463a40
// Address: 00463a40
void saveMMXRegisters(void);

// Original: core_dstrender.cpp_renderDepthOnlyStandard_FUN_00463a79
// Address: 00463a79
void renderDepthOnlyStandard(void);

// Original: core_dstrender.cpp_renderDepth16BitConditional_FUN_00463ac7
// Address: 00463ac7
void renderDepth16BitConditional(void);

// Original: core_dstrender.cpp_renderTexturedAlphaMMXScanline_FUN_00463b27
// Address: 00463b27
void renderTexturedAlphaMMXScanline(void);

// Original: core_dstrender.cpp_renderZBufferFill16xUnrolled_FUN_00463c42
// Address: 00463c42
uint renderZBufferFill16xUnrolled(void);

// Original: core_dstrender.cpp_renderSolidColorDepth16xUnrolled_FUN_00463d98
// Address: 00463d98
void renderSolidColorDepth16xUnrolled(void);

// Original: core_dstrender.cpp_renderDepthInterlacedProfiled_FUN_00463f77
// Address: 00463f77
void renderDepthInterlacedProfiled(void);

// Original: core_dstrender.cpp_renderScreenDepthTestInterlacedProfiled_FUN_00463ff5
// Address: 00463ff5
void renderScreenDepthTestInterlacedProfiled(void);

// Original: core_dstrender.cpp_renderDepthTestStatistics16xUnrolled_FUN_00464075
// Address: 00464075
void renderDepthTestStatistics16xUnrolled(void);

// Original: core_dstrender.cpp_renderPerspectiveCorrectTextured16xCached_FUN_00464200
// Address: 00464200
void renderPerspectiveCorrectTextured16xCached(void);

// Original: core_dstrender.cpp_renderTexturedDecalMMXScanline_FUN_004649dd
// Address: 004649dd
void renderTexturedDecalMMXScanline(void);

// Original: core_dstrender.cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_00464afc
// Address: 00464afc
void __cdecl blendHBilerpLightmapSharedU64toU64pBB12Px2MMX(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count);

// Original: core_dstrender.cpp_blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX_FUN_00464fda
// Address: 00464fda
void __cdecl blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count);

// Original: core_dstrender.cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_004652d0
// Address: 004652d0
void __cdecl blendLightmapSharedU32toU32NoBiasPx1MMX(uint *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index);

// Original: core_dstrender.cpp_memcpyMMX_FUN_00465341
// Address: 00465341
void __cdecl memcpyMMX(void *dest,void *src,int byte_count);

// Original: core_dstrender.cpp_verticalBlur3TapMMXStride320_FUN_00465382
// Address: 00465382
void __cdecl verticalBlur3TapMMXStride320(ulonglong *output_buffer,ulonglong *input_buffer,int pixel_count);

// Original: core_dstrender.cpp_spatialFilter9TapMMX_FUN_004654c5
// Address: 004654c5
void __cdecl spatialFilter9TapMMX(uint *output_buffer,uint *input_buffer,int pixel_count);

// Original: core_dstrender.cpp_FUN_0046556f
// Address: 0046556f
void FUN_0046556f(undefined8 *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5);

// Original: core_dstrender.cpp_FUN_0046568b
// Address: 0046568b
void FUN_0046568b(undefined8 *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5);

// Original: core_dstrender.cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_004657a7
// Address: 004657a7
void __cdecl blendLightmapPerPxU32toU32BB12Px2MMX(uint *output_buffer,uint *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count);

// Original: core_dstrender.cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_00465c9b
// Address: 00465c9b
void __cdecl blendLightmapPerPxU64toU32AmbientPx2MMX(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count);

// Original: core_dstrender.cpp_alphaBlendPixelsMMX_FUN_00465f50
// Address: 00465f50
void __cdecl alphaBlendPixelsMMX(uint *output_buffer,uint *source1_buffer,uint *source2_buffer,uint alpha1,uint alpha2,int pixel_count);

// Original: core_dstrender.cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00465fc9
// Address: 00465fc9
void __cdecl blendHBilerpLightmapSharedU64toU16pBB56Px2MMX(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count);

// Original: core_dstrender.cpp_blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX_FUN_00466520
// Address: 00466520
void __cdecl blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count);

// Original: core_dstrender.cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_00466886
// Address: 00466886
void __cdecl blendLightmapSharedU32toU16pNoBiasPx1MMX(ushort *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index);

// Original: core_dstrender.cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00466930
// Address: 00466930
void __cdecl blendLightmapPerPxU32toU16pBB12Px2MMX(uint *output_buffer,uint *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count);

// Original: core_dstrender.cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_00466e94
// Address: 00466e94
void __cdecl blendLightmapPerPxU64toU16pAmbientPx2MMX(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count);
