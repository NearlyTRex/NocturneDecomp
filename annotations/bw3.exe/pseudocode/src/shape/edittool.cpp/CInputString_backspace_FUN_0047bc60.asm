; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CInputString_backspace_FUN_0047bc60(CInputString *this_ptr)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_edittool.cpp_FUN_0047e470 at 0047e92d
;   shape_edittool.cpp_showTextInputDialog_FUN_0047c2c0 at 0047c6bd
;
; Called Functions:
;   shape_edittool.cpp_CInputString_deleteRange_FUN_0047bba0
;   shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0047baf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047bc60
        ;   Label: shape_edittool.cpp_CInputString_backspace_FUN_0047bc60
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047bc61
    MOV EDX,dword ptr [EBX + 0x134]     ; 0047bc65
    TEST EDX,EDX                        ; 0047bc6b
    JG 0x0047bc7a                       ; 0047bc6d
        ;   XREF to: 0047bc7a (CONDITIONAL_JUMP)  ; LAB_0047bc7a
    PUSH EBX                            ; 0047bc6f
    CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0047baf0 ; 0047bc70
        ;   XREF to: 0047baf0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0047baf0(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047bc75
    POP EBX                             ; 0047bc78
    RET                                 ; 0047bc79
    MOV EAX,EDX                         ; 0047bc7a
        ;   Label: LAB_0047bc7a
    PUSH EAX                            ; 0047bc7c
    DEC EDX                             ; 0047bc7d
    PUSH EDX                            ; 0047bc7e
    PUSH EBX                            ; 0047bc7f
    MOV dword ptr [EBX + 0x134],EDX     ; 0047bc80
    CALL shape_edittool.cpp_CInputString_deleteRange_FUN_0047bba0 ; 0047bc86
        ;   XREF to: 0047bba0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteRange_FUN_0047bba0(CInputString * this_ptr, int start_pos, int end_pos)
    ADD ESP,0xc                         ; 0047bc8b
    PUSH EBX                            ; 0047bc8e
    CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0047baf0 ; 0047bc8f
        ;   XREF to: 0047baf0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0047baf0(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047bc94
    POP EBX                             ; 0047bc97
    RET                                 ; 0047bc98

