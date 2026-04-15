#pragma once

// Function prototypes for core/dstrender.cpp
// Generated from Ghidra function signatures

// Original: core_dstrender.cpp_saveMMXRegisters_FUN_004906b0
// Address: 004906b0
void __mmx_save saveMMXRegisters(ulonglong mm0,ulonglong mm1,ulonglong mm2,ulonglong mm3,ulonglong mm4,ulonglong mm5,ulonglong mm6,ulonglong mm7);

// Original: core_dstrender.cpp_renderDepthOnlyReversed_FUN_004906e9
// Address: 004906e9
void __edi_esi_ebx renderDepthOnlyReversed(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);

// Original: core_dstrender.cpp_renderDepthOnlyStandard_FUN_0049072f
// Address: 0049072f
void __edi_esi_ebx renderDepthOnlyStandard(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);

// Original: core_dstrender.cpp_renderDepth16BitConditional_FUN_0049077d
// Address: 0049077d
void __edi_esi_ebx renderDepth16BitConditional(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);

// Original: core_dstrender.cpp_renderTexturedAlphaMMXScanline_FUN_004907e7
// Address: 004907e7
void __edi_esi_ebx renderTexturedAlphaMMXScanline(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);

// Original: core_dstrender.cpp_renderZBufferFill16xUnrolled_FUN_00490902
// Address: 00490902
void __edi_esi_ebx renderZBufferFill16xUnrolled(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);

// Original: core_dstrender.cpp_renderSolidColorDepth16xUnrolled_FUN_00490a58
// Address: 00490a58
void __edi_esi_ebx renderSolidColorDepth16xUnrolled(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);

// Original: core_dstrender.cpp_renderDepthInterlacedProfiled_FUN_00490c37
// Address: 00490c37
void __edi_esi_ebx renderDepthInterlacedProfiled(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);

// Original: core_dstrender.cpp_renderScreenDepthTestInterlacedProfiled_FUN_00490cb5
// Address: 00490cb5
void __edi_esi_ebx renderScreenDepthTestInterlacedProfiled(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);

// Original: core_dstrender.cpp_renderDepthTestStatistics16xUnrolled_FUN_00490d35
// Address: 00490d35
void __edi_esi_ebx renderDepthTestStatistics16xUnrolled(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);

// Original: core_dstrender.cpp_renderPerspectiveCorrectTextured16xCached_FUN_00490ec0
// Address: 00490ec0
void __edi_esi_ebx renderPerspectiveCorrectTextured16xCached(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);

// Original: core_dstrender.cpp_renderTexturedDecalMMXScanline_FUN_0049169d
// Address: 0049169d
void __edi_esi_ebx renderTexturedDecalMMXScanline(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);

// Original: core_dstrender.cpp_blendHBilerpLightmapSharedU64toU64pBB12Px2MMX_FUN_004917bc
// Address: 004917bc
void __cdecl blendHBilerpLightmapSharedU64toU64pBB12Px2MMX(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count);

// Original: core_dstrender.cpp_blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX_FUN_00491c9a
// Address: 00491c9a
void __cdecl blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count);

// Original: core_dstrender.cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_00491f90
// Address: 00491f90
void __cdecl blendLightmapSharedU32toU32NoBiasPx1MMX(uint *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index);

// Original: core_dstrender.cpp_memcpyMMX_FUN_00492001
// Address: 00492001
void __cdecl memcpyMMX(void *dest,void *src,int byte_count);

// Original: core_dstrender.cpp_verticalBlur3TapMMXStride320_FUN_00492042
// Address: 00492042
void __cdecl verticalBlur3TapMMXStride320(ulonglong *output_buffer,ulonglong *input_buffer,int pixel_count);

// Original: core_dstrender.cpp_verticalBlur3TapMMXStride256_FUN_00492185
// Address: 00492185
void __cdecl verticalBlur3TapMMXStride256(ulonglong *output_buffer,ulonglong *input_buffer,int pixel_count);

// Original: core_dstrender.cpp_blur3x3MMXStride128_FUN_004922c8
// Address: 004922c8
void __cdecl blur3x3MMXStride128(ulonglong *output_buffer,ulonglong *input_buffer,int pixel_count);

// Original: core_dstrender.cpp_spatialFilter9TapMMX_FUN_004923ff
// Address: 004923ff
void __cdecl spatialFilter9TapMMX(uint *output_buffer,uint *input_buffer,int pixel_count);

// Original: core_dstrender.cpp_blendLightmapShared4U64toU64pBB12Px4MMX_FUN_004924a9
// Address: 004924a9
void __cdecl blendLightmapShared4U64toU64pBB12Px4MMX(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count);

// Original: core_dstrender.cpp_blendLightmapShared4U64toU64pAmbientPx4MMX_FUN_004925c5
// Address: 004925c5
void __cdecl blendLightmapShared4U64toU64pAmbientPx4MMX(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count);

// Original: core_dstrender.cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_004926e1
// Address: 004926e1
void __cdecl blendLightmapPerPxU32toU32BB12Px2MMX(uint *output_buffer,uint *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count);

// Original: core_dstrender.cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_00492bd5
// Address: 00492bd5
void __cdecl blendLightmapPerPxU64toU32AmbientPx2MMX(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count);

// Original: core_dstrender.cpp_alphaBlendPixelsMMX_FUN_00492e8a
// Address: 00492e8a
void __cdecl alphaBlendPixelsMMX(uint *output_buffer,uint *source1_buffer,uint *source2_buffer,uint alpha1,uint alpha2,int pixel_count);

// Original: core_dstrender.cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00492f03
// Address: 00492f03
void __cdecl blendHBilerpLightmapSharedU64toU16pBB56Px2MMX(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count);

// Original: core_dstrender.cpp_blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX_FUN_00493450
// Address: 00493450
void __cdecl blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count);

// Original: core_dstrender.cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_004937b6
// Address: 004937b6
void __cdecl blendLightmapSharedU32toU16pNoBiasPx1MMX(ushort *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index);

// Original: core_dstrender.cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00493860
// Address: 00493860
void __cdecl blendLightmapPerPxU32toU16pBB12Px2MMX(uint *output_buffer,uint *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count);

// Original: core_dstrender.cpp_blendLightmapPerPxU64toU16pAmbientPx2MMX_FUN_00493dc4
// Address: 00493dc4
void __cdecl blendLightmapPerPxU64toU16pAmbientPx2MMX(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count);

// Original: core_dstrender.cpp_renderPerspectiveTexturedScanline_FUN_004940e9
// Address: 004940e9
void __edi_esi_ebx renderPerspectiveTexturedScanline(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y);
