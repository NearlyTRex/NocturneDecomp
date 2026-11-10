; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * crt_unknown_c_FUN_005ce120(uint param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cda60 at 005cda66
;
; Referenced Globals:
;   undefined4 DAT_006262d4
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ce120
        ;   Label: crt_unknown.c_FUN_005ce120
    CMP EDX,0x3                         ; 005ce124
    JBE 0x005ce12c                      ; 005ce127
        ;   XREF to: 005ce12c (CONDITIONAL_JUMP)  ; LAB_005ce12c
    XOR EAX,EAX                         ; 005ce129
    RET                                 ; 005ce12b
    LEA EAX,[EDX*0x4 + 0x0]             ; 005ce12c
        ;   Label: LAB_005ce12c
    SUB EAX,EDX                         ; 005ce133
    SHL EAX,0x2                         ; 005ce135
    ADD EAX,EDX                         ; 005ce138
    ADD EAX,EAX                         ; 005ce13a
    ADD EAX,0x6262d4                    ; 005ce13c | DAT_006262d4
    RET                                 ; 005ce141

