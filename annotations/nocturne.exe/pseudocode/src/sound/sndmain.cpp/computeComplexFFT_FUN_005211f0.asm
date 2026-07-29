; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_computeComplexFFT_FUN_005211f0(float *input_real,float *input_imag,float *output_real,float *output_imag,int size)
;
; Parameters:
; float *          Stack[0x4]:4   input_real
; float *          Stack[0x8]:4   input_imag
; float *          Stack[0xc]:4   output_real
; float *          Stack[0x10]:4   output_imag
; int              Stack[0x14]:4   size
; Local Variables:
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined8       Stack[-0x98]:8  local_98
; undefined8       Stack[-0x90]:8  local_90
; undefined8       Stack[-0x88]:8  local_88
; undefined8       Stack[-0x80]:8  local_80
; undefined4       Stack[-0x78]:4  local_78
; undefined8       Stack[-0x74]:8  local_74
; undefined8       Stack[-0x6c]:8  local_6c
; undefined8       Stack[-0x64]:8  local_64
; undefined8       Stack[-0x5c]:8  local_5c
; undefined8       Stack[-0x54]:8  local_54
; undefined8       Stack[-0x4c]:8  local_4c
; undefined8       Stack[-0x34]:8  local_34
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   undefined4 DAT_0059210e
;   undefined4 DAT_00592116
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005211f0
        ;   Label: sound_sndmain.cpp_computeComplexFFT_FUN_005211f0
    PUSH ESI                            ; 005211f1
    PUSH EDI                            ; 005211f2
    PUSH EBP                            ; 005211f3
    MOV EBP,ESP                         ; 005211f4
    SUB ESP,0x8c                        ; 005211f6
    AND ESP,0xfffffff8                  ; 005211fc
    MOV dword ptr [ESP + 0x80],0x1      ; 005211ff
    MOV CL,byte ptr [ESP + 0x80]        ; 0052120a
        ;   Label: LAB_0052120a
    MOV EAX,0x1                         ; 00521211
    SHL EAX,CL                          ; 00521216
    MOV ECX,dword ptr [EBP + 0x24]      ; 00521218
    CMP EAX,ECX                         ; 0052121b
    JL 0x005214bb                       ; 0052121d
        ;   XREF to: 005214bb (CONDITIONAL_JUMP)  ; LAB_005214bb
    XOR ESI,ESI                         ; 00521223
    TEST ECX,ECX                        ; 00521225
    JLE 0x00521283                      ; 00521227
        ;   XREF to: 00521283 (CONDITIONAL_JUMP)  ; LAB_00521283
    MOV EDI,dword ptr [EBP + 0x14]      ; 00521229
    MOV EBX,dword ptr [ESP + 0x80]      ; 0052122c
        ;   Label: LAB_0052122c
    MOV EDX,ESI                         ; 00521233
    XOR ECX,ECX                         ; 00521235
    XOR EAX,EAX                         ; 00521237
    TEST EBX,EBX                        ; 00521239
    JLE 0x00521254                      ; 0052123b
        ;   XREF to: 00521254 (CONDITIONAL_JUMP)  ; LAB_00521254
    MOV EBX,EDX                         ; 0052123d
        ;   Label: LAB_0052123d
    ADD EAX,EAX                         ; 0052123f
    AND EBX,0x1                         ; 00521241
    INC ECX                             ; 00521244
    OR EAX,EBX                          ; 00521245
    MOV EBX,dword ptr [ESP + 0x80]      ; 00521247
    SAR EDX,0x1                         ; 0052124e
    CMP ECX,EBX                         ; 00521250
    JL 0x0052123d                       ; 00521252
        ;   XREF to: 0052123d (CONDITIONAL_JUMP)  ; LAB_0052123d
    FLD float ptr [EDI]                 ; 00521254
        ;   Label: LAB_00521254
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00521256
    SHL EAX,0x2                         ; 00521259
    MOV EBX,dword ptr [EBP + 0x18]      ; 0052125c
    FSTP float ptr [EDX + EAX*0x1]      ; 0052125f
    MOV EDX,dword ptr [EBP + 0x20]      ; 00521262
    LEA ECX,[ESI*0x4 + 0x0]             ; 00521265
    ADD EAX,EDX                         ; 0052126c
    TEST EBX,EBX                        ; 0052126e
    JNZ 0x005214c7                      ; 00521270
        ;   XREF to: 005214c7 (CONDITIONAL_JUMP)  ; LAB_005214c7
    MOV dword ptr [EAX],EBX             ; 00521276
        ;   Label: LAB_00521276
    MOV EAX,dword ptr [EBP + 0x24]      ; 00521278
    INC ESI                             ; 0052127b
    ADD EDI,0x4                         ; 0052127c
    CMP ESI,EAX                         ; 0052127f
    JL 0x0052122c                       ; 00521281
        ;   XREF to: 0052122c (CONDITIONAL_JUMP)  ; LAB_0052122c
    MOV EDX,0x2                         ; 00521283
        ;   Label: LAB_00521283
    MOV ECX,dword ptr [EBP + 0x24]      ; 00521288
    MOV dword ptr [ESP + 0x7c],EDX      ; 0052128b
    CMP ECX,EDX                         ; 0052128f
    JL 0x005214b4                       ; 00521291
        ;   XREF to: 005214b4 (CONDITIONAL_JUMP)  ; LAB_005214b4
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00521297
        ;   Label: LAB_00521297
    MOV EDX,EAX                         ; 0052129b
    SAR EDX,0x1f                        ; 0052129d
    SUB EAX,EDX                         ; 005212a0
    SAR EAX,0x1                         ; 005212a2
    MOV dword ptr [ESP + 0x88],EAX      ; 005212a4
    MOV dword ptr [ESP + 0x28],EAX      ; 005212ab
    FILD dword ptr [ESP + 0x88]         ; 005212af
    FDIVR double ptr [0x00592116]       ; 005212b6 | DAT_00592116
    FLD ST0                             ; 005212bc
    FSINCOS                             ; 005212be
    FXCH ST2                            ; 005212c0
    FLD double ptr [0x0059210e]         ; 005212c2 | DAT_0059210e
    FXCH                                ; 005212c8
    FMUL ST1                            ; 005212ca
    FLD ST0                             ; 005212cc
    FSIN                                ; 005212ce
    FXCH                                ; 005212d0
    FCOS                                ; 005212d2
    FXCH ST4                            ; 005212d4
    FSTP double ptr [ESP + 0x6c]        ; 005212d6
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005212da
    MOV dword ptr [ESP + 0x8],EAX       ; 005212de
    MOV EAX,dword ptr [ESP + 0x70]      ; 005212e2
    MOV dword ptr [ESP + 0xc],EAX       ; 005212e6
    FLD double ptr [ESP + 0x8]          ; 005212ea
    FMULP ST2                           ; 005212ee
    MOV EDX,dword ptr [EBP + 0x24]      ; 005212f0
    FXCH ST3                            ; 005212f3
    FSTP double ptr [ESP + 0x6c]        ; 005212f5
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005212f9
    FXCH                                ; 005212fd
    FSTP double ptr [ESP + 0x18]        ; 005212ff
    MOV dword ptr [ESP],EAX             ; 00521303
    MOV EAX,dword ptr [ESP + 0x70]      ; 00521306
    FXCH                                ; 0052130a
    FSTP double ptr [ESP + 0x10]        ; 0052130c
    MOV dword ptr [ESP + 0x4],EAX       ; 00521310
    XOR EAX,EAX                         ; 00521314
    FSTP double ptr [ESP + 0x20]        ; 00521316
    MOV dword ptr [ESP + 0x84],EAX      ; 0052131a
    TEST EDX,EDX                        ; 00521321
    JLE 0x0052149f                      ; 00521323
        ;   XREF to: 0052149f (CONDITIONAL_JUMP)  ; LAB_0052149f
    MOV EAX,dword ptr [ESP + 0x8]       ; 00521329
        ;   Label: LAB_00521329
    MOV dword ptr [ESP + 0x4c],EAX      ; 0052132d
    MOV EAX,dword ptr [ESP + 0xc]       ; 00521331
    MOV dword ptr [ESP + 0x50],EAX      ; 00521335
    MOV EAX,dword ptr [ESP]             ; 00521339
    MOV dword ptr [ESP + 0x54],EAX      ; 0052133c
    MOV EAX,dword ptr [ESP + 0x4]       ; 00521340
    MOV dword ptr [ESP + 0x58],EAX      ; 00521344
    MOV EAX,dword ptr [ESP + 0x18]      ; 00521348
    MOV dword ptr [ESP + 0x34],EAX      ; 0052134c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00521350
    MOV dword ptr [ESP + 0x38],EAX      ; 00521354
    MOV EAX,dword ptr [ESP + 0x10]      ; 00521358
    MOV EDI,dword ptr [ESP + 0x28]      ; 0052135c
    MOV dword ptr [ESP + 0x3c],EAX      ; 00521360
    MOV EAX,dword ptr [ESP + 0x14]      ; 00521364
    XOR ESI,ESI                         ; 00521368
    MOV dword ptr [ESP + 0x40],EAX      ; 0052136a
    TEST EDI,EDI                        ; 0052136e
    JLE 0x00521480                      ; 00521370
        ;   XREF to: 00521480 (CONDITIONAL_JUMP)  ; LAB_00521480
    FLD double ptr [ESP + 0x20]         ; 00521376
    MOV EBX,dword ptr [ESP + 0x84]      ; 0052137a
    MOV EDX,dword ptr [EBP + 0x20]      ; 00521381
    LEA ECX,[EDI*0x4 + 0x0]             ; 00521384
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0052138b
    MOV dword ptr [ESP + 0x88],ECX      ; 0052138e
    MOV ECX,dword ptr [EBP + 0x20]      ; 00521395
    MOV EDI,dword ptr [ESP + 0x88]      ; 00521398
    SHL EBX,0x2                         ; 0052139f
    ADD ECX,EDI                         ; 005213a2
    MOV EDI,dword ptr [EBP + 0x1c]      ; 005213a4
    ADD EDX,EBX                         ; 005213a7
    ADD EDI,dword ptr [ESP + 0x88]      ; 005213a9
    ADD EAX,EBX                         ; 005213b0
    ADD EDI,EBX                         ; 005213b2
    ADD ECX,EBX                         ; 005213b4
    MOV EBX,EDI                         ; 005213b6
    FLD ST0                             ; 005213b8
        ;   Label: LAB_005213b8
    FMUL double ptr [ESP + 0x4c]        ; 005213ba
    FLD ST1                             ; 005213be
    FMUL double ptr [ESP + 0x34]        ; 005213c0
    FXCH                                ; 005213c4
    FSUB double ptr [ESP + 0x54]        ; 005213c6
    FLD float ptr [EBX]                 ; 005213ca
    FXCH                                ; 005213cc
    FST double ptr [ESP + 0x44]         ; 005213ce
    FMUL ST1                            ; 005213d2
    FXCH ST2                            ; 005213d4
    FSUB double ptr [ESP + 0x3c]        ; 005213d6
    FLD float ptr [ECX]                 ; 005213da
    FLD double ptr [ESP + 0x44]         ; 005213dc
    FMUL ST1                            ; 005213e0
    FXCH ST2                            ; 005213e2
    FST double ptr [ESP + 0x2c]         ; 005213e4
    FMULP                               ; 005213e8
    FLD double ptr [ESP + 0x2c]         ; 005213ea
    FMULP ST3                           ; 005213ee
    FLD float ptr [EAX]                 ; 005213f0
    MOV EDI,dword ptr [ESP + 0x4c]      ; 005213f2
    ADD EDX,0x4                         ; 005213f6
    ADD EAX,0x4                         ; 005213f9
    MOV dword ptr [ESP + 0x54],EDI      ; 005213fc
    MOV EDI,dword ptr [ESP + 0x50]      ; 00521400
    ADD ECX,0x4                         ; 00521404
    MOV dword ptr [ESP + 0x58],EDI      ; 00521407
    MOV EDI,dword ptr [ESP + 0x44]      ; 0052140b
    ADD EBX,0x4                         ; 0052140f
    MOV dword ptr [ESP + 0x4c],EDI      ; 00521412
    MOV EDI,dword ptr [ESP + 0x48]      ; 00521416
    INC ESI                             ; 0052141a
    MOV dword ptr [ESP + 0x50],EDI      ; 0052141b
    FXCH                                ; 0052141f
    FSUBP ST4,ST0                       ; 00521421
    MOV EDI,dword ptr [ESP + 0x34]      ; 00521423
    FXCH ST2                            ; 00521427
    FADDP                               ; 00521429
    FXCH                                ; 0052142b
    FSUB ST0,ST2                        ; 0052142d
    MOV dword ptr [ESP + 0x3c],EDI      ; 0052142f
    FSTP float ptr [EBX + -0x4]         ; 00521433
    MOV EDI,dword ptr [ESP + 0x38]      ; 00521436
    FLD float ptr [EDX + -0x4]          ; 0052143a
    MOV dword ptr [ESP + 0x40],EDI      ; 0052143d
    FSUB ST0,ST1                        ; 00521441
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00521443
    FSTP float ptr [ECX + -0x4]         ; 00521447
    FLD float ptr [EAX + -0x4]          ; 0052144a
    MOV dword ptr [ESP + 0x34],EDI      ; 0052144d
    FLD ST0                             ; 00521451
    MOV EDI,dword ptr [ESP + 0x30]      ; 00521453
    FADDP ST3,ST0                       ; 00521457
    MOV dword ptr [ESP + 0x38],EDI      ; 00521459
    FXCH ST2                            ; 0052145d
    FSTP ST2                            ; 0052145f
    FXCH                                ; 00521461
    FSTP float ptr [EAX + -0x4]         ; 00521463
    FLD float ptr [EDX + -0x4]          ; 00521466
    FADD ST1,ST0                        ; 00521469
    MOV EDI,dword ptr [ESP + 0x28]      ; 0052146b
    FXCH                                ; 0052146f
    FSTP ST1                            ; 00521471
    FSTP float ptr [EDX + -0x4]         ; 00521473
    CMP ESI,EDI                         ; 00521476
    JL 0x005213b8                       ; 00521478
        ;   XREF to: 005213b8 (CONDITIONAL_JUMP)  ; LAB_005213b8
    FSTP ST0                            ; 0052147e
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00521480
        ;   Label: LAB_00521480
    MOV ECX,dword ptr [ESP + 0x84]      ; 00521484
    ADD ECX,EAX                         ; 0052148b
    MOV EBX,dword ptr [EBP + 0x24]      ; 0052148d
    MOV dword ptr [ESP + 0x84],ECX      ; 00521490
    CMP ECX,EBX                         ; 00521497
    JL 0x00521329                       ; 00521499
        ;   XREF to: 00521329 (CONDITIONAL_JUMP)  ; LAB_00521329
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0052149f
        ;   Label: LAB_0052149f
    ADD ESI,ESI                         ; 005214a3
    MOV EDI,dword ptr [EBP + 0x24]      ; 005214a5
    MOV dword ptr [ESP + 0x7c],ESI      ; 005214a8
    CMP ESI,EDI                         ; 005214ac
    JLE 0x00521297                      ; 005214ae
        ;   XREF to: 00521297 (CONDITIONAL_JUMP)  ; LAB_00521297
    MOV ESP,EBP                         ; 005214b4
        ;   Label: LAB_005214b4
    POP EBP                             ; 005214b6
    POP EDI                             ; 005214b7
    POP ESI                             ; 005214b8
    POP EBX                             ; 005214b9
    RET                                 ; 005214ba
    INC dword ptr [ESP + 0x80]          ; 005214bb
        ;   Label: LAB_005214bb
    JMP 0x0052120a                      ; 005214c2
        ;   XREF to: 0052120a (UNCONDITIONAL_JUMP)  ; LAB_0052120a
    MOV EDX,EBX                         ; 005214c7
        ;   Label: LAB_005214c7
    MOV EBX,dword ptr [ECX + EDX*0x1]   ; 005214c9
    JMP 0x00521276                      ; 005214cc
        ;   XREF to: 00521276 (UNCONDITIONAL_JUMP)  ; LAB_00521276

