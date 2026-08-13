; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gasmask_cpp_CGasMask_renderOpaque_FUN_004a8ab0(CGasMask *this_ptr)
;
; Parameters:
; CGasMask *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
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

    PUSH EBX                            ; 004a8ab0
        ;   Label: core_gasmask.cpp_CGasMask_renderOpaque_FUN_004a8ab0
    PUSH ESI                            ; 004a8ab1
    SUB ESP,0x18                        ; 004a8ab2
    MOV EBX,dword ptr [ESP + 0x24]      ; 004a8ab5
    LEA EAX,[EBX + 0x20]                ; 004a8ab9
    PUSH EAX                            ; 004a8abc
    MOV EDX,dword ptr [0x005ae704]      ; 004a8abd | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 004a8ac3 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 004a8ac4
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004a8ac9
    PUSH 0x0                            ; 004a8acc
    LEA EAX,[EBX + 0x30]                ; 004a8ace
    PUSH EAX                            ; 004a8ad1
    MOV ECX,dword ptr [0x005ae704]      ; 004a8ad2 | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 004a8ad8 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 004a8ad9
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 004a8ade
    PUSH 0x0                            ; 004a8ae1
    LEA EAX,[ESP + 0x4]                 ; 004a8ae3
    PUSH EAX                            ; 004a8ae7
    MOV ESI,dword ptr [EBX + 0x14c]     ; 004a8ae8
    PUSH EBX                            ; 004a8aee
    CALL dword ptr [ESI + 0x14]         ; 004a8aef
    ADD ESP,0x8                         ; 004a8af2
    PUSH EAX                            ; 004a8af5
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 004a8af6
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 004a8afb
    MOV ESI,EAX                         ; 004a8afe
    TEST EAX,EAX                        ; 004a8b00
    JNZ 0x004a8b1b                      ; 004a8b02
        ;   XREF to: 004a8b1b (CONDITIONAL_JUMP)  ; LAB_004a8b1b
    MOV EBX,dword ptr [0x005ae704]      ; 004a8b04 | g_CDemonRenderer_PTR_005ae704
        ;   Label: LAB_004a8b04
    PUSH EBX                            ; 004a8b0a | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 004a8b0b
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004a8b10
    MOV EAX,ESI                         ; 004a8b13
    ADD ESP,0x18                        ; 004a8b15
    POP ESI                             ; 004a8b18
    POP EBX                             ; 004a8b19
    RET                                 ; 004a8b1a
    PUSH -0x1                           ; 004a8b1b
        ;   Label: LAB_004a8b1b
    ADD EBX,0x150                       ; 004a8b1d
    PUSH 0x0                            ; 004a8b23
    PUSH EBX                            ; 004a8b25
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 004a8b26
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004a8b2b
    JMP 0x004a8b04                      ; 004a8b2e
        ;   XREF to: 004a8b04 (UNCONDITIONAL_JUMP)  ; LAB_004a8b04

