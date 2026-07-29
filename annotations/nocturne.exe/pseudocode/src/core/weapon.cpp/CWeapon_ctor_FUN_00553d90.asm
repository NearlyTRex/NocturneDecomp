; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWeapon * __cdecl core_weapon_cpp_CWeapon_ctor_FUN_00553d90(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; XREF[13]:
;   core_baron.cpp_CBaronWeapon_ctor_FUN_00411350 at 00411355
;   core_crossbow.cpp_CCrossbow_ctor_FUN_0043cf10 at 0043cf16
;   core_dynamite.cpp_CDynamite_ctor_FUN_0046ebd0 at 0046ebd6
;   core_elephant.cpp_FUN_00477710 at 00477716
;   core_flamegun.cpp_CFlameThrower_ctor_FUN_0048e9c0 at 0048e9c6
;   core_flashlit.cpp_CFlashlight_ctor_FUN_0048ed60 at 0048ed66
;   core_gun.cpp_FUN_004b2760 at 004b2766
;   core_lightgun.cpp_CLightGun_ctor_FUN_004c6e30 at 004c6e36
;   core_melee.cpp_CMelee_ctor_FUN_004cec60 at 004cec68
;   core_shotgun.cpp_FUN_00515d20 at 00515d26
;   ... and 3 more
;
; Referenced Globals:
;   TerminatedCString s_gat_kfm_00597b99
;   CWeapon_full_vtable g_CWeaponVTable
;
; Called Functions:
;   core_actor.cpp_FUN_00409d30
;   core_box.cpp_CBox_ctor_FUN_0041a610
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553d90
        ;   Label: core_weapon.cpp_CWeapon_ctor_FUN_00553d90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00553d91
    PUSH EBX                            ; 00553d95
    CALL core_actor.cpp_FUN_00409d30    ; 00553d96
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_FUN_00409d30(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00553d9b
    ADD EAX,0x150                       ; 00553d9e
    PUSH EAX                            ; 00553da3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 00553da4
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00553da9
    ADD EAX,0x1b0                       ; 00553dac
    PUSH EAX                            ; 00553db1
    CALL core_box.cpp_CBox_ctor_FUN_0041a610 ; 00553db2
        ;   XREF to: 0041a610 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_ctor_FUN_0041a610(CBox * this_ptr)
    LEA EBX,[EAX + 0xfffffd00]          ; 00553db7
    MOV dword ptr [EBX + 0x14c],0x5a4154 ; 00553dbd | g_CWeaponVTable
    MOV dword ptr [EBX + 0x55c],0x40a00000 ; 00553dc7
    MOV dword ptr [EBX + 0x2f8],0x0     ; 00553dd1
    MOV dword ptr [EBX + 0x2cc],0x0     ; 00553ddb
    MOV dword ptr [EBX + 0x2fc],0x0     ; 00553de5
    MOV dword ptr [EBX + 0x560],0x14    ; 00553def
    MOV dword ptr [EBX + 0x564],0x0     ; 00553df9
    MOV dword ptr [EBX + 0x100],0x1     ; 00553e03
    MOV dword ptr [EBX + 0x2d0],0x0     ; 00553e0d
    MOV dword ptr [EBX + 0x2d4],0x0     ; 00553e17
    MOV dword ptr [EBX + 0x2d8],0x0     ; 00553e21
    MOV dword ptr [EBX + 0x2dc],0x0     ; 00553e2b
    MOV dword ptr [EBX + 0x2e0],0x43480000 ; 00553e35
    MOV dword ptr [EBX + 0x2e4],0x0     ; 00553e3f
    ADD ESP,0x4                         ; 00553e49
    MOV dword ptr [EBX + 0x2e8],0x1     ; 00553e4c
    PUSH 0x597b99                       ; 00553e56 | = "gat.kfm"
    MOV dword ptr [EBX + 0x2ec],0xff    ; 00553e5b
    LEA EAX,[EBX + 0x150]               ; 00553e65
    MOV dword ptr [EBX + 0x2f0],0x0     ; 00553e6b
    PUSH EAX                            ; 00553e75
    MOV dword ptr [EBX + 0x2f4],0x0     ; 00553e76
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 00553e80
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00553e85
    MOV dword ptr [EBX + 0x568],0x0     ; 00553e88
    MOV EAX,EBX                         ; 00553e92
    MOV dword ptr [EBX + 0x56c],0x0     ; 00553e94
    POP EBX                             ; 00553e9e
    RET                                 ; 00553e9f

