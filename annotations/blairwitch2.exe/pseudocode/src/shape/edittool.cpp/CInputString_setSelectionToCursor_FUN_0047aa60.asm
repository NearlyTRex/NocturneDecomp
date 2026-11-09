; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0047aa60(CInputString *this_ptr)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   shape_edittool.cpp_CInputString_backspace_FUN_0047abd0 at 0047abe0
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0047acc0 at 0047aea0
;   shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0047ac60 at 0047acae
;   shape_edittool.cpp_FUN_0047d270 at 0047d64e
;   shape_edittool.cpp_showTextInputDialog_FUN_0047b1f0 at 0047b5ca
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0047aa60
        ;   Label: shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0047aa60
    MOV EAX,dword ptr [EDX + 0x134]     ; 0047aa64
    MOV dword ptr [EDX + 0x138],EAX     ; 0047aa6a
    RET                                 ; 0047aa70

