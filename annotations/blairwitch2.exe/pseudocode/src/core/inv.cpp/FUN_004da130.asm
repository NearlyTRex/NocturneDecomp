; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_inv_cpp_FUN_004da130(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005db3f2
;   undefined4 DAT_0060b280
;   undefined4 DAT_006141bc
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01c37788
;   undefined4 DAT_01cedef4
;   undefined4 CAlphaBitmap_01d02ed0.width
;   undefined4 CAlphaBitmap_01d02ed0.height
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
;   core_dirmat.cpp_FUN_00449530
;   core_inv.cpp_FUN_004d9ff0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880
;   engine_matrix.c_invertTransformMatrix_FUN_004e8730
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004da130
        ;   Label: core_inv.cpp_FUN_004da130
    PUSH ESI                            ; 004da131
    PUSH EDI                            ; 004da132
    PUSH EBP                            ; 004da133
    SUB ESP,0x174                       ; 004da134
    MOV ESI,dword ptr [0x006141bc]      ; 004da13a | DAT_006141bc
    SUB ESI,0x2                         ; 004da140
    MOV EDX,dword ptr [0x01d02ee0]      ; 004da143 | CAlphaBitmap_01d02ed0.height
    MOV EBX,ESI                         ; 004da149
    PUSH 0xffff                         ; 004da14b
    SUB EBX,EDX                         ; 004da150
    PUSH EBX                            ; 004da152
    PUSH 0x2                            ; 004da153
    MOV EDI,dword ptr [0x01d02edc]      ; 004da155 | CAlphaBitmap_01d02ed0.width
    PUSH 0x1d02ed0                      ; 004da15b
    ADD EDI,0x2                         ; 004da160
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900 ; 004da163
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d900(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004da168
    LEA EAX,[EDI + -0x2]                ; 004da16b
    MOV dword ptr [ESP + 0x170],EAX     ; 004da16e
    ADD EDI,0x2                         ; 004da175
    FLD double ptr [0x005db3f2]         ; 004da178 | DAT_005db3f2
    FILD dword ptr [ESP + 0x170]        ; 004da17e
    FMUL ST1                            ; 004da185
    MOV dword ptr [ESP + 0x170],EDI     ; 004da187
    MOV EAX,ESI                         ; 004da18e
    FILD dword ptr [ESP + 0x170]        ; 004da190
    SUB EAX,EBX                         ; 004da197
    FMUL ST2                            ; 004da199
    MOV dword ptr [ESP + 0x170],EAX     ; 004da19b
    ADD EBX,ESI                         ; 004da1a2
    FILD dword ptr [ESP + 0x170]        ; 004da1a4
    MOV dword ptr [ESP + 0x170],EBX     ; 004da1ab
    FMUL ST3                            ; 004da1b2
    FILD dword ptr [ESP + 0x170]        ; 004da1b4
    FMULP ST4                           ; 004da1bb
    XOR ECX,ECX                         ; 004da1bd
    MOV EBP,dword ptr [0x01c37788]      ; 004da1bf | DAT_01c37788
    MOV dword ptr [0x01c37788],ECX      ; 004da1c5 | DAT_01c37788
    MOV dword ptr [ESP + 0x154],ECX     ; 004da1cb
    MOV dword ptr [ESP + 0x158],ECX     ; 004da1d2
    LEA EDI,[ESP + 0x88]                ; 004da1d9
    MOV EAX,[0x01cedef4]                ; 004da1e0 | DAT_01cedef4
    FXCH ST2                            ; 004da1e5
    FSTP float ptr [ESP + 0x160]        ; 004da1e7
    MOV EBX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004da1ee
    FSTP float ptr [ESP + 0x168]        ; 004da1f5
    MOV EAX,[0x0061b5a8]                ; 004da1fc | g_CDemonSetPtr
    FLD float ptr [EBX + 0x34]          ; 004da201
    FSUB float ptr [EAX + 0x15acbc]     ; 004da204
    LEA ESI,[ESP + 0x154]               ; 004da20a
    FSTP float ptr [ESP + 0x170]        ; 004da211
    MOV EAX,dword ptr [ESP + 0x170]     ; 004da218
    FSTP float ptr [ESP + 0x164]        ; 004da21f
    MOV dword ptr [ESP + 0x15c],EAX     ; 004da226
    LEA EAX,[ESP + 0x88]                ; 004da22d
    LEA EBX,[ESP + 0xa0]                ; 004da234
    PUSH EAX                            ; 004da23b
    LEA EAX,[ESP + 0x4c]                ; 004da23c
    FSTP float ptr [ESP + 0x170]        ; 004da240
    PUSH EAX                            ; 004da247
    MOVSD ES:EDI,ESI                    ; 004da248
    MOVSD ES:EDI,ESI                    ; 004da249
    MOVSD ES:EDI,ESI                    ; 004da24a
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 004da24b
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004da250
    LEA ESI,[ESP + 0xe8]                ; 004da253
    XOR EDI,EDI                         ; 004da25a
    CALL engine_matrix.c_invertTransformMatrix_FUN_004e8730 ; 004da25c
        ;   XREF to: 004e8730 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_invertTransformMatrix_FUN_004e8730()
    FLD float ptr [ESP + 0x164]         ; 004da261
    FCHS                                ; 004da268
    FSTP float ptr [ESP + 0x170]        ; 004da26a
    MOV EAX,dword ptr [ESP + 0x170]     ; 004da271
    FLD float ptr [ESP + 0x160]         ; 004da278
    MOV dword ptr [ESP + 0xd4],EAX      ; 004da27f
    LEA EAX,[ESP + 0xd0]                ; 004da286
    FCHS                                ; 004da28d
    PUSH EAX                            ; 004da28f
    LEA EAX,[ESP + 0x4c]                ; 004da290
    MOV dword ptr [ESP + 0xdc],EDI      ; 004da294
    PUSH EAX                            ; 004da29b
    FSTP float ptr [ESP + 0xd8]         ; 004da29c
    LEA EDI,[ESP + 0x120]               ; 004da2a3
    CALL core_dirmat.cpp_FUN_00449530   ; 004da2aa
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0xf0]                ; 004da2af
    ADD ESP,0x8                         ; 004da2b6
    LEA EAX,[ESP + 0x118]               ; 004da2b9
    MOVSD ES:EDI,ESI                    ; 004da2c0
    MOVSD ES:EDI,ESI                    ; 004da2c1
    MOVSD ES:EDI,ESI                    ; 004da2c2
    CMP EBX,EAX                         ; 004da2c3
    JZ 0x004da2f1                       ; 004da2c5
        ;   XREF to: 004da2f1 (CONDITIONAL_JUMP)  ; LAB_004da2f1
    MOV EAX,dword ptr [ESP + 0x118]     ; 004da2c7
    MOV dword ptr [ESP + 0xa0],EAX      ; 004da2ce
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004da2d5
    MOV dword ptr [ESP + 0xa4],EAX      ; 004da2dc
    MOV EAX,dword ptr [ESP + 0x120]     ; 004da2e3
    MOV dword ptr [ESP + 0xa8],EAX      ; 004da2ea
    FLD float ptr [ESP + 0x16c]         ; 004da2f1
        ;   Label: LAB_004da2f1
    LEA ESI,[ESP + 0xf4]                ; 004da2f8
    FADD float ptr [ESP + 0xa4]         ; 004da2ff
    SUB ESP,0x4                         ; 004da306
    FLD float ptr [ESP + 0x16c]         ; 004da309
    FXCH                                ; 004da310
    FSTP float ptr [ESP]                ; 004da312
    FADD float ptr [ESP + 0xa4]         ; 004da315
    SUB ESP,0x4                         ; 004da31c
    LEA EDI,[ESP + 0xcc]                ; 004da31f
    FSTP float ptr [ESP]                ; 004da326
    CALL core_inv.cpp_FUN_004d9ff0      ; 004da329
        ;   XREF to: 004d9ff0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004d9ff0()
    LEA ESI,[ESP + 0xfc]                ; 004da32e
    LEA EAX,[ESP + 0xcc]                ; 004da335
    ADD ESP,0x8                         ; 004da33c
    MOV EBX,dword ptr [0x0060b280]      ; 004da33f | DAT_0060b280
    MOVSD ES:EDI,ESI                    ; 004da345
    MOVSD ES:EDI,ESI                    ; 004da346
    MOVSD ES:EDI,ESI                    ; 004da347
    PUSH EAX                            ; 004da348
    MOV EAX,dword ptr [EBX]             ; 004da349
    PUSH EAX                            ; 004da34b
    CALL engine_special.cpp_FUN_0055d723 ; 004da34c
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004da351
    FLD float ptr [ESP + 0x164]         ; 004da354
    MOV EAX,dword ptr [ESP + 0x160]     ; 004da35b
    FCHS                                ; 004da362
    FSTP float ptr [ESP + 0x170]        ; 004da364
    MOV dword ptr [ESP + 0x13c],EAX     ; 004da36b
    MOV EAX,dword ptr [ESP + 0x170]     ; 004da372
    MOV dword ptr [ESP + 0x140],EAX     ; 004da379
    XOR EAX,EAX                         ; 004da380
    MOV dword ptr [ESP + 0x144],EAX     ; 004da382
    LEA EAX,[ESP + 0x13c]               ; 004da389
    PUSH EAX                            ; 004da390
    LEA EAX,[ESP + 0x4c]                ; 004da391
    LEA ESI,[ESP + 0x110]               ; 004da395
    PUSH EAX                            ; 004da39c
    LEA EDI,[ESP + 0x78]                ; 004da39d
    LEA EBX,[ESP + 0xa8]                ; 004da3a1
    CALL core_dirmat.cpp_FUN_00449530   ; 004da3a8
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x114]               ; 004da3ad
    ADD ESP,0x8                         ; 004da3b4
    LEA EAX,[ESP + 0x70]                ; 004da3b7
    MOVSD ES:EDI,ESI                    ; 004da3bb
    MOVSD ES:EDI,ESI                    ; 004da3bc
    MOVSD ES:EDI,ESI                    ; 004da3bd
    CMP EBX,EAX                         ; 004da3be
    JZ 0x004da3e3                       ; 004da3c0
        ;   XREF to: 004da3e3 (CONDITIONAL_JUMP)  ; LAB_004da3e3
    MOV EAX,dword ptr [ESP + 0x70]      ; 004da3c2
    MOV dword ptr [ESP + 0xa0],EAX      ; 004da3c6
    MOV EAX,dword ptr [ESP + 0x74]      ; 004da3cd
    MOV dword ptr [ESP + 0xa4],EAX      ; 004da3d1
    MOV EAX,dword ptr [ESP + 0x78]      ; 004da3d8
    MOV dword ptr [ESP + 0xa8],EAX      ; 004da3dc
    FLD float ptr [ESP + 0x16c]         ; 004da3e3
        ;   Label: LAB_004da3e3
    LEA ESI,[ESP + 0x148]               ; 004da3ea
    FADD float ptr [ESP + 0xa4]         ; 004da3f1
    SUB ESP,0x4                         ; 004da3f8
    FLD float ptr [ESP + 0x16c]         ; 004da3fb
    FXCH                                ; 004da402
    FSTP float ptr [ESP]                ; 004da404
    FADD float ptr [ESP + 0xa4]         ; 004da407
    SUB ESP,0x4                         ; 004da40e
    LEA EDI,[ESP + 0xcc]                ; 004da411
    FSTP float ptr [ESP]                ; 004da418
    CALL core_inv.cpp_FUN_004d9ff0      ; 004da41b
        ;   XREF to: 004d9ff0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004d9ff0()
    LEA ESI,[ESP + 0x150]               ; 004da420
    LEA EAX,[ESP + 0xcc]                ; 004da427
    ADD ESP,0x8                         ; 004da42e
    MOV EBX,dword ptr [0x0060b280]      ; 004da431 | DAT_0060b280
    MOVSD ES:EDI,ESI                    ; 004da437
    MOVSD ES:EDI,ESI                    ; 004da438
    MOVSD ES:EDI,ESI                    ; 004da439
    PUSH EAX                            ; 004da43a
    MOV EAX,dword ptr [EBX]             ; 004da43b
    ADD EAX,0x30                        ; 004da43d
    PUSH EAX                            ; 004da440
    CALL engine_special.cpp_FUN_0055d723 ; 004da441
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004da446
    MOV EAX,dword ptr [ESP + 0x160]     ; 004da449
    MOV dword ptr [ESP + 0x130],EAX     ; 004da450
    MOV EAX,dword ptr [ESP + 0x164]     ; 004da457
    LEA ESI,[ESP + 0x7c]                ; 004da45e
    MOV dword ptr [ESP + 0x134],EAX     ; 004da462
    LEA EAX,[ESP + 0x130]               ; 004da469
    LEA EDI,[ESP + 0x124]               ; 004da470
    PUSH EAX                            ; 004da477
    LEA EAX,[ESP + 0x4c]                ; 004da478
    XOR EDX,EDX                         ; 004da47c
    PUSH EAX                            ; 004da47e
    LEA EBX,[ESP + 0xa8]                ; 004da47f
    MOV dword ptr [ESP + 0x140],EDX     ; 004da486
    CALL core_dirmat.cpp_FUN_00449530   ; 004da48d
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x84]                ; 004da492
    ADD ESP,0x8                         ; 004da499
    LEA EAX,[ESP + 0x124]               ; 004da49c
    MOVSD ES:EDI,ESI                    ; 004da4a3
    MOVSD ES:EDI,ESI                    ; 004da4a4
    MOVSD ES:EDI,ESI                    ; 004da4a5
    CMP EBX,EAX                         ; 004da4a6
    JZ 0x004da4d4                       ; 004da4a8
        ;   XREF to: 004da4d4 (CONDITIONAL_JUMP)  ; LAB_004da4d4
    MOV EAX,dword ptr [ESP + 0x124]     ; 004da4aa
    MOV dword ptr [ESP + 0xa0],EAX      ; 004da4b1
    MOV EAX,dword ptr [ESP + 0x128]     ; 004da4b8
    MOV dword ptr [ESP + 0xa4],EAX      ; 004da4bf
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004da4c6
    MOV dword ptr [ESP + 0xa8],EAX      ; 004da4cd
    FLD float ptr [ESP + 0x16c]         ; 004da4d4
        ;   Label: LAB_004da4d4
    LEA ESI,[ESP + 0x94]                ; 004da4db
    FADD float ptr [ESP + 0xa4]         ; 004da4e2
    SUB ESP,0x4                         ; 004da4e9
    FLD float ptr [ESP + 0x16c]         ; 004da4ec
    FXCH                                ; 004da4f3
    FSTP float ptr [ESP]                ; 004da4f5
    FADD float ptr [ESP + 0xa4]         ; 004da4f8
    SUB ESP,0x4                         ; 004da4ff
    LEA EDI,[ESP + 0xcc]                ; 004da502
    FSTP float ptr [ESP]                ; 004da509
    CALL core_inv.cpp_FUN_004d9ff0      ; 004da50c
        ;   XREF to: 004d9ff0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004d9ff0()
    LEA ESI,[ESP + 0x9c]                ; 004da511
    LEA EAX,[ESP + 0xcc]                ; 004da518
    ADD ESP,0x8                         ; 004da51f
    MOV EBX,dword ptr [0x0060b280]      ; 004da522 | DAT_0060b280
    MOVSD ES:EDI,ESI                    ; 004da528
    MOVSD ES:EDI,ESI                    ; 004da529
    MOVSD ES:EDI,ESI                    ; 004da52a
    PUSH EAX                            ; 004da52b
    MOV EAX,dword ptr [EBX]             ; 004da52c
    ADD EAX,0x60                        ; 004da52e
    PUSH EAX                            ; 004da531
    LEA ESI,[ESP + 0xc0]                ; 004da532
    LEA EDI,[ESP + 0xb4]                ; 004da539
    CALL engine_special.cpp_FUN_0055d723 ; 004da540
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0xb4]                ; 004da545
    ADD ESP,0x8                         ; 004da54c
    XOR ECX,ECX                         ; 004da54f
    MOV EAX,dword ptr [ESP + 0x164]     ; 004da551
    FLD float ptr [ESP + 0x160]         ; 004da558
    MOV dword ptr [ESP + 0x104],EAX     ; 004da55f
    LEA EAX,[ESP + 0x100]               ; 004da566
    FCHS                                ; 004da56d
    PUSH EAX                            ; 004da56f
    LEA EAX,[ESP + 0x4c]                ; 004da570
    MOV dword ptr [ESP + 0x10c],ECX     ; 004da574
    PUSH EAX                            ; 004da57b
    FSTP float ptr [ESP + 0x108]        ; 004da57c
    CALL core_dirmat.cpp_FUN_00449530   ; 004da583
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0xc0]                ; 004da588
    ADD ESP,0x8                         ; 004da58f
    LEA EAX,[ESP + 0xa0]                ; 004da592
    MOVSD ES:EDI,ESI                    ; 004da599
    MOVSD ES:EDI,ESI                    ; 004da59a
    MOVSD ES:EDI,ESI                    ; 004da59b
    CMP EAX,EBX                         ; 004da59c
    JZ 0x004da5ca                       ; 004da59e
        ;   XREF to: 004da5ca (CONDITIONAL_JUMP)  ; LAB_004da5ca
    MOV EAX,dword ptr [ESP + 0xac]      ; 004da5a0
    MOV dword ptr [ESP + 0xa0],EAX      ; 004da5a7
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004da5ae
    MOV dword ptr [ESP + 0xa4],EAX      ; 004da5b5
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004da5bc
    MOV dword ptr [ESP + 0xa8],EAX      ; 004da5c3
    FLD float ptr [ESP + 0x16c]         ; 004da5ca
        ;   Label: LAB_004da5ca
    LEA ESI,[ESP + 0xdc]                ; 004da5d1
    FADD float ptr [ESP + 0xa4]         ; 004da5d8
    SUB ESP,0x4                         ; 004da5df
    FLD float ptr [ESP + 0x16c]         ; 004da5e2
    FXCH                                ; 004da5e9
    FSTP float ptr [ESP]                ; 004da5eb
    FADD float ptr [ESP + 0xa4]         ; 004da5ee
    SUB ESP,0x4                         ; 004da5f5
    LEA EDI,[ESP + 0xcc]                ; 004da5f8
    FSTP float ptr [ESP]                ; 004da5ff
    CALL core_inv.cpp_FUN_004d9ff0      ; 004da602
        ;   XREF to: 004d9ff0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004d9ff0()
    LEA ESI,[ESP + 0xe4]                ; 004da607
    ADD ESP,0x8                         ; 004da60e
    MOV EAX,[0x0060b280]                ; 004da611 | DAT_0060b280
    MOVSD ES:EDI,ESI                    ; 004da616
    MOVSD ES:EDI,ESI                    ; 004da617
    MOVSD ES:EDI,ESI                    ; 004da618
    LEA EBX,[ESP + 0xc4]                ; 004da619
    MOV EAX,dword ptr [EAX]             ; 004da620
    PUSH EBX                            ; 004da622
    ADD EAX,0x90                        ; 004da623
    PUSH EAX                            ; 004da628
    XOR ESI,ESI                         ; 004da629
    CALL engine_special.cpp_FUN_0055d723 ; 004da62b
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EBX,0x4                         ; 004da630
    MOV EDX,0x1                         ; 004da635
    ADD ESP,0x8                         ; 004da63a
    MOV ECX,0x1000000                   ; 004da63d
    MOV dword ptr [ESP + 0x4],EBX       ; 004da642
    MOV dword ptr [ESP + 0x18],ESI      ; 004da646
    MOV dword ptr [ESP + 0x1c],ESI      ; 004da64a
    MOV dword ptr [ESP + 0x20],ESI      ; 004da64e
    MOV dword ptr [ESP + 0x24],EDX      ; 004da652
    MOV dword ptr [ESP + 0x28],ECX      ; 004da656
    MOV dword ptr [ESP + 0x2c],ESI      ; 004da65a
    MOV EDI,ECX                         ; 004da65e
    MOV dword ptr [ESP + 0x34],ECX      ; 004da660
    MOV dword ptr [ESP + 0x38],ECX      ; 004da664
    MOV ESI,0x2                         ; 004da668
    MOV EDX,0x3                         ; 004da66d
    XOR ECX,ECX                         ; 004da672
    MOV dword ptr [ESP + 0x30],ESI      ; 004da674
    PUSH ECX                            ; 004da678
    MOV ESI,dword ptr [0x0060b280]      ; 004da679 | DAT_0060b280
    MOV dword ptr [ESP + 0x48],EDI      ; 004da67f
    PUSH ESI                            ; 004da683
    MOV dword ptr [ESP + 0x44],EDX      ; 004da684
    MOV dword ptr [ESP + 0x48],ECX      ; 004da688
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880 ; 004da68c
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 004da691
    PUSH 0x0                            ; 004da694
    MOV EDI,dword ptr [0x0060b280]      ; 004da696 | DAT_0060b280
    PUSH EDI                            ; 004da69c
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870 ; 004da69d
        ;   XREF to: 0046b870 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 004da6a2
    PUSH 0xffff                         ; 004da6a5
    MOV EAX,[0x0060b280]                ; 004da6aa | DAT_0060b280
    PUSH EAX                            ; 004da6af
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 004da6b0
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004da6b5
    PUSH 0x1d02ee4                      ; 004da6b8
    MOV EDX,dword ptr [0x0060b280]      ; 004da6bd | DAT_0060b280
    PUSH EDX                            ; 004da6c3
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 004da6c4
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004da6c9
    PUSH 0x23                           ; 004da6cc
    LEA EAX,[ESP + 0x4]                 ; 004da6ce
    PUSH EAX                            ; 004da6d2
    MOV ECX,dword ptr [0x0060b280]      ; 004da6d3 | DAT_0060b280
    PUSH ECX                            ; 004da6d9
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00 ; 004da6da
        ;   XREF to: 00469d00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly, int render_flags)
    ADD ESP,0xc                         ; 004da6df
    PUSH 0x1                            ; 004da6e2
    MOV EBX,dword ptr [0x0060b280]      ; 004da6e4 | DAT_0060b280
    PUSH EBX                            ; 004da6ea
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870 ; 004da6eb
        ;   XREF to: 0046b870 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 004da6f0
    MOV dword ptr [0x01c37788],EBP      ; 004da6f3 | DAT_01c37788
    ADD ESP,0x174                       ; 004da6f9
    POP EBP                             ; 004da6ff
    POP EDI                             ; 004da700
    POP ESI                             ; 004da701
    POP EBX                             ; 004da702
    LEA EAX,[EAX]                       ; 004da703
    LEA EDX,[EDX]                       ; 004da709
    NOP                                 ; 004da70f
    RET                                 ; 004da710

