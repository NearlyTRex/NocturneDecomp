; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint crt_unknown_c_FUN_005aa50c(int param_1,uint param_2,ushort param_3,undefined4 param_4,uint param_5,uint param_6 )
;
;
; XREF[45]:
;   crt_unknown.c_FUN_005aa65b at 005aa668
;   crt_unknown.c_FUN_005aa67c at 005aa683
;   crt_unknown.c_FUN_005aa697 at 005aa6a6
;   crt_unknown.c_FUN_005aa6b3 at 005aa6ba
;   crt_unknown.c_FUN_005aa6c3 at 005aa6ca
;   crt_unknown.c_FUN_005aa6d7 at 005aa6de
;   crt_unknown.c_FUN_005aa6e7 at 005aa6f6
;   crt_unknown.c_FUN_005aa70c at 005aa715
;   crt_unknown.c_FUN_005aa72b at 005aa73c
;   crt_unknown.c_FUN_005aa74b at 005aa754
;   ... and 35 more
;
; Referenced Globals:
;   undefined4 DAT_00609ef8
;   undefined4 DAT_00609f08
;   undefined4 DAT_00609f0c
;   undefined4 DAT_00609f10
;
; *****************************************************************************

section .text

    FLD extended double ptr [ESP + 0x10] ; 005aa50c
        ;   Label: crt_unknown.c_FUN_005aa50c
    FLD extended double ptr [ESP + 0x4] ; 005aa510
    MOV EAX,dword ptr [ESP + 0x8]       ; 005aa514
        ;   Label: LAB_005aa514
    ADD EAX,EAX                         ; 005aa518
    JNC 0x005aa5a6                      ; 005aa51a
        ;   XREF to: 005aa5a6 (CONDITIONAL_JUMP)  ; LAB_005aa5a6
    XOR EAX,0xe000000                   ; 005aa520
    TEST EAX,0xe000000                  ; 005aa525
    JZ 0x005aa52f                       ; 005aa52a
        ;   XREF to: 005aa52f (CONDITIONAL_JUMP)  ; LAB_005aa52f
    FDIVP                               ; 005aa52c
    RET                                 ; 005aa52e
    SHR EAX,0x1c                        ; 005aa52f
        ;   Label: LAB_005aa52f
    CMP byte ptr [EAX + 0x609ef8],0x0   ; 005aa532 | DAT_00609ef8
    JNZ 0x005aa53e                      ; 005aa539
        ;   XREF to: 005aa53e (CONDITIONAL_JUMP)  ; LAB_005aa53e
    FDIVP                               ; 005aa53b
    RET                                 ; 005aa53d
    MOV EAX,dword ptr [ESP + 0xc]       ; 005aa53e
        ;   Label: LAB_005aa53e
    AND EAX,0x7fff                      ; 005aa542
    JZ 0x005aa5b0                       ; 005aa547
        ;   XREF to: 005aa5b0 (CONDITIONAL_JUMP)  ; LAB_005aa5b0
    CMP EAX,0x7fff                      ; 005aa549
    JZ 0x005aa5b0                       ; 005aa54e
        ;   XREF to: 005aa5b0 (CONDITIONAL_JUMP)  ; LAB_005aa5b0
    FNSTCW word ptr [ESP + 0x1c]        ; 005aa550
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005aa554
    OR EAX,0x33f                        ; 005aa558
    AND EAX,0xf3ff                      ; 005aa55d
    MOV dword ptr [ESP + 0x20],EAX      ; 005aa562
    FLDCW word ptr [ESP + 0x20]         ; 005aa566
    MOV EAX,dword ptr [ESP + 0x18]      ; 005aa56a
    AND EAX,0x7fff                      ; 005aa56e
    CMP EAX,0x1                         ; 005aa573
    JZ 0x005aa58f                       ; 005aa576
        ;   XREF to: 005aa58f (CONDITIONAL_JUMP)  ; LAB_005aa58f
    FMUL float ptr [0x00609f08]         ; 005aa578 | DAT_00609f08
    FXCH                                ; 005aa57e
    FMUL float ptr [0x00609f08]         ; 005aa580 | DAT_00609f08
    FXCH                                ; 005aa586
    FLDCW word ptr [ESP + 0x1c]         ; 005aa588
    FDIVP                               ; 005aa58c
    RET                                 ; 005aa58e
    FMUL float ptr [0x00609f0c]         ; 005aa58f | DAT_00609f0c
        ;   Label: LAB_005aa58f
    FXCH                                ; 005aa595
    FMUL float ptr [0x00609f0c]         ; 005aa597 | DAT_00609f0c
    FXCH                                ; 005aa59d
    FLDCW word ptr [ESP + 0x1c]         ; 005aa59f
    FDIVP                               ; 005aa5a3
    RET                                 ; 005aa5a5
    MOV EAX,dword ptr [ESP + 0x4]       ; 005aa5a6
        ;   Label: LAB_005aa5a6
    OR EAX,dword ptr [ESP + 0x8]        ; 005aa5aa
    JNZ 0x005aa5b3                      ; 005aa5ae
        ;   XREF to: 005aa5b3 (CONDITIONAL_JUMP)  ; LAB_005aa5b3
    FDIVP                               ; 005aa5b0
        ;   Label: LAB_005aa5b0
    RET                                 ; 005aa5b2
    MOV EAX,dword ptr [ESP + 0xc]       ; 005aa5b3
        ;   Label: LAB_005aa5b3
    AND EAX,0x7fff                      ; 005aa5b7
    JNZ 0x005aa5b0                      ; 005aa5bc
        ;   XREF to: 005aa5b0 (CONDITIONAL_JUMP)  ; LAB_005aa5b0
    FNSTCW word ptr [ESP + 0x1c]        ; 005aa5be
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005aa5c2
    OR EAX,0x33f                        ; 005aa5c6
    AND EAX,0xf3ff                      ; 005aa5cb
    MOV dword ptr [ESP + 0x20],EAX      ; 005aa5d0
    FLDCW word ptr [ESP + 0x20]         ; 005aa5d4
    MOV EAX,dword ptr [ESP + 0x18]      ; 005aa5d8
    AND EAX,0x7fff                      ; 005aa5dc
    JZ 0x005aa5f4                       ; 005aa5e1
        ;   XREF to: 005aa5f4 (CONDITIONAL_JUMP)  ; LAB_005aa5f4
    CMP EAX,0x7fff                      ; 005aa5e3
    JZ 0x005aa61c                       ; 005aa5e8
        ;   XREF to: 005aa61c (CONDITIONAL_JUMP)  ; LAB_005aa61c
    MOV EAX,dword ptr [ESP + 0x14]      ; 005aa5ea
    ADD EAX,EAX                         ; 005aa5ee
    JNC 0x005aa61c                      ; 005aa5f0
        ;   XREF to: 005aa61c (CONDITIONAL_JUMP)  ; LAB_005aa61c
    JMP 0x005aa5fc                      ; 005aa5f2
        ;   XREF to: 005aa5fc (UNCONDITIONAL_JUMP)  ; LAB_005aa5fc
    MOV EAX,dword ptr [ESP + 0x14]      ; 005aa5f4
        ;   Label: LAB_005aa5f4
    ADD EAX,EAX                         ; 005aa5f8
    JC 0x005aa61c                       ; 005aa5fa
        ;   XREF to: 005aa61c (CONDITIONAL_JUMP)  ; LAB_005aa61c
    FXCH                                ; 005aa5fc
        ;   Label: LAB_005aa5fc
    FSTP ST0                            ; 005aa5fe
    FLD ST0                             ; 005aa600
    FMUL float ptr [0x00609f10]         ; 005aa602 | DAT_00609f10
    FSTP extended double ptr [ESP + 0x4] ; 005aa608
    FLD extended double ptr [ESP + 0x10] ; 005aa60c
    FXCH                                ; 005aa610
    WAIT                                ; 005aa612
    FLDCW word ptr [ESP + 0x1c]         ; 005aa613
    JMP 0x005aa514                      ; 005aa617
        ;   XREF to: 005aa514 (UNCONDITIONAL_JUMP)  ; LAB_005aa514
    FLDCW word ptr [ESP + 0x1c]         ; 005aa61c
        ;   Label: LAB_005aa61c
    FDIVP                               ; 005aa620
    RET                                 ; 005aa622

