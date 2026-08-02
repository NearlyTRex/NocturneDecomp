; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005746f0(int param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_00574404 at 00574427
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005746f0
        ;   Label: crt_unknown.c_FUN_005746f0
    CMP AX,0x61                         ; 005746f4
    JC 0x00574703                       ; 005746f8
        ;   XREF to: 00574703 (CONDITIONAL_JUMP)  ; LAB_00574703
    CMP AX,0x7a                         ; 005746fa
    JA 0x00574703                       ; 005746fe
        ;   XREF to: 00574703 (CONDITIONAL_JUMP)  ; LAB_00574703
    SUB EAX,0x20                        ; 00574700
    RET                                 ; 00574703
        ;   Label: LAB_00574703

