#pragma once

// Function prototypes for shape/edittool.cpp
// Generated from Ghidra function signatures

// Original: shape_edittool.cpp_staticInit_FUN_0049d170
// Address: 0049d170
void __cdecl staticInit(void);

// Original: shape_edittool.cpp_plotPixelWithClipping_FUN_0049d190
// Address: 0049d190
void __cdecl plotPixelWithClipping(int x_coord,int y_coord,int use_clipping);

// Original: shape_edittool.cpp_initEditorFontMetrics_FUN_0049d1f0
// Address: 0049d1f0
void __cdecl initEditorFontMetrics(void);

// Original: shape_edittool.cpp_extractTabDelimitedField_FUN_0049d250
// Address: 0049d250
char * __cdecl extractTabDelimitedField(char *source_str,char *dest_buffer);

// Original: shape_edittool.cpp_drawDashedLine_FUN_0049d290
// Address: 0049d290
void __cdecl drawDashedLine(int x1,int y1,int x2,int y2,int dash_length);

// Original: shape_edittool.cpp_CInputString_init_FUN_0049d3d0
// Address: 0049d3d0
void __cdecl CInputString::init(CInputString *this_ptr,char *source_string,int max_length,int mask_mode);

// Original: shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460
// Address: 0049d460
void __cdecl CInputString::setSelectionToCursor(CInputString *this_ptr);

// Original: shape_edittool.cpp_CInputString_insertChar_FUN_0049d480
// Address: 0049d480
void __cdecl CInputString::insertChar(CInputString *this_ptr,char character,int advance_cursor);

// Original: shape_edittool.cpp_CInputString_deleteRange_FUN_0049d510
// Address: 0049d510
void __cdecl CInputString::deleteRange(CInputString *this_ptr,int start_pos,int end_pos);

// Original: shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580
// Address: 0049d580
void __cdecl CInputString::deleteSelection(CInputString *this_ptr);

// Original: shape_edittool.cpp_CInputString_backspace_FUN_0049d5d0
// Address: 0049d5d0
void __cdecl CInputString::backspace(CInputString *this_ptr);

// Original: shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0049d610
// Address: 0049d610
void __cdecl CInputString::copySelectionToClipboard(CInputString *this_ptr);

// Original: shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0049d660
// Address: 0049d660
void __cdecl CInputString::pasteFromClipboard(CInputString *this_ptr);

// Original: shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0049d6c0
// Address: 0049d6c0
void __cdecl CInputString::handleKeyboardInput(CInputString *this_ptr);

// Original: shape_edittool.cpp_CInputString_calcX_FUN_0049d8f0
// Address: 0049d8f0
int __cdecl CInputString::calcX(CInputString *this_ptr,int char_index);

// Original: shape_edittool.cpp_CInputString_draw_FUN_0049d9b0
// Address: 0049d9b0
void __cdecl CInputString::draw(CInputString *this_ptr,int x_pos,int y_pos);

// Original: shape_edittool.cpp_showTextInputDialog_FUN_0049db10
// Address: 0049db10
int __cdecl showTextInputDialog(char *dialog_title,char *input_buffer,int max_length,int flags,int dialog_mode);

// Original: shape_edittool.cpp_CEditorTools_ctor_FUN_0049df80
// Address: 0049df80
CEditorTools * __cdecl CEditorTools::ctor(CEditorTools *this_ptr);

// Original: shape_edittool.cpp_CEditorTools_dtor_FUN_0049dfb0
// Address: 0049dfb0
CEditorTools * __cdecl CEditorTools::dtor(CEditorTools *this_ptr,uint flags);

// Original: shape_edittool.cpp_CEditorTools_init_FUN_0049e020
// Address: 0049e020
void __cdecl CEditorTools::init(CEditorTools *this_ptr);

// Original: shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130
// Address: 0049e130
void __cdecl drawSingleButtonPrompt(char *title,char *message,int color);

// Original: shape_edittool.cpp_CEditorTools_backupScreen_FUN_0049e410
// Address: 0049e410
void __cdecl CEditorTools::backupScreen(CEditorTools *this_ptr);

// Original: shape_edittool.cpp_CEditorTools_restoreScreen_FUN_0049e4d0
// Address: 0049e4d0
void __cdecl CEditorTools::restoreScreen(CEditorTools *this_ptr);

// Original: shape_edittool.cpp_paintWindowBackground_FUN_0049e590
// Address: 0049e590
void __cdecl paintWindowBackground(void);

// Original: shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
// Address: 0049e6a0
void __cdecl CEditorTools::showMessage(CEditorTools *this_ptr,char *format,...) __attribute__((format(printf, 2, 3)));

// Original: shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
// Address: 0049e6f0
void __cdecl CEditorTools::showWarning(CEditorTools *this_ptr,char *format,...) __attribute__((format(printf, 2, 3)));

// Original: shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
// Address: 0049e740
void __cdecl CEditorTools::showError(CEditorTools *this_ptr,char *format,...) __attribute__((format(printf, 2, 3)));

// Original: shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
// Address: 0049e790
void __cdecl CEditorTools::displayCenteredStatusMessage(CEditorTools *this_ptr,char *format,...) __attribute__((format(printf, 2, 3)));

// Original: shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
// Address: 0049e870
void __cdecl CEditorTools::drawWindowStatusMessage(CEditorTools *this_ptr,char *format_string,...) __attribute__((format(printf, 2, 3)));

// Original: shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940
// Address: 0049e940
void __cdecl CEditorTools::createCenteredDialog(CEditorTools *this_ptr,char *dialog_text);

// Original: shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0
// Address: 0049e9d0
int __cdecl showMultiChoiceDialog(CStrList *str_list,char *dialog_title,int dialog_mode);

// Original: shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060
// Address: 0049f060
int __cdecl CEditorTools::showDestructiveActionConfirmDialog(CEditorTools *this_ptr,char *format_string,...) __attribute__((format(printf, 2, 3)));

// Original: shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
// Address: 0049f0f0
int __cdecl CEditorTools::showYesNoDialog(CEditorTools *this_ptr,char *format_string,...) __attribute__((format(printf, 2, 3)));

// Original: shape_edittool.cpp_CEditorTools_showYesAllNoCancelDialog_FUN_0049f180
// Address: 0049f180
int __cdecl CEditorTools::showYesAllNoCancelDialog(CEditorTools *this_ptr,char *format,...) __attribute__((format(printf, 2, 3)));

// Original: shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
// Address: 0049f270
int __cdecl CEditorTools::showFileSelectionDialog(CEditorTools *this_ptr,char *dialog_title,char *search_directory,char *file_pattern,char *output_filename,uint flags);

// Original: shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
// Address: 0049f420
int __cdecl CEditorTools::showDirectoryBrowser(CEditorTools *this_ptr,char *title_text,char *search_pattern,char *initial_path,uint flags);

// Original: shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
// Address: 0049fb70
int __cdecl CEditorTools::showFilenameInputDialog(CEditorTools *this_ptr,char *dialog_title,char *directory_path,char *file_extension,char *output_buffer,uint flags);

// Original: shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020
// Address: 004a0020
int __cdecl CEditorTools::promptForValidInteger(CEditorTools *this_ptr,char *prompt_text,int *result_ptr,int enable_range_check,int min_value,int max_value,int show_current_value);

// Original: shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
// Address: 004a00f0
int __cdecl CEditorTools::promptForValidFloat(CEditorTools *this_ptr,char *prompt_text,float *result_ptr,int enable_range_check,float min_value,float max_value,int show_current_value);

// Original: shape_edittool.cpp_CEditorTools_promptForValidDouble_FUN_004a01f0
// Address: 004a01f0
int __cdecl CEditorTools::promptForValidDouble(CEditorTools *this_ptr,char *prompt_text,double *result_ptr,int enable_range_check,double min_value,double max_value,int show_current_value);

// Original: shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_004a0300
// Address: 004a0300
int __cdecl CEditorTools::promptForValidVector(CEditorTools *editor_tools,char *prompt_text,CVector3f *result_ptr,int show_current_value);

// Original: shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
// Address: 004a03d0
int __cdecl CEditorTools::showTextInputDialog(CEditorTools *this_ptr,char *prompt_text,char *input_buffer,int buffer_size,int dialog_flags);

// Original: shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_004a0400
// Address: 004a0400
int __cdecl CEditorTools::showCheatInputDialog(CEditorTools *this_ptr,char *prompt_text,char *input_buffer,int buffer_size,int dialog_flags);

// Original: shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
// Address: 004a0430
void __cdecl CEditorTools::showCenteredProgressDialog(CEditorTools *this_ptr,char *message_text);

// Original: shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
// Address: 004a0530
void __cdecl CEditorTools::updatePercentage(CEditorTools *this_ptr,float current_progress,float total_progress);

// Original: shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890
// Address: 004a0890
void __cdecl CEditorTools::createCenteredModal(CEditorTools *this_ptr,int min_width,int min_height,char *text_content,uint window_flags);

// Original: shape_edittool.cpp_CEditorTools_createModalWindow_FUN_004a0970
// Address: 004a0970
void __cdecl CEditorTools::createModalWindow(CEditorTools *this_ptr,int left,int top,int right,int bottom,char *text_content,uint window_flags);

// Original: shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
// Address: 004a0dd0
void __cdecl CEditorTools::restoreWindowAndCleanup(CEditorTools *this_ptr);

// Original: shape_edittool.cpp_CEditorTools_popWindowState_FUN_004a0ea0
// Address: 004a0ea0
void __cdecl CEditorTools::popWindowState(CEditorTools *this_ptr);

// Original: shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80
// Address: 004a0f80
void __cdecl CEditorTools::paintCurrentWindow(CEditorTools *this_ptr);

// Original: shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_004a1230
// Address: 004a1230
void __cdecl CEditorTools::drawWindowSeparator(CEditorTools *editor_tools,int line_position);

// Original: shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
// Address: 004a1330
uint __cdecl CEditorTools::getTimeCycledColorByte(CEditorTools *this_ptr);

// Original: shape_edittool.cpp_CEditorTools_drawMousePointer_FUN_004a1380
// Address: 004a1380
void __cdecl CEditorTools::drawMousePointer(CEditorTools *this_ptr,int use_clipping);

// Original: shape_edittool.cpp_CEditorTools_getClipboardText_FUN_004a1b30
// Address: 004a1b30
char * __cdecl CEditorTools::getClipboardText(CEditorTools *this_ptr);

// Original: shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0
// Address: 004a1bc0
void __cdecl CEditorTools::setClipboardText(CEditorTools *this_ptr,char *text_data);

// Original: shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
// Address: 004a1ca0
void __cdecl CEditorTools::draw3DAxisLabels(CEditorTools *this_ptr,float scale_factor,int text_color);

// Original: shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90
// Address: 004a1e90
void __cdecl CEditorTools::draw3DAxisLabelsAt(CEditorTools *this_ptr,float scale_factor,int text_color,CVector3f *world_position,UOrientationVector *orientation);

// Original: shape_edittool.cpp_draw3DInterpolatedLine_FUN_004a1f40
// Address: 004a1f40
void __cdecl draw3DInterpolatedLine(CVector3f *start_point,CVector3f *end_point);

// Original: shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
// Address: 004a2050
void __cdecl CEditorTools::draw3DWireframeCube(CEditorTools *this_ptr,CVector3f *corner1,CVector3f *corner2,int color_value);

// Original: shape_edittool.cpp_CEditorTools_drawCenteredWireframeCube_FUN_004a2510
// Address: 004a2510
void __cdecl CEditorTools::drawCenteredWireframeCube(CEditorTools *this_ptr,CVector3f *dimensions,int color_value);

// Original: shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004a2590
// Address: 004a2590
void __cdecl CEditorTools::displayMemoryDiagnostics(CEditorTools *this_ptr,char *output_buffer);

// Original: shape_edittool.cpp_CEditorTools_drawPixelLine_FUN_004a2660
// Address: 004a2660
void __cdecl CEditorTools::drawPixelLine(CEditorTools *this_ptr,int start_x,int start_y,int length);

// Original: shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0
// Address: 004a28a0
void __cdecl CEditorTools::draw3DProjectedLine(CEditorTools *this_ptr,CVector3f *world_point,int line_length);

// Original: shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a2920
// Address: 004a2920
void __cdecl CEditorTools::setMousePointerType(CEditorTools *this_ptr,int cursor_type,int width,int height);

// Original: shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
// Address: 004a2a20
CStrList * __cdecl CStrList::ctor(CStrList *this_ptr);

// Original: shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
// Address: 004a2a40
CStrList * __cdecl CStrList::dtor(CStrList *this_ptr,uint flags);

// Original: shape_edittool.cpp_CStrList_copy_FUN_004a2a90
// Address: 004a2a90
CStrList * __cdecl CStrList::copy(CStrList *this_ptr,CStrList *other);

// Original: shape_edittool.cpp_CStrList_copyFrom_FUN_004a2ac0
// Address: 004a2ac0
CStrList * __cdecl CStrList::copyFrom(CStrList *dest_ptr,CStrList *source_ptr);

// Original: shape_edittool.cpp_CStrList_clear_FUN_004a2b10
// Address: 004a2b10
void __cdecl CStrList::clear(CStrList *this_ptr);

// Original: shape_edittool.cpp_CStrList_add_FUN_004a2b80
// Address: 004a2b80
void __cdecl CStrList::add(CStrList *this_ptr,char *string_data);

// Original: shape_edittool.cpp_CStrList_appendRange_FUN_004a2ba0
// Address: 004a2ba0
void __cdecl CStrList::appendRange(CStrList *this_ptr,CStrList *source_list);

// Original: shape_edittool.cpp_CStrList_insert_FUN_004a2bc0
// Address: 004a2bc0
void __cdecl CStrList::insert(CStrList *this_ptr,int insert_index,char *string_data);

// Original: shape_edittool.cpp_CStrList_allocate_FUN_004a2cc0
// Address: 004a2cc0
void __cdecl CStrList::allocate(CStrList *this_ptr,int new_capacity);

// Original: shape_edittool.cpp_CStrList_insertRange_FUN_004a2d80
// Address: 004a2d80
void __cdecl CStrList::insertRange(CStrList *this_ptr,int insertion_index,CStrList *source_list);

// Original: shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0
// Address: 004a2de0
void __cdecl CStrList::removeAt(CStrList *this_ptr,int index);

// Original: shape_edittool.cpp_CStrList_remove_FUN_004a2e00
// Address: 004a2e00
void __cdecl CStrList::remove(CStrList *this_ptr,int start_index,int end_index);

// Original: shape_edittool.cpp_CStrList_sortAll_FUN_004a2ec0
// Address: 004a2ec0
void __cdecl CStrList::sortAll(CStrList *this_ptr);

// Original: shape_edittool.cpp_CStrList_qsortByString_FUN_004a2ee0
// Address: 004a2ee0
int __cdecl CStrList::qsortByString(char *a,char *b);

// Original: shape_edittool.cpp_CStrList_sort_FUN_004a2f00
// Address: 004a2f00
void __cdecl CStrList::sort(CStrList *this_ptr,int sort_type,int sort_order);

// Original: shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
// Address: 004a2f70
char * __cdecl CStrList::getStringAt(CStrList *this_ptr,int index);

// Original: shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
// Address: 004a2f80
void __cdecl CStrList::getFieldAt(CStrList *this_ptr,char *output_buffer,int string_index,int field_number);

// Original: shape_edittool.cpp_CStrList_findString_FUN_004a3030
// Address: 004a3030
int __cdecl CStrList::findString(CStrList *this_ptr,char *search_string);

// Original: shape_edittool.cpp_CStrList_findByFirstField_FUN_004a3070
// Address: 004a3070
int __cdecl CStrList::findByFirstField(CStrList *this_ptr,char *search_field);

// Original: shape_edittool.cpp_CStrList_setStringAt_FUN_004a3120
// Address: 004a3120
void __cdecl CStrList::setStringAt(CStrList *this_ptr,int index,char *new_string);

// Original: shape_edittool.cpp_CStrList_swap_FUN_004a31f0
// Address: 004a31f0
void __cdecl CStrList::swap(CStrList *this_ptr,int index1,int index2);

// Original: shape_edittool.cpp_CStrList_copyToClipboard_FUN_004a3270
// Address: 004a3270
void __cdecl CStrList::copyToClipboard(CStrList *this_ptr);

// Original: shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_004a3360
// Address: 004a3360
void __cdecl CStrList::insertSortedFileRecord(CStrList *this_ptr,char *search_key,char *file_path,int file_size,time_t file_timestamp);

// Original: shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0
// Address: 004a35b0
void __cdecl CStrList::populateFromFileSearch(CStrList *this_ptr,char *directory_path,char *file_pattern);

// Original: shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
// Address: 004a37b0
void __cdecl CStrList::populateFromFilesNoDuplicates(CStrList *this_ptr,char *directory_path,char *file_pattern);

// Original: shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0
// Address: 004a39e0
void __cdecl CStrList::populateWithFullPaths(CStrList *this_ptr,char *base_path,char *search_path);

// Original: shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
// Address: 004a3b90
CPickList * __cdecl CPickList::ctor(CPickList *this_ptr);

// Original: shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
// Address: 004a3c80
CPickList * __cdecl CPickList::dtor(CPickList *this_ptr,uint flags);

// Original: shape_edittool.cpp_CPickList_setOkButtonText_FUN_004a3d20
// Address: 004a3d20
void __cdecl CPickList::setOkButtonText(CPickList *this_ptr,char *text);

// Original: shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004a3d90
// Address: 004a3d90
void __cdecl CPickList::setCancelButtonText(CPickList *this_ptr,char *text);

// Original: shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10
// Address: 004a3e10
void __cdecl CPickList::setSelectedResult(CPickList *this_ptr,int result_value);

// Original: shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
// Address: 004a3e20
int __cdecl CPickList::displayChoicesAndWaitForInput(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags);

// Original: shape_edittool.cpp_CPickList_initializeDialog_FUN_004a3ef0
// Address: 004a3ef0
void __cdecl CPickList::initializeDialog(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags);

// Original: shape_edittool.cpp_CPickList_handleInput_FUN_004a3f20
// Address: 004a3f20
int __cdecl CPickList::handleInput(CPickList *this_ptr);

// Original: shape_edittool.cpp_CPickList_handleDialogInput_FUN_004a4340
// Address: 004a4340
int __cdecl CPickList::handleDialogInput(CPickList *this_ptr);

// Original: shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0
// Address: 004a45d0
void __cdecl CPickList::calculateLayoutAndCreateComponents(CPickList *this_ptr,char *dialog_title,uint window_flags);

// Original: shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40
// Address: 004a4d40
void __cdecl CPickList::renderDialog(CPickList *this_ptr);

// Original: shape_edittool.cpp_CPickList_validateScrollBounds_FUN_004a5240
// Address: 004a5240
void __cdecl CPickList::validateScrollBounds(CPickList *this_ptr);

// Original: shape_edittool.cpp_CPickList_getItemAtMousePosition_FUN_004a53a0
// Address: 004a53a0
int __cdecl CPickList::getItemAtMousePosition(CPickList *this_ptr,int mouse_x,int mouse_y);

// Original: shape_edittool.cpp_CPickList_enableItem_FUN_004a5410
// Address: 004a5410
void __cdecl CPickList::enableItem(CPickList *this_ptr,int item_index,int enable_flag);

// Original: shape_edittool.cpp_CPickList_isItemEnabled_FUN_004a54e0
// Address: 004a54e0
int __cdecl CPickList::isItemEnabled(CPickList *this_ptr,int item_index);

// Original: shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540
// Address: 004a5540
void __cdecl CPickList::setItemHotKey(CPickList *this_ptr,int item_index,int hotkey_code);

// Original: shape_edittool.cpp_CPickList_getItemHotKey_FUN_004a5610
// Address: 004a5610
int __cdecl CPickList::getItemHotKey(CPickList *this_ptr,int index);

// Original: shape_edittool.cpp_CPickList_insert_FUN_004a5670
// Address: 004a5670
void __cdecl CPickList::insert(CPickList *this_ptr,int insert_index,char *string_data);

// Original: shape_edittool.cpp_CPickList_remove_FUN_004a56f0
// Address: 004a56f0
void __cdecl CPickList::remove(CPickList *this_ptr,int start_index,int end_index);

// Original: shape_edittool.cpp_CPickList_clear_FUN_004a5770
// Address: 004a5770
void __cdecl CPickList::clear(CPickList *this_ptr);

// Original: shape_edittool.cpp_CPickList_sort_FUN_004a57f0
// Address: 004a57f0
void __cdecl CPickList::sort(CPickList *this_ptr,int sort_type,int sort_order);

// Original: shape_edittool.cpp_CPickList_swap_FUN_004a5870
// Address: 004a5870
void __cdecl CPickList::swap(CPickList *this_ptr,int index1,int index2);

// Original: shape_edittool.cpp_draw3DBorder_FUN_004a58f0
// Address: 004a58f0
void __cdecl draw3DBorder(int left,int top,int width,int height,int border_style_flag);

// Original: shape_edittool.cpp_draw3DInsetBorder_FUN_004a59a0
// Address: 004a59a0
void __cdecl draw3DInsetBorder(int left,int top,int right,int bottom,int inner_y,int style);

// Original: shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0
// Address: 004a5ae0
CEdScrollBar * __cdecl CEdScrollBar::ctor(CEdScrollBar *this_ptr);

// Original: shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20
// Address: 004a5b20
CEdScrollBar * __cdecl CEdScrollBar::dtor(CEdScrollBar *this_ptr,uint flags);

// Original: shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004a5b40
// Address: 004a5b40
void __cdecl CEdScrollBar::clearActiveButtonIfMatch(CEdScrollBar *this_ptr);

// Original: shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60
// Address: 004a5b60
void __cdecl CEdScrollBar::setPosition(CEdScrollBar *this_ptr,int left_pos,int top_pos,int right_pos,int bottom_pos);

// Original: shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10
// Address: 004a5c10
void __cdecl CEdScrollBar::render(CEdScrollBar *this_ptr);

// Original: shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004a5ea0
// Address: 004a5ea0
void __cdecl CEdScrollBar::computeThumb(CEdScrollBar *this_ptr);

// Original: shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
// Address: 004a5fc0
void __cdecl CEdScrollBar::handleInput(CEdScrollBar *this_ptr);

// Original: shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_004a6380
// Address: 004a6380
void __cdecl CEdScrollBar::clampScrollPosition(CEdScrollBar *this_ptr);

// Original: shape_edittool.cpp_CEdScrollBar_clampToValidRange_FUN_004a63b0
// Address: 004a63b0
void __cdecl CEdScrollBar::clampToValidRange(CEdScrollBar *this_ptr,int *value_ptr);

// Original: shape_edittool.cpp_CEdScrollBar_clampToVisibleRange_FUN_004a63e0
// Address: 004a63e0
void __cdecl CEdScrollBar::clampToVisibleRange(CEdScrollBar *this_ptr,int *value_ptr);

// Original: shape_edittool.cpp_CEdScrollBar_scrollToMakeVisible_FUN_004a6420
// Address: 004a6420
void __cdecl CEdScrollBar::scrollToMakeVisible(CEdScrollBar *this_ptr,int target_index);

// Original: shape_edittool.cpp_CEdScrollBar_updateWithSelection_FUN_004a6450
// Address: 004a6450
void __cdecl CEdScrollBar::updateWithSelection(CEdScrollBar *this_ptr,int *selection_index_ptr);

// Original: shape_edittool.cpp_calculateGridWidth_FUN_004a6490
// Address: 004a6490
int __cdecl calculateGridWidth(void);

// Original: shape_edittool.cpp_calculateGridHeight_FUN_004a64b0
// Address: 004a64b0
int __cdecl calculateGridHeight(void);

// Original: shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0
// Address: 004a64e0
CEdButton * __cdecl CEdButton::ctor(CEdButton *this_ptr);

// Original: shape_edittool.cpp_CEdButton_dtor_FUN_004a6510
// Address: 004a6510
CEdButton * __cdecl CEdButton::dtor(CEdButton *this_ptr,uint flags);

// Original: shape_edittool.cpp_CEdButton_clearActiveButtonIfMatch_FUN_004a6530
// Address: 004a6530
void __cdecl CEdButton::clearActiveButtonIfMatch(CEdButton *this_ptr);

// Original: shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_004a6550
// Address: 004a6550
void __cdecl CEdButton::calculateAndSetBounds(CEdButton *this_ptr,int x_pos,int y_pos,char *button_text);

// Original: shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_004a6590
// Address: 004a6590
void __cdecl CEdButton::setBoundsAndText(CEdButton *this_ptr,int left,int top,int right,int bottom,char *button_text);

// Original: shape_edittool.cpp_CEdButton_paint_FUN_004a65e0
// Address: 004a65e0
void __cdecl CEdButton::paint(CEdButton *this_ptr,int draw_border_flag);

// Original: shape_edittool.cpp_CEdButton_wasClicked_FUN_004a6830
// Address: 004a6830
int __cdecl CEdButton::wasClicked(CEdButton *this_ptr);

// Original: shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0
// Address: 004a68e0
int __cdecl calculateButtonWidth(char *button_text);

// Original: shape_edittool.cpp_calculateButtonHeight_FUN_004a6970
// Address: 004a6970
int __cdecl calculateButtonHeight(char *button_text);

// Original: shape_edittool.cpp_CEdCheck_ctor_FUN_004a6a00
// Address: 004a6a00
CEdCheck * __cdecl CEdCheck::ctor(CEdCheck *this_ptr);

// Original: shape_edittool.cpp_CEdCheck_dtor_FUN_004a6a40
// Address: 004a6a40
CEdCheck * __cdecl CEdCheck::dtor(CEdCheck *this_ptr,uint flags);

// Original: shape_edittool.cpp_CEdCheck_setupWithText_FUN_004a6a60
// Address: 004a6a60
void __cdecl CEdCheck::setupWithText(CEdCheck *this_ptr,int x_pos,int y_pos,char *checkbox_text);

// Original: shape_edittool.cpp_CEdCheck_clearActiveButtonIfMatch_FUN_004a6b50
// Address: 004a6b50
void __cdecl CEdCheck::clearActiveButtonIfMatch(CEdCheck *this_ptr);

// Original: shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_004a6b70
// Address: 004a6b70
int __cdecl CEdCheck::calculateScaledWidth(CEdCheck *this_ptr);

// Original: shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_004a6bb0
// Address: 004a6bb0
int __cdecl CEdCheck::calculateBaseWidth(CEdCheck *this_ptr);

// Original: shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_004a6be0
// Address: 004a6be0
int __cdecl CEdCheck::calculateSpacing(CEdCheck *this_ptr);

// Original: shape_edittool.cpp_CEdCheck_render_FUN_004a6c00
// Address: 004a6c00
void __cdecl CEdCheck::render(CEdCheck *this_ptr);

// Original: shape_edittool.cpp_CEdCheck_handleInput_FUN_004a6d20
// Address: 004a6d20
int __cdecl CEdCheck::handleInput(CEdCheck *this_ptr);

// Original: shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20
// Address: 004a6e20
int __cdecl wildcardStringMatch(char *pattern,char *target_string,int case_sensitive);

// Original: shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0
// Address: 004a6ed0
int __cdecl CStrList::getItemCount(CStrList *this_ptr);

// Original: shape_edittool.cpp_getFontMaxCharHeight_FUN_004a6ee0
// Address: 004a6ee0
int __cdecl getFontMaxCharHeight(CBitFont *font_ptr);

// Original: shape_edittool.cpp_getFontMaxCharWidth_FUN_004a6ef0
// Address: 004a6ef0
int __cdecl getFontMaxCharWidth(CBitFont *font_ptr);

// Original: shape_edittool.cpp_getFontCharSpacing_FUN_004a6f00
// Address: 004a6f00
int __cdecl getFontCharSpacing(CBitFont *font_ptr);
