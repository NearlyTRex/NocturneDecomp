; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weapon_cpp_CWeapon_setup_FUN_00553f10(int param_1)
;
;
; XREF[2]:
;   FUN_005495f0 at 0054960b
;   core_baron.cpp_CBaronWeapon_setup_FUN_004113b0 at 004113b5
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;   core_weapon.cpp_CWeapon_setupPhysicsBox_FUN_00554660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553f10
        ;   Label: core_weapon.cpp_CWeapon_setup_FUN_00553f10
    MOV EBX,dword ptr [ESP + 0x8]       ; 00553f11
    PUSH EBX                            ; 00553f15
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 00553f16
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setup_FUN_00409fc0()
    ADD ESP,0x4                         ; 00553f1b
    LEA EAX,[EBX + 0x150]               ; 00553f1e
    PUSH EAX                            ; 00553f24
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 00553f25
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510()
    ADD ESP,0x4                         ; 00553f2a
    PUSH EBX                            ; 00553f2d
    CALL core_weapon.cpp_CWeapon_setupPhysicsBox_FUN_00554660 ; 00553f2e
        ;   XREF to: 00554660 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_CWeapon_setupPhysicsBox_FUN_00554660()
    ADD ESP,0x4                         ; 00553f33
    MOV dword ptr [EBX + 0x56c],0x0     ; 00553f36
    POP EBX                             ; 00553f40
    RET                                 ; 00553f41

