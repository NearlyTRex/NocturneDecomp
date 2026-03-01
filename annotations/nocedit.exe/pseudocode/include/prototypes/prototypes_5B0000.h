#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "system/windef.h"
#include "system/winnt.h"
#include "system/winuser.h"
#include "types/classes/CActorPropertyList.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonTriangle.h"
#include "types/classes/CDirectSoundDevice.h"
#include "types/classes/CExternalRenderer.h"
#include "types/classes/CSfxSlot.h"
#include "types/classes/CSound.h"
#include "types/classes/CSpike.h"
#include "types/classes/CSpotView.h"
#include "types/classes/CStairs.h"
#include "types/classes/CStranger.h"
#include "types/classes/CTempleStone.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/classes/CWavInDevice.h"
#include "types/classes/CWavOutDevice.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SHardwareEdge.h"
#include "types/structs/SIntersectXZCylinder.h"
#include "types/structs/SMRGLTextureBasic.h"
#include "types/structs/SProjectedVertex.h"
#include "types/structs/SRGBColorPalette.h"
#include "types/structs/SRecordingDeviceInfo.h"
#include "types/structs/SRenderVertex.h"
#include "types/structs/SSoftwareEdge.h"
#include "types/structs/SSoundDeviceInfo.h"
#include "types/structs/STrainNoise.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x5B0000
// =============================================================================

void __cdecl sound_snddx_cpp_CDirectSoundDevice_killSfx_FUN_005b0030(CDirectSoundDevice *this_ptr,CSfxSlot *slot);
int __cdecl sound_snddx_cpp_directSoundEnumerationCallback_FUN_005b0120(LPGUID device_guid,LPCSTR description,LPCSTR module,LPVOID context);
void __cdecl sound_snddx_cpp_CDirectSoundDevice_commitDeferredSettings_FUN_005b0340(CDirectSoundDevice *this_ptr);
int __cdecl sound_snddx_cpp_enumerateDirectSoundDevice_FUN_005b0390(UINT device_id,SSoundDeviceInfo *device_info);
CDirectSoundDevice * __cdecl sound_snddx_cpp_getDirectSoundDevice_FUN_005b0440(UINT device_id);
void __cdecl sound_sndwav_cpp_staticInit_FUN_005b0670(void);
int __cdecl sound_sndwav_cpp_getWavOutBufferSizeBytes_FUN_005b0690(void);
int __cdecl sound_sndwav_cpp_writeWavOutBuffer_FUN_005b06c0(int buffer_index);
int __cdecl sound_sndwav_cpp_CWavOutDevice_close_FUN_005b0840(CWavOutDevice *this_ptr);
int __cdecl sound_sndwav_cpp_CWavOutDevice_start_FUN_005b08f0(CWavOutDevice *this_ptr);
int __cdecl sound_sndwav_cpp_CWavOutDevice_reset_FUN_005b09c0(CWavOutDevice *this_ptr);
int __cdecl sound_sndwav_cpp_CWavOutDevice_setMode_FUN_005b0a30(CWavOutDevice *this_ptr,int bits_per_sample,int channels,int sample_rate, int *out_samples_per_block);
int __cdecl sound_sndwav_cpp_CWavOutDevice_poll_FUN_005b0c10(CWavOutDevice *this_ptr,short *output_buffer,int num_samples);
int __cdecl sound_sndwav_cpp_getWavInBufferSizeBytes_FUN_005b0c90(void);
int __cdecl sound_sndwav_cpp_writeWavInBuffer_FUN_005b0cc0(int buffer_index);
int __cdecl sound_sndwav_cpp_CWavInDevice_close_FUN_005b0d70(CWavInDevice *this_ptr);
int __cdecl sound_sndwav_cpp_CWavInDevice_start_FUN_005b0e20(CWavInDevice *this_ptr);
int __cdecl sound_sndwav_cpp_CWavInDevice_reset_FUN_005b0f10(CWavInDevice *this_ptr);
int __cdecl sound_sndwav_cpp_CWavInDevice_setMode_FUN_005b0f70(CWavInDevice *this_ptr,int bits_per_sample,int channels,int sample_rate, int *out_samples_per_block);
int __cdecl sound_sndwav_cpp_CWavInDevice_poll_FUN_005b12e0(CWavInDevice *this_ptr,short *output_buffer,int num_samples);
int __cdecl sound_sndwav_cpp_enumerateWavOutDevice_FUN_005b1470(UINT device_id,SSoundDeviceInfo *device_info);
CWavOutDevice * __cdecl sound_sndwav_cpp_getWavOutDevice_FUN_005b1510(UINT device_id);
int __cdecl sound_sndwav_cpp_enumerateWavInDevice_FUN_005b1560(UINT device_id,SRecordingDeviceInfo *device_info);
CWavInDevice * __cdecl sound_sndwav_cpp_getWavInDevice_FUN_005b1600(UINT device_id);
int __cdecl sound_sndwav_cpp_CWavOutDevice_hasHardware3D_FUN_005b1650(CWavOutDevice *this_ptr);
void __cdecl sound_sndwav_cpp_CWavOutDevice_set3DListenerPos_FUN_005b1660(CWavOutDevice *this_ptr,double x,double y,double z);
void __cdecl sound_sndwav_cpp_CWavOutDevice_set3DListenerOrient_FUN_005b1670(CWavOutDevice *this_ptr,double x_front,double y_front,double z_front,double x_top, double y_top,double z_top);
void __cdecl sound_sndwav_cpp_CWavOutDevice_set3DListenerVelocity_FUN_005b1680(CWavOutDevice *this_ptr,double x_velocity,double y_velocity,double z_velocity);
void __cdecl sound_sndwav_cpp_CWavOutDevice_set3DListenerDistanceFactor_FUN_005b1690(CWavOutDevice *this_ptr,double distance_in_feet);
void __cdecl sound_sndwav_cpp_CWavOutDevice_commitDeferredSettings_FUN_005b16a0(CWavOutDevice *this_ptr);
int __cdecl sound_sndwav_cpp_CWavOutDevice_allocateSample_FUN_005b16b0(CWavOutDevice *this_ptr,int bits_per_sample,int channel_count,int sample_rate, int sample_count);
void __cdecl sound_sndwav_cpp_CWavOutDevice_freeSample_FUN_005b16c0(CWavOutDevice *this_ptr,int buffer_id);
int __cdecl sound_sndwav_cpp_CWavOutDevice_lockSample_FUN_005b16d0(CWavOutDevice *this_ptr,int buffer_id,int offset,int size);
void __cdecl sound_sndwav_cpp_CWavOutDevice_unlockSample_FUN_005b16e0(CWavOutDevice *this_ptr,int buffer_id);
int __cdecl sound_sndwav_cpp_CWavOutDevice_allocateSfx_FUN_005b16f0(CWavOutDevice *this_ptr,int sample_buffer_id);
int __cdecl sound_sndwav_cpp_CWavOutDevice_setSfxPos_FUN_005b1700(CWavOutDevice *this_ptr,CSfxSlot *slot,int update_flags);
double __cdecl sound_sndwav_cpp_CWavOutDevice_getSfxPlaybackPos_FUN_005b1710(CWavOutDevice *this_ptr,CSfxSlot *slot);
int __cdecl sound_sndwav_cpp_CWavOutDevice_startSfx_FUN_005b1730(CWavOutDevice *this_ptr,CSfxSlot *slot);
void __cdecl sound_sndwav_cpp_CWavOutDevice_killSfx_FUN_005b1740(CWavOutDevice *this_ptr,CSfxSlot *slot);
int __cdecl sound_sndwav_cpp_CWavOutDevice_isSfxPlaying_FUN_005b1750(CWavOutDevice *this_ptr,CSfxSlot *slot);
void __cdecl core_sound_cpp_staticInit_FUN_005b1760(void);
void __cdecl core_sound_cpp_populateSoundFiles_FUN_005b17a0(void);
void __cdecl core_sound_cpp_filterSoundFilesByPattern_FUN_005b17d0(char *wildcard_pattern);
void __cdecl core_sound_cpp_updateListeners_FUN_005b1870(void);
void __cdecl core_sound_cpp_CSound_findRandomSoundFile_FUN_005b1ed0(CSound *this_ptr,char *out_result,char *wildcard_pattern);
uint __cdecl core_sound_cpp_playSfxInternal_FUN_005b1fd0(void *user_data,char *sound_name,float x,float y,float z,CVector3f *position_tracker ,uint flags);
void __cdecl core_sound_cpp_resetTrainSounds_FUN_005b26f0(void);
void __cdecl core_sound_cpp_processTrainSounds_FUN_005b2770(void);
void __watcallRegister core_sound_cpp_stopTrainSounds_FUN_005b2ca0(void);
CSound * __cdecl core_sound_cpp_CSound_ctor_FUN_005b2ce0(CSound *this_ptr);
void __cdecl core_sound_cpp_CSound_findAllSoundFiles_FUN_005b2d00(CSound *this_ptr);
void __cdecl core_sound_cpp_CSound_dtor_FUN_005aaeb0(void);
void __cdecl core_sound_cpp_syncChannel3WithChannel0_FUN_005b2d70(void);
void __cdecl core_sound_cpp_CSound_init_FUN_005b2dd0(CSound *this_ptr);
void __cdecl core_sound_cpp_CSound_shutdown_FUN_005b2f70(CSound *this_ptr);
void __cdecl core_sound_cpp_CSound_process_FUN_005b2fd0(CSound *this_ptr);
void __cdecl core_sound_cpp_CSound_configure_FUN_005b3830(CSound *this_ptr);
void __cdecl core_sound_cpp_CSound_reset_FUN_005b39a0(CSound *this_ptr);
void __cdecl core_sound_cpp_CSound_playAmbientSound_FUN_005b39b0(CSound *this_ptr,char *sound_name);
uint __cdecl core_sound_cpp_CSound_playSound_FUN_005b3a20(CSound *this_ptr,void *user_data,char *sound_name);
uint __cdecl core_sound_cpp_CSound_playActorSound_FUN_005b3a40(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position);
uint __cdecl core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker);
uint __cdecl core_sound_cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_005b3aa0(CSound *this_ptr,CDemonActor *actor,char *sound_name,float delay);
uint __cdecl core_sound_cpp_CSound_playActorPositionalSoundWithDelay_FUN_005b3ae0(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position,float delay );
uint __cdecl core_sound_cpp_CSound_playTrackedActorSoundWithDelay_FUN_005b3b30(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker, float delay);
int __cdecl core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80(CSound *this_ptr,uint sfx_handle);
void __cdecl core_sound_cpp_CSound_killSound_FUN_005b3b90(CSound *this_ptr,uint sfx_handle);
float __cdecl core_sound_cpp_CSound_getSoundDuration_FUN_005b3ba0(CSound *this_ptr,char *sound_name);
int __cdecl core_sound_cpp_CSound_getReverbPresetCount_FUN_005b3c60(CSound *this_ptr);
char * __cdecl core_sound_cpp_CSound_getSoundModeName_FUN_005b3c70(CSound *this_ptr,int sound_mode_index);
void __cdecl core_sound_cpp_CSound_set3DListenerOrientRight_FUN_005b3c90(CSound *this_ptr,float listener_orient_x,float listener_orient_y, float listener_orient_z);
void __cdecl core_sound_cpp_CSound_setReverbPreset_FUN_005b3cc0(CSound *this_ptr,int index);
int __cdecl core_sound_cpp_CSound_selectReverbPreset_FUN_005b3d20(CSound *this_ptr,char *title,int *selection_inout);
void __cdecl core_sound_cpp_CSound_setVolumeFade_FUN_005b3dc0(CSound *this_ptr,float target_volume,float fade_time);
int __cdecl core_sound_cpp_editSoundName_FUN_005b3de0(char *prompt_text,char *output_buffer);
STrainNoise * __cdecl core_sound_cpp_STrainNoise_ctor_FUN_005b3e00(STrainNoise *this_ptr);
STrainNoise * __cdecl core_sound_cpp_STrainNoise_dtor_FUN_005b3e10(STrainNoise *this_ptr,uint flags);
int * __cdecl core_sound_cpp_assignInt_FUN_005b3e20(int *dest_ptr,int *src_ptr);
int * __cdecl core_sound_cpp_assignInt_FUN_005b3e30(int *dest_ptr,int *src_ptr);
int * __cdecl core_sound_cpp_assignInt_FUN_005b3e40(int *dest_ptr,int *src_ptr);
STrainNoise * __cdecl core_sound_cpp_STrainNoise_arrdtor_FUN_005b3e50(STrainNoise *objs,uint flags);
void __cdecl wincore_windll_cpp_clearScreen_FUN_005b3e70(void);
void __cdecl wincore_windll_cpp_clearZBuffer_FUN_005b3ed4(void);
void __cdecl wincore_windll_cpp_clearScreen_FUN_005b3f37(int color);
void __cdecl wincore_windll_cpp_fillDepthRegion_FUN_005b3fc2(int left,int right,int top,int bottom);
void __cdecl wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y);
void __cdecl wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y);
void __cdecl wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y);
void __cdecl wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y);
void __cdecl wincore_windll_cpp_renderAlphaRow32_FUN_005b555c(uint *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount);
void __cdecl wincore_windll_cpp_renderAlphaRow16_FUN_005b55f7(ushort *destPixels,uchar *srcIndices,uchar *srcAlpha,int globalAlpha,int pixelCount);
void __edi_esi_ebx wincore_windll_cpp_renderScanline_FUN_005b5710 (SHardwareEdge *left,SHardwareEdge *right,int scanline_y);
void __cdecl wincore_windll_cpp_renderScanlineSwapped_FUN_005b5716(int scanline_y,SHardwareEdge *right,SHardwareEdge *left);
void __cdecl wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex *output,CVector3i *input);
int __cdecl wincore_windll_cpp_transformPoint_FUN_005b5a25(SProjectedVertex *output,CVector3i *input);
void __cdecl wincore_windll_cpp_CExternalRenderer_initValidate_FUN_005b5cf0(CExternalRenderer *this_ptr,char *buffer_ptr);
void __cdecl wincore_windll_cpp_CExternalRenderer_init_FUN_005b5d10(CExternalRenderer *this_ptr,char *buffer_ptr);
void __cdecl wincore_windll_cpp_shutdownExternalRenderer_FUN_005b5d20(void);
int __cdecl wincore_windll_cpp_initializeExternalRenderer_FUN_005b5ec0(void);
int __cdecl wincore_windll_cpp_loadExternalRenderer_FUN_005b6750(HWND window_handle);
int __cdecl wincore_windll_cpp_kill_FUN_005b71e0(void);
int __cdecl wincore_windll_cpp_isExternalRendererActive_FUN_005b7200(void);
int __cdecl wincore_windll_cpp_lockFrame_FUN_005b7210(void);
void __cdecl wincore_windll_cpp_unlockFrame_FUN_005b7250(int clear_lock_flag);
int __cdecl wincore_windll_cpp_beginScene_FUN_005b7280(void);
int __cdecl wincore_windll_cpp_endScene_FUN_005b72a0(void);
int __cdecl wincore_windll_cpp_selectTexture_FUN_005b72b3(SMRGLTextureBasic *texture_info);
int __cdecl wincore_windll_cpp_updateTexture_FUN_005b72fb(SMRGLTextureBasic *texture_info);
int __cdecl wincore_windll_cpp_selectTexture_FUN_005b7340(SMRGLTextureBasic *tex,byte *palette_data);
int __cdecl wincore_windll_cpp_updateTexture_FUN_005b7380(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data);
int __cdecl wincore_windll_cpp_selectTextureBGRA_FUN_005b73be(SMRGLTextureBasic *texture_info,int flags);
int __cdecl wincore_windll_cpp_updateTextureBGRA_FUN_005b73f6(SMRGLTextureBasic *texture_info,int flags);
int __cdecl wincore_windll_cpp_setMipMapLevel_FUN_005b7436(int mipmap_level);
int __cdecl wincore_windll_cpp_setResolutionAndColorTable_FUN_005b7460(int width,int height,int bits_per_pixel);
int __cdecl wincore_windll_cpp_setColorTable16_FUN_005b7579(void);
int __cdecl wincore_windll_cpp_restoreVideoMode_FUN_005b75b0(void);
int __cdecl wincore_windll_cpp_drawPolygon_FUN_005b75e0(SRenderVertex *vertices,int vertex_count,int render_flags);
int __cdecl wincore_windll_cpp_drawPolygon2_FUN_005b7610(SRenderVertex **vertex_array,int vertex_count,int render_flags);
int __cdecl wincore_windll_cpp_drawPolyList_FUN_005b7640(void *vertex_buffer,void **polygons,int polygon_count,int render_flags);
int __cdecl wincore_windll_cpp_drawPolyList2_FUN_005b7780(void *vertex_buffer,void **polygons,int polygon_count,int render_flags);
int __cdecl wincore_windll_cpp_drawPolyList3_FUN_005b78c0(void *vertex_buffer,void *polygons,int polygon_count,int render_flags);
int __cdecl wincore_windll_cpp_addParticle_FUN_005b7985(void *particle_data,int particle_type);
int __cdecl wincore_windll_cpp_flushParticleList_FUN_005b79b2(void);
int __cdecl wincore_windll_cpp_add3dLine_FUN_005b79d3(void *start_point,void *end_point,int line_style);
int __cdecl wincore_windll_cpp_flushLineList_FUN_005b7a09(void);
int __cdecl wincore_windll_cpp_clear_FUN_005b7a30(void);
int __cdecl wincore_windll_cpp_drawFullScreenQuad_FUN_005b7a50(int color);
int __cdecl wincore_windll_cpp_setFogColorFromPalette_FUN_005b7b01(int palette_index);
int __cdecl wincore_windll_cpp_setFogColor_FUN_005b7b80(int red,int green,int blue);
int __cdecl wincore_windll_cpp_sync_FUN_005b7bc0(void);
int __cdecl wincore_windll_cpp_clearZBuffer_FUN_005b7be0(void);
int __cdecl wincore_windll_cpp_clearZBox_FUN_005b7c00(int left,int top,int right,int bottom);
void __cdecl wincore_windll_cpp_presentToExternalRenderer_FUN_005b7c30(int skip_buffer_copy);
int __cdecl wincore_windll_cpp_masterZBuffer_FUN_005b7d00(int z_buffer_mode);
int __cdecl wincore_windll_cpp_restoreZBuffer_FUN_005b7d20(int left,int top,int mode,int right,int bottom);
int __cdecl wincore_windll_cpp_getVideoMemory_FUN_005b7d60(int *total_memory,int *available_memory,int *memory_type);
int __cdecl wincore_windll_cpp_selectCard_FUN_005b7d90(int card_index);
int __cdecl wincore_windll_cpp_buildCardList_FUN_005b7db0(int *out_card_count,void *enum_data_buffer,char **out_card_names,int *out_vendor_ids, int *out_device_ids);
int __cdecl wincore_windll_cpp_lockHoldBuffer_FUN_005b7df0(void);
int __cdecl wincore_windll_cpp_unlockHoldBuffer_FUN_005b7e10(void);
int __cdecl wincore_windll_cpp_lockTexture_FUN_005b7e23(int texture_id);
int __cdecl wincore_windll_cpp_unlockTexture_FUN_005b7e4b(void);
int __cdecl wincore_windll_cpp_getTextureInfo_FUN_005b7e70(int texture_size);
int __cdecl wincore_windll_cpp_setVideoModeX_FUN_005b7e8b(int width,int height,int bits_per_pixel,int flags);
int __cdecl wincore_windll_cpp_restoreVideoModeX_FUN_005b7ede(void);
int __cdecl wincore_windll_cpp_lockFrameX_FUN_005b7f0b(void);
int __cdecl wincore_windll_cpp_unlockFrameX_FUN_005b7f40(void);
int __cdecl wincore_windll_cpp_toggleX_FUN_005b7f66(void);
void __cdecl wincore_windll_cpp_CExternalRenderer_ctor_FUN_005b7f90(CExternalRenderer *this_ptr);
int __cdecl wincore_windll_cpp_CExternalRenderer_validate_FUN_005b7fe0(CExternalRenderer *this_ptr,CExternalRenderer *capabilities);
int __cdecl wincore_windll_cpp_CExternalRenderer_switchRenderer_FUN_005b8117(CExternalRenderer *this_ptr,int renderer_handle);
int __cdecl wincore_windll_cpp_switchRenderer_FUN_005b8140(char *new_dll_name,int renderer_handle);
char * __cdecl wincore_windll_cpp_getCurrentRenderer_FUN_005b8185(int *renderer_handle);
void __cdecl core_spike_cpp_staticInit_FUN_005b81b0(void);
CSpike * __cdecl core_spike_cpp_factoryFunc_FUN_005b81e0(void);
CDemonActorType * __cdecl core_spike_cpp_CSpike_getActorType_FUN_005b8210(CSpike *this_ptr);
CSpike * __cdecl core_spike_cpp_CSpike_ctor_FUN_005b8220(CSpike *this_ptr);
void __cdecl core_spike_cpp_CSpike_setup_FUN_005b8360(CSpike *this_ptr);
void __cdecl core_spike_cpp_CSpike_process_FUN_005b8410(CSpike *this_ptr,float delta_time);
int __cdecl core_spike_cpp_CSpike_renderOpaque_FUN_005b8730(CSpike *this_ptr);
CBoundingBox3D * __cdecl core_spike_cpp_CSpike_getBoundingBox_FUN_005b87a0(CSpike *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_spike_cpp_CSpike_archive_FUN_005b87f0(CSpike *this_ptr);
int __cdecl core_spike_cpp_CSpike_hasCollision_FUN_005b8940(CSpike *this_ptr,SCollisionInfo *collision_info);
void __cdecl core_spike_cpp_CSpike_FUN_005b8950(CSpike *this_ptr);
void __cdecl core_spike_cpp_CSpike_getPropertyList_FUN_005b8e90(CSpike *this_ptr,CActorPropertyList *property_list);
void __cdecl core_spike_cpp_CSpike_processInEditor_FUN_005b9020(CSpike *this_ptr);
void __cdecl core_spike_cpp_CSpike_addFilesToExtract_FUN_005b9030(CSpike *this_ptr,_FILE *file_handle);
CSpike * __cdecl core_spike_cpp_CSpike_dtor_FUN_005b9050(CSpike *this_ptr,uint flags);
void __cdecl core_spline_cpp_computeSplineBasis_FUN_005b90a0(float *out_basis,float t,float tension);
float __cdecl core_spline_cpp_evaluateSplineScalar_FUN_005b9230(float *basis,float *p0,float *p1,float *p2,float *p3);
int __cdecl core_spline_cpp_evaluateSplintInt_FUN_005b9270(float *basis,int v0,int v1,int v2,int v3);
CVector3f * __cdecl core_spline_cpp_evaluateSplinePoint3D_FUN_005b92d0(float *basis,CVector3f *out,CVector3f *p0,CVector3f *p1,CVector3f *p2,CVector3f *p3);
float __cdecl core_spline_cpp_evaluateSplineTangentScalar_FUN_005b93f0(float *basis,float *p0,float *p1,float *p2,float *p3);
int __cdecl core_spline_cpp_evaluateSplineTangentInt_FUN_005b9430(float *basis,int v0,int v1,int v2,int v3);
CVector3f * __cdecl core_spline_cpp_evaluateSplineTangent3D_FUN_005b9490(float *basis,CVector3f *out,CVector3f *p0,CVector3f *p1,CVector3f *p2,CVector3f *p3);
void __cdecl shape_spotview_cpp_staticInit_FUN_005b95b0(void);
CSpotView * __cdecl shape_spotview_cpp_CSpotView_ctor_FUN_005b95c0(CSpotView *this_ptr);
void __cdecl shape_spotview_cpp_CSpotView_reset_FUN_005b9620(CSpotView *this_ptr,uint control_flags);
void __cdecl shape_spotview_cpp_CSpotView_handleInput_FUN_005b9670(CSpotView *this_ptr,uint control_flags);
void __cdecl shape_spotview_cpp_CSpotView_clampValues_FUN_005b9950(CSpotView *this_ptr);
void __cdecl shape_spotview_cpp_CSpotView_applyCamera_FUN_005b9a20(CSpotView *this_ptr);
void __cdecl core_stairs_cpp_staticInit_FUN_005b9b00(void);
CStairs * __cdecl core_stairs_cpp_factoryFunc_FUN_005b9b30(void);
CDemonActorType * __cdecl core_stairs_cpp_CStairs_getActorType_FUN_005b9b60(CStairs *this_ptr);
CStairs * __cdecl core_stairs_cpp_CStairs_ctor_FUN_005b9b70(CStairs *this_ptr);
void __cdecl core_stairs_cpp_CStairs_setup_FUN_005b9be0(CStairs *this_ptr);
void __cdecl core_stairs_cpp_CStairs_process_FUN_005b9c00(CStairs *this_ptr,float delta_time);
int __cdecl core_stairs_cpp_CStairs_renderOpaque_FUN_005b9c10(CStairs *this_ptr);
CBoundingBox3D * __cdecl core_stairs_cpp_CStairs_getBoundingBox_FUN_005ba490(CStairs *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_stairs_cpp_CStairs_archive_FUN_005ba4f0(CStairs *this_ptr);
int __cdecl core_stairs_cpp_CStairs_hasCollision_FUN_005ba570(CStairs *this_ptr,SCollisionInfo *collision_info);
float __cdecl core_stairs_cpp_CStairs_customRayIntersect_FUN_005ba590(CStairs *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction, CVector3f *out_normal);
void __cdecl core_stairs_cpp_CStairs_customIntersectCylinderXZ_FUN_005ba660(CStairs *this_ptr,SIntersectXZCylinder *cylinder);
int __cdecl core_stairs_cpp_CStairs_customGetFloorHeight_FUN_005ba6a0(CStairs *this_ptr,float x_pos,float z_pos,float *out_floor_height);
int __cdecl core_stairs_cpp_CStairs_getGroundType_FUN_005ba6f0(CStairs *this_ptr);
void __cdecl core_stairs_cpp_CStairs_FUN_005ba700(CStairs *this_ptr);
void __cdecl core_stairs_cpp_CStairs_getPropertyList_FUN_005ba840(CStairs *this_ptr,CActorPropertyList *property_list);
void __cdecl core_stairs_cpp_CStairs_processInEditor_FUN_005ba900(CStairs *this_ptr);
void __cdecl core_stairs_cpp_CStairs_showEditorHelp_FUN_005bab90(CStairs *this_ptr,int *y_pos);
void __cdecl core_stairs_cpp_CStairs_onActorDeleted_FUN_005babf0(CStairs *this_ptr,CDemonActor *deleted_actor);
CStairs * __cdecl core_stairs_cpp_CStairs_dtor_FUN_005bac10(CStairs *this_ptr,uint flags);
CDemonTriangle * __cdecl core_stairs_cpp_CDemonTriangle_arrdtor_FUN_005bac80(CDemonTriangle *objs,uint flags);
void __cdecl core_stone_cpp_staticInit_FUN_005baca0(void);
CTempleStone * __cdecl core_stone_cpp_factoryFunc_FUN_005bacd0(void);
CDemonActorType * __cdecl core_stone_cpp_CTempleStone_getActorType_FUN_005bad00(CTempleStone *this_ptr);
CTempleStone * __cdecl core_stone_cpp_CTempleStone_ctor_FUN_005bad10(CTempleStone *this_ptr);
void __cdecl core_stone_cpp_CTempleStone_archive_FUN_005bad40(CTempleStone *this_ptr);
int __cdecl core_stone_cpp_CTempleStone_canPickup_FUN_005bad70(CTempleStone *this_ptr,CDemonActor *picker);
void __cdecl core_stone_cpp_CTempleStone_getPropertyList_FUN_005badd0(CTempleStone *this_ptr,CActorPropertyList *property_list);
CTempleStone * __cdecl core_stone_cpp_CTempleStone_dtor_FUN_005bae10(CTempleStone *this_ptr,uint flags);
void __cdecl core_stranger_cpp_staticInit_FUN_005bae80(void);
float __cdecl core_stranger_cpp_FUN_005baee0(int current_bone_index,int target_bone_index,float blend_weight, int hierarchy_distance,CDeformableModelInstance *instance);
int __cdecl core_stranger_cpp_FUN_005baf20(void);
int __cdecl core_stranger_cpp_FUN_005baf3d(void);
int __cdecl core_stranger_cpp_FUN_005bafa0(void);
int __cdecl core_stranger_cpp_FUN_005bafba(void);
int __cdecl core_stranger_cpp_FUN_005bafc0(void);
int __cdecl core_stranger_cpp_FUN_005bafc6(void);
int __cdecl core_stranger_cpp_FUN_005bafcc(void);
int __cdecl core_stranger_cpp_FUN_005bafd2(void);
int __cdecl core_stranger_cpp_FUN_005bafe0(void);
float __cdecl core_stranger_cpp_FUN_005bb010(void);
CStranger * __cdecl core_stranger_cpp_factoryFunc_FUN_005bb0e0(void);
CDemonActorType * __cdecl core_stranger_cpp_CStranger_getActorType_FUN_005bb110(CStranger *this_ptr);
CStranger * __cdecl core_stranger_cpp_CStranger_ctor_FUN_005bb120(CStranger *this_ptr);
void __cdecl core_stranger_cpp_CStranger_setup_FUN_005bb4b0(CStranger *this_ptr);
void __cdecl core_stranger_cpp_CStranger_process_FUN_005bb830(CStranger *this_ptr,float delta_time);
void __cdecl core_stranger_cpp_CStranger_FUN_005bb960(CStranger *this_ptr);
void __cdecl core_stranger_cpp_CStranger_FUN_005bdd20(CStranger *this_ptr);
int __cdecl core_stranger_cpp_CStranger_FUN_005be430(CStranger *this_ptr);
int __cdecl core_stranger_cpp_FUN_005be480(void);
float * __cdecl core_stranger_cpp_CStranger_FUN_005be490(CStranger *this_ptr);
void __cdecl core_stranger_cpp_CStranger_FUN_005be520(CStranger *this_ptr);
void __cdecl core_stranger_cpp_CStranger_FUN_005bf720(CStranger *this_ptr);
void __cdecl core_stranger_cpp_CStranger_FUN_005bf800(CStranger *this_ptr);
void __cdecl core_stranger_cpp_CStranger_setPositionAndOrientation_FUN_005bfb10(CStranger *this_ptr,CVector3f *new_position,CVector3f *new_orientation);
void __cdecl core_stranger_cpp_CStranger_FUN_005bfb60(CStranger *this_ptr);

