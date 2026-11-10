; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_setup_FUN_005ad640(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_baron.cpp_CBaronWeapon_setup_FUN_004104c0 at 004104c5
;   core_turret.cpp_CTurret_setup_FUN_005a21a0 at 005a21bb
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408850
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;   core_weapon.cpp_FUN_005ade40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad640
        ;   Label: core_weapon.cpp_CWeapon_setup_FUN_005ad640
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ad641
    PUSH EBX                            ; 005ad645
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408850 ; 005ad646
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408850(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005ad64b
    LEA EAX,[EBX + 0x158]               ; 005ad64e
    PUSH EAX                            ; 005ad654
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 005ad655
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005ad65a
    PUSH EBX                            ; 005ad65d
    CALL core_weapon.cpp_FUN_005ade40   ; 005ad65e
        ;   XREF to: 005ade40 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_FUN_005ade40()
    ADD ESP,0x4                         ; 005ad663
    MOV dword ptr [EBX + 0x574],0x0     ; 005ad666
    POP EBX                             ; 005ad670
    RET                                 ; 005ad671

