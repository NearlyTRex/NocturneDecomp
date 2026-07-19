#pragma once

// Function prototypes for dll/dx7.cpp
// Generated from Ghidra function signatures

// Original: dll_dx7.cpp_CDLLTextureCache_init_FUN_10001020
// Address: 10001020
void __ecxcall CDLLTextureCache::init(CDLLTextureCache *this_ptr,int max_count,int texture_size);

// Original: dll_dx7.cpp_CDLLTextureCache_acquireSlot_FUN_10001090
// Address: 10001090
int __ecxcall CDLLTextureCache::acquireSlot(CDLLTextureCache *this_ptr,SMRGLTextureBasic *texture_info);

// Original: dll_dx7.cpp_CDLLTextureCache_bindTexture_FUN_10001180
// Address: 10001180
void __ecxcall CDLLTextureCache::bindTexture(CDLLTextureCache *this_ptr,SMRGLTextureBasic *texture_info);

// Original: dll_dx7.cpp_initTextureCaches_FUN_10001200
// Address: 10001200
void __cdecl initTextureCaches(void);

// Original: dll_dx7.cpp_readIniInt_FUN_10001440
// Address: 10001440
void __cdecl readIniInt(char *section,char *key,uint *value_inout);

// Original: dll_dx7.cpp_resolveTextureSlot_FUN_10001470
// Address: 10001470
int __cdecl resolveTextureSlot(SMRGLTextureBasic *texture_info);

// Original: dll_dx7.cpp_bindTextureBySize_FUN_100015d0
// Address: 100015d0
void __cdecl bindTextureBySize(SMRGLTextureBasic *texture_info);

// Original: dll_dx7.cpp_enumAdapterCallback_FUN_100017b0
// Address: 100017b0
int __stdcall enumAdapterCallback(GUID *lp_guid,LPCSTR lp_driver_description,LPCSTR lp_driver_name,LPVOID lp_context,HMONITOR hmonitor);

// Original: dll_dx7.cpp_isAdapter3DCapable_FUN_10001900
// Address: 10001900
int __cdecl isAdapter3DCapable(GUID *adapter_guid);

// Original: dll_dx7.cpp_APIDLLInformation_FUN_100019a0
// Address: 100019a0
void __cdecl APIDLLInformation(HMODULE dll_handle,CExternalRenderer *renderer);

// Original: dll_dx7.cpp_APIDLLinit_FUN_10001a80
// Address: 10001a80
int __cdecl APIDLLinit(HWND windowHandle,CExternalRendererBridge *interface);

// Original: dll_dx7.cpp_checkD3DResult_FUN_10001d70
// Address: 10001d70
void __cdecl checkD3DResult(HRESULT result);

// Original: dll_dx7.cpp_fatalError_FUN_10002340
// Address: 10002340
void __cdecl fatalError(char *message);

// Original: dll_dx7.cpp_releaseDirectXResources_FUN_10002370
// Address: 10002370
void __cdecl releaseDirectXResources(void);

// Original: dll_dx7.cpp_APIDLLkill_FUN_10002460
// Address: 10002460
void __cdecl APIDLLkill(void);

// Original: dll_dx7.cpp_APIDLLtoggle_FUN_100024b0
// Address: 100024b0
int __cdecl APIDLLtoggle(void);

// Original: dll_dx7.cpp_APIDLLsetVideoMode_FUN_10002500
// Address: 10002500
int __cdecl APIDLLsetVideoMode(void **scanline_ptrs);

// Original: dll_dx7.cpp_readIniInt_FUN_10002b20
// Address: 10002b20
void __cdecl readIniInt(char *section,char *key,uint *value_inout);

// Original: dll_dx7.cpp_enumZBufferFormatCallback_FUN_10002b50
// Address: 10002b50
HRESULT __stdcall enumZBufferFormatCallback(DDPIXELFORMAT *lp_pixel_format,void *lp_context);

// Original: dll_dx7.cpp_APIDLLsetVideoMode2_FUN_10002bb0
// Address: 10002bb0
int __cdecl APIDLLsetVideoMode2(int width,int height,int bits_per_pixel,void **screen_buffer_array);

// Original: dll_dx7.cpp_APIDLLrestoreVideoMode_FUN_10002be0
// Address: 10002be0
int __cdecl APIDLLrestoreVideoMode(void);

// Original: dll_dx7.cpp_unlockBackBuffer_FUN_10002c50
// Address: 10002c50
int __cdecl unlockBackBuffer(void);

// Original: dll_dx7.cpp_unlockSurface_FUN_10002cb0
// Address: 10002cb0
int __cdecl unlockSurface(IDirectDrawSurface *surface);

// Original: dll_dx7.cpp_APIDLLbeginScene_FUN_10002ce0
// Address: 10002ce0
int __cdecl APIDLLbeginScene(void);

// Original: dll_dx7.cpp_APIDLLendScene_FUN_10002d10
// Address: 10002d10
int __cdecl APIDLLendScene(void);

// Original: dll_dx7.cpp_resetRenderState_FUN_10002d50
// Address: 10002d50
void __cdecl resetRenderState(void);

// Original: dll_dx7.cpp_APIDLLlockFrame_FUN_10002d90
// Address: 10002d90
int __cdecl APIDLLlockFrame(void);

// Original: dll_dx7.cpp_lockBackBuffer_FUN_10002dc0
// Address: 10002dc0
int __cdecl lockBackBuffer(void);

// Original: dll_dx7.cpp_lockSurface_FUN_10002e20
// Address: 10002e20
int __cdecl lockSurface(IDirectDrawSurface *surface,DDSURFACEDESC2 *surface_desc);

// Original: dll_dx7.cpp_APIDLLunlockFrame_FUN_10002e60
// Address: 10002e60
int __cdecl APIDLLunlockFrame(void);

// Original: dll_dx7.cpp_releaseAllTextures_FUN_10002ea0
// Address: 10002ea0
void __cdecl releaseAllTextures(void);

// Original: dll_dx7.cpp_createDirect3D_FUN_10002f40
// Address: 10002f40
int __cdecl createDirect3D(void);

// Original: dll_dx7.cpp_createTexture_FUN_10002f60
// Address: 10002f60
int __cdecl createTexture(int texture_size);

// Original: dll_dx7.cpp_textureSizeToIndex_FUN_10003090
// Address: 10003090
int __cdecl textureSizeToIndex(int texture_size);

// Original: dll_dx7.cpp_loadTexture_FUN_100030e0
// Address: 100030e0
void __cdecl loadTexture(int texture_index);

// Original: dll_dx7.cpp_initD3DDevice_FUN_10003100
// Address: 10003100
int __cdecl initD3DDevice(void);

// Original: dll_dx7.cpp_pickTextureFormat_FUN_10003340
// Address: 10003340
HRESULT __stdcall pickTextureFormat(DDPIXELFORMAT *pixel_format,void *found_flag);

// Original: dll_dx7.cpp_createStagingTextures_FUN_10003400
// Address: 10003400
int __cdecl createStagingTextures(void);

// Original: dll_dx7.cpp_initDefaultRenderStates_FUN_100035b0
// Address: 100035b0
int __cdecl initDefaultRenderStates(void);

// Original: dll_dx7.cpp_setRenderStateCached_FUN_100037e0
// Address: 100037e0
void __cdecl setRenderStateCached(uint render_state,DWORD value);

// Original: dll_dx7.cpp_expandTextureAndBuildMips_FUN_10003830
// Address: 10003830
void __cdecl expandTextureAndBuildMips(void);

// Original: dll_dx7.cpp_getMipLevelPtr_FUN_10003a30
// Address: 10003a30
uint * __cdecl getMipLevelPtr(int mip_size);

// Original: dll_dx7.cpp_uploadCurrentTexture_FUN_10003a80
// Address: 10003a80
void __cdecl uploadCurrentTexture(void);

// Original: dll_dx7.cpp_convertMipTo16Bit_FUN_10003d90
// Address: 10003d90
void __cdecl convertMipTo16Bit(ushort *dest,uint dest_pitch,int mip_size);

// Original: dll_dx7.cpp_copyMipTo32Bit_FUN_10003e40
// Address: 10003e40
void __cdecl copyMipTo32Bit(uint *dest,uint dest_pitch,int mip_size);

// Original: dll_dx7.cpp_APIDLLselectTexture_FUN_10003e90
// Address: 10003e90
int __cdecl APIDLLselectTexture(SMRGLTextureBasic *texture_info,int texture_dimension,uchar *texture_data,uchar *palette_data,uchar *opacity_data);

// Original: dll_dx7.cpp_APIDLLupdateTexture_FUN_10003ed0
// Address: 10003ed0
int __cdecl APIDLLupdateTexture(SMRGLTextureBasic *texture_info,int texture_dimension,uchar *texture_data,uchar *palette_data,uchar *opacity_data);

// Original: dll_dx7.cpp_APIDLLsetMipMapLevel_FUN_10003f00
// Address: 10003f00
int __cdecl APIDLLsetMipMapLevel(int mipmap_level);

// Original: dll_dx7.cpp_applyRenderState_FUN_10003f10
// Address: 10003f10
void __cdecl applyRenderState(uint render_flags);

// Original: dll_dx7.cpp_APIDLLdrawPolygon_FUN_10004380
// Address: 10004380
int __cdecl APIDLLdrawPolygon(SRenderVertex *vertices,int vertex_count,int render_flags);

// Original: dll_dx7.cpp_APIDLLdrawPolygon2_FUN_100043c0
// Address: 100043c0
int __cdecl APIDLLdrawPolygon2(SRenderVertex **vertex_array,int vertex_count,int render_flags);

// Original: dll_dx7.cpp_buildTLVertex_FUN_100044b0
// Address: 100044b0
void __cdecl buildTLVertex(SRenderVertex *src,SScreenVertex *out,uint render_flags,int rhw_scale);

// Original: dll_dx7.cpp_flushBatch_FUN_100047b0
// Address: 100047b0
void __cdecl flushBatch(void);

// Original: dll_dx7.cpp_APIDLLaddParticle_FUN_10004800
// Address: 10004800
int __cdecl APIDLLaddParticle(void *particle_data,int particle_type);

// Original: dll_dx7.cpp_APIDLLflushParticleList_FUN_10004810
// Address: 10004810
int __cdecl APIDLLflushParticleList(void);

// Original: dll_dx7.cpp_APIDLLadd3dLine_FUN_10004820
// Address: 10004820
int __cdecl APIDLLadd3dLine(void *start_point,void *end_point,int line_style);

// Original: dll_dx7.cpp_APIDLLflushLineList_FUN_10004830
// Address: 10004830
int __cdecl APIDLLflushLineList(void);

// Original: dll_dx7.cpp_APIDLLclear_FUN_10004840
// Address: 10004840
int __cdecl APIDLLclear(void);

// Original: dll_dx7.cpp_APIDLLsetFogColor_FUN_100049f0
// Address: 100049f0
int __cdecl APIDLLsetFogColor(int red,int green,int blue);

// Original: dll_dx7.cpp_APIDLLsync_FUN_10004a60
// Address: 10004a60
int __cdecl APIDLLsync(void);

// Original: dll_dx7.cpp_APIDLLclearZBuffer_FUN_10004a70
// Address: 10004a70
int __cdecl APIDLLclearZBuffer(void);

// Original: dll_dx7.cpp_APIDLLclearZBox_FUN_10004ac0
// Address: 10004ac0
int __cdecl APIDLLclearZBox(int left,int right,int top,int bottom);

// Original: dll_dx7.cpp_APIDLLsetColorTable16_FUN_10004b30
// Address: 10004b30
int __cdecl APIDLLsetColorTable16(uchar *source_palette,ushort *color_table);

// Original: dll_dx7.cpp_floorLog2_FUN_10004d10
// Address: 10004d10
int __cdecl floorLog2(uint value);

// Original: dll_dx7.cpp_APIDLLGetDisplayContext_FUN_10004d30
// Address: 10004d30
void __cdecl APIDLLGetDisplayContext(HDC *hdc);

// Original: dll_dx7.cpp_APIDLLReleaseDisplayContext_FUN_10004da0
// Address: 10004da0
void __cdecl APIDLLReleaseDisplayContext(HDC hdc);

// Original: dll_dx7.cpp_APIDLLmasterZBuffer_FUN_10004e10
// Address: 10004e10
int __cdecl APIDLLmasterZBuffer(int z_buffer_mode);

// Original: dll_dx7.cpp_APIDLLrestoreZBuffer_FUN_10004e90
// Address: 10004e90
int __cdecl APIDLLrestoreZBuffer(int left,int top,int mode,int right,int bottom);

// Original: dll_dx7.cpp_APIDLLdrawPolyList_FUN_10004f00
// Address: 10004f00
int __cdecl APIDLLdrawPolyList(SRenderVertex *vertex_buffer,SMRGLPrimitiveTriangle **polygons,int polygon_count,int render_flags);

// Original: dll_dx7.cpp_getOrAddVertex_FUN_10005010
// Address: 10005010
uint __cdecl getOrAddVertex(SMRGLVertex *poly_vertex,SRenderVertex *vertex_array,uint render_flags);

// Original: dll_dx7.cpp_APIDLLdrawPolyList2_FUN_10005130
// Address: 10005130
int __cdecl APIDLLdrawPolyList2(SRenderVertex *vertex_buffer,ushort **polygons,int polygon_count,int render_flags);

// Original: dll_dx7.cpp_APIDLLgetVideoMemory_FUN_10005280
// Address: 10005280
int __cdecl APIDLLgetVideoMemory(int *total_memory,int *available_memory,int *memory_type);

// Original: dll_dx7.cpp_APIDLLselectCard_FUN_100052c0
// Address: 100052c0
int __cdecl APIDLLselectCard(int card_index);

// Original: dll_dx7.cpp_APIDLLbuildCardList_FUN_100052e0
// Address: 100052e0
int __cdecl APIDLLbuildCardList(int *out_card_count,char **out_driver_names,char **out_card_names,int *out_vendor_ids ,int *out_device_ids);

// Original: dll_dx7.cpp_APIDLLlockHoldBuffer_FUN_10005350
// Address: 10005350
int __cdecl APIDLLlockHoldBuffer(void);

// Original: dll_dx7.cpp_APIDLLunlockHoldBuffer_FUN_100053a0
// Address: 100053a0
int __cdecl APIDLLunlockHoldBuffer(void);
