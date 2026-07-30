; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[10]:
;   core_cloth.cpp_CCloth_setup_FUN_004359e0 at 0043628d
;   core_mimic.cpp_CMimic_setup_FUN_004d4650 at 004d48cc
;   core_moloch.cpp_CMoloch_process_FUN_004ddb20 at 004de04b
;   core_morph.cpp_CMorphModel_animateFromDeformableModel_FUN_004df770 at 004df777
;   core_passngr.cpp_CPassenger_setup_FUN_004ef6d0 at 004ef774
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00 at 0051de1d
;   core_succubus.cpp_CSuccubus_process_FUN_00540f50 at 005411bc
;   core_succubus.cpp_CSuccubus_setup_FUN_00540c20 at 00540f15
;   core_vampboss.cpp_CVampireBoss_process_FUN_0054c690 at 0054c6f1
;   core_vampboss.cpp_CVampireBoss_setup_FUN_0054c3e0 at 0054c58e
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0051b880
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
    PUSH EDX                            ; 0051b884
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 0051b885
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051b88a
    MOV ECX,dword ptr [ESP + 0x4]       ; 0051b88d
    PUSH ECX                            ; 0051b891
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0 ; 0051b892
        ;   XREF to: 0051d3c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051b897
    RET                                 ; 0051b89a

