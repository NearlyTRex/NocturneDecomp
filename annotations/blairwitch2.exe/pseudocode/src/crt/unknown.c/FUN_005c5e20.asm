; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * crt_unknown_c_FUN_005c5e20(uint param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c5760 at 005c5766
;
; Referenced Globals:
;   undefined4 DAT_0061ef54
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c5e20
        ;   Label: crt_unknown.c_FUN_005c5e20
    CMP EDX,0x3                         ; 005c5e24
    JBE 0x005c5e2c                      ; 005c5e27
        ;   XREF to: 005c5e2c (CONDITIONAL_JUMP)  ; LAB_005c5e2c
    XOR EAX,EAX                         ; 005c5e29
    RET                                 ; 005c5e2b
    LEA EAX,[EDX*0x4 + 0x0]             ; 005c5e2c
        ;   Label: LAB_005c5e2c
    SUB EAX,EDX                         ; 005c5e33
    SHL EAX,0x2                         ; 005c5e35
    ADD EAX,EDX                         ; 005c5e38
    ADD EAX,EAX                         ; 005c5e3a
    ADD EAX,0x61ef54                    ; 005c5e3c | DAT_0061ef54
    RET                                 ; 005c5e41

