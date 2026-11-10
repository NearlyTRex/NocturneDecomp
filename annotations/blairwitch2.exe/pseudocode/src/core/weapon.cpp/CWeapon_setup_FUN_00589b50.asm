; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_setup_FUN_00589b50(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_baron.cpp_CBaronWeapon_setup_FUN_00410940 at 00410945
;   core_cross.cpp_CCross_setup_FUN_005a6b90 at 005a6b95
;   core_lantern.cpp_CLantern_setup_FUN_0059ccc0 at 0059ccc5
;   core_turret.cpp_CTurret_setup_FUN_0057e550 at 0057e56b
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408a80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;   core_weapon.cpp_FUN_0058a2f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00589b50
        ;   Label: core_weapon.cpp_CWeapon_setup_FUN_00589b50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00589b51
    PUSH EBX                            ; 00589b55
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408a80 ; 00589b56
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408a80(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00589b5b
    LEA EAX,[EBX + 0x2b4]               ; 00589b5e
    PUSH EAX                            ; 00589b64
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 00589b65
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00589b6a
    PUSH EBX                            ; 00589b6d
    CALL core_weapon.cpp_FUN_0058a2f0   ; 00589b6e
        ;   XREF to: 0058a2f0 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_FUN_0058a2f0()
    ADD ESP,0x4                         ; 00589b73
    MOV dword ptr [EBX + 0x6d0],0x0     ; 00589b76
    POP EBX                             ; 00589b80
    RET                                 ; 00589b81

