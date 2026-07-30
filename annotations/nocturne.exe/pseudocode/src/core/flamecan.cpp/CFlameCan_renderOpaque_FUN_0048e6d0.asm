; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_flamecan_cpp_CFlameCan_renderOpaque_FUN_0048e6d0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e6d0
        ;   Label: core_flamecan.cpp_CFlameCan_renderOpaque_FUN_0048e6d0
    PUSH ESI                            ; 0048e6d1
    SUB ESP,0x18                        ; 0048e6d2
    MOV EBX,dword ptr [ESP + 0x24]      ; 0048e6d5
    LEA EAX,[EBX + 0x20]                ; 0048e6d9
    PUSH EAX                            ; 0048e6dc
    MOV EDX,dword ptr [0x005ae704]      ; 0048e6dd | DAT_005ae704
    PUSH EDX                            ; 0048e6e3 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 0048e6e4
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0048e6e9
    PUSH 0x0                            ; 0048e6ec
    LEA EAX,[EBX + 0x30]                ; 0048e6ee
    PUSH EAX                            ; 0048e6f1
    MOV ECX,dword ptr [0x005ae704]      ; 0048e6f2 | DAT_005ae704
    PUSH ECX                            ; 0048e6f8 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 0048e6f9
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 0048e6fe
    PUSH 0x0                            ; 0048e701
    LEA EAX,[ESP + 0x4]                 ; 0048e703
    PUSH EAX                            ; 0048e707
    MOV ESI,dword ptr [EBX + 0x14c]     ; 0048e708
    PUSH EBX                            ; 0048e70e
    CALL dword ptr [ESI + 0x14]         ; 0048e70f
    ADD ESP,0x8                         ; 0048e712
    PUSH EAX                            ; 0048e715
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 0048e716
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 0048e71b
    MOV ESI,EAX                         ; 0048e71e
    MOV dword ptr [EBX + 0x5d4],EAX     ; 0048e720
    TEST EAX,EAX                        ; 0048e726
    JNZ 0x0048e741                      ; 0048e728
        ;   XREF to: 0048e741 (CONDITIONAL_JUMP)  ; LAB_0048e741
    MOV EBX,dword ptr [0x005ae704]      ; 0048e72a | DAT_005ae704
        ;   Label: LAB_0048e72a
    PUSH EBX                            ; 0048e730 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 0048e731
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 0048e736
    MOV EAX,ESI                         ; 0048e739
    ADD ESP,0x18                        ; 0048e73b
    POP ESI                             ; 0048e73e
    POP EBX                             ; 0048e73f
    RET                                 ; 0048e740
    PUSH -0x1                           ; 0048e741
        ;   Label: LAB_0048e741
    ADD EBX,0x150                       ; 0048e743
    PUSH 0x0                            ; 0048e749
    PUSH EBX                            ; 0048e74b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 0048e74c
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0048e751
    JMP 0x0048e72a                      ; 0048e754
        ;   XREF to: 0048e72a (UNCONDITIONAL_JUMP)  ; LAB_0048e72a

