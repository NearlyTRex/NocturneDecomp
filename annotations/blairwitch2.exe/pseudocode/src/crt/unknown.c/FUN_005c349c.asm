; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint crt_unknown_c_FUN_005c349c(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005bd9a8 at 005bdc98
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c349c
        ;   Label: crt_unknown.c_FUN_005c349c
    TEST EDX,0x7ff00000                 ; 005c349d
    JZ 0x005c34e4                       ; 005c34a3
        ;   XREF to: 005c34e4 (CONDITIONAL_JUMP)  ; LAB_005c34e4
    SUB EBX,EBX                         ; 005c34a5
    ADD EAX,EAX                         ; 005c34a7
    ADC EDX,EDX                         ; 005c34a9
    RCR EBX,0x1                         ; 005c34ab
    ADD EAX,0x20000000                  ; 005c34ad
    ADC EDX,0x0                         ; 005c34b2
    JZ 0x005c34db                       ; 005c34b5
        ;   XREF to: 005c34db (CONDITIONAL_JUMP)  ; LAB_005c34db
    CMP EDX,0x8fe00000                  ; 005c34b7
    JNC 0x005c34db                      ; 005c34bd
        ;   XREF to: 005c34db (CONDITIONAL_JUMP)  ; LAB_005c34db
    CMP EDX,0x70200000                  ; 005c34bf
    JC 0x005c34e4                       ; 005c34c5
        ;   XREF to: 005c34e4 (CONDITIONAL_JUMP)  ; LAB_005c34e4
    SUB EDX,0x70000000                  ; 005c34c7
    ADD EAX,EAX                         ; 005c34cd
    ADC EDX,EDX                         ; 005c34cf
    ADD EAX,EAX                         ; 005c34d1
    ADC EDX,EDX                         ; 005c34d3
    OR EDX,EBX                          ; 005c34d5
    MOV EAX,EDX                         ; 005c34d7
    POP EBX                             ; 005c34d9
    RET                                 ; 005c34da
    MOV EAX,0x7f800000                  ; 005c34db
        ;   Label: LAB_005c34db
    OR EAX,EBX                          ; 005c34e0
    POP EBX                             ; 005c34e2
    RET                                 ; 005c34e3
    SUB EAX,EAX                         ; 005c34e4
        ;   Label: LAB_005c34e4
    POP EBX                             ; 005c34e6
    RET                                 ; 005c34e7

