; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_2d_cpp_FUN_005cf2d0(int param_1)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005cefe4 at 005cf007
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005cf2d0
        ;   Label: unkafter_2d.cpp_FUN_005cf2d0
    CMP AX,0x61                         ; 005cf2d4
    JC 0x005cf2e3                       ; 005cf2d8
        ;   XREF to: 005cf2e3 (CONDITIONAL_JUMP)  ; LAB_005cf2e3
    CMP AX,0x7a                         ; 005cf2da
    JA 0x005cf2e3                       ; 005cf2de
        ;   XREF to: 005cf2e3 (CONDITIONAL_JUMP)  ; LAB_005cf2e3
    SUB EAX,0x20                        ; 005cf2e0
    RET                                 ; 005cf2e3
        ;   Label: LAB_005cf2e3

