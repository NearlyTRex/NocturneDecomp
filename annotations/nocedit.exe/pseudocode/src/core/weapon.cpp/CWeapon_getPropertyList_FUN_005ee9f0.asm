; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_getPropertyList_FUN_005ee9f0(CWeapon *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; XREF[2]:
;   core_melee.cpp_CMelee_getPropertyList_FUN_0050ecf0 at 0050ecfc
;   core_turret.cpp_CTurret_getPropertyList_FUN_005e3ca0 at 005e3cac
;
; Referenced Globals:
;   TerminatedCString s_Model_file_kfm_00657b31
;   TerminatedCString s_Weapon_state_00657b6d
;   TerminatedCString s_Sim_timer_00657b7a
;   SEnumPair[4] g_WeaponStateTypePairs
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addEnumPair_FUN_0040e640
;   core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ee9f0
        ;   Label: core_weapon.cpp_CWeapon_getPropertyList_FUN_005ee9f0
    PUSH ESI                            ; 005ee9f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ee9f2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005ee9f6
    PUSH ESI                            ; 005ee9fa
    PUSH EBX                            ; 005ee9fb
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 005ee9fc
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 005eea01
    PUSH 0x0                            ; 005eea04
    LEA EAX,[EBX + 0x158]               ; 005eea06
    PUSH EAX                            ; 005eea0c
    PUSH 0x657b31                       ; 005eea0d | = "Model file (.kfm)"
    PUSH ESI                            ; 005eea12
    CALL core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0 ; 005eea13
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0(CActorPropertyList * this_ptr, char * property_name, CKeyFramedModelInstance * data_ptr, int allow_none)
    ADD ESP,0x10                        ; 005eea18
    LEA EAX,[EBX + 0x2d4]               ; 005eea1b
    PUSH EAX                            ; 005eea21
    PUSH 0x6848b4                       ; 005eea22 | g_WeaponStateTypePairs
    PUSH 0x4                            ; 005eea27
    PUSH 0x657b6d                       ; 005eea29 | = "Weapon state"
    PUSH ESI                            ; 005eea2e
    CALL core_actor.cpp_CActorPropertyList_addEnumPair_FUN_0040e640 ; 005eea2f
        ;   XREF to: 0040e640 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEnumPair_FUN_0040e640(CActorPropertyList * this_ptr, char * property_name, int num_pairs, SEnumPair * pairs, ...)
    MOV EDX,dword ptr [EBX + 0x2d4]     ; 005eea34
    ADD ESP,0x14                        ; 005eea3a
    TEST EDX,EDX                        ; 005eea3d
    JZ 0x005eea44                       ; 005eea3f
        ;   XREF to: 005eea44 (CONDITIONAL_JUMP)  ; LAB_005eea44
    POP ESI                             ; 005eea41
    POP EBX                             ; 005eea42
    RET                                 ; 005eea43
    PUSH EDX                            ; 005eea44
        ;   Label: LAB_005eea44
    ADD EBX,0x570                       ; 005eea45
    PUSH EBX                            ; 005eea4b
    PUSH 0x657b7a                       ; 005eea4c | = "Sim timer"
    PUSH ESI                            ; 005eea51
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 005eea52
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 005eea57
    POP ESI                             ; 005eea5a
    POP EBX                             ; 005eea5b
    RET                                 ; 005eea5c

