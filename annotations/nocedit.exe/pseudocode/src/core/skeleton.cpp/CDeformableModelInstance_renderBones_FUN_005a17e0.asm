; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderBones_FUN_005a17e0(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 00597586
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_renderBones_FUN_0059b800
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a17e0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_renderBones_FUN_005a17e0
    LEA EAX,[EDX + 0xe80]               ; 005a17e4
    PUSH EAX                            ; 005a17ea
    PUSH EDX                            ; 005a17eb
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 005a17ec
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a17f1
    PUSH EAX                            ; 005a17f4
    CALL core_skeleton.cpp_CDeformableModel_renderBones_FUN_0059b800 ; 005a17f5
        ;   XREF to: 0059b800 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_renderBones_FUN_0059b800(CDeformableModel * this_ptr, CMatrix3x4f * bone_matrices)
    ADD ESP,0x8                         ; 005a17fa
    RET                                 ; 005a17fd

