; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWeapon * __cdecl core_weapon_cpp_CWeapon_ctor_FUN_005ede70(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; XREF[13]:
;   core_baron.cpp_CBaronWeapon_ctor_FUN_00413d40 at 00413d45
;   core_crossbow.cpp_CCrossbow_ctor_FUN_00448c70 at 00448c76
;   core_dynamite.cpp_CDynamite_ctor_FUN_0049cdc0 at 0049cdc6
;   core_elephant.cpp_CElephantGun_ctor_FUN_004a6fe0 at 004a6fe6
;   core_flamegun.cpp_CFlameThrower_ctor_FUN_004cb880 at 004cb886
;   core_flashlit.cpp_CFlashlight_ctor_FUN_004cbbc0 at 004cbbc6
;   core_gun.cpp_CGun_ctor_FUN_004f02f0 at 004f02f6
;   core_lightgun.cpp_CLightGun_ctor_FUN_00505900 at 00505906
;   core_melee.cpp_CMelee_ctor_FUN_0050e7d0 at 0050e7d8
;   core_shotgun.cpp_CShotgun_ctor_FUN_00587ee0 at 00587ee6
;   ... and 3 more
;
; Referenced Globals:
;   TerminatedCString s_gat_kfm_00657ab1
;   CWeapon_full_vtable g_CWeaponVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_box.cpp_CBox_ctor_FUN_0041dc50
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ede70
        ;   Label: core_weapon.cpp_CWeapon_ctor_FUN_005ede70
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ede71
    PUSH EBX                            ; 005ede75
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 005ede76
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005ede7b
    ADD EAX,0x158                       ; 005ede7e
    PUSH EAX                            ; 005ede83
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 005ede84
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005ede89
    ADD EAX,0x1b0                       ; 005ede8c
    PUSH EAX                            ; 005ede91
    CALL core_box.cpp_CBox_ctor_FUN_0041dc50 ; 005ede92
        ;   XREF to: 0041dc50 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_ctor_FUN_0041dc50(CBox * this_ptr)
    LEA EBX,[EAX + 0xfffffcf8]          ; 005ede97
    MOV dword ptr [EBX + 0x154],0x6655b4 ; 005ede9d | g_CWeaponVTable
    MOV dword ptr [EBX + 0x564],0x40a00000 ; 005edea7
    MOV dword ptr [EBX + 0x300],0x0     ; 005edeb1
    MOV dword ptr [EBX + 0x2d4],0x0     ; 005edebb
    MOV dword ptr [EBX + 0x304],0x0     ; 005edec5
    MOV dword ptr [EBX + 0x568],0x14    ; 005edecf
    MOV dword ptr [EBX + 0x56c],0x0     ; 005eded9
    MOV dword ptr [EBX + 0x100],0x1     ; 005edee3
    MOV dword ptr [EBX + 0x2d8],0x0     ; 005edeed
    MOV dword ptr [EBX + 0x2dc],0x0     ; 005edef7
    MOV dword ptr [EBX + 0x2e0],0x0     ; 005edf01
    MOV dword ptr [EBX + 0x2e4],0x0     ; 005edf0b
    MOV dword ptr [EBX + 0x2e8],0x43480000 ; 005edf15
    MOV dword ptr [EBX + 0x2ec],0x0     ; 005edf1f
    ADD ESP,0x4                         ; 005edf29
    MOV dword ptr [EBX + 0x2f0],0x1     ; 005edf2c
    PUSH 0x657ab1                       ; 005edf36 | = "gat.kfm"
    MOV dword ptr [EBX + 0x2f4],0xff    ; 005edf3b
    LEA EAX,[EBX + 0x158]               ; 005edf45
    MOV dword ptr [EBX + 0x2f8],0x0     ; 005edf4b
    PUSH EAX                            ; 005edf55
    MOV dword ptr [EBX + 0x2fc],0x0     ; 005edf56
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 005edf60
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005edf65
    MOV dword ptr [EBX + 0x570],0x0     ; 005edf68
    MOV EAX,EBX                         ; 005edf72
    MOV dword ptr [EBX + 0x574],0x0     ; 005edf74
    POP EBX                             ; 005edf7e
    RET                                 ; 005edf7f

