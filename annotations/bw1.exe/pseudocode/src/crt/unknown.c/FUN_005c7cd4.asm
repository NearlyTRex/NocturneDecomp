; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c7cd4(undefined4 param_1,uint param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cd4be at 005cd4f1
;
; Called Functions:
;   crt_unknown.c_FUN_005c7c4f
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005c7cd4
        ;   Label: crt_unknown.c_FUN_005c7cd4
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c7cd5
    AND EAX,0x7ff00000                  ; 005c7cd9
    CMP EAX,0x7ff00000                  ; 005c7cde
    JZ 0x005c7d18                       ; 005c7ce3
        ;   XREF to: 005c7d18 (CONDITIONAL_JUMP)  ; LAB_005c7d18
    FNSTSW AX                           ; 005c7ce5
    AND EAX,0x3800                      ; 005c7ce7
    JZ 0x005c7cfb                       ; 005c7cec
        ;   XREF to: 005c7cfb (CONDITIONAL_JUMP)  ; LAB_005c7cfb
    FLD double ptr [ESP + 0x8]          ; 005c7cee
    CALL crt_unknown.c_FUN_005c7c4f     ; 005c7cf2
        ;   XREF to: 005c7c4f (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c7c4f()
    POP EAX                             ; 005c7cf7
    RET 0x8                             ; 005c7cf8
    FXCH                                ; 005c7cfb
        ;   Label: LAB_005c7cfb
    SUB ESP,0xc                         ; 005c7cfd
    FSTP extended double ptr [ESP]      ; 005c7d00
    FLD double ptr [ESP + 0x14]         ; 005c7d03
    CALL crt_unknown.c_FUN_005c7c4f     ; 005c7d07
        ;   XREF to: 005c7c4f (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c7c4f()
    FLD extended double ptr [ESP]       ; 005c7d0c
    FXCH                                ; 005c7d0f
    ADD ESP,0xc                         ; 005c7d11
    POP EAX                             ; 005c7d14
    RET 0x8                             ; 005c7d15
    FDIV double ptr [ESP + 0x8]         ; 005c7d18
        ;   Label: LAB_005c7d18
    POP EAX                             ; 005c7d1c
    RET 0x8                             ; 005c7d1d

