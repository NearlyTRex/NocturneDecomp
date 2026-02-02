#pragma once

// Dependencies
#include "system/basetypes.h"
#include "types/classes/CActorPropertyList.h"
#include "types/classes/CBitFont.h"
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
#include "types/classes/CHero.h"
#include "types/classes/CPickList.h"
#include "types/classes/CQuaternion4f.h"
#include "types/classes/CStrList.h"
#include "types/classes/CVector3f.h"
#include "types/structs/SDamageInfo.h"
#include "types/structs/SLaserInfo.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x4A0000
// =============================================================================

int __cdecl shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020 (CEditorTools *this_ptr,char *prompt_text,int *result_ptr,int enable_range_check, int min_value,int max_value,int show_current_value);
int __cdecl shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 (CEditorTools *this_ptr,char *prompt_text,float *result_ptr,int enable_range_check, float min_value,float max_value,int show_current_value);
int __cdecl shape_edittool_cpp_CEditorTools_promptForValidDouble_FUN_004a01f0 (CEditorTools *this_ptr,char *prompt_text,double *result_ptr,int enable_range_check, double min_value,double max_value,int show_current_value);
int __cdecl shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300 (CEditorTools *editor_tools,char *prompt_text,CVector3f *result_ptr,int show_current_value );
int __cdecl shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 (CEditorTools *this_ptr,char *prompt_text,char *input_buffer,int buffer_size, int dialog_flags);
int __cdecl shape_edittool_cpp_CEditorTools_showCheatInputDialog_FUN_004a0400 (CEditorTools *this_ptr,char *prompt_text,char *input_buffer,int buffer_size, int dialog_flags);
void __cdecl shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 (CEditorTools *this_ptr,char *message_text);
void __cdecl shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530 (CEditorTools *this_ptr,float progress_min,float progress_max);
void __cdecl shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_004a0890 (CEditorTools *this_ptr,int min_width,int min_height,char *text_content,int modal_flags);
void __cdecl shape_edittool_cpp_CEditorTools_createModalWindow_FUN_004a0970 (CEditorTools *this_ptr,int left,int top,int right,int bottom,char *text_content, int window_flags);
void __cdecl shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools *this_ptr);
void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_004a0ea0(CEditorTools *this_ptr);
void __cdecl shape_edittool_cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80(CEditorTools *this_ptr);
void __cdecl shape_edittool_cpp_CEditorTools_drawWindowSeparator_FUN_004a1230 (CEditorTools *editor_tools,int line_position);
uchar __cdecl shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(CEditorTools *this_ptr);
void __cdecl shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380 (CEditorTools *this_ptr,int use_clipping);
char * __cdecl shape_edittool_cpp_CEditorTools_getClipboardText_FUN_004a1b30(CEditorTools *this_ptr);
void __cdecl shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0 (CEditorTools *this_ptr,char *text_data);
void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0 (CEditorTools *this_ptr,float scale_factor,int text_color);
void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90 (CEditorTools *this_ptr,int param2,CQuaternion4f *world_position, CQuaternion4f *label_offset,void *param5);
void __cdecl shape_edittool_cpp_draw3DInterpolatedLine_FUN_004a1f40(CVector3f *start_point,CVector3f *end_point);
void __cdecl shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050 (CEditorTools *this_ptr,CVector3f *corner1,CVector3f *corner2,int color_value);
void __cdecl shape_edittool_cpp_CEditorTools_drawCenteredWireframeCube_FUN_004a2510 (CEditorTools *this_ptr,CVector3f *dimensions,int color_value);
void __cdecl shape_edittool_cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590 (CEditorTools *this_ptr,char *output_buffer);
void __cdecl shape_edittool_cpp_CEditorTools_drawPixelLine_FUN_004a2660 (CEditorTools *this_ptr,int start_x,int start_y,int length);
void __cdecl shape_edittool_cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0 (CEditorTools *this_ptr,CQuaternion4f *world_point,int line_length);
void __cdecl shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a2920 (CEditorTools *this_ptr,int cursor_type,int width,int height);
CStrList * __cdecl shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(CStrList *this_ptr);
CStrList * __cdecl shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(CStrList *this_ptr,uint d1,uint d2);
CStrList * __cdecl shape_edittool_cpp_CStrList_copy_FUN_004a2a90(CStrList *this_ptr,CStrList *other);
CStrList * __cdecl shape_edittool_cpp_CStrList_copyFrom_FUN_004a2ac0(CStrList *dest_ptr,CStrList *source_ptr);
void __cdecl shape_edittool_cpp_CStrList_clear_FUN_004a2b10(CStrList *this_ptr);
void __cdecl shape_edittool_cpp_CStrList_add_FUN_004a2b80(CStrList *this_ptr,char *string_data);
void __cdecl shape_edittool_cpp_CStrList_appendRange_FUN_004a2ba0(CStrList *this_ptr,CStrList *source_list);
void __cdecl shape_edittool_cpp_CStrList_insert_FUN_004a2bc0 (CStrList *this_ptr,int insert_index,char *string_data);
void __cdecl shape_edittool_cpp_CStrList_allocate_FUN_004a2cc0(CStrList *this_ptr,int new_capacity);
void __cdecl shape_edittool_cpp_CStrList_insertRange_FUN_004a2d80 (CStrList *this_ptr,int insertion_index,CStrList *source_list);
void __cdecl shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0(CStrList *this_ptr,int index);
void __cdecl shape_edittool_cpp_CStrList_remove_FUN_004a2e00(CStrList *this_ptr,int start_index,int end_index);
void __cdecl shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(CStrList *this_ptr);
int __cdecl shape_edittool_cpp_CStrList_qsortByString_FUN_004a2ee0(char *a,char *b);
void __cdecl shape_edittool_cpp_CStrList_sort_FUN_004a2f00(CStrList *this_ptr,int sort_type,int sort_order);
char * __cdecl shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(CStrList *this_ptr,int index);
void __cdecl shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80 (CStrList *this_ptr,int string_index,char *output_buffer,int field_number);
int __cdecl shape_edittool_cpp_CStrList_findString_FUN_004a3030(CStrList *this_ptr,char *search_string);
int __cdecl shape_edittool_cpp_CStrList_findByFirstField_FUN_004a3070(CStrList *this_ptr,char *search_field);
void __cdecl shape_edittool_cpp_CStrList_setStringAt_FUN_004a3120(CStrList *this_ptr,int index,char *new_string);
void __cdecl shape_edittool_cpp_CStrList_swap_FUN_004a31f0(CStrList *this_ptr,int index1,int index2);
void __cdecl shape_edittool_cpp_CStrList_copyToClipboard_FUN_004a3270(CStrList *this_ptr);
void __cdecl shape_edittool_cpp_CStrList_insertSortedFileRecord_FUN_004a3360 (CStrList *this_ptr,char *search_key,char *file_path,int file_size);
void __cdecl shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0 (CStrList *this_ptr,char *directory_path,char *file_pattern);
void __cdecl shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 (CStrList *this_ptr,char *directory_path,char *file_pattern);
void __cdecl shape_edittool_cpp_CStrList_populateWithFullPaths_FUN_004a39e0 (CStrList *this_ptr,char *base_path,char *search_path);
CPickList * __cdecl shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(CPickList *this_ptr);
CPickList * __cdecl shape_edittool_cpp_CPickList_dtor_FUN_004a3c80 (CPickList *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6);
void __cdecl shape_edittool_cpp_CPickList_setOkButtonText_FUN_004a3d20(CPickList *this_ptr,char *text);
void __cdecl shape_edittool_cpp_CPickList_setCancelButtonText_FUN_004a3d90(CPickList *this_ptr,char *text);
void __cdecl shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10(CPickList *this_ptr,int result_value);
int __cdecl shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 (CPickList *this_ptr,char *dialog_title,int config_param1,int config_param2);
void __cdecl shape_edittool_cpp_CPickList_initializeDialog_FUN_004a3ef0 (CPickList *this_ptr,char *dialog_title,int initial_selected_index,int config_parameter);
int __cdecl shape_edittool_cpp_CPickList_handleInput_FUN_004a3f20(CPickList *this_ptr);
int __cdecl shape_edittool_cpp_CPickList_handleDialogInput_FUN_004a4340(CPickList *this_ptr);
void __cdecl shape_edittool_cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0 (CPickList *this_ptr,char *dialog_title,int config_parameter);
void __cdecl shape_edittool_cpp_CPickList_renderDialog_FUN_004a4d40(CPickList *this_ptr);
void __cdecl shape_edittool_cpp_CPickList_validateScrollBounds_FUN_004a5240(CPickList *this_ptr);
int __cdecl shape_edittool_cpp_CPickList_getItemAtMousePosition_FUN_004a53a0 (CPickList *this_ptr,int mouse_x,int mouse_y);
void __cdecl shape_edittool_cpp_CPickList_enableItem_FUN_004a5410 (CPickList *this_ptr,int item_index,int enable_flag);
int __cdecl shape_edittool_cpp_CPickList_isItemEnabled_FUN_004a54e0(CPickList *this_ptr,int item_index);
void __cdecl shape_edittool_cpp_CPickList_setItemHotKey_FUN_004a5540 (CPickList *this_ptr,int item_index,int hotkey_code);
int __cdecl shape_edittool_cpp_CPickList_getItemHotKey_FUN_004a5610(CPickList *this_ptr,int index);
void __cdecl shape_edittool_cpp_CPickList_insert_FUN_004a5670(CPickList *this_ptr,int insert_index,int item_data);
void __cdecl shape_edittool_cpp_CPickList_remove_FUN_004a56f0(CPickList *this_ptr,int start_index,int end_index);
void __cdecl shape_edittool_cpp_CPickList_clear_FUN_004a5770(CPickList *this_ptr);
void __cdecl shape_edittool_cpp_CPickList_sort_FUN_004a57f0(CPickList *this_ptr,int sort_type,int sort_order);
void __cdecl shape_edittool_cpp_CPickList_swap_FUN_004a5870(CPickList *this_ptr,int index1,int index2);
void __cdecl shape_edittool_cpp_draw3DBorder_FUN_004a58f0 (int left,int top,int width,int height,int border_style_flag);
void __cdecl shape_edittool_cpp_draw3DInsetBorder_FUN_004a59a0 (int left,int top,int right,int bottom,int inner_y,int style);
CEdScrollBar * __cdecl shape_edittool_cpp_CEdScrollBar_ctor_FUN_004a5ae0(CEdScrollBar *this_ptr);
CEdScrollBar * __cdecl shape_edittool_cpp_CEdScrollBar_dtor_FUN_004a5b20(CEdScrollBar *this_ptr);
void __cdecl shape_edittool_cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004a5b40(CEdScrollBar *this_ptr);
void __cdecl shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60 (CEdScrollBar *this_ptr,int left_pos,int top_pos,int right_pos,int bottom_pos);
void __cdecl shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10(CEdScrollBar *this_ptr);
void __cdecl shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_004a5ea0(CEdScrollBar *this_ptr);
void __cdecl shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0(CEdScrollBar *this_ptr);
void __cdecl shape_edittool_cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380(CEdScrollBar *this_ptr);
void __cdecl shape_edittool_cpp_CEdScrollBar_clampToValidRange_FUN_004a63b0 (CEdScrollBar *this_ptr,int *value_ptr);
void __cdecl shape_edittool_cpp_CEdScrollBar_clampToVisibleRange_FUN_004a63e0 (CEdScrollBar *this_ptr,int *value_ptr);
void __cdecl shape_edittool_cpp_CEdScrollBar_scrollToMakeVisible_FUN_004a6420 (CEdScrollBar *this_ptr,int target_index);
void __cdecl shape_edittool_cpp_CEdScrollBar_updateWithSelection_FUN_004a6450 (CEdScrollBar *this_ptr,int *selection_index_ptr);
int __cdecl shape_edittool_cpp_calculateGridWidth_FUN_004a6490(void);
int __cdecl shape_edittool_cpp_calculateGridHeight_FUN_004a64b0(void);
CEdButton * __cdecl shape_edittool_cpp_CEdButton_ctor_FUN_004a64e0(CEdButton *this_ptr);
CEdButton * __cdecl shape_edittool_cpp_CEdButton_dtor_FUN_004a6510(CEdButton *this_ptr);
void __cdecl shape_edittool_cpp_CEdButton_clearActiveButtonIfMatch_FUN_004a6530(CEdButton *this_ptr);
void __cdecl shape_edittool_cpp_CEdButton_calculateAndSetBounds_FUN_004a6550 (CEdButton *this_ptr,int x_pos,int y_pos,char *button_text);
void __cdecl shape_edittool_cpp_CEdButton_setBoundsAndText_FUN_004a6590 (CEdButton *this_ptr,int left,int top,int right,int bottom,char *button_text);
void __cdecl shape_edittool_cpp_CEdButton_paint_FUN_004a65e0(CEdButton *this_ptr,int draw_border_flag);
int __cdecl shape_edittool_cpp_CEdButton_wasClicked_FUN_004a6830(CEdButton *this_ptr);
int __cdecl shape_edittool_cpp_calculateButtonWidth_FUN_004a68e0(char *button_text);
int __cdecl shape_edittool_cpp_calculateButtonHeight_FUN_004a6970(char *button_text);
CEdCheck * __cdecl shape_edittool_cpp_CEdCheck_ctor_FUN_004a6a00(CEdCheck *this_ptr);
CEdCheck * __cdecl shape_edittool_cpp_CEdCheck_dtor_FUN_004a6a40(CEdCheck *this_ptr);
void __cdecl shape_edittool_cpp_CEdCheck_setupWithText_FUN_004a6a60 (CEdCheck *this_ptr,int x_pos,int y_pos,char *checkbox_text);
void __cdecl shape_edittool_cpp_CEdCheck_clearActiveButtonIfMatch_FUN_004a6b50(CEdCheck *this_ptr);
int __cdecl shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70(CEdCheck *this_ptr);
int __cdecl shape_edittool_cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0(CEdCheck *this_ptr);
int __cdecl shape_edittool_cpp_CEdCheck_calculateSpacing_FUN_004a6be0(CEdCheck *this_ptr);
void __cdecl shape_edittool_cpp_CEdCheck_render_FUN_004a6c00(CEdCheck *this_ptr);
int __cdecl shape_edittool_cpp_CEdCheck_handleInput_FUN_004a6d20(CEdCheck *this_ptr);
int __cdecl shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20 (char *pattern,char *target_string,int case_sensitive);
int __cdecl shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList *this_ptr);
int __cdecl shape_edittool_cpp_getFontMaxCharHeight_FUN_004a6ee0(CBitFont *font_ptr);
int __cdecl shape_edittool_cpp_getFontMaxCharWidth_FUN_004a6ef0(CBitFont *font_ptr);
int __cdecl shape_edittool_cpp_getFontCharSpacing_FUN_004a6f00(CBitFont *font_ptr);
int __cdecl shape_edittool_cpp_getFontSpaceCharWidth_FUN_004a6f10(CBitFont *font_ptr);
int * __cdecl shape_edittool_cpp_assignInt_FUN_004a6f21(int *dest_ptr,int *src_ptr);
int * __cdecl shape_edittool_cpp_assignInt_FUN_004a6f31(int *dest_ptr,int *src_ptr);
int * __cdecl shape_edittool_cpp_assignInt_FUN_004a6f40(int *dest_ptr,int *src_ptr);
void __cdecl shape_edittool_cpp_freeVector8_FUN_004a6f50(CVector3f **array);
void __cdecl core_elephant_cpp_staticInit_FUN_004a6f70(void);
CElephantGun * __cdecl core_elephant_cpp_factoryFunc_FUN_004a6fa0(void);
CDemonActorType * __cdecl core_elephant_cpp_CElephantGun_getActorType_FUN_004a6fd0(CElephantGun *this_ptr);
CElephantGun * __cdecl core_elephant_cpp_CElephantGun_ctor_FUN_004a6fe0(CElephantGun *this_ptr);
void __cdecl core_elephant_cpp_CElephantGun_FUN_004a7070(CElephantGun *this_ptr,float delta_time);
int __cdecl core_elephant_cpp_FUN_004a7160(void);
void __cdecl core_elephant_cpp_FUN_004a78a0(void);
float __cdecl core_elephant_cpp_FUN_004a79b0(void);
void __cdecl core_elephant_cpp_FUN_004a79f0(void);
void * __cdecl core_elephant_cpp_dtor_FUN_004a7be0(CElephantGun *this_ptr,uint d1,uint d2);
void __cdecl core_emitter_cpp_staticInit_FUN_004a7c30(void);
CEmitter * __cdecl core_emitter_cpp_factoryFunc_FUN_004a7c60(void);
CDemonActorType * __cdecl core_emitter_cpp_OtherClass_FUN_004a7c90(void);
CEmitter * __cdecl core_emitter_cpp_CEmitter_ctor_FUN_004a7ca0(CEmitter *this_ptr);
void __cdecl core_emitter_cpp_FUN_004a7e00(void);
void __cdecl core_emitter_cpp_FUN_004a7e80(void);
void __cdecl core_emitter_cpp_FUN_004a8070(void);
int __cdecl core_emitter_cpp_FUN_004a8860(void);
void __cdecl core_emitter_cpp_FUN_004a8a80(void);
void __cdecl core_emitter_cpp_FUN_004a8ad0(void);
void __cdecl core_emitter_cpp_CEmitter_load_FUN_004a8b30(void);
int __cdecl core_emitter_cpp_FUN_004a8d10(void);
CVector3f * __cdecl core_emitter_cpp_FUN_004a8d20(void);
void __cdecl core_emitter_cpp_FUN_004a8db0(void);
void __cdecl core_emitter_cpp_FUN_004a8fe0(void);
void __cdecl core_emitter_cpp_FUN_004a9350(void);
void __cdecl core_emitter_cpp_FUN_004a9390(void);
CEmitter * __cdecl core_emitter_cpp_CEmitter_dtor_FUN_004a93c0(CEmitter *this_ptr,uint d1,uint d2);
void __cdecl core_emitter_cpp_SLaserInfo_copy_FUN_004a9410(SLaserInfo *this_ptr,SLaserInfo *copy);
SLaserInfo * __cdecl core_emitter_cpp_SLaserInfo_dtor_FUN_004a94c0(SLaserInfo *this_ptr);
void __cdecl core_enemy_cpp_staticInit_FUN_004a94d0(void);
CEnemy * __cdecl core_enemy_cpp_CEnemy_ctor_FUN_004a9500(CEnemy *this_ptr);
void __cdecl core_enemy_cpp_CEnemy_setup_FUN_004a9650(CEnemy *this_ptr);
void __cdecl core_enemy_cpp_CEnemy_archive_FUN_004a9660(CEnemy *this_ptr);
int __cdecl core_enemy_cpp_CEnemy_getTargetPoints_FUN_004a97c0(CEnemy *this_ptr,CVector3f *out_points_array);
int __cdecl core_enemy_cpp_CEnemy_FUN_004a9880(CEnemy *this_ptr);
int __cdecl core_enemy_cpp_CEnemy_FUN_004a9930(CEnemy *this_ptr);
float * __cdecl core_enemy_cpp_CEnemy_FUN_004a99d0(CEnemy *this_ptr);
int __cdecl core_enemy_cpp_CEnemy_FUN_004a9a50(CEnemy *this_ptr);
void __cdecl core_enemy_cpp_CEnemy_FUN_004a9b00(CEnemy *this_ptr);
void __cdecl core_enemy_cpp_CEnemy_FUN_004a9ef0(CEnemy *this_ptr);
void __cdecl core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy *this_ptr,SDamageInfo *damage_info);
void __cdecl core_enemy_cpp_CEnemy_FUN_004a9fa0(CEnemy *this_ptr);
void __cdecl core_enemy_cpp_CEnemy_FUN_004a9fd0(CEnemy *this_ptr);
void __cdecl core_enemy_cpp_CEnemy_FUN_004aa030(CEnemy *this_ptr);
void __cdecl core_enemy_cpp_CEnemy_FUN_004aa0c0(CEnemy *this_ptr);
int __cdecl core_enemy_cpp_CEnemy_FUN_004aa0f0(CEnemy *this_ptr);
int __cdecl core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170 (CEnemy *this_ptr,CActorPropertyList *property_list);
void __cdecl core_enemy_cpp_CEnemy_FUN_004aa250(CEnemy *this_ptr);
void __cdecl core_event_cpp_staticInit_FUN_004aa260(void);
int __cdecl core_event_cpp_FUN_004aa270(int param_1,int param_2,char *param_3);
int __cdecl core_event_cpp_FUN_004aa2a0(char *param_1);
void __cdecl core_event_cpp_FUN_004aa2d0(char *param_1);
void __cdecl core_event_cpp_FUN_004aa2f0(int param_1,int *param_2);
int __cdecl core_event_cpp_FUN_004aa320(char *param_1);
int __cdecl core_event_cpp_FUN_004aa3c0(char *param_1);
CHero * __cdecl core_event_cpp_FUN_004aa400(char *param_1,uint param_2,int param_3);
int __cdecl core_event_cpp_FUN_004aa530(int param_1,int *param_2,float *param_3);
void __cdecl core_event_cpp_FUN_004aa650(char *param_1);
char * __cdecl core_event_cpp_FUN_004aa6c0(int *param_1,char *param_2,int param_3);
int __cdecl core_event_cpp_DifferentWaysToDie_FUN_004aa7d0(char *param_1,int *param_2);
int __cdecl core_event_cpp_DifferentWaysToDie2_FUN_004aa960(char *param_1,int *param_2);
CEventList * __cdecl core_event_cpp_CEventList_ctor_FUN_004aaa50(CEventList *this_ptr);
void __cdecl core_event_cpp_CEventList_FUN_004aaa70(CEventList *this_ptr);
void __cdecl core_event_cpp_CEventList_process_FUN_004aaac0(CEventList *this_ptr);
void __cdecl core_event_cpp_CEventList_FUN_004aabe0(CEventList *this_ptr);
int __cdecl core_event_cpp_CEventList_FUN_004aac00(CEventList *this_ptr);
CDemonActor * __cdecl core_event_cpp_CEventList_FUN_004aacc0(CEventList *this_ptr);
int __cdecl core_event_cpp_CEventList_FUN_004adc10(CEventList *this_ptr,char *str);
int __cdecl core_event_cpp_CEventList_evaluateCondition_FUN_004adca0 (CEventList *this_ptr,char *condition_expression);
int __cdecl core_event_cpp_CEventList_FUN_004add00(CEventList *this_ptr);
int __cdecl core_event_cpp_CEventList_FUN_004add40(CEventList *this_ptr);
int __cdecl core_event_cpp_CEventList_FUN_004add80(CEventList *this_ptr);
void __cdecl core_event_cpp_CEventList_FUN_004addf0(CEventList *this_ptr);
int __cdecl core_event_cpp_CEventList_FUN_004ae140(CEventList *this_ptr);

