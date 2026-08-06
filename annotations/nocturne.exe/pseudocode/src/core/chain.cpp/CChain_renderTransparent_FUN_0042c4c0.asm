; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_chain_cpp_CChain_renderTransparent_FUN_0042c4c0(CChain *this_ptr)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x90]:1  local_90
;
; Referenced Globals:
;   undefined4 DAT_0059b220
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 DAT_01b4d738
;   CDemonSet g_CDemonSet_01e57284
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
;   engine_special.cpp_transformPoint_FUN_00530a25
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042c4c0
        ;   Label: core_chain.cpp_CChain_renderTransparent_FUN_0042c4c0
    PUSH EDI                            ; 0042c4c1
    PUSH EBP                            ; 0042c4c2
    SUB ESP,0xac                        ; 0042c4c3
    MOV EDX,dword ptr [0x005ae704]      ; 0042c4c9 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 0042c4cf | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 0042c4d0
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0042c4d5
    TEST EAX,EAX                        ; 0042c4d8
    JZ 0x0042c4e8                       ; 0042c4da
        ;   XREF to: 0042c4e8 (CONDITIONAL_JUMP)  ; LAB_0042c4e8
    XOR EAX,EAX                         ; 0042c4dc
        ;   Label: LAB_0042c4dc
    ADD ESP,0xac                        ; 0042c4de
    POP EBP                             ; 0042c4e4
    POP EDI                             ; 0042c4e5
    POP EBX                             ; 0042c4e6
    RET                                 ; 0042c4e7
    MOV ECX,dword ptr [ESP + 0xbc]      ; 0042c4e8
        ;   Label: LAB_0042c4e8
    PUSH ECX                            ; 0042c4ef
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 0042c4f0
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 0042c4f5
    PUSH 0x0                            ; 0042c4f8
    LEA EAX,[ESP + 0x2c]                ; 0042c4fa
    MOV EDX,dword ptr [ESP + 0xc0]      ; 0042c4fe
    PUSH EAX                            ; 0042c505
    MOV EBX,dword ptr [ESP + 0xc4]      ; 0042c506
    MOV EDX,dword ptr [EDX + 0x14c]     ; 0042c50d
    PUSH EBX                            ; 0042c513
    CALL dword ptr [EDX + 0x14]         ; 0042c514
    ADD ESP,0x8                         ; 0042c517
    PUSH EAX                            ; 0042c51a
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 0042c51b
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 0042c520
    PUSH EBX                            ; 0042c523
    MOV dword ptr [EBX + 0x56c],EAX     ; 0042c524
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 0042c52a
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    MOV EDI,dword ptr [EBX + 0x56c]     ; 0042c52f
    ADD ESP,0x4                         ; 0042c535
    TEST EDI,EDI                        ; 0042c538
    JZ 0x0042c4dc                       ; 0042c53a
        ;   XREF to: 0042c4dc (CONDITIONAL_JUMP)  ; LAB_0042c4dc
    PUSH ESI                            ; 0042c53c
    LEA EAX,[EBX + 0x164]               ; 0042c53d
    PUSH EAX                            ; 0042c543
    MOV EBP,dword ptr [0x005ae704]      ; 0042c544 | g_CDemonRenderer_PTR_005ae704
    PUSH EBP                            ; 0042c54a | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 0042c54b
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0042c550
    PUSH 0x0                            ; 0042c553
    MOV EAX,[0x005ae704]                ; 0042c555 | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 0042c55a | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 0042c55b
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    MOV EDX,0x4                         ; 0042c560
    MOV EAX,0x1                         ; 0042c565
    ADD ESP,0x8                         ; 0042c56a
    MOV EBX,dword ptr [0x005ae704]      ; 0042c56d | g_CDemonRenderer_PTR_005ae704
    XOR ECX,ECX                         ; 0042c573
    PUSH 0xffff                         ; 0042c575
    MOV dword ptr [ESP + 0xc],EDX       ; 0042c57a
    MOV dword ptr [ESP + 0x1c],ECX      ; 0042c57e
    MOV dword ptr [ESP + 0x18],ECX      ; 0042c582
    MOV dword ptr [ESP + 0x14],ECX      ; 0042c586
    MOV dword ptr [ESP + 0x10],ECX      ; 0042c58a
    MOV dword ptr [ESP + 0x20],ECX      ; 0042c58e
    MOV dword ptr [ESP + 0x24],EAX      ; 0042c592
    MOV EDX,0x2                         ; 0042c596
    MOV ECX,0x3                         ; 0042c59b
    PUSH EBX                            ; 0042c5a0 | DAT_01b4d738
    MOV dword ptr [ESP + 0x2c],EDX      ; 0042c5a1
    MOV dword ptr [ESP + 0x30],ECX      ; 0042c5a5
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 0042c5a9
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0042c5ae
    XOR ESI,ESI                         ; 0042c5b1
    PUSH ESI                            ; 0042c5b3
    MOV ESI,dword ptr [0x005ae704]      ; 0042c5b4 | g_CDemonRenderer_PTR_005ae704
    PUSH ESI                            ; 0042c5ba | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 0042c5bb
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0042c5c0
    XOR EBP,EBP                         ; 0042c5c3
    MOV EDI,dword ptr [ESP + 0xc0]      ; 0042c5c5
    MOV ESI,dword ptr [ESP + 0xc0]      ; 0042c5cc
    ADD EDI,0x284                       ; 0042c5d3
    ADD ESI,0x2a8                       ; 0042c5d9
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0042c5df
        ;   Label: LAB_0042c5df
    MOV EAX,dword ptr [EAX + 0x150]     ; 0042c5e6
    DEC EAX                             ; 0042c5ec
    CMP EBP,EAX                         ; 0042c5ed
    JGE 0x0042ca71                      ; 0042c5ef
        ;   XREF to: 0042ca71 (CONDITIONAL_JUMP)  ; LAB_0042ca71
    MOV EAX,[0x005ae704]                ; 0042c5f5 | g_CDemonRenderer_PTR_005ae704
    LEA EBX,[ESP + 0x80]                ; 0042c5fa
    MOV EDX,dword ptr [EAX]             ; 0042c601 | DAT_01b4d738
    MOV EAX,EDI                         ; 0042c603
    FLD float ptr [EAX]                 ; 0042c605
    FMUL float ptr [0x0059b220]         ; 0042c607 | DAT_0059b220
    FISTP dword ptr [EBX]               ; 0042c60d
    FLD float ptr [EAX + 0x4]           ; 0042c60f
    FMUL float ptr [0x0059b220]         ; 0042c612 | DAT_0059b220
    FISTP dword ptr [EBX + 0x4]         ; 0042c618
    FLD float ptr [EAX + 0x8]           ; 0042c61b
    FMUL float ptr [0x0059b220]         ; 0042c61e | DAT_0059b220
    FISTP dword ptr [EBX + 0x8]         ; 0042c624
    LEA EAX,[ESP + 0x80]                ; 0042c627
    PUSH EAX                            ; 0042c62e
    PUSH EDX                            ; 0042c62f
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 0042c630
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005ae704]                ; 0042c635 | g_CDemonRenderer_PTR_005ae704
    MOV EAX,dword ptr [EAX]             ; 0042c63a | DAT_01b4d738
    ADD ESP,0x8                         ; 0042c63c
    LEA EDX,[EAX + 0x30]                ; 0042c63f
    LEA EBX,[ESP + 0x44]                ; 0042c642
    MOV EAX,EDI                         ; 0042c646
    FLD float ptr [EAX]                 ; 0042c648
    FMUL float ptr [0x0059b220]         ; 0042c64a | DAT_0059b220
    FISTP dword ptr [EBX]               ; 0042c650
    FLD float ptr [EAX + 0x4]           ; 0042c652
    FMUL float ptr [0x0059b220]         ; 0042c655 | DAT_0059b220
    FISTP dword ptr [EBX + 0x4]         ; 0042c65b
    FLD float ptr [EAX + 0x8]           ; 0042c65e
    FMUL float ptr [0x0059b220]         ; 0042c661 | DAT_0059b220
    FISTP dword ptr [EBX + 0x8]         ; 0042c667
    LEA EAX,[ESP + 0x44]                ; 0042c66a
    PUSH EAX                            ; 0042c66e
    PUSH EDX                            ; 0042c66f
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 0042c670
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005ae704]                ; 0042c675 | g_CDemonRenderer_PTR_005ae704
    MOV EAX,dword ptr [EAX]             ; 0042c67a | DAT_01b4d738
    ADD ESP,0x8                         ; 0042c67c
    LEA EDX,[EAX + 0x60]                ; 0042c67f
    LEA EBX,[ESP + 0x74]                ; 0042c682
    MOV EAX,ESI                         ; 0042c686
    FLD float ptr [EAX]                 ; 0042c688
    FMUL float ptr [0x0059b220]         ; 0042c68a | DAT_0059b220
    FISTP dword ptr [EBX]               ; 0042c690
    FLD float ptr [EAX + 0x4]           ; 0042c692
    FMUL float ptr [0x0059b220]         ; 0042c695 | DAT_0059b220
    FISTP dword ptr [EBX + 0x4]         ; 0042c69b
    FLD float ptr [EAX + 0x8]           ; 0042c69e
    FMUL float ptr [0x0059b220]         ; 0042c6a1 | DAT_0059b220
    FISTP dword ptr [EBX + 0x8]         ; 0042c6a7
    LEA EAX,[ESP + 0x74]                ; 0042c6aa
    PUSH EAX                            ; 0042c6ae
    PUSH EDX                            ; 0042c6af
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 0042c6b0
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005ae704]                ; 0042c6b5 | g_CDemonRenderer_PTR_005ae704
    MOV EAX,dword ptr [EAX]             ; 0042c6ba | DAT_01b4d738
    ADD ESP,0x8                         ; 0042c6bc
    LEA EDX,[EAX + 0x90]                ; 0042c6bf
    LEA EBX,[ESP + 0xa4]                ; 0042c6c5
    MOV EAX,ESI                         ; 0042c6cc
    FLD float ptr [EAX]                 ; 0042c6ce
    FMUL float ptr [0x0059b220]         ; 0042c6d0 | DAT_0059b220
    FISTP dword ptr [EBX]               ; 0042c6d6
    FLD float ptr [EAX + 0x4]           ; 0042c6d8
    FMUL float ptr [0x0059b220]         ; 0042c6db | DAT_0059b220
    FISTP dword ptr [EBX + 0x4]         ; 0042c6e1
    FLD float ptr [EAX + 0x8]           ; 0042c6e4
    FMUL float ptr [0x0059b220]         ; 0042c6e7 | DAT_0059b220
    FISTP dword ptr [EBX + 0x8]         ; 0042c6ed
    LEA EAX,[ESP + 0xa4]                ; 0042c6f0
    PUSH EAX                            ; 0042c6f7
    PUSH EDX                            ; 0042c6f8
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 0042c6f9
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005ae704]                ; 0042c6fe | g_CDemonRenderer_PTR_005ae704
    MOV EBX,dword ptr [EAX]             ; 0042c703 | DAT_01b4d738
    SUB dword ptr [EBX + 0x4],0x40      ; 0042c705
    MOV EBX,dword ptr [EAX]             ; 0042c709 | DAT_01b4d738
    ADD dword ptr [EBX + 0x34],0x40     ; 0042c70b
    MOV EBX,dword ptr [EAX]             ; 0042c70f | DAT_01b4d738
    ADD dword ptr [EBX + 0x64],0x40     ; 0042c711
    MOV EBX,dword ptr [EAX]             ; 0042c715 | DAT_01b4d738
    SUB dword ptr [EBX + 0x94],0x40     ; 0042c717
    MOV EDX,dword ptr [EAX]             ; 0042c71e | DAT_01b4d738
    MOV dword ptr [EDX + 0x10],0x80000000 ; 0042c720
    MOV EDX,dword ptr [EAX]             ; 0042c727 | DAT_01b4d738
    MOV dword ptr [EDX + 0x40],0x80000000 ; 0042c729
    MOV EDX,dword ptr [EAX]             ; 0042c730 | DAT_01b4d738
    MOV dword ptr [EDX + 0x70],0x80000000 ; 0042c732
    MOV EDX,dword ptr [EAX]             ; 0042c739 | DAT_01b4d738
    MOV dword ptr [EDX + 0xa0],0x80000000 ; 0042c73b
    MOV EDX,dword ptr [EAX]             ; 0042c745 | DAT_01b4d738
    MOV dword ptr [EDX + 0x18],0x80000  ; 0042c747
    MOV EDX,dword ptr [EAX]             ; 0042c74e | DAT_01b4d738
    MOV dword ptr [EDX + 0x1c],0x80000  ; 0042c750
    MOV EDX,dword ptr [EAX]             ; 0042c757 | DAT_01b4d738
    MOV dword ptr [EDX + 0x48],0x80000  ; 0042c759
    MOV EDX,dword ptr [EAX]             ; 0042c760 | DAT_01b4d738
    MOV dword ptr [EDX + 0x4c],0xf80000 ; 0042c762
    MOV EDX,dword ptr [EAX]             ; 0042c769 | DAT_01b4d738
    MOV dword ptr [EDX + 0x78],0xf80000 ; 0042c76b
    MOV EDX,dword ptr [EAX]             ; 0042c772 | DAT_01b4d738
    MOV dword ptr [EDX + 0x7c],0xf80000 ; 0042c774
    MOV EDX,dword ptr [EAX]             ; 0042c77b | DAT_01b4d738
    MOV dword ptr [EDX + 0xa8],0xf80000 ; 0042c77d
    MOV EAX,dword ptr [EAX]             ; 0042c787 | DAT_01b4d738
    ADD ESP,0x8                         ; 0042c789
    LEA EBX,[ESP + 0x50]                ; 0042c78c
    MOV dword ptr [EAX + 0xac],0x80000  ; 0042c790
    MOV EAX,EDI                         ; 0042c79a
    FLD float ptr [EAX]                 ; 0042c79c
    FMUL float ptr [0x0059b220]         ; 0042c79e | DAT_0059b220
    FISTP dword ptr [EBX]               ; 0042c7a4
    FLD float ptr [EAX + 0x4]           ; 0042c7a6
    FMUL float ptr [0x0059b220]         ; 0042c7a9 | DAT_0059b220
    FISTP dword ptr [EBX + 0x4]         ; 0042c7af
    FLD float ptr [EAX + 0x8]           ; 0042c7b2
    FMUL float ptr [0x0059b220]         ; 0042c7b5 | DAT_0059b220
    FISTP dword ptr [EBX + 0x8]         ; 0042c7bb
    PUSH 0x2                            ; 0042c7be
    PUSH 0x0                            ; 0042c7c0
    PUSH 0x0                            ; 0042c7c2
    LEA EAX,[ESP + 0x5c]                ; 0042c7c4
    PUSH EAX                            ; 0042c7c8
    MOV EBX,dword ptr [0x005be368]      ; 0042c7c9 | g_CDemonSet_PTR_005be368
    PUSH EBX                            ; 0042c7cf | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50 ; 0042c7d0
        ;   XREF to: 0050bb50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 0042c7d5
    LEA EBX,[ESP + 0x50]                ; 0042c7d8
    MOV EAX,ESI                         ; 0042c7dc
    FLD float ptr [EAX]                 ; 0042c7de
    FMUL float ptr [0x0059b220]         ; 0042c7e0 | DAT_0059b220
    FISTP dword ptr [EBX]               ; 0042c7e6
    FLD float ptr [EAX + 0x4]           ; 0042c7e8
    FMUL float ptr [0x0059b220]         ; 0042c7eb | DAT_0059b220
    FISTP dword ptr [EBX + 0x4]         ; 0042c7f1
    FLD float ptr [EAX + 0x8]           ; 0042c7f4
    FMUL float ptr [0x0059b220]         ; 0042c7f7 | DAT_0059b220
    FISTP dword ptr [EBX + 0x8]         ; 0042c7fd
    PUSH 0x2                            ; 0042c800
    PUSH 0x2                            ; 0042c802
    PUSH 0x0                            ; 0042c804
    LEA EAX,[ESP + 0x5c]                ; 0042c806
    PUSH EAX                            ; 0042c80a
    MOV EAX,[0x005be368]                ; 0042c80b | g_CDemonSet_PTR_005be368
    PUSH EAX                            ; 0042c810 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50 ; 0042c811
        ;   XREF to: 0050bb50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 0042c816
    LEA EAX,[ESP + 0x4]                 ; 0042c819
    PUSH EAX                            ; 0042c81d
    MOV EDX,dword ptr [0x005ae704]      ; 0042c81e | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 0042c824 | DAT_01b4d738
    LEA EBX,[ESP + 0x94]                ; 0042c825
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0 ; 0042c82c
        ;   XREF to: 004602a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EDX,dword ptr [0x005ae704]      ; 0042c831 | g_CDemonRenderer_PTR_005ae704
    ADD ESP,0x8                         ; 0042c837
    MOV EAX,EDI                         ; 0042c83a
    MOV EDX,dword ptr [EDX]             ; 0042c83c | DAT_01b4d738
    FLD float ptr [EAX]                 ; 0042c83e
    FMUL float ptr [0x0059b220]         ; 0042c840 | DAT_0059b220
    FISTP dword ptr [EBX]               ; 0042c846
    FLD float ptr [EAX + 0x4]           ; 0042c848
    FMUL float ptr [0x0059b220]         ; 0042c84b | DAT_0059b220
    FISTP dword ptr [EBX + 0x4]         ; 0042c851
    FLD float ptr [EAX + 0x8]           ; 0042c854
    FMUL float ptr [0x0059b220]         ; 0042c857 | DAT_0059b220
    FISTP dword ptr [EBX + 0x8]         ; 0042c85d
    LEA EAX,[ESP + 0x8c]                ; 0042c860
    PUSH EAX                            ; 0042c867
    PUSH EDX                            ; 0042c868
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 0042c869
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005ae704]                ; 0042c86e | g_CDemonRenderer_PTR_005ae704
    MOV EAX,dword ptr [EAX]             ; 0042c873 | DAT_01b4d738
    ADD ESP,0x8                         ; 0042c875
    LEA EDX,[EAX + 0x30]                ; 0042c878
    LEA EBX,[ESP + 0x5c]                ; 0042c87b
    MOV EAX,EDI                         ; 0042c87f
    FLD float ptr [EAX]                 ; 0042c881
    FMUL float ptr [0x0059b220]         ; 0042c883 | DAT_0059b220
    FISTP dword ptr [EBX]               ; 0042c889
    FLD float ptr [EAX + 0x4]           ; 0042c88b
    FMUL float ptr [0x0059b220]         ; 0042c88e | DAT_0059b220
    FISTP dword ptr [EBX + 0x4]         ; 0042c894
    FLD float ptr [EAX + 0x8]           ; 0042c897
    FMUL float ptr [0x0059b220]         ; 0042c89a | DAT_0059b220
    FISTP dword ptr [EBX + 0x8]         ; 0042c8a0
    LEA EAX,[ESP + 0x5c]                ; 0042c8a3
    PUSH EAX                            ; 0042c8a7
    PUSH EDX                            ; 0042c8a8
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 0042c8a9
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0042c8ae
    MOV EAX,[0x005ae704]                ; 0042c8b1 | g_CDemonRenderer_PTR_005ae704
    LEA EBX,[ESP + 0x68]                ; 0042c8b6
    MOV EDX,dword ptr [EAX]             ; 0042c8ba | DAT_01b4d738
    MOV EAX,ESI                         ; 0042c8bc
    FLD float ptr [EAX]                 ; 0042c8be
    FMUL float ptr [0x0059b220]         ; 0042c8c0 | DAT_0059b220
    FISTP dword ptr [EBX]               ; 0042c8c6
    FLD float ptr [EAX + 0x4]           ; 0042c8c8
    FMUL float ptr [0x0059b220]         ; 0042c8cb | DAT_0059b220
    FISTP dword ptr [EBX + 0x4]         ; 0042c8d1
    FLD float ptr [EAX + 0x8]           ; 0042c8d4
    FMUL float ptr [0x0059b220]         ; 0042c8d7 | DAT_0059b220
    FISTP dword ptr [EBX + 0x8]         ; 0042c8dd
    LEA EAX,[ESP + 0x68]                ; 0042c8e0
    PUSH EAX                            ; 0042c8e4
    ADD EDX,0x60                        ; 0042c8e5
    PUSH EDX                            ; 0042c8e8
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 0042c8e9
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005ae704]                ; 0042c8ee | g_CDemonRenderer_PTR_005ae704
    LEA EBX,[ESP + 0xa0]                ; 0042c8f3
    ADD ESP,0x8                         ; 0042c8fa
    MOV EDX,dword ptr [EAX]             ; 0042c8fd | DAT_01b4d738
    MOV EAX,ESI                         ; 0042c8ff
    FLD float ptr [EAX]                 ; 0042c901
    FMUL float ptr [0x0059b220]         ; 0042c903 | DAT_0059b220
    FISTP dword ptr [EBX]               ; 0042c909
    FLD float ptr [EAX + 0x4]           ; 0042c90b
    FMUL float ptr [0x0059b220]         ; 0042c90e | DAT_0059b220
    FISTP dword ptr [EBX + 0x4]         ; 0042c914
    FLD float ptr [EAX + 0x8]           ; 0042c917
    FMUL float ptr [0x0059b220]         ; 0042c91a | DAT_0059b220
    FISTP dword ptr [EBX + 0x8]         ; 0042c920
    LEA EAX,[ESP + 0x98]                ; 0042c923
    PUSH EAX                            ; 0042c92a
    ADD EDX,0x90                        ; 0042c92b
    PUSH EDX                            ; 0042c931
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 0042c932
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005ae704]                ; 0042c937 | g_CDemonRenderer_PTR_005ae704
    MOV EBX,dword ptr [EAX]             ; 0042c93c | DAT_01b4d738
    SUB dword ptr [EBX],0x40            ; 0042c93e
    MOV EBX,dword ptr [EAX]             ; 0042c941 | DAT_01b4d738
    ADD dword ptr [EBX + 0x30],0x40     ; 0042c943
    MOV EBX,dword ptr [EAX]             ; 0042c947 | DAT_01b4d738
    ADD dword ptr [EBX + 0x60],0x40     ; 0042c949
    MOV EBX,dword ptr [EAX]             ; 0042c94d | DAT_01b4d738
    SUB dword ptr [EBX + 0x90],0x40     ; 0042c94f
    MOV EDX,dword ptr [EAX]             ; 0042c956 | DAT_01b4d738
    MOV dword ptr [EDX + 0x10],0x80000000 ; 0042c958
    MOV EDX,dword ptr [EAX]             ; 0042c95f | DAT_01b4d738
    MOV dword ptr [EDX + 0x40],0x80000000 ; 0042c961
    MOV EDX,dword ptr [EAX]             ; 0042c968 | DAT_01b4d738
    MOV dword ptr [EDX + 0x70],0x80000000 ; 0042c96a
    MOV EDX,dword ptr [EAX]             ; 0042c971 | DAT_01b4d738
    MOV dword ptr [EDX + 0xa0],0x80000000 ; 0042c973
    MOV EDX,dword ptr [EAX]             ; 0042c97d | DAT_01b4d738
    MOV dword ptr [EDX + 0x18],0x80000  ; 0042c97f
    MOV EDX,dword ptr [EAX]             ; 0042c986 | DAT_01b4d738
    MOV dword ptr [EDX + 0x1c],0x80000  ; 0042c988
    MOV EDX,dword ptr [EAX]             ; 0042c98f | DAT_01b4d738
    MOV dword ptr [EDX + 0x48],0x80000  ; 0042c991
    MOV EDX,dword ptr [EAX]             ; 0042c998 | DAT_01b4d738
    MOV dword ptr [EDX + 0x4c],0xf80000 ; 0042c99a
    MOV EDX,dword ptr [EAX]             ; 0042c9a1 | DAT_01b4d738
    MOV dword ptr [EDX + 0x78],0xf80000 ; 0042c9a3
    MOV EDX,dword ptr [EAX]             ; 0042c9aa | DAT_01b4d738
    MOV dword ptr [EDX + 0x7c],0xf80000 ; 0042c9ac
    MOV EDX,dword ptr [EAX]             ; 0042c9b3 | DAT_01b4d738
    MOV dword ptr [EDX + 0xa8],0xf80000 ; 0042c9b5
    MOV EAX,dword ptr [EAX]             ; 0042c9bf | DAT_01b4d738
    ADD ESP,0x8                         ; 0042c9c1
    LEA EBX,[ESP + 0x50]                ; 0042c9c4
    MOV dword ptr [EAX + 0xac],0x80000  ; 0042c9c8
    MOV EAX,EDI                         ; 0042c9d2
    FLD float ptr [EAX]                 ; 0042c9d4
    FMUL float ptr [0x0059b220]         ; 0042c9d6 | DAT_0059b220
    FISTP dword ptr [EBX]               ; 0042c9dc
    FLD float ptr [EAX + 0x4]           ; 0042c9de
    FMUL float ptr [0x0059b220]         ; 0042c9e1 | DAT_0059b220
    FISTP dword ptr [EBX + 0x4]         ; 0042c9e7
    FLD float ptr [EAX + 0x8]           ; 0042c9ea
    FMUL float ptr [0x0059b220]         ; 0042c9ed | DAT_0059b220
    FISTP dword ptr [EBX + 0x8]         ; 0042c9f3
    PUSH 0x2                            ; 0042c9f6
    PUSH 0x0                            ; 0042c9f8
    PUSH 0x0                            ; 0042c9fa
    LEA EAX,[ESP + 0x5c]                ; 0042c9fc
    PUSH EAX                            ; 0042ca00
    MOV ECX,dword ptr [0x005be368]      ; 0042ca01 | g_CDemonSet_PTR_005be368
    PUSH ECX                            ; 0042ca07 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50 ; 0042ca08
        ;   XREF to: 0050bb50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 0042ca0d
    LEA EBX,[ESP + 0x50]                ; 0042ca10
    MOV EAX,ESI                         ; 0042ca14
    FLD float ptr [EAX]                 ; 0042ca16
    FMUL float ptr [0x0059b220]         ; 0042ca18 | DAT_0059b220
    FISTP dword ptr [EBX]               ; 0042ca1e
    FLD float ptr [EAX + 0x4]           ; 0042ca20
    FMUL float ptr [0x0059b220]         ; 0042ca23 | DAT_0059b220
    FISTP dword ptr [EBX + 0x4]         ; 0042ca29
    FLD float ptr [EAX + 0x8]           ; 0042ca2c
    FMUL float ptr [0x0059b220]         ; 0042ca2f | DAT_0059b220
    FISTP dword ptr [EBX + 0x8]         ; 0042ca35
    PUSH 0x2                            ; 0042ca38
    PUSH 0x2                            ; 0042ca3a
    PUSH 0x0                            ; 0042ca3c
    LEA EAX,[ESP + 0x5c]                ; 0042ca3e
    PUSH EAX                            ; 0042ca42
    MOV EBX,dword ptr [0x005be368]      ; 0042ca43 | g_CDemonSet_PTR_005be368
    PUSH EBX                            ; 0042ca49 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50 ; 0042ca4a
        ;   XREF to: 0050bb50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_0050bb50(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 0042ca4f
    LEA EAX,[ESP + 0x4]                 ; 0042ca52
    PUSH EAX                            ; 0042ca56
    MOV EAX,[0x005ae704]                ; 0042ca57 | g_CDemonRenderer_PTR_005ae704
    ADD EDI,0x24                        ; 0042ca5c
    PUSH EAX                            ; 0042ca5f | DAT_01b4d738
    INC EBP                             ; 0042ca60
    ADD ESI,0x24                        ; 0042ca61
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0 ; 0042ca64
        ;   XREF to: 004602a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0042ca69
    JMP 0x0042c5df                      ; 0042ca6c
        ;   XREF to: 0042c5df (UNCONDITIONAL_JUMP)  ; LAB_0042c5df
    MOV EAX,0x1                         ; 0042ca71
        ;   Label: LAB_0042ca71
    POP ESI                             ; 0042ca76
    ADD ESP,0xac                        ; 0042ca77
    POP EBP                             ; 0042ca7d
    POP EDI                             ; 0042ca7e
    POP EBX                             ; 0042ca7f
    RET                                 ; 0042ca80

