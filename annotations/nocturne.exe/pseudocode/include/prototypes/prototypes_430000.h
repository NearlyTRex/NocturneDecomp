#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/fstream.h"
#include "system/iostream.h"
#include "types/classes/CBoundingBox3D.h"
#include "types/classes/CCharacter.h"
#include "types/classes/CCloth.h"
#include "types/classes/CClothList.h"
#include "types/classes/CCodec.h"
#include "types/classes/CColonel.h"
#include "types/classes/CConsole.h"
#include "types/classes/CConveyor.h"
#include "types/classes/CCourse.h"
#include "types/classes/CCrate.h"
#include "types/classes/CCrossbow.h"
#include "types/classes/CCurtain.h"
#include "types/classes/CDeformableModelInstance.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonCamera.h"
#include "types/classes/CDemonTriangle.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CHero.h"
#include "types/classes/CLZWCompress.h"
#include "types/classes/CLZWDecompress.h"
#include "types/classes/CLZWDictionary.h"
#include "types/classes/CMotionController.h"
#include "types/classes/CPlatform.h"
#include "types/classes/CQuaternion4f.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/classes/CZombieCow.h"
#include "types/structs/SBitBuffer.h"
#include "types/structs/SClothBone.h"
#include "types/structs/SClothVertex.h"
#include "types/structs/SCurtainVertex.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SEdge.h"
#include "types/structs/SFogGrid.h"
#include "types/structs/SRenderVertex.h"
#include "types/structs/SScanlineSpans.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x430000
// =============================================================================

void __cdecl cockpit_ckptutil_c_putPixel_FUN_00430140(int x,int y,int color);
undefined4 cockpit_ckptutil_c_FUN_004301d0(void);
int __cdecl cockpit_ckptutil_c_isLineClippingDisabled_FUN_004301e0(void);
void cockpit_ckptutil_c_FUN_004301f0(void);
void __cdecl cockpit_ckptutil_c_setLineClippingDisabled_FUN_00430200(int disabled);
void * cockpit_ckptutil_c_FUN_00430210(char *param_1,void *param_2,uint param_3,uint param_4,int param_5,int param_6);
void cockpit_ckptutil_c_FUN_004303d0(undefined4 *param_1,int param_2,uint param_3,uint param_4);
void __cdecl cockpit_ckptutil_c_setEdgeData_FUN_00430590(SEdge *edge_array,int edge_index,int x1,int y1,int x2,int y2,int flag_bit);
void * cockpit_ckptutil_c_FUN_00430630(int param_1,int *param_2,void *param_3,int *param_4,int param_5,int param_6,int param_7,int param_8,int param_9);
void __cdecl cockpit_ckptutil_c_flipEdgeArrayHorizontally_FUN_004310f0(SEdge *edge_array,int edge_count,int flip_width);
void __cdecl cockpit_ckptutil_c_FUN_00431260(void *bitmap_buffer,char *filename,SScanlineSpans *span_output,int width,int height,int transparent_color_index);
SRenderVertex * __cdecl engine_clipper_c_allocateClipVertex_FUN_004314b0(void);
void __cdecl engine_clipper_c_setNearPlaneDistance_FUN_00431500(int distance);
undefined4 engine_clipper_c_FUN_00431520(void);
void __cdecl engine_clipper_c_interpolateVertexLeftClip_FUN_00431530(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output);
void __cdecl engine_clipper_c_interpolateVertexRightClip_FUN_00431630(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output);
void __cdecl engine_clipper_c_interpolateVertexBottomClip_FUN_00431730(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output);
void __cdecl engine_clipper_c_interpolateVertexTopClip_FUN_00431830(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output);
void __cdecl engine_clipper_c_interpolateVertexNearClip_FUN_00431930(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output);
int __cdecl engine_clipper_c_clipPolygonLeftPlane_FUN_00431a50(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count);
int __cdecl engine_clipper_c_clipPolygonRightPlane_FUN_00431b90(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count);
int __cdecl engine_clipper_c_clipPolygonBottomPlane_FUN_00431cd0(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count);
int __cdecl engine_clipper_c_clipPolygonTopPlane_FUN_00431e10(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count);
void engine_clipper_c_FUN_00431f50(void);
void engine_clipper_c_FUN_00432057(void);
void engine_clipper_c_FUN_004320dc(void);
void __cdecl engine_clipper_c_normalizeClippedVertices_FUN_00432150(void);
undefined4 engine_clipper_c_FUN_00432210(uint param_1,int *param_2);
undefined4 engine_clipper_c_FUN_00432b48(void);
undefined4 engine_clipper_c_FUN_00432bd8(void);
void engine_clipper_c_FUN_00432cd0(uint param_1,int *param_2);
void __cdecl engine_clipper_c_copyMemory_FUN_00433770(void *dest_ptr,void *src_ptr,int byte_count);
void __cdecl engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_004337a0(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output);
void __cdecl engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_004338d0(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output);
void __cdecl engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433a00(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output);
void __cdecl engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433b30(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output);
void engine_clipper_c_FUN_00433c70(void);
void engine_clipper_c_FUN_00433cd7(void);
void engine_clipper_c_FUN_00433d43(void);
void engine_clipper_c_FUN_00433db0(void);
void engine_clipper_c_FUN_00433e1d(void);
void engine_clipper_c_FUN_00433e8d(void);
void engine_clipper_c_FUN_00433ef0(void);
void engine_clipper_c_FUN_00433f58(void);
void engine_clipper_c_FUN_00433fc8(void);
void engine_clipper_c_FUN_00434030(void);
void engine_clipper_c_FUN_0043409e(void);
void engine_clipper_c_FUN_0043410e(void);
void engine_clipper_c_FUN_00434160(void);
undefined4 engine_clipper_c_FUN_00434210(uint param_1,int *param_2);
undefined4 engine_clipper_c_FUN_00434492(void);
undefined4 engine_clipper_c_FUN_00434541(undefined4 param_1,undefined4 param_2,int param_3);
undefined4 engine_clipper_c_FUN_0043469b(void);
undefined4 engine_clipper_c_FUN_0043474d(void);
undefined4 engine_clipper_c_FUN_004347cc(undefined4 param_1,undefined4 param_2,int param_3);
undefined4 engine_clipper_c_FUN_0043484b(void);
undefined4 engine_clipper_c_FUN_004348ca(void);
void __cdecl engine_clipper_c_clipPolygonToViewport_FUN_004349a0(int vertex_count,int *vertex_indices);
CCloth * __cdecl core_cloth_cpp_CCloth_ctor_FUN_00435100(CCloth *this_ptr);
CCloth * __cdecl core_cloth_cpp_CCloth_dtor_FUN_00435160(CCloth *this_ptr,uint flags);
void __cdecl core_cloth_cpp_CCloth_allocMemory_FUN_004351b0(CCloth *this_ptr);
void core_cloth_cpp_FUN_00435210(int param_1);
int __cdecl core_cloth_cpp_CCloth_load_FUN_00435240(CCloth *this_ptr,char *filename);
void __cdecl core_cloth_cpp_CCloth_initializeConnections_FUN_004357b0(CCloth *this_ptr);
void __cdecl core_cloth_cpp_CCloth_setup_FUN_004359e0(CCloth *this_ptr,CVector3f *position,CVector3f *euler,CDeformableModelInstance *model_ptr);
void __cdecl core_cloth_cpp_CCloth_orientBoneToChild_FUN_004363e0(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr);
void __cdecl core_cloth_cpp_CCloth_computeBoneTransform_FUN_00436580(CCloth *this_ptr,int bone_index,CDeformableModelInstance *model_ptr);
void __cdecl core_cloth_cpp_CCloth_applyConstraints_FUN_004366f0(CCloth *this_ptr,SClothVertex *vertex);
void __cdecl core_cloth_cpp_CCloth_process_FUN_00436e50(CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y ,CDeformableModelInstance *model_ptr);
void __cdecl core_cloth_cpp_CCloth_step_FUN_00436e80(CCloth *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y ,CDeformableModelInstance *model_ptr);
void core_cloth_cpp_FUN_00437a60(int param_1);
void core_cloth_cpp_FUN_00437ab0(int param_1,int param_2,int param_3);
int __cdecl core_cloth_cpp_CCloth_saveJoinedLight_FUN_00437cc0(CCloth *this_ptr,CDeformableModelInstance *model_ptr);
void __cdecl core_cloth_cpp_CCloth_render_FUN_00437db0(CCloth *this_ptr,CDeformableModelInstance *deformable_model);
CClothList * __cdecl core_cloth_cpp_CClothList_ctor_FUN_00438210(CClothList *this_ptr);
CClothList * __cdecl core_cloth_cpp_CClothList_dtor_FUN_00438250(CClothList *this_ptr,uint flags);
void __cdecl core_cloth_cpp_CClothList_load_FUN_00438270(CClothList *this_ptr);
void __cdecl core_cloth_cpp_CClothList_reset_FUN_00438320(CClothList *this_ptr);
void __cdecl core_cloth_cpp_CClothList_add_FUN_00438390(CClothList *this_ptr,char *filename);
void core_cloth_cpp_CClothList_remove_FUN_00438410(int *param_1,int param_2);
void __cdecl core_cloth_cpp_CClothList_setup_FUN_00438510(CClothList *this_ptr,CVector3f *position,CVector3f *euler,CDeformableModelInstance *model_ptr);
void __cdecl core_cloth_cpp_CClothList_process_FUN_00438550(CClothList *this_ptr,CVector3f *position,CVector3f *euler,float delta_time,float floor_y,CDeformableModelInstance *model_ptr);
void __cdecl core_cloth_cpp_CClothList_render_FUN_004385a0(CClothList *this_ptr,CDeformableModelInstance *model_ptr);
void __cdecl core_cloth_cpp_CClothList_applyRotation_FUN_00438620(CClothList *this_ptr,CVector3f *euler);
void core_cloth_cpp_FUN_00438660(int *param_1,undefined4 *param_2);
void __cdecl core_cloth_cpp_CCloth_grabCloth_FUN_004386b0(CCloth *this_ptr,char *bone_name,int vertex_index);
void __cdecl core_cloth_cpp_CCloth_resetState_FUN_00438750(CCloth *this_ptr,int vertex_index);
void __cdecl core_cloth_cpp_CCloth_applyRotation_FUN_00438780(CCloth *this_ptr,CVector3f *euler);
float __cdecl core_cloth_cpp_fastInvSqrt_FUN_00438880(float dist_sq);
void __cdecl core_cloth_cpp_addVector_FUN_004388a0(CVector3f *a,CVector3f *b);
float __cdecl core_cloth_cpp_vectorLengthFast_FUN_004388d0(CVector3f *v);
CVector3f * __cdecl core_cloth_cpp_applyLightAttenuation_FUN_00438900(CVector3f *v);
CVector3f * __cdecl core_cloth_cpp_scaleVector_FUN_00438950(CVector3f *out,float *scale,CVector3f *v);
undefined4 core_cloth_cpp_FUN_00438980(undefined4 param_1);
undefined4 core_cloth_cpp_FUN_00438990(undefined4 param_1);
SClothVertex * __cdecl core_cloth_cpp_SClothVertex_ctor_FUN_004389a0(SClothVertex *this_ptr);
SClothVertex * __cdecl core_cloth_cpp_SClothVertex_dtor_FUN_004389c0(SClothVertex *this_ptr,uint flags);
CVector3f * __cdecl core_cloth_cpp_CVector3f_arrdtor_FUN_004389e0(CVector3f *objs,uint flags);
SClothVertex * __cdecl core_cloth_cpp_SClothVertex_arrdtor_FUN_00438a00(SClothVertex *objs,uint flags);
SClothBone * __cdecl core_cloth_cpp_SClothBone_arrdtor_FUN_00438a20(SClothBone *objs,uint flags);
int __cdecl support_codec_cpp_readByteWithCount_FUN_00438a40(_istream *istream,int *remaining_count);
void __cdecl support_codec_cpp_resetBitBuffer_FUN_00438a90(SBitBuffer *bit_buffer);
int __cdecl support_codec_cpp_readBitsFromStream_FUN_00438ab0(SBitBuffer *bit_buffer,int bit_count,_istream *istream,int *bytes_remaining);
void __cdecl support_codec_cpp_writeBitsToStream_FUN_00438c40(SBitBuffer *bit_buffer,int bit_count,int bit_value,_ostream *ostream);
void __cdecl support_codec_cpp_flushBitBuffer_FUN_00438d60(SBitBuffer *bit_buffer,_ostream *ostream);
int __cdecl support_codec_cpp_extractBitsFromBuffer_FUN_00438dc0(SBitBuffer *bit_state,int bit_count,char **output_pos,int *bytes_remaining);
CCodec * __cdecl support_codec_cpp_CCodec_ctor_FUN_00438f20(CCodec *this_ptr);
CCodec * __cdecl support_codec_cpp_CCodec_dtor_FUN_00438f30(CCodec *this_ptr,uint flags);
void support_codec_cpp_CCodec_init_FUN_00438f50(void);
undefined4 support_codec_cpp_CCodec_finalize_FUN_00438f80(void);
int __cdecl support_codec_cpp_CCodec_process_FUN_00438f90(CCodec *this_ptr,_istream *istream,int *byte_count,_ostream *ostream);
int __cdecl support_codec_cpp_CCodec_processToBuffer_FUN_00439000(CCodec *this_ptr,_istream *ifstream,int *byte_count,char *output_buffer,int *output_size,int enable_finalize);
int __cdecl support_codec_cpp_CCodec_processFromBuffer_FUN_004390b0(CCodec *this_ptr,char *input,int *input_length,_ostream *ostream);
int __cdecl support_codec_cpp_CCodec_processBuffer_FUN_00439120(CCodec *this_ptr,char *input,int *input_length,char *output,int *output_length,int enable_callback);
int __cdecl support_codec_cpp_CCodec_processFiles_FUN_004391b0(CCodec *this_ptr,char *input_file_path,char *output_file_path);
int __cdecl support_codec_cpp_CCodec_finalizeBuffer_FUN_004392d0(CCodec *this_ptr,char *buffer_ptr,int *buffer_size_ptr);
CLZWDictionary * __cdecl support_codec_cpp_CLZWDictionary_ctor_FUN_00439350(CLZWDictionary *this_ptr);
CLZWDictionary * __cdecl support_codec_cpp_CLZWDictionary_dtor_FUN_00439370(CLZWDictionary *this_ptr,uint flags);
void __cdecl support_codec_cpp_CLZWDictionary_free_FUN_00439390(CLZWDictionary *this_ptr);
void __cdecl support_codec_cpp_CLZWDictionary_init_FUN_004393d0(CLZWDictionary *this_ptr,int new_dict_size,int new_num_bits);
void __cdecl support_codec_cpp_CLZWDictionary_initTable_FUN_00439450(CLZWDictionary *this_ptr);
int __cdecl support_codec_cpp_CLZWDictionary_findCode_FUN_004394b0(CLZWDictionary *this_ptr,int search_code,int start_index);
int __cdecl support_codec_cpp_CLZWDictionary_addNode_FUN_004394f0(CLZWDictionary *this_ptr,int code,int parent_index);
int __cdecl support_codec_cpp_CLZWDictionary_readCodeFromStream_FUN_00439590(CLZWDictionary *this_ptr,SBitBuffer *bit_buffer,_istream *istream,int *bytes_remaining);
int __cdecl support_codec_cpp_CLZWDictionary_readCodeFromBuffer_FUN_00439630(CLZWDictionary *this_ptr,SBitBuffer *bit_buffer,char **input_buffer,int *bytes_remaining);
void __cdecl support_codec_cpp_CLZWDictionary_writeCodeBits_FUN_004396d0(CLZWDictionary *this_ptr,int code_value,SBitBuffer *bit_buffer,_ostream *ostream);
int __cdecl support_codec_cpp_CLZWDictionary_writeCodeSequence_FUN_00439760(CLZWDictionary *this_ptr,int code,_ostream *ostream);
int __cdecl support_codec_cpp_CLZWDictionary_decodeCodeToBuffer_FUN_004397d0(CLZWDictionary *this_ptr,int code,char **buffer_ptr_ptr);
CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_ctor_FUN_00439830(CLZWCompress *this_ptr,int buffer_size,int num_bits);
void __cdecl support_codec_cpp_CLZWCompress_init_FUN_00439880(CLZWCompress *this_ptr);
int __cdecl support_codec_cpp_CLZWCompress_process_FUN_004398c0(CLZWCompress *this_ptr,_istream *istream,int *byte_count,_ostream *ostream);
int __cdecl support_codec_cpp_CLZWCompress_finalize_FUN_004399a0(CLZWCompress *this_ptr,_ostream *ostream);
CLZWDecompress * __cdecl support_codec_cpp_CLZWDecompress_ctor_FUN_004399f0(CLZWDecompress *this_ptr,int buffer_size,int initial_bits);
void __cdecl support_codec_cpp_CLZWDecompress_init_FUN_00439a30(CLZWDecompress *this_ptr);
int __cdecl support_codec_cpp_CLZWDecompress_process_FUN_00439a70(CLZWDecompress *this_ptr,_istream *istream,int *byte_count,_ostream *ostream);
int __cdecl support_codec_cpp_CLZWDecompress_finalize_FUN_00439af0(CLZWDecompress *this_ptr,_ostream *ostream);
int __cdecl support_codec_cpp_CLZWDecompress_processBuffer_FUN_00439b30(CLZWDecompress *this_ptr,char *input,int *input_length,char *output,int *output_length,int enable_callback);
int __cdecl support_codec_cpp_CLZWDecompress_isDictionaryEmpty_FUN_00439bf0(CLZWDecompress *this_ptr);
CLZWDecompress * __cdecl support_codec_cpp_CLZWDecompress_dtor_FUN_00439c10(CLZWDecompress *this_ptr,uint flags);
CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_dtor_FUN_00439c70(CLZWCompress *this_ptr,uint flags);
void __cdecl core_colonel_cpp_staticInit_FUN_00439cd0(void);
CColonel * __cdecl core_colonel_cpp_factoryFunc_FUN_00439d00(void);
CDemonActorType * core_colonel_cpp_CColonel_getActorType_FUN_00439d20(void);
CHero * core_colonel_cpp_FUN_00439d30(CHero *param_1);
void __cdecl core_colonel_cpp_CColonel_setup_FUN_00439da0(CColonel *this_ptr);
void core_colonel_cpp_CColonel_process_FUN_00439f50(CColonel *param_1,float param_2);
void __cdecl core_colonel_cpp_CColonel_processAI_FUN_0043a470(CColonel *this_ptr,float delta_time);
ushort core_colonel_cpp_CColonel_processMotionEvents_FUN_0043a980(CCharacter *param_1,float param_2);
void core_colonel_cpp_CColonel_archive_FUN_0043a9e0(CHero *param_1);
void core_colonel_cpp_CColonel_renderOpaque_FUN_0043a9f0(CCharacter *param_1);
void core_colonel_cpp_CColonel_processDamage_FUN_0043aa00(CCharacter *param_1,SDamageInfo *param_2);
int __cdecl core_colonel_cpp_CColonel_isWeaponDrawn_FUN_0043ab20(CColonel *this_ptr);
void __cdecl core_colonel_cpp_CColonel_drawWeapon_FUN_0043ab30(CColonel *this_ptr,int drawn);
int __cdecl core_colonel_cpp_getCurrentMotionState_FUN_0043ab40(CMotionController *motion_ptr);
CHero * core_colonel_cpp_CColonel_dtor_FUN_0043ab60(CHero *param_1,byte param_2);
void __cdecl core_console_cpp_staticInit_FUN_0043abb0(void);
CConsole * __cdecl engine_console_cpp_CConsole_ctor_FUN_0043abe0(CConsole *this_ptr,int width,int height,int screen_x,int screen_y);
undefined4 engine_console_cpp_FUN_0043ac50(undefined4 param_1);
void engine_console_cpp_CConsole_printf_FUN_0043ac60(CConsole *param_1,char *param_2);
void __cdecl engine_console_cpp_CConsole_writeChar_FUN_0043ad30(CConsole *this_ptr,char character);
void __cdecl engine_console_cpp_CConsole_reset_FUN_0043ae00(CConsole *this_ptr);
void __cdecl engine_console_cpp_CConsole_scrollUp_FUN_0043ae40(CConsole *this_ptr);
void __cdecl engine_console_cpp_CConsole_render_FUN_0043aec0(CConsole *this_ptr);
void __cdecl core_conveyor_cpp_staticInit_FUN_0043aff0(void);
CConveyor * __cdecl core_conveyor_cpp_factoryFunc_FUN_0043b020(void);
CDemonActorType * core_conveyor_cpp_CConveyor_getActorType_FUN_0043b040(void);
CConveyor * __cdecl core_conveyor_cpp_CConveyor_ctor_FUN_0043b050(CConveyor *this_ptr);
void core_conveyor_cpp_CConveyor_setup_FUN_0043b110(CPlatform *param_1);
void core_conveyor_cpp_CConveyor_process_FUN_0043b1a0(CPlatform *param_1,float param_2);
undefined4 core_conveyor_cpp_FUN_0043b2f0(void);
void core_conveyor_cpp_CConveyor_renderBackground_FUN_0043b300(void);
void core_conveyor_cpp_CConveyor_archive_FUN_0043b310(CPlatform *param_1);
undefined4 core_conveyor_cpp_CConveyor_getCollisionType_FUN_0043b3b0(void);
CBoundingBox3D * __cdecl core_conveyor_cpp_CConveyor_getBoundingBox_FUN_0043b3c0(CConveyor *this_ptr,CBoundingBox3D *out_box);
CConveyor * __cdecl core_conveyor_cpp_CConveyor_dtor_FUN_0043b420(CConveyor *this_ptr,uint flags);
CPlatform * __cdecl core_conveyor_cpp_CPlatform_dtor_FUN_0043b490(CPlatform *this_ptr,uint flags);
undefined4 * core_course_cpp_FUN_0043b500(void);
float core_course_cpp_fmodfPositive_FUN_0043b510(float param_1,float param_2);
void core_course_cpp_FUN_0043b5b0(void);
CCourse * __cdecl core_course_cpp_CCourse_ctor_FUN_0043b5d0(CCourse *this_ptr);
CDemonTriangle * __cdecl core_course_cpp_CDemonTriangle_arrdtor_FUN_0043b5f0(CDemonTriangle *objs,uint flags);
void __cdecl core_course_cpp_CCourse_allocMemory_FUN_0043b610(CCourse *this_ptr,int count);
void __cdecl core_course_cpp_CCourse_load_FUN_0043b690(CCourse *this_ptr,char *filename);
void __cdecl core_course_cpp_CCourse_free_FUN_0043b7c0(CCourse *this_ptr);
void __cdecl core_course_cpp_CCourse_evaluate_FUN_0043b800(CCourse *this_ptr,float time,CVector3f *out_pos,CVector3f *out_euler);
void __cdecl core_course_cpp_CCourse_interpolate_FUN_0043b890(CCourse *this_ptr,float time,CVector3f *out_pos,CQuaternion4f *out_orient);
void __cdecl core_cow_cpp_staticInit_FUN_0043bb80(void);
CZombieCow * __cdecl core_cow_cpp_factoryFunc_FUN_0043bbb0(void);
CDemonActorType * core_cow_cpp_CZombieCow_getActorType_FUN_0043bbd0(void);
CEnemy * core_cow_cpp_FUN_0043bbe0(CEnemy *param_1);
void core_cow_cpp_CZombieCow_setup_FUN_0043bc50(CEnemy *param_1);
void core_cow_cpp_CZombieCow_process_FUN_0043bdb0(CEnemy *param_1,float param_2);
void core_cow_cpp_CZombieCow_archive_FUN_0043c2e0(CEnemy *param_1);
void __cdecl core_cow_cpp_CZombieCow_processDismemberment_FUN_0043c360(CZombieCow *this_ptr,SDamageInfo *damage_info);
void core_cow_cpp_CZombieCow_processDamage_FUN_0043c5e0(CZombieCow *param_1,SDamageInfo *param_2);
int __cdecl core_cow_cpp_CZombieCow_getTargetPoints_FUN_0043c6a0(CZombieCow *this_ptr,CVector3f *out_points_array);
CZombieCow * __cdecl core_cow_cpp_CZombieCow_dtor_FUN_0043c6f0(CZombieCow *this_ptr,uint flags);
void __cdecl core_crate_cpp_staticInit_FUN_0043c7b0(void);
CCrate * __cdecl core_crate_cpp_factoryFunc_FUN_0043c7e0(void);
CDemonActorType * core_crate_cpp_CCrate_getActorType_FUN_0043c800(void);
int * core_crate_cpp_FUN_0043c810(CDemonActor *param_1);
void core_crate_cpp_CCrate_setup_FUN_0043c870(CDemonActor *param_1);
int __cdecl core_crate_cpp_CCrate_canPickup_FUN_0043c940(CCrate *this_ptr,CDemonActor *picker);
void core_crate_cpp_CCrate_pickup_FUN_0043c960(int param_1,undefined4 param_2);
void core_crate_cpp_CCrate_onDropped_FUN_0043c970(int param_1);
undefined4 core_crate_cpp_CCrate_getCarrier_FUN_0043c990(int param_1);
void core_crate_cpp_CCrate_process_FUN_0043c9a0(CDemonActor *param_1);
int core_crate_cpp_CCrate_renderOpaque_FUN_0043cbc0(int param_1);
void core_crate_cpp_CCrate_renderBackground_FUN_0043cc30(void);
void core_crate_cpp_CCrate_archive_FUN_0043cc50(CDemonActor *param_1);
undefined4 core_crate_cpp_CCrate_getCollisionType_FUN_0043cca0(int param_1);
undefined4 * core_crate_cpp_CCrate_getBoundingBox_FUN_0043ccc0(int param_1,undefined4 *param_2);
undefined4 core_crate_cpp_CCrate_getTargetPoints_FUN_0043cd10(int param_1,float *param_2);
void __cdecl core_crate_cpp_CCrate_explode_FUN_0043cdb0(CCrate *this_ptr);
CDemonActor * core_crate_cpp_CCrate_dtor_FUN_0043ce60(CDemonActor *param_1,byte param_2);
void __cdecl core_crossbow_cpp_staticInit_FUN_0043ceb0(void);
CCrossbow * __cdecl core_crossbow_cpp_factoryFunc_FUN_0043cee0(void);
CDemonActorType * core_crossbow_cpp_CCrossbow_getActorType_FUN_0043cf00(void);
CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_ctor_FUN_0043cf10(CCrossbow *this_ptr);
void core_crossbow_cpp_CCrossbow_process_FUN_0043cfd0(CCharacter *param_1,float param_2);
int core_crossbow_cpp_CCrossbow_renderOpaque_FUN_0043d0a0(CDemonActor *param_1);
undefined4 core_crossbow_cpp_CCrossbow_renderTransparent_FUN_0043d120(int param_1);
undefined4 * core_crossbow_cpp_FUN_0043d150(int param_1,undefined4 *param_2);
undefined4 core_crossbow_cpp_FUN_0043d1c0(CCharacter *param_1);
float core_crossbow_cpp_CCrossbow_getCurFrame_FUN_0043d810(int param_1);
float core_crossbow_cpp_FUN_0043d840(void);
CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_dtor_FUN_0043d870(CCrossbow *this_ptr,uint flags);
void __cdecl core_curtain_cpp_staticInit_FUN_0043d8e0(void);
CCurtain * __cdecl core_curtain_cpp_factoryFunc_FUN_0043d930(void);
CDemonActorType * core_curtain_cpp_CCurtain_getActorType_FUN_0043d950(void);
CCurtain * __cdecl core_curtain_cpp_CCurtain_ctor_FUN_0043d960(CCurtain *this_ptr);
void core_curtain_cpp_CCurtain_setup_FUN_0043dad0(CCurtain *param_1);
void __cdecl core_curtain_cpp_CCurtain_updateWorldPositions_FUN_0043e110(CCurtain *this_ptr);
void __cdecl core_curtain_cpp_CCurtain_updateLocalPositions_FUN_0043e1e0(CCurtain *this_ptr);
void __cdecl core_curtain_cpp_CCurtain_solveConstraints_FUN_0043e290(CCurtain *this_ptr,SCurtainVertex *vertex);
void core_curtain_cpp_CCurtain_process_FUN_0043ebf0(CCurtain *param_1,float param_2);
int __cdecl core_curtain_cpp_FUN_0043f330(CCurtain *this_ptr);
int core_curtain_cpp_CCurtain_renderOpaque_FUN_0043f610(CCurtain *param_1);
int core_curtain_cpp_CCurtain_renderTransparent_FUN_0043f630(CCurtain *param_1);
undefined4 core_curtain_cpp_CCurtain_getCollisionType_FUN_0043f640(void);
void core_curtain_cpp_CCurtain_getBoundingBox_FUN_0043f650(int param_1,float *param_2);
void core_curtain_cpp_CCurtain_archive_FUN_0043f6b0(CDemonActor *param_1);
int __cdecl core_curtain_cpp_CCurtain_getBlockVirtualDirectorFlag_FUN_0043f8d0(CCurtain *this_ptr);
CDemonActor * core_curtain_cpp_CCurtain_dtor_FUN_0043f8e0(CDemonActor *param_1,byte param_2);
undefined4 core_curtain_cpp_FUN_0043f950(undefined4 param_1);
undefined4 core_curtain_cpp_FUN_0043f960(undefined4 param_1);
undefined4 core_curtain_cpp_SCollisionInfo_dtor_FUN_0043f970(undefined4 param_1);
SCurtainVertex * __cdecl core_curtain_cpp_FUN_0043f980(SCurtainVertex *objs,uint flags);
CVector3f * __cdecl core_curtain_cpp_CVector3f_arrdtor_FUN_0043f9a0(CVector3f *objs,uint flags);
void __cdecl core_dcamera_cpp_staticInit_FUN_0043f9c0(void);
void __cdecl core_dcamera_cpp_resetFogSamplingOffset_FUN_0043fa20(SFogGrid *fog);
void __cdecl core_dcamera_cpp_generateFogGrid_FUN_0043fa50(SFogGrid *fog);
uint __cdecl core_dcamera_cpp_sampleFogAlongRay_FUN_0043fc80(SFogGrid *fog_ptr,CVector3i *start_pos,CVector3i *end_pos,int ray_length);
void __cdecl core_dcamera_cpp_updateFogScrollOffset_FUN_0043fe60(SFogGrid *fog_ptr,int time_major,int time_minor);
CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_ctor_FUN_0043fee0(CDemonCamera *this_ptr);
CDemonCamera * core_dcamera_cpp_FUN_0043ff30(CDemonCamera *param_1);
void __cdecl core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_0043ff50(CDemonCamera *this_ptr);

