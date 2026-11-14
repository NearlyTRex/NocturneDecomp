; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_matrixPushAndTransform_FUN_004ed1e0(CVector3f *angles,CVector3f *position)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   angles
; CVector3f *      Stack[0x8]:4   position
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d76cfc
;   undefined4 DAT_01d76d00
;   undefined4 DAT_01d7977c
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045bef0
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ed1e0
        ;   Label: engine_mini3d.cpp_matrixPushAndTransform_FUN_004ed1e0
    PUSH ESI                            ; 004ed1e1
    PUSH EDI                            ; 004ed1e2
    PUSH EBP                            ; 004ed1e3
    SUB ESP,0x4c                        ; 004ed1e4
    MOV EDI,dword ptr [ESP + 0x60]      ; 004ed1e7
    MOV ESI,dword ptr [ESP + 0x64]      ; 004ed1eb
    MOV EDX,dword ptr [0x01d76d00]      ; 004ed1ef | DAT_01d76d00
    INC EDX                             ; 004ed1f5
    MOV dword ptr [0x01d76d00],EDX      ; 004ed1f6 | DAT_01d76d00
    CMP EDX,0x9                         ; 004ed1fc
    JLE 0x004ed224                      ; 004ed1ff
        ;   XREF to: 004ed224 (CONDITIONAL_JUMP)  ; LAB_004ed224
    MOV EBX,0x5c7e79                    ; 004ed201
    MOV EBP,0x3df                       ; 004ed206
    PUSH 0x5c7e8e                       ; 004ed20b
    MOV dword ptr [0x01d71de0],EBX      ; 004ed210 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 004ed216 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004ed21c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004ed221
    MOV EAX,[0x01d76d00]                ; 004ed224 | DAT_01d76d00
        ;   Label: LAB_004ed224
    SHL EAX,0x2                         ; 004ed229
    MOV EBX,EAX                         ; 004ed22c
    SHL EAX,0x4                         ; 004ed22e
    SUB EAX,EBX                         ; 004ed231
    MOV EBX,0x1d76d04                   ; 004ed233
    PUSH EDI                            ; 004ed238
    ADD EBX,EAX                         ; 004ed239
    LEA EAX,[ESP + 0x1c]                ; 004ed23b
    PUSH EAX                            ; 004ed23f
    LEA EAX,[ESP + 0x8]                 ; 004ed240
    PUSH EAX                            ; 004ed244
    CALL core_dirmat.cpp_FUN_0045bef0   ; 004ed245
        ;   XREF to: 0045bef0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045bef0()
    ADD ESP,0xc                         ; 004ed24a
    LEA EAX,[EDI + 0x8]                 ; 004ed24d
    PUSH EAX                            ; 004ed250
    LEA EAX,[ESP + 0x8]                 ; 004ed251
    PUSH EAX                            ; 004ed255
    LEA EAX,[ESP + 0x14]                ; 004ed256
    PUSH EAX                            ; 004ed25a
    CALL core_dirmat.cpp_FUN_0045bef0   ; 004ed25b
        ;   XREF to: 0045bef0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045bef0()
    ADD ESP,0xc                         ; 004ed260
    ADD EDI,0x4                         ; 004ed263
    PUSH EDI                            ; 004ed266
    LEA EAX,[ESP + 0x24]                ; 004ed267
    PUSH EAX                            ; 004ed26b
    LEA EAX,[ESP + 0x10]                ; 004ed26c
    PUSH EAX                            ; 004ed270
    CALL core_dirmat.cpp_FUN_0045bef0   ; 004ed271
        ;   XREF to: 0045bef0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045bef0()
    ADD ESP,0xc                         ; 004ed276
    FLD float ptr [ESP + 0x8]           ; 004ed279
    FMUL float ptr [ESP]                ; 004ed27d
    FLD float ptr [ESP + 0x8]           ; 004ed280
    FMUL float ptr [ESP + 0x18]         ; 004ed284
    FLD float ptr [ESP + 0xc]           ; 004ed288
    FMUL float ptr [ESP + 0x18]         ; 004ed28c
    FLD float ptr [ESP + 0x4]           ; 004ed290
    FMUL float ptr [ESP + 0x18]         ; 004ed294
    FLD ST3                             ; 004ed298
    FMUL float ptr [ESP + 0xc]          ; 004ed29a
    MOV EAX,[0x01d76cfc]                ; 004ed29e | DAT_01d76cfc
    FLD float ptr [ESP + 0x20]          ; 004ed2a3
    FMUL float ptr [ESP + 0x4]          ; 004ed2a7
    FLD float ptr [EAX + 0x24]          ; 004ed2ab
    FSUB float ptr [ESI]                ; 004ed2ae
    FSTP float ptr [ESP + 0x10]         ; 004ed2b0
    FLD float ptr [EAX + 0x28]          ; 004ed2b4
    FSUB float ptr [ESI + 0x4]          ; 004ed2b7
    FSTP float ptr [ESP + 0x24]         ; 004ed2ba
    FLD float ptr [EAX + 0x2c]          ; 004ed2be
    FXCH ST6                            ; 004ed2c1
    FMUL float ptr [ESP + 0x4]          ; 004ed2c3
    FXCH                                ; 004ed2c7
    FADDP ST2,ST0                       ; 004ed2c9
    FXCH ST5                            ; 004ed2cb
    FSUB float ptr [ESI + 0x8]          ; 004ed2cd
    FXCH                                ; 004ed2d0
    FSTP float ptr [ESP + 0x2c]         ; 004ed2d2
    FLD float ptr [ESP + 0x20]          ; 004ed2d6
    FCHS                                ; 004ed2da
    FMUL float ptr [ESP + 0xc]          ; 004ed2dc
    FLD float ptr [ESP + 0x20]          ; 004ed2e0
    FXCH                                ; 004ed2e4
    FADDP ST6,ST0                       ; 004ed2e6
    FMUL float ptr [ESP]                ; 004ed2e8
    FXCH ST5                            ; 004ed2eb
    FSTP float ptr [ESP + 0x48]         ; 004ed2ed
    FLD float ptr [ESP + 0x20]          ; 004ed2f1
    FMUL float ptr [ESP + 0x18]         ; 004ed2f5
    FLD float ptr [ESP]                 ; 004ed2f9
    FCHS                                ; 004ed2fc
    FSTP float ptr [ESP + 0x3c]         ; 004ed2fe
    FLD ST5                             ; 004ed302
    FMUL float ptr [ESP + 0xc]          ; 004ed304
    FXCH ST5                            ; 004ed308
    FSTP float ptr [ESP + 0x38]         ; 004ed30a
    FXCH ST5                            ; 004ed30e
    FMUL float ptr [ESP + 0x4]          ; 004ed310
    FXCH ST3                            ; 004ed314
    FSTP float ptr [ESP + 0x30]         ; 004ed316
    FLD float ptr [ESP + 0x10]          ; 004ed31a
    FMUL float ptr [ESP + 0x38]         ; 004ed31e
    FXCH ST2                            ; 004ed322
    FSTP float ptr [ESP + 0x44]         ; 004ed324
    FLD float ptr [ESP + 0x8]           ; 004ed328
    FCHS                                ; 004ed32c
    FMUL float ptr [ESP + 0x4]          ; 004ed32e
    FLD float ptr [ESP + 0xc]           ; 004ed332
    FXCH                                ; 004ed336
    FADDP ST5,ST0                       ; 004ed338
    FMUL float ptr [ESP + 0x8]          ; 004ed33a
    FXCH ST4                            ; 004ed33e
    FSTP float ptr [ESP + 0x28]         ; 004ed340
    FLD float ptr [ESP + 0x24]          ; 004ed344
    FMUL float ptr [ESP + 0x3c]         ; 004ed348
    FLD float ptr [ESP + 0x10]          ; 004ed34c
    FMUL float ptr [ESP + 0x2c]         ; 004ed350
    FXCH                                ; 004ed354
    FADDP ST3,ST0                       ; 004ed356
    FXCH ST5                            ; 004ed358
    FSTP float ptr [ESP + 0x40]         ; 004ed35a
    FLD ST0                             ; 004ed35e
    FMUL float ptr [ESP + 0x40]         ; 004ed360
    FLD float ptr [ESP + 0x10]          ; 004ed364
    FXCH ST5                            ; 004ed368
    FADDP ST4,ST0                       ; 004ed36a
    FXCH ST4                            ; 004ed36c
    FMUL float ptr [ESP + 0x48]         ; 004ed36e
    FXCH ST3                            ; 004ed372
    FSTP float ptr [ESP + 0x34]         ; 004ed374
    FLD float ptr [ESP + 0x24]          ; 004ed378
    FMUL float ptr [ESP + 0x30]         ; 004ed37c
    FLD float ptr [ESP + 0x24]          ; 004ed380
    FXCH                                ; 004ed384
    FADDP ST6,ST0                       ; 004ed386
    FMUL float ptr [ESP + 0x44]         ; 004ed388
    FLD ST1                             ; 004ed38c
    FMUL float ptr [ESP + 0x28]         ; 004ed38e
    FXCH                                ; 004ed392
    FADDP ST4,ST0                       ; 004ed394
    FXCH ST4                            ; 004ed396
    FADDP ST2,ST0                       ; 004ed398
    FMUL float ptr [ESP + 0x34]         ; 004ed39a
    FXCH                                ; 004ed39e
    FSTP float ptr [EBX + 0x2c]         ; 004ed3a0
    FXCH ST2                            ; 004ed3a3
    FADDP ST3,ST0                       ; 004ed3a5
    FADDP                               ; 004ed3a7
    FXCH                                ; 004ed3a9
    FSTP float ptr [EBX + 0x24]         ; 004ed3ab
    FSTP float ptr [EBX + 0x28]         ; 004ed3ae
    FLD float ptr [EAX + 0x30]          ; 004ed3b1
    FMUL float ptr [ESP + 0x2c]         ; 004ed3b4
    FLD float ptr [EAX + 0x34]          ; 004ed3b8
    FMUL float ptr [ESP + 0x30]         ; 004ed3bb
    FADDP                               ; 004ed3bf
    FLD float ptr [EAX + 0x38]          ; 004ed3c1
    FMUL float ptr [ESP + 0x28]         ; 004ed3c4
    FADDP                               ; 004ed3c8
    FSTP float ptr [EBX + 0x30]         ; 004ed3ca
    FLD float ptr [EAX + 0x30]          ; 004ed3cd
    FMUL float ptr [ESP + 0x48]         ; 004ed3d0
    FLD float ptr [ESP + 0x44]          ; 004ed3d4
    FLD float ptr [EAX + 0x34]          ; 004ed3d8
    FMUL ST1                            ; 004ed3db
    FADDP ST2,ST0                       ; 004ed3dd
    FLD float ptr [ESP + 0x34]          ; 004ed3df
    FLD float ptr [EAX + 0x38]          ; 004ed3e3
    FMUL ST1                            ; 004ed3e6
    FADDP ST3,ST0                       ; 004ed3e8
    FXCH ST2                            ; 004ed3ea
    FSTP float ptr [EBX + 0x34]         ; 004ed3ec
    FLD float ptr [ESP + 0x38]          ; 004ed3ef
    FLD float ptr [EAX + 0x30]          ; 004ed3f3
    FMUL ST1                            ; 004ed3f6
    FLD float ptr [ESP + 0x3c]          ; 004ed3f8
    FLD float ptr [EAX + 0x34]          ; 004ed3fc
    FMUL ST1                            ; 004ed3ff
    FADDP ST2,ST0                       ; 004ed401
    FLD float ptr [ESP + 0x40]          ; 004ed403
    FLD float ptr [EAX + 0x38]          ; 004ed407
    FMUL ST1                            ; 004ed40a
    FADDP ST3,ST0                       ; 004ed40c
    FLD float ptr [ESP + 0x30]          ; 004ed40e
    FXCH ST3                            ; 004ed412
    FSTP float ptr [EBX + 0x38]         ; 004ed414
    FXCH ST2                            ; 004ed417
    FMUL float ptr [EAX + 0xc]          ; 004ed419
    FLD float ptr [ESP + 0x2c]          ; 004ed41c
    FMUL float ptr [EAX]                ; 004ed420
    FADDP                               ; 004ed422
    FLD float ptr [ESP + 0x28]          ; 004ed424
    FMUL float ptr [EAX + 0x18]         ; 004ed428
    FADDP                               ; 004ed42b
    FLD float ptr [ESP + 0x2c]          ; 004ed42d
    FXCH                                ; 004ed431
    FSTP float ptr [EBX]                ; 004ed433
    FMUL float ptr [EAX + 0x4]          ; 004ed435
    FLD float ptr [ESP + 0x30]          ; 004ed438
    FMUL float ptr [EAX + 0x10]         ; 004ed43c
    FADDP                               ; 004ed43f
    FLD float ptr [ESP + 0x28]          ; 004ed441
    FMUL float ptr [EAX + 0x1c]         ; 004ed445
    FADDP                               ; 004ed448
    FLD float ptr [ESP + 0x2c]          ; 004ed44a
    FXCH                                ; 004ed44e
    FSTP float ptr [EBX + 0x4]          ; 004ed450
    FMUL float ptr [EAX + 0x8]          ; 004ed453
    FLD float ptr [ESP + 0x30]          ; 004ed456
    FMUL float ptr [EAX + 0x14]         ; 004ed45a
    FADDP                               ; 004ed45d
    FLD float ptr [ESP + 0x28]          ; 004ed45f
    FMUL float ptr [EAX + 0x20]         ; 004ed463
    FADDP                               ; 004ed466
    FLD ST4                             ; 004ed468
    FXCH                                ; 004ed46a
    FSTP float ptr [EBX + 0x8]          ; 004ed46c
    FMUL float ptr [EAX + 0xc]          ; 004ed46f
    FLD float ptr [ESP + 0x48]          ; 004ed472
    FMUL float ptr [EAX]                ; 004ed476
    FADDP                               ; 004ed478
    FLD ST5                             ; 004ed47a
    FMUL float ptr [EAX + 0x18]         ; 004ed47c
    FADDP                               ; 004ed47f
    FLD float ptr [ESP + 0x48]          ; 004ed481
    FXCH                                ; 004ed485
    FSTP float ptr [EBX + 0xc]          ; 004ed487
    FMUL float ptr [EAX + 0x4]          ; 004ed48a
    FLD ST4                             ; 004ed48d
    FMUL float ptr [EAX + 0x10]         ; 004ed48f
    FADDP                               ; 004ed492
    FLD ST5                             ; 004ed494
    FMUL float ptr [EAX + 0x1c]         ; 004ed496
    FADDP                               ; 004ed499
    FSTP float ptr [EBX + 0x10]         ; 004ed49b
    FLD float ptr [ESP + 0x48]          ; 004ed49e
    FMUL float ptr [EAX + 0x8]          ; 004ed4a2
    FXCH ST4                            ; 004ed4a5
    FMUL float ptr [EAX + 0x14]         ; 004ed4a7
    FADDP ST4,ST0                       ; 004ed4aa
    FXCH ST4                            ; 004ed4ac
    FMUL float ptr [EAX + 0x20]         ; 004ed4ae
    FADDP ST3,ST0                       ; 004ed4b1
    FLD ST3                             ; 004ed4b3
    FXCH ST3                            ; 004ed4b5
    FSTP float ptr [EBX + 0x14]         ; 004ed4b7
    FXCH ST2                            ; 004ed4ba
    FMUL float ptr [EAX + 0xc]          ; 004ed4bc
    FLD ST1                             ; 004ed4bf
    FMUL float ptr [EAX]                ; 004ed4c1
    FADDP                               ; 004ed4c3
    FLD ST2                             ; 004ed4c5
    FMUL float ptr [EAX + 0x18]         ; 004ed4c7
    FADDP                               ; 004ed4ca
    FLD ST1                             ; 004ed4cc
    FXCH                                ; 004ed4ce
    FSTP float ptr [EBX + 0x18]         ; 004ed4d0
    FMUL float ptr [EAX + 0x4]          ; 004ed4d3
    FLD ST3                             ; 004ed4d6
    FMUL float ptr [EAX + 0x10]         ; 004ed4d8
    FADDP                               ; 004ed4db
    FLD ST2                             ; 004ed4dd
    FMUL float ptr [EAX + 0x1c]         ; 004ed4df
    FADDP                               ; 004ed4e2
    FSTP float ptr [EBX + 0x1c]         ; 004ed4e4
    FMUL float ptr [EAX + 0x8]          ; 004ed4e7
    FXCH ST2                            ; 004ed4ea
    FMUL float ptr [EAX + 0x14]         ; 004ed4ec
    FADDP ST2,ST0                       ; 004ed4ef
    FMUL float ptr [EAX + 0x20]         ; 004ed4f1
    MOV dword ptr [0x01d76cfc],EBX      ; 004ed4f4 | DAT_01d76cfc
    MOV EAX,0x1                         ; 004ed4fa
    FADDP                               ; 004ed4ff
    MOV [0x01d7977c],EAX                ; 004ed501 | DAT_01d7977c
    FSTP float ptr [EBX + 0x20]         ; 004ed506
    ADD ESP,0x4c                        ; 004ed509
    POP EBP                             ; 004ed50c
    POP EDI                             ; 004ed50d
    POP ESI                             ; 004ed50e
    POP EBX                             ; 004ed50f
    RET                                 ; 004ed510

