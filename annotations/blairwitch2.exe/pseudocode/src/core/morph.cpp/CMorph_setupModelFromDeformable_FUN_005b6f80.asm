; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005b6f80(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   model_index
; CDeformableModelInstance * Stack[0xc]:4   model_ptr
;
; XREF[7]:
;   core_biggs.cpp_CBiggs_setup_FUN_00414dd0 at 00414e08
;   core_mimic.cpp_CMimic_setup_FUN_004f04f0 at 004f0764
;   core_moloch.cpp_CMoloch_process_FUN_00501530 at 00501be4
;   core_moloch.cpp_CMoloch_setup_FUN_00501480 at 005014eb
;   core_passngr.cpp_CPassenger_setup_FUN_005115e0 at 00511651
;   core_succubus.cpp_CSuccubus_setup_FUN_0056f3a0 at 0056f609
;   core_vampboss.cpp_CVampireBoss_setup_FUN_00581660 at 00581750
;
; Called Functions:
;   core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_005b6350
;   core_morph.cpp_CMorphModel_free_FUN_005b6030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b6f80
        ;   Label: core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005b6f80
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b6f81
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b6f85
    SUB EAX,EDX                         ; 005b6f8c
    SHL EAX,0x6                         ; 005b6f8e
    ADD EAX,EDX                         ; 005b6f91
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b6f93
    SHL EAX,0x3                         ; 005b6f97
    ADD EBX,EAX                         ; 005b6f9a
    PUSH EBX                            ; 005b6f9c
    CALL core_morph.cpp_CMorphModel_free_FUN_005b6030 ; 005b6f9d
        ;   XREF to: 005b6030 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_free_FUN_005b6030(CMorphModel * this_ptr)
    ADD ESP,0x4                         ; 005b6fa2
    MOV EDX,dword ptr [ESP + 0x10]      ; 005b6fa5
    PUSH EDX                            ; 005b6fa9
    PUSH EBX                            ; 005b6faa
    CALL core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_005b6350 ; 005b6fab
        ;   XREF to: 005b6350 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_005b6350(CMorphModel * this_ptr, CDeformableModelInstance * model_ptr)
    ADD ESP,0x8                         ; 005b6fb0
    POP EBX                             ; 005b6fb3
    RET                                 ; 005b6fb4

