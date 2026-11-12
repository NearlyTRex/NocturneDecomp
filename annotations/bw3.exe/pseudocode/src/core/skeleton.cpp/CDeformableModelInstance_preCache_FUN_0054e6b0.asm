; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[38]:
;   core_asgaya.cpp_CAsgaya_setup_FUN_005a0b00 at 005a0bc5
;   core_baal.cpp_CBaal_setup_FUN_00596730 at 00596765
;   core_boneguy.cpp_CBoneGuy_setup_FUN_00417630 at 00417641
;   core_carved.cpp_CCarved_setup_FUN_00425ab0 at 00425abe
;   core_charactr.cpp_CCharacter_setup_FUN_0042b0e0 at 0042b16e
;   core_construc.cpp_CConstruct_setup_FUN_004425f0 at 0044262d
;   core_cow.cpp_CZombieCow_setup_FUN_00444fd0 at 00444fde
;   core_darkwolf.cpp_CDarkwolf_setup_FUN_00598800 at 00598817
;   core_demnfolk.cpp_FUN_00454d20 at 00454d31
;   core_dog.cpp_CZombieDog_setup_FUN_00462790 at 0046279d
;   ... and 28 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0054e6e0
;   core_skeleton.cpp_FUN_005500b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054e6b0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
    ADD EAX,0x2350                      ; 0054e6b4
    PUSH EAX                            ; 0054e6b9
    CALL core_skeleton.cpp_FUN_005500b0 ; 0054e6ba
        ;   XREF to: 005500b0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005500b0()
    ADD ESP,0x4                         ; 0054e6bf
    PUSH EAX                            ; 0054e6c2
    MOV EDX,dword ptr [ESP + 0x8]       ; 0054e6c3
    PUSH EDX                            ; 0054e6c7
    CALL core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0054e6e0 ; 0054e6c8
        ;   XREF to: 0054e6e0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0054e6e0(CDeformableModelInstance * this_ptr, CDeformableModel * model_ptr)
    ADD ESP,0x8                         ; 0054e6cd
    RET                                 ; 0054e6d0

