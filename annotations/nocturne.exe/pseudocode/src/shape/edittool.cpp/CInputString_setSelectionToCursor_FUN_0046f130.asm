; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0046f130(CInputString *this_ptr)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_00470eb0 at 00471274
;   shape_edittool.cpp_CInputString_backspace_FUN_0046f2a0 at 0046f2b0
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0046f390 at 0046f570
;   shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0046f330 at 0046f37e
;   shape_edittool.cpp_showTextInputDialog_FUN_0046f7e0 at 0046f9d4
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0046f130
        ;   Label: shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0046f130
    MOV EAX,dword ptr [EDX + 0x134]     ; 0046f134
    MOV dword ptr [EDX + 0x138],EAX     ; 0046f13a
    RET                                 ; 0046f140

