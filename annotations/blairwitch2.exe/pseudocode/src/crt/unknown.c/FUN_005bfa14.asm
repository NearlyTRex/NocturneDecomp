; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005bfa14(undefined4 param_1,uint param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c51be at 005c51f1
;
; Called Functions:
;   crt_unknown.c_FUN_005bf98f
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005bfa14
        ;   Label: crt_unknown.c_FUN_005bfa14
    MOV EAX,dword ptr [ESP + 0xc]       ; 005bfa15
    AND EAX,0x7ff00000                  ; 005bfa19
    CMP EAX,0x7ff00000                  ; 005bfa1e
    JZ 0x005bfa58                       ; 005bfa23
        ;   XREF to: 005bfa58 (CONDITIONAL_JUMP)  ; LAB_005bfa58
    FNSTSW AX                           ; 005bfa25
    AND EAX,0x3800                      ; 005bfa27
    JZ 0x005bfa3b                       ; 005bfa2c
        ;   XREF to: 005bfa3b (CONDITIONAL_JUMP)  ; LAB_005bfa3b
    FLD double ptr [ESP + 0x8]          ; 005bfa2e
    CALL crt_unknown.c_FUN_005bf98f     ; 005bfa32
        ;   XREF to: 005bf98f (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf98f()
    POP EAX                             ; 005bfa37
    RET 0x8                             ; 005bfa38
    FXCH                                ; 005bfa3b
        ;   Label: LAB_005bfa3b
    SUB ESP,0xc                         ; 005bfa3d
    FSTP extended double ptr [ESP]      ; 005bfa40
    FLD double ptr [ESP + 0x14]         ; 005bfa43
    CALL crt_unknown.c_FUN_005bf98f     ; 005bfa47
        ;   XREF to: 005bf98f (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bf98f()
    FLD extended double ptr [ESP]       ; 005bfa4c
    FXCH                                ; 005bfa4f
    ADD ESP,0xc                         ; 005bfa51
    POP EAX                             ; 005bfa54
    RET 0x8                             ; 005bfa55
    FDIV double ptr [ESP + 0x8]         ; 005bfa58
        ;   Label: LAB_005bfa58
    POP EAX                             ; 005bfa5c
    RET 0x8                             ; 005bfa5d

