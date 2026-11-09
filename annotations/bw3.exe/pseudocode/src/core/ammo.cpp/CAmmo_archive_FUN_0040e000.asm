; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ammo_cpp_CAmmo_archive_FUN_0040e000(CAmmo *this_ptr)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_005b60c7
;   TerminatedCString s_weaponClassName_005b60d1
;   TerminatedCString s_ammoCount_005b60e1
;   TerminatedCString s_ammoType_005b60eb
;
; Called Functions:
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e000
        ;   Label: core_ammo.cpp_CAmmo_archive_FUN_0040e000
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e001
    PUSH EBX                            ; 0040e005
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 0040e006
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040e00b
    PUSH 0x5b60c7                       ; 0040e00e | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 0040e013
    PUSH EAX                            ; 0040e019
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0 ; 0040e01a
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0()
    ADD ESP,0x8                         ; 0040e01f
    PUSH 0x5b60d1                       ; 0040e022 | = "weaponClassName"
    LEA EAX,[EBX + 0x2d4]               ; 0040e027
    PUSH EAX                            ; 0040e02d
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0040e02e
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040e033
    PUSH 0x5b60e1                       ; 0040e036 | = "ammoCount"
    LEA EAX,[EBX + 0x314]               ; 0040e03b
    PUSH EAX                            ; 0040e041
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0040e042
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040e047
    PUSH 0x5b60eb                       ; 0040e04a | = "ammoType"
    ADD EBX,0x318                       ; 0040e04f
    PUSH EBX                            ; 0040e055
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0040e056
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040e05b
    POP EBX                             ; 0040e05e
    RET                                 ; 0040e05f

