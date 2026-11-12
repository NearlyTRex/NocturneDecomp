; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dlight_cpp_FUN_0044c15e(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005cf4d7
;   undefined4 DAT_005cf4df
;   undefined4 DAT_005cf4e3
;   undefined4 DAT_005cf4e7
;   undefined4 DAT_005cf4ef
;   undefined4 DAT_005cf4f7
;   undefined4 DAT_005cf4ff
;   undefined4 DAT_005cf507
;   undefined4 DAT_005f5050
;   undefined4 DAT_0060b280
;
; Called Functions:
;   core_dirmat.cpp_FUN_004496e0
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_drender.cpp_pop_FUN_0046b4a0
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0044c15e
        ;   Label: core_dlight.cpp_FUN_0044c15e
    PUSH EBX                            ; 0044c160
    PUSH ESI                            ; 0044c161
    PUSH EDI                            ; 0044c162
    PUSH EBP                            ; 0044c163
    MOV EBP,ESP                         ; 0044c164
    SUB ESP,0xdc                        ; 0044c166
    AND ESP,0xfffffff8                  ; 0044c16c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044c16f
    CMP dword ptr [EAX + 0x1cbc],0x0    ; 0044c172
    JNZ 0x0044c182                      ; 0044c179
        ;   XREF to: 0044c182 (CONDITIONAL_JUMP)  ; LAB_0044c182
    MOV ESP,EBP                         ; 0044c17b
    POP EBP                             ; 0044c17d
    POP EDI                             ; 0044c17e
    POP ESI                             ; 0044c17f
    POP EBX                             ; 0044c180
    RET                                 ; 0044c181
    ADD EAX,0x4                         ; 0044c182
        ;   Label: LAB_0044c182
    PUSH EAX                            ; 0044c185
    MOV ECX,dword ptr [0x0060b280]      ; 0044c186 | DAT_0060b280
    PUSH ECX                            ; 0044c18c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 0044c18d
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0044c192
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044c195
    ADD EAX,0x10                        ; 0044c198
    PUSH EAX                            ; 0044c19b
    LEA ESI,[ESP + 0x40]                ; 0044c19c
    CALL core_dirmat.cpp_FUN_004496e0   ; 0044c1a0
        ;   XREF to: 004496e0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004496e0()
    ADD ESP,0x4                         ; 0044c1a5
    PUSH 0x0                            ; 0044c1a8
    LEA EAX,[ESP + 0x4c]                ; 0044c1aa
    LEA EDI,[ESP + 0x4c]                ; 0044c1ae
    PUSH EAX                            ; 0044c1b2
    MOV EBX,dword ptr [0x0060b280]      ; 0044c1b3 | DAT_0060b280
    LEA ESI,[ESP + 0x44]                ; 0044c1b9
    PUSH EBX                            ; 0044c1bd
    MOVSD ES:EDI,ESI                    ; 0044c1be
    MOVSD ES:EDI,ESI                    ; 0044c1bf
    MOVSD ES:EDI,ESI                    ; 0044c1c0
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0044c1c1
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0044c1c6
    PUSH 0x60afc8                       ; 0044c1c9
    MOV ESI,dword ptr [0x0060b280]      ; 0044c1ce | DAT_0060b280
    PUSH ESI                            ; 0044c1d4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 0044c1d5
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0044c1da
    PUSH 0x1                            ; 0044c1dd
    MOV EDI,dword ptr [0x0060b280]      ; 0044c1df | DAT_0060b280
    PUSH EDI                            ; 0044c1e5
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0044c1e6
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    MOV EAX,0x1                         ; 0044c1eb
    ADD ESP,0x8                         ; 0044c1f0
    MOV dword ptr [ESP + 0x4],EAX       ; 0044c1f3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044c1f7
        ;   Label: LAB_0044c1f7
    FLD float ptr [EAX + 0x38]          ; 0044c1fa
    FDIVR double ptr [0x005cf507]       ; 0044c1fd | DAT_005cf507
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044c203
    MOV dword ptr [ESP + 0xd4],EAX      ; 0044c207
    FILD dword ptr [ESP + 0xd4]         ; 0044c20e
    FMULP                               ; 0044c215
    FMUL double ptr [0x005cf4d7]        ; 0044c217 | DAT_005cf4d7
    FST float ptr [ESP]                 ; 0044c21d
    FLD1                                ; 0044c220
    FPATAN                              ; 0044c222
    FCOS                                ; 0044c224
    XOR EDI,EDI                         ; 0044c226
    FSTP float ptr [ESP + 0xa8]         ; 0044c228
    MOV dword ptr [ESP + 0xd4],EDI      ; 0044c22f
        ;   Label: LAB_0044c22f
    FLD float ptr [0x005cf4df]          ; 0044c236 | DAT_005cf4df
    FILD dword ptr [ESP + 0xd4]         ; 0044c23c
    FMUL ST1                            ; 0044c243
    FLD float ptr [0x005cf4e3]          ; 0044c245 | DAT_005cf4e3
    FXCH                                ; 0044c24b
    FMUL ST1                            ; 0044c24d
    LEA EAX,[EDI + 0x1]                 ; 0044c24f
    FLD double ptr [0x005cf4e7]         ; 0044c252 | DAT_005cf4e7
    FXCH                                ; 0044c258
    FMUL ST1                            ; 0044c25a
    MOV dword ptr [ESP + 0xd4],EAX      ; 0044c25c
    FLD ST0                             ; 0044c263
    FSIN                                ; 0044c265
    FILD dword ptr [ESP + 0xd4]         ; 0044c267
    FMULP ST5                           ; 0044c26e
    FXCH ST4                            ; 0044c270
    FMULP ST3                           ; 0044c272
    FXCH ST2                            ; 0044c274
    FMULP                               ; 0044c276
    FLD ST0                             ; 0044c278
    FSIN                                ; 0044c27a
    FXCH ST2                            ; 0044c27c
    FCOS                                ; 0044c27e
    FXCH                                ; 0044c280
    FCOS                                ; 0044c282
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044c284
    MOV EDX,dword ptr [EDX + 0x1cc0]    ; 0044c287
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044c28d
    SAR EDX,0x1f                        ; 0044c290
    MOV EAX,dword ptr [EAX + 0x1cc0]    ; 0044c293
    SUB EAX,EDX                         ; 0044c299
    SAR EAX,0x1                         ; 0044c29b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044c29d
    MOV dword ptr [ESP + 0xd4],EAX      ; 0044c2a0
    MOV EDX,dword ptr [EDX + 0x1cc4]    ; 0044c2a7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044c2ad
    SAR EDX,0x1f                        ; 0044c2b0
    MOV EAX,dword ptr [EAX + 0x1cc4]    ; 0044c2b3
    SUB EAX,EDX                         ; 0044c2b9
    SAR EAX,0x1                         ; 0044c2bb
    FLD float ptr [ESP]                 ; 0044c2bd
    FXCH ST2                            ; 0044c2c0
    FMUL ST2                            ; 0044c2c2
    MOV dword ptr [ESP + 0xd8],EAX      ; 0044c2c4
    FSTP float ptr [ESP + 0xb8]         ; 0044c2cb
    FILD dword ptr [ESP + 0xd8]         ; 0044c2d2
    FLD ST0                             ; 0044c2d9
    FMUL float ptr [ESP + 0xb8]         ; 0044c2db
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044c2e2
    FSUBP                               ; 0044c2e5
    MOV ECX,dword ptr [EDX + 0x1cc0]    ; 0044c2e7
    CALL crt_math.c_round_FUN_005b7ff0  ; 0044c2ed
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x9c]        ; 0044c2f2
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0044c2f9
    IMUL EAX,ECX                        ; 0044c300
    FXCH ST3                            ; 0044c303
    FMUL ST1                            ; 0044c305
    FSTP float ptr [ESP + 0xb4]         ; 0044c307
    FILD dword ptr [ESP + 0xd4]         ; 0044c30e
    FLD ST0                             ; 0044c315
    FMUL float ptr [ESP + 0xb4]         ; 0044c317
    FXCH ST3                            ; 0044c31e
    FMUL ST2                            ; 0044c320
    FXCH ST3                            ; 0044c322
    FADDP                               ; 0044c324
    FXCH ST3                            ; 0044c326
    FMULP                               ; 0044c328
    FXCH ST2                            ; 0044c32a
    CALL crt_math.c_round_FUN_005b7ff0  ; 0044c32c
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0xa0]        ; 0044c331
    ADD EAX,dword ptr [ESP + 0xa0]      ; 0044c338
    MOV EDX,dword ptr [EDX + 0x2f94]    ; 0044c33f
    ADD EAX,EAX                         ; 0044c345
    ADD EDX,EAX                         ; 0044c347
    XOR EAX,EAX                         ; 0044c349
    MOV AX,word ptr [EDX]               ; 0044c34b
    MOV dword ptr [ESP + 0xd8],EAX      ; 0044c34e
    FILD dword ptr [ESP + 0xd8]         ; 0044c355
    FMUL double ptr [0x005cf4ef]        ; 0044c35c | DAT_005cf4ef
    XOR ESI,ESI                         ; 0044c362
    FXCH                                ; 0044c364
    FSTP float ptr [ESP + 0xac]         ; 0044c366
    FSTP float ptr [ESP + 0xc8]         ; 0044c36d
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0044c374
    FSTP float ptr [ESP + 0xb0]         ; 0044c37b
    MOV dword ptr [ESP + 0xc4],EAX      ; 0044c382
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044c389
        ;   Label: LAB_0044c389
    MOV EAX,dword ptr [EAX + 0x140]     ; 0044c38c
    FLD float ptr [ESP + 0xa8]          ; 0044c392
    MOV dword ptr [ESP + 0xa4],EAX      ; 0044c399
    MOV dword ptr [ESP + 0xd8],ESI      ; 0044c3a0
    FMUL float ptr [ESP + 0xa4]         ; 0044c3a7
    FILD dword ptr [ESP + 0xd8]         ; 0044c3ae
    FMUL ST1                            ; 0044c3b5
    FLD float ptr [0x005cf4f7]          ; 0044c3b7 | DAT_005cf4f7
    FXCH                                ; 0044c3bd
    FMUL ST1                            ; 0044c3bf
    FLD float ptr [ESP + 0xa4]          ; 0044c3c1
    FXCH                                ; 0044c3c8
    FSTP float ptr [ESP + 0xd0]         ; 0044c3ca
    FSUB float ptr [ESP + 0xd0]         ; 0044c3d1
    FLD1                                ; 0044c3d8
    FDIV float ptr [ESP + 0xa4]         ; 0044c3da
    LEA EAX,[ESI + 0x1]                 ; 0044c3e1
    MOV dword ptr [ESP + 0xd8],EAX      ; 0044c3e4
    FILD dword ptr [ESP + 0xd8]         ; 0044c3eb
    FMULP ST4                           ; 0044c3f2
    FXCH ST3                            ; 0044c3f4
    FMULP ST2                           ; 0044c3f6
    FLD float ptr [ESP + 0xa4]          ; 0044c3f8
    FXCH ST2                            ; 0044c3ff
    FSTP float ptr [ESP + 0xcc]         ; 0044c401
    FXCH                                ; 0044c408
    FSUB float ptr [ESP + 0xcc]         ; 0044c40a
    FXCH                                ; 0044c411
    FMUL ST2                            ; 0044c413
    FXCH                                ; 0044c415
    FMULP ST2                           ; 0044c417
    FLD double ptr [0x005cf4ff]         ; 0044c419 | DAT_005cf4ff
    FXCH                                ; 0044c41f
    FMUL ST1                            ; 0044c421
    FXCH ST2                            ; 0044c423
    FMULP                               ; 0044c425
    FLD float ptr [ESP + 0xd0]          ; 0044c427
    FXCH ST2                            ; 0044c42e
    CALL crt_math.c_round_FUN_005b7ff0  ; 0044c430
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 0044c435
    CALL crt_math.c_round_FUN_005b7ff0  ; 0044c437
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 0044c43c
    FISTP dword ptr [ESP + 0xc0]        ; 0044c43e
    FISTP dword ptr [ESP + 0xbc]        ; 0044c445
    FCOMP float ptr [ESP + 0xc8]        ; 0044c44c
    FNSTSW AX                           ; 0044c453
    SAHF                                ; 0044c455
    JNC 0x0044c7f4                      ; 0044c456
        ;   XREF to: 0044c7f4 (CONDITIONAL_JUMP)  ; LAB_0044c7f4
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0044c45c
    MOV dword ptr [ESP + 0x5c],EAX      ; 0044c463
        ;   Label: LAB_0044c463
    FLD float ptr [ESP + 0x5c]          ; 0044c467
    FMUL float ptr [ESP + 0xb4]         ; 0044c46b
    FLD float ptr [ESP + 0x5c]          ; 0044c472
    FMUL float ptr [ESP + 0xb8]         ; 0044c476
    LEA EBX,[ESP + 0x30]                ; 0044c47d
    LEA EAX,[ESP + 0x54]                ; 0044c481
    MOV EDX,dword ptr [0x0060b280]      ; 0044c485 | DAT_0060b280
    FXCH                                ; 0044c48b
    FSTP float ptr [ESP + 0x54]         ; 0044c48d
    FSTP float ptr [ESP + 0x58]         ; 0044c491
    FLD float ptr [EAX]                 ; 0044c495
    FMUL float ptr [0x005f5050]         ; 0044c497 | DAT_005f5050
    FISTP dword ptr [EBX]               ; 0044c49d
    FLD float ptr [EAX + 0x4]           ; 0044c49f
    FMUL float ptr [0x005f5050]         ; 0044c4a2 | DAT_005f5050
    FISTP dword ptr [EBX + 0x4]         ; 0044c4a8
    FLD float ptr [EAX + 0x8]           ; 0044c4ab
    FMUL float ptr [0x005f5050]         ; 0044c4ae | DAT_005f5050
    FISTP dword ptr [EBX + 0x8]         ; 0044c4b4
    LEA EAX,[ESP + 0x30]                ; 0044c4b7
    PUSH EAX                            ; 0044c4bb
    MOV EAX,dword ptr [EDX]             ; 0044c4bc
    PUSH EAX                            ; 0044c4be
    CALL engine_special.cpp_FUN_0055d723 ; 0044c4bf
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0044c4c4
    FLD float ptr [ESP + 0xd0]          ; 0044c4c7
    FCOMP float ptr [ESP + 0xc4]        ; 0044c4ce
    FNSTSW AX                           ; 0044c4d5
    SAHF                                ; 0044c4d7
    JNC 0x0044c800                      ; 0044c4d8
        ;   XREF to: 0044c800 (CONDITIONAL_JUMP)  ; LAB_0044c800
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0044c4de
    MOV dword ptr [ESP + 0x5c],EAX      ; 0044c4e5
        ;   Label: LAB_0044c4e5
    FLD float ptr [ESP + 0x5c]          ; 0044c4e9
    FMUL float ptr [ESP + 0xac]         ; 0044c4ed
    FLD float ptr [ESP + 0x5c]          ; 0044c4f4
    FMUL float ptr [ESP + 0xb0]         ; 0044c4f8
    LEA EBX,[ESP + 0x60]                ; 0044c4ff
    LEA EAX,[ESP + 0x54]                ; 0044c503
    MOV EDX,dword ptr [0x0060b280]      ; 0044c507 | DAT_0060b280
    FXCH                                ; 0044c50d
    FSTP float ptr [ESP + 0x54]         ; 0044c50f
    FSTP float ptr [ESP + 0x58]         ; 0044c513
    FLD float ptr [EAX]                 ; 0044c517
    FMUL float ptr [0x005f5050]         ; 0044c519 | DAT_005f5050
    FISTP dword ptr [EBX]               ; 0044c51f
    FLD float ptr [EAX + 0x4]           ; 0044c521
    FMUL float ptr [0x005f5050]         ; 0044c524 | DAT_005f5050
    FISTP dword ptr [EBX + 0x4]         ; 0044c52a
    FLD float ptr [EAX + 0x8]           ; 0044c52d
    FMUL float ptr [0x005f5050]         ; 0044c530 | DAT_005f5050
    FISTP dword ptr [EBX + 0x8]         ; 0044c536
    LEA EAX,[ESP + 0x60]                ; 0044c539
    PUSH EAX                            ; 0044c53d
    MOV EAX,dword ptr [EDX]             ; 0044c53e
    ADD EAX,0x30                        ; 0044c540
    PUSH EAX                            ; 0044c543
    CALL engine_special.cpp_FUN_0055d723 ; 0044c544
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0044c549
    FLD float ptr [ESP + 0xcc]          ; 0044c54c
    FCOMP float ptr [ESP + 0xc4]        ; 0044c553
    FNSTSW AX                           ; 0044c55a
    SAHF                                ; 0044c55c
    JNC 0x0044c80c                      ; 0044c55d
        ;   XREF to: 0044c80c (CONDITIONAL_JUMP)  ; LAB_0044c80c
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0044c563
    MOV dword ptr [ESP + 0x5c],EAX      ; 0044c56a
        ;   Label: LAB_0044c56a
    FLD float ptr [ESP + 0x5c]          ; 0044c56e
    FMUL float ptr [ESP + 0xac]         ; 0044c572
    FLD float ptr [ESP + 0x5c]          ; 0044c579
    FMUL float ptr [ESP + 0xb0]         ; 0044c57d
    LEA EBX,[ESP + 0x6c]                ; 0044c584
    LEA EAX,[ESP + 0x54]                ; 0044c588
    MOV EDX,dword ptr [0x0060b280]      ; 0044c58c | DAT_0060b280
    FXCH                                ; 0044c592
    FSTP float ptr [ESP + 0x54]         ; 0044c594
    FSTP float ptr [ESP + 0x58]         ; 0044c598
    FLD float ptr [EAX]                 ; 0044c59c
    FMUL float ptr [0x005f5050]         ; 0044c59e | DAT_005f5050
    FISTP dword ptr [EBX]               ; 0044c5a4
    FLD float ptr [EAX + 0x4]           ; 0044c5a6
    FMUL float ptr [0x005f5050]         ; 0044c5a9 | DAT_005f5050
    FISTP dword ptr [EBX + 0x4]         ; 0044c5af
    FLD float ptr [EAX + 0x8]           ; 0044c5b2
    FMUL float ptr [0x005f5050]         ; 0044c5b5 | DAT_005f5050
    FISTP dword ptr [EBX + 0x8]         ; 0044c5bb
    LEA EAX,[ESP + 0x6c]                ; 0044c5be
    PUSH EAX                            ; 0044c5c2
    MOV EAX,dword ptr [EDX]             ; 0044c5c3
    ADD EAX,0x60                        ; 0044c5c5
    PUSH EAX                            ; 0044c5c8
    CALL engine_special.cpp_FUN_0055d723 ; 0044c5c9
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0044c5ce
    FLD float ptr [ESP + 0xcc]          ; 0044c5d1
    FCOMP float ptr [ESP + 0xc8]        ; 0044c5d8
    FNSTSW AX                           ; 0044c5df
    SAHF                                ; 0044c5e1
    JNC 0x0044c818                      ; 0044c5e2
        ;   XREF to: 0044c818 (CONDITIONAL_JUMP)  ; LAB_0044c818
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0044c5e8
    MOV dword ptr [ESP + 0x5c],EAX      ; 0044c5ef
        ;   Label: LAB_0044c5ef
    FLD float ptr [ESP + 0x5c]          ; 0044c5f3
    FMUL float ptr [ESP + 0xb4]         ; 0044c5f7
    FLD float ptr [ESP + 0x5c]          ; 0044c5fe
    FMUL float ptr [ESP + 0xb8]         ; 0044c602
    LEA EBX,[ESP + 0x78]                ; 0044c609
    LEA EAX,[ESP + 0x54]                ; 0044c60d
    MOV EDX,dword ptr [0x0060b280]      ; 0044c611 | DAT_0060b280
    FXCH                                ; 0044c617
    FSTP float ptr [ESP + 0x54]         ; 0044c619
    FSTP float ptr [ESP + 0x58]         ; 0044c61d
    FLD float ptr [EAX]                 ; 0044c621
    FMUL float ptr [0x005f5050]         ; 0044c623 | DAT_005f5050
    FISTP dword ptr [EBX]               ; 0044c629
    FLD float ptr [EAX + 0x4]           ; 0044c62b
    FMUL float ptr [0x005f5050]         ; 0044c62e | DAT_005f5050
    FISTP dword ptr [EBX + 0x4]         ; 0044c634
    FLD float ptr [EAX + 0x8]           ; 0044c637
    FMUL float ptr [0x005f5050]         ; 0044c63a | DAT_005f5050
    FISTP dword ptr [EBX + 0x8]         ; 0044c640
    LEA EAX,[ESP + 0x78]                ; 0044c643
    PUSH EAX                            ; 0044c647
    MOV EAX,dword ptr [EDX]             ; 0044c648
    ADD EAX,0x90                        ; 0044c64a
    PUSH EAX                            ; 0044c64f
    CALL engine_special.cpp_FUN_0055d723 ; 0044c650
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EDX,dword ptr [0x0060b280]      ; 0044c655 | DAT_0060b280
    ADD ESP,0x8                         ; 0044c65b
    MOV EBX,dword ptr [EDX]             ; 0044c65e
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0044c660
    MOV dword ptr [EBX + 0x2c],EAX      ; 0044c667
    MOV EAX,dword ptr [EDX]             ; 0044c66a
    MOV dword ptr [EAX + 0x28],0xffff   ; 0044c66c
    MOV EAX,dword ptr [EDX]             ; 0044c673
    MOV dword ptr [EAX + 0x24],0xffff   ; 0044c675
    MOV EAX,dword ptr [EDX]             ; 0044c67c
    MOV dword ptr [EAX + 0x20],0xffff   ; 0044c67e
    MOV EAX,dword ptr [EDX]             ; 0044c685
    MOV dword ptr [EAX + 0x18],0xf80000 ; 0044c687
    MOV EAX,dword ptr [EDX]             ; 0044c68e
    MOV dword ptr [EAX + 0x1c],0xf80000 ; 0044c690
    MOV EBX,dword ptr [EDX]             ; 0044c697
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0044c699
    MOV dword ptr [EBX + 0x5c],EAX      ; 0044c6a0
    MOV EAX,dword ptr [EDX]             ; 0044c6a3
    MOV dword ptr [EAX + 0x58],0xffff   ; 0044c6a5
    MOV EAX,dword ptr [EDX]             ; 0044c6ac
    MOV dword ptr [EAX + 0x54],0xffff   ; 0044c6ae
    MOV EAX,dword ptr [EDX]             ; 0044c6b5
    MOV dword ptr [EAX + 0x50],0xffff   ; 0044c6b7
    MOV EAX,dword ptr [EDX]             ; 0044c6be
    MOV dword ptr [EAX + 0x48],0x80000  ; 0044c6c0
    MOV EAX,dword ptr [EDX]             ; 0044c6c7
    MOV dword ptr [EAX + 0x4c],0xf80000 ; 0044c6c9
    MOV EBX,dword ptr [EDX]             ; 0044c6d0
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0044c6d2
    MOV dword ptr [EBX + 0x8c],EAX      ; 0044c6d9
    MOV EAX,dword ptr [EDX]             ; 0044c6df
    MOV dword ptr [EAX + 0x88],0xffff   ; 0044c6e1
    MOV EAX,dword ptr [EDX]             ; 0044c6eb
    MOV dword ptr [EAX + 0x84],0xffff   ; 0044c6ed
    MOV EAX,dword ptr [EDX]             ; 0044c6f7
    MOV dword ptr [EAX + 0x80],0xffff   ; 0044c6f9
    MOV EAX,dword ptr [EDX]             ; 0044c703
    MOV dword ptr [EAX + 0x78],0x80000  ; 0044c705
    MOV EAX,dword ptr [EDX]             ; 0044c70c
    MOV dword ptr [EAX + 0x7c],0x80000  ; 0044c70e
    MOV EBX,dword ptr [EDX]             ; 0044c715
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0044c717
    MOV dword ptr [EBX + 0xbc],EAX      ; 0044c71e
    MOV EAX,dword ptr [EDX]             ; 0044c724
    MOV dword ptr [EAX + 0xb8],0xffff   ; 0044c726
    MOV EAX,dword ptr [EDX]             ; 0044c730
    MOV dword ptr [EAX + 0xb4],0xffff   ; 0044c732
    MOV EAX,dword ptr [EDX]             ; 0044c73c
    MOV dword ptr [EAX + 0xb0],0xffff   ; 0044c73e
    MOV EAX,dword ptr [EDX]             ; 0044c748
    MOV dword ptr [EAX + 0xa8],0xf80000 ; 0044c74a
    INC ESI                             ; 0044c754
    MOV EAX,dword ptr [EDX]             ; 0044c755
    XOR ECX,ECX                         ; 0044c757
    MOV EBX,0x3                         ; 0044c759
    MOV dword ptr [EAX + 0xac],0x80000  ; 0044c75e
    MOV EAX,0x4                         ; 0044c768
    MOV dword ptr [ESP + 0x1c],ECX      ; 0044c76d
    MOV dword ptr [ESP + 0x18],ECX      ; 0044c771
    MOV dword ptr [ESP + 0xc],EAX       ; 0044c775
    MOV EAX,0x1                         ; 0044c779
    MOV dword ptr [ESP + 0x14],ECX      ; 0044c77e
    MOV dword ptr [ESP + 0x24],EAX      ; 0044c782
    LEA EAX,[ESP + 0x8]                 ; 0044c786
    MOV dword ptr [ESP + 0x10],ECX      ; 0044c78a
    PUSH EAX                            ; 0044c78e
    MOV dword ptr [ESP + 0x24],ECX      ; 0044c78f
    MOV ECX,0x2                         ; 0044c793
    PUSH EDX                            ; 0044c798
    MOV dword ptr [ESP + 0x34],EBX      ; 0044c799
    MOV dword ptr [ESP + 0x30],ECX      ; 0044c79d
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930 ; 0044c7a1
        ;   XREF to: 0046a930 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0044c7a6
    CMP ESI,0x4                         ; 0044c7a9
    JL 0x0044c389                       ; 0044c7ac
        ;   XREF to: 0044c389 (CONDITIONAL_JUMP)  ; LAB_0044c389
    INC EDI                             ; 0044c7b2
    CMP EDI,0x10                        ; 0044c7b3
    JL 0x0044c22f                       ; 0044c7b6
        ;   XREF to: 0044c22f (CONDITIONAL_JUMP)  ; LAB_0044c22f
    MOV ESI,dword ptr [ESP + 0x4]       ; 0044c7bc
    INC ESI                             ; 0044c7c0
    MOV dword ptr [ESP + 0x4],ESI       ; 0044c7c1
    CMP ESI,0x10                        ; 0044c7c5
    JL 0x0044c1f7                       ; 0044c7c8
        ;   XREF to: 0044c1f7 (CONDITIONAL_JUMP)  ; LAB_0044c1f7
    MOV EAX,[0x0060b280]                ; 0044c7ce | DAT_0060b280
    PUSH EAX                            ; 0044c7d3
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 0044c7d4
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0044c7d9
    PUSH 0x0                            ; 0044c7dc
    MOV EDX,dword ptr [0x0060b280]      ; 0044c7de | DAT_0060b280
    PUSH EDX                            ; 0044c7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0044c7e5
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0044c7ea
    MOV ESP,EBP                         ; 0044c7ed
    POP EBP                             ; 0044c7ef
    POP EDI                             ; 0044c7f0
    POP ESI                             ; 0044c7f1
    POP EBX                             ; 0044c7f2
    RET                                 ; 0044c7f3
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0044c7f4
        ;   Label: LAB_0044c7f4
    JMP 0x0044c463                      ; 0044c7fb
        ;   XREF to: 0044c463 (UNCONDITIONAL_JUMP)  ; LAB_0044c463
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0044c800
        ;   Label: LAB_0044c800
    JMP 0x0044c4e5                      ; 0044c807
        ;   XREF to: 0044c4e5 (UNCONDITIONAL_JUMP)  ; LAB_0044c4e5
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0044c80c
        ;   Label: LAB_0044c80c
    JMP 0x0044c56a                      ; 0044c813
        ;   XREF to: 0044c56a (UNCONDITIONAL_JUMP)  ; LAB_0044c56a
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0044c818
        ;   Label: LAB_0044c818
    JMP 0x0044c5ef                      ; 0044c81f
        ;   XREF to: 0044c5ef (UNCONDITIONAL_JUMP)  ; LAB_0044c5ef

