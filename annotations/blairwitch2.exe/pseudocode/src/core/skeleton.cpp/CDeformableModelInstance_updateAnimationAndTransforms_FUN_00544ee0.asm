; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[10]:
;   core_cloth.cpp_FUN_005ae680 at 005af096
;   core_mimic.cpp_FUN_004f04f0 at 004f076d
;   core_moloch.cpp_FUN_00501530 at 00501aff
;   core_morph.cpp_CMorphModel_animateFromDeformableModel_FUN_005b6510 at 005b6517
;   core_passngr.cpp_FUN_005115e0 at 00511684
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005474b0 at 005475da
;   core_succubus.cpp_FUN_0056f3a0 at 0056f695
;   core_succubus.cpp_FUN_0056f6d0 at 0056f980
;   core_vampboss.cpp_FUN_00581660 at 0058180e
;   core_vampboss.cpp_FUN_00581910 at 00581971
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00544ee0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0
    PUSH EDX                            ; 00544ee4
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 00544ee5
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00544eea
    MOV ECX,dword ptr [ESP + 0x4]       ; 00544eed
    PUSH ECX                            ; 00544ef1
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0 ; 00544ef2
        ;   XREF to: 00546ae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00544ef7
    RET                                 ; 00544efa

