#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CActorProperty.h"
#include "types/classes/CActorPropertyList.h"
#include "types/classes/CAlphaBitmap.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CFont.h"
#include "types/classes/CLocation.h"
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
#include "types/structs/SMRGLHeaderExtended.h"
#include "types/structs/SNetPacketHeader.h"
#include "types/structs/SNetPlayer.h"
#include "types/structs/SNetworkAddr.h"
#include "types/structs/SPlayer.h"
#include "types/structs/SPlayerControl.h"
#include "types/unions/UNetPacket.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x540000
// =============================================================================

int __cdecl core_netgame_cpp_CNetGame_syncPlayers_FUN_005401e0(CNetGame *this_ptr,int sync_stage);
void __cdecl core_netgame_cpp_CNetGame_flushIncomingPackets_FUN_00540550(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_receivePackets_FUN_005405b0(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_processPacket_FUN_005406a0(CNetGame *this_ptr,SNetworkAddr *source_addr,UNetPacket *packet);
void __cdecl core_netgame_cpp_CNetGame_send_FUN_005411c0(CNetGame *this_ptr,int player_index);
void __cdecl core_netgame_cpp_CNetGame_sendPacket_FUN_00541230(CNetGame *this_ptr,SNetworkAddr *dest_addr,SNetPacketHeader *packet);
int __cdecl core_netgame_cpp_CNetGame_findPlayerByAddr_FUN_00541260(CNetGame *this_ptr,SNetworkAddr *addr);
int __cdecl core_netgame_cpp_CNetGame_addPlayer_FUN_005412b0(CNetGame *this_ptr,SNetworkAddr *addr,char *name,int hero_number,int aim_mode);
int __cdecl core_netgame_cpp_CNetGame_runLobby_FUN_00541390(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_updatePing_FUN_00541c80(CNetGame *this_ptr,int player_index,float max_ping);
void __cdecl core_netgame_cpp_CNetGame_processChatOut_FUN_00541e40(CNetGame *this_ptr,char *message,int target_player);
void __cdecl core_netgame_cpp_CNetGame_removeChatOut_FUN_00541ff0(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_addChatHistory_FUN_00542370(CNetGame *this_ptr,SNetworkAddr *sender_addr,int message_id,char *sender_name, char *message);
int __cdecl core_netgame_cpp_CNetGame_applyNewGameSettings_FUN_00542470(CNetGame *this_ptr,UNetPacket *packet);
void __cdecl core_netgame_cpp_CNetGame_removePlayer_FUN_00542b00(CNetGame *this_ptr,int player_index);
void __cdecl core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00542cf0(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_sendGameSetting_FUN_00542dd0(CNetGame *this_ptr,int player_index);
void __cdecl core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00542ff0(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_processServerFrame_FUN_00543150(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_processClientFrame_FUN_005435a0(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_applySimFrameHistory_FUN_00543800(CNetGame *this_ptr);
SPlayerControl * __cdecl core_netgame_cpp_CNetGame_getMyControls_FUN_005438c0(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00543930(CNetGame *this_ptr,SNetworkAddr *dest_addr,int payload);
void __cdecl core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_00543970(CNetGame *this_ptr);
int __cdecl core_netgame_cpp_matchPacketSize_FUN_00543ab0(SNetPacketHeader *a,SNetPacketHeader *b);
int __cdecl core_netgame_cpp_matchPacketHeader_FUN_00543ad0(SNetPacketHeader *a,SNetPacketHeader *b);
void __cdecl core_netgame_cpp_initNetPacket_FUN_00543b00(SNetPacketHeader *packet,int packet_size,uchar packet_type);
void __cdecl core_netgame_cpp_CNetGame_setModeSyncing_FUN_00543b20(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_setModePlaying_FUN_00543b30(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_setMode5_FUN_00543b40(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_setMode6_FUN_00543b50(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_setMode7_FUN_00543b60(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_setMode9_FUN_00543b70(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_setMode10_FUN_00543b80(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_setMode12_FUN_00543b90(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_setMode13_FUN_00543ba0(CNetGame *this_ptr);
void __cdecl core_netgame_cpp_CNetGame_swapPlayerData_FUN_00543bb0(CNetGame *this_ptr,SNetPlayer *other);
SPlayer * __cdecl core_netgame_cpp_SPlayer_ctor_FUN_00543cb0(SPlayer *this_ptr);
SChatHistory * __cdecl core_netgame_cpp_SChatHistory_ctor_FUN_00543cc0(SChatHistory *this_ptr);
SChatHistory * __cdecl core_netgame_cpp_SChatHistory_dtor_FUN_00543cd0(SChatHistory *this_ptr,uint flags);
SNetPlayer * __cdecl core_netgame_cpp_SNetPlayer_ctor_FUN_00543ce0(SNetPlayer *this_ptr);
void __cdecl core_netgame_cpp_SNetPlayer_copy_FUN_00543cf0(SNetPlayer *this_ptr,SNetPlayer *other);
void __cdecl core_netgame_cpp_copyPlayerControls_FUN_00543db0(SPlayerControl *dest,SPlayerControl *src);
void __cdecl core_netgame_cpp_copyNetAddr_FUN_00543e00(SNetworkAddr *dest,SNetworkAddr *src);
int * __cdecl core_netgame_cpp_copyInteger_FUN_00543e20(int *dest,int *src);
int * __cdecl core_netgame_cpp_copyInteger_FUN_00543e30(int *dest,int *src);
void __cdecl support_newmsg_cpp_readMessageFile_FUN_00543e40(char *message_file);
char * __cdecl support_newmsg_cpp_findLocalizedString_FUN_00544170(char *key,int lower_bound,int upper_bound);
char * __cdecl support_newmsg_cpp_getLocalizedString_FUN_005441f0(char *key);
char * __cdecl support_newmsg_cpp_decryptMessage_FUN_00544270(char *encrypted_msg);
void __cdecl engine_ncursfx_cpp_staticInit_FUN_00544360(void);
CMouse * __cdecl engine_ncursfx_cpp_CMouse_ctor_FUN_00544380(CMouse *ptr);
CMouse * __cdecl engine_ncursfx_cpp_CMouse_dtor_FUN_005443e0(CMouse *this_ptr,uint flags);
void __cdecl engine_ncursfx_cpp_CMouse_load_FUN_00544420(CMouse *this_ptr);
void __cdecl engine_ncursfx_cpp_CMouse_reset_FUN_00544500(CMouse *this_ptr);
int __cdecl engine_ncursfx_cpp_CMouse_startEffect_FUN_00544510(CMouse *this_ptr,uint button_mask);
int __cdecl engine_ncursfx_cpp_CMouse_consumeButton_FUN_00544540(CMouse *this_ptr,uint button_mask,int use_skull_effect);
void __cdecl engine_ncursfx_cpp_CMouse_getPosition_FUN_005445a0(CMouse *this_ptr,int *out_x,int *out_y);
void __cdecl engine_ncursfx_cpp_CMouse_render_FUN_005445c0(CMouse *this_ptr);
CAlphaBitmap * __cdecl engine_ncursfx_cpp_CAlphaBitmap_arrdtor_FUN_00544730(CAlphaBitmap *objs,uint flags);
CAlphaBitmap * __cdecl engine_ncursfx_cpp_CAlphaBitmap_arrdtor_FUN_00544750(CAlphaBitmap *objs,uint flags);
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
CFont * __cdecl engine_palette_cpp_CFont_dtor_FUN_00544ec0(CFont *this_ptr,uint flags);
int __cdecl engine_palette_cpp_CFont_drawText_FUN_00544ed0(CFont *this_ptr,char *text,int x,int y,int foreground_color,int background_color);
int __cdecl engine_palette_cpp_CFont_getLineSpacing_FUN_00544f00(void);
CPaletteManager * __cdecl engine_palette_cpp_CPaletteManager_ctor_FUN_00544f10(CPaletteManager *this_ptr,int max_texture_count,int max_pixel_count);
CPaletteManager * __cdecl engine_palette_cpp_CPaletteManager_dtor_FUN_00544f80(CPaletteManager *this_ptr,uint flags);
void __cdecl engine_palette_cpp_CPaletteManager_reset_FUN_00544fb0(CPaletteManager *this_ptr);
void __cdecl engine_palette_cpp_CPaletteManager_addTexture_FUN_00544fc0(CPaletteManager *this_ptr,char *filename);
void __cdecl engine_palette_cpp_CPaletteManager_scanTextures_FUN_00545060(CPaletteManager *this_ptr,SMRGLHeaderExtended *mrgl_data);
int __cdecl engine_palette_cpp_CPaletteManager_createOutputPalette_FUN_00545180(CPaletteManager *this_ptr,char *output_filename,int num_palette_entries);
CParticle * __cdecl core_particle_cpp_CParticle_ctor_FUN_00545650(CParticle *this_ptr);
CParticle * __cdecl core_particle_cpp_CParticle_dtor_FUN_00545670(CParticle *this_ptr,uint flags);
void __cdecl core_particle_cpp_CParticle_setup_FUN_00545680(CParticle *this_ptr,CVector3f *position,CVector3f *velocity);
void __cdecl core_particle_cpp_CParticle_process_FUN_00545760(CParticle *this_ptr);
void __cdecl core_particle_cpp_CParticle_render_FUN_00545a80(CParticle *this_ptr);
int __cdecl core_particle_cpp_CParticle_onCollision_FUN_00545ab0(CParticle *this_ptr,CVector3f *collision_normal);
void __cdecl core_passngr_cpp_staticInit_FUN_00545ac0(void);
CPassenger * __cdecl core_passngr_cpp_factoryFunc_FUN_00545af0(void);
CDemonActorType * __cdecl core_passngr_cpp_CPassenger_getActorType_FUN_00545b20(CPassenger *this_ptr);
CPassenger * __cdecl core_passngr_cpp_CPassenger_ctor_FUN_00545b30(CPassenger *this_ptr);
CPassenger * __cdecl core_passngr_cpp_CPassenger_dtor_FUN_00545c10(CPassenger *this_ptr,uint flags);
void __cdecl core_passngr_cpp_CPassenger_setup_FUN_00545d30(CPassenger *this_ptr);
void __cdecl core_passngr_cpp_CPassenger_process_FUN_00545ef0(CPassenger *this_ptr,float delta_time);
int __cdecl core_passngr_cpp_CPassenger_renderOpaque_FUN_005460c0(CPassenger *this_ptr);
void __cdecl core_passngr_cpp_CPassenger_archive_FUN_00546190(CPassenger *this_ptr);
void __cdecl core_passngr_cpp_CPassenger_getPropertyList_FUN_00546270(CPassenger *this_ptr,CActorPropertyList *property_list);
void __cdecl core_passngr_cpp_CPassenger_addFilesToExtract_FUN_005462f0(CPassenger *this_ptr,_FILE *file_handle);
void __cdecl core_path_cpp_resetPathfindingQueue_FUN_00546310(void);
int __cdecl core_path_cpp_isPathfindingQueueEmpty_FUN_00546330(void);
void __cdecl core_path_cpp_queuePush_FUN_00546350(int grid_x,int cost,int grid_z,char direction);
void __cdecl core_path_cpp_queuePop_FUN_005463d0(int *out_x,int *out_cost,int *out_z);
CPathMap * __cdecl core_path_cpp_CPathMap_ctor_FUN_00546450(CPathMap *this_ptr);
CPathMap * __cdecl core_path_cpp_CPathMap_dtor_FUN_005464d0(CPathMap *this_ptr,uint flags);
float __cdecl core_path_cpp_CPathMap_getDirection_FUN_005465b0(CPathMap *this_ptr,int current_direction,int next_direction,int prev_direction, CVector3f *dest_position);
void __cdecl core_path_cpp_CPathMap_updateIfNeeded_FUN_00546a60(CPathMap *this_ptr,CVector3f *source_position,int force_update);
int __cdecl core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap *this_ptr,int grid_z,int grid_x,int current_height);
int __cdecl core_path_cpp_CPathMap_isLineWalkable_FUN_00546c40(CPathMap *this_ptr,int start_x,int start_z,int start_height,int end_x,int end_z, int end_height);
int __cdecl core_path_cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90(CPathMap *this_ptr,int start_x,int start_z,int start_height,int end_x,int end_z);
int __cdecl core_path_cpp_CPathMap_findPathToDestination_FUN_00547320(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles, int direction_hint);
void __cdecl core_path_cpp_CPathMap_previewPathfinding_FUN_00547c00(CPathMap *this_ptr);
int __cdecl core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles, int direction_hint);
void __cdecl core_path_cpp_renderGridQuad_FUN_00547dd0(int grid_x,int grid_y,int grid_z,int color,int fog,float w_recip);
void __cdecl core_path_cpp_CPathMap_renderPathMap_FUN_00547fc0(CPathMap *this_ptr,int depth,int red,int green,int fog);
CPathMap * __cdecl core_path_cpp_getOrCreatePathMap_FUN_00548390(CLocation *location);
CPathMap * __cdecl core_path_cpp_getPathMap_FUN_00548500(CLocation *location);
void __cdecl core_path_cpp_CPathMap_reset_FUN_00548510(CPathMap *this_ptr);
void __cdecl core_path_cpp_resetAllPathMaps_FUN_00548590(void);
void __cdecl core_path_cpp_renderAllPathMaps_FUN_005485f0(int depth,int red,int green,int fog);
void __cdecl core_path_cpp_renderPathMapsAtPosition_FUN_00548680(CVector3f *position,int depth,int red,int green,int fog);
void __cdecl core_path_cpp_CPathMap_setupPathSearch_FUN_00548750(CPathMap *this_ptr);
uint __cdecl core_path_cpp_CPathMap_searchGrid_FUN_005487a0(CPathMap *this_ptr,int start_height);
CPathMap * __cdecl core_path_cpp_CPathMap_arrdtor_FUN_00548c30(CPathMap *objs,uint flags);
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
int __cdecl core_pendulum_cpp_CPendulum_hasCollision_FUN_0054a550(CPendulum *this_ptr,SCollisionInfo *collision_info);
int __cdecl core_pendulum_cpp_CPendulum_getGroundType_FUN_0054a590(CPendulum *this_ptr);
void __cdecl core_pendulum_cpp_CPendulum_propertyDisplayCallback_FUN_0054a5a0(CPendulum *this_ptr,CActorProperty *property,char *output_buffer);
int __cdecl core_pendulum_cpp_CPendulum_propertyActionCallback_FUN_0054a5e0(CPendulum *this_ptr,CActorProperty *property);
void __cdecl core_pendulum_cpp_CPendulum_getPropertyList_FUN_0054a5f0(CPendulum *this_ptr,CActorPropertyList *property_list);
void __cdecl core_pendulum_cpp_CPendulum_processInEditor_FUN_0054a790(CPendulum *this_ptr);
void __cdecl core_pendulum_cpp_CPendulum_addFilesToExtract_FUN_0054a7b0(CPendulum *this_ptr,_FILE *file_handle);
CPendulum * __cdecl core_pendulum_cpp_CPendulum_dtor_FUN_0054a7d0(CPendulum *this_ptr,uint flags);
CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_ctor_FUN_0054a820(CPackedBitmap *this_ptr);
CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_init_FUN_0054a840(CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color, int apply_palette_flag);
CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_dtor_FUN_0054a890(CPackedBitmap *this_ptr,uint flags);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_0054a8b0(CPackedBitmap *this_ptr);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_free_FUN_0054a8e0(CPackedBitmap *this_ptr);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_freePackedData_FUN_0054a940(CPackedBitmap *this_ptr);
int __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_getTotalMemoryUsage_FUN_0054a970(CPackedBitmap *this_ptr);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_0054a990(CPackedBitmap *this_ptr,char *filename);
int __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_getPixelValue_FUN_0054a9b0(CPackedBitmap *this_ptr,int x_coordinate,int row_index);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderToScreenBuffer_FUN_0054aa20(CPackedBitmap *this_ptr,int dest_x,int dest_y);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderClippedRegion_FUN_0054ab30(CPackedBitmap *this_ptr,int dest_x,int dest_y,int clip_left,int start_row, int clip_right,int end_row);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderWithGlobalClipping_FUN_0054acb0(CPackedBitmap *this_ptr,int dest_x,int dest_y,int src_left,int src_top,int width, int height);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_renderIfIntersectsRect_FUN_0054adb0(CPackedBitmap *this_ptr,int dest_x,int dest_y,int rect_left,int rect_top, int rect_right,int rect_bottom);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyNoClip_FUN_0054ae70(CPackedBitmap *this_ptr,uchar *dest_buffer,int bits_per_pixel,int row_stride);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyToBufferAtPosition_FUN_0054afb0(CPackedBitmap *this_ptr,uchar *dest_buffer,int dest_x,int dest_y,int bits_per_pixel, int buffer_stride);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000(CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color, int apply_palette_flag);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0054b080(CPackedBitmap *this_ptr,int apply_palette_flag);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0(CPackedBitmap *this_ptr,uchar *raw_bitmap_data,int row_stride);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_0054b190(CPackedBitmap *this_ptr,uchar *bitmap_data,int width,int height,int stride_bytes, uchar transparency_color);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyACTPalette_FUN_0054b3f0(CPackedBitmap *this_ptr,char *act_filename);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440(CPackedBitmap *this_ptr,uchar *palette_buffer);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_0054b4a0(CPackedBitmap *this_ptr);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0(CPackedBitmap *this_ptr,int apply_palette_flag);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_saveToPBMFile_FUN_0054b520(CPackedBitmap *this_ptr,char *filename);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0(CPackedBitmap *this_ptr,_FILE *file_handle);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_0054b690(CPackedBitmap *this_ptr,_FILE *file_handle,int skip_data_load);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_0054b860(CPackedBitmap *this_ptr,char *filename,int apply_palette_flag);
void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadPBMFile_FUN_0054b910(CPackedBitmap *this_ptr,int apply_palette_flag);
void __cdecl cockpit_pkbitmap_cpp_writePBGHeader_FUN_0054b930(CPackedBitmap *bitmap_ptr,_FILE *file_header);
CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_parsePBGFile_FUN_0054b9b0(CPackedBitmapSet *bitmap_set_ptr,_FILE *file_handle,int frames_per_bitmap, int skip_data_load,int selected_bitmap_index);
CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_loadPBGFile_FUN_0054bb40(CPackedBitmapSet *bitmap_set_ptr,char *pbg_filename,int apply_palette_flag, int frames_per_bitmap,int skip_data_load,int selected_bitmap_index);
int __cdecl cockpit_pkbmpset_cpp_alignTo4ByteBoundary_FUN_0054bcc0(int value);
CPackedBitmapSet * __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_ctor_FUN_0054bcd0(CPackedBitmapSet *this_ptr);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_init_FUN_0054bd00(CPackedBitmapSet *this_ptr);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reset_FUN_0054bd60(CPackedBitmapSet *this_ptr);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_alloc_FUN_0054bdb0(CPackedBitmapSet *this_ptr,int bitmap_count);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_0054be70(CPackedBitmapSet *this_ptr,char *filename_format,int width,int height, int start_index,int end_index,int transparency_color,int apply_palette_flag);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40(CPackedBitmapSet *this_ptr,char *filename,int bitmap_width,int bitmap_height, int total_bitmaps,int unknown_param);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reload_FUN_0054c1e0(CPackedBitmapSet *this_ptr);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBMFileRange_FUN_0054c3d0(CPackedBitmapSet *this_ptr,char *filename_format,int start_index,int end_index, int apply_palette_flag);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480(CPackedBitmapSet *this_ptr,char *pbg_filename,int apply_palette_flag, int frames_per_bitmap,int skip_data_load);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_0054c4d0(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadACTAndApplyToBitmapSet_FUN_0054c5d0(CPackedBitmapSet *this_ptr,char *act_filename);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_0054c620(CPackedBitmapSet *this_ptr,char *palette_data);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_applyPaletteOrReload_FUN_0054c660(CPackedBitmapSet *this_ptr);
int __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_getTotalMemoryUsage_FUN_0054c6a0(CPackedBitmapSet *this_ptr);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0(CPackedBitmapSet *this_ptr,char *filename);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710(CPackedBitmapSet *this_ptr);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_ensureBitmapLoaded_FUN_0054c72e(CPackedBitmapSet *this_ptr,int bitmap_index);
int __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_getWidth_FUN_0054c7a0(CPackedBitmap *this_ptr);
int __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_getHeight_FUN_0054c7b0(CPackedBitmap *this_ptr);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_doNothing_FUN_0054c7c0(CPackedBitmapSet *this_ptr);
void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_doNothing_FUN_0054c7d0(CPackedBitmapSet *this_ptr);
void __cdecl core_platfrm_cpp_staticInit_FUN_0054c7e0(void);
CPlatform * __cdecl core_platfrm_cpp_factoryFunc_FUN_0054c810(void);
CDemonActorType * __cdecl core_platfrm_cpp_CPlatform_getActorType_FUN_0054c840(CPlatform *this_ptr);
CPlatform * __cdecl core_platfrm_cpp_CPlatform_ctor_FUN_0054c850(CPlatform *this_ptr);
void __cdecl core_platfrm_cpp_CPlatform_setup_FUN_0054ca20(CPlatform *this_ptr);
void __cdecl core_platfrm_cpp_CPlatform_evaluatePosition_FUN_0054cab0(CPlatform *this_ptr);
void __cdecl core_platfrm_cpp_CPlatform_process_FUN_0054cc30(CPlatform *this_ptr,float delta_time);
void __cdecl core_platfrm_cpp_CPlatform_startMovement_FUN_0054d690(CPlatform *this_ptr,float goal_param,float movement_rate);
int __cdecl core_platfrm_cpp_CPlatform_renderOpaque_FUN_0054d720(CPlatform *this_ptr);
void __cdecl core_platfrm_cpp_CPlatform_renderBackground_FUN_0054d9b0(CPlatform *this_ptr,int layer_flag);
CBoundingBox3D * __cdecl core_platfrm_cpp_CPlatform_getBoundingBox_FUN_0054db70(CPlatform *this_ptr,CBoundingBox3D *out_box);
void __cdecl core_platfrm_cpp_CPlatform_archive_FUN_0054dbc0(CPlatform *this_ptr);
int __cdecl core_platfrm_cpp_CPlatform_isActorOnPlatform_FUN_0054df80(CPlatform *this_ptr,CDemonActor *actor);
int __cdecl core_platfrm_cpp_CPlatform_hasCollision_FUN_0054e180(CPlatform *this_ptr,SCollisionInfo *collision_info);
int __cdecl core_platfrm_cpp_CPlatform_allowBulletHoles_FUN_0054e1a0(CPlatform *this_ptr);
int __cdecl core_platfrm_cpp_CPlatform_getGroundType_FUN_0054e1c0(CPlatform *this_ptr);
int __cdecl core_platfrm_cpp_CPlatform_getBlockVirtualDirectorFlag_FUN_0054e1d0(CPlatform *this_ptr);
void __cdecl core_platfrm_cpp_CPlatform_attachActor_FUN_0054e1e0(CPlatform *this_ptr);
void __cdecl core_platfrm_cpp_CPlatform_onActorDeleted_FUN_0054e2e0(CPlatform *this_ptr,CDemonActor *deleted_actor);
void __cdecl core_platfrm_cpp_CPlatform_updateAttachedActors_FUN_0054e320(CPlatform *this_ptr);
void __cdecl core_platfrm_cpp_CPlatform_propertyDisplaySlewCallback_FUN_0054e400(CPlatform *this_ptr,CActorProperty *property,char *output_buffer);
int __cdecl core_platfrm_cpp_CPlatform_propertyActionSlewCallback_FUN_0054e480(CPlatform *this_ptr);
void __cdecl core_platfrm_cpp_CPlatform_propertyDisplayTypeCallback_FUN_0054e4e0(CPlatform *this_ptr,CActorProperty *property,char *output_buffer);
int __cdecl core_platfrm_cpp_CPlatform_propertyActionTypeCallback_FUN_0054e530(CPlatform *this_ptr,CActorProperty *property);
void __cdecl core_platfrm_cpp_CPlatform_propertyDisplayStateCallback_FUN_0054e700(CPlatform *this_ptr,CActorProperty *property,char *output_buffer);
int __cdecl core_platfrm_cpp_CPlatform_propertyActionStateCallback_FUN_0054e760(CPlatform *this_ptr);
void __cdecl core_platfrm_cpp_CPlatform_getPropertyList_FUN_0054e7d0(CPlatform *this_ptr,CActorPropertyList *property_list);
void __cdecl core_platfrm_cpp_CPlatform_processInEditor_FUN_0054ea00(CPlatform *this_ptr);
void __cdecl core_platfrm_cpp_CPlatform_showEditorHelp_FUN_0054f060(CPlatform *this_ptr,int *y_pos);
void __cdecl core_platfrm_cpp_CPlatform_addFilesToExtract_FUN_0054f2a0(CPlatform *this_ptr,_FILE *file_handle);
uint __cdecl engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(uint current_crc,uchar data_byte);
uint __cdecl engine_pod_cpp_crc32UpdateBuffer_FUN_0054f3a0(uchar *data_buffer,uint byte_count,uint initial_crc);
uint __cdecl engine_pod_cpp_crc32ComputeFromFile_FUN_0054f3e0(_FILE *file_stream,uint total_bytes);
uint __cdecl engine_pod_cpp_crc32ComputeFileRange_FUN_0054f490(char *filename,int start_offset);
CPodFile * __cdecl engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0(CPodFile *this_ptr);
CPodFile * __cdecl engine_pod_cpp_CPodFile_dtor_FUN_0054f610(CPodFile *this_ptr,uint flags);
int __cdecl engine_pod_cpp_qsortByFilename_FUN_0054f630(char **filename1_ptr,char **filename2_ptr);
int __cdecl engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile *this_ptr,char *pod_filename);

