; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CInputString_backspace_FUN_004930c0(CInputString *this_ptr)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_edittool.cpp_FUN_004958d0 at 00495d8d
;   shape_edittool.cpp_showTextInputDialog_FUN_00493720 at 00493b1d
;
; Called Functions:
;   shape_edittool.cpp_CInputString_deleteRange_FUN_00493000
;   shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_00492f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004930c0
        ;   Label: shape_edittool.cpp_CInputString_backspace_FUN_004930c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004930c1
    MOV EDX,dword ptr [EBX + 0x134]     ; 004930c5
    TEST EDX,EDX                        ; 004930cb
    JG 0x004930da                       ; 004930cd
        ;   XREF to: 004930da (CONDITIONAL_JUMP)  ; LAB_004930da
    PUSH EBX                            ; 004930cf
    CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_00492f50 ; 004930d0
        ;   XREF to: 00492f50 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_00492f50(CInputString * this_ptr)
    ADD ESP,0x4                         ; 004930d5
    POP EBX                             ; 004930d8
    RET                                 ; 004930d9
    MOV EAX,EDX                         ; 004930da
        ;   Label: LAB_004930da
    PUSH EAX                            ; 004930dc
    DEC EDX                             ; 004930dd
    PUSH EDX                            ; 004930de
    PUSH EBX                            ; 004930df
    MOV dword ptr [EBX + 0x134],EDX     ; 004930e0
    CALL shape_edittool.cpp_CInputString_deleteRange_FUN_00493000 ; 004930e6
        ;   XREF to: 00493000 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteRange_FUN_00493000(CInputString * this_ptr, int start_pos, int end_pos)
    ADD ESP,0xc                         ; 004930eb
    PUSH EBX                            ; 004930ee
    CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_00492f50 ; 004930ef
        ;   XREF to: 00492f50 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_00492f50(CInputString * this_ptr)
    ADD ESP,0x4                         ; 004930f4
    POP EBX                             ; 004930f7
    RET                                 ; 004930f8

