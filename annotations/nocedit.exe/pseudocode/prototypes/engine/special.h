#pragma once

// Function prototypes for engine/special.cpp
// Generated from Ghidra function signatures

// Original: engine_special.cpp_clearScreen_FUN_005b3e70
// Address: 005b3e70
void __cdecl clearScreen(void);

// Original: engine_special.cpp_clearZBufferNative_FUN_005b3ed4
// Address: 005b3ed4
void __cdecl clearZBufferNative(void);

// Original: engine_special.cpp_clearScreenRegion_FUN_005b3f37
// Address: 005b3f37
void __cdecl clearScreenRegion(int color);

// Original: engine_special.cpp_fillDepthRegion_FUN_005b3fc2
// Address: 005b3fc2
void __cdecl fillDepthRegion(int left,int right,int top,int bottom);

// Original: engine_special.cpp_renderMMXPerspectiveScanline32_FUN_005b4031
// Address: 005b4031
void __edi_esi_ebx renderMMXPerspectiveScanline32(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y);

// Original: engine_special.cpp_renderMMXPerspectiveScanline16_FUN_005b4823
// Address: 005b4823
void __edi_esi_ebx renderMMXPerspectiveScanline16(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y);

// Original: engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec
// Address: 005b50ec
void __edi_esi_ebx renderPerspectiveCorrectScanline32(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y);

// Original: engine_special.cpp_renderPerspectiveCorrectScanline16_FUN_005b5322
// Address: 005b5322
void __edi_esi_ebx renderPerspectiveCorrectScanline16(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y);

// Original: engine_special.cpp_renderAlphaRow32_FUN_005b555c
// Address: 005b555c
void __cdecl renderAlphaRow32(uint *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount);

// Original: engine_special.cpp_renderAlphaRow16_FUN_005b55f7
// Address: 005b55f7
void __cdecl renderAlphaRow16(ushort *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount);

// Original: engine_special.cpp_renderScanline_FUN_005b5710
// Address: 005b5710
void __edi_esi_ebx renderScanline(SSoftwareEdge *left,SSoftwareEdge *right,int scanline_y);

// Original: engine_special.cpp_renderScanlineSwapped_FUN_005b5716
// Address: 005b5716
void __cdecl renderScanlineSwapped(int scanline_y,SHardwareEdge *right,SHardwareEdge *left);

// Original: engine_special.cpp_transformAndProjectPoint_FUN_005b575c
// Address: 005b575c
void __cdecl transformAndProjectPoint(SProjectedVertex *output,CVector3i *input);

// Original: engine_special.cpp_transformPoint_FUN_005b5a25
// Address: 005b5a25
void __cdecl transformPoint(SProjectedVertex *output,CVector3i *input);

// Original: engine_special.cpp_bindRequiredDllFunction_FUN_005b5cf0
// Address: 005b5cf0
void __cdecl bindRequiredDllFunction(void **slot,void *proc);

// Original: engine_special.cpp_bindDllFunction_FUN_005b5d10
// Address: 005b5d10
void __cdecl bindDllFunction(void **slot,void *proc);

// Original: engine_special.cpp_shutdownExternalRenderer_FUN_005b5d20
// Address: 005b5d20
void __cdecl shutdownExternalRenderer(void);

// Original: engine_special.cpp_initializeExternalRenderer_FUN_005b5ec0
// Address: 005b5ec0
int __cdecl initializeExternalRenderer(void);

// Original: engine_special.cpp_loadExternalRenderer_FUN_005b6750
// Address: 005b6750
int __cdecl loadExternalRenderer(HWND window_handle);

// Original: engine_special.cpp_kill_FUN_005b71e0
// Address: 005b71e0
int __cdecl kill(void);

// Original: engine_special.cpp_isExternalRendererActive_FUN_005b7200
// Address: 005b7200
int __cdecl isExternalRendererActive(void);

// Original: engine_special.cpp_lockFrame_FUN_005b7210
// Address: 005b7210
int __cdecl lockFrame(void);

// Original: engine_special.cpp_unlockFrame_FUN_005b7250
// Address: 005b7250
int __cdecl unlockFrame(int clear_lock_flag);

// Original: engine_special.cpp_beginScene_FUN_005b7280
// Address: 005b7280
int __cdecl beginScene(void);

// Original: engine_special.cpp_endScene_FUN_005b72a0
// Address: 005b72a0
int __cdecl endScene(void);

// Original: engine_special.cpp_selectTextureGlobal_FUN_005b72c0
// Address: 005b72c0
int __cdecl selectTextureGlobal(SMRGLTextureBasic *texture_info);

// Original: engine_special.cpp_updateTextureGlobal_FUN_005b7300
// Address: 005b7300
int __cdecl updateTextureGlobal(SMRGLTextureBasic *texture_info);

// Original: engine_special.cpp_selectTexture_FUN_005b7340
// Address: 005b7340
int __cdecl selectTexture(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data);

// Original: engine_special.cpp_updateTexture_FUN_005b7380
// Address: 005b7380
int __cdecl updateTexture(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data);

// Original: engine_special.cpp_selectTextureBGRA_FUN_005b73c0
// Address: 005b73c0
int __cdecl selectTextureBGRA(SMRGLTextureBasic *texture_info,int flags);

// Original: engine_special.cpp_updateTextureBGRA_FUN_005b7400
// Address: 005b7400
int __cdecl updateTextureBGRA(SMRGLTextureBasic *texture_info,int flags);

// Original: engine_special.cpp_setMipMapLevel_FUN_005b7440
// Address: 005b7440
int __cdecl setMipMapLevel(int mipmap_level);

// Original: engine_special.cpp_setResolutionAndColorTable_FUN_005b7460
// Address: 005b7460
int __cdecl setResolutionAndColorTable(int width,int height,int bits_per_pixel);

// Original: engine_special.cpp_setColorTable16_FUN_005b7580
// Address: 005b7580
int __cdecl setColorTable16(void);

// Original: engine_special.cpp_restoreVideoMode_FUN_005b75b0
// Address: 005b75b0
int __cdecl restoreVideoMode(void);

// Original: engine_special.cpp_drawPolygon_FUN_005b75e0
// Address: 005b75e0
int __cdecl drawPolygon(SRenderVertex *vertices,int vertex_count,int render_flags);

// Original: engine_special.cpp_drawPolygon2_FUN_005b7610
// Address: 005b7610
int __cdecl drawPolygon2(SRenderVertex **vertex_array,int vertex_count,int render_flags);

// Original: engine_special.cpp_drawPolyList_FUN_005b7640
// Address: 005b7640
int __cdecl drawPolyList(SRenderVertex *vertex_buffer,SMRGLPrimitiveQuad **polygons,int polygon_count,int render_flags);

// Original: engine_special.cpp_drawPolyList2_FUN_005b7780
// Address: 005b7780
int __cdecl drawPolyList2(SRenderVertex *vertex_buffer,SInputFace **polygons,int polygon_count,int render_flags);

// Original: engine_special.cpp_drawPolyList3_FUN_005b78c0
// Address: 005b78c0
int __cdecl drawPolyList3(SRenderVertex *vertex_buffer,STrianglePackedIndices *polygons,int polygon_count,int render_flags);

// Original: engine_special.cpp_addParticle_FUN_005b7990
// Address: 005b7990
int __cdecl addParticle(void *particle_data,int particle_type);

// Original: engine_special.cpp_flushParticleList_FUN_005b79c0
// Address: 005b79c0
int __cdecl flushParticleList(void);

// Original: engine_special.cpp_add3dLine_FUN_005b79e0
// Address: 005b79e0
int __cdecl add3dLine(void *start_point,void *end_point,int line_style);

// Original: engine_special.cpp_flushLineList_FUN_005b7a10
// Address: 005b7a10
int __cdecl flushLineList(void);

// Original: engine_special.cpp_clear_FUN_005b7a30
// Address: 005b7a30
int __cdecl clear(void);

// Original: engine_special.cpp_drawFullScreenQuad_FUN_005b7a50
// Address: 005b7a50
int __cdecl drawFullScreenQuad(int color);

// Original: engine_special.cpp_setFogColorFromPalette_FUN_005b7b10
// Address: 005b7b10
int __cdecl setFogColorFromPalette(int palette_index);

// Original: engine_special.cpp_setFogColor_FUN_005b7b80
// Address: 005b7b80
int __cdecl setFogColor(int red,int green,int blue);

// Original: engine_special.cpp_sync_FUN_005b7bc0
// Address: 005b7bc0
int __cdecl sync(void);

// Original: engine_special.cpp_clearZBuffer_FUN_005b7be0
// Address: 005b7be0
int __cdecl clearZBuffer(void);

// Original: engine_special.cpp_clearZBox_FUN_005b7c00
// Address: 005b7c00
int __cdecl clearZBox(int left,int right,int top,int bottom);

// Original: engine_special.cpp_presentToExternalRenderer_FUN_005b7c30
// Address: 005b7c30
void __cdecl presentToExternalRenderer(int skip_buffer_copy);

// Original: engine_special.cpp_masterZBuffer_FUN_005b7d00
// Address: 005b7d00
int __cdecl masterZBuffer(int z_buffer_mode);

// Original: engine_special.cpp_restoreZBuffer_FUN_005b7d20
// Address: 005b7d20
int __cdecl restoreZBuffer(int left,int top,int mode,int right,int bottom);

// Original: engine_special.cpp_getVideoMemory_FUN_005b7d60
// Address: 005b7d60
int __cdecl getVideoMemory(int *total_memory,int *available_memory,int *memory_type);

// Original: engine_special.cpp_selectCard_FUN_005b7d90
// Address: 005b7d90
int __cdecl selectCard(int card_index);

// Original: engine_special.cpp_buildCardList_FUN_005b7db0
// Address: 005b7db0
int __cdecl buildCardList(int *out_card_count,char **out_driver_names,char **out_card_names,int *out_vendor_ids ,int *out_device_ids);

// Original: engine_special.cpp_lockHoldBuffer_FUN_005b7df0
// Address: 005b7df0
int __cdecl lockHoldBuffer(void);

// Original: engine_special.cpp_unlockHoldBuffer_FUN_005b7e10
// Address: 005b7e10
int __cdecl unlockHoldBuffer(void);

// Original: engine_special.cpp_lockTexture_FUN_005b7e30
// Address: 005b7e30
int __cdecl lockTexture(int texture_id);

// Original: engine_special.cpp_unlockTexture_FUN_005b7e50
// Address: 005b7e50
int __cdecl unlockTexture(void);

// Original: engine_special.cpp_getTextureInfo_FUN_005b7e70
// Address: 005b7e70
int __cdecl getTextureInfo(int texture_size);

// Original: engine_special.cpp_setVideoModeX_FUN_005b7e90
// Address: 005b7e90
int __cdecl setVideoModeX(int width,int height,int bits_per_pixel,int flags);

// Original: engine_special.cpp_restoreVideoModeX_FUN_005b7ee0
// Address: 005b7ee0
int __cdecl restoreVideoModeX(void);

// Original: engine_special.cpp_lockFrameX_FUN_005b7f10
// Address: 005b7f10
int __cdecl lockFrameX(void);

// Original: engine_special.cpp_unlockFrameX_FUN_005b7f40
// Address: 005b7f40
int __cdecl unlockFrameX(void);

// Original: engine_special.cpp_toggleX_FUN_005b7f70
// Address: 005b7f70
int __cdecl toggleX(void);

// Original: engine_special.cpp_CExternalRenderer_ctor_FUN_005b7f90
// Address: 005b7f90
void __cdecl CExternalRenderer::ctor(CExternalRenderer *this_ptr);

// Original: engine_special.cpp_CExternalRenderer_validate_FUN_005b7fe0
// Address: 005b7fe0
int __cdecl CExternalRenderer::validate(CExternalRenderer *this_ptr,CExternalRenderer *capabilities);

// Original: engine_special.cpp_CExternalRenderer_switchRenderer_FUN_005b8120
// Address: 005b8120
int __cdecl CExternalRenderer::switchRenderer(CExternalRenderer *this_ptr,int renderer_handle);

// Original: engine_special.cpp_switchRenderer_FUN_005b8140
// Address: 005b8140
int __cdecl switchRenderer(char *new_dll_name,int renderer_handle);

// Original: engine_special.cpp_getCurrentRenderer_FUN_005b8190
// Address: 005b8190
char * __cdecl getCurrentRenderer(int *renderer_handle);
