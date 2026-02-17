; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_setupModelFromDeformable_FUN_0052b430(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   model_index
; CDeformableModelInstance * Stack[0xc]:4   model_ptr
;
; XREF[8]:
;   core_biggs.cpp_CBiggs_setup_FUN_00418680 at 004186b8
;   core_mimic.cpp_CMimic_setup_FUN_0051f3e0 at 0051f653
;   core_moloch.cpp_CMoloch_process_FUN_00528d20 at 00529330
;   core_moloch.cpp_CMoloch_setup_FUN_00528c70 at 00528ce7
;   core_morph.cpp_CMorph_editMorph_FUN_0052bcb0 at 0052c481
;   core_passngr.cpp_CPassenger_setup_FUN_00545d30 at 00545da1
;   core_succubus.cpp_CSuccubus_setup_FUN_005c6b60 at 005c6dc9
;   core_vampboss.cpp_CVampireBoss_setup_FUN_005e56c0 at 005e5827
;
; Called Functions:
;   core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_0052a870
;   core_morph.cpp_CMorphModel_free_FUN_0052a510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052b430
        ;   Label: core_morph.cpp_CMorph_setupModelFromDeformable_FUN_0052b430
    MOV EDX,dword ptr [ESP + 0xc]       ; 0052b431
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052b435
    SUB EAX,EDX                         ; 0052b43c
    SHL EAX,0x6                         ; 0052b43e
    ADD EAX,EDX                         ; 0052b441
    MOV EBX,dword ptr [ESP + 0x8]       ; 0052b443
    SHL EAX,0x3                         ; 0052b447
    ADD EBX,EAX                         ; 0052b44a
    PUSH EBX                            ; 0052b44c
    CALL core_morph.cpp_CMorphModel_free_FUN_0052a510 ; 0052b44d
        ;   XREF to: 0052a510 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_free_FUN_0052a510(CMorphModel * this_ptr)
    ADD ESP,0x4                         ; 0052b452
    MOV EDX,dword ptr [ESP + 0x10]      ; 0052b455
    PUSH EDX                            ; 0052b459
    PUSH EBX                            ; 0052b45a
    CALL core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_0052a870 ; 0052b45b
        ;   XREF to: 0052a870 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_0052a870(CMorphModel * this_ptr, CDeformableModelInstance * model_ptr)
    ADD ESP,0x8                         ; 0052b460
    POP EBX                             ; 0052b463
    RET                                 ; 0052b464

