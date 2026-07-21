; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_skeleton_cpp_distancePointToLineSegment_FUN_005171b0(float *param_1,float *param_2,float *param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005171b0
        ;   Label: core_skeleton.cpp_distancePointToLineSegment_FUN_005171b0
    PUSH EBP                            ; 005171b1
    MOV EBP,ESP                         ; 005171b2
    SUB ESP,0x78                        ; 005171b4
    AND ESP,0xfffffff8                  ; 005171b7
    MOV ECX,dword ptr [EBP + 0xc]       ; 005171ba
    MOV EBX,dword ptr [EBP + 0x10]      ; 005171bd
    MOV EDX,dword ptr [EBP + 0x14]      ; 005171c0
    FLD float ptr [EBX]                 ; 005171c3
    FSUB float ptr [ECX]                ; 005171c5
    FSTP float ptr [ESP + 0x10]         ; 005171c7
    FLD float ptr [EBX + 0x4]           ; 005171cb
    FSUB float ptr [ECX + 0x4]          ; 005171ce
    FST float ptr [ESP + 0x14]          ; 005171d1
    FMUL float ptr [ESP + 0x14]         ; 005171d5
    FLD float ptr [ESP + 0x10]          ; 005171d9
    FMUL ST0                            ; 005171dd
    FLD float ptr [EBX + 0x8]           ; 005171df
    FSUB float ptr [ECX + 0x8]          ; 005171e2
    FXCH                                ; 005171e5
    FADDP ST2,ST0                       ; 005171e7
    FST float ptr [ESP + 0x18]          ; 005171e9
    FMUL float ptr [ESP + 0x18]         ; 005171ed
    FADDP                               ; 005171f1
    FSQRT                               ; 005171f3
    FLDZ                                ; 005171f5
    FXCH                                ; 005171f7
    FSTP double ptr [ESP + 0x8]         ; 005171f9
    FCOMP double ptr [ESP + 0x8]        ; 005171fd
    FNSTSW AX                           ; 00517201
    SAHF                                ; 00517203
    JNC 0x005172b8                      ; 00517204
        ;   XREF to: 005172b8 (CONDITIONAL_JUMP)  ; LAB_005172b8
    FLD double ptr [ESP + 0x8]          ; 0051720a
    FLD1                                ; 0051720e
    FLD float ptr [ESP + 0x10]          ; 00517210
    FXCH ST2                            ; 00517214
    FSTP float ptr [ESP + 0x5c]         ; 00517216
    FDIV float ptr [ESP + 0x5c]         ; 0051721a
    FXCH                                ; 0051721e
    FMUL ST1                            ; 00517220
    FLD float ptr [ESP + 0x14]          ; 00517222
    FMUL ST2                            ; 00517226
    FLD float ptr [ESP + 0x18]          ; 00517228
    FMULP ST3                           ; 0051722c
    FXCH                                ; 0051722e
    FSTP float ptr [ESP + 0x10]         ; 00517230
    FSTP float ptr [ESP + 0x14]         ; 00517234
    FSTP float ptr [ESP + 0x18]         ; 00517238
    FLD float ptr [ECX + 0x4]           ; 0051723c
    FMUL float ptr [ESP + 0x14]         ; 0051723f
    FLD float ptr [EDX + 0x4]           ; 00517243
    FMUL float ptr [ESP + 0x14]         ; 00517246
    FLD float ptr [ECX]                 ; 0051724a
    FMUL float ptr [ESP + 0x10]         ; 0051724c
    FLD float ptr [EDX]                 ; 00517250
    FMUL float ptr [ESP + 0x10]         ; 00517252
    FXCH                                ; 00517256
    FADDP ST3,ST0                       ; 00517258
    FADDP                               ; 0051725a
    FLD float ptr [ECX + 0x8]           ; 0051725c
    FMUL float ptr [ESP + 0x18]         ; 0051725f
    FLD float ptr [EDX + 0x8]           ; 00517263
    FMUL float ptr [ESP + 0x18]         ; 00517266
    FXCH                                ; 0051726a
    FADDP ST3,ST0                       ; 0051726c
    FADDP                               ; 0051726e
    FSUBRP                              ; 00517270
    FLDZ                                ; 00517272
    FXCH                                ; 00517274
    FSTP double ptr [ESP]               ; 00517276
    FCOMP double ptr [ESP]              ; 00517279
    FNSTSW AX                           ; 0051727c
    SAHF                                ; 0051727e
    JNC 0x005172b8                      ; 0051727f
        ;   XREF to: 005172b8 (CONDITIONAL_JUMP)  ; LAB_005172b8
    FLD double ptr [ESP]                ; 00517281
    FCOMP double ptr [ESP + 0x8]        ; 00517284
    FNSTSW AX                           ; 00517288
    SAHF                                ; 0051728a
    JC 0x005172d2                       ; 0051728b
        ;   XREF to: 005172d2 (CONDITIONAL_JUMP)  ; LAB_005172d2
    FLD float ptr [EDX]                 ; 0051728d
    FSUB float ptr [EBX]                ; 0051728f
    FMUL ST0                            ; 00517291
    FLD float ptr [EDX + 0x4]           ; 00517293
    FSUB float ptr [EBX + 0x4]          ; 00517296
    FMUL ST0                            ; 00517299
    FLD float ptr [EDX + 0x8]           ; 0051729b
    FXCH                                ; 0051729e
    FADDP ST2,ST0                       ; 005172a0
    FSUB float ptr [EBX + 0x8]          ; 005172a2
    FMUL ST0                            ; 005172a5
        ;   Label: LAB_005172a5
    FADDP                               ; 005172a7
    FSQRT                               ; 005172a9
    FSTP float ptr [ESP + 0x6c]         ; 005172ab
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005172af
    MOV ESP,EBP                         ; 005172b3
    POP EBP                             ; 005172b5
    POP EBX                             ; 005172b6
    RET                                 ; 005172b7
    FLD float ptr [EDX]                 ; 005172b8
        ;   Label: LAB_005172b8
    FSUB float ptr [ECX]                ; 005172ba
    FMUL ST0                            ; 005172bc
    FLD float ptr [EDX + 0x4]           ; 005172be
    FSUB float ptr [ECX + 0x4]          ; 005172c1
    FMUL ST0                            ; 005172c4
    FLD float ptr [EDX + 0x8]           ; 005172c6
    FXCH                                ; 005172c9
    FADDP ST2,ST0                       ; 005172cb
    FSUB float ptr [ECX + 0x8]          ; 005172cd
    JMP 0x005172a5                      ; 005172d0
        ;   XREF to: 005172a5 (UNCONDITIONAL_JUMP)  ; LAB_005172a5
    FLD float ptr [ESP + 0x10]          ; 005172d2
        ;   Label: LAB_005172d2
    FLD double ptr [ESP]                ; 005172d6
    FSTP float ptr [ESP + 0x74]         ; 005172d9
    FMUL float ptr [ESP + 0x74]         ; 005172dd
    FLD float ptr [ESP + 0x14]          ; 005172e1
    FMUL float ptr [ESP + 0x74]         ; 005172e5
    FLD float ptr [ESP + 0x18]          ; 005172e9
    FMUL float ptr [ESP + 0x74]         ; 005172ed
    FXCH ST2                            ; 005172f1
    FSTP float ptr [ESP + 0x1c]         ; 005172f3
    FSTP float ptr [ESP + 0x20]         ; 005172f7
    FSTP float ptr [ESP + 0x24]         ; 005172fb
    FLD float ptr [ECX]                 ; 005172ff
    FADD float ptr [ESP + 0x1c]         ; 00517301
    FSTP float ptr [ESP + 0x28]         ; 00517305
    FLD float ptr [ECX + 0x4]           ; 00517309
    FADD float ptr [ESP + 0x20]         ; 0051730c
    FSTP float ptr [ESP + 0x2c]         ; 00517310
    FLD float ptr [ECX + 0x8]           ; 00517314
    FADD float ptr [ESP + 0x24]         ; 00517317
    FSTP float ptr [ESP + 0x30]         ; 0051731b
    FLD float ptr [EDX]                 ; 0051731f
    FSUB float ptr [ESP + 0x28]         ; 00517321
    FMUL ST0                            ; 00517325
    FLD float ptr [EDX + 0x4]           ; 00517327
    FSUB float ptr [ESP + 0x2c]         ; 0051732a
    FMUL ST0                            ; 0051732e
    FLD float ptr [EDX + 0x8]           ; 00517330
    FXCH                                ; 00517333
    FADDP ST2,ST0                       ; 00517335
    FSUB float ptr [ESP + 0x30]         ; 00517337
    FMUL ST0                            ; 0051733b
    FADDP                               ; 0051733d
    FSQRT                               ; 0051733f
    FSTP float ptr [ESP + 0x6c]         ; 00517341
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00517345
    MOV ESP,EBP                         ; 00517349
    POP EBP                             ; 0051734b
    POP EBX                             ; 0051734c
    RET                                 ; 0051734d

