; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[31]:
;   core_armour.cpp_CArmour_setup_FUN_0040fa00 at 0040fa17
;   core_batcreat.cpp_CBatCreature_setup_FUN_00412160 at 00412177
;   core_batman.cpp_CBatman_setup_FUN_004134a0 at 004134b7
;   core_beast.cpp_CBeast_setup_FUN_004150b0 at 004150ba
;   core_biggs.cpp_CBiggs_setup_FUN_00415430 at 00415447
;   core_boneguy.cpp_CBoneGuy_setup_FUN_00418800 at 0041880e
;   core_bride.cpp_CBride_setup_FUN_0041fc20 at 0041fc31
;   core_charactr.cpp_CCharacter_setup_FUN_00424260 at 004242e4
;   core_cow.cpp_CZombieCow_setup_FUN_0043bc50 at 0043bc5e
;   core_dog.cpp_CZombieDog_setup_FUN_004546d0 at 004546dd
;   ... and 21 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00
;   core_skeleton.cpp_getDeformableModel_FUN_0051f570
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0051dcd0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
    ADD EAX,0x2260                      ; 0051dcd4
    PUSH EAX                            ; 0051dcd9
    CALL core_skeleton.cpp_getDeformableModel_FUN_0051f570 ; 0051dcda
        ;   XREF to: 0051f570 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_getDeformableModel_FUN_0051f570(char * model_filename)
    ADD ESP,0x4                         ; 0051dcdf
    PUSH EAX                            ; 0051dce2
    MOV EDX,dword ptr [ESP + 0x8]       ; 0051dce3
    PUSH EDX                            ; 0051dce7
    CALL core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00 ; 0051dce8
        ;   XREF to: 0051dd00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00(CDeformableModelInstance * this_ptr, CDeformableModel * model_ptr)
    ADD ESP,0x8                         ; 0051dced
    RET                                 ; 0051dcf0

