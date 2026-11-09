; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_00492f50(CInputString *this_ptr)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   shape_edittool.cpp_CInputString_backspace_FUN_004930c0 at 004930d0
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_004931b0 at 00493390
;   shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_00493150 at 0049319e
;   shape_edittool.cpp_FUN_004958d0 at 00495cbb
;   shape_edittool.cpp_showTextInputDialog_FUN_00493720 at 00493b0d
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00492f50
        ;   Label: shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_00492f50
    MOV EAX,dword ptr [EDX + 0x134]     ; 00492f54
    MOV dword ptr [EDX + 0x138],EAX     ; 00492f5a
    RET                                 ; 00492f60

