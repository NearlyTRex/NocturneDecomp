; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_2d_cpp_FUN_005c6fd0(int param_1)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005c6ce4 at 005c6d07
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c6fd0
        ;   Label: unkafter_2d.cpp_FUN_005c6fd0
    CMP AX,0x61                         ; 005c6fd4
    JC 0x005c6fe3                       ; 005c6fd8
        ;   XREF to: 005c6fe3 (CONDITIONAL_JUMP)  ; LAB_005c6fe3
    CMP AX,0x7a                         ; 005c6fda
    JA 0x005c6fe3                       ; 005c6fde
        ;   XREF to: 005c6fe3 (CONDITIONAL_JUMP)  ; LAB_005c6fe3
    SUB EAX,0x20                        ; 005c6fe0
    RET                                 ; 005c6fe3
        ;   Label: LAB_005c6fe3

