; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint crt_unknown_c_FUN_005bf3dc(int param_1,uint param_2,ushort param_3,undefined4 param_4,uint param_5,uint param_6 )
;
;
; XREF[45]:
;   crt_unknown.c_FUN_005bf52b at 005bf538
;   crt_unknown.c_FUN_005bf54c at 005bf553
;   crt_unknown.c_FUN_005bf567 at 005bf576
;   crt_unknown.c_FUN_005bf583 at 005bf58a
;   crt_unknown.c_FUN_005bf593 at 005bf59a
;   crt_unknown.c_FUN_005bf5a7 at 005bf5ae
;   crt_unknown.c_FUN_005bf5b7 at 005bf5c6
;   crt_unknown.c_FUN_005bf5dc at 005bf5e5
;   crt_unknown.c_FUN_005bf5fb at 005bf60c
;   crt_unknown.c_FUN_005bf61b at 005bf624
;   ... and 35 more
;
; Referenced Globals:
;   undefined4 DAT_006216c0
;   undefined4 DAT_006216d0
;   undefined4 DAT_006216d4
;   undefined4 DAT_006216d8
;
; *****************************************************************************

section .text

    FLD extended double ptr [ESP + 0x10] ; 005bf3dc
        ;   Label: crt_unknown.c_FUN_005bf3dc
    FLD extended double ptr [ESP + 0x4] ; 005bf3e0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005bf3e4
        ;   Label: LAB_005bf3e4
    ADD EAX,EAX                         ; 005bf3e8
    JNC 0x005bf476                      ; 005bf3ea
        ;   XREF to: 005bf476 (CONDITIONAL_JUMP)  ; LAB_005bf476
    XOR EAX,0xe000000                   ; 005bf3f0
    TEST EAX,0xe000000                  ; 005bf3f5
    JZ 0x005bf3ff                       ; 005bf3fa
        ;   XREF to: 005bf3ff (CONDITIONAL_JUMP)  ; LAB_005bf3ff
    FDIVP                               ; 005bf3fc
    RET                                 ; 005bf3fe
    SHR EAX,0x1c                        ; 005bf3ff
        ;   Label: LAB_005bf3ff
    CMP byte ptr [EAX + 0x6216c0],0x0   ; 005bf402 | DAT_006216c0
    JNZ 0x005bf40e                      ; 005bf409
        ;   XREF to: 005bf40e (CONDITIONAL_JUMP)  ; LAB_005bf40e
    FDIVP                               ; 005bf40b
    RET                                 ; 005bf40d
    MOV EAX,dword ptr [ESP + 0xc]       ; 005bf40e
        ;   Label: LAB_005bf40e
    AND EAX,0x7fff                      ; 005bf412
    JZ 0x005bf480                       ; 005bf417
        ;   XREF to: 005bf480 (CONDITIONAL_JUMP)  ; LAB_005bf480
    CMP EAX,0x7fff                      ; 005bf419
    JZ 0x005bf480                       ; 005bf41e
        ;   XREF to: 005bf480 (CONDITIONAL_JUMP)  ; LAB_005bf480
    FNSTCW word ptr [ESP + 0x1c]        ; 005bf420
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005bf424
    OR EAX,0x33f                        ; 005bf428
    AND EAX,0xf3ff                      ; 005bf42d
    MOV dword ptr [ESP + 0x20],EAX      ; 005bf432
    FLDCW word ptr [ESP + 0x20]         ; 005bf436
    MOV EAX,dword ptr [ESP + 0x18]      ; 005bf43a
    AND EAX,0x7fff                      ; 005bf43e
    CMP EAX,0x1                         ; 005bf443
    JZ 0x005bf45f                       ; 005bf446
        ;   XREF to: 005bf45f (CONDITIONAL_JUMP)  ; LAB_005bf45f
    FMUL float ptr [0x006216d0]         ; 005bf448 | DAT_006216d0
    FXCH                                ; 005bf44e
    FMUL float ptr [0x006216d0]         ; 005bf450 | DAT_006216d0
    FXCH                                ; 005bf456
    FLDCW word ptr [ESP + 0x1c]         ; 005bf458
    FDIVP                               ; 005bf45c
    RET                                 ; 005bf45e
    FMUL float ptr [0x006216d4]         ; 005bf45f | DAT_006216d4
        ;   Label: LAB_005bf45f
    FXCH                                ; 005bf465
    FMUL float ptr [0x006216d4]         ; 005bf467 | DAT_006216d4
    FXCH                                ; 005bf46d
    FLDCW word ptr [ESP + 0x1c]         ; 005bf46f
    FDIVP                               ; 005bf473
    RET                                 ; 005bf475
    MOV EAX,dword ptr [ESP + 0x4]       ; 005bf476
        ;   Label: LAB_005bf476
    OR EAX,dword ptr [ESP + 0x8]        ; 005bf47a
    JNZ 0x005bf483                      ; 005bf47e
        ;   XREF to: 005bf483 (CONDITIONAL_JUMP)  ; LAB_005bf483
    FDIVP                               ; 005bf480
        ;   Label: LAB_005bf480
    RET                                 ; 005bf482
    MOV EAX,dword ptr [ESP + 0xc]       ; 005bf483
        ;   Label: LAB_005bf483
    AND EAX,0x7fff                      ; 005bf487
    JNZ 0x005bf480                      ; 005bf48c
        ;   XREF to: 005bf480 (CONDITIONAL_JUMP)  ; LAB_005bf480
    FNSTCW word ptr [ESP + 0x1c]        ; 005bf48e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005bf492
    OR EAX,0x33f                        ; 005bf496
    AND EAX,0xf3ff                      ; 005bf49b
    MOV dword ptr [ESP + 0x20],EAX      ; 005bf4a0
    FLDCW word ptr [ESP + 0x20]         ; 005bf4a4
    MOV EAX,dword ptr [ESP + 0x18]      ; 005bf4a8
    AND EAX,0x7fff                      ; 005bf4ac
    JZ 0x005bf4c4                       ; 005bf4b1
        ;   XREF to: 005bf4c4 (CONDITIONAL_JUMP)  ; LAB_005bf4c4
    CMP EAX,0x7fff                      ; 005bf4b3
    JZ 0x005bf4ec                       ; 005bf4b8
        ;   XREF to: 005bf4ec (CONDITIONAL_JUMP)  ; LAB_005bf4ec
    MOV EAX,dword ptr [ESP + 0x14]      ; 005bf4ba
    ADD EAX,EAX                         ; 005bf4be
    JNC 0x005bf4ec                      ; 005bf4c0
        ;   XREF to: 005bf4ec (CONDITIONAL_JUMP)  ; LAB_005bf4ec
    JMP 0x005bf4cc                      ; 005bf4c2
        ;   XREF to: 005bf4cc (UNCONDITIONAL_JUMP)  ; LAB_005bf4cc
    MOV EAX,dword ptr [ESP + 0x14]      ; 005bf4c4
        ;   Label: LAB_005bf4c4
    ADD EAX,EAX                         ; 005bf4c8
    JC 0x005bf4ec                       ; 005bf4ca
        ;   XREF to: 005bf4ec (CONDITIONAL_JUMP)  ; LAB_005bf4ec
    FXCH                                ; 005bf4cc
        ;   Label: LAB_005bf4cc
    FSTP ST0                            ; 005bf4ce
    FLD ST0                             ; 005bf4d0
    FMUL float ptr [0x006216d8]         ; 005bf4d2 | DAT_006216d8
    FSTP extended double ptr [ESP + 0x4] ; 005bf4d8
    FLD extended double ptr [ESP + 0x10] ; 005bf4dc
    FXCH                                ; 005bf4e0
    WAIT                                ; 005bf4e2
    FLDCW word ptr [ESP + 0x1c]         ; 005bf4e3
    JMP 0x005bf3e4                      ; 005bf4e7
        ;   XREF to: 005bf3e4 (UNCONDITIONAL_JUMP)  ; LAB_005bf3e4
    FLDCW word ptr [ESP + 0x1c]         ; 005bf4ec
        ;   Label: LAB_005bf4ec
    FDIVP                               ; 005bf4f0
    RET                                 ; 005bf4f2

