; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWeapon * __cdecl core_weapon_cpp_CWeapon_ctor_FUN_005899d0(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; XREF[14]:
;   core_baron.cpp_CBaronWeapon_ctor_FUN_004108e0 at 004108e5
;   core_crossbow.cpp_CCrossbow_ctor_FUN_0043a4c0 at 0043a4c6
;   core_dynamite.cpp_CDynamite_ctor_FUN_00479ff0 at 00479ff6
;   core_elephant.cpp_CElephantGun_ctor_FUN_004859a0 at 004859a6
;   core_flamegun.cpp_CFlameThrower_ctor_FUN_004a0d10 at 004a0d16
;   core_flashlit.cpp_CFlashlight_ctor_FUN_004a1060 at 004a1066
;   core_gun.cpp_CGun_ctor_FUN_004cbd50 at 004cbd56
;   core_lantern.cpp_CLantern_ctor_FUN_0059cbd0 at 0059cbd7
;   core_lightgun.cpp_CLightGun_ctor_FUN_004e2a20 at 004e2a26
;   core_melee.cpp_CMelee_ctor_FUN_004ea8b0 at 004ea8b8
;   ... and 4 more
;
; Referenced Globals:
;   TerminatedCString s_gat_kfm_005ee4c2
;   CWeapon_full_vtable g_CWeaponVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;   core_box.cpp_CBox_ctor_FUN_005b1bc0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005899d0
        ;   Label: core_weapon.cpp_CWeapon_ctor_FUN_005899d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005899d1
    PUSH EBX                            ; 005899d5
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 005899d6
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005899db
    ADD EAX,0x2b4                       ; 005899de
    PUSH EAX                            ; 005899e3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 005899e4
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005899e9
    ADD EAX,0x1b0                       ; 005899ec
    PUSH EAX                            ; 005899f1
    CALL core_box.cpp_CBox_ctor_FUN_005b1bc0 ; 005899f2
        ;   XREF to: 005b1bc0 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_ctor_FUN_005b1bc0(CBox * this_ptr)
    LEA EBX,[EAX + 0xfffffb9c]          ; 005899f7
    MOV dword ptr [EBX + 0x2b0],0x5fdf64 ; 005899fd | g_CWeaponVTable
    MOV dword ptr [EBX + 0x6c0],0x40a00000 ; 00589a07
    MOV dword ptr [EBX + 0x45c],0x0     ; 00589a11
    MOV dword ptr [EBX + 0x430],0x0     ; 00589a1b
    MOV dword ptr [EBX + 0x460],0x0     ; 00589a25
    MOV dword ptr [EBX + 0x6c4],0x14    ; 00589a2f
    MOV dword ptr [EBX + 0x6c8],0x0     ; 00589a39
    MOV dword ptr [EBX + 0x100],0x1     ; 00589a43
    MOV dword ptr [EBX + 0x434],0x0     ; 00589a4d
    MOV dword ptr [EBX + 0x438],0x0     ; 00589a57
    MOV dword ptr [EBX + 0x43c],0x0     ; 00589a61
    MOV dword ptr [EBX + 0x440],0x0     ; 00589a6b
    MOV dword ptr [EBX + 0x444],0x43480000 ; 00589a75
    MOV dword ptr [EBX + 0x448],0x0     ; 00589a7f
    ADD ESP,0x4                         ; 00589a89
    MOV dword ptr [EBX + 0x44c],0x1     ; 00589a8c
    PUSH 0x5ee4c2                       ; 00589a96 | = "gat.kfm"
    MOV dword ptr [EBX + 0x450],0xff    ; 00589a9b
    LEA EAX,[EBX + 0x2b4]               ; 00589aa5
    MOV dword ptr [EBX + 0x454],0x0     ; 00589aab
    PUSH EAX                            ; 00589ab5
    MOV dword ptr [EBX + 0x458],0x0     ; 00589ab6
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 00589ac0
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00589ac5
    MOV dword ptr [EBX + 0x6cc],0x0     ; 00589ac8
    MOV EAX,EBX                         ; 00589ad2
    MOV dword ptr [EBX + 0x6d0],0x0     ; 00589ad4
    POP EBX                             ; 00589ade
    RET                                 ; 00589adf

