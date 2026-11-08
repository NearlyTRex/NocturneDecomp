; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00577ee0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d71fb
;   undefined4 DAT_005d7203
;   undefined4 DAT_005d720b
;   undefined4 DAT_005d7213
;   undefined4 DAT_005d721b
;   undefined4 DAT_005d7223
;   undefined4 DAT_005d722b
;   undefined4 DAT_005d7233
;
; Called Functions:
;   FUN_00408890
;   FUN_00578490
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00577ee0
        ;   Label: FUN_00577ee0
    PUSH ESI                            ; 00577ee1
    PUSH EDI                            ; 00577ee2
    PUSH EBP                            ; 00577ee3
    MOV EBP,ESP                         ; 00577ee4
    SUB ESP,0x40                        ; 00577ee6
    AND ESP,0xfffffff8                  ; 00577ee9
    MOV EDI,dword ptr [EBP + 0x14]      ; 00577eec
    PUSH EDI                            ; 00577eef
    CALL FUN_00408890                   ; 00577ef0
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; undefined FUN_00408890()
    FLD float ptr [EDI + 0x168]         ; 00577ef5
    FMUL float ptr [EDI + 0x27c]        ; 00577efb
    ADD ESP,0x4                         ; 00577f01
    FSUBR float ptr [EDI + 0x24]        ; 00577f04
    MOV EDX,dword ptr [EDI + 0x288]     ; 00577f07
    FSTP float ptr [EDI + 0x2b234]      ; 00577f0d
    TEST EDX,EDX                        ; 00577f13
    JNZ 0x00577f9b                      ; 00577f15
        ;   XREF to: 00577f9b (CONDITIONAL_JUMP)  ; LAB_00577f9b
    FLD1                                ; 00577f1b
        ;   Label: LAB_00577f1b
    FLD float ptr [EDI + 0x160]         ; 00577f1d
    FXCH                                ; 00577f23
    FDIV float ptr [EDI + 0x284]        ; 00577f25
    FXCH                                ; 00577f2b
    FMUL ST1                            ; 00577f2d
    FLD float ptr [EDI + 0x158]         ; 00577f2f
    FMULP ST2                           ; 00577f35
    CALL FUN_005a3120                   ; 00577f37
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0xc]         ; 00577f3c
    MOV EAX,dword ptr [ESP + 0xc]       ; 00577f40
    CALL FUN_005a3120                   ; 00577f44
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    INC EAX                             ; 00577f49
    FISTP dword ptr [ESP + 0x3c]        ; 00577f4a
    MOV dword ptr [ESP + 0x14],EAX      ; 00577f4e
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00577f52
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00577f56
    MOV dword ptr [EDI + 0x7fa4],EAX    ; 00577f5a
    MOV EAX,dword ptr [ESP + 0xc]       ; 00577f60
    INC EBX                             ; 00577f64
    MOV dword ptr [EDI + 0x7fa8],EAX    ; 00577f65
    MOV EAX,dword ptr [ESP + 0x14]      ; 00577f6b
    IMUL EAX,EBX                        ; 00577f6f
    MOV dword ptr [EDI + 0x29c],EAX     ; 00577f72
    CMP EAX,0x3e8                       ; 00577f78
    JLE 0x005781d4                      ; 00577f7d
        ;   XREF to: 005781d4 (CONDITIONAL_JUMP)  ; LAB_005781d4
    FLD float ptr [EDI + 0x284]         ; 00577f83
    FLD ST0                             ; 00577f89
    FMUL double ptr [0x005d7203]        ; 00577f8b | DAT_005d7203
    FSTP ST1                            ; 00577f91
    FSTP float ptr [EDI + 0x284]        ; 00577f93
    JMP 0x00577f1b                      ; 00577f99
        ;   XREF to: 00577f1b (UNCONDITIONAL_JUMP)  ; LAB_00577f1b
    MOV dword ptr [EDI + 0x2b238],0x20  ; 00577f9b
        ;   Label: LAB_00577f9b
    MOV dword ptr [EDI + 0x29c],0x0     ; 00577fa5
    MOV ECX,dword ptr [EDI + 0x2b238]   ; 00577faf
    XOR EDX,EDX                         ; 00577fb5
    TEST ECX,ECX                        ; 00577fb7
    JLE 0x005780c7                      ; 00577fb9
        ;   XREF to: 005780c7 (CONDITIONAL_JUMP)  ; LAB_005780c7
    FLD double ptr [0x005d7233]         ; 00577fbf | DAT_005d7233
    FLD double ptr [0x005d7223]         ; 00577fc5 | DAT_005d7223
    FLD double ptr [0x005d721b]         ; 00577fcb | DAT_005d721b
    MOV dword ptr [ESP + 0x3c],EDX      ; 00577fd1
        ;   Label: LAB_00577fd1
    FILD dword ptr [EDI + 0x2b238]      ; 00577fd5
    FILD dword ptr [ESP + 0x3c]         ; 00577fdb
    FDIVRP                              ; 00577fdf
    FMUL float ptr [0x005d720b]         ; 00577fe1 | DAT_005d720b
    FMUL double ptr [0x005d7203]        ; 00577fe7 | DAT_005d7203
    FLD float ptr [EDI + 0x158]         ; 00577fed
    FLD ST1                             ; 00577ff3
    FCOS                                ; 00577ff5
    FXCH ST2                            ; 00577ff7
    FSIN                                ; 00577ff9
    FXCH ST2                            ; 00577ffb
    FMULP                               ; 00577ffd
    MOV EAX,dword ptr [EDI + 0x29c]     ; 00577fff
    FMUL double ptr [0x005d7213]        ; 00578005 | DAT_005d7213
    SHL EAX,0x5                         ; 0057800b
    FSTP float ptr [EDI + EAX*0x1 + 0x2a0] ; 0057800e
    MOV EAX,dword ptr [EDI + 0x29c]     ; 00578015
    SHL EAX,0x5                         ; 0057801b
    MOV dword ptr [EDI + EAX*0x1 + 0x2a4],0x0 ; 0057801e
    FMUL float ptr [EDI + 0x160]        ; 00578029
    MOV EAX,dword ptr [EDI + 0x29c]     ; 0057802f
    FMUL double ptr [0x005d7213]        ; 00578035 | DAT_005d7213
    SHL EAX,0x5                         ; 0057803b
    FSTP float ptr [EDI + EAX*0x1 + 0x2a8] ; 0057803e
    MOV ECX,dword ptr [EDI + 0x29c]     ; 00578045
    SHL ECX,0x5                         ; 0057804b
    FLD float ptr [ECX + EDI*0x1 + 0x2a0] ; 0057804e
    FDIV float ptr [EDI + 0x158]        ; 00578055
    FMUL ST1                            ; 0057805b
    FMUL ST2                            ; 0057805d
    FADD ST0,ST3                        ; 0057805f
    CALL FUN_005a3120                   ; 00578061
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0xc]         ; 00578066
    MOV EAX,dword ptr [ESP + 0xc]       ; 0057806a
    MOV dword ptr [ECX + EDI*0x1 + 0x2b8],EAX ; 0057806e
    MOV ECX,dword ptr [EDI + 0x29c]     ; 00578075
    SHL ECX,0x5                         ; 0057807b
    FLD float ptr [ECX + EDI*0x1 + 0x2a8] ; 0057807e
    FDIV float ptr [EDI + 0x160]        ; 00578085
    FMUL ST1                            ; 0057808b
    FMUL ST2                            ; 0057808d
    FADD ST0,ST3                        ; 0057808f
    CALL FUN_005a3120                   ; 00578091
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x3c]        ; 00578096
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0057809a
    MOV dword ptr [ECX + EDI*0x1 + 0x2bc],EAX ; 0057809e
    MOV EBX,dword ptr [EDI + 0x29c]     ; 005780a5
    INC EDX                             ; 005780ab
    INC EBX                             ; 005780ac
    MOV ESI,dword ptr [EDI + 0x2b238]   ; 005780ad
    MOV dword ptr [EDI + 0x29c],EBX     ; 005780b3
    CMP EDX,ESI                         ; 005780b9
    JL 0x00577fd1                       ; 005780bb
        ;   XREF to: 00577fd1 (CONDITIONAL_JUMP)  ; LAB_00577fd1
    FSTP ST0                            ; 005780c1
    FSTP ST0                            ; 005780c3
    FSTP ST0                            ; 005780c5
    MOV EDX,dword ptr [EDI + 0x29c]     ; 005780c7
        ;   Label: LAB_005780c7
    LEA EAX,[EDI + 0x2a0]               ; 005780cd
    SHL EDX,0x5                         ; 005780d3
    MOV dword ptr [EDX + EAX*0x1 + 0x8],0x0 ; 005780d6
    MOV ECX,dword ptr [EDX + EAX*0x1 + 0x8] ; 005780de
    MOV dword ptr [EDX + EAX*0x1 + 0x4],ECX ; 005780e2
    MOV ECX,dword ptr [EDX + EAX*0x1 + 0x4] ; 005780e6
    MOV dword ptr [EDX + EAX*0x1],ECX   ; 005780ea
    MOV EDX,dword ptr [EDI + 0x29c]     ; 005780ed
    MOV ECX,dword ptr [EDI + 0x2b238]   ; 005780f3
    XOR EAX,EAX                         ; 005780f9
    INC EDX                             ; 005780fb
    MOV dword ptr [ESP + 0x34],EAX      ; 005780fc
    MOV dword ptr [EDI + 0x29c],EDX     ; 00578100
    TEST ECX,ECX                        ; 00578106
    JLE 0x005781b0                      ; 00578108
        ;   XREF to: 005781b0 (CONDITIONAL_JUMP)  ; LAB_005781b0
    LEA ECX,[EDI + 0x7fac]              ; 0057810e
    MOV ESI,EDI                         ; 00578114
    MOV dword ptr [ECX + 0x4],0x3       ; 00578116
        ;   Label: LAB_00578116
    MOV dword ptr [ECX + 0x14],0x0      ; 0057811d
    MOV EAX,dword ptr [ECX + 0x14]      ; 00578124
    MOV dword ptr [ECX + 0x10],EAX      ; 00578127
    MOV dword ptr [ECX + 0xc],EAX       ; 0057812a
    MOV EBX,dword ptr [ESP + 0x34]      ; 0057812d
    MOV dword ptr [ECX + 0x8],EAX       ; 00578131
    INC EBX                             ; 00578134
    MOV EAX,dword ptr [EDI + 0x2b238]   ; 00578135
    MOV dword ptr [ECX + 0x1c],0x0      ; 0057813b
    MOV EDX,EBX                         ; 00578142
    MOV dword ptr [ECX + 0x20],0x0      ; 00578144
    SAR EDX,0x1f                        ; 0057814b
    MOV dword ptr [ECX + 0x18],EAX      ; 0057814e
    MOV EAX,EBX                         ; 00578151
    IDIV dword ptr [EDI + 0x2b238]      ; 00578153
    MOV EAX,dword ptr [ESP + 0x34]      ; 00578159
    MOV dword ptr [ECX + 0x24],EAX      ; 0057815d
    MOV EAX,dword ptr [ESI + 0x2b8]     ; 00578160
    MOV dword ptr [ECX + 0x28],EAX      ; 00578166
    MOV EAX,dword ptr [ESI + 0x2bc]     ; 00578169
    MOV dword ptr [ECX + 0x30],EDX      ; 0057816f
    SHL EDX,0x5                         ; 00578172
    MOV dword ptr [ECX + 0x2c],EAX      ; 00578175
    LEA EAX,[EDI + EDX*0x1]             ; 00578178
    MOV EDX,dword ptr [EAX + 0x2b8]     ; 0057817b
    MOV dword ptr [ECX + 0x34],EDX      ; 00578181
    MOV EAX,dword ptr [EAX + 0x2bc]     ; 00578184
    ADD ESI,0x20                        ; 0057818a
    MOV dword ptr [ECX + 0x38],EAX      ; 0057818d
    ADD ECX,0x48                        ; 00578190
    MOV EAX,dword ptr [EDI + 0x2b238]   ; 00578193
    MOV dword ptr [ESP + 0x34],EBX      ; 00578199
    CMP EBX,EAX                         ; 0057819d
    JL 0x00578116                       ; 0057819f
        ;   XREF to: 00578116 (CONDITIONAL_JUMP)  ; LAB_00578116
    LEA EAX,[EAX]                       ; 005781a5
    LEA EDX,[EDX]                       ; 005781ab
    MOV EBX,EBX                         ; 005781ae
    PUSH EDI                            ; 005781b0
        ;   Label: LAB_005781b0
    CALL FUN_00578490                   ; 005781b1
        ;   XREF to: 00578490 (UNCONDITIONAL_CALL)  ; undefined FUN_00578490()
    MOV dword ptr [EDI + 0x2b22c],0x0   ; 005781b6
    ADD ESP,0x4                         ; 005781c0
    MOV dword ptr [EDI + 0x2b230],0x0   ; 005781c3
    MOV ESP,EBP                         ; 005781cd
    POP EBP                             ; 005781cf
    POP EDI                             ; 005781d0
    POP ESI                             ; 005781d1
    POP EBX                             ; 005781d2
    RET                                 ; 005781d3
    LEA EAX,[EBX + -0x1]                ; 005781d4
        ;   Label: LAB_005781d4
    MOV dword ptr [ESP + 0x3c],EAX      ; 005781d7
    FILD dword ptr [ESP + 0x3c]         ; 005781db
    FDIVR float ptr [EDI + 0x158]       ; 005781df
    MOV EAX,dword ptr [ESP + 0x14]      ; 005781e5
    DEC EAX                             ; 005781e9
    MOV dword ptr [ESP + 0x3c],EAX      ; 005781ea
    FILD dword ptr [ESP + 0x3c]         ; 005781ee
    FDIVR float ptr [EDI + 0x160]       ; 005781f2
    FLD float ptr [EDI + 0x160]         ; 005781f8
    FCHS                                ; 005781fe
    FMUL double ptr [0x005d71fb]        ; 00578200 | DAT_005d71fb
    XOR EDX,EDX                         ; 00578206
    MOV ECX,dword ptr [ESP + 0x14]      ; 00578208
    MOV dword ptr [ESP + 0x38],EDX      ; 0057820c
    FSTP float ptr [ESP + 0x1c]         ; 00578210
    FXCH                                ; 00578214
    FSTP float ptr [ESP + 0x18]         ; 00578216
    FSTP float ptr [ESP + 0x10]         ; 0057821a
    TEST ECX,ECX                        ; 0057821e
    JLE 0x0057830e                      ; 00578220
        ;   XREF to: 0057830e (CONDITIONAL_JUMP)  ; LAB_0057830e
    LEA EAX,[EDI + 0x2a0]               ; 00578226
    MOV dword ptr [ESP + 0x30],EAX      ; 0057822c
    FLD float ptr [EDI + 0x158]         ; 00578230
        ;   Label: LAB_00578230
    FCHS                                ; 00578236
    FMUL double ptr [0x005d71fb]        ; 00578238 | DAT_005d71fb
    XOR ECX,ECX                         ; 0057823e
    FSTP float ptr [ESP + 0x28]         ; 00578240
    TEST EBX,EBX                        ; 00578244
    JLE 0x005782ed                      ; 00578246
        ;   XREF to: 005782ed (CONDITIONAL_JUMP)  ; LAB_005782ed
    FLD double ptr [0x005d722b]         ; 0057824c | DAT_005d722b
    MOV ESI,dword ptr [ESP + 0x30]      ; 00578252
    FLD double ptr [0x005d7223]         ; 00578256 | DAT_005d7223
    MOV EAX,EDX                         ; 0057825c
    FLD double ptr [0x005d71fb]         ; 0057825e | DAT_005d71fb
    SHL EAX,0x5                         ; 00578264
    FLD float ptr [ESP + 0x18]          ; 00578267
    ADD EAX,ESI                         ; 0057826b
    MOV ESI,dword ptr [ESP + 0x28]      ; 0057826d
        ;   Label: LAB_0057826d
    MOV dword ptr [EAX + 0x4],0x0       ; 00578271
    MOV dword ptr [EAX],ESI             ; 00578278
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0057827a
    MOV dword ptr [EAX + 0x8],ESI       ; 0057827e
    FLD float ptr [EDI + 0x158]         ; 00578281
    FLD ST0                             ; 00578287
    FMUL ST3                            ; 00578289
    FADD float ptr [EAX]                ; 0057828b
    FDIVRP                              ; 0057828d
    FMUL ST4                            ; 0057828f
    FMUL ST3                            ; 00578291
    CALL FUN_005a3120                   ; 00578293
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x3c]        ; 00578298
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0057829c
    ADD ESI,0x20000                     ; 005782a0
    MOV dword ptr [EAX + 0x18],ESI      ; 005782a6
    FLD float ptr [EAX + 0x8]           ; 005782a9
    FDIV float ptr [EDI + 0x160]        ; 005782ac
    FLD1                                ; 005782b2
    FSUBRP                              ; 005782b4
    FMUL ST4                            ; 005782b6
    FMUL ST3                            ; 005782b8
    FLD float ptr [ESP + 0x28]          ; 005782ba
    ADD EAX,0x20                        ; 005782be
    INC EDX                             ; 005782c1
    INC ECX                             ; 005782c2
    FXCH                                ; 005782c3
    CALL FUN_005a3120                   ; 005782c5
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x3c]        ; 005782ca
    MOV ESI,dword ptr [ESP + 0x3c]      ; 005782ce
    FADD ST0,ST1                        ; 005782d2
    ADD ESI,0x20000                     ; 005782d4
    FSTP float ptr [ESP + 0x28]         ; 005782da
    MOV dword ptr [EAX + -0x4],ESI      ; 005782de
    CMP ECX,EBX                         ; 005782e1
    JL 0x0057826d                       ; 005782e3
        ;   XREF to: 0057826d (CONDITIONAL_JUMP)  ; LAB_0057826d
    FSTP ST0                            ; 005782e5
    FSTP ST0                            ; 005782e7
    FSTP ST0                            ; 005782e9
    FSTP ST0                            ; 005782eb
    FLD float ptr [ESP + 0x1c]          ; 005782ed
        ;   Label: LAB_005782ed
    MOV ECX,dword ptr [ESP + 0x38]      ; 005782f1
    MOV ESI,dword ptr [ESP + 0x14]      ; 005782f5
    FADD float ptr [ESP + 0x10]         ; 005782f9
    INC ECX                             ; 005782fd
    FSTP float ptr [ESP + 0x1c]         ; 005782fe
    MOV dword ptr [ESP + 0x38],ECX      ; 00578302
    CMP ECX,ESI                         ; 00578306
    JL 0x00578230                       ; 00578308
        ;   XREF to: 00578230 (CONDITIONAL_JUMP)  ; LAB_00578230
    LEA ECX,[EDI + 0x7fac]              ; 0057830e
        ;   Label: LAB_0057830e
    XOR EAX,EAX                         ; 00578314
    MOV EDX,dword ptr [EDI + 0x7fa8]    ; 00578316
    MOV dword ptr [ESP + 0x20],EAX      ; 0057831c
    TEST EDX,EDX                        ; 00578320
    JLE 0x0057846d                      ; 00578322
        ;   XREF to: 0057846d (CONDITIONAL_JUMP)  ; LAB_0057846d
    MOV EBX,dword ptr [EDI + 0x7fa4]    ; 00578328
        ;   Label: LAB_00578328
    XOR ESI,ESI                         ; 0057832e
    TEST EBX,EBX                        ; 00578330
    JLE 0x00578456                      ; 00578332
        ;   XREF to: 00578456 (CONDITIONAL_JUMP)  ; LAB_00578456
    MOV EAX,dword ptr [ESP + 0x20]      ; 00578338
    MOV EDX,EAX                         ; 0057833c
    MOV EBX,0x4                         ; 0057833e
    SAR EDX,0x1f                        ; 00578343
    IDIV EBX                            ; 00578346
    MOV EAX,EDX                         ; 00578348
    INC EDX                             ; 0057834a
    SHL EAX,0x16                        ; 0057834b
    SHL EDX,0x16                        ; 0057834e
    MOV dword ptr [ESP + 0x24],EAX      ; 00578351
    MOV dword ptr [ESP + 0x2c],EDX      ; 00578355
    MOV dword ptr [ECX + 0x4],0x3       ; 00578359
        ;   Label: LAB_00578359
    MOV dword ptr [ECX + 0x14],0x0      ; 00578360
    MOV EAX,dword ptr [ECX + 0x14]      ; 00578367
    MOV dword ptr [ECX + 0x10],EAX      ; 0057836a
    MOV dword ptr [ECX + 0xc],EAX       ; 0057836d
    MOV dword ptr [ECX + 0x8],EAX       ; 00578370
    MOV EBX,dword ptr [EDI + 0x7fa4]    ; 00578373
    MOV EAX,dword ptr [ESP + 0x20]      ; 00578379
    INC EBX                             ; 0057837d
    IMUL EBX,EAX                        ; 0057837e
    MOV EDX,ESI                         ; 00578381
    MOV dword ptr [ESP + 0x3c],0x4      ; 00578383
    SAR EDX,0x1f                        ; 0057838b
    MOV EAX,ESI                         ; 0057838e
    IDIV dword ptr [ESP + 0x3c]         ; 00578390
    ADD EBX,ESI                         ; 00578394
    MOV dword ptr [ECX + 0x30],EBX      ; 00578396
    MOV dword ptr [ESP + 0x3c],EDX      ; 00578399
    MOV EAX,EDX                         ; 0057839d
    MOV EDX,dword ptr [ESP + 0x24]      ; 0057839f
    INC EBX                             ; 005783a3
    MOV dword ptr [ECX + 0x38],EDX      ; 005783a4
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005783a7
    MOV dword ptr [ECX + 0x24],EBX      ; 005783ab
    INC EDX                             ; 005783ae
    SHL EAX,0x16                        ; 005783af
    SHL EDX,0x16                        ; 005783b2
    MOV dword ptr [ECX + 0x34],EAX      ; 005783b5
    MOV dword ptr [ESP + 0x3c],EDX      ; 005783b8
    MOV dword ptr [ECX + 0x28],EDX      ; 005783bc
    MOV EDX,dword ptr [ESP + 0x24]      ; 005783bf
    MOV dword ptr [ECX + 0x2c],EDX      ; 005783c3
    MOV EDX,dword ptr [EDI + 0x7fa4]    ; 005783c6
    INC EDX                             ; 005783cc
    ADD EBX,EDX                         ; 005783cd
    MOV EDX,dword ptr [ESP + 0x3c]      ; 005783cf
    MOV dword ptr [ECX + 0x18],EBX      ; 005783d3
    MOV dword ptr [ECX + 0x1c],EDX      ; 005783d6
    MOV EDX,dword ptr [ESP + 0x2c]      ; 005783d9
    MOV dword ptr [ECX + 0x20],EDX      ; 005783dd
    MOV dword ptr [ECX + 0x4c],0x3      ; 005783e0
    MOV dword ptr [ECX + 0x5c],0x0      ; 005783e7
    MOV EDX,dword ptr [ECX + 0x5c]      ; 005783ee
    MOV dword ptr [ECX + 0x58],EDX      ; 005783f1
    MOV dword ptr [ECX + 0x54],EDX      ; 005783f4
    MOV dword ptr [ECX + 0x50],EDX      ; 005783f7
    MOV EDX,dword ptr [EDI + 0x7fa4]    ; 005783fa
    MOV EBX,dword ptr [ESP + 0x20]      ; 00578400
    INC EDX                             ; 00578404
    IMUL EDX,EBX                        ; 00578405
    MOV dword ptr [ECX + 0x7c],EAX      ; 00578408
    LEA EBX,[ESI + EDX*0x1]             ; 0057840b
    MOV EDX,dword ptr [ESP + 0x24]      ; 0057840e
    MOV dword ptr [ECX + 0x78],EBX      ; 00578412
    MOV dword ptr [ECX + 0x80],EDX      ; 00578415
    MOV EDX,dword ptr [EDI + 0x7fa4]    ; 0057841b
    ADD ECX,0x48                        ; 00578421
    ADD EDX,0x2                         ; 00578424
    MOV dword ptr [ECX + 0x1c],EAX      ; 00578427
    ADD EBX,EDX                         ; 0057842a
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0057842c
    MOV dword ptr [ECX + 0x24],EBX      ; 00578430
    DEC EBX                             ; 00578433
    MOV dword ptr [ECX + 0x28],EDX      ; 00578434
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00578437
    MOV dword ptr [ECX + 0x18],EBX      ; 0057843b
    MOV dword ptr [ECX + 0x2c],EDX      ; 0057843e
    MOV dword ptr [ECX + 0x20],EDX      ; 00578441
    INC ESI                             ; 00578444
    MOV EBX,dword ptr [EDI + 0x7fa4]    ; 00578445
    ADD ECX,0x48                        ; 0057844b
    CMP ESI,EBX                         ; 0057844e
    JL 0x00578359                       ; 00578450
        ;   XREF to: 00578359 (CONDITIONAL_JUMP)  ; LAB_00578359
    MOV EAX,dword ptr [ESP + 0x20]      ; 00578456
        ;   Label: LAB_00578456
    INC EAX                             ; 0057845a
    MOV EDX,dword ptr [EDI + 0x7fa8]    ; 0057845b
    MOV dword ptr [ESP + 0x20],EAX      ; 00578461
    CMP EAX,EDX                         ; 00578465
    JL 0x00578328                       ; 00578467
        ;   XREF to: 00578328 (CONDITIONAL_JUMP)  ; LAB_00578328
    MOV ECX,dword ptr [EDI + 0x7fa8]    ; 0057846d
        ;   Label: LAB_0057846d
    MOV EAX,dword ptr [EDI + 0x7fa4]    ; 00578473
    IMUL EAX,ECX                        ; 00578479
    ADD EAX,EAX                         ; 0057847c
    MOV dword ptr [EDI + 0x2b238],EAX   ; 0057847e
    JMP 0x005781b0                      ; 00578484
        ;   XREF to: 005781b0 (UNCONDITIONAL_JUMP)  ; LAB_005781b0

