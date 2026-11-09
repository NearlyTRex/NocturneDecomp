; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_keyframe_c_interpolateCubicKeyframes_FUN_004df050(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_engine_keyframe_c_005c6747
;   TerminatedCString s_Bad_keyframe_1_005c675c
;   TerminatedCString s_engine_keyframe_c_005c676b
;   TerminatedCString s_ZBP_not_found_005c6780
;   undefined4 DAT_005c6795
;   undefined4 DAT_005c679d
;   undefined4 DAT_005c67a1
;   undefined4 DAT_005c67a5
;   undefined4 DAT_005c67ad
;   undefined4 DAT_005c67b1
;   undefined4 DAT_005c67b5
;   undefined4 DAT_005c67b9
;   undefined4 DAT_01c5fad4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_math.c_round_FUN_005a3120
;   engine_3d.c_FUN_00407720
;   engine_keyframe.c_calculatePackedSurfaceNormal_FUN_004deb20
;   engine_keyframe.c_calculateSurfaceNormal_FUN_004dece0
;   engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004dee60
;   engine_model.c_FUN_004f8730
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df050
        ;   Label: engine_keyframe.c_interpolateCubicKeyframes_FUN_004df050
    PUSH ESI                            ; 004df051
    PUSH EDI                            ; 004df052
    PUSH EBP                            ; 004df053
    MOV EBP,ESP                         ; 004df054
    SUB ESP,0x30                        ; 004df056
    AND ESP,0xfffffff8                  ; 004df059
    MOV EAX,dword ptr [EBP + 0x14]      ; 004df05c
    CMP dword ptr [EAX + 0x14],0x0      ; 004df05f
    JZ 0x004df3e8                       ; 004df063
        ;   XREF to: 004df3e8 (CONDITIONAL_JUMP)  ; LAB_004df3e8
    MOV ESI,dword ptr [EBP + 0x14]      ; 004df069
        ;   Label: LAB_004df069
    MOV EDX,dword ptr [EBP + 0x14]      ; 004df06c
    MOV ESI,dword ptr [ESI + 0x8]       ; 004df06f
    MOV EBX,dword ptr [EDX + 0xc]       ; 004df072
    IMUL ESI,EBX                        ; 004df075
    MOV EAX,dword ptr [EDX + 0x10]      ; 004df078
    CDQ                                 ; 004df07b
    MOV ECX,EDX                         ; 004df07c
    XOR EAX,EDX                         ; 004df07e
    XOR EDX,EDX                         ; 004df080
    DIV EBX                             ; 004df082
    CMP EAX,0x7fff                      ; 004df084
    JC 0x004df090                       ; 004df089
        ;   XREF to: 004df090 (CONDITIONAL_JUMP)  ; LAB_004df090
    MOV EAX,0x7fff                      ; 004df08b
    PUSH EAX                            ; 004df090
        ;   Label: LAB_004df090
    XOR EAX,EAX                         ; 004df091
    DIV EBX                             ; 004df093
    POP EDX                             ; 004df095
    SHRD EAX,EDX,0x10                   ; 004df096
    XOR EAX,ECX                         ; 004df09a
    MOV EDX,dword ptr [0x01c5fad4]      ; 004df09c | DAT_01c5fad4
    MOV ECX,EAX                         ; 004df0a2
    MOV EAX,EDX                         ; 004df0a4
    SAR EDX,0x1f                        ; 004df0a6
    IDIV ESI                            ; 004df0a9
    MOV EBX,ECX                         ; 004df0ab
    SAR EBX,0x10                        ; 004df0ad
    AND ECX,0xffff                      ; 004df0b0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004df0b6
    MOV dword ptr [ESP],ECX             ; 004df0b9
    LEA ESI,[EBX + 0x1]                 ; 004df0bc
    MOV EDI,dword ptr [EAX + 0x8]       ; 004df0bf
    MOV dword ptr [EAX + 0x10],EDX      ; 004df0c2
    CMP ESI,EDI                         ; 004df0c5
    JL 0x004df0cb                       ; 004df0c7
        ;   XREF to: 004df0cb (CONDITIONAL_JUMP)  ; LAB_004df0cb
    XOR ESI,ESI                         ; 004df0c9
    MOV EDX,dword ptr [EBP + 0x14]      ; 004df0cb
        ;   Label: LAB_004df0cb
    LEA EAX,[ESI + 0x1]                 ; 004df0ce
    MOV ECX,dword ptr [EDX + 0x8]       ; 004df0d1
    MOV dword ptr [ESP + 0x24],EAX      ; 004df0d4
    CMP EAX,ECX                         ; 004df0d8
    JL 0x004df0e2                       ; 004df0da
        ;   XREF to: 004df0e2 (CONDITIONAL_JUMP)  ; LAB_004df0e2
    XOR EDI,EDI                         ; 004df0dc
    MOV dword ptr [ESP + 0x24],EDI      ; 004df0de
    LEA EDI,[EBX + -0x1]                ; 004df0e2
        ;   Label: LAB_004df0e2
    TEST EDI,EDI                        ; 004df0e5
    JL 0x004df3f6                       ; 004df0e7
        ;   XREF to: 004df3f6 (CONDITIONAL_JUMP)  ; LAB_004df3f6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004df0ed
        ;   Label: LAB_004df0ed
    MOV EAX,dword ptr [EAX + 0x14]      ; 004df0f0
    ADD EAX,0x8                         ; 004df0f3
    MOV EDX,dword ptr [EAX]             ; 004df0f6
    MOV dword ptr [ESP + 0x10],EAX      ; 004df0f8
    CMP EDX,0x2                         ; 004df0fc
    JZ 0x004df123                       ; 004df0ff
        ;   XREF to: 004df123 (CONDITIONAL_JUMP)  ; LAB_004df123
    MOV ECX,0x5c6747                    ; 004df101 | = "..\\engine\\keyframe.c"
    MOV EAX,0x16b                       ; 004df106
    PUSH 0x5c675c                       ; 004df10b | = "Bad keyframe 1"
    MOV dword ptr [0x01d71de0],ECX      ; 004df110 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004df116 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004df11b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004df120
    MOV EDX,dword ptr [EBP + 0x14]      ; 004df123
        ;   Label: LAB_004df123
    MOV EAX,EDX                         ; 004df126
    MOV EAX,dword ptr [EAX + ESI*0x4 + 0x118] ; 004df128
    ADD EAX,0x14                        ; 004df12f
    MOV dword ptr [ESP + 0x28],EAX      ; 004df132
    MOV EAX,dword ptr [ESP + 0x24]      ; 004df136
    SHL EAX,0x2                         ; 004df13a
    ADD EAX,EDX                         ; 004df13d
    MOV ESI,dword ptr [EAX + 0x118]     ; 004df13f
    LEA EAX,[EDI*0x4 + 0x0]             ; 004df145
    ADD EAX,EDX                         ; 004df14c
    MOV EDI,dword ptr [EAX + 0x118]     ; 004df14e
    MOV EAX,dword ptr [ESP]             ; 004df154
    MOV dword ptr [ESP + 0x2c],EAX      ; 004df157
    FILD dword ptr [ESP + 0x2c]         ; 004df15b
    FMUL double ptr [0x005c6795]        ; 004df15f | DAT_005c6795
    FLD ST0                             ; 004df165
    FMUL ST1                            ; 004df167
    FLD ST0                             ; 004df169
    FMUL ST2                            ; 004df16b
    FLD ST1                             ; 004df16d
    FMUL float ptr [0x005c67b5]         ; 004df16f | DAT_005c67b5
    FLD ST1                             ; 004df175
    FMUL float ptr [0x005c679d]         ; 004df177 | DAT_005c679d
    FLD ST2                             ; 004df17d
    FMUL float ptr [0x005c67ad]         ; 004df17f | DAT_005c67ad
    FLD ST3                             ; 004df185
    FXCH ST2                            ; 004df187
    FADD ST0,ST5                        ; 004df189
    FXCH ST2                            ; 004df18b
    FMUL float ptr [0x005c67b9]         ; 004df18d | DAT_005c67b9
    FXCH ST6                            ; 004df193
    FMUL float ptr [0x005c67a1]         ; 004df195 | DAT_005c67a1
    FXCH ST4                            ; 004df19b
    FMUL float ptr [0x005c67a1]         ; 004df19d | DAT_005c67a1
    FXCH ST4                            ; 004df1a3
    FSTP float ptr [ESP + 0x2c]         ; 004df1a5
    FXCH                                ; 004df1a9
    FSUB float ptr [ESP + 0x2c]         ; 004df1ab
    FLD ST4                             ; 004df1af
    FMUL float ptr [0x005c67a1]         ; 004df1b1 | DAT_005c67a1
    FXCH                                ; 004df1b7
    FMUL double ptr [0x005c67a5]        ; 004df1b9 | DAT_005c67a5
    FXCH                                ; 004df1bf
    FSUBP ST4,ST0                       ; 004df1c1
    FXCH ST4                            ; 004df1c3
    FMUL float ptr [0x005c67b1]         ; 004df1c5 | DAT_005c67b1
    FXCH ST3                            ; 004df1cb
    FMUL double ptr [0x005c67a5]        ; 004df1cd | DAT_005c67a5
    FXCH ST3                            ; 004df1d3
    FADDP                               ; 004df1d5
    FXCH ST4                            ; 004df1d7
    FADDP                               ; 004df1d9
    FLD1                                ; 004df1db
    FADDP ST4,ST0                       ; 004df1dd
    FADD float ptr [ESP + 0x2c]         ; 004df1df
    FXCH ST3                            ; 004df1e3
    FMUL double ptr [0x005c67a5]        ; 004df1e5 | DAT_005c67a5
    FXCH ST3                            ; 004df1eb
    FMUL double ptr [0x005c67a5]        ; 004df1ed | DAT_005c67a5
    SHL EBX,0x2                         ; 004df1f3
    MOV ECX,dword ptr [EDX + 0x14]      ; 004df1f6
    ADD EBX,EDX                         ; 004df1f9
    ADD ECX,0x14                        ; 004df1fb
    MOV EBX,dword ptr [EBX + 0x118]     ; 004df1fe
    XOR EAX,EAX                         ; 004df204
    ADD EBX,0x14                        ; 004df206
    MOV dword ptr [ESP + 0x24],EAX      ; 004df209
    MOV EAX,dword ptr [ESP + 0x10]      ; 004df20d
    ADD ESI,0x14                        ; 004df211
    ADD EDI,0x14                        ; 004df214
    MOV EDX,dword ptr [EAX + 0x8]       ; 004df217
    FXCH                                ; 004df21a
    CALL crt_math.c_round_FUN_005a3120  ; 004df21c
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x1c]        ; 004df221
    FXCH                                ; 004df225
    CALL crt_math.c_round_FUN_005a3120  ; 004df227
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST2                            ; 004df22c
    CALL crt_math.c_round_FUN_005a3120  ; 004df22e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 004df233
    CALL crt_math.c_round_FUN_005a3120  ; 004df235
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST2                            ; 004df23a
    FISTP dword ptr [ESP + 0x18]        ; 004df23c
    FISTP dword ptr [ESP + 0x14]        ; 004df240
    FISTP dword ptr [ESP + 0x20]        ; 004df244
    TEST EDX,EDX                        ; 004df248
    JLE 0x004df387                      ; 004df24a
        ;   XREF to: 004df387 (CONDITIONAL_JUMP)  ; LAB_004df387
    MOV EAX,dword ptr [ESP + 0x18]      ; 004df250
        ;   Label: LAB_004df250
    MOV EDX,dword ptr [EDI]             ; 004df254
    IMUL EDX                            ; 004df256
    SHRD EAX,EDX,0x10                   ; 004df258
    MOV dword ptr [ESP + 0x2c],EAX      ; 004df25c
    MOV EDX,dword ptr [EBX]             ; 004df260
    MOV EAX,dword ptr [ESP + 0x14]      ; 004df262
    IMUL EDX                            ; 004df266
    SHRD EAX,EDX,0x10                   ; 004df268
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004df26c
    ADD EDX,EAX                         ; 004df270
    MOV dword ptr [ESP + 0x2c],EDX      ; 004df272
    MOV EDX,dword ptr [ESP + 0x28]      ; 004df276
    MOV EAX,dword ptr [ESP + 0x20]      ; 004df27a
    MOV EDX,dword ptr [EDX]             ; 004df27e
    IMUL EDX                            ; 004df280
    SHRD EAX,EDX,0x10                   ; 004df282
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004df286
    ADD EDX,EAX                         ; 004df28a
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004df28c
    MOV dword ptr [ESP + 0x2c],EDX      ; 004df290
    MOV EDX,dword ptr [ESI]             ; 004df294
    IMUL EDX                            ; 004df296
    SHRD EAX,EDX,0x10                   ; 004df298
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004df29c
    ADD EDX,EAX                         ; 004df2a0
    MOV dword ptr [ECX],EDX             ; 004df2a2
    MOV EAX,dword ptr [ESP + 0x18]      ; 004df2a4
    MOV EDX,dword ptr [EDI + 0x4]       ; 004df2a8
    IMUL EDX                            ; 004df2ab
    SHRD EAX,EDX,0x10                   ; 004df2ad
    MOV dword ptr [ESP + 0x2c],EAX      ; 004df2b1
    MOV EDX,dword ptr [EBX + 0x4]       ; 004df2b5
    MOV EAX,dword ptr [ESP + 0x14]      ; 004df2b8
    IMUL EDX                            ; 004df2bc
    SHRD EAX,EDX,0x10                   ; 004df2be
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004df2c2
    ADD EDX,EAX                         ; 004df2c6
    MOV dword ptr [ESP + 0x2c],EDX      ; 004df2c8
    MOV EDX,dword ptr [ESP + 0x28]      ; 004df2cc
    MOV EAX,dword ptr [ESP + 0x20]      ; 004df2d0
    MOV EDX,dword ptr [EDX + 0x4]       ; 004df2d4
    IMUL EDX                            ; 004df2d7
    SHRD EAX,EDX,0x10                   ; 004df2d9
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004df2dd
    ADD EDX,EAX                         ; 004df2e1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004df2e3
    MOV dword ptr [ESP + 0x2c],EDX      ; 004df2e7
    MOV EDX,dword ptr [ESI + 0x4]       ; 004df2eb
    IMUL EDX                            ; 004df2ee
    SHRD EAX,EDX,0x10                   ; 004df2f0
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004df2f4
    ADD EDX,EAX                         ; 004df2f8
    MOV dword ptr [ECX + 0x4],EDX       ; 004df2fa
    MOV EAX,dword ptr [ESP + 0x18]      ; 004df2fd
    MOV EDX,dword ptr [EDI + 0x8]       ; 004df301
    IMUL EDX                            ; 004df304
    SHRD EAX,EDX,0x10                   ; 004df306
    MOV dword ptr [ESP + 0x2c],EAX      ; 004df30a
    MOV EDX,dword ptr [EBX + 0x8]       ; 004df30e
    MOV EAX,dword ptr [ESP + 0x14]      ; 004df311
    IMUL EDX                            ; 004df315
    SHRD EAX,EDX,0x10                   ; 004df317
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004df31b
    ADD EDX,EAX                         ; 004df31f
    MOV dword ptr [ESP + 0x2c],EDX      ; 004df321
    MOV EDX,dword ptr [ESP + 0x28]      ; 004df325
    MOV EAX,dword ptr [ESP + 0x20]      ; 004df329
    MOV EDX,dword ptr [EDX + 0x8]       ; 004df32d
    ADD EDI,0xc                         ; 004df330
    IMUL EDX                            ; 004df333
    SHRD EAX,EDX,0x10                   ; 004df335
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004df339
    ADD EBX,0xc                         ; 004df33d
    ADD EDX,EAX                         ; 004df340
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004df342
    MOV dword ptr [ESP + 0x2c],EDX      ; 004df346
    MOV EDX,dword ptr [ESI + 0x8]       ; 004df34a
    ADD ESI,0xc                         ; 004df34d
    IMUL EDX                            ; 004df350
    SHRD EAX,EDX,0x10                   ; 004df352
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004df356
    ADD ECX,0xc                         ; 004df35a
    ADD EDX,EAX                         ; 004df35d
    MOV EAX,dword ptr [ESP + 0x24]      ; 004df35f
    MOV dword ptr [ECX + -0x4],EDX      ; 004df363
    MOV EDX,dword ptr [ESP + 0x28]      ; 004df366
    INC EAX                             ; 004df36a
    ADD EDX,0xc                         ; 004df36b
    MOV dword ptr [ESP + 0x24],EAX      ; 004df36e
    MOV dword ptr [ESP + 0x28],EDX      ; 004df372
    MOV EDX,dword ptr [ESP + 0x10]      ; 004df376
    MOV EAX,dword ptr [ESP + 0x24]      ; 004df37a
    CMP EAX,dword ptr [EDX + 0x8]       ; 004df37e
    JL 0x004df250                       ; 004df381
        ;   XREF to: 004df250 (CONDITIONAL_JUMP)  ; LAB_004df250
    MOV ESI,dword ptr [ECX]             ; 004df387
        ;   Label: LAB_004df387
    MOV EBX,ECX                         ; 004df389
    CMP ESI,0x17                        ; 004df38b
    JNZ 0x004df402                      ; 004df38e
        ;   XREF to: 004df402 (CONDITIONAL_JUMP)  ; LAB_004df402
    MOV ESI,dword ptr [EBP + 0x14]      ; 004df390
        ;   Label: LAB_004df390
    MOV ESI,dword ptr [ESI + 0x14]      ; 004df393
    ADD EBX,0xc                         ; 004df396
    ADD ESI,0x14                        ; 004df399
    MOV ECX,dword ptr [EBX]             ; 004df39c
        ;   Label: LAB_004df39c
    CMP ECX,0x18                        ; 004df39e
    JC 0x004df3b3                       ; 004df3a1
        ;   XREF to: 004df3b3 (CONDITIONAL_JUMP)  ; LAB_004df3b3
    JA 0x004df435                       ; 004df3a3
        ;   XREF to: 004df435 (CONDITIONAL_JUMP)  ; LAB_004df435
    PUSH EBX                            ; 004df3a9
    PUSH ESI                            ; 004df3aa
    CALL engine_keyframe.c_calculateSurfaceNormal_FUN_004dece0 ; 004df3ab
        ;   XREF to: 004dece0 (UNCONDITIONAL_CALL)  ; undefined engine_keyframe.c_calculateSurfaceNormal_FUN_004dece0()
    ADD ESP,0x8                         ; 004df3b0
        ;   Label: LAB_004df3b0
    PUSH EBX                            ; 004df3b3
        ;   Label: LAB_004df3b3
    CALL engine_model.c_FUN_004f8730    ; 004df3b4
        ;   XREF to: 004f8730 (UNCONDITIONAL_CALL)  ; int engine_model.c_FUN_004f8730(SMRGLHeaderExtended * header)
    SHR EAX,0x2                         ; 004df3b9
    SHL EAX,0x2                         ; 004df3bc
    ADD EBX,EAX                         ; 004df3bf
    MOV EDX,dword ptr [EBX]             ; 004df3c1
    ADD ESP,0x4                         ; 004df3c3
    TEST EDX,EDX                        ; 004df3c6
    JNZ 0x004df39c                      ; 004df3c8
        ;   XREF to: 004df39c (CONDITIONAL_JUMP)  ; LAB_004df39c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004df3ca
    MOV ECX,dword ptr [EAX + 0x14]      ; 004df3cd
    PUSH ECX                            ; 004df3d0
    CALL engine_3d.c_FUN_00407720       ; 004df3d1
        ;   XREF to: 00407720 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_FUN_00407720()
    ADD ESP,0x4                         ; 004df3d6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004df3d9
    ADD EAX,0x158                       ; 004df3dc
    MOV ESP,EBP                         ; 004df3e1
    POP EBP                             ; 004df3e3
    POP EDI                             ; 004df3e4
    POP ESI                             ; 004df3e5
    POP EBX                             ; 004df3e6
    RET                                 ; 004df3e7
    PUSH EAX                            ; 004df3e8
        ;   Label: LAB_004df3e8
    CALL engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004dee60 ; 004df3e9
        ;   XREF to: 004dee60 (UNCONDITIONAL_CALL)  ; undefined engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004dee60()
    ADD ESP,0x4                         ; 004df3ee
    JMP 0x004df069                      ; 004df3f1
        ;   XREF to: 004df069 (UNCONDITIONAL_JUMP)  ; LAB_004df069
    MOV EDI,dword ptr [EBP + 0x14]      ; 004df3f6
        ;   Label: LAB_004df3f6
    MOV EDI,dword ptr [EDI + 0x8]       ; 004df3f9
    DEC EDI                             ; 004df3fc
    JMP 0x004df0ed                      ; 004df3fd
        ;   XREF to: 004df0ed (UNCONDITIONAL_JUMP)  ; LAB_004df0ed
    MOV EDI,0x5c676b                    ; 004df402 | = "..\\engine\\keyframe.c"
        ;   Label: LAB_004df402
    MOV EAX,0x1a6                       ; 004df407
    PUSH 0x5c6780                       ; 004df40c | = "ZBP not found!"
    MOV dword ptr [0x01d71de0],EDI      ; 004df411 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004df417 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004df41c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004df421
    JMP 0x004df390                      ; 004df424
        ;   XREF to: 004df390 (UNCONDITIONAL_JUMP)  ; LAB_004df390
    PUSH EBX                            ; 004df429
        ;   Label: LAB_004df429
    PUSH ESI                            ; 004df42a
    CALL engine_keyframe.c_calculatePackedSurfaceNormal_FUN_004deb20 ; 004df42b
        ;   XREF to: 004deb20 (UNCONDITIONAL_CALL)  ; undefined engine_keyframe.c_calculatePackedSurfaceNormal_FUN_004deb20()
    JMP 0x004df3b0                      ; 004df430
        ;   XREF to: 004df3b0 (UNCONDITIONAL_JUMP)  ; LAB_004df3b0
    CMP ECX,0x19                        ; 004df435
        ;   Label: LAB_004df435
    JZ 0x004df429                       ; 004df438
        ;   XREF to: 004df429 (CONDITIONAL_JUMP)  ; LAB_004df429
    JMP 0x004df3b3                      ; 004df43a
        ;   XREF to: 004df3b3 (UNCONDITIONAL_JUMP)  ; LAB_004df3b3

