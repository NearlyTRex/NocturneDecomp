#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/stdio.h"
#include "types/classes/CActorPropertyList.h"
#include "types/classes/CCharacter.h"
#include "types/classes/CCmdParm.h"
#include "types/classes/CCmdParse.h"
#include "types/classes/CDeformableModel.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CDemonGlobe.h"
#include "types/classes/CDemonLight.h"
#include "types/classes/CDemonSet.h"
#include "types/classes/CMatrix3x3f.h"
#include "types/classes/CMotionList.h"
#include "types/classes/CScript.h"
#include "types/classes/CSentinel.h"
#include "types/classes/CStrList.h"
#include "types/classes/CVector3f.h"
#include "types/classes/CVector3i.h"
#include "types/enums/ECollisionType.h"
#include "types/enums/EEditorActionType.h"
#include "types/structs/SCollisionInfo.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SDisplayListSortEntry.h"
#include "types/structs/SMRGLHeaderPrimitive.h"
#include "types/structs/SMRGLPrimitiveTriangle.h"
#include "types/structs/SScriptXRef.h"
#include "types/unions/UOrientationVector.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x560000
// =============================================================================

int __cdecl core_script_cpp_CScript_processTimer_FUN_005600c0(CScript *this_ptr,float delta_time,float *timer_value);
void __cdecl core_script_cpp_CScript_setSpeaker_FUN_00560140(CScript *this_ptr,CDemonActor *actor);
int __cdecl core_script_cpp_CScript_findLabelIndex_FUN_00560160(CScript *this_ptr,char *label_name);
int __cdecl core_script_cpp_CScript_skipCommands_FUN_005601c0(CScript *this_ptr,int direction,int count);
void __cdecl core_script_cpp_CScript_resetDialogState_FUN_005602b0(CScript *this_ptr);
int __cdecl core_script_cpp_CScript_skipCinematic_FUN_005602e0(CScript *this_ptr);
void __cdecl core_script_cpp_CScript_dbLoad_FUN_005603c0(CScript *this_ptr,char *filename);
int __cdecl core_script_cpp_CScript_findDialogEntry_FUN_005606e0(CScript *this_ptr,char *path);
void __cdecl core_script_cpp_readActorReference_FUN_00560760(_FILE *file_handle,CDemonActor *actor_out);
void __cdecl core_script_cpp_writeActorReference_FUN_005607e0(_FILE *file_handle,CDemonActor **actor);
void __cdecl core_script_cpp_CScript_loadState_FUN_00560820(CScript *this_ptr,_FILE *file_handle);
void __cdecl core_script_cpp_CScript_saveState_FUN_00560b50(CScript *this_ptr,_FILE *file_handle);
uint __cdecl core_script_cpp_CScript_computeChecksum_FUN_00560d80(CScript *this_ptr);
int __cdecl core_script_cpp_CCmdParm_setTemplateText_FUN_00560de0(CCmdParm *this_ptr,char *template_text,int *parse_cursor);
int __cdecl core_script_cpp_parseCommandWithTemplates_FUN_00561690(char *input_text,char *cmd_name_out,char *prefix_out,char *suffix_out,int cursor_position,CCmdParm *parm_out,CCmdParse *parse_out,char **templates,int template_count);
int __cdecl core_script_cpp_parseConditionExpression_FUN_00561a30(char *input_text,char *cmd_name_out,char *prefix_out,char *suffix_out,int cursor_position,CCmdParm *parm_out,CCmdParse *parse_out);
int __cdecl core_script_cpp_parseCommandWithDefaultTemplates_FUN_00561c70(char *input_text,char *cmd_name_out,char *prefix_out,char *suffix_out,int cursor_position,CCmdParm *parm_out,CCmdParse *parse_out);
int __cdecl core_script_cpp_CCmdParm_parseValue_FUN_00561cb0(CCmdParm *this_ptr,char *input_text,int *cursor,int end_position);
int __cdecl core_script_cpp_CCmdParse_bestParse_FUN_00561db0(CCmdParse *this_ptr,char *input_text,int cursor_position,char **templates,int template_count);
int __cdecl core_script_cpp_CCmdParse_parse_FUN_00561fd0(CCmdParse *this_ptr,char *input_text,char *template_text);
void __cdecl core_script_cpp_CCmdParse_toString_FUN_005624f0(CCmdParse *this_ptr,char *output_buffer);
int __cdecl core_script_cpp_CCmdParse_getParamIndexAtCursor_FUN_00562620(CCmdParse *this_ptr,int cursor_position);
int __cdecl core_script_cpp_CCmdParse_getParamTextLength_FUN_005626d0(CCmdParse *this_ptr,int param_count);
int __cdecl core_script_cpp_CCmdParse_getParamTextLengthAt_FUN_00562760(CCmdParse *this_pointer,int param_index);
CCharacter * __cdecl core_script_cpp_CCmdParm_getCharacterByContext_FUN_005627f0(CCmdParm *this_ptr,CCmdParse *context);
CMotionList * __cdecl core_script_cpp_CCmdParm_getMotionListByContext_FUN_00562860(CCmdParm *this_ptr,CCmdParse *context);
int __cdecl core_script_cpp_editParameterValue_FUN_00562920(char *value_buffer,int param_type,CCmdParm *param,CCmdParse *context);
void __cdecl core_script_cpp_CCmdParse_applyActorParameters_FUN_00564090(CCmdParse *this_ptr,CDemonActor *actor);
void __cdecl core_script_cpp_expandTemplateText_FUN_005643d0(char *buffer,char *template_text);
void __cdecl core_script_cpp_clearSelections_FUN_005644e0(void);
void __cdecl core_script_cpp_updateSelection_FUN_00564500(void);
void __cdecl core_script_cpp_getSelectionRangeForLine_FUN_00564560(int line,int *sel_start_col_out,int *sel_end_col_out);
void __cdecl core_script_cpp_CScript_drawEditor_FUN_005645d0(CScript *this_ptr);
void __cdecl core_script_cpp_CScript_editorAction_FUN_00564820(CScript *this_ptr,EEditorActionType action_type,int action_parm);
void __cdecl core_script_cpp_CScript_processEditorInput_FUN_00565130(CScript *this_ptr);
void __cdecl core_script_cpp_CScript_gotoPosition_FUN_00565aa0(CScript *this_ptr,int column,int line);
void __cdecl core_script_cpp_CScript_editParameterAtPosition_FUN_00565ae0(CScript *this_ptr,int column,int line);
void __cdecl core_script_cpp_CScript_executeContextAction_FUN_00565d00(CScript *this_ptr,int column,int line);
void __cdecl core_script_cpp_CScript_showSyntaxHelp_FUN_00565e70(CScript *this_ptr,int column,int line);
void __cdecl core_script_cpp_CScript_setParameterValue_FUN_00565f70(CScript *this_ptr,char *value);
void __cdecl core_script_cpp_CScript_checkSyntax_FUN_00566080(CScript *this_ptr);
void __cdecl core_script_cpp_CScript_saveToFile_FUN_00566180(CScript *this_ptr,char *filename);
void __cdecl core_script_cpp_CScript_loadLineToBuffer_FUN_00566230(CScript *this_ptr,int line_number);
void __cdecl core_script_cpp_CScript_editorPutLine_FUN_005662a0(CScript *this_ptr,int line_number);
void __cdecl core_script_cpp_CScript_splitLineAtColumn_FUN_00566330(CScript *this_ptr,int column,int line);
void __cdecl core_script_cpp_CScript_insertText_FUN_00566390(CScript *this_ptr,char *text,int update_cursor);
void __cdecl core_script_cpp_CScript_drawLine_FUN_005664d0(CScript *this_ptr,int line_number);
void __cdecl core_script_cpp_CScript_initEditorLayout_FUN_00566660(CScript *this_ptr,int x,int y,int width,int height);
void __cdecl core_script_cpp_CScript_updateLineMetrics_FUN_00566800(CScript *this_ptr,int line_number);
void __cdecl core_script_cpp_CScript_clampCursorToView_FUN_00566880(CScript *this_ptr);
void __cdecl core_script_cpp_CScript_updateCursorBounds_FUN_00566910(CScript *this_ptr);
void __cdecl core_script_cpp_CScript_updateScrollPosition_FUN_005669a0(CScript *this_ptr);
int __cdecl core_script_cpp_CScript_editorX2Index_FUN_00566a90(CScript *this_ptr,int line_number,int visual_column);
uint __cdecl core_script_cpp_CScript_editorIndex2X_FUN_00566b30(CScript *this_ptr,int line_number,uint buffer_index);
void __cdecl core_script_cpp_CScript_updateMouseCursor_FUN_00566bc0(CScript *this_ptr);
int __cdecl core_script_cpp_CScript_screenToScriptPosition_FUN_00566c20(CScript *this_ptr,int pixel_x,int pixel_y,int *column_out,int *line_out);
int __cdecl core_script_cpp_CScript_findText_FUN_00566cc0(CScript *this_ptr,char *search_str,int start_col,int start_line,uint *found_col,int *found_line,uint *found_end_col,int direction);
void __cdecl core_script_cpp_CScript_collectLabels_FUN_00566fa0(CScript *this_ptr,CStrList *labels_out);
void __cdecl core_script_cpp_CScript_parseCommandList_FUN_00567010(CScript *this_ptr,char *commands,SScriptXRef *xref_data);
void __cdecl core_script_cpp_CScript_parseCommand_FUN_00567080(CScript *this_ptr,char *text,SScriptXRef *xref_data);
void __cdecl core_script_cpp_CScript_extractCrossReferences_FUN_005671a0(CScript *this_ptr,char *text,SScriptXRef *xref_data);
int __cdecl core_script_cpp_CScript_tokenizeAtCursor_FUN_00567310(CScript *this_ptr,char *input_text,CStrList *tokens_out,int *cursor_pos);
void __cdecl core_script_cpp_CScript_parseActionTemplate_FUN_00567490(CScript *this_ptr,char *text,SScriptXRef *xref_data);
void __cdecl core_script_cpp_CScript_addEventXRef_FUN_00567510(CScript *this_ptr,SScriptXRef *xref_data);
int __cdecl core_script_cpp_compareEventXRefs_FUN_005675a0(SScriptXRef *a,SScriptXRef *b);
void __cdecl core_script_cpp_CScript_rebuildEventXRefs_FUN_00567630(CScript *this_ptr);
void __cdecl core_script_cpp_CScript_removeEventXRef_FUN_005676e0(CScript *this_ptr,int index);
int __cdecl core_script_cpp_CScript_browseEventXRefs_FUN_005677a0(CScript *this_ptr,char *dialog_title,char *selected_name);
void __cdecl core_script_cpp_CScript_collectSoundReferences_FUN_00567bc0(CScript *this_ptr,CStrList *sounds_out);
CVector3f * __cdecl core_script_cpp_makeVector_FUN_00567d00(CVector3f *out,float x,float y,float z);
char * __cdecl core_script_cpp_getDeformableModelFilename_FUN_00567d30(CDeformableModel *model_ptr);
void __cdecl core_sentinel_cpp_staticInit_FUN_00567d40(void);
CSentinel * __cdecl core_sentinel_cpp_factoryFuncSentinel_FUN_00567d70(void);
CDemonActorType * __cdecl core_sentinel_cpp_CSentinel_getActorType_FUN_00567da0(CSentinel *this_ptr);
CSentinel * __cdecl core_sentinel_cpp_CSentinel_ctor_FUN_00567db0(CSentinel *this_ptr);
void __cdecl core_sentinel_cpp_CSentinel_setup_FUN_00567e20(CSentinel *this_ptr);
void __cdecl core_sentinel_cpp_CSentinel_process_FUN_00568030(CSentinel *this_ptr,float delta_time);
int __cdecl core_sentinel_cpp_CSentinel_attractActorToward_FUN_00568b70(CSentinel *this_ptr,CDemonActor *actor,CVector3f *target_local_point);
void __cdecl core_sentinel_cpp_CSentinel_archive_FUN_00568c70(CSentinel *this_ptr);
void __cdecl core_sentinel_cpp_CSentinel_processDamage_FUN_00568cd0(CSentinel *this_ptr,SDamageInfo *damage_info);
int __cdecl core_sentinel_cpp_CSentinel_getTargetPoints_FUN_00568dd0(CSentinel *this_ptr,CVector3f *out_points_array);
ECollisionType __cdecl core_sentinel_cpp_CSentinel_getCollisionType_FUN_00568ef0(CSentinel *this_ptr,SCollisionInfo *collision_info);
void __cdecl core_sentinel_cpp_CSentinel_getPropertyList_FUN_00568f10(CSentinel *this_ptr,CActorPropertyList *property_list);
void __cdecl core_sentinel_cpp_CSentinel_addFilesToExtract_FUN_00568f50(CSentinel *this_ptr,_FILE *file_handle);
CSentinel * __cdecl core_sentinel_cpp_CSentinel_dtor_FUN_00568f80(CSentinel *this_ptr,uint flags);
void __cdecl core_set_cpp_staticInit_FUN_00569040(void);
CDemonSet * __cdecl core_set_cpp_CDemonSet_ctor_FUN_005690c0(CDemonSet *this_ptr);
CDemonSet * __cdecl core_set_cpp_CDemonSet_dtor_FUN_00569350(CDemonSet *this_ptr,uint flags);
void __cdecl core_set_cpp_CDemonSet_clear_FUN_005693c0(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_load_FUN_00569410(CDemonSet *this_ptr,char *filename);
void __cdecl core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(CDemonSet *this_ptr,float frustum_param,int render_mode);
void __cdecl core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(CDemonSet *this_ptr,int light_index);
void __cdecl core_set_cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0056aca0(CDemonSet *this_ptr,int layer_flag);
void __cdecl core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_0056ade0(CDemonSet *this_ptr,CDemonActor *actor);
void __cdecl core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet *this_ptr,int index);
int __cdecl core_set_cpp_CDemonSet_findCameraByName_FUN_0056b790(CDemonSet *this_ptr,char *name);
void __cdecl core_set_cpp_CDemonSet_reinitCamera_FUN_0056b7e0(CDemonSet *this_ptr,int clear_enabled,int is_clearing,int screen_height);
void __cdecl core_set_cpp_CDemonSet_processActors_FUN_0056b810(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_renderStaticLights_FUN_0056be80(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_renderScene_FUN_0056c1a0(CDemonSet *this_ptr,int skip_prerender);
void __cdecl core_set_cpp_CDemonSet_renderGogglesView_FUN_0056c990(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_renderOpaqueActors_FUN_0056cd60(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_renderTransparentActors_FUN_0056cf00(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_addDynamicLight_FUN_0056d090(CDemonSet *this_ptr,CDemonLight *light);
void __cdecl core_set_cpp_CDemonSet_addCoronaGlobe_FUN_0056d110(CDemonSet *this_ptr,CDemonGlobe *globe);
void __cdecl core_set_cpp_CDemonSet_addQueuedCoronaGlobe_FUN_0056d140(CDemonSet *this_ptr,CDemonGlobe *globe);
void __cdecl core_set_cpp_CDemonSet_renderLightDebugView_FUN_0056d190(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_clearLights_FUN_0056d2d0(CDemonSet *this_ptr);
void __cdecl core_set_cpp_CDemonSet_setLightingParameters_FUN_0056d380(CDemonSet *this_ptr,CVector3f *position,UOrientationVector *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix);
int __cdecl core_set_cpp_CDemonSet_gatherVisibleLights_FUN_0056d4a0(CDemonSet *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix);
int __cdecl core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal);
void __cdecl core_set_cpp_CDemonSet_lightVertexColor_FUN_0056ddb0(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int vertex_index,int skip_lighting_calculation);
void __cdecl core_set_cpp_CDemonSet_computeLighting_FUN_0056e110(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal,int start_vertex_index,int vertex_count);
void __cdecl core_set_cpp_computeTriangleNormal_FUN_0056e180(CVector3i *vertex_array,SMRGLPrimitiveTriangle *triangle);
void __cdecl core_set_cpp_computeTriangleNormalIndexed_FUN_0056e2b0(CVector3i *vertex_array,ushort *triangle_indices,CVector3f *out_normal);
void __cdecl core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0056e3e0(CDemonSet *this_ptr,CVector3f *vertex_position,CVector3f *position_offset,int vertex_index);
void __cdecl core_set_cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0056e5d0(CDemonSet *this_ptr,int vertex_count);
void __cdecl core_set_cpp_CDemonSet_rotateVerticies_FUN_0056e7c0(CDemonSet *this_ptr,int vertex_count,CVector3i *input_vertices);
CVector3i * __stack_esi core_set_cpp_transformToWorldSpace_FUN_0056e890(CVector3i *input,CVector3i *output);
CVector3i * __stack_esi core_set_cpp_transformNormalFixedPoint_FUN_0056e960(CVector3i *input,CVector3i *output);
void __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0(CDemonSet *this_ptr,int vertex_count,int tri_count,void *face_data,CVector3i *vertex_positions,int vertices_per_face,CVector3i *vertex_normals);
void __cdecl core_set_cpp_CDemonSet_process_FUN_0056f940(CDemonSet *this_ptr);
float __cdecl core_set_cpp_CDemonSet_getReverbPresetAtPosition_FUN_0056fac0(CDemonSet *this_ptr,CVector3f *position);
void __cdecl core_set_cpp_CDemonSet_loadAssets_FUN_0056fb80(CDemonSet *this_ptr);
int __cdecl core_set_cpp_qsortByDisplayListEntry_FUN_0056fba0(SDisplayListSortEntry *a,SDisplayListSortEntry *b);
void __cdecl core_set_cpp_CDemonSet_buildDisplayList_FUN_0056fbd0(CDemonSet *this_ptr,uint dirty_flags_mask);
void __cdecl core_set_cpp_CDemonSet_renderEnvMapBatchTri_FUN_0056ffe0(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prims,int count,int alpha);

