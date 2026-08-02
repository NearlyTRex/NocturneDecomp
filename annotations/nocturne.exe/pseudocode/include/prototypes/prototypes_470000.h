#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/time.h"
#include "types/classes/CBitFont.h"
#include "types/classes/CCharacter.h"
#include "types/classes/CDemonActor.h"
#include "types/classes/CDemonActorType.h"
#include "types/classes/CEdButton.h"
#include "types/classes/CEdCheck.h"
#include "types/classes/CEdScrollBar.h"
#include "types/classes/CEditorTools.h"
#include "types/classes/CElephantGun.h"
#include "types/classes/CEmitter.h"
#include "types/classes/CEnemy.h"
#include "types/classes/CEventList.h"
#include "types/classes/CPickList.h"
#include "types/classes/CStrList.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SLaserInfo.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x470000
// =============================================================================

void shape_edittool_cpp_FUN_004700d0(undefined4 param_1,char *param_2);
void shape_edittool_cpp_FUN_004701a0(CEditorTools *param_1,char *param_2);
bool shape_edittool_cpp_FUN_00470230(undefined4 param_1,char *param_2);
bool shape_edittool_cpp_FUN_00470310(undefined4 param_1,char *param_2);
undefined4 shape_edittool_cpp_FUN_004703f0(undefined4 param_1,char *param_2);
int __cdecl shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_00470550(CEditorTools *this_ptr,char *dialog_title,char *search_directory,char *file_pattern,char *output_filename,uint flags);
undefined4 shape_edittool_cpp_FUN_00470730(void);
int __cdecl shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_00470eb0(CEditorTools *this_ptr,char *dialog_title,char *directory_path,char *file_extension,char *output_buffer,uint flags);
int __cdecl shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00471360(CEditorTools *this_ptr,char *prompt_text,int *result_ptr,int enable_range_check,int min_value,int max_value,int show_current_value);
int __cdecl shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_00471430(CEditorTools *this_ptr,char *prompt_text,float *result_ptr,int enable_range_check,float min_value,float max_value,int show_current_value);
int __cdecl shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_00471530(CEditorTools *editor_tools,char *prompt_text,CVector3f *result_ptr,int show_current_value);
int __cdecl shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00471600(CEditorTools *this_ptr,char *prompt_text,char *input_buffer,int buffer_size,int dialog_flags);
int __cdecl shape_edittool_cpp_CEditorTools_showCheatInputDialog_FUN_00471630(CEditorTools *this_ptr,char *prompt_text,char *input_buffer,int buffer_size,int dialog_flags);
void __cdecl shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_00471660(CEditorTools *this_ptr,char *message_text);
void __cdecl shape_edittool_cpp_CEditorTools_updatePercentage_FUN_00471760(CEditorTools *this_ptr,float current_progress,float total_progress);
void __cdecl shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00471a80(CEditorTools *this_ptr,int min_width,int min_height,char *text_content,uint window_flags);
void __cdecl shape_edittool_cpp_CEditorTools_createModalWindow_FUN_00471b50(CEditorTools *this_ptr,int left,int top,int right,int bottom,char *text_content,uint window_flags);
void shape_edittool_cpp_FUN_004720c0(CEditorTools *param_1);
void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_004721e0(CEditorTools *this_ptr);
void shape_edittool_cpp_FUN_004722b0(void);
uint __cdecl shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_00472490(CEditorTools *this_ptr);
void __cdecl shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_004724e0(CEditorTools *this_ptr,int use_clipping);
char * __cdecl shape_edittool_cpp_CEditorTools_getClipboardText_FUN_00472c90(CEditorTools *this_ptr);
void __cdecl shape_edittool_cpp_CEditorTools_setClipboardText_FUN_00472d10(CEditorTools *this_ptr,char *text_data);
void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_00472de0(CEditorTools *this_ptr,float scale_factor,int text_color);
void shape_edittool_cpp_FUN_00472fd0(CEditorTools *param_1,float param_2,int param_3,float *param_4,float *param_5);
void __cdecl shape_edittool_cpp_draw3DInterpolatedLine_FUN_00473080(CVector3f *start_point,CVector3f *end_point);
void __cdecl shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_00473190(CEditorTools *this_ptr,CVector3f *corner1,CVector3f *corner2,int color_value);
void __cdecl shape_edittool_cpp_CEditorTools_drawCenteredWireframeCube_FUN_00473650(CEditorTools *this_ptr,CVector3f *dimensions,int color_value);
void __cdecl shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004736d0(CEditorTools *this_ptr,char *output_buffer);
void __cdecl shape_edittool_cpp_CEditorTools_drawPixelLine_FUN_004737a0(CEditorTools *this_ptr,int start_x,int start_y,int length);
void __cdecl shape_edittool_cpp_CEditorTools_draw3DProjectedLine_FUN_004739e0(CEditorTools *this_ptr,CVector3f *world_point,int line_length);
void shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_00473a60(undefined4 param_1,uint param_2,uint param_3,uint param_4);
CStrList * __cdecl shape_edittool_cpp_CStrList_ctor_FUN_00473b60(CStrList *this_ptr);
CStrList * __cdecl shape_edittool_cpp_CStrList_dtor_FUN_00473b80(CStrList *this_ptr,uint flags);
CStrList * __cdecl shape_edittool_cpp_CStrList_copy_FUN_00473bd0(CStrList *this_ptr,CStrList *other);
CStrList * __cdecl shape_edittool_cpp_CStrList_copyFrom_FUN_00473c00(CStrList *dest_ptr,CStrList *source_ptr);
void __cdecl shape_edittool_cpp_CStrList_clear_FUN_00473c50(CStrList *this_ptr);
void __cdecl shape_edittool_cpp_CStrList_add_FUN_00473cb0(CStrList *this_ptr,char *string_data);
void __cdecl shape_edittool_cpp_CStrList_appendRange_FUN_00473cd0(CStrList *this_ptr,CStrList *source_list);
void __cdecl shape_edittool_cpp_CStrList_insert_FUN_00473cf0(CStrList *this_ptr,int insert_index,char *string_data);
void __cdecl shape_edittool_cpp_CStrList_allocate_FUN_00473de0(CStrList *this_ptr,int new_capacity);
void __cdecl shape_edittool_cpp_CStrList_insertRange_FUN_00473e90(CStrList *this_ptr,int insertion_index,CStrList *source_list);
void __cdecl shape_edittool_cpp_CStrList_removeAt_FUN_00473ef0(CStrList *this_ptr,int index);
void __cdecl shape_edittool_cpp_CStrList_remove_FUN_00473f10(CStrList *this_ptr,int start_index,int end_index);
void __cdecl shape_edittool_cpp_CStrList_sortAll_FUN_00473fd0(CStrList *this_ptr);
void shape_edittool_cpp_FUN_00473ff0(undefined4 *param_1,undefined4 *param_2);
void __cdecl shape_edittool_cpp_CStrList_sort_FUN_00474010(CStrList *this_ptr,int sort_type,int sort_order);
char * __cdecl shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(CStrList *this_ptr,int index);
void __cdecl shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090(CStrList *this_ptr,char *output_buffer,int string_index,int field_number);
int __cdecl shape_edittool_cpp_CStrList_findString_FUN_00474140(CStrList *this_ptr,char *search_string);
int __cdecl shape_edittool_cpp_CStrList_findByFirstField_FUN_00474180(CStrList *this_ptr,char *search_field);
void shape_edittool_cpp_CStrList_setStringAt_FUN_00474230(int *param_1,int param_2,char *param_3);
void __cdecl shape_edittool_cpp_CStrList_swap_FUN_00474300(CStrList *this_ptr,int index1,int index2);
void __cdecl shape_edittool_cpp_CStrList_copyToClipboard_FUN_00474380(CStrList *this_ptr);
void __cdecl shape_edittool_cpp_CStrList_insertSortedFileRecord_FUN_00474460(CStrList *this_ptr,char *search_key,char *file_path,int file_size,time_t file_timestamp);
void __cdecl shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004746b0(CStrList *this_ptr,char *directory_path,char *file_pattern);
void __cdecl shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0(CStrList *this_ptr,char *directory_path,char *file_pattern);
void shape_edittool_cpp_FUN_00474ae0(CStrList *param_1,char *param_2,char *param_3);
CPickList * __cdecl shape_edittool_cpp_CPickList_ctor_FUN_00474c90(CPickList *this_ptr);
CPickList * __cdecl shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(CPickList *this_ptr,uint flags);
int shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70(CPickList *param_1,char *param_2,int param_3);
void __cdecl shape_edittool_cpp_CPickList_initializeDialog_FUN_00474e70(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags);
undefined4 shape_edittool_cpp_CPickList_handleInput_FUN_00474ea0(CPickList *param_1);
int __cdecl shape_edittool_cpp_FUN_00475230(CPickList *this_ptr);
void shape_edittool_cpp_FUN_00475470(CStrList *param_1,char *param_2,uint param_3);
void __cdecl shape_edittool_cpp_FUN_004759d0(CPickList *this_ptr);
void shape_edittool_cpp_CPickList_validateScrollBounds_FUN_00475db0(int *param_1);
int __cdecl shape_edittool_cpp_CPickList_getItemAtMousePosition_FUN_00475f10(CPickList *this_ptr,int mouse_x,int mouse_y);
void __cdecl shape_edittool_cpp_CPickList_enableItem_FUN_00475f80(CPickList *this_ptr,int item_index,int enable_flag);
int __cdecl shape_edittool_cpp_CPickList_isItemEnabled_FUN_00476040(CPickList *this_ptr,int item_index);
void shape_edittool_cpp_CPickList_insert_FUN_004760a0(CStrList *param_1,int param_2,char *param_3);
void shape_edittool_cpp_CPickList_remove_FUN_00476100(CStrList *param_1,int param_2,int param_3);
void shape_edittool_cpp_FUN_00476160(CStrList *param_1);
void __cdecl shape_edittool_cpp_CPickList_sort_FUN_004761a0(CPickList *this_ptr,int sort_type,int sort_order);
void shape_edittool_cpp_CPickList_swap_FUN_00476200(CStrList *param_1,int param_2,int param_3);
void __cdecl shape_edittool_cpp_draw3DBorder_FUN_00476260(int left,int top,int width,int height,int border_style_flag);
void shape_edittool_cpp_draw3DInsetBorder_FUN_00476310(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
CEdScrollBar * __cdecl shape_edittool_cpp_CEdScrollBar_ctor_FUN_00476450(CEdScrollBar *this_ptr);
CEdScrollBar * __cdecl shape_edittool_cpp_FUN_00476490(CEdScrollBar *this_ptr,uint flags);
void __cdecl shape_edittool_cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004764b0(CEdScrollBar *this_ptr);
void __cdecl shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004764d0(CEdScrollBar *this_ptr,int left_pos,int top_pos,int right_pos,int bottom_pos);
void __cdecl shape_edittool_cpp_CEdScrollBar_render_FUN_00476580(CEdScrollBar *this_ptr);
void __cdecl shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_00476800(CEdScrollBar *this_ptr);
void __cdecl shape_edittool_cpp_CEdScrollBar_handleInput_FUN_00476920(CEdScrollBar *this_ptr);
void __cdecl shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_00476ce0(CEdScrollBar *this_ptr);
int __cdecl shape_edittool_cpp_calculateGridWidth_FUN_00476df0(void);
int __cdecl shape_edittool_cpp_calculateGridHeight_FUN_00476e10(void);
undefined4 shape_edittool_cpp_FUN_00476e70(undefined4 param_1);
void shape_edittool_cpp_FUN_00476e90(int param_1);
void __cdecl shape_edittool_cpp_CEdButton_calculateAndSetBounds_FUN_00476eb0(CEdButton *this_ptr,int x_pos,int y_pos,char *button_text);
void __cdecl shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_00476ef0(CEdButton *this_ptr,int left,int top,int right,int bottom,char *button_text);
void shape_edittool_cpp_FUN_00476f40(int param_1);
undefined4 shape_edittool_cpp_FUN_00476fd0(void);
int __cdecl shape_edittool_cpp_calculateButtonWidth_FUN_00477080(char *button_text);
int __cdecl shape_edittool_cpp_calculateButtonHeight_FUN_00477100(char *button_text);
CEdCheck * __cdecl shape_edittool_cpp_CEdCheck_ctor_FUN_00477190(CEdCheck *this_ptr);
CEdCheck * shape_edittool_cpp_FUN_004771d0(void);
void shape_edittool_cpp_FUN_004771f0(void);
void __cdecl shape_edittool_cpp_FUN_004772e0(CEdCheck *this_ptr);
int __cdecl shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_00477300(CEdCheck *this_ptr);
int __cdecl shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_00477340(CEdCheck *this_ptr);
int __cdecl shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_00477370(CEdCheck *this_ptr);
void __cdecl shape_edittool_cpp_CEdCheck_render_FUN_00477390(CEdCheck *this_ptr);
int __cdecl shape_edittool_cpp_CEdCheck_handleInput_FUN_004774b0(CEdCheck *this_ptr);
int __cdecl shape_edittool_cpp_wildcardStringMatch_FUN_004775b0(char *pattern,char *target_string,int case_sensitive);
int __cdecl shape_edittool_cpp_CStrList_getItemCount_FUN_00477660(CStrList *this_ptr);
int __cdecl shape_edittool_cpp_getFontMaxCharHeight_FUN_00477670(CBitFont *font_ptr);
void shape_edittool_cpp_FUN_0047767b(void);
void shape_edittool_cpp_FUN_00477690(void);
void __cdecl core_elephant_cpp_staticInit_FUN_004776b0(void);
CElephantGun * __cdecl core_elephant_cpp_factoryFunc_FUN_004776e0(void);
CDemonActorType * core_elephant_cpp_CElephantGun_getActorType_FUN_00477700(void);
CElephantGun * __cdecl core_elephant_cpp_CElephantGun_ctor_FUN_00477710(CElephantGun *this_ptr);
void __cdecl core_elephant_cpp_CElephantGun_process_FUN_004777a0(CElephantGun *this_ptr,float delta_time);
undefined4 core_elephant_cpp_FUN_00477890(CCharacter *param_1);
void core_elephant_cpp_CElephantGun_onFired_FUN_00477fd0(CDemonActor *param_1);
float __cdecl core_elephant_cpp_CElephantGun_getDamage_FUN_004780e0(CElephantGun *this_ptr);
void __cdecl core_elephant_cpp_CElephantGun_fireProjectile_FUN_00478120(CElephantGun *this_ptr);
CElephantGun * __cdecl core_elephant_cpp_CElephantGun_dtor_FUN_00478310(CElephantGun *this_ptr,uint flags);
void __cdecl core_emitter_cpp_staticInit_FUN_00478360(void);
CEmitter * __cdecl core_emitter_cpp_factoryFunc_FUN_00478390(void);
CDemonActorType * core_emitter_cpp_CEmitter_getActorType_FUN_004783b0(void);
CEmitter * __cdecl core_emitter_cpp_CEmitter_ctor_FUN_004783c0(CEmitter *this_ptr);
void core_emitter_cpp_CEmitter_setup_FUN_00478520(CDemonActor *param_1);
void __cdecl core_emitter_cpp_CEmitter_launchFireballAtHero_FUN_004785a0(CEmitter *this_ptr);
void core_emitter_cpp_CEmitter_process_FUN_00478790(CEmitter *param_1,float param_2);
undefined4 core_emitter_cpp_CEmitter_renderOpaque_FUN_00478f80(CDemonActor *param_1);
void core_emitter_cpp_CEmitter_renderBackground_FUN_004790f0(CDemonActor *param_1,int param_2);
void core_emitter_cpp_CEmitter_getBoundingBox_FUN_00479140(int param_1,float *param_2);
void core_emitter_cpp_CEmitter_archive_FUN_004791a0(CDemonActor *param_1);
undefined4 core_emitter_cpp_CEmitter_getCollisionType_FUN_00479380(void);
CVector3f * __cdecl core_emitter_cpp_CEmitter_getRandomBoundingBoxPoint_FUN_00479390(CEmitter *this_ptr,CVector3f *out_point);
CEmitter * __cdecl core_emitter_cpp_CEmitter_dtor_FUN_00479420(CEmitter *this_ptr,uint flags);
void __cdecl core_emitter_cpp_SLaserInfo_copy_FUN_00479470(SLaserInfo *this_ptr,SLaserInfo *copy);
SLaserInfo * __cdecl core_emitter_cpp_SLaserInfo_dtor_FUN_00479520(SLaserInfo *this_ptr,uint flags);
void __cdecl core_enemy_cpp_staticInit_FUN_00479530(void);
CEnemy * __cdecl core_enemy_cpp_CEnemy_ctor_FUN_00479560(CEnemy *this_ptr);
void __cdecl core_enemy_cpp_CEnemy_setup_FUN_004796b0(CEnemy *this_ptr);
void __cdecl core_enemy_cpp_CEnemy_archive_FUN_004796c0(CEnemy *this_ptr);
undefined4 core_enemy_cpp_CEnemy_getTargetPoints_FUN_00479820(int param_1,float *param_2);
int __cdecl core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(CEnemy *this_ptr,CVector3f *point,float radius,SDamageInfo *damage_info);
int __cdecl core_enemy_cpp_CEnemy_testAttackLine_FUN_00479990(CEnemy *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info);
float * core_enemy_cpp_CEnemy_getTargetPoint_FUN_00479a30(int param_1,float *param_2);
int __cdecl core_enemy_cpp_CEnemy_canSeeTarget_FUN_00479ab0(CEnemy *this_ptr,CDemonActor *target);
void __cdecl core_enemy_cpp_CEnemy_updateVictim_FUN_00479b60(CEnemy *this_ptr,float delta_time);
void __cdecl core_enemy_cpp_CEnemy_setVictim_FUN_00479f50(CEnemy *this_ptr,CDemonActor *victim);
void __cdecl core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(CEnemy *this_ptr,SDamageInfo *damage_info);
void __cdecl core_enemy_cpp_CEnemy_renderBackground_FUN_0047a000(CEnemy *this_ptr,int layer_flag);
int __cdecl core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(CEnemy *this_ptr,float delta_time);
void core_enemy_cpp_CEnemy_releaseVictim_FUN_0047a090(CCharacter *param_1);
void core_enemy_cpp_CEnemy_onVictimLost_FUN_0047a120(int param_1,int param_2);
int core_enemy_cpp_FUN_0047a150(CDemonActor *param_1);
void __cdecl core_event_cpp_staticInit_FUN_0047a1d0(void);
int __cdecl core_event_cpp_setEventError_FUN_0047a1e0(char *source_file,int source_line,char *error_message);
undefined4 core_event_cpp_FUN_0047a210(char *param_1);
void core_event_cpp_FUN_0047a260(void);
int * __cdecl core_event_cpp_skipWhitespaceIndexed_FUN_0047a280(char *expression,int *parse_position);
int __cdecl core_event_cpp_parseComparisonOp_FUN_0047a2b0(char *str);
int __cdecl core_event_cpp_parseIntOrCounter_FUN_0047a350(char *str);
CDemonActor * __cdecl core_event_cpp_resolveActorByName_FUN_0047a390(char *name,uint class_hash,char *class_name);
int __cdecl core_event_cpp_parseVectorLocation_FUN_0047a4c0(char *buffer,int *offset,CVector3f *out_position);
void core_event_cpp_FUN_0047a5e0(char *param_1);
char * __cdecl core_event_cpp_extractParenArg_FUN_0047a650(char **cursor,char *out_buf,int max_len);
int __cdecl core_event_cpp_parseDeathType_FUN_0047a760(char *type_name,int *out_type_id);
int __cdecl core_event_cpp_parseDamageType_FUN_0047a8f0(char *type_name,int *out_type_id);
CEventList * __cdecl core_event_cpp_CEventList_ctor_FUN_0047a9e0(CEventList *this_ptr);
void __cdecl core_event_cpp_CEventList_reset_FUN_0047aa00(CEventList *this_ptr);
void __cdecl core_event_cpp_CEventList_process_FUN_0047aa50(CEventList *this_ptr);
int __cdecl core_event_cpp_CEventList_executeCommands_FUN_0047ab70(CEventList *this_ptr,char *commands);
int __cdecl core_event_cpp_CEventList_executeCommandString_FUN_0047ab90(CEventList *this_ptr,char *command_string);
int __cdecl core_event_cpp_CEventList_executeCommand_FUN_0047ac50(CEventList *this_ptr,char *command_buffer);
int __cdecl core_event_cpp_CEventList_resolveVariable_FUN_0047dba0(CEventList *this_ptr,char *identifier);
int __cdecl core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList *this_ptr,char *condition_expression);
char * __cdecl core_event_cpp_CEventList_validateCondition_FUN_0047dc90(CEventList *this_ptr,char *expression);
char * __cdecl core_event_cpp_CEventList_validateCommands_FUN_0047dcd0(CEventList *this_ptr,char *commands);
int __cdecl core_event_cpp_CEventList_evaluateExpression_FUN_0047dd10(CEventList *this_ptr,char *expression);
void __cdecl core_event_cpp_CEventList_render_FUN_0047dd80(CEventList *this_ptr);
int __cdecl core_event_cpp_CEventList_evaluateAtom_FUN_0047e0d0(CEventList *this_ptr,char *expression,int *parse_position);

