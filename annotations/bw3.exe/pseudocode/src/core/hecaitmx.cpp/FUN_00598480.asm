; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_hecaitmx_cpp_FUN_00598480(CCharacter *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01d8e40c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_box.cpp_FUN_0041daf0
;   core_charactr.cpp_FUN_0042f310
;   core_motion.cpp_FUN_004fcdc0
;   core_skeleton.cpp_FUN_0054e3a0
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00598480
        ;   Label: core_hecaitmx.cpp_FUN_00598480
    PUSH EBP                            ; 00598481
    SUB ESP,0x30                        ; 00598482
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00598485
    CMP dword ptr [EBX + 0xcdd0],0x0    ; 00598489
    JZ 0x0059849a                       ; 00598490
        ;   XREF to: 0059849a (CONDITIONAL_JUMP)  ; LAB_0059849a
    XOR EAX,EAX                         ; 00598492
    ADD ESP,0x30                        ; 00598494
    POP EBP                             ; 00598497
    POP EBX                             ; 00598498
    RET                                 ; 00598499
    PUSH EDI                            ; 0059849a
        ;   Label: LAB_0059849a
    PUSH ESI                            ; 0059849b
    PUSH EBX                            ; 0059849c
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 0059849d
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005984a2
    PUSH 0x0                            ; 005984a5
    MOV EAX,dword ptr [EBX + 0x154]     ; 005984a7
    PUSH EBX                            ; 005984ad
    LEA ESI,[ESP + 0x28]                ; 005984ae
    LEA EDI,[ESP + 0x10]                ; 005984b2
    CALL dword ptr [EAX + 0x1c]         ; 005984b6
    MOV ECX,0x6                         ; 005984b9
    ADD ESP,0x4                         ; 005984be
    LEA EAX,[ESP + 0xc]                 ; 005984c1
    LEA ESI,[ESP + 0x24]                ; 005984c5
    PUSH EAX                            ; 005984c9
    MOVSD.REP ES:EDI,ESI                ; 005984ca
    CALL core_box.cpp_FUN_0041daf0      ; 005984cc
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 005984d1
    TEST EAX,EAX                        ; 005984d4
    JZ 0x00598572                       ; 005984d6
        ;   XREF to: 00598572 (CONDITIONAL_JUMP)  ; LAB_00598572
    MOV ECX,dword ptr [EBX + 0xd074]    ; 005984dc
    PUSH ECX                            ; 005984e2
    MOV ESI,dword ptr [0x005f2afc]      ; 005984e3 | DAT_005f2afc
    PUSH ESI                            ; 005984e9 | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x27bc],0x1    ; 005984ea
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 005984f4
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 005984f9
    PUSH 0x0                            ; 005984fc
    MOV EDI,dword ptr [0x005f2afc]      ; 005984fe | DAT_005f2afc
    PUSH EDI                            ; 00598504 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 00598505
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0059850a
    PUSH 0x1                            ; 0059850d
    MOV EBP,dword ptr [0x005f2afc]      ; 0059850f | DAT_005f2afc
    PUSH EBP                            ; 00598515 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120 ; 00598516
        ;   XREF to: 0046e120 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(CDemonRenderer * this_ptr, int enable_advanced_mode)
    ADD ESP,0x8                         ; 0059851b
    PUSH 0x0                            ; 0059851e
    PUSH 0x1                            ; 00598520
    PUSH 0x2e7                          ; 00598522
    PUSH -0x1                           ; 00598527
    LEA ESI,[EBX + 0x158]               ; 00598529
    PUSH ESI                            ; 0059852f
    CALL core_skeleton.cpp_FUN_0054e3a0 ; 00598530
        ;   XREF to: 0054e3a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054e3a0(CDeformableModelInstance * this_ptr, int lod_index, uint render_flags, int lighting_mode, ...)
    ADD ESP,0x14                        ; 00598535
    MOV EAX,[0x005f2afc]                ; 00598538 | DAT_005f2afc
    PUSH EAX                            ; 0059853d | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0 ; 0059853e
        ;   XREF to: 0046e4e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(CDemonRenderer * this_ptr)
    MOV EDX,dword ptr [0x01d8e40c]      ; 00598543 | DAT_01d8e40c
    ADD ESP,0x4                         ; 00598549
    TEST EDX,EDX                        ; 0059854c
    JZ 0x0059855a                       ; 0059854e
        ;   XREF to: 0059855a (CONDITIONAL_JUMP)  ; LAB_0059855a
    PUSH EBX                            ; 00598550
    PUSH ESI                            ; 00598551
    CALL core_motion.cpp_FUN_004fcdc0   ; 00598552
        ;   XREF to: 004fcdc0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_004fcdc0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00598557
    FLD float ptr [EBX + 0x3254]        ; 0059855a
        ;   Label: LAB_0059855a
    FLDZ                                ; 00598560
    FCOMPP                              ; 00598562
    FNSTSW AX                           ; 00598564
    SAHF                                ; 00598566
    JNC 0x00598572                      ; 00598567
        ;   XREF to: 00598572 (CONDITIONAL_JUMP)  ; LAB_00598572
    PUSH EBX                            ; 00598569
    CALL core_charactr.cpp_FUN_0042f310 ; 0059856a
        ;   XREF to: 0042f310 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042f310(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0059856f
    PUSH EBX                            ; 00598572
        ;   Label: LAB_00598572
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 00598573
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00598578
    MOV EAX,dword ptr [EBX + 0x27bc]    ; 0059857b
    POP ESI                             ; 00598581
    POP EDI                             ; 00598582
    ADD ESP,0x30                        ; 00598583
    POP EBP                             ; 00598586
    POP EBX                             ; 00598587
    RET                                 ; 00598588

