; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[41]:
;   core_armour.cpp_CArmour_setup_FUN_0040ea80 at 0040ea97
;   core_batcreat.cpp_CBatCreature_setup_FUN_00411280 at 004112a1
;   core_batman.cpp_CBatman_setup_FUN_00412840 at 00412861
;   core_beast.cpp_CBeast_setup_FUN_00414750 at 0041475a
;   core_biggs.cpp_CBiggs_setup_FUN_00414ab0 at 00414ac7
;   core_boneguy.cpp_CBoneGuy_setup_FUN_0041b940 at 0041b94e
;   core_bride.cpp_CBride_setup_FUN_00423940 at 00423951
;   core_carved.cpp_CCarved_setup_FUN_004287e0 at 004287ee
;   core_charactr.cpp_CCharacter_setup_FUN_0042c510 at 0042c59e
;   core_constrct.cpp_CConstruct_setup_FUN_004459c0 at 004459fd
;   ... and 31 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_00569b50
;   core_skeleton.cpp_FUN_0056b520
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00569b20
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20
    ADD EAX,0x2350                      ; 00569b24
    PUSH EAX                            ; 00569b29
    CALL core_skeleton.cpp_FUN_0056b520 ; 00569b2a
        ;   XREF to: 0056b520 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0056b520()
    ADD ESP,0x4                         ; 00569b2f
    PUSH EAX                            ; 00569b32
    MOV EDX,dword ptr [ESP + 0x8]       ; 00569b33
    PUSH EDX                            ; 00569b37
    CALL core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_00569b50 ; 00569b38
        ;   XREF to: 00569b50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_00569b50(CDeformableModelInstance * this_ptr, CDeformableModel * model_ptr)
    ADD ESP,0x8                         ; 00569b3d
    RET                                 ; 00569b40

