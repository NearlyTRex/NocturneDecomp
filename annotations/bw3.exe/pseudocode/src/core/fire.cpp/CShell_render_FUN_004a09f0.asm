; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CShell_render_FUN_004a09f0(CShell *this_ptr)
;
; Parameters:
; CShell *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005df8e4
;   undefined4 DAT_005f2afc
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_007e2a54
;   undefined4 DAT_01bdd7e4
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_02cfd900
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00460f20
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046e6b0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_pop_FUN_0046d080
;   engine_special.cpp_FUN_0056356c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a09f0
        ;   Label: core_fire.cpp_CShell_render_FUN_004a09f0
    PUSH ESI                            ; 004a09f1
    PUSH EDI                            ; 004a09f2
    PUSH EBP                            ; 004a09f3
    SUB ESP,0xc                         ; 004a09f4
    MOV ESI,dword ptr [ESP + 0x20]      ; 004a09f7
    FLD float ptr [ESI + 0x24]          ; 004a09fb
    FLDZ                                ; 004a09fe
    FCOMPP                              ; 004a0a00
    FNSTSW AX                           ; 004a0a02
    SAHF                                ; 004a0a04
    JC 0x004a0a0f                       ; 004a0a05
        ;   XREF to: 004a0a0f (CONDITIONAL_JUMP)  ; LAB_004a0a0f
    ADD ESP,0xc                         ; 004a0a07
        ;   Label: LAB_004a0a07
    POP EBP                             ; 004a0a0a
    POP EDI                             ; 004a0a0b
    POP ESI                             ; 004a0a0c
    POP EBX                             ; 004a0a0d
    RET                                 ; 004a0a0e
    MOV EDI,dword ptr [0x005f2afc]      ; 004a0a0f | DAT_005f2afc
        ;   Label: LAB_004a0a0f
    MOV EBX,ESP                         ; 004a0a15
    MOV EAX,ESI                         ; 004a0a17
    MOV EDI,dword ptr [EDI]             ; 004a0a19 | DAT_01bdd7e4
    FLD float ptr [EAX]                 ; 004a0a1b
    FMUL float ptr [0x005df8e4]         ; 004a0a1d | DAT_005df8e4
    FISTP dword ptr [EBX]               ; 004a0a23
    FLD float ptr [EAX + 0x4]           ; 004a0a25
    FMUL float ptr [0x005df8e4]         ; 004a0a28 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x4]         ; 004a0a2e
    FLD float ptr [EAX + 0x8]           ; 004a0a31
    FMUL float ptr [0x005df8e4]         ; 004a0a34 | DAT_005df8e4
    FISTP dword ptr [EBX + 0x8]         ; 004a0a3a
    MOV EAX,ESP                         ; 004a0a3d
    PUSH EAX                            ; 004a0a3f
    PUSH EDI                            ; 004a0a40
    CALL engine_special.cpp_FUN_0056356c ; 004a0a41
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0056356c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004a0a46
    PUSH EDI                            ; 004a0a49
    MOV EDX,dword ptr [0x005f2afc]      ; 004a0a4a | DAT_005f2afc
    PUSH EDX                            ; 004a0a50 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046e6b0 ; 004a0a51
        ;   XREF to: 0046e6b0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046e6b0(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
    ADD ESP,0x8                         ; 004a0a56
    TEST EAX,EAX                        ; 004a0a59
    JZ 0x004a0a07                       ; 004a0a5b
        ;   XREF to: 004a0a07 (CONDITIONAL_JUMP)  ; LAB_004a0a07
    MOV ECX,dword ptr [0x005f2afc]      ; 004a0a5d | DAT_005f2afc
    PUSH ECX                            ; 004a0a63 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 004a0a64
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004a0a69
    TEST EAX,EAX                        ; 004a0a6c
    JNZ 0x004a0a82                      ; 004a0a6e
        ;   XREF to: 004a0a82 (CONDITIONAL_JUMP)  ; LAB_004a0a82
    PUSH 0x0                            ; 004a0a70
    MOV EAX,[0x007e2a54]                ; 004a0a72 | DAT_007e2a54
    PUSH ESI                            ; 004a0a77
    MOV EBX,dword ptr [EAX + 0x3c]      ; 004a0a78
    PUSH EAX                            ; 004a0a7b
    CALL dword ptr [EBX + 0x4]          ; 004a0a7c
    ADD ESP,0xc                         ; 004a0a7f
    PUSH 0x0                            ; 004a0a82
        ;   Label: LAB_004a0a82
    PUSH 0x2cfd900                      ; 004a0a84 | DAT_02cfd900
    PUSH 0x2cfd900                      ; 004a0a89 | DAT_02cfd900
    LEA EBX,[ESI + 0x40]                ; 004a0a8e
    PUSH EBX                            ; 004a0a91
    PUSH ESI                            ; 004a0a92
    MOV EDI,dword ptr [0x00603b28]      ; 004a0a93 | g_CDemonSetPtr
    PUSH EDI                            ; 004a0a99 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0 ; 004a0a9a
        ;   XREF to: 005375c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_005375c0(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 004a0a9f
    PUSH ESI                            ; 004a0aa2
    MOV EBP,dword ptr [0x005f2afc]      ; 004a0aa3 | DAT_005f2afc
    PUSH EBP                            ; 004a0aa9 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 004a0aaa
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004a0aaf
    PUSH 0x0                            ; 004a0ab2
    PUSH EBX                            ; 004a0ab4
    MOV EAX,[0x005f2afc]                ; 004a0ab5 | DAT_005f2afc
    PUSH EAX                            ; 004a0aba | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 004a0abb
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004a0ac0
    PUSH -0x1                           ; 004a0ac3
    PUSH 0x0                            ; 004a0ac5
    PUSH 0x0                            ; 004a0ac7
    MOV EDX,dword ptr [ESI + 0x5c]      ; 004a0ac9
    PUSH EDX                            ; 004a0acc
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00460f20 ; 004a0acd
        ;   XREF to: 00460f20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00460f20(CKeyFramedModel * this_ptr, int frame_index, CKeyFramedModelInstance * instance, int render_flags)
    ADD ESP,0x10                        ; 004a0ad2
    MOV ECX,dword ptr [0x005f2afc]      ; 004a0ad5 | DAT_005f2afc
    PUSH ECX                            ; 004a0adb | DAT_01bdd7e4
    CALL engine_drender.cpp_pop_FUN_0046d080 ; 004a0adc
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 004a0ae1
    ADD ESP,0xc                         ; 004a0ae4
    POP EBP                             ; 004a0ae7
    POP EDI                             ; 004a0ae8
    POP ESI                             ; 004a0ae9
    POP EBX                             ; 004a0aea
    RET                                 ; 004a0aeb

