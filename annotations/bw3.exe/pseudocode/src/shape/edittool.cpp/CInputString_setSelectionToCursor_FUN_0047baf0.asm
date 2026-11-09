; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0047baf0(CInputString *this_ptr)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   shape_edittool.cpp_CInputString_backspace_FUN_0047bc60 at 0047bc70
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0047bd50 at 0047bf30
;   shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0047bcf0 at 0047bd3e
;   shape_edittool.cpp_FUN_0047e470 at 0047e85b
;   shape_edittool.cpp_showTextInputDialog_FUN_0047c2c0 at 0047c6ad
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0047baf0
        ;   Label: shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0047baf0
    MOV EAX,dword ptr [EDX + 0x134]     ; 0047baf4
    MOV dword ptr [EDX + 0x138],EAX     ; 0047bafa
    RET                                 ; 0047bb00

