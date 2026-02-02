#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CActorProperty.h"
#include "types/classes/CActorPropertyList.h"
#include "types/classes/CAlphaBitmap.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CFont.h"
#include "types/classes/CMouse.h"
#include "types/classes/CNPC.h"
#include "types/classes/CNetGame.h"
#include "types/classes/CPackedBitmap.h"
#include "types/classes/CPackedBitmapSet.h"
#include "types/classes/CPaletteManager.h"
#include "types/classes/CParticle.h"
#include "types/classes/CPassenger.h"
#include "types/classes/CPathMap.h"
#include "types/classes/CPendulum.h"
#include "types/classes/CPlatform.h"
#include "types/classes/CPodFile.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SChatHistory.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SEncryptedMessage.h"
#include "types/structs/SMRGLHeaderExtended.h"
#include "types/structs/SNetPlayer.h"
#include "types/structs/SNetworkAddr.h"
#include "types/structs/SPlayer.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x540000
// =============================================================================

int __cdecl core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(CNetGame *this_ptr,int sync_stage);
void __cdecl core_netgame_cpp_CNetGame_FUN_00540550(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_allocSimFrame_FUN_005406a0 (CNetGame *this_ptr,SNetworkAddr *source_addr,char *packet_data);
void __cdecl core_netgame_cpp_CNetGame_send_FUN_005411c0(CNetGame *this_ptr,int player_index);
void __cdecl core_netgame_cpp_CNetGame_FUN_00541230(CNetGame *this_ptr);
int __cdecl core_netgame_cpp_CNetGame_FUN_00541260(CNetGame *this_ptr);
int __cdecl core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0(CNetGame *this_ptr);
int __cdecl core_netgame_cpp_CNetGame_FUN_00541390(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_updatePing_FUN_00541c80 (CNetGame *this_ptr,int player_index,float max_ping);
void __cdecl core_netgame_cpp_CNetGame_processChatOut_FUN_00541e40(void);
void __cdecl core_netgame_cpp_CNetGame_removeChatOut_FUN_00541ff0(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_FUN_00542370(CNetGame *this_ptr);
int __cdecl core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_00542470(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_removePlayer_FUN_00542b00(CNetGame *this_ptr,int player_index);
void __cdecl core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00542cf0(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_sendGameSetting_FUN_00542dd0(CNetGame *this_ptr,int player_index);
void __cdecl core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00542ff0(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_00543150(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_processClientFrame_FUN_005435a0(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_00543800(CNetGame *this_ptr);
void ** __cdecl core_netgame_cpp_CNetGame_getMyControls_FUN_005438c0(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_FUN_00543930(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_00543970(CNetGame *this_ptr);
int __cdecl core_netgame_cpp_CNetGame_FUN_00543ab0(CNetGame *this_ptr);
int __cdecl core_netgame_cpp_CNetGame_FUN_00543ad0(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_FUN_00543b00(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_FUN_00543b20(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_FUN_00543b30(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_FUN_00543b40(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_FUN_00543b50(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_FUN_00543b60(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_FUN_00543b70(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_FUN_00543b80(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_FUN_00543b90(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_FUN_00543ba0(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_FUN_00543bb0(CNetGame *this_ptr);
SPlayer * __cdecl core_netgame_cpp_SPlayer_ctor_FUN_00543cb0(SPlayer *this_ptr);
SChatHistory * __cdecl core_netgame_cpp_SChatHistory_ctor_FUN_00543cc0(SChatHistory *this_ptr);
SChatHistory * __cdecl core_netgame_cpp_SChatHistory_dtor_FUN_00543cd0(SChatHistory *this_ptr);
SNetPlayer * __cdecl core_netgame_cpp_SNetPlayer_ctor_FUN_00543ce0(SNetPlayer *this_ptr);
void __cdecl core_netgame_cpp_SNetPlayer_copy_FUN_00543cf0(SNetPlayer *this_ptr,SNetPlayer *other);
void __cdecl core_netgame_cpp_FUN_00543db0(void);
void __cdecl core_netgame_cpp_FUN_00543e00(void);
int __cdecl core_netgame_cpp_FUN_00543e20(void);
int __cdecl core_netgame_cpp_FUN_00543e30(void);
void __cdecl support_newmsg_cpp_readMessageFile_FUN_00543e40(char *message_file);
char * __cdecl support_newmsg_cpp_findLocalizedString_FUN_00544170(char *key,int lower_bound,int upper_bound);
char * __cdecl support_newmsg_cpp_getLocalizedString_FUN_005441f0(char *key);
char * __cdecl support_newmsg_cpp_decryptMessage_FUN_00544270(SEncryptedMessage *encrypted_msg);
void __cdecl support_newmsg_cpp_staticInit_FUN_00544360(void);
CMouse * __cdecl support_newmsg_cpp_CMouse_ctor_FUN_00544380(CMouse *ptr);
CMouse * __cdecl support_newmsg_cpp_CMouse_dtor_FUN_005443e0(CMouse *this_ptr);
void __cdecl support_newmsg_cpp_CMouse_load_FUN_00544420(CMouse *this_ptr);
void __cdecl support_newmsg_cpp_doNothing_FUN_00544500(void);
int __cdecl support_newmsg_cpp_FUN_00544510(void);
int __cdecl support_newmsg_cpp_FUN_00544540(void);
void __cdecl support_newmsg_cpp_FUN_005445a0(void);
void __cdecl support_newmsg_cpp_FUN_005445c0(void);
void __cdecl support_newmsg_cpp_freeBitmap_FUN_00544730(CAlphaBitmap **objs);
void __cdecl support_newmsg_cpp_freeSkullBitmaps_FUN_00544750(CAlphaBitmap *bitmap);
void __cdecl core_npc_cpp_staticInit_FUN_00544770(void);
CNPC * __cdecl core_npc_cpp_factoryFunc_FUN_005447a0(void);
CDemonActorType * __cdecl core_npc_cpp_CNPC_getActorType_FUN_005447d0(CNPC *this_ptr);
CNPC * __cdecl core_npc_cpp_CNPC_ctor_FUN_005447e0(CNPC *this_ptr);
void __cdecl core_npc_cpp_CNPC_setup_FUN_00544870(CNPC *this_ptr);
void __cdecl core_npc_cpp_CNPC_process_FUN_005448b0(CNPC *this_ptr,float delta_time);
void __cdecl core_npc_cpp_CNPC_renderBackground_FUN_00544b70(CNPC *this_ptr,int layer_flag);
void __cdecl core_npc_cpp_CNPC_archive_FUN_00544ba0(CNPC *this_ptr);
int __cdecl core_npc_cpp_CNPC_FUN_00544c50(CNPC *this_ptr);
void __cdecl core_npc_cpp_CNPC_processDamage_FUN_00544d30(CNPC *this_ptr,SDamageInfo *damage_info);
int __cdecl core_npc_cpp_CNPC_FUN_00544e10(CNPC *this_ptr);
CPathMap * __cdecl core_npc_cpp_CNPC_getPathMap_FUN_00544e30(CNPC *this_ptr);
void __cdecl core_npc_cpp_CNPC_getPropertyList_FUN_00544e40(CNPC *this_ptr,CActorPropertyList *property_list);
CFont * __cdecl engine_palette_cpp_CFont_ctor_FUN_00544eb0(CFont *this_ptr);
CFont * __cdecl engine_palette_cpp_CFont_dtor_FUN_00544ec0(CFont *this_ptr);
void __cdecl engine_palette_cpp_CFont_drawText_FUN_00544ed0 (CFont *this_ptr,int param1,int param2,int param3,int param4,int param5);
int __cdecl engine_palette_cpp_CFont_getLineSpacing_FUN_00544f00(void);
CPaletteManager * __cdecl engine_palette_cpp_CPaletteManager_ctor_FUN_00544f10(CPaletteManager *this_ptr);
CPaletteManager * __cdecl engine_palette_cpp_CPaletteManager_dtor_FUN_00544f80(CPaletteManager *this_ptr);
void __cdecl engine_palette_cpp_CPaletteManager_FUN_00544fb0(CPaletteManager *this_ptr);
void __cdecl engine_palette_cpp_CPaletteManager_addTexture_FUN_00544fbe(CPaletteManager *this_ptr,char *filename);
void __cdecl engine_palette_cpp_CPaletteManager_addTexture_FUN_00544fc0(void);
SMRGLHeaderExtended * __cdecl engine_palette_cpp_CPaletteManager_FUN_00545060(CPaletteManager *this_ptr,SMRGLHeaderExtended *unk);
int __cdecl engine_palette_cpp_CPaletteManager_createOutputPalette_FUN_00545180(void);
CParticle * __cdecl core_particle_cpp_CParticle_ctor_FUN_00545650(CParticle *this_ptr);
CParticle * __cdecl core_particle_cpp_CParticle_dtor_FUN_00545670(CParticle *this_ptr);
void __cdecl core_particle_cpp_CParticle_setup_FUN_00545680 (CParticle *this_ptr,CVector3f *position,CVector3f *velocity);
void __cdecl core_particle_cpp_CParticle_process_FUN_00545760(CParticle *this_ptr);
void __cdecl core_particle_cpp_CParticle_render_FUN_00545a80(CParticle *this_ptr);
int __cdecl core_particle_cpp_CParticle_onCollision_FUN_00545ab0 (CParticle *this_ptr,CVector3f *collision_normal);
void __cdecl core_passngr_cpp_staticInit_FUN_00545ac0(void);
CPassenger * __cdecl core_passngr_cpp_factoryFunc_FUN_00545af0(void);
CDemonActorType * __cdecl core_passngr_cpp_CPassenger_getActorType_FUN_00545b20(CPassenger *this_ptr);
CPassenger * __cdecl core_passngr_cpp_CPassenger_ctor_FUN_00545b30(CPassenger *this_ptr);
CPassenger * __cdecl core_passngr_cpp_CPassenger_dtor_FUN_00545c10(CPassenger *this_ptr,uint d1);
void __cdecl core_passngr_cpp_CPassenger_setup_FUN_00545d30(CPassenger *this_ptr);
void __cdecl core_passngr_cpp_CPassenger_process_FUN_00545ef0(CPassenger *this_ptr,float delta_time);
int __cdecl core_passngr_cpp_CPassenger_renderOpaque_FUN_005460c0(CPassenger *this_ptr);
void __cdecl core_passngr_cpp_CPassenger_archive_FUN_00546190(CPassenger *this_ptr);
void __cdecl core_passngr_cpp_CPassenger_getPropertyList_FUN_00546270 (CPassenger *this_ptr,CActorPropertyList *property_list);
void __cdecl core_passngr_cpp_CPassenger_writeDependencies_FUN_005462f0(CPassenger *this_ptr,_FILE *file_handle);
void __cdecl core_path_cpp_FUN_00546310(void);
bool __cdecl core_path_cpp_FUN_00546330(void);
void __cdecl core_path_cpp_FUN_00546350(void);
void __cdecl core_path_cpp_FUN_005463d0(void);
CPathMap * __cdecl core_path_cpp_CPathMap_ctor_FUN_00546450(CPathMap *this_ptr);
CPathMap * __cdecl core_path_cpp_CPathMap_dtor_FUN_005464d0(CPathMap *this_ptr);
float __cdecl core_path_cpp_CPathMap_getDirection_FUN_005465b0 (CPathMap *this_ptr,int current_direction,int next_direction,int prev_direction, CVector3f *dest_position);
void __cdecl core_path_cpp_CPathMap_updateIfNeeded_FUN_00546a60 (CPathMap *this_ptr,CVector3f *source_position,int force_update);
int __cdecl core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 (CPathMap *this_ptr,int grid_z,int grid_x,int current_height);
int __cdecl core_path_cpp_CPathMap_isLineWalkable_FUN_00546c40 (CPathMap *this_ptr,int start_x,int start_z,int start_height,int end_x,int end_z, int end_height);
int __cdecl core_path_cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90 (CPathMap *this_ptr,int start_x,int start_z,int start_height,int end_x,int end_z);
int __cdecl core_path_cpp_CPathMap_findPathToDestination_FUN_00547320 (CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles, int direction_hint);
void __cdecl core_path_cpp_CPathMap_previewPathfinding_FUN_00547c00(CPathMap *this_ptr);
int __cdecl core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00 (CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles, int direction_hint);
void __cdecl core_path_cpp_debugRenderGridQuad_FUN_00547dd0 (int grid_x,int grid_y,int grid_z,int color,int fog,float w_recip);
void __cdecl core_path_cpp_FUN_00547fc0(void);
CPathMap * __cdecl core_path_cpp_FUN_00548390(void);
void __cdecl core_path_cpp_FUN_00548500(void);
void __cdecl core_path_cpp_CPathMap_reset_FUN_00548510(CPathMap *this_ptr);
void __cdecl core_path_cpp_GlobalPathmapListCorruption_FUN_00548590(void);
void __cdecl core_path_cpp_FUN_005485f0(void);
void __cdecl core_path_cpp_FUN_00548680(void);
void __cdecl core_path_cpp_CPathMap_CallToQueuePop_FUN_00548750(CPathMap *this_ptr);
uint __cdecl core_path_cpp_CPathMap_queuePop_FUN_005487a0(CPathMap *this_ptr,int start_height);
void __cdecl core_path_cpp_freePathMaps_FUN_00548c30(CPathMap **array);
void __cdecl engine_pcx_c_writePCXScanline_FUN_00548c50(int row_index,_FILE *pcx_file);
void __cdecl engine_pcx_c_saveScreenRaw16_FUN_00548d20(char *filename);
void __cdecl engine_pcx_c_saveScreenRaw32_FUN_00548f00(char *filename);
void __cdecl engine_pcx_c_saveScreenshotGeneral_FUN_005490c0(char *filename);
void __cdecl core_pendulum_cpp_staticInit_FUN_00549320(void);
CPendulum * __cdecl core_pendulum_cpp_factoryFunc_FUN_00549350(void);
CDemonActorType * __cdecl core_pendulum_cpp_CPendulum_getActorType_FUN_00549380(CPendulum *this_ptr);
CPendulum * __cdecl core_pendulum_cpp_CPendulum_ctor_FUN_00549390(CPendulum *this_ptr);
void __cdecl core_pendulum_cpp_CPendulum_setup_FUN_005494a0(CPendulum *this_ptr);
void __cdecl core_pendulum_cpp_CPendulum_FUN_005495c0(CPendulum *this_ptr);
int __cdecl core_pendulum_cpp_FUN_00549aa0(void);
void __cdecl core_pendulum_cpp_CPendulum_FUN_00549b90(CPendulum *this_ptr);
void __cdecl core_pendulum_cpp_CPendulum_process_FUN_0054a180(CPendulum *this_ptr,float delta_time);
int __cdecl core_pendulum_cpp_CPendulum_renderOpaque_FUN_0054a2f0(CPendulum *this_ptr);
CBoundingBox3D * __cdecl core_pendulum_cpp_CPendulum_getBoundingBox_FUN_0054a360(CPendulum *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_pendulum_cpp_CPendulum_archive_FUN_0054a3b0(CPendulum *this_ptr);
int __cdecl core_pendulum_cpp_CPendulum_hasCollision_FUN_0054a550 (CPendulum *this_ptr,SCollisionInfo *collision_info);
int __cdecl core_pendulum_cpp_CPendulum_getGroundType_FUN_0054a590(CPendulum *this_ptr);
void __cdecl core_pendulum_cpp_CPendulum_propertyDisplayCallback_FUN_0054a5a0 (CPendulum *this_ptr,CActorProperty *property,char *output_buffer);
int __cdecl core_pendulum_cpp_CPendulum_propertyActionCallback_FUN_0054a5e0 (CPendulum *this_ptr,CActorProperty *property);
void __cdecl core_pendulum_cpp_CPendulum_getPropertyList_FUN_0054a5f0 (CPendulum *this_ptr,CActorPropertyList *property_list);
void __cdecl core_pendulum_cpp_CPendulum_processInEditor_FUN_0054a790(CPendulum *this_ptr);
void __cdecl core_pendulum_cpp_CPendulum_writeDependencies_FUN_0054a7b0(CPendulum *this_ptr,_FILE *file_handle);
CPendulum * __cdecl core_pendulum_cpp_CPendulum_dtor_FUN_0054a7d0(CPendulum *this_ptr,uint d1,uint d2);
CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_ctor_FUN_0054a820(CPackedBitmap *this_ptr);
CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_init_FUN_0054a840 (CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color, int stride,int apply_palette_flag);
CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_dtor_FUN_0054a890(CPackedBitmap *this_ptr);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_0054a8b0(CPackedBitmap *this_ptr);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_free_FUN_0054a8e0(CPackedBitmap *this_ptr);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_freePackedData_FUN_0054a940(CPackedBitmap *this_ptr);
int __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_getTotalMemoryUsage_FUN_0054a970(CPackedBitmap *this_ptr);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_0054a990(CPackedBitmap *this_ptr,char *filename);
int __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_getPixelValue_FUN_0054a9b0 (CPackedBitmap *this_ptr,int x_coordinate,int row_index);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderToScreenBuffer_FUN_0054aa20 (CPackedBitmap *this_ptr,int dest_x,int dest_y);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderClippedRegion_FUN_0054ab30 (CPackedBitmap *this_ptr,int dest_x,int dest_y,int clip_left,int start_row,int clip_right, int end_row);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0054acb0 (CPackedBitmap *this_ptr,int dest_x,int dest_y,int src_left,int src_top,int width, int height);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderIfIntersectsRect_FUN_0054adb0 (CPackedBitmap *this_ptr,int dest_x,int dest_y,int rect_left,int rect_top,int rect_right, int rect_bottom);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyNoClip_FUN_0054ae70 (CPackedBitmap *this_ptr,uchar *dest_buffer,int bits_per_pixel,int row_stride);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyToBufferAtPosition_FUN_0054afb0 (CPackedBitmap *this_ptr,uchar *dest_buffer,int dest_x,int dest_y,int bits_per_pixel, int buffer_stride);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000 (CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color, int stride,int apply_palette_flag);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0054b080 (CPackedBitmap *this_ptr,int apply_palette_flag);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0 (CPackedBitmap *this_ptr,uchar *raw_bitmap_data,int row_stride);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_0054b190 (CPackedBitmap *this_ptr,uchar *bitmap_data,int width,int height,int stride_bytes, uchar transparency_color);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyACTPalette_FUN_0054b3f0 (CPackedBitmap *this_ptr,char *act_filename);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440 (CPackedBitmap *this_ptr,uchar *palette_buffer);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_0054b4a0(CPackedBitmap *this_ptr);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0 (CPackedBitmap *this_ptr,int processing_flags);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_saveToPBMFile_FUN_0054b520 (CPackedBitmap *this_ptr,char *filename);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0 (CPackedBitmap *this_ptr,_FILE *file_handle);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_0054b690 (CPackedBitmap *this_ptr,_FILE *file_handle,int skip_data_load);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_0054b860 (CPackedBitmap *this_ptr,char *filename,int post_load_processing);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadPBMFile_FUN_0054b910 (CPackedBitmap *this_ptr,int post_load_processing);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_writePBGHeader_FUN_0054b930 (CPackedBitmap *this_ptr,_FILE *file_header);
CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_parsePBGFile_FUN_0054b9b0 (CPackedBitmap *this_ptr,_FILE *file_handle,int param3,int param4, int selected_bitmap_index);
int __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadPBGFile_FUN_0054bb40 (CPackedBitmap *this_ptr,char *pbg_filename,char *palette_filename,int param3,int param4, int selected_bitmap_index);
int __cdecl cockpit_pkbmpset_cpp_alignTo4ByteBoundary_FUN_0054bcc0(int value);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_ctor_FUN_0054bcd0(CPackedBitmapSet *this_ptr);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_init_FUN_0054bd00(CPackedBitmapSet *this_ptr);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_0054bd60(CPackedBitmapSet *this_ptr);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_0054bdb0 (CPackedBitmapSet *this_ptr,int bitmap_count);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_0054be70 (CPackedBitmapSet *this_ptr,char *filename_format,int start_index,int end_index, char *extension,char *base_path);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40 (CPackedBitmapSet *this_ptr,char *filename,int bitmap_width,int bitmap_height, int total_bitmaps,int unknown_param);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reload_FUN_0054c1e0(CPackedBitmapSet *this_ptr);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBMFileRange_FUN_0054c3d0 (CPackedBitmapSet *this_ptr,char *filename_format,int start_index,int end_index, char *base_path);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480 (CPackedBitmapSet *this_ptr,char *pbg_filename,char *palette_filename,int param3, int param4,int additional_param);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_0054c4d0 (CPackedBitmapSet *this_ptr,char *pbg_filename);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500 (CPackedBitmapSet *this_ptr,char *filename,int bitmap_index);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_0054c5d0 (CPackedBitmapSet *this_ptr,char *act_filename);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_0054c620 (CPackedBitmapSet *this_ptr,char *palette_data);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_applyPaletteOrReload_FUN_0054c660(CPackedBitmapSet *this_ptr);
int __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_getTotalMemoryUsage_FUN_0054c6a0(CPackedBitmapSet *this_ptr);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0 (CPackedBitmapSet *this_ptr,char *filename);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710(CPackedBitmapSet *this_ptr);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_ensureBitmapLoaded_FUN_0054c72e (CPackedBitmapSet *this_ptr,int bitmap_index,char *filename);
int __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_getWidth_FUN_0054c7a0(CPackedBitmap *this_ptr);
int __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_getHeight_FUN_0054c7b0(CPackedBitmap *this_ptr);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_doNothing_FUN_0054c7c0(CPackedBitmapSet *this_ptr);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_doNothing_FUN_0054c7d0(CPackedBitmapSet *this_ptr);
void __cdecl core_platfrm_cpp_staticInit_FUN_0054c7e0(void);
CPlatform * __cdecl core_platfrm_cpp_factoryFunc_FUN_0054c810(void);
CDemonActorType * __cdecl core_platfrm_cpp_CPlatform_getActorType_FUN_0054c840(CPlatform *this_ptr);
CPlatform * __cdecl core_platfrm_cpp_CPlatform_ctor_FUN_0054c850(CPlatform *this_ptr);
void __cdecl core_platfrm_cpp_CPlatform_setup_FUN_0054ca20(CPlatform *this_ptr);
void __cdecl core_platfrm_cpp_CPlatform_FUN_0054cab0(CPlatform *this_ptr);
void __cdecl core_platfrm_cpp_CPlatform_process_FUN_0054cc30(CPlatform *this_ptr,float delta_time);
void __cdecl core_platfrm_cpp_CPlatform_FUN_0054d690(CPlatform *this_ptr);
int __cdecl core_platfrm_cpp_CPlatform_renderOpaque_FUN_0054d720(CPlatform *this_ptr);
void __cdecl core_platfrm_cpp_CPlatform_renderBackground_FUN_0054d9b0(CPlatform *this_ptr,int layer_flag);
CBoundingBox3D * __cdecl core_platfrm_cpp_CPlatform_getBoundingBox_FUN_0054db70(CPlatform *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_platfrm_cpp_CPlatform_archive_FUN_0054dbc0(CPlatform *this_ptr);
int __cdecl core_platfrm_cpp_CPlatform_FUN_0054df80(CPlatform *this_ptr);
int __cdecl core_platfrm_cpp_CPlatform_hasCollision_FUN_0054e180 (CPlatform *this_ptr,SCollisionInfo *collision_info);
int __cdecl core_platfrm_cpp_CPlatform_allowBulletHoles_FUN_0054e1a0(CPlatform *this_ptr);
int __cdecl core_platfrm_cpp_CPlatform_getGroundType_FUN_0054e1c0(CPlatform *this_ptr);
int __cdecl core_platfrm_cpp_CPlatform_getBlockVirtualDirectorFlag_FUN_0054e1d0(CPlatform *this_ptr);
void __cdecl core_platfrm_cpp_CPlatform_attachActor_FUN_0054e1e0(CPlatform *this_ptr);
void __cdecl core_platfrm_cpp_CPlatform_FUN_0054e2e0(CPlatform *this_ptr);
void __cdecl core_platfrm_cpp_CPlatform_FUN_0054e320(CPlatform *this_ptr);
void __cdecl core_platfrm_cpp_CPlatform_propertyDisplaySlewCallback_FUN_0054e400 (CPlatform *this_ptr,CActorProperty *property,char *output_buffer);
int __cdecl core_platfrm_cpp_CPlatform_propertyActionSlewCallback_FUN_0054e480(CPlatform *this_ptr);
void __cdecl core_platfrm_cpp_CPlatform_propertyDisplayTypeCallback_FUN_0054e4e0 (CPlatform *this_ptr,CActorProperty *property,char *output_buffer);
int __cdecl core_platfrm_cpp_CPlatform_propertyActionTypeCallback_FUN_0054e530 (CPlatform *this_ptr,CActorProperty *property);
void __cdecl core_platfrm_cpp_CPlatform_propertyDisplayStateCallback_FUN_0054e700 (CPlatform *this_ptr,CActorProperty *property,char *output_buffer);
int __cdecl core_platfrm_cpp_CPlatform_propertyActionStateCallback_FUN_0054e760(CPlatform *this_ptr);
void __cdecl core_platfrm_cpp_CPlatform_getPropertyList_FUN_0054e7d0 (CPlatform *this_ptr,CActorPropertyList *property_list);
void __cdecl core_platfrm_cpp_CPlatform_processInEditor_FUN_0054ea00(CPlatform *this_ptr);
void __cdecl core_platfrm_cpp_CPlatform_showEditorHelp_FUN_0054f060(CPlatform *this_ptr,int *y_pos);
void __cdecl core_platfrm_cpp_CPlatform_writeDependencies_FUN_0054f2a0(CPlatform *this_ptr,_FILE *file_handle);
uint __cdecl engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(uint current_crc,uchar data_byte);
uint __cdecl engine_pod_cpp_crc32UpdateBuffer_FUN_0054f3a0(uchar *data_buffer,uint byte_count,uint initial_crc);
uint __cdecl engine_pod_cpp_crc32ComputeFromFile_FUN_0054f3e0(_FILE *file_stream,uint total_bytes);
uint __cdecl engine_pod_cpp_crc32ComputeFileRange_FUN_0054f490(char *filename,int start_offset);
CPodFile * __cdecl engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0(CPodFile *this_ptr);
CPodFile * __cdecl engine_pod_cpp_CPodFile_dtor_FUN_0054f610(CPodFile *this_ptr);
int __cdecl engine_pod_cpp_qsortByFilename_FUN_0054f630(char **filename1_ptr,char **filename2_ptr);
int __cdecl engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile *this_ptr,char *pod_filename);

