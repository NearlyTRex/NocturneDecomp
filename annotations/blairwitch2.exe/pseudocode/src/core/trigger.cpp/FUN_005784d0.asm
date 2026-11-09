; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_trigger_cpp_FUN_005784d0(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005784d0
        ;   Label: core_trigger.cpp_FUN_005784d0
    CMP dword ptr [EAX + 0x2d0],0x3     ; 005784d4
    JZ 0x005784e3                       ; 005784db
        ;   XREF to: 005784e3 (CONDITIONAL_JUMP)  ; LAB_005784e3
    MOV EAX,0x1                         ; 005784dd
    RET                                 ; 005784e2
    MOV dword ptr [EAX + 0x44c],0x1     ; 005784e3
        ;   Label: LAB_005784e3
    MOV EAX,0x1                         ; 005784ed
    RET                                 ; 005784f2

