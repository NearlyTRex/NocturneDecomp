; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_glass_cpp_FUN_004ac440(int param_1)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
;
; Referenced Globals:
;   undefined4 DAT_0059e390
;   undefined4 DAT_005ae704
;   undefined4 DAT_005be368
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c038f4
;   undefined4 DAT_01e57284
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004ac440
        ;   Label: core_glass.cpp_FUN_004ac440
    PUSH EDI                            ; 004ac441
    PUSH EBP                            ; 004ac442
    SUB ESP,0x1c                        ; 004ac443
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004ac446
    CMP dword ptr [EBP + 0x368],0x0     ; 004ac44a
    JNZ 0x004ac472                      ; 004ac451
        ;   XREF to: 004ac472 (CONDITIONAL_JUMP)  ; LAB_004ac472
    CMP dword ptr [EBP + 0xfc],0x0      ; 004ac453
    JNZ 0x004ac472                      ; 004ac45a
        ;   XREF to: 004ac472 (CONDITIONAL_JUMP)  ; LAB_004ac472
    CMP dword ptr [EBP + 0x174],0xfde8  ; 004ac45c
    JL 0x004ac472                       ; 004ac466
        ;   XREF to: 004ac472 (CONDITIONAL_JUMP)  ; LAB_004ac472
    MOV ESI,dword ptr [EBP + 0x178]     ; 004ac468
    TEST ESI,ESI                        ; 004ac46e
    JZ 0x004ac47b                       ; 004ac470
        ;   XREF to: 004ac47b (CONDITIONAL_JUMP)  ; LAB_004ac47b
    XOR EAX,EAX                         ; 004ac472
        ;   Label: LAB_004ac472
    ADD ESP,0x1c                        ; 004ac474
    POP EBP                             ; 004ac477
    POP EDI                             ; 004ac478
    POP ESI                             ; 004ac479
    RET                                 ; 004ac47a
    MOV EDI,dword ptr [0x005ae704]      ; 004ac47b | DAT_005ae704
        ;   Label: LAB_004ac47b
    PUSH EDI                            ; 004ac481 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 004ac482
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090()
    ADD ESP,0x4                         ; 004ac487
    TEST EAX,EAX                        ; 004ac48a
    JNZ 0x004ac472                      ; 004ac48c
        ;   XREF to: 004ac472 (CONDITIONAL_JUMP)  ; LAB_004ac472
    PUSH EBX                            ; 004ac48e
    PUSH EBP                            ; 004ac48f
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 004ac490
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20()
    ADD ESP,0x4                         ; 004ac495
    PUSH ESI                            ; 004ac498
    LEA EAX,[ESP + 0x8]                 ; 004ac499
    PUSH EAX                            ; 004ac49d
    MOV EDX,dword ptr [EBP + 0x14c]     ; 004ac49e
    PUSH EBP                            ; 004ac4a4
    CALL dword ptr [EDX + 0x14]         ; 004ac4a5
    ADD ESP,0x8                         ; 004ac4a8
    PUSH EAX                            ; 004ac4ab
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 004ac4ac
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0()
    ADD ESP,0x8                         ; 004ac4b1
    MOV dword ptr [ESP + 0x1c],EAX      ; 004ac4b4
    LEA EAX,[EBP + 0x15c]               ; 004ac4b8
    PUSH EAX                            ; 004ac4be
    MOV EAX,[0x005ae704]                ; 004ac4bf | DAT_005ae704
    PUSH EAX                            ; 004ac4c4 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004ac4c5
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0()
    LEA EDX,[EBP + 0x384]               ; 004ac4ca
    ADD ESP,0x8                         ; 004ac4d0
    LEA EDI,[EBP + 0x4b0]               ; 004ac4d3
    MOV EBX,dword ptr [EBP + 0xb2c]     ; 004ac4d9
    MOV ECX,EDI                         ; 004ac4df
    TEST EBX,EBX                        ; 004ac4e1
    JLE 0x004ac520                      ; 004ac4e3
        ;   XREF to: 004ac520 (CONDITIONAL_JUMP)  ; LAB_004ac520
    MOV EBX,ECX                         ; 004ac4e5
        ;   Label: LAB_004ac4e5
    MOV EAX,EDX                         ; 004ac4e7
    FLD float ptr [EAX]                 ; 004ac4e9
    FMUL float ptr [0x0059e390]         ; 004ac4eb | DAT_0059e390
    FISTP dword ptr [EBX]               ; 004ac4f1
    FLD float ptr [EAX + 0x4]           ; 004ac4f3
    FMUL float ptr [0x0059e390]         ; 004ac4f6 | DAT_0059e390
    FISTP dword ptr [EBX + 0x4]         ; 004ac4fc
    FLD float ptr [EAX + 0x8]           ; 004ac4ff
    FMUL float ptr [0x0059e390]         ; 004ac502 | DAT_0059e390
    FISTP dword ptr [EBX + 0x8]         ; 004ac508
    INC ESI                             ; 004ac50b
    ADD EDX,0xc                         ; 004ac50c
    MOV EAX,dword ptr [EBP + 0xb2c]     ; 004ac50f
    ADD ECX,0xc                         ; 004ac515
    CMP ESI,EAX                         ; 004ac518
    JL 0x004ac4e5                       ; 004ac51a
        ;   XREF to: 004ac4e5 (CONDITIONAL_JUMP)  ; LAB_004ac4e5
    LEA EAX,[EAX]                       ; 004ac51c
    PUSH EDI                            ; 004ac520
        ;   Label: LAB_004ac520
    MOV EDX,dword ptr [EBP + 0xb2c]     ; 004ac521
    PUSH EDX                            ; 004ac527
    MOV ECX,dword ptr [0x005be368]      ; 004ac528 | DAT_005be368
    PUSH ECX                            ; 004ac52e | DAT_01e57284
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200 ; 004ac52f
        ;   XREF to: 0050c200 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200()
    MOV EAX,0xffff                      ; 004ac534
    MOV EBX,dword ptr [0x01c038f4]      ; 004ac539 | DAT_01c038f4
    ADD ESP,0xc                         ; 004ac53f
    MOV EDX,dword ptr [EBP + 0x174]     ; 004ac542
    SUB EAX,EBX                         ; 004ac548
    IMUL EDX                            ; 004ac54a
    SHRD EAX,EDX,0x10                   ; 004ac54c
    PUSH EAX                            ; 004ac550
    MOV ESI,dword ptr [0x005ae704]      ; 004ac551 | DAT_005ae704
    PUSH ESI                            ; 004ac557 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 004ac558
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010()
    ADD ESP,0x8                         ; 004ac55d
    PUSH 0x0                            ; 004ac560
    PUSH 0x4                            ; 004ac562
    PUSH EDI                            ; 004ac564
    LEA EDI,[EBP + 0x6a4]               ; 004ac565
    PUSH EDI                            ; 004ac56b
    MOV EAX,dword ptr [EBP + 0xb30]     ; 004ac56c
    PUSH EAX                            ; 004ac572
    MOV EDX,dword ptr [EBP + 0xb2c]     ; 004ac573
    PUSH EDX                            ; 004ac579
    MOV ECX,dword ptr [0x005be368]      ; 004ac57a | DAT_005be368
    PUSH ECX                            ; 004ac580 | DAT_01e57284
    XOR ESI,ESI                         ; 004ac581
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0 ; 004ac583
        ;   XREF to: 0050c2d0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0()
    MOV EBX,dword ptr [EBP + 0xb30]     ; 004ac588
    ADD ESP,0x1c                        ; 004ac58e
    TEST EBX,EBX                        ; 004ac591
    JLE 0x004ac5e0                      ; 004ac593
        ;   XREF to: 004ac5e0 (CONDITIONAL_JUMP)  ; LAB_004ac5e0
    MOV EBX,EBP                         ; 004ac595
    MOV EAX,[0x005ae704]                ; 004ac597 | DAT_005ae704
        ;   Label: LAB_004ac597
    MOV dword ptr [EBX + 0x6ac],0x0     ; 004ac59c
    PUSH EDI                            ; 004ac5a6
    MOV dword ptr [EBX + 0x6b0],0x0     ; 004ac5a7
    INC ESI                             ; 004ac5b1
    MOV dword ptr [EBX + 0x6b4],0x0     ; 004ac5b2
    PUSH EAX                            ; 004ac5bc | DAT_01b4d738
    MOV dword ptr [EBX + 0x6b8],0x0     ; 004ac5bd
    ADD EBX,0x48                        ; 004ac5c7
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370 ; 004ac5ca
        ;   XREF to: 00460370 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370()
    ADD EDI,0x48                        ; 004ac5cf
    MOV EDX,dword ptr [EBP + 0xb30]     ; 004ac5d2
    ADD ESP,0x8                         ; 004ac5d8
    CMP ESI,EDX                         ; 004ac5db
    JL 0x004ac597                       ; 004ac5dd
        ;   XREF to: 004ac597 (CONDITIONAL_JUMP)  ; LAB_004ac597
    NOP                                 ; 004ac5df
    PUSH EBP                            ; 004ac5e0
        ;   Label: LAB_004ac5e0
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004ac5e1
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 004ac5e6
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004ac5e9
    POP EBX                             ; 004ac5ed
    ADD ESP,0x1c                        ; 004ac5ee
    POP EBP                             ; 004ac5f1
    POP EDI                             ; 004ac5f2
    POP ESI                             ; 004ac5f3
    RET                                 ; 004ac5f4

