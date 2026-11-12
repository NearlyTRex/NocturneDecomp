; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_archive_FUN_00589d60(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x104]:1  local_104
;
; XREF[2]:
;   core_melee.cpp_CMelee_archive_FUN_004eaa00 at 004eaa06
;   core_turret.cpp_CTurret_archive_FUN_0057efa0 at 0057efa6
;
; Referenced Globals:
;   TerminatedCString s_modelName_005ee4ca
;   TerminatedCString s_carriedByActor_005ee4d4
;   TerminatedCString s_weaponState_005ee4e3
;   TerminatedCString s_ammoCount_005ee4ef
;   TerminatedCString s_ammoType_005ee4f9
;   TerminatedCString s_descriptiveName_005ee502
;   TerminatedCString s_simTimer_005ee512
;   int g_CWeaponClassVersion = 0x7
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b9e0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60
;   core_actor.cpp_archiveLocalizedString_FUN_0040b850
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00589d60
        ;   Label: core_weapon.cpp_CWeapon_archive_FUN_00589d60
    SUB ESP,0x100                       ; 00589d61
    MOV EBX,dword ptr [ESP + 0x108]     ; 00589d67
    PUSH EBX                            ; 00589d6e
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 00589d6f
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00589d74
    PUSH 0x5ee4ca                       ; 00589d77 | = "modelName"
    LEA EAX,[EBX + 0x2b4]               ; 00589d7c
    PUSH EAX                            ; 00589d82
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60 ; 00589d83
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60(CKeyFramedModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x0061e8e0]      ; 00589d88 | g_CWeaponClassVersion
    ADD ESP,0x8                         ; 00589d8e
    CMP EDX,0x3                         ; 00589d91
    JGE 0x00589e07                      ; 00589d94
        ;   XREF to: 00589e07 (CONDITIONAL_JUMP)  ; LAB_00589e07
    CMP dword ptr [0x0061e8e0],0x4      ; 00589d96 | g_CWeaponClassVersion
        ;   Label: LAB_00589d96
    JL 0x00589ddb                       ; 00589d9d
        ;   XREF to: 00589ddb (CONDITIONAL_JUMP)  ; LAB_00589ddb
    PUSH 0x5ee4e3                       ; 00589d9f | = "weaponState"
    LEA EAX,[EBX + 0x430]               ; 00589da4
    PUSH EAX                            ; 00589daa
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00589dab
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00589db0
    PUSH 0x5ee4ef                       ; 00589db3 | = "ammoCount"
    LEA EAX,[EBX + 0x6c4]               ; 00589db8
    PUSH EAX                            ; 00589dbe
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00589dbf
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00589dc4
    PUSH 0x5ee4f9                       ; 00589dc7 | = "ammoType"
    LEA EAX,[EBX + 0x6c8]               ; 00589dcc
    PUSH EAX                            ; 00589dd2
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00589dd3
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00589dd8
    CMP dword ptr [0x0061e8e0],0x5      ; 00589ddb | g_CWeaponClassVersion
        ;   Label: LAB_00589ddb
    JNZ 0x00589df6                      ; 00589de2
        ;   XREF to: 00589df6 (CONDITIONAL_JUMP)  ; LAB_00589df6
    PUSH 0x5ee502                       ; 00589de4 | = "descriptiveName"
    LEA EAX,[ESP + 0x4]                 ; 00589de9
    PUSH EAX                            ; 00589ded
    CALL core_actor.cpp_archiveLocalizedString_FUN_0040b850 ; 00589dee
        ;   XREF to: 0040b850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveLocalizedString_FUN_0040b850(char * string_buffer, char * localization_key)
    ADD ESP,0x8                         ; 00589df3
    CMP dword ptr [0x0061e8e0],0x7      ; 00589df6 | g_CWeaponClassVersion
        ;   Label: LAB_00589df6
    JGE 0x00589e20                      ; 00589dfd
        ;   XREF to: 00589e20 (CONDITIONAL_JUMP)  ; LAB_00589e20
    ADD ESP,0x100                       ; 00589dff
    POP EBX                             ; 00589e05
    RET                                 ; 00589e06
    PUSH 0x5ee4d4                       ; 00589e07 | = "carriedByActor"
        ;   Label: LAB_00589e07
    LEA EAX,[EBX + 0x460]               ; 00589e0c
    PUSH EAX                            ; 00589e12
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 00589e13
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b9e0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 00589e18
    JMP 0x00589d96                      ; 00589e1b
        ;   XREF to: 00589d96 (UNCONDITIONAL_JUMP)  ; LAB_00589d96
    PUSH 0x5ee512                       ; 00589e20 | = "simTimer"
        ;   Label: LAB_00589e20
    ADD EBX,0x6cc                       ; 00589e25
    PUSH EBX                            ; 00589e2b
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00589e2c
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00589e31
    ADD ESP,0x100                       ; 00589e34
    POP EBX                             ; 00589e3a
    RET                                 ; 00589e3b

