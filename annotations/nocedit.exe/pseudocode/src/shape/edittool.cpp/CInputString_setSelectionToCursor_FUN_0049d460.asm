; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0049d460(CInputString *this_ptr)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 at 0049ff34
;   shape_edittool.cpp_CInputString_backspace_FUN_0049d5d0 at 0049d5e0
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0049d6c0 at 0049d8a0
;   shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0049d660 at 0049d6ae
;   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 at 0049deea
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049d460
        ;   Label: shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460
    MOV EAX,dword ptr [EDX + 0x134]     ; 0049d464
    MOV dword ptr [EDX + 0x138],EAX     ; 0049d46a
    RET                                 ; 0049d470

