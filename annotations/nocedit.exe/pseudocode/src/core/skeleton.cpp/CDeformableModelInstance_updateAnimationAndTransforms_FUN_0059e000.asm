; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000 (CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[12]:
;   core_cloth.cpp_FUN_00439710 at 00439fbd
;   core_mimic.cpp_CMimic_setup_FUN_0051f3e0 at 0051f731
;   core_moloch.cpp_CMoloch_process_FUN_00528d20 at 0052924b
;   core_morph.cpp_FUN_0052aa30 at 0052aa37
;   core_msnedit.cpp_FUN_00536e20 at 005371e7
;   core_passngr.cpp_CPassenger_setup_FUN_00545d30 at 00545de8
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 0059715e
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480 at 005a059d
;   core_succubus.cpp_CSuccubus_FUN_005c6b60 at 005c6e55
;   core_succubus.cpp_CSuccubus_process_FUN_005c6e90 at 005c70fc
;   ... and 2 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059e000
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
    PUSH EDX                            ; 0059e004
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 0059e005
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059e00a
    MOV ECX,dword ptr [ESP + 0x4]       ; 0059e00d
    PUSH ECX                            ; 0059e011
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40 ; 0059e012
        ;   XREF to: 0059fb40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0059e017
    RET                                 ; 0059e01a

