#pragma once

// Function prototypes for shape/edittool.cpp
// Generated from Ghidra function signatures

// Original: shape_edittool.cpp_staticInit_FUN_0046ef80
// Address: 0046ef80
void __cdecl staticInit(void);

// Original: shape_edittool.cpp_plotPixelWithClipping_FUN_0046efa0
// Address: 0046efa0
void __cdecl plotPixelWithClipping(int x_coord,int y_coord,int use_clipping);

// Original: shape_edittool.cpp_initEditorFontMetrics_FUN_0046f000
// Address: 0046f000
void __cdecl initEditorFontMetrics(void);

// Original: shape_edittool.cpp_extractTabDelimitedField_FUN_0046f060
// Address: 0046f060
char * __cdecl extractTabDelimitedField(char *source_str,char *dest_buffer);

// Original: shape_edittool.cpp_CInputString_init_FUN_0046f0a0
// Address: 0046f0a0
void __cdecl CInputString::init(CInputString *this_ptr,char *source_string,int max_length,int mask_mode);

// Original: shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0046f130
// Address: 0046f130
void __cdecl CInputString::setSelectionToCursor(CInputString *this_ptr);

// Original: shape_edittool.cpp_CInputString_insertChar_FUN_0046f150
// Address: 0046f150
void __cdecl CInputString::insertChar(CInputString *this_ptr,char character,int advance_cursor);

// Original: shape_edittool.cpp_CInputString_deleteRange_FUN_0046f1e0
// Address: 0046f1e0
void __cdecl CInputString::deleteRange(CInputString *this_ptr,int start_pos,int end_pos);

// Original: shape_edittool.cpp_CInputString_deleteSelection_FUN_0046f250
// Address: 0046f250
void __cdecl CInputString::deleteSelection(CInputString *this_ptr);

// Original: shape_edittool.cpp_CInputString_backspace_FUN_0046f2a0
// Address: 0046f2a0
void __cdecl CInputString::backspace(CInputString *this_ptr);

// Original: shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0046f2e0
// Address: 0046f2e0
void __cdecl CInputString::copySelectionToClipboard(CInputString *this_ptr);

// Original: shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0046f330
// Address: 0046f330
void __cdecl CInputString::pasteFromClipboard(CInputString *this_ptr);

// Original: shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0046f390
// Address: 0046f390
void __cdecl CInputString::handleKeyboardInput(CInputString *this_ptr);

// Original: shape_edittool.cpp_CInputString_calcX_FUN_0046f5c0
// Address: 0046f5c0
int __cdecl CInputString::calcX(CInputString *this_ptr,int char_index);

// Original: shape_edittool.cpp_CInputString_draw_FUN_0046f680
// Address: 0046f680
void __cdecl CInputString::draw(CInputString *this_ptr,int x_pos,int y_pos);

// Original: shape_edittool.cpp_showTextInputDialog_FUN_0046f7e0
// Address: 0046f7e0
int __cdecl showTextInputDialog(char *dialog_title,char *input_buffer,int max_length,int flags,int dialog_mode);

// Original: shape_edittool.cpp_CEditorTools_ctor_FUN_0046f9f0
// Address: 0046f9f0
CEditorTools * __cdecl CEditorTools::ctor(CEditorTools *this_ptr);

// Original: shape_edittool.cpp_CEditorTools_dtor_FUN_0046fa20
// Address: 0046fa20
CEditorTools * __cdecl CEditorTools::dtor(CEditorTools *this_ptr,uint flags);

// Original: shape_edittool.cpp_CEditorTools_init_FUN_0046fa80
// Address: 0046fa80
void __cdecl CEditorTools::init(CEditorTools *this_ptr);

// Original: shape_edittool.cpp_FUN_0046fb40
// Address: 0046fb40
void FUN_0046fb40(CEditorTools *param_1,char *param_2);

// Original: shape_edittool.cpp_FUN_0046fcd0
// Address: 0046fcd0
void FUN_0046fcd0(CEditorTools *param_1,char *param_2);

// Original: shape_edittool.cpp_CEditorTools_showMessage_FUN_0046fe60
// Address: 0046fe60
void __cdecl CEditorTools::showMessage(CEditorTools *this_ptr,char *format,...) __attribute__((format(printf, 2, 3)));

// Original: shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
// Address: 0046fff0
void __cdecl CEditorTools::displayCenteredStatusMessage(CEditorTools *this_ptr,char *format);

// Original: shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_004700d0
// Address: 004700d0
void __cdecl CEditorTools::drawWindowStatusMessage(CEditorTools *this_ptr,char *format_string,...) __attribute__((format(printf, 2, 3)));

// Original: shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_004701a0
// Address: 004701a0
void __cdecl CEditorTools::createCenteredDialog(CEditorTools *this_ptr,char *dialog_text);

// Original: shape_edittool.cpp_FUN_00470230
// Address: 00470230
bool FUN_00470230(undefined4 param_1,char *param_2);

// Original: shape_edittool.cpp_FUN_00470310
// Address: 00470310
bool FUN_00470310(undefined4 param_1,char *param_2);

// Original: shape_edittool.cpp_FUN_004703f0
// Address: 004703f0
undefined4 FUN_004703f0(undefined4 param_1,char *param_2);

// Original: shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_00470550
// Address: 00470550
int __cdecl CEditorTools::showFileSelectionDialog(CEditorTools *this_ptr,char *dialog_title,char *search_directory,char *file_pattern,char *output_filename,uint flags);

// Original: shape_edittool.cpp_FUN_00470730
// Address: 00470730
undefined4 FUN_00470730(void);

// Original: shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_00470eb0
// Address: 00470eb0
int __cdecl CEditorTools::showFilenameInputDialog(CEditorTools *this_ptr,char *dialog_title,char *directory_path,char *file_extension,char *output_buffer,uint flags);

// Original: shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00471360
// Address: 00471360
int __cdecl CEditorTools::promptForValidInteger(CEditorTools *this_ptr,char *prompt_text,int *result_ptr,int enable_range_check,int min_value,int max_value,int show_current_value);

// Original: shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_00471430
// Address: 00471430
int __cdecl CEditorTools::promptForValidFloat(CEditorTools *this_ptr,char *prompt_text,float *result_ptr,int enable_range_check,float min_value,float max_value,int show_current_value);

// Original: shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_00471530
// Address: 00471530
int __cdecl CEditorTools::promptForValidVector(CEditorTools *this_ptr,char *prompt_text,CVector3f *result_ptr,int show_current_value);

// Original: shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00471600
// Address: 00471600
int __cdecl CEditorTools::showTextInputDialog(CEditorTools *this_ptr,char *prompt_text,char *input_buffer,int buffer_size,int dialog_flags);

// Original: shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_00471630
// Address: 00471630
int __cdecl CEditorTools::showCheatInputDialog(CEditorTools *this_ptr,char *prompt_text,char *input_buffer,int buffer_size,int dialog_flags);

// Original: shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_00471660
// Address: 00471660
void __cdecl CEditorTools::showCenteredProgressDialog(CEditorTools *this_ptr,char *message_text);

// Original: shape_edittool.cpp_CEditorTools_updatePercentage_FUN_00471760
// Address: 00471760
void __cdecl CEditorTools::updatePercentage(CEditorTools *this_ptr,float current_progress,float total_progress);

// Original: shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80
// Address: 00471a80
void __cdecl CEditorTools::createCenteredModal(CEditorTools *this_ptr,int min_width,int min_height,char *text_content,uint window_flags);

// Original: shape_edittool.cpp_CEditorTools_createModalWindow_FUN_00471b50
// Address: 00471b50
void __cdecl CEditorTools::createModalWindow(CEditorTools *this_ptr,int left,int top,int right,int bottom,char *text_content,uint window_flags);

// Original: shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004720c0
// Address: 004720c0
void __cdecl CEditorTools::restoreWindowAndCleanup(CEditorTools *this_ptr);

// Original: shape_edittool.cpp_CEditorTools_popWindowState_FUN_004721e0
// Address: 004721e0
void __cdecl CEditorTools::popWindowState(CEditorTools *this_ptr);

// Original: shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004722b0
// Address: 004722b0
void __cdecl CEditorTools::paintCurrentWindow(CEditorTools *this_ptr);

// Original: shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_00472490
// Address: 00472490
uint __cdecl CEditorTools::getTimeCycledColorByte(CEditorTools *this_ptr);

// Original: shape_edittool.cpp_CEditorTools_drawMousePointer_FUN_004724e0
// Address: 004724e0
void __cdecl CEditorTools::drawMousePointer(CEditorTools *this_ptr,int use_clipping);

// Original: shape_edittool.cpp_CEditorTools_getClipboardText_FUN_00472c90
// Address: 00472c90
char * __cdecl CEditorTools::getClipboardText(CEditorTools *this_ptr);

// Original: shape_edittool.cpp_CEditorTools_setClipboardText_FUN_00472d10
// Address: 00472d10
void __cdecl CEditorTools::setClipboardText(CEditorTools *this_ptr,char *text_data);

// Original: shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_00472de0
// Address: 00472de0
void __cdecl CEditorTools::draw3DAxisLabels(CEditorTools *this_ptr,float scale_factor,int text_color);

// Original: shape_edittool.cpp_FUN_00472fd0
// Address: 00472fd0
void FUN_00472fd0(CEditorTools *param_1,float param_2,int param_3,undefined4 param_4,float *param_5);

// Original: shape_edittool.cpp_draw3DInterpolatedLine_FUN_00473080
// Address: 00473080
void __cdecl draw3DInterpolatedLine(CVector3f *start_point,CVector3f *end_point);

// Original: shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_00473190
// Address: 00473190
void __cdecl CEditorTools::draw3DWireframeCube(CEditorTools *this_ptr,CVector3f *corner1,CVector3f *corner2,int color_value);

// Original: shape_edittool.cpp_CEditorTools_drawCenteredWireframeCube_FUN_00473650
// Address: 00473650
void __cdecl CEditorTools::drawCenteredWireframeCube(CEditorTools *this_ptr,CVector3f *dimensions,int color_value);

// Original: shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004736d0
// Address: 004736d0
void __cdecl CEditorTools::displayMemoryDiagnostics(CEditorTools *this_ptr,char *output_buffer);

// Original: shape_edittool.cpp_CEditorTools_drawPixelLine_FUN_004737a0
// Address: 004737a0
void __cdecl CEditorTools::drawPixelLine(CEditorTools *this_ptr,int start_x,int start_y,int length);

// Original: shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004739e0
// Address: 004739e0
void __cdecl CEditorTools::draw3DProjectedLine(CEditorTools *this_ptr,CVector3f *world_point,int line_length);

// Original: shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_00473a60
// Address: 00473a60
void __cdecl CEditorTools::setMousePointerType(CEditorTools *this_ptr,int cursor_type,int width,int height);

// Original: shape_edittool.cpp_CStrList_ctor_FUN_00473b60
// Address: 00473b60
CStrList * __cdecl CStrList::ctor(CStrList *this_ptr);

// Original: shape_edittool.cpp_CStrList_dtor_FUN_00473b80
// Address: 00473b80
CStrList * __cdecl CStrList::dtor(CStrList *this_ptr,uint flags);

// Original: shape_edittool.cpp_CStrList_copy_FUN_00473bd0
// Address: 00473bd0
CStrList * __cdecl CStrList::copy(CStrList *this_ptr,CStrList *other);

// Original: shape_edittool.cpp_CStrList_copyFrom_FUN_00473c00
// Address: 00473c00
CStrList * __cdecl CStrList::copyFrom(CStrList *this_ptr,CStrList *source_ptr);

// Original: shape_edittool.cpp_CStrList_clear_FUN_00473c50
// Address: 00473c50
void __cdecl CStrList::clear(CStrList *this_ptr);

// Original: shape_edittool.cpp_CStrList_add_FUN_00473cb0
// Address: 00473cb0
void __cdecl CStrList::add(CStrList *this_ptr,char *string_data);

// Original: shape_edittool.cpp_CStrList_appendRange_FUN_00473cd0
// Address: 00473cd0
void __cdecl CStrList::appendRange(CStrList *this_ptr,CStrList *source_list);

// Original: shape_edittool.cpp_CStrList_insert_FUN_00473cf0
// Address: 00473cf0
void __cdecl CStrList::insert(CStrList *this_ptr,int insert_index,char *string_data);

// Original: shape_edittool.cpp_CStrList_allocate_FUN_00473de0
// Address: 00473de0
void __cdecl CStrList::allocate(CStrList *this_ptr,int new_capacity);

// Original: shape_edittool.cpp_CStrList_insertRange_FUN_00473e90
// Address: 00473e90
void __cdecl CStrList::insertRange(CStrList *this_ptr,int insertion_index,CStrList *source_list);

// Original: shape_edittool.cpp_CStrList_removeAt_FUN_00473ef0
// Address: 00473ef0
void __cdecl CStrList::removeAt(CStrList *this_ptr,int index);

// Original: shape_edittool.cpp_CStrList_remove_FUN_00473f10
// Address: 00473f10
void __cdecl CStrList::remove(CStrList *this_ptr,int start_index,int end_index);

// Original: shape_edittool.cpp_CStrList_sortAll_FUN_00473fd0
// Address: 00473fd0
void __cdecl CStrList::sortAll(CStrList *this_ptr);

// Original: shape_edittool.cpp_qsortByString_FUN_00473ff0
// Address: 00473ff0
int __cdecl qsortByString(char *a,char *b);

// Original: shape_edittool.cpp_CStrList_sort_FUN_00474010
// Address: 00474010
void __cdecl CStrList::sort(CStrList *this_ptr,int sort_type,int sort_order);

// Original: shape_edittool.cpp_CStrList_getStringAt_FUN_00474080
// Address: 00474080
char * __cdecl CStrList::getStringAt(CStrList *this_ptr,int index);

// Original: shape_edittool.cpp_CStrList_getFieldAt_FUN_00474090
// Address: 00474090
void __cdecl CStrList::getFieldAt(CStrList *this_ptr,char *output_buffer,int string_index,int field_number);

// Original: shape_edittool.cpp_CStrList_findString_FUN_00474140
// Address: 00474140
int __cdecl CStrList::findString(CStrList *this_ptr,char *search_string);

// Original: shape_edittool.cpp_CStrList_findByFirstField_FUN_00474180
// Address: 00474180
int __cdecl CStrList::findByFirstField(CStrList *this_ptr,char *search_field);

// Original: shape_edittool.cpp_CStrList_setStringAt_FUN_00474230
// Address: 00474230
void __cdecl CStrList::setStringAt(CStrList *this_ptr,int index,char *new_string);

// Original: shape_edittool.cpp_CStrList_swap_FUN_00474300
// Address: 00474300
void __cdecl CStrList::swap(CStrList *this_ptr,int index1,int index2);

// Original: shape_edittool.cpp_CStrList_copyToClipboard_FUN_00474380
// Address: 00474380
void __cdecl CStrList::copyToClipboard(CStrList *this_ptr);

// Original: shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00474460
// Address: 00474460
void __cdecl CStrList::insertSortedFileRecord(CStrList *this_ptr,char *search_key,char *file_path,int file_size,time_t file_timestamp);

// Original: shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004746b0
// Address: 004746b0
void __cdecl CStrList::populateFromFileSearch(CStrList *this_ptr,char *directory_path,char *file_pattern);

// Original: shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0
// Address: 004748b0
void __cdecl CStrList::populateFromFilesNoDuplicates(CStrList *this_ptr,char *directory_path,char *file_pattern);

// Original: shape_edittool.cpp_FUN_00474ae0
// Address: 00474ae0
void FUN_00474ae0(CStrList *param_1,char *param_2,char *param_3);

// Original: shape_edittool.cpp_CPickList_ctor_FUN_00474c90
// Address: 00474c90
CPickList * __cdecl CPickList::ctor(CPickList *this_ptr);

// Original: shape_edittool.cpp_CPickList_dtor_FUN_00474cf0
// Address: 00474cf0
CPickList * __cdecl CPickList::dtor(CPickList *this_ptr,uint flags);

// Original: shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
// Address: 00474d70
int __cdecl CPickList::displayChoicesAndWaitForInput(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags);

// Original: shape_edittool.cpp_CPickList_initializeDialog_FUN_00474e70
// Address: 00474e70
void __cdecl CPickList::initializeDialog(CPickList *this_ptr,char *dialog_title,int initial_selected_index,uint window_flags);

// Original: shape_edittool.cpp_CPickList_handleInput_FUN_00474ea0
// Address: 00474ea0
int __cdecl CPickList::handleInput(CPickList *this_ptr);

// Original: shape_edittool.cpp_FUN_00475230
// Address: 00475230
int __cdecl FUN_00475230(CPickList *this_ptr);

// Original: shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_00475470
// Address: 00475470
void __cdecl CPickList::calculateLayoutAndCreateComponents(CPickList *this_ptr,char *dialog_title,uint window_flags);

// Original: shape_edittool.cpp_FUN_004759d0
// Address: 004759d0
void __cdecl FUN_004759d0(CPickList *this_ptr);

// Original: shape_edittool.cpp_CPickList_validateScrollBounds_FUN_00475db0
// Address: 00475db0
void __cdecl CPickList::validateScrollBounds(CPickList *this_ptr);

// Original: shape_edittool.cpp_CPickList_getItemAtMousePosition_FUN_00475f10
// Address: 00475f10
int __cdecl CPickList::getItemAtMousePosition(CPickList *this_ptr,int mouse_x,int mouse_y);

// Original: shape_edittool.cpp_CPickList_enableItem_FUN_00475f80
// Address: 00475f80
void __cdecl CPickList::enableItem(CPickList *this_ptr,int item_index,int enable_flag);

// Original: shape_edittool.cpp_CPickList_isItemEnabled_FUN_00476040
// Address: 00476040
int __cdecl CPickList::isItemEnabled(CPickList *this_ptr,int item_index);

// Original: shape_edittool.cpp_CPickList_insert_FUN_004760a0
// Address: 004760a0
void __cdecl CPickList::insert(CPickList *this_ptr,int insert_index,char *string_data);

// Original: shape_edittool.cpp_CPickList_remove_FUN_00476100
// Address: 00476100
void __cdecl CPickList::remove(CPickList *this_ptr,int start_index,int end_index);

// Original: shape_edittool.cpp_FUN_00476160
// Address: 00476160
void FUN_00476160(CStrList *param_1);

// Original: shape_edittool.cpp_CPickList_sort_FUN_004761a0
// Address: 004761a0
void __cdecl CPickList::sort(CPickList *this_ptr,int sort_type,int sort_order);

// Original: shape_edittool.cpp_CPickList_swap_FUN_00476200
// Address: 00476200
void __cdecl CPickList::swap(CPickList *this_ptr,int index1,int index2);

// Original: shape_edittool.cpp_draw3DBorder_FUN_00476260
// Address: 00476260
void __cdecl draw3DBorder(int left,int top,int width,int height,int border_style_flag);

// Original: shape_edittool.cpp_draw3DInsetBorder_FUN_00476310
// Address: 00476310
void __cdecl draw3DInsetBorder(int left,int top,int right,int bottom,int inner_y,int style);

// Original: shape_edittool.cpp_CEdScrollBar_ctor_FUN_00476450
// Address: 00476450
CEdScrollBar * __cdecl CEdScrollBar::ctor(CEdScrollBar *this_ptr);

// Original: shape_edittool.cpp_CEdScrollBar_dtor_FUN_00476490
// Address: 00476490
CEdScrollBar * __cdecl CEdScrollBar::dtor(CEdScrollBar *this_ptr,uint flags);

// Original: shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004764b0
// Address: 004764b0
void __cdecl CEdScrollBar::clearActiveButtonIfMatch(CEdScrollBar *this_ptr);

// Original: shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004764d0
// Address: 004764d0
void __cdecl CEdScrollBar::setPosition(CEdScrollBar *this_ptr,int left_pos,int top_pos,int right_pos,int bottom_pos);

// Original: shape_edittool.cpp_CEdScrollBar_render_FUN_00476580
// Address: 00476580
void __cdecl CEdScrollBar::render(CEdScrollBar *this_ptr);

// Original: shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_00476800
// Address: 00476800
void __cdecl CEdScrollBar::computeThumb(CEdScrollBar *this_ptr);

// Original: shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00476920
// Address: 00476920
void __cdecl CEdScrollBar::handleInput(CEdScrollBar *this_ptr);

// Original: shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_00476ce0
// Address: 00476ce0
void __cdecl CEdScrollBar::clampScrollPosition(CEdScrollBar *this_ptr);

// Original: shape_edittool.cpp_calculateGridWidth_FUN_00476df0
// Address: 00476df0
int __cdecl calculateGridWidth(void);

// Original: shape_edittool.cpp_calculateGridHeight_FUN_00476e10
// Address: 00476e10
int __cdecl calculateGridHeight(void);

// Original: shape_edittool.cpp_CEdButton_dtor_FUN_00476e70
// Address: 00476e70
CEdButton * __cdecl CEdButton::dtor(CEdButton *this_ptr,uint flags);

// Original: shape_edittool.cpp_CEdButton_clearActiveButtonIfMatch_FUN_00476e90
// Address: 00476e90
void __cdecl CEdButton::clearActiveButtonIfMatch(CEdButton *this_ptr);

// Original: shape_edittool.cpp_CEdButton_calculateAndSetBounds_FUN_00476eb0
// Address: 00476eb0
void __cdecl CEdButton::calculateAndSetBounds(CEdButton *this_ptr,int x_pos,int y_pos,char *button_text);

// Original: shape_edittool.cpp_CEdButton_setBoundsAndText_FUN_00476ef0
// Address: 00476ef0
void __cdecl CEdButton::setBoundsAndText(CEdButton *this_ptr,int left,int top,int right,int bottom,char *button_text);

// Original: shape_edittool.cpp_FUN_00476f40
// Address: 00476f40
void FUN_00476f40(int param_1);

// Original: shape_edittool.cpp_CEdButton_wasClicked_FUN_00476fd0
// Address: 00476fd0
int __cdecl CEdButton::wasClicked(CEdButton *this_ptr);

// Original: shape_edittool.cpp_calculateButtonWidth_FUN_00477080
// Address: 00477080
int __cdecl calculateButtonWidth(char *button_text);

// Original: shape_edittool.cpp_calculateButtonHeight_FUN_00477100
// Address: 00477100
int __cdecl calculateButtonHeight(char *button_text);

// Original: shape_edittool.cpp_CEdCheck_ctor_FUN_00477190
// Address: 00477190
CEdCheck * __cdecl CEdCheck::ctor(CEdCheck *this_ptr);

// Original: shape_edittool.cpp_CEdCheck_dtor_FUN_004771d0
// Address: 004771d0
CEdCheck * __cdecl CEdCheck::dtor(CEdCheck *this_ptr,uint flags);

// Original: shape_edittool.cpp_CEdCheck_setupWithText_FUN_004771f0
// Address: 004771f0
void __cdecl CEdCheck::setupWithText(CEdCheck *this_ptr,int x_pos,int y_pos,char *checkbox_text);

// Original: shape_edittool.cpp_CEdCheck_clearActiveButtonIfMatch_FUN_004772e0
// Address: 004772e0
void __cdecl CEdCheck::clearActiveButtonIfMatch(CEdCheck *this_ptr);

// Original: shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_00477300
// Address: 00477300
int __cdecl CEdCheck::calculateScaledWidth(CEdCheck *this_ptr);

// Original: shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_00477340
// Address: 00477340
int __cdecl CEdCheck::calculateBaseWidth(CEdCheck *this_ptr);

// Original: shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_00477370
// Address: 00477370
int __cdecl CEdCheck::calculateSpacing(CEdCheck *this_ptr);

// Original: shape_edittool.cpp_CEdCheck_render_FUN_00477390
// Address: 00477390
void __cdecl CEdCheck::render(CEdCheck *this_ptr);

// Original: shape_edittool.cpp_CEdCheck_handleInput_FUN_004774b0
// Address: 004774b0
int __cdecl CEdCheck::handleInput(CEdCheck *this_ptr);

// Original: shape_edittool.cpp_wildcardStringMatch_FUN_004775b0
// Address: 004775b0
int __cdecl wildcardStringMatch(char *pattern,char *target_string,int case_sensitive);

// Original: shape_edittool.cpp_CStrList_getItemCount_FUN_00477660
// Address: 00477660
int __cdecl CStrList::getItemCount(CStrList *this_ptr);

// Original: shape_edittool.cpp_getFontMaxCharHeight_FUN_00477670
// Address: 00477670
int __cdecl getFontMaxCharHeight(CBitFont *font_ptr);

// Original: shape_edittool.cpp_FUN_00477680
// Address: 00477680
undefined4 * __cdecl FUN_00477680(undefined4 *param_1,undefined4 *param_2);

// Original: shape_edittool.cpp_CVector3f_arrdtor8_FUN_00477690
// Address: 00477690
CVector3f * __cdecl CVector3f::arrdtor8(CVector3f *this_ptr,uint flags);
