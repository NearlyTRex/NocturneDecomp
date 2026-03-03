; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_archive_FUN_005ee250(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x104]:1  local_104
;
; XREF[2]:
;   core_melee.cpp_CMelee_archive_FUN_0050e920 at 0050e926
;   core_turret.cpp_CTurret_archive_FUN_005e2c40 at 005e2c46
;
; Referenced Globals:
;   TerminatedCString s_modelName_00657ab9
;   TerminatedCString s_carriedByActor_00657ac3
;   TerminatedCString s_weaponState_00657ad2
;   TerminatedCString s_ammoCount_00657ade
;   TerminatedCString s_ammoType_00657ae8
;   TerminatedCString s_descriptiveName_00657af1
;   TerminatedCString s_simTimer_00657b01
;   int g_CWeaponClassVersion = 0x7
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b870
;   core_actor.cpp_archiveFloat_FUN_0040b770
;   core_actor.cpp_archiveInteger_FUN_0040b7f0
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0
;   core_actor.cpp_archiveLocalizedString_FUN_0040b6e0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ee250
        ;   Label: core_weapon.cpp_CWeapon_archive_FUN_005ee250
    SUB ESP,0x100                       ; 005ee251
    MOV EBX,dword ptr [ESP + 0x108]     ; 005ee257
    PUSH EBX                            ; 005ee25e
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c1c0 ; 005ee25f
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005ee264
    PUSH 0x657ab9                       ; 005ee267 | = "modelName"
    LEA EAX,[EBX + 0x158]               ; 005ee26c
    PUSH EAX                            ; 005ee272
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0 ; 005ee273
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
    MOV EDX,dword ptr [0x006848d4]      ; 005ee278 | g_CWeaponClassVersion
    ADD ESP,0x8                         ; 005ee27e
    CMP EDX,0x3                         ; 005ee281
    JGE 0x005ee2f7                      ; 005ee284
        ;   XREF to: 005ee2f7 (CONDITIONAL_JUMP)  ; LAB_005ee2f7
    CMP dword ptr [0x006848d4],0x4      ; 005ee286 | g_CWeaponClassVersion
        ;   Label: LAB_005ee286
    JL 0x005ee2cb                       ; 005ee28d
        ;   XREF to: 005ee2cb (CONDITIONAL_JUMP)  ; LAB_005ee2cb
    PUSH 0x657ad2                       ; 005ee28f | = "weaponState"
    LEA EAX,[EBX + 0x2d4]               ; 005ee294
    PUSH EAX                            ; 005ee29a
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 005ee29b
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005ee2a0
    PUSH 0x657ade                       ; 005ee2a3 | = "ammoCount"
    LEA EAX,[EBX + 0x568]               ; 005ee2a8
    PUSH EAX                            ; 005ee2ae
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 005ee2af
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005ee2b4
    PUSH 0x657ae8                       ; 005ee2b7 | = "ammoType"
    LEA EAX,[EBX + 0x56c]               ; 005ee2bc
    PUSH EAX                            ; 005ee2c2
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 005ee2c3
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005ee2c8
    CMP dword ptr [0x006848d4],0x5      ; 005ee2cb | g_CWeaponClassVersion
        ;   Label: LAB_005ee2cb
    JNZ 0x005ee2e6                      ; 005ee2d2
        ;   XREF to: 005ee2e6 (CONDITIONAL_JUMP)  ; LAB_005ee2e6
    PUSH 0x657af1                       ; 005ee2d4 | = "descriptiveName"
    LEA EAX,[ESP + 0x4]                 ; 005ee2d9
    PUSH EAX                            ; 005ee2dd
    CALL core_actor.cpp_archiveLocalizedString_FUN_0040b6e0 ; 005ee2de
        ;   XREF to: 0040b6e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveLocalizedString_FUN_0040b6e0(char * string_buffer, char * localization_key)
    ADD ESP,0x8                         ; 005ee2e3
    CMP dword ptr [0x006848d4],0x7      ; 005ee2e6 | g_CWeaponClassVersion
        ;   Label: LAB_005ee2e6
    JGE 0x005ee310                      ; 005ee2ed
        ;   XREF to: 005ee310 (CONDITIONAL_JUMP)  ; LAB_005ee310
    ADD ESP,0x100                       ; 005ee2ef
    POP EBX                             ; 005ee2f5
    RET                                 ; 005ee2f6
    PUSH 0x657ac3                       ; 005ee2f7 | = "carriedByActor"
        ;   Label: LAB_005ee2f7
    LEA EAX,[EBX + 0x304]               ; 005ee2fc
    PUSH EAX                            ; 005ee302
    CALL core_actor.cpp_archiveActor_FUN_0040b870 ; 005ee303
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b870(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 005ee308
    JMP 0x005ee286                      ; 005ee30b
        ;   XREF to: 005ee286 (UNCONDITIONAL_JUMP)  ; LAB_005ee286
    PUSH 0x657b01                       ; 005ee310 | = "simTimer"
        ;   Label: LAB_005ee310
    ADD EBX,0x570                       ; 005ee315
    PUSH EBX                            ; 005ee31b
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 005ee31c
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005ee321
    ADD ESP,0x100                       ; 005ee324
    POP EBX                             ; 005ee32a
    RET                                 ; 005ee32b

