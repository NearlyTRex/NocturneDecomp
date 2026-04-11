; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAmmo * __cdecl core_ammo_cpp_CAmmo_ctor_FUN_00410dc0(CAmmo *this_ptr)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_ammo.cpp_factoryFunc_FUN_00410d80 at 00410d9a
;   core_ammobox.cpp_CAmmoBox_addToInventory_FUN_00411700 at 0041175f
;   core_game.cpp_giveHeroWeaponAmmo_FUN_004dd930 at 004dd955
;   core_inv.cpp_CInventory_createAmmoFromWeapon_FUN_004fe900 at 004fe92e
;
; Referenced Globals:
;   TerminatedCString s_bullet_kfm_00614934
;   TerminatedCString s_CGun_0061493f
;   undefined4 s_Gun_0061493f+1
;   undefined4 s_un_0061493f+2
;   undefined4 s_n_0061493f+3
;   CDemonActor_vtable g_CAmmoVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410dc0
        ;   Label: core_ammo.cpp_CAmmo_ctor_FUN_00410dc0
    PUSH ESI                            ; 00410dc1
    PUSH EDI                            ; 00410dc2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00410dc3
    PUSH EBX                            ; 00410dc7
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 00410dc8
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00410dcd
    ADD EAX,0x158                       ; 00410dd0
    PUSH EAX                            ; 00410dd5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 00410dd6
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00410ddb
    LEA EBX,[EAX + 0xfffffea8]          ; 00410dde
    PUSH 0x614934                       ; 00410de4 | = "bullet.kfm"
    LEA EAX,[EBX + 0x158]               ; 00410de9
    PUSH EAX                            ; 00410def
    MOV dword ptr [EBX + 0x154],0x6599a4 ; 00410df0 | g_CAmmoVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 00410dfa
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00410dff
    MOV ESI,0x61493f                    ; 00410e02 | = "CGun"
    LEA EDI,[EBX + 0x2d4]               ; 00410e07
    PUSH EDI                            ; 00410e0d
    MOV AL,byte ptr [ESI]               ; 00410e0e | = "CGun" | s_un_0061493f+2
        ;   Label: LAB_00410e0e
    MOV byte ptr [EDI],AL               ; 00410e10
    CMP AL,0x0                          ; 00410e12
    JZ 0x00410e26                       ; 00410e14
        ;   XREF to: 00410e26 (CONDITIONAL_JUMP)  ; LAB_00410e26
    MOV AL,byte ptr [ESI + 0x1]         ; 00410e16 | s_Gun_0061493f+1 | s_n_0061493f+3
    ADD ESI,0x2                         ; 00410e19
    MOV byte ptr [EDI + 0x1],AL         ; 00410e1c
    ADD EDI,0x2                         ; 00410e1f
    CMP AL,0x0                          ; 00410e22
    JNZ 0x00410e0e                      ; 00410e24
        ;   XREF to: 00410e0e (CONDITIONAL_JUMP)  ; LAB_00410e0e
    POP EDI                             ; 00410e26
        ;   Label: LAB_00410e26
    MOV dword ptr [EBX + 0x314],0x14    ; 00410e27
    MOV EAX,EBX                         ; 00410e31
    MOV dword ptr [EBX + 0x318],0x0     ; 00410e33
    POP EDI                             ; 00410e3d
    POP ESI                             ; 00410e3e
    POP EBX                             ; 00410e3f
    RET                                 ; 00410e40

