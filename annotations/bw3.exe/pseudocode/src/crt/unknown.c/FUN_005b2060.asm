; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005b2060(int param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005b1d74 at 005b1d97
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b2060
        ;   Label: crt_unknown.c_FUN_005b2060
    CMP AX,0x61                         ; 005b2064
    JC 0x005b2073                       ; 005b2068
        ;   XREF to: 005b2073 (CONDITIONAL_JUMP)  ; LAB_005b2073
    CMP AX,0x7a                         ; 005b206a
    JA 0x005b2073                       ; 005b206e
        ;   XREF to: 005b2073 (CONDITIONAL_JUMP)  ; LAB_005b2073
    SUB EAX,0x20                        ; 005b2070
    RET                                 ; 005b2073
        ;   Label: LAB_005b2073

