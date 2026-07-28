; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_glass_cpp_FUN_004ac600(CDemonActor *param_1)
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

    PUSH EBX                            ; 004ac600
        ;   Label: core_glass.cpp_FUN_004ac600
    PUSH ESI                            ; 004ac601
    PUSH EBP                            ; 004ac602
    SUB ESP,0x1c                        ; 004ac603
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004ac606
    CMP dword ptr [EBP + 0x368],0x0     ; 004ac60a
    JNZ 0x004ac626                      ; 004ac611
        ;   XREF to: 004ac626 (CONDITIONAL_JUMP)  ; LAB_004ac626
    CMP dword ptr [EBP + 0x174],0x0     ; 004ac613
    JZ 0x004ac626                       ; 004ac61a
        ;   XREF to: 004ac626 (CONDITIONAL_JUMP)  ; LAB_004ac626
    MOV EBX,dword ptr [EBP + 0x178]     ; 004ac61c
    TEST EBX,EBX                        ; 004ac622
    JZ 0x004ac62f                       ; 004ac624
        ;   XREF to: 004ac62f (CONDITIONAL_JUMP)  ; LAB_004ac62f
    XOR EAX,EAX                         ; 004ac626
        ;   Label: LAB_004ac626
    ADD ESP,0x1c                        ; 004ac628
    POP EBP                             ; 004ac62b
    POP ESI                             ; 004ac62c
    POP EBX                             ; 004ac62d
    RET                                 ; 004ac62e
    MOV ESI,dword ptr [0x005ae704]      ; 004ac62f | DAT_005ae704
        ;   Label: LAB_004ac62f
    PUSH ESI                            ; 004ac635 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 004ac636
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004ac63b
    TEST EAX,EAX                        ; 004ac63e
    JNZ 0x004ac626                      ; 004ac640
        ;   XREF to: 004ac626 (CONDITIONAL_JUMP)  ; LAB_004ac626
    PUSH EDI                            ; 004ac642
    PUSH EBP                            ; 004ac643
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 004ac644
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 004ac649
    PUSH EBX                            ; 004ac64c
    LEA EAX,[ESP + 0x8]                 ; 004ac64d
    PUSH EAX                            ; 004ac651
    MOV EDX,dword ptr [EBP + 0x14c]     ; 004ac652
    PUSH EBP                            ; 004ac658
    CALL dword ptr [EDX + 0x14]         ; 004ac659
    ADD ESP,0x8                         ; 004ac65c
    PUSH EAX                            ; 004ac65f
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 004ac660
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 004ac665
    MOV dword ptr [ESP + 0x1c],EAX      ; 004ac668
    LEA EAX,[EBP + 0x15c]               ; 004ac66c
    PUSH EAX                            ; 004ac672
    MOV EDI,dword ptr [0x005ae704]      ; 004ac673 | DAT_005ae704
    PUSH EDI                            ; 004ac679 | DAT_01b4d738
    XOR ESI,ESI                         ; 004ac67a
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 004ac67c
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    LEA EDX,[EBP + 0x384]               ; 004ac681
    ADD ESP,0x8                         ; 004ac687
    LEA EDI,[EBP + 0x4b0]               ; 004ac68a
    MOV EAX,dword ptr [EBP + 0xb2c]     ; 004ac690
    MOV ECX,EDI                         ; 004ac696
    TEST EAX,EAX                        ; 004ac698
    JLE 0x004ac6e0                      ; 004ac69a
        ;   XREF to: 004ac6e0 (CONDITIONAL_JUMP)  ; LAB_004ac6e0
    MOV EBX,ECX                         ; 004ac69c
        ;   Label: LAB_004ac69c
    MOV EAX,EDX                         ; 004ac69e
    FLD float ptr [EAX]                 ; 004ac6a0
    FMUL float ptr [0x0059e390]         ; 004ac6a2 | DAT_0059e390
    FISTP dword ptr [EBX]               ; 004ac6a8
    FLD float ptr [EAX + 0x4]           ; 004ac6aa
    FMUL float ptr [0x0059e390]         ; 004ac6ad | DAT_0059e390
    FISTP dword ptr [EBX + 0x4]         ; 004ac6b3
    FLD float ptr [EAX + 0x8]           ; 004ac6b6
    FMUL float ptr [0x0059e390]         ; 004ac6b9 | DAT_0059e390
    FISTP dword ptr [EBX + 0x8]         ; 004ac6bf
    INC ESI                             ; 004ac6c2
    ADD EDX,0xc                         ; 004ac6c3
    MOV EBX,dword ptr [EBP + 0xb2c]     ; 004ac6c6
    ADD ECX,0xc                         ; 004ac6cc
    CMP ESI,EBX                         ; 004ac6cf
    JL 0x004ac69c                       ; 004ac6d1
        ;   XREF to: 004ac69c (CONDITIONAL_JUMP)  ; LAB_004ac69c
    LEA EAX,[EAX]                       ; 004ac6d3
    LEA EDX,[EDX]                       ; 004ac6d9
    NOP                                 ; 004ac6df
    PUSH EDI                            ; 004ac6e0
        ;   Label: LAB_004ac6e0
    MOV ESI,dword ptr [EBP + 0xb2c]     ; 004ac6e1
    PUSH ESI                            ; 004ac6e7
    MOV EAX,[0x005be368]                ; 004ac6e8 | DAT_005be368
    PUSH EAX                            ; 004ac6ed | DAT_01e57284
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200 ; 004ac6ee
        ;   XREF to: 0050c200 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200()
    MOV EAX,0xffff                      ; 004ac6f3
    MOV EDX,dword ptr [0x01c038f4]      ; 004ac6f8 | DAT_01c038f4
    ADD ESP,0xc                         ; 004ac6fe
    SUB EAX,EDX                         ; 004ac701
    MOV EDX,dword ptr [EBP + 0x174]     ; 004ac703
    IMUL EDX                            ; 004ac709
    SHRD EAX,EDX,0x10                   ; 004ac70b
    PUSH EAX                            ; 004ac70f
    MOV ECX,dword ptr [0x005ae704]      ; 004ac710 | DAT_005ae704
    PUSH ECX                            ; 004ac716 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 004ac717
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004ac71c
    PUSH 0x0                            ; 004ac71f
    PUSH 0x4                            ; 004ac721
    PUSH EDI                            ; 004ac723
    LEA EDI,[EBP + 0x6a4]               ; 004ac724
    PUSH EDI                            ; 004ac72a
    MOV EBX,dword ptr [EBP + 0xb30]     ; 004ac72b
    PUSH EBX                            ; 004ac731
    MOV ESI,dword ptr [EBP + 0xb2c]     ; 004ac732
    PUSH ESI                            ; 004ac738
    MOV EAX,[0x005be368]                ; 004ac739 | DAT_005be368
    PUSH EAX                            ; 004ac73e | DAT_01e57284
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0 ; 004ac73f
        ;   XREF to: 0050c2d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    XOR ESI,ESI                         ; 004ac744
    MOV EDX,dword ptr [EBP + 0xb30]     ; 004ac746
    ADD ESP,0x1c                        ; 004ac74c
    TEST EDX,EDX                        ; 004ac74f
    JLE 0x004ac7a0                      ; 004ac751
        ;   XREF to: 004ac7a0 (CONDITIONAL_JUMP)  ; LAB_004ac7a0
    MOV EBX,EBP                         ; 004ac753
    MOV ECX,dword ptr [0x005ae704]      ; 004ac755 | DAT_005ae704
        ;   Label: LAB_004ac755
    MOV dword ptr [EBX + 0x6ac],0x0     ; 004ac75b
    PUSH EDI                            ; 004ac765
    MOV dword ptr [EBX + 0x6b0],0x0     ; 004ac766
    INC ESI                             ; 004ac770
    MOV dword ptr [EBX + 0x6b4],0x0     ; 004ac771
    PUSH ECX                            ; 004ac77b | DAT_01b4d738
    MOV dword ptr [EBX + 0x6b8],0x0     ; 004ac77c
    ADD EBX,0x48                        ; 004ac786
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370 ; 004ac789
        ;   XREF to: 00460370 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370()
    ADD EDI,0x48                        ; 004ac78e
    MOV EAX,dword ptr [EBP + 0xb30]     ; 004ac791
    ADD ESP,0x8                         ; 004ac797
    CMP ESI,EAX                         ; 004ac79a
    JL 0x004ac755                       ; 004ac79c
        ;   XREF to: 004ac755 (CONDITIONAL_JUMP)  ; LAB_004ac755
    MOV EAX,EAX                         ; 004ac79e
    PUSH EBP                            ; 004ac7a0
        ;   Label: LAB_004ac7a0
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004ac7a1
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ac7a6
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004ac7a9
    POP EDI                             ; 004ac7ad
    ADD ESP,0x1c                        ; 004ac7ae
    POP EBP                             ; 004ac7b1
    POP ESI                             ; 004ac7b2
    POP EBX                             ; 004ac7b3
    RET                                 ; 004ac7b4

