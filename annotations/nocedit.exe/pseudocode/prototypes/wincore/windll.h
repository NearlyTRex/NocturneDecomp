#pragma once

// Function prototypes for wincore/windll.cpp
// Generated from Ghidra function signatures

// Original: wincore_windll.cpp_clearScreen_FUN_005b3e70
// Address: 005b3e70
void clearScreen(void);

// Original: wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
// Address: 005b3ed4
void clearZBuffer(void);

// Original: wincore_windll.cpp_clearScreen_FUN_005b3f37
// Address: 005b3f37
void clearScreen(int color);

// Original: wincore_windll.cpp_fillDepthRegion_FUN_005b3fc2
// Address: 005b3fc2
void fillDepthRegion(int left, int right, int top, int bottom);

// Original: wincore_windll.cpp_renderMMXPerspectiveScanline32_FUN_005b4031
// Address: 005b4031
void renderMMXPerspectiveScanline32(STexturedVertex * left_vertex, STexturedVertex * right_vertex, int scanline_y);

// Original: wincore_windll.cpp_renderMMXPerspectiveScanline16_FUN_005b4823
// Address: 005b4823
void renderMMXPerspectiveScanline16(STexturedVertex * left_vertex, STexturedVertex * right_vertex, int scanline_y);

// Original: wincore_windll.cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec
// Address: 005b50ec
void renderPerspectiveCorrectScanline32(STexturedVertex * left_vertex, STexturedVertex * right_vertex, int scanline_y);

// Original: wincore_windll.cpp_renderPerspectiveCorrectScanline16_FUN_005b5322
// Address: 005b5322
void renderPerspectiveCorrectScanline16(STexturedVertex * left_vertex, STexturedVertex * right_vertex, int scanline_y);

// Original: wincore_windll.cpp_renderAlphaRow32_FUN_005b555c
// Address: 005b555c
void renderAlphaRow32(uint * destPixels, uchar * srcIndices, uchar * srcAlpha, int globalAlpha, int pixelCount);

// Original: wincore_windll.cpp_renderAlphaRow16_FUN_005b55f7
// Address: 005b55f7
void renderAlphaRow16(ushort * destPixels, uchar * srcIndices, uchar * srcAlpha, int globalAlpha, int pixelCount);

// Original: wincore_windll.cpp_renderScanline_FUN_005b5710
// Address: 005b5710
void renderScanline(void * left_data, void * right_data, int scanline_y);

// Original: wincore_windll.cpp_renderScanlineSaved_FUN_005b5716
// Address: 005b5716
void renderScanlineSaved(void * scanline_data, int scanline_y, int render_flags);

// Original: wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
// Address: 005b575c
void transformAndProjectPoint(SProjectedVertex * output, CVector3i * input);

// Original: wincore_windll.cpp_transformPoint_FUN_005b5a25
// Address: 005b5a25
int transformPoint(SProjectedVertex * output, CVector3i * input);

// Original: wincore_windll.cpp_CExternalRenderer_setProcessingDataAndValidate_FUN_005b5cf0
// Address: 005b5cf0
void CExternalRenderer::setProcessingDataAndValidate(CExternalRenderer * this_ptr, char * data);

// Original: wincore_windll.cpp_CExternalRenderer_setProcessingData_FUN_005b5d10
// Address: 005b5d10
void CExternalRenderer::setProcessingData(CExternalRenderer * this_ptr, char * other);

// Original: wincore_windll.cpp_shutdownExternalRenderer_FUN_005b5d20
// Address: 005b5d20
void shutdownExternalRenderer(void);

// Original: wincore_windll.cpp_initializeExternalRenderer_FUN_005b5ec0
// Address: 005b5ec0
int initializeExternalRenderer(void);

// Original: wincore_windll.cpp_loadExternalRenderer_FUN_005b6750
// Address: 005b6750
int loadExternalRenderer(HWND window_handle);

// Original: wincore_windll.cpp_kill_FUN_005b71e0
// Address: 005b71e0
int kill(void);

// Original: wincore_windll.cpp_isExternalRendererActive_FUN_005b7200
// Address: 005b7200
int isExternalRendererActive(void);

// Original: wincore_windll.cpp_lockFrame_FUN_005b7210
// Address: 005b7210
int lockFrame(void);

// Original: wincore_windll.cpp_unlockFrame_FUN_005b7250
// Address: 005b7250
void unlockFrame(int clear_lock_flag);

// Original: wincore_windll.cpp_beginScene_FUN_005b7280
// Address: 005b7280
int beginScene(void);

// Original: wincore_windll.cpp_endScene_FUN_005b72a0
// Address: 005b72a0
int endScene(void);

// Original: wincore_windll.cpp_selectTexture_FUN_005b72b3
// Address: 005b72b3
int selectTexture(SMRGLTextureBasic * texture_info);

// Original: wincore_windll.cpp_updateTexture_FUN_005b72fb
// Address: 005b72fb
int updateTexture(SMRGLTextureBasic * texture_info);

// Original: wincore_windll.cpp_selectTexture_FUN_005b7340
// Address: 005b7340
int selectTexture(SMRGLTextureBasic * tex, byte * palette_data);

// Original: wincore_windll.cpp_updateTexture_FUN_005b7380
// Address: 005b7380
int updateTexture(SMRGLTextureBasic * tex, SRGBColorPalette * palette_data);

// Original: wincore_windll.cpp_selectTextureBGRA_FUN_005b73be
// Address: 005b73be
int selectTextureBGRA(SMRGLTextureBasic * texture_info, int flags);

// Original: wincore_windll.cpp_updateTextureBGRA_FUN_005b73f6
// Address: 005b73f6
int updateTextureBGRA(SMRGLTextureBasic * texture_info, int flags);

// Original: wincore_windll.cpp_setMipMapLevel_FUN_005b7436
// Address: 005b7436
int setMipMapLevel(int mipmap_level);

// Original: wincore_windll.cpp_setResolutionAndColorTable_FUN_005b7460
// Address: 005b7460
int setResolutionAndColorTable(int width, int height, int bits_per_pixel);

// Original: wincore_windll.cpp_setColorTable16_FUN_005b7579
// Address: 005b7579
int setColorTable16(void);

// Original: wincore_windll.cpp_restoreVideoMode_FUN_005b75b0
// Address: 005b75b0
int restoreVideoMode(void);

// Original: wincore_windll.cpp_drawPolygon_FUN_005b75e0
// Address: 005b75e0
int drawPolygon(SRenderVertex * vertices, int vertex_count, int render_flags);

// Original: wincore_windll.cpp_drawPolygon2_FUN_005b7610
// Address: 005b7610
int drawPolygon2(SRenderVertex * * vertex_array, int vertex_count, int render_flags);

// Original: wincore_windll.cpp_drawPolyList_FUN_005b7640
// Address: 005b7640
int drawPolyList(void * vertex_buffer, void * * polygons, int polygon_count, int render_flags);

// Original: wincore_windll.cpp_drawPolyList2_FUN_005b7780
// Address: 005b7780
int drawPolyList2(void * vertex_buffer, void * * polygons, int polygon_count, int render_flags);

// Original: wincore_windll.cpp_drawPolyList3_FUN_005b78c0
// Address: 005b78c0
int drawPolyList3(void * vertex_buffer, void * polygons, int polygon_count, int render_flags);

// Original: wincore_windll.cpp_addParticle_FUN_005b7985
// Address: 005b7985
int addParticle(void * particle_data, int particle_type);

// Original: wincore_windll.cpp_flushParticleList_FUN_005b79b2
// Address: 005b79b2
int flushParticleList(void);

// Original: wincore_windll.cpp_add3dLine_FUN_005b79d3
// Address: 005b79d3
int add3dLine(void * start_point, void * end_point, int line_style);

// Original: wincore_windll.cpp_flushLineList_FUN_005b7a09
// Address: 005b7a09
int flushLineList(void);

// Original: wincore_windll.cpp_clear_FUN_005b7a30
// Address: 005b7a30
int clear(void);

// Original: wincore_windll.cpp_drawFullScreenQuad_FUN_005b7a50
// Address: 005b7a50
int drawFullScreenQuad(int color);

// Original: wincore_windll.cpp_setFogColorFromPalette_FUN_005b7b01
// Address: 005b7b01
int setFogColorFromPalette(int palette_index);

// Original: wincore_windll.cpp_setFogColor_FUN_005b7b80
// Address: 005b7b80
int setFogColor(int red, int green, int blue);

// Original: wincore_windll.cpp_sync_FUN_005b7bc0
// Address: 005b7bc0
int sync(void);

// Original: wincore_windll.cpp_clearZBuffer_FUN_005b7be0
// Address: 005b7be0
int clearZBuffer(void);

// Original: wincore_windll.cpp_clearZBox_FUN_005b7c00
// Address: 005b7c00
int clearZBox(int left, int top, int right, int bottom);

// Original: wincore_windll.cpp_presentToExternalRenderer_FUN_005b7c30
// Address: 005b7c30
void presentToExternalRenderer(int skip_buffer_copy);

// Original: wincore_windll.cpp_masterZBuffer_FUN_005b7d00
// Address: 005b7d00
int masterZBuffer(int z_buffer_mode);

// Original: wincore_windll.cpp_restoreZBuffer_FUN_005b7d20
// Address: 005b7d20
int restoreZBuffer(int left, int top, int mode, int right, int bottom);

// Original: wincore_windll.cpp_getVideoMemory_FUN_005b7d60
// Address: 005b7d60
int getVideoMemory(int * total_memory, int * available_memory, int * memory_type);

// Original: wincore_windll.cpp_selectCard_FUN_005b7d90
// Address: 005b7d90
int selectCard(int card_index);

// Original: wincore_windll.cpp_buildCardList_FUN_005b7db0
// Address: 005b7db0
int buildCardList(void * card_list_buffer, int max_cards, int * card_count, char * * card_names, int buffer_size);

// Original: wincore_windll.cpp_lockHoldBuffer_FUN_005b7df0
// Address: 005b7df0
int lockHoldBuffer(void);

// Original: wincore_windll.cpp_unlockHoldBuffer_FUN_005b7e10
// Address: 005b7e10
int unlockHoldBuffer(void);

// Original: wincore_windll.cpp_lockTexture_FUN_005b7e23
// Address: 005b7e23
int lockTexture(int texture_id);

// Original: wincore_windll.cpp_unlockTexture_FUN_005b7e4b
// Address: 005b7e4b
int unlockTexture(void);

// Original: wincore_windll.cpp_getTextureInfo_FUN_005b7e70
// Address: 005b7e70
int getTextureInfo(int texture_size);

// Original: wincore_windll.cpp_setVideoModeX_FUN_005b7e8b
// Address: 005b7e8b
int setVideoModeX(int width, int height, int bits_per_pixel, int flags);

// Original: wincore_windll.cpp_restoreVideoModeX_FUN_005b7ede
// Address: 005b7ede
int restoreVideoModeX(void);

// Original: wincore_windll.cpp_lockFrameX_FUN_005b7f0b
// Address: 005b7f0b
int lockFrameX(void);

// Original: wincore_windll.cpp_unlockFrameX_FUN_005b7f40
// Address: 005b7f40
int unlockFrameX(void);

// Original: wincore_windll.cpp_toggleX_FUN_005b7f66
// Address: 005b7f66
int toggleX(void);

// Original: wincore_windll.cpp_CExternalRenderer_ctor_FUN_005b7f90
// Address: 005b7f90
void CExternalRenderer::ctor(CExternalRenderer * this_ptr);

// Original: wincore_windll.cpp_CExternalRenderer_validate_FUN_005b7fe0
// Address: 005b7fe0
bool CExternalRenderer::validate(CExternalRenderer * this_ptr, CExternalRenderer * capabilities);

// Original: wincore_windll.cpp_CExternalRenderer_switchRenderer_FUN_005b8117
// Address: 005b8117
int CExternalRenderer::switchRenderer(CExternalRenderer * this_ptr, int renderer_handle);

// Original: wincore_windll.cpp_switchRenderer_FUN_005b8140
// Address: 005b8140
int switchRenderer(char * new_dll_name, int renderer_handle);

// Original: wincore_windll.cpp_getCurrentRenderer_FUN_005b8185
// Address: 005b8185
char * getCurrentRenderer(int * renderer);
