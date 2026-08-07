#pragma once

// Function prototypes for engine/special.cpp
// Generated from Ghidra function signatures

// Original: engine_special.cpp_clearScreen_FUN_0052ee70
// Address: 0052ee70
void __cdecl clearScreen(void);

// Original: engine_special.cpp_clearZBufferNative_FUN_0052eed4
// Address: 0052eed4
void __cdecl clearZBufferNative(void);

// Original: engine_special.cpp_clearScreenRegion_FUN_0052ef37
// Address: 0052ef37
void __cdecl clearScreenRegion(int color);

// Original: engine_special.cpp_fillDepthRegion_FUN_0052efc2
// Address: 0052efc2
void __cdecl fillDepthRegion(int left,int right,int top,int bottom);

// Original: engine_special.cpp_renderMMXPerspectiveScanline32_FUN_0052f031
// Address: 0052f031
void __edi_esi_ebx renderMMXPerspectiveScanline32(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y);

// Original: engine_special.cpp_renderMMXPerspectiveScanline16_FUN_0052f823
// Address: 0052f823
void __edi_esi_ebx renderMMXPerspectiveScanline16(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y);

// Original: engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_005300ec
// Address: 005300ec
void __edi_esi_ebx renderPerspectiveCorrectScanline32(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y);

// Original: engine_special.cpp_renderPerspectiveCorrectScanline16_FUN_00530322
// Address: 00530322
void __edi_esi_ebx renderPerspectiveCorrectScanline16(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y);

// Original: engine_special.cpp_renderAlphaRow32_FUN_0053055c
// Address: 0053055c
void __cdecl renderAlphaRow32(uint *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount);

// Original: engine_special.cpp_renderAlphaRow16_FUN_005305f7
// Address: 005305f7
void __cdecl renderAlphaRow16(ushort *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount);

// Original: engine_special.cpp_renderScanline_FUN_00530710
// Address: 00530710
void __edi_esi_ebx renderScanline(SSoftwareEdge *left,SSoftwareEdge *right,int scanline_y);

// Original: engine_special.cpp_renderScanlineSwapped_FUN_00530716
// Address: 00530716
void __cdecl renderScanlineSwapped(int scanline_y,SHardwareEdge *right,SHardwareEdge *left);

// Original: engine_special.cpp_transformAndProjectPoint_FUN_0053075c
// Address: 0053075c
void __cdecl transformAndProjectPoint(SProjectedVertex *output,CVector3i *input);

// Original: engine_special.cpp_transformPoint_FUN_00530a25
// Address: 00530a25
int __cdecl transformPoint(SProjectedVertex *output,CVector3i *input);

// Original: engine_special.cpp_FUN_00530cf0
// Address: 00530cf0
void FUN_00530cf0(int *param_1,int param_2);

// Original: engine_special.cpp_FUN_00530d30
// Address: 00530d30
void FUN_00530d30(void);

// Original: engine_special.cpp_FUN_00530d40
// Address: 00530d40
void FUN_00530d40(void);

// Original: engine_special.cpp_FUN_00530e60
// Address: 00530e60
undefined4 FUN_00530e60(void);

// Original: engine_special.cpp_loadExternalRenderer_FUN_00531780
// Address: 00531780
int __cdecl loadExternalRenderer(HWND window_handle);

// Original: engine_special.cpp_kill_FUN_005322b0
// Address: 005322b0
int __cdecl kill(void);

// Original: engine_special.cpp_lockFrame_FUN_005322e0
// Address: 005322e0
int __cdecl lockFrame(void);

// Original: engine_special.cpp_FUN_00532320
// Address: 00532320
undefined4 FUN_00532320(void);

// Original: engine_special.cpp_beginScene_FUN_00532340
// Address: 00532340
int __cdecl beginScene(void);

// Original: engine_special.cpp_endScene_FUN_00532360
// Address: 00532360
int __cdecl endScene(void);

// Original: engine_special.cpp_FUN_00532380
// Address: 00532380
undefined4 FUN_00532380(void);

// Original: engine_special.cpp_FUN_005323c0
// Address: 005323c0
undefined4 FUN_005323c0(void);

// Original: engine_special.cpp_selectTexture_FUN_00532400
// Address: 00532400
int __cdecl selectTexture(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data);

// Original: engine_special.cpp_updateTexture_FUN_00532440
// Address: 00532440
int __cdecl updateTexture(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data);

// Original: engine_special.cpp_FUN_00532480
// Address: 00532480
undefined4 FUN_00532480(void);

// Original: engine_special.cpp_setResolutionAndColorTable_FUN_005324a0
// Address: 005324a0
int __cdecl setResolutionAndColorTable(int width,int height,int bits_per_pixel);

// Original: engine_special.cpp_FUN_005325c0
// Address: 005325c0
int FUN_005325c0(void);

// Original: engine_special.cpp_restoreVideoMode_FUN_005325f0
// Address: 005325f0
int __cdecl restoreVideoMode(void);

// Original: engine_special.cpp_drawPolygon_FUN_00532620
// Address: 00532620
int __cdecl drawPolygon(SRenderVertex *vertices,int vertex_count,int render_flags);

// Original: engine_special.cpp_drawPolygon2_FUN_00532650
// Address: 00532650
int __cdecl drawPolygon2(SRenderVertex **vertex_array,int vertex_count,int render_flags);

// Original: engine_special.cpp_drawPolyList_FUN_00532680
// Address: 00532680
int __cdecl drawPolyList(SRenderVertex *vertex_buffer,SMRGLPrimitiveTriangle **polygons,int polygon_count,int render_flags);

// Original: engine_special.cpp_drawPolyList2_FUN_005327c0
// Address: 005327c0
int __cdecl drawPolyList2(SRenderVertex *vertex_buffer,ushort **polygons,int polygon_count,int render_flags);

// Original: engine_special.cpp_FUN_00532900
// Address: 00532900
undefined4 FUN_00532900(void);

// Original: engine_special.cpp_FUN_00532930
// Address: 00532930
undefined4 FUN_00532930(void);

// Original: engine_special.cpp_FUN_00532950
// Address: 00532950
undefined4 FUN_00532950(void);

// Original: engine_special.cpp_FUN_00532980
// Address: 00532980
undefined4 FUN_00532980(void);

// Original: engine_special.cpp_clear_FUN_005329a0
// Address: 005329a0
int __cdecl clear(void);

// Original: engine_special.cpp_drawFullScreenQuad_FUN_005329c0
// Address: 005329c0
int __cdecl drawFullScreenQuad(int color);

// Original: engine_special.cpp_setFogColorFromPalette_FUN_00532a80
// Address: 00532a80
int __cdecl setFogColorFromPalette(int palette_index);

// Original: engine_special.cpp_setFogColor_FUN_00532af0
// Address: 00532af0
int __cdecl setFogColor(int red,int green,int blue);

// Original: engine_special.cpp_sync_FUN_00532b30
// Address: 00532b30
int __cdecl sync(void);

// Original: engine_special.cpp_clearZBuffer_FUN_00532b50
// Address: 00532b50
int __cdecl clearZBuffer(void);

// Original: engine_special.cpp_clearZBox_FUN_00532b70
// Address: 00532b70
int __cdecl clearZBox(int left,int right,int top,int bottom);

// Original: engine_special.cpp_FUN_00532ba0
// Address: 00532ba0
undefined4 FUN_00532ba0(void);

// Original: engine_special.cpp_masterZBuffer_FUN_00532c70
// Address: 00532c70
int __cdecl masterZBuffer(int z_buffer_mode);

// Original: engine_special.cpp_restoreZBuffer_FUN_00532c90
// Address: 00532c90
int __cdecl restoreZBuffer(int left,int top,int mode,int right,int bottom);

// Original: engine_special.cpp_FUN_00532cd0
// Address: 00532cd0
undefined4 FUN_00532cd0(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// Original: engine_special.cpp_selectCard_FUN_00532d00
// Address: 00532d00
int __cdecl selectCard(int card_index);

// Original: engine_special.cpp_FUN_00532d20
// Address: 00532d20
undefined4 FUN_00532d20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);

// Original: engine_special.cpp_lockHoldBuffer_FUN_00532d60
// Address: 00532d60
int __cdecl lockHoldBuffer(void);

// Original: engine_special.cpp_unlockHoldBuffer_FUN_00532d80
// Address: 00532d80
int __cdecl unlockHoldBuffer(void);

// Original: engine_special.cpp_CExternalRenderer_ctor_FUN_00532da0
// Address: 00532da0
void __cdecl CExternalRenderer::ctor(CExternalRenderer *this_ptr);

// Original: engine_special.cpp_CExternalRenderer_validate_FUN_00532df0
// Address: 00532df0
int __cdecl CExternalRenderer::validate(CExternalRenderer *this_ptr,CExternalRenderer *capabilities);

// Original: engine_special.cpp_FUN_00532f30
// Address: 00532f30
void FUN_00532f30(void);

// Original: engine_special.cpp_FUN_00532f50
// Address: 00532f50
void FUN_00532f50(char *param_1,undefined4 param_2);

// Original: engine_special.cpp_FUN_00532fa0
// Address: 00532fa0
undefined1 * FUN_00532fa0(void);
