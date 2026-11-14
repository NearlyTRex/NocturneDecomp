; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_render_FUN_0043f460(CCloth *this_ptr,CDeformableModelInstance *deformable_model)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; CDeformableModelInstance * Stack[0x8]:4   deformable_model
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_cloth.cpp_CClothList_render_FUN_0043fc50 at 0043fca6
;
; Referenced Globals:
;   undefined4 DAT_005b91d8
;   undefined4 DAT_005f2afc
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_007e6564
;   undefined4 DAT_007e6568
;   undefined4 DAT_007e657c
;   undefined4 DAT_007e6580
;   undefined4 DAT_007e6584
;   undefined4 DAT_007e6588
;   undefined4 DAT_007e658c
;   undefined4 DAT_007e6590
;   undefined4 DAT_007e65ac
;   undefined4 DAT_007e65b0
;   undefined4 DAT_007e65f4
;   undefined4 DAT_01bdd7e4
;   ... and 1 more
;
; Called Functions:
;   core_set.cpp_CDemonSet_lightVerticies_FUN_00538dd0
;   core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_0053ab80
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_00538ad0
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460
;   engine_texture.cpp_FUN_0056aa10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043f460
        ;   Label: core_cloth.cpp_CCloth_render_FUN_0043f460
    PUSH ESI                            ; 0043f461
    PUSH EDI                            ; 0043f462
    PUSH EBP                            ; 0043f463
    SUB ESP,0x14                        ; 0043f464
    MOV EBP,dword ptr [ESP + 0x28]      ; 0043f467
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0043f46b
    MOV EDX,dword ptr [EBP + 0x10c]     ; 0043f46f
    PUSH EDX                            ; 0043f475
    MOV ECX,dword ptr [EBP + 0x104]     ; 0043f476
    PUSH ECX                            ; 0043f47c
    MOV ESI,dword ptr [0x00603b28]      ; 0043f47d | g_CDemonSetPtr
    PUSH ESI                            ; 0043f483 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_00538ad0 ; 0043f484
        ;   XREF to: 00538ad0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVerticies_FUN_00538ad0(CDemonSet * this_ptr, int vertex_count, CVector3i * input_vertices)
    ADD ESP,0xc                         ; 0043f489
    PUSH 0x1                            ; 0043f48c
    MOV EDI,dword ptr [0x005f2afc]      ; 0043f48e | DAT_005f2afc
    PUSH EDI                            ; 0043f494 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 0043f495
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0043f49a
    PUSH 0xffff                         ; 0043f49d
    MOV EAX,[0x005f2afc]                ; 0043f4a2 | DAT_005f2afc
    PUSH EAX                            ; 0043f4a7 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 0043f4a8
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0043f4ad
    MOV EDX,dword ptr [0x005f2afc]      ; 0043f4b0 | DAT_005f2afc
    PUSH EDX                            ; 0043f4b6 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 0043f4b7
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    FLD float ptr [EBP + 0x37b18]       ; 0043f4bc
    FMUL double ptr [0x005b91d8]        ; 0043f4c2 | DAT_005b91d8
    ADD ESP,0x4                         ; 0043f4c8
    CALL crt_math.c_round_FUN_005a3120  ; 0043f4cb
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x4]         ; 0043f4d0
    MOV ECX,dword ptr [ESP + 0x4]       ; 0043f4d4
    CMP ECX,0x3e8                       ; 0043f4d8
    JL 0x0043f684                       ; 0043f4de
        ;   XREF to: 0043f684 (CONDITIONAL_JUMP)  ; LAB_0043f684
    CMP ECX,0xf618                      ; 0043f4e4
    JL 0x0043f68c                       ; 0043f4ea
        ;   XREF to: 0043f68c (CONDITIONAL_JUMP)  ; LAB_0043f68c
    LEA EAX,[EBP + 0x124]               ; 0043f4f0
        ;   Label: LAB_0043f4f0
    PUSH EAX                            ; 0043f4f6
    CALL engine_texture.cpp_FUN_0056aa10 ; 0043f4f7
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056aa10()
    MOV EDX,dword ptr [EBP + 0x37b48]   ; 0043f4fc
    ADD ESP,0x4                         ; 0043f502
    TEST EDX,EDX                        ; 0043f505
    JNZ 0x0043f6f6                      ; 0043f507
        ;   XREF to: 0043f6f6 (CONDITIONAL_JUMP)  ; LAB_0043f6f6
    MOV EAX,dword ptr [EBP + 0x110]     ; 0043f50d
    PUSH EDX                            ; 0043f513
    MOV EDX,EAX                         ; 0043f514
    SAR EDX,0x1f                        ; 0043f516
    SUB EAX,EDX                         ; 0043f519
    SAR EAX,0x1                         ; 0043f51b
    PUSH 0x4                            ; 0043f51d
    MOV ESI,dword ptr [EBP + 0x10c]     ; 0043f51f
    PUSH ESI                            ; 0043f525
    MOV EDI,dword ptr [EBP + 0x114]     ; 0043f526
    PUSH EDI                            ; 0043f52c
    PUSH EAX                            ; 0043f52d
    MOV EAX,dword ptr [EBP + 0x104]     ; 0043f52e
    PUSH EAX                            ; 0043f534
    MOV EDX,dword ptr [0x00603b28]      ; 0043f535 | g_CDemonSetPtr
    PUSH EDX                            ; 0043f53b | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_00538dd0 ; 0043f53c
        ;   XREF to: 00538dd0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_00538dd0(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    ADD ESP,0x1c                        ; 0043f541
    TEST EBX,EBX                        ; 0043f544
    JZ 0x0043f5a0                       ; 0043f546
        ;   XREF to: 0043f5a0 (CONDITIONAL_JUMP)  ; LAB_0043f5a0
    MOV ECX,dword ptr [EBP + 0x39ce8]   ; 0043f548
    XOR EBX,EBX                         ; 0043f54e
    TEST ECX,ECX                        ; 0043f550
    JLE 0x0043f5a0                      ; 0043f552
        ;   XREF to: 0043f5a0 (CONDITIONAL_JUMP)  ; LAB_0043f5a0
    MOV EAX,EBP                         ; 0043f554
    MOV EDX,dword ptr [EAX + 0x39cec]   ; 0043f556
        ;   Label: LAB_0043f556
    IMUL EDX,EDX,0x30                   ; 0043f55c
    MOV ECX,dword ptr [0x005f2afc]      ; 0043f55f | DAT_005f2afc
    MOV ESI,dword ptr [ECX]             ; 0043f565 | DAT_01bdd7e4
    ADD ESI,EDX                         ; 0043f567
    MOV dword ptr [ESP],ESI             ; 0043f569
    MOV EDI,dword ptr [ESP]             ; 0043f56c
    MOV ESI,dword ptr [EAX + 0x3a64c]   ; 0043f56f
    MOV dword ptr [EDI + 0x20],ESI      ; 0043f575
    MOV ESI,dword ptr [ECX]             ; 0043f578 | DAT_01bdd7e4
    MOV EDI,dword ptr [EAX + 0x3a7dc]   ; 0043f57a
    MOV dword ptr [EDX + ESI*0x1 + 0x24],EDI ; 0043f580
    MOV ECX,dword ptr [ECX]             ; 0043f584 | DAT_01bdd7e4
    ADD EDX,ECX                         ; 0043f586
    MOV ECX,dword ptr [EAX + 0x3a96c]   ; 0043f588
    MOV dword ptr [EDX + 0x28],ECX      ; 0043f58e
    INC EBX                             ; 0043f591
    MOV ESI,dword ptr [EBP + 0x39ce8]   ; 0043f592
    ADD EAX,0x4                         ; 0043f598
    CMP EBX,ESI                         ; 0043f59b
    JL 0x0043f556                       ; 0043f59d
        ;   XREF to: 0043f556 (CONDITIONAL_JUMP)  ; LAB_0043f556
    NOP                                 ; 0043f59f
    CMP dword ptr [ESP + 0x4],0xf618    ; 0043f5a0
        ;   Label: LAB_0043f5a0
    JGE 0x0043f6a0                      ; 0043f5a8
        ;   XREF to: 0043f6a0 (CONDITIONAL_JUMP)  ; LAB_0043f6a0
    MOV EAX,dword ptr [EBP + 0x110]     ; 0043f5ae
    MOV EDX,EAX                         ; 0043f5b4
    SAR EDX,0x1f                        ; 0043f5b6
    SUB EAX,EDX                         ; 0043f5b9
    SAR EAX,0x1                         ; 0043f5bb
    PUSH 0x267                          ; 0043f5bd
    PUSH EAX                            ; 0043f5c2
    MOV ECX,dword ptr [EBP + 0x114]     ; 0043f5c3
    PUSH ECX                            ; 0043f5c9
    MOV EBX,dword ptr [0x00603b28]      ; 0043f5ca | g_CDemonSetPtr
    PUSH EBX                            ; 0043f5d0 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_0053ab80 ; 0043f5d1
        ;   XREF to: 0053ab80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_0053ab80(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
        ;   Label: LAB_0043f5d1
    ADD ESP,0x10                        ; 0043f5d6
    MOV EAX,dword ptr [EBP + 0x110]     ; 0043f5d9
    MOV EDX,EAX                         ; 0043f5df
    SAR EDX,0x1f                        ; 0043f5e1
    SUB EAX,EDX                         ; 0043f5e4
    SAR EAX,0x1                         ; 0043f5e6
    PUSH 0x0                            ; 0043f5e8
    MOV EDX,EAX                         ; 0043f5ea
    SHL EAX,0x3                         ; 0043f5ec
    MOV ESI,dword ptr [EBP + 0x10c]     ; 0043f5ef
    LEA ECX,[EDX + EAX*0x1]             ; 0043f5f5
    PUSH 0x4                            ; 0043f5f8
    SHL ECX,0x3                         ; 0043f5fa
    MOV EAX,dword ptr [EBP + 0x114]     ; 0043f5fd
    PUSH ESI                            ; 0043f603
    ADD EAX,ECX                         ; 0043f604
    PUSH EAX                            ; 0043f606
    PUSH EDX                            ; 0043f607
    MOV EDI,dword ptr [EBP + 0x104]     ; 0043f608
    PUSH EDI                            ; 0043f60e
    MOV EAX,[0x00603b28]                ; 0043f60f | g_CDemonSetPtr
    PUSH EAX                            ; 0043f614 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_00538dd0 ; 0043f615
        ;   XREF to: 00538dd0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_00538dd0(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    ADD ESP,0x1c                        ; 0043f61a
    CMP dword ptr [ESP + 0x4],0xf618    ; 0043f61d
    JGE 0x0043f6c5                      ; 0043f625
        ;   XREF to: 0043f6c5 (CONDITIONAL_JUMP)  ; LAB_0043f6c5
    MOV EAX,dword ptr [EBP + 0x110]     ; 0043f62b
    MOV EDX,EAX                         ; 0043f631
    SAR EDX,0x1f                        ; 0043f633
    SUB EAX,EDX                         ; 0043f636
    SAR EAX,0x1                         ; 0043f638
    PUSH 0x267                          ; 0043f63a
    PUSH EAX                            ; 0043f63f
    MOV EDX,EAX                         ; 0043f640
    SHL EAX,0x3                         ; 0043f642
    ADD EDX,EAX                         ; 0043f645
    SHL EDX,0x3                         ; 0043f647
    MOV EAX,dword ptr [EBP + 0x114]     ; 0043f64a
    ADD EAX,EDX                         ; 0043f650
    PUSH EAX                            ; 0043f652
    MOV EBX,dword ptr [0x00603b28]      ; 0043f653 | g_CDemonSetPtr
        ;   Label: LAB_0043f653
    PUSH EBX                            ; 0043f659 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_0053ab80 ; 0043f65a
        ;   XREF to: 0053ab80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_0053ab80(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
        ;   Label: LAB_0043f65a
    ADD ESP,0x10                        ; 0043f65f
    PUSH 0x0                            ; 0043f662
    MOV ESI,dword ptr [0x005f2afc]      ; 0043f664 | DAT_005f2afc
    PUSH ESI                            ; 0043f66a | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 0043f66b
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0043f670
    PUSH 0x1                            ; 0043f673
    MOV EDI,dword ptr [0x005f2afc]      ; 0043f675 | DAT_005f2afc
    PUSH EDI                            ; 0043f67b | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500 ; 0043f67c
        ;   XREF to: 0046d500 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0043f681
    ADD ESP,0x14                        ; 0043f684
        ;   Label: LAB_0043f684
    POP EBP                             ; 0043f687
    POP EDI                             ; 0043f688
    POP ESI                             ; 0043f689
    POP EBX                             ; 0043f68a
    RET                                 ; 0043f68b
    PUSH ECX                            ; 0043f68c
        ;   Label: LAB_0043f68c
    MOV EAX,[0x005f2afc]                ; 0043f68d | DAT_005f2afc
    PUSH EAX                            ; 0043f692 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 0043f693
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0043f698
    JMP 0x0043f4f0                      ; 0043f69b
        ;   XREF to: 0043f4f0 (UNCONDITIONAL_JUMP)  ; LAB_0043f4f0
    MOV EAX,dword ptr [EBP + 0x110]     ; 0043f6a0
        ;   Label: LAB_0043f6a0
    MOV EDX,EAX                         ; 0043f6a6
    SAR EDX,0x1f                        ; 0043f6a8
    SUB EAX,EDX                         ; 0043f6ab
    SAR EAX,0x1                         ; 0043f6ad
    PUSH -0x1                           ; 0043f6af
    PUSH EAX                            ; 0043f6b1
    MOV EAX,dword ptr [EBP + 0x114]     ; 0043f6b2
    PUSH EAX                            ; 0043f6b8
    MOV EDX,dword ptr [0x00603b28]      ; 0043f6b9 | g_CDemonSetPtr
    PUSH EDX                            ; 0043f6bf | g_CDemonSetInstance
    JMP 0x0043f5d1                      ; 0043f6c0
        ;   XREF to: 0043f5d1 (UNCONDITIONAL_JUMP)  ; LAB_0043f5d1
    MOV EAX,dword ptr [EBP + 0x110]     ; 0043f6c5
        ;   Label: LAB_0043f6c5
    MOV EDX,EAX                         ; 0043f6cb
    SAR EDX,0x1f                        ; 0043f6cd
    SUB EAX,EDX                         ; 0043f6d0
    SAR EAX,0x1                         ; 0043f6d2
    PUSH -0x1                           ; 0043f6d4
    PUSH EAX                            ; 0043f6d6
    MOV EDX,EAX                         ; 0043f6d7
    SHL EAX,0x3                         ; 0043f6d9
    ADD EAX,EDX                         ; 0043f6dc
    SHL EAX,0x3                         ; 0043f6de
    MOV EDX,dword ptr [EBP + 0x114]     ; 0043f6e1
    ADD EAX,EDX                         ; 0043f6e7
    PUSH EAX                            ; 0043f6e9
    MOV ECX,dword ptr [0x00603b28]      ; 0043f6ea | g_CDemonSetPtr
    PUSH ECX                            ; 0043f6f0 | g_CDemonSetInstance
    JMP 0x0043f65a                      ; 0043f6f1
        ;   XREF to: 0043f65a (UNCONDITIONAL_JUMP)  ; LAB_0043f65a
    PUSH 0x0                            ; 0043f6f6
        ;   Label: LAB_0043f6f6
    PUSH 0x4                            ; 0043f6f8
    MOV ECX,dword ptr [EBP + 0x10c]     ; 0043f6fa
    PUSH ECX                            ; 0043f700
    MOV ESI,dword ptr [EBP + 0x114]     ; 0043f701
    PUSH ESI                            ; 0043f707
    MOV EDI,dword ptr [EBP + 0x110]     ; 0043f708
    PUSH EDI                            ; 0043f70e
    MOV EAX,dword ptr [EBP + 0x104]     ; 0043f70f
    PUSH EAX                            ; 0043f715
    MOV EDX,dword ptr [0x00603b28]      ; 0043f716 | g_CDemonSetPtr
    PUSH EDX                            ; 0043f71c | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_00538dd0 ; 0043f71d
        ;   XREF to: 00538dd0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_00538dd0(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    ADD ESP,0x1c                        ; 0043f722
    TEST EBX,EBX                        ; 0043f725
    JZ 0x0043f780                       ; 0043f727
        ;   XREF to: 0043f780 (CONDITIONAL_JUMP)  ; LAB_0043f780
    MOV ECX,dword ptr [EBP + 0x39ce8]   ; 0043f729
    XOR EBX,EBX                         ; 0043f72f
    TEST ECX,ECX                        ; 0043f731
    JLE 0x0043f780                      ; 0043f733
        ;   XREF to: 0043f780 (CONDITIONAL_JUMP)  ; LAB_0043f780
    MOV EAX,EBP                         ; 0043f735
    MOV ECX,dword ptr [EAX + 0x39cec]   ; 0043f737
        ;   Label: LAB_0043f737
    IMUL ECX,ECX,0x30                   ; 0043f73d
    MOV EDX,dword ptr [0x005f2afc]      ; 0043f740 | DAT_005f2afc
    MOV EDI,dword ptr [EDX]             ; 0043f746 | DAT_01bdd7e4
    MOV ESI,dword ptr [EAX + 0x3a64c]   ; 0043f748
    MOV dword ptr [ECX + EDI*0x1 + 0x20],ESI ; 0043f74e
    MOV ESI,dword ptr [EDX]             ; 0043f752 | DAT_01bdd7e4
    ADD ESI,ECX                         ; 0043f754
    MOV dword ptr [ESP],ESI             ; 0043f756
    MOV EDI,dword ptr [ESP]             ; 0043f759
    MOV ESI,dword ptr [EAX + 0x3a7dc]   ; 0043f75c
    MOV dword ptr [EDI + 0x24],ESI      ; 0043f762
    MOV EDX,dword ptr [EDX]             ; 0043f765 | DAT_01bdd7e4
    ADD ECX,EDX                         ; 0043f767
    MOV EDX,dword ptr [EAX + 0x3a96c]   ; 0043f769
    MOV dword ptr [ECX + 0x28],EDX      ; 0043f76f
    INC EBX                             ; 0043f772
    MOV ESI,dword ptr [EBP + 0x39ce8]   ; 0043f773
    ADD EAX,0x4                         ; 0043f779
    CMP EBX,ESI                         ; 0043f77c
    JL 0x0043f737                       ; 0043f77e
        ;   XREF to: 0043f737 (CONDITIONAL_JUMP)  ; LAB_0043f737
    CMP dword ptr [ESP + 0x4],0xf618    ; 0043f780
        ;   Label: LAB_0043f780
    JGE 0x0043f884                      ; 0043f788
        ;   XREF to: 0043f884 (CONDITIONAL_JUMP)  ; LAB_0043f884
    PUSH 0x267                          ; 0043f78e
    MOV EBX,dword ptr [EBP + 0x110]     ; 0043f793
    PUSH EBX                            ; 0043f799
    MOV ESI,dword ptr [EBP + 0x114]     ; 0043f79a
    PUSH ESI                            ; 0043f7a0
    MOV EDI,dword ptr [0x00603b28]      ; 0043f7a1 | g_CDemonSetPtr
    PUSH EDI                            ; 0043f7a7 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_0053ab80 ; 0043f7a8
        ;   XREF to: 0053ab80 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_0053ab80(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
        ;   Label: LAB_0043f7a8
    ADD ESP,0x10                        ; 0043f7ad
    MOV EAX,dword ptr [EBP + 0x110]     ; 0043f7b0
    MOV dword ptr [ESP + 0x8],EAX       ; 0043f7b6
    CMP EAX,0x3e8                       ; 0043f7ba
    JLE 0x0043f7c9                      ; 0043f7bf
        ;   XREF to: 0043f7c9 (CONDITIONAL_JUMP)  ; LAB_0043f7c9
    MOV dword ptr [ESP + 0x8],0x3e8     ; 0043f7c1
    XOR ECX,ECX                         ; 0043f7c9
        ;   Label: LAB_0043f7c9
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043f7cb
    MOV dword ptr [ESP + 0xc],ECX       ; 0043f7cf
    TEST EBX,EBX                        ; 0043f7d3
    JLE 0x0043f83f                      ; 0043f7d5
        ;   XREF to: 0043f83f (CONDITIONAL_JUMP)  ; LAB_0043f83f
    MOV dword ptr [ESP + 0x10],0x7e6564 ; 0043f7d7 | DAT_007e6564
    IMUL EAX,dword ptr [ESP + 0xc],0x48 ; 0043f7df
        ;   Label: LAB_0043f7df
    MOV EDX,dword ptr [EBP + 0x114]     ; 0043f7e4
    ADD EDX,EAX                         ; 0043f7ea
    MOV ECX,dword ptr [ESP + 0x10]      ; 0043f7ec
    MOV EAX,dword ptr [EDX + 0x4]       ; 0043f7f0
    MOV dword ptr [ECX + 0x4],EAX       ; 0043f7f3 | DAT_007e6568 | DAT_007e65b0
    MOV ECX,dword ptr [EDX + 0x4]       ; 0043f7f6
    XOR EAX,EAX                         ; 0043f7f9
    TEST ECX,ECX                        ; 0043f7fb
    JLE 0x0043f823                      ; 0043f7fd
        ;   XREF to: 0043f823 (CONDITIONAL_JUMP)  ; LAB_0043f823
    MOV ECX,dword ptr [ESP + 0x10]      ; 0043f7ff
    MOV EBX,dword ptr [EDX + 0x4]       ; 0043f803
        ;   Label: LAB_0043f803
    SUB EBX,EAX                         ; 0043f806
    DEC EBX                             ; 0043f808
    IMUL EBX,EBX,0xc                    ; 0043f809
    LEA ESI,[EDX + EBX*0x1]             ; 0043f80c
    LEA EDI,[ECX + 0x18]                ; 0043f80f | DAT_007e657c
    LEA ESI,[ESI + 0x18]                ; 0043f812
    MOVSD ES:EDI,ESI                    ; 0043f815 | DAT_007e657c | DAT_007e6588
    MOVSD ES:EDI,ESI                    ; 0043f816 | DAT_007e6580 | DAT_007e658c
    MOVSD ES:EDI,ESI                    ; 0043f817 | DAT_007e6584 | DAT_007e6590
    INC EAX                             ; 0043f818
    MOV EBX,dword ptr [EDX + 0x4]       ; 0043f819
    ADD ECX,0xc                         ; 0043f81c
    CMP EAX,EBX                         ; 0043f81f
    JL 0x0043f803                       ; 0043f821
        ;   XREF to: 0043f803 (CONDITIONAL_JUMP)  ; LAB_0043f803
    MOV ESI,dword ptr [ESP + 0x10]      ; 0043f823
        ;   Label: LAB_0043f823
    MOV EDI,dword ptr [ESP + 0xc]       ; 0043f827
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043f82b
    ADD ESI,0x48                        ; 0043f82f
    INC EDI                             ; 0043f832
    MOV dword ptr [ESP + 0x10],ESI      ; 0043f833 | DAT_007e65ac | DAT_007e65f4
    MOV dword ptr [ESP + 0xc],EDI       ; 0043f837
    CMP EDI,EDX                         ; 0043f83b
    JL 0x0043f7df                       ; 0043f83d
        ;   XREF to: 0043f7df (CONDITIONAL_JUMP)  ; LAB_0043f7df
    PUSH 0x0                            ; 0043f83f
        ;   Label: LAB_0043f83f
    PUSH 0x4                            ; 0043f841
    MOV ECX,dword ptr [EBP + 0x10c]     ; 0043f843
    PUSH ECX                            ; 0043f849
    PUSH 0x7e6564                       ; 0043f84a | DAT_007e6564
    MOV EBX,dword ptr [ESP + 0x18]      ; 0043f84f
    PUSH EBX                            ; 0043f853
    MOV ESI,dword ptr [EBP + 0x104]     ; 0043f854
    PUSH ESI                            ; 0043f85a
    MOV EDI,dword ptr [0x00603b28]      ; 0043f85b | g_CDemonSetPtr
    PUSH EDI                            ; 0043f861 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_00538dd0 ; 0043f862
        ;   XREF to: 00538dd0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_00538dd0(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    ADD ESP,0x1c                        ; 0043f867
    CMP dword ptr [ESP + 0x4],0xf618    ; 0043f86a
    JGE 0x0043f8a0                      ; 0043f872
        ;   XREF to: 0043f8a0 (CONDITIONAL_JUMP)  ; LAB_0043f8a0
    PUSH 0x267                          ; 0043f874
    PUSH EBX                            ; 0043f879
    PUSH 0x7e6564                       ; 0043f87a | DAT_007e6564
    JMP 0x0043f653                      ; 0043f87f
        ;   XREF to: 0043f653 (UNCONDITIONAL_JUMP)  ; LAB_0043f653
    PUSH -0x1                           ; 0043f884
        ;   Label: LAB_0043f884
    MOV EAX,dword ptr [EBP + 0x110]     ; 0043f886
    PUSH EAX                            ; 0043f88c
    MOV EDX,dword ptr [EBP + 0x114]     ; 0043f88d
    PUSH EDX                            ; 0043f893
    MOV ECX,dword ptr [0x00603b28]      ; 0043f894 | g_CDemonSetPtr
    PUSH ECX                            ; 0043f89a | g_CDemonSetInstance
    JMP 0x0043f7a8                      ; 0043f89b
        ;   XREF to: 0043f7a8 (UNCONDITIONAL_JUMP)  ; LAB_0043f7a8
    PUSH -0x1                           ; 0043f8a0
        ;   Label: LAB_0043f8a0
    PUSH EBX                            ; 0043f8a2
    PUSH 0x7e6564                       ; 0043f8a3 | DAT_007e6564
    MOV EDX,dword ptr [0x00603b28]      ; 0043f8a8 | g_CDemonSetPtr
    PUSH EDX                            ; 0043f8ae | g_CDemonSetInstance
    JMP 0x0043f65a                      ; 0043f8af
        ;   XREF to: 0043f65a (UNCONDITIONAL_JUMP)  ; LAB_0043f65a

