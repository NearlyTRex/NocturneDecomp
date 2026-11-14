; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005aab44(undefined4 param_1,uint param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005b024e at 005b0281
;
; Called Functions:
;   crt_unknown.c_FUN_005aaabf
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005aab44
        ;   Label: crt_unknown.c_FUN_005aab44
    MOV EAX,dword ptr [ESP + 0xc]       ; 005aab45
    AND EAX,0x7ff00000                  ; 005aab49
    CMP EAX,0x7ff00000                  ; 005aab4e
    JZ 0x005aab88                       ; 005aab53
        ;   XREF to: 005aab88 (CONDITIONAL_JUMP)  ; LAB_005aab88
    FNSTSW AX                           ; 005aab55
    AND EAX,0x3800                      ; 005aab57
    JZ 0x005aab6b                       ; 005aab5c
        ;   XREF to: 005aab6b (CONDITIONAL_JUMP)  ; LAB_005aab6b
    FLD double ptr [ESP + 0x8]          ; 005aab5e
    CALL crt_unknown.c_FUN_005aaabf     ; 005aab62
        ;   XREF to: 005aaabf (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aaabf()
    POP EAX                             ; 005aab67
    RET 0x8                             ; 005aab68
    FXCH                                ; 005aab6b
        ;   Label: LAB_005aab6b
    SUB ESP,0xc                         ; 005aab6d
    FSTP extended double ptr [ESP]      ; 005aab70
    FLD double ptr [ESP + 0x14]         ; 005aab73
    CALL crt_unknown.c_FUN_005aaabf     ; 005aab77
        ;   XREF to: 005aaabf (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aaabf()
    FLD extended double ptr [ESP]       ; 005aab7c
    FXCH                                ; 005aab7f
    ADD ESP,0xc                         ; 005aab81
    POP EAX                             ; 005aab84
    RET 0x8                             ; 005aab85
    FDIV double ptr [ESP + 0x8]         ; 005aab88
        ;   Label: LAB_005aab88
    POP EAX                             ; 005aab8c
    RET 0x8                             ; 005aab8d

