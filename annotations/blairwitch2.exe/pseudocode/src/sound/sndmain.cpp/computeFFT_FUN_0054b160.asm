; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_computeFFT_FUN_0054b160(float *input,int size,float *output_real,float *output_imag)
;
; Parameters:
; float *          Stack[0x4]:4   input
; int              Stack[0x8]:4   size
; float *          Stack[0xc]:4   output_real
; float *          Stack[0x10]:4   output_imag
;
; Referenced Globals:
;   undefined4 DAT_005e787e
;   undefined4 DAT_005e7886
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054b160
        ;   Label: sound_sndmain.cpp_computeFFT_FUN_0054b160
    PUSH ESI                            ; 0054b161
    PUSH EDI                            ; 0054b162
    PUSH EBP                            ; 0054b163
    MOV EBP,ESP                         ; 0054b164
    SUB ESP,0x9c                        ; 0054b166
    AND ESP,0xfffffff8                  ; 0054b16c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0054b16f
    MOV ECX,0x1                         ; 0054b172
    MOV EDI,dword ptr [EBP + 0x14]      ; 0054b177
    MOV dword ptr [ESP + 0x88],EAX      ; 0054b17a
    MOV EAX,dword ptr [EBP + 0x20]      ; 0054b181
    XOR EDX,EDX                         ; 0054b184
    MOV dword ptr [ESP + 0x8c],EAX      ; 0054b186
    MOV EAX,dword ptr [EBP + 0x18]      ; 0054b18d
    MOV dword ptr [ESP + 0x78],EDX      ; 0054b190
    MOV dword ptr [ESP + 0x84],EAX      ; 0054b194
    MOV dword ptr [ESP + 0x7c],ECX      ; 0054b19b
    MOV EBX,dword ptr [ESP + 0x84]      ; 0054b19f
    MOV CL,byte ptr [ESP + 0x7c]        ; 0054b1a6
        ;   Label: LAB_0054b1a6
    MOV EAX,0x1                         ; 0054b1aa
    SHL EAX,CL                          ; 0054b1af
    CMP EAX,EBX                         ; 0054b1b1
    JL 0x0054b487                       ; 0054b1b3
        ;   XREF to: 0054b487 (CONDITIONAL_JUMP)  ; LAB_0054b487
    XOR ESI,ESI                         ; 0054b1b9
    TEST EBX,EBX                        ; 0054b1bb
    JLE 0x0054b21d                      ; 0054b1bd
        ;   XREF to: 0054b21d (CONDITIONAL_JUMP)  ; LAB_0054b21d
    MOV EBX,dword ptr [ESP + 0x7c]      ; 0054b1bf
        ;   Label: LAB_0054b1bf
    MOV ECX,ESI                         ; 0054b1c3
    XOR EDX,EDX                         ; 0054b1c5
    XOR EAX,EAX                         ; 0054b1c7
    TEST EBX,EBX                        ; 0054b1c9
    JLE 0x0054b1e1                      ; 0054b1cb
        ;   XREF to: 0054b1e1 (CONDITIONAL_JUMP)  ; LAB_0054b1e1
    MOV EBX,ECX                         ; 0054b1cd
        ;   Label: LAB_0054b1cd
    ADD EAX,EAX                         ; 0054b1cf
    AND EBX,0x1                         ; 0054b1d1
    INC EDX                             ; 0054b1d4
    OR EAX,EBX                          ; 0054b1d5
    MOV EBX,dword ptr [ESP + 0x7c]      ; 0054b1d7
    SAR ECX,0x1                         ; 0054b1db
    CMP EDX,EBX                         ; 0054b1dd
    JL 0x0054b1cd                       ; 0054b1df
        ;   XREF to: 0054b1cd (CONDITIONAL_JUMP)  ; LAB_0054b1cd
    FLD float ptr [EDI]                 ; 0054b1e1
        ;   Label: LAB_0054b1e1
    MOV EDX,dword ptr [ESP + 0x88]      ; 0054b1e3
    SHL EAX,0x2                         ; 0054b1ea
    MOV EBX,dword ptr [ESP + 0x78]      ; 0054b1ed
    FSTP float ptr [EDX + EAX*0x1]      ; 0054b1f1
    MOV EDX,dword ptr [ESP + 0x8c]      ; 0054b1f4
    LEA ECX,[ESI*0x4 + 0x0]             ; 0054b1fb
    ADD EAX,EDX                         ; 0054b202
    TEST EBX,EBX                        ; 0054b204
    JNZ 0x0054b490                      ; 0054b206
        ;   XREF to: 0054b490 (CONDITIONAL_JUMP)  ; LAB_0054b490
    MOV dword ptr [EAX],EBX             ; 0054b20c
    MOV ECX,dword ptr [ESP + 0x84]      ; 0054b20e
        ;   Label: LAB_0054b20e
    INC ESI                             ; 0054b215
    ADD EDI,0x4                         ; 0054b216
    CMP ESI,ECX                         ; 0054b219
    JL 0x0054b1bf                       ; 0054b21b
        ;   XREF to: 0054b1bf (CONDITIONAL_JUMP)  ; LAB_0054b1bf
    MOV EBX,0x2                         ; 0054b21d
        ;   Label: LAB_0054b21d
    MOV ESI,dword ptr [ESP + 0x84]      ; 0054b222
    MOV dword ptr [ESP + 0x80],EBX      ; 0054b229
    CMP ESI,EBX                         ; 0054b230
    JL 0x0054b480                       ; 0054b232
        ;   XREF to: 0054b480 (CONDITIONAL_JUMP)  ; LAB_0054b480
    MOV EAX,dword ptr [ESP + 0x80]      ; 0054b238
        ;   Label: LAB_0054b238
    MOV EDX,EAX                         ; 0054b23f
    SAR EDX,0x1f                        ; 0054b241
    SUB EAX,EDX                         ; 0054b244
    SAR EAX,0x1                         ; 0054b246
    MOV dword ptr [ESP + 0x98],EAX      ; 0054b248
    MOV dword ptr [ESP + 0x94],EAX      ; 0054b24f
    FILD dword ptr [ESP + 0x98]         ; 0054b256
    FDIVR float ptr [0x005e7886]        ; 0054b25d | DAT_005e7886
    FLD ST0                             ; 0054b263
    FSINCOS                             ; 0054b265
    FXCH ST2                            ; 0054b267
    FLD double ptr [0x005e787e]         ; 0054b269 | DAT_005e787e
    FXCH                                ; 0054b26f
    FMUL ST1                            ; 0054b271
    FLD ST0                             ; 0054b273
    FSIN                                ; 0054b275
    FXCH                                ; 0054b277
    FCOS                                ; 0054b279
    FXCH ST4                            ; 0054b27b
    FSTP double ptr [ESP + 0x70]        ; 0054b27d
    MOV EAX,dword ptr [ESP + 0x70]      ; 0054b281
    MOV dword ptr [ESP + 0x20],EAX      ; 0054b285
    MOV EAX,dword ptr [ESP + 0x74]      ; 0054b289
    MOV dword ptr [ESP + 0x24],EAX      ; 0054b28d
    FLD double ptr [ESP + 0x20]         ; 0054b291
    FMULP ST2                           ; 0054b295
    XOR ESI,ESI                         ; 0054b297
    MOV EDI,dword ptr [ESP + 0x84]      ; 0054b299
    MOV dword ptr [ESP + 0x90],ESI      ; 0054b2a0
    FXCH ST2                            ; 0054b2a7
    FSTP double ptr [ESP]               ; 0054b2a9
    FXCH ST2                            ; 0054b2ac
    FSTP double ptr [ESP + 0x70]        ; 0054b2ae
    MOV EAX,dword ptr [ESP + 0x70]      ; 0054b2b2
    FSTP double ptr [ESP + 0x10]        ; 0054b2b6
    MOV dword ptr [ESP + 0x18],EAX      ; 0054b2ba
    MOV EAX,dword ptr [ESP + 0x74]      ; 0054b2be
    FSTP double ptr [ESP + 0x8]         ; 0054b2c2
    MOV dword ptr [ESP + 0x1c],EAX      ; 0054b2c6
    TEST EDI,EDI                        ; 0054b2ca
    JLE 0x0054b461                      ; 0054b2cc
        ;   XREF to: 0054b461 (CONDITIONAL_JUMP)  ; LAB_0054b461
    MOV EAX,dword ptr [ESP + 0x20]      ; 0054b2d2
        ;   Label: LAB_0054b2d2
    MOV dword ptr [ESP + 0x30],EAX      ; 0054b2d6
    MOV EAX,dword ptr [ESP + 0x24]      ; 0054b2da
    MOV dword ptr [ESP + 0x34],EAX      ; 0054b2de
    MOV EAX,dword ptr [ESP + 0x18]      ; 0054b2e2
    MOV dword ptr [ESP + 0x38],EAX      ; 0054b2e6
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0054b2ea
    MOV dword ptr [ESP + 0x3c],EAX      ; 0054b2ee
    MOV EAX,dword ptr [ESP]             ; 0054b2f2
    MOV dword ptr [ESP + 0x48],EAX      ; 0054b2f5
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054b2f9
    MOV dword ptr [ESP + 0x4c],EAX      ; 0054b2fd
    MOV EAX,dword ptr [ESP + 0x10]      ; 0054b301
    MOV EBX,dword ptr [ESP + 0x94]      ; 0054b305
    MOV dword ptr [ESP + 0x50],EAX      ; 0054b30c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0054b310
    XOR ESI,ESI                         ; 0054b314
    MOV dword ptr [ESP + 0x54],EAX      ; 0054b316
    TEST EBX,EBX                        ; 0054b31a
    JLE 0x0054b43b                      ; 0054b31c
        ;   XREF to: 0054b43b (CONDITIONAL_JUMP)  ; LAB_0054b43b
    FLD double ptr [ESP + 0x8]          ; 0054b322
    MOV ECX,dword ptr [ESP + 0x90]      ; 0054b326
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0054b32d
    SHL EBX,0x2                         ; 0054b334
    MOV EDX,dword ptr [ESP + 0x88]      ; 0054b337
    MOV dword ptr [ESP + 0x98],EBX      ; 0054b33e
    MOV EBX,dword ptr [ESP + 0x8c]      ; 0054b345
    MOV EDI,dword ptr [ESP + 0x98]      ; 0054b34c
    SHL ECX,0x2                         ; 0054b353
    ADD EBX,EDI                         ; 0054b356
    MOV EDI,dword ptr [ESP + 0x88]      ; 0054b358
    ADD EAX,ECX                         ; 0054b35f
    ADD EDI,dword ptr [ESP + 0x98]      ; 0054b361
    ADD EDX,ECX                         ; 0054b368
    ADD EDI,ECX                         ; 0054b36a
    ADD EBX,ECX                         ; 0054b36c
    MOV ECX,EDI                         ; 0054b36e
    FLD ST0                             ; 0054b370
        ;   Label: LAB_0054b370
    FMUL double ptr [ESP + 0x30]        ; 0054b372
    FLD ST1                             ; 0054b376
    FMUL double ptr [ESP + 0x48]        ; 0054b378
    FXCH                                ; 0054b37c
    FSUB double ptr [ESP + 0x38]        ; 0054b37e
    FLD float ptr [ECX]                 ; 0054b382
    FXCH                                ; 0054b384
    FST double ptr [ESP + 0x28]         ; 0054b386
    FMUL ST1                            ; 0054b38a
    FXCH ST2                            ; 0054b38c
    FSUB double ptr [ESP + 0x50]        ; 0054b38e
    FLD float ptr [EBX]                 ; 0054b392
    FLD double ptr [ESP + 0x28]         ; 0054b394
    FMUL ST1                            ; 0054b398
    FXCH ST2                            ; 0054b39a
    FST double ptr [ESP + 0x40]         ; 0054b39c
    FMULP                               ; 0054b3a0
    FLD double ptr [ESP + 0x40]         ; 0054b3a2
    FMULP ST3                           ; 0054b3a6
    FLD float ptr [EDX]                 ; 0054b3a8
    MOV EDI,dword ptr [ESP + 0x30]      ; 0054b3aa
    ADD EAX,0x4                         ; 0054b3ae
    ADD EDX,0x4                         ; 0054b3b1
    MOV dword ptr [ESP + 0x38],EDI      ; 0054b3b4
    MOV EDI,dword ptr [ESP + 0x34]      ; 0054b3b8
    ADD EBX,0x4                         ; 0054b3bc
    MOV dword ptr [ESP + 0x3c],EDI      ; 0054b3bf
    MOV EDI,dword ptr [ESP + 0x28]      ; 0054b3c3
    ADD ECX,0x4                         ; 0054b3c7
    MOV dword ptr [ESP + 0x30],EDI      ; 0054b3ca
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0054b3ce
    INC ESI                             ; 0054b3d2
    MOV dword ptr [ESP + 0x34],EDI      ; 0054b3d3
    FXCH                                ; 0054b3d7
    FSUBP ST4,ST0                       ; 0054b3d9
    MOV EDI,dword ptr [ESP + 0x48]      ; 0054b3db
    FXCH ST2                            ; 0054b3df
    FADDP                               ; 0054b3e1
    FXCH                                ; 0054b3e3
    FSUB ST0,ST2                        ; 0054b3e5
    MOV dword ptr [ESP + 0x50],EDI      ; 0054b3e7
    FSTP float ptr [ECX + -0x4]         ; 0054b3eb
    MOV EDI,dword ptr [ESP + 0x4c]      ; 0054b3ee
    FLD float ptr [EAX + -0x4]          ; 0054b3f2
    MOV dword ptr [ESP + 0x54],EDI      ; 0054b3f5
    FSUB ST0,ST1                        ; 0054b3f9
    MOV EDI,dword ptr [ESP + 0x40]      ; 0054b3fb
    FSTP float ptr [EBX + -0x4]         ; 0054b3ff
    FLD float ptr [EDX + -0x4]          ; 0054b402
    MOV dword ptr [ESP + 0x48],EDI      ; 0054b405
    FLD ST0                             ; 0054b409
    MOV EDI,dword ptr [ESP + 0x44]      ; 0054b40b
    FADDP ST3,ST0                       ; 0054b40f
    MOV dword ptr [ESP + 0x4c],EDI      ; 0054b411
    FXCH ST2                            ; 0054b415
    FSTP ST2                            ; 0054b417
    FXCH                                ; 0054b419
    FSTP float ptr [EDX + -0x4]         ; 0054b41b
    FLD float ptr [EAX + -0x4]          ; 0054b41e
    FADD ST1,ST0                        ; 0054b421
    MOV EDI,dword ptr [ESP + 0x94]      ; 0054b423
    FXCH                                ; 0054b42a
    FSTP ST1                            ; 0054b42c
    FSTP float ptr [EAX + -0x4]         ; 0054b42e
    CMP ESI,EDI                         ; 0054b431
    JL 0x0054b370                       ; 0054b433
        ;   XREF to: 0054b370 (CONDITIONAL_JUMP)  ; LAB_0054b370
    FSTP ST0                            ; 0054b439
    MOV EAX,dword ptr [ESP + 0x80]      ; 0054b43b
        ;   Label: LAB_0054b43b
    MOV EDX,dword ptr [ESP + 0x90]      ; 0054b442
    ADD EDX,EAX                         ; 0054b449
    MOV ECX,dword ptr [ESP + 0x84]      ; 0054b44b
    MOV dword ptr [ESP + 0x90],EDX      ; 0054b452
    CMP EDX,ECX                         ; 0054b459
    JL 0x0054b2d2                       ; 0054b45b
        ;   XREF to: 0054b2d2 (CONDITIONAL_JUMP)  ; LAB_0054b2d2
    MOV ECX,dword ptr [ESP + 0x80]      ; 0054b461
        ;   Label: LAB_0054b461
    ADD ECX,ECX                         ; 0054b468
    MOV EBX,dword ptr [ESP + 0x84]      ; 0054b46a
    MOV dword ptr [ESP + 0x80],ECX      ; 0054b471
    CMP ECX,EBX                         ; 0054b478
    JLE 0x0054b238                      ; 0054b47a
        ;   XREF to: 0054b238 (CONDITIONAL_JUMP)  ; LAB_0054b238
    MOV ESP,EBP                         ; 0054b480
        ;   Label: LAB_0054b480
    POP EBP                             ; 0054b482
    POP EDI                             ; 0054b483
    POP ESI                             ; 0054b484
    POP EBX                             ; 0054b485
    RET                                 ; 0054b486
    INC dword ptr [ESP + 0x7c]          ; 0054b487
        ;   Label: LAB_0054b487
    JMP 0x0054b1a6                      ; 0054b48b
        ;   XREF to: 0054b1a6 (UNCONDITIONAL_JUMP)  ; LAB_0054b1a6
    ADD ECX,EBX                         ; 0054b490
        ;   Label: LAB_0054b490
    MOV EDX,dword ptr [ECX]             ; 0054b492
    MOV dword ptr [EAX],EDX             ; 0054b494
    JMP 0x0054b20e                      ; 0054b496
        ;   XREF to: 0054b20e (UNCONDITIONAL_JUMP)  ; LAB_0054b20e

