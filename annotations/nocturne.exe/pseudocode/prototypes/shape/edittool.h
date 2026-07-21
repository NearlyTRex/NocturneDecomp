#pragma once

// Function prototypes for shape/edittool.cpp
// Generated from Ghidra function signatures

// Original: shape_edittool.cpp_CInputString_init_FUN_0046f0a0
// Address: 0046f0a0
void __cdecl CInputString::init(char *param_1,int param_2,uint param_3,undefined4 param_4);

// Original: shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0046f130
// Address: 0046f130
void __cdecl CInputString::setSelectionToCursor(int param_1);

// Original: shape_edittool.cpp_CInputString_insertChar_FUN_0046f150
// Address: 0046f150
void __cdecl CInputString::insertChar(int param_1,undefined1 param_2,int param_3);

// Original: shape_edittool.cpp_CInputString_deleteRange_FUN_0046f1e0
// Address: 0046f1e0
void __cdecl CInputString::deleteRange(int param_1,int param_2,int param_3);

// Original: shape_edittool.cpp_CInputString_deleteSelection_FUN_0046f250
// Address: 0046f250
void __cdecl CInputString::deleteSelection(int param_1);

// Original: shape_edittool.cpp_CInputString_backspace_FUN_0046f2a0
// Address: 0046f2a0
void __cdecl CInputString::backspace(int param_1);

// Original: shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0046f2e0
// Address: 0046f2e0
void __cdecl CInputString::copySelectionToClipboard(int param_1);

// Original: shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0046f330
// Address: 0046f330
void __cdecl CInputString::pasteFromClipboard(undefined4 param_1);

// Original: shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0046f390
// Address: 0046f390
void __cdecl CInputString::handleKeyboardInput(int param_1);

// Original: shape_edittool.cpp_CInputString_calcX_FUN_0046f5c0
// Address: 0046f5c0
undefined4 __cdecl CInputString::calcX(int param_1,uint param_2);

// Original: shape_edittool.cpp_CInputString_draw_FUN_0046f680
// Address: 0046f680
void __cdecl CInputString::draw(int param_1,int param_2,int param_3);

// Original: shape_edittool.cpp_CEditorTools_ctor_FUN_0046f9f0
// Address: 0046f9f0
undefined4 CEditorTools::ctor(undefined4 param_1);

// Original: shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
// Address: 0046fff0
void __cdecl CEditorTools::displayCenteredStatusMessage(undefined4 param_1,undefined4 param_2);

// Original: shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_00470550
// Address: 00470550
undefined4 __cdecl CEditorTools::showFileSelectionDialog(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,byte param_6);

// Original: shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00471360
// Address: 00471360
undefined4 __cdecl CEditorTools::promptForValidInteger(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int param_5,int param_6,byte param_7);

// Original: shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_00471430
// Address: 00471430
undefined4 __cdecl CEditorTools::promptForValidFloat(undefined4 param_1,undefined4 param_2,float *param_3,int param_4,float param_5,float param_6,byte param_7);

// Original: shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_00471530
// Address: 00471530
undefined4 CEditorTools::promptForValidVector(undefined4 param_1,undefined4 param_2,float *param_3,byte param_4);

// Original: shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00471600
// Address: 00471600
void __cdecl CEditorTools::showTextInputDialog(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);

// Original: shape_edittool.cpp_CEditorTools_showCheatInputDialog_FUN_00471630
// Address: 00471630
void __cdecl CEditorTools::showCheatInputDialog(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);

// Original: shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_00471660
// Address: 00471660
void __cdecl CEditorTools::showCenteredProgressDialog(undefined4 param_1,int param_2);

// Original: shape_edittool.cpp_CEditorTools_updatePercentage_FUN_00471760
// Address: 00471760
void __cdecl CEditorTools::updatePercentage(undefined4 param_1,float param_2,float param_3);

// Original: shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80
// Address: 00471a80
void __cdecl CEditorTools::createCenteredModal(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5);

// Original: shape_edittool.cpp_CEditorTools_createModalWindow_FUN_00471b50
// Address: 00471b50
void __cdecl CEditorTools::createModalWindow(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,byte param_7);

// Original: shape_edittool.cpp_CEditorTools_popWindowState_FUN_004721e0
// Address: 004721e0
void __cdecl CEditorTools::popWindowState(void);

// Original: shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_00472490
// Address: 00472490
undefined1 __cdecl CEditorTools::getTimeCycledColorByte(void);

// Original: shape_edittool.cpp_CEditorTools_drawMousePointer_FUN_004724e0
// Address: 004724e0
void __cdecl CEditorTools::drawMousePointer(undefined4 param_1,int param_2);

// Original: shape_edittool.cpp_CEditorTools_getClipboardText_FUN_00472c90
// Address: 00472c90
char * __cdecl CEditorTools::getClipboardText(void);

// Original: shape_edittool.cpp_CEditorTools_setClipboardText_FUN_00472d10
// Address: 00472d10
void __cdecl CEditorTools::setClipboardText(undefined4 param_1,char *param_2);

// Original: shape_edittool.cpp_CEditorTools_displayMemoryDiagnostics_FUN_004736d0
// Address: 004736d0
void __cdecl CEditorTools::displayMemoryDiagnostics(undefined4 param_1,char *param_2);

// Original: shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_00473a60
// Address: 00473a60
void CEditorTools::setMousePointerType(undefined4 param_1,uint param_2,uint param_3,uint param_4);

// Original: shape_edittool.cpp_CStrList_ctor_FUN_00473b60
// Address: 00473b60
void __cdecl CStrList::ctor(undefined4 *param_1);

// Original: shape_edittool.cpp_CStrList_dtor_FUN_00473b80
// Address: 00473b80
int __cdecl CStrList::dtor(int param_1,byte param_2);

// Original: shape_edittool.cpp_CStrList_copy_FUN_00473bd0
// Address: 00473bd0
undefined4 * CStrList::copy(undefined4 *param_1,undefined4 param_2);

// Original: shape_edittool.cpp_CStrList_copyFrom_FUN_00473c00
// Address: 00473c00
int __cdecl CStrList::copyFrom(int param_1,int *param_2);

// Original: shape_edittool.cpp_CStrList_clear_FUN_00473c50
// Address: 00473c50
void __cdecl CStrList::clear(int *param_1);

// Original: shape_edittool.cpp_CStrList_add_FUN_00473cb0
// Address: 00473cb0
void __cdecl CStrList::add(undefined4 *param_1,undefined4 param_2);

// Original: shape_edittool.cpp_CStrList_insert_FUN_00473cf0
// Address: 00473cf0
void __cdecl CStrList::insert(int *param_1,int param_2,char *param_3);

// Original: shape_edittool.cpp_CStrList_allocate_FUN_00473de0
// Address: 00473de0
void __cdecl CStrList::allocate(int *param_1,int param_2);

// Original: shape_edittool.cpp_CStrList_remove_FUN_00473f10
// Address: 00473f10
void __cdecl CStrList::remove(int *param_1,int param_2,int param_3);

// Original: shape_edittool.cpp_CStrList_sortAll_FUN_00473fd0
// Address: 00473fd0
void __cdecl CStrList::sortAll(int *param_1);

// Original: shape_edittool.cpp_CStrList_sort_FUN_00474010
// Address: 00474010
void __cdecl CStrList::sort(int *param_1,int param_2,int param_3);

// Original: shape_edittool.cpp_CStrList_getStringAt_FUN_00474080
// Address: 00474080
undefined4 __cdecl CStrList::getStringAt(int param_1,int param_2);

// Original: shape_edittool.cpp_CStrList_getFieldAt_FUN_00474090
// Address: 00474090
void __cdecl CStrList::getFieldAt(undefined4 param_1,char *param_2,undefined4 param_3,int param_4);

// Original: shape_edittool.cpp_CStrList_findString_FUN_00474140
// Address: 00474140
int __cdecl CStrList::findString(int *param_1,undefined4 param_2);

// Original: shape_edittool.cpp_CStrList_findByFirstField_FUN_00474180
// Address: 00474180
int CStrList::findByFirstField(int *param_1,char *param_2);

// Original: shape_edittool.cpp_CStrList_swap_FUN_00474300
// Address: 00474300
void __cdecl CStrList::swap(int *param_1,int param_2,int param_3);

// Original: shape_edittool.cpp_CStrList_copyToClipboard_FUN_00474380
// Address: 00474380
void __cdecl CStrList::copyToClipboard(int *param_1);

// Original: shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00474460
// Address: 00474460
void __cdecl CStrList::insertSortedFileRecord(int *param_1,undefined4 param_2,int param_3,undefined4 param_4);

// Original: shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004746b0
// Address: 004746b0
void __cdecl CStrList::populateFromFileSearch(undefined4 param_1,char *param_2,char *param_3);

// Original: shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0
// Address: 004748b0
void __cdecl CStrList::populateFromFilesNoDuplicates(int *param_1,char *param_2,char *param_3);

// Original: shape_edittool.cpp_CPickList_dtor_FUN_00474cf0
// Address: 00474cf0
int __cdecl CPickList::dtor(int param_1,byte param_2);

// Original: shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
// Address: 00474d70
int CPickList::displayChoicesAndWaitForInput(int *param_1,undefined4 param_2,undefined4 param_3);

// Original: shape_edittool.cpp_CPickList_initializeDialog_FUN_00474e70
// Address: 00474e70
void __cdecl CPickList::initializeDialog(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);

// Original: shape_edittool.cpp_CPickList_handleInput_FUN_00474ea0
// Address: 00474ea0
undefined4 CPickList::handleInput(int *param_1);

// Original: shape_edittool.cpp_CPickList_validateScrollBounds_FUN_00475db0
// Address: 00475db0
void CPickList::validateScrollBounds(int *param_1);

// Original: shape_edittool.cpp_CPickList_getItemAtMousePosition_FUN_00475f10
// Address: 00475f10
int __cdecl CPickList::getItemAtMousePosition(int *param_1,int param_2,int param_3);

// Original: shape_edittool.cpp_CPickList_enableItem_FUN_00475f80
// Address: 00475f80
void __cdecl CPickList::enableItem(int *param_1,int param_2,int param_3);

// Original: shape_edittool.cpp_CPickList_isItemEnabled_FUN_00476040
// Address: 00476040
bool __cdecl CPickList::isItemEnabled(int *param_1,int param_2);

// Original: shape_edittool.cpp_CPickList_insert_FUN_004760a0
// Address: 004760a0
void CPickList::insert(int param_1,undefined4 param_2,undefined4 param_3);

// Original: shape_edittool.cpp_CPickList_remove_FUN_00476100
// Address: 00476100
void CPickList::remove(int param_1,undefined4 param_2,undefined4 param_3);

// Original: shape_edittool.cpp_CPickList_sort_FUN_004761a0
// Address: 004761a0
void CPickList::sort(int param_1,undefined4 param_2,undefined4 param_3);

// Original: shape_edittool.cpp_CPickList_swap_FUN_00476200
// Address: 00476200
void CPickList::swap(int param_1,undefined4 param_2,undefined4 param_3);

// Original: shape_edittool.cpp_draw3DBorder_FUN_00476260
// Address: 00476260
void __cdecl draw3DBorder(int param_1,int param_2,int param_3,int param_4,int param_5);

// Original: shape_edittool.cpp_draw3DInsetBorder_FUN_00476310
// Address: 00476310
int draw3DInsetBorder(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);

// Original: shape_edittool.cpp_CEdScrollBar_ctor_FUN_00476450
// Address: 00476450
void __cdecl CEdScrollBar::ctor(undefined4 *param_1);

// Original: shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004764b0
// Address: 004764b0
void __cdecl CEdScrollBar::clearActiveButtonIfMatch(int param_1);

// Original: shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004764d0
// Address: 004764d0
void __cdecl CEdScrollBar::setPosition(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5);

// Original: shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_00476800
// Address: 00476800
void __cdecl CEdScrollBar::computeThumb(int *param_1);

// Original: shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00476920
// Address: 00476920
void CEdScrollBar::handleInput(int *param_1);

// Original: shape_edittool.cpp_CEdScrollBar_clampScrollPosition_FUN_00476ce0
// Address: 00476ce0
void __cdecl CEdScrollBar::clampScrollPosition(int *param_1);

// Original: shape_edittool.cpp_calculateGridWidth_FUN_00476df0
// Address: 00476df0
int __cdecl calculateGridWidth(void);

// Original: shape_edittool.cpp_calculateGridHeight_FUN_00476e10
// Address: 00476e10
int __cdecl calculateGridHeight(void);

// Original: shape_edittool.cpp_wildcardStringMatch_FUN_004775b0
// Address: 004775b0
bool __cdecl wildcardStringMatch(byte *param_1,byte *param_2,int param_3);

// Original: shape_edittool.cpp_CStrList_getItemCount_FUN_00477660
// Address: 00477660
undefined4 __cdecl CStrList::getItemCount(undefined4 *param_1);
