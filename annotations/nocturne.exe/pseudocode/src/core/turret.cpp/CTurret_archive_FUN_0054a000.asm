; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_turret_cpp_CTurret_archive_FUN_0054a000(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_homeOrient_00596ddd
;   TerminatedCString s_state_00596de8
;   TerminatedCString s_activateEvent_00596dee
;   TerminatedCString s_chargeTime_00596dfc
;   TerminatedCString s_patrolTime_00596e07
;   TerminatedCString s_powerDownTime_00596e12
;   TerminatedCString s_fireDelayTime_00596e20
;   TerminatedCString s_timer_00596e2e
;   TerminatedCString s_guardZoneTriggerPtr_00596e34
;   TerminatedCString s_allowedVictimTypes_00596e48
;   TerminatedCString s_rotateDegPerSec_00596e5b
;   TerminatedCString s_canManualAim_00596e6b
;   undefined4 DAT_005c1160
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveOrientation_FUN_0040c4f0
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_weapon.cpp_CWeapon_archive_FUN_00554170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054a000
        ;   Label: core_turret.cpp_CTurret_archive_FUN_0054a000
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054a001
    PUSH EBX                            ; 0054a005
    CALL core_weapon.cpp_CWeapon_archive_FUN_00554170 ; 0054a006
        ;   XREF to: 00554170 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_CWeapon_archive_FUN_00554170()
    ADD ESP,0x4                         ; 0054a00b
    PUSH 0x596ddd                       ; 0054a00e | = "homeOrient"
    LEA EAX,[EBX + 0x570]               ; 0054a013
    PUSH EAX                            ; 0054a019
    CALL core_actor.cpp_archiveOrientation_FUN_0040c4f0 ; 0054a01a
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveOrientation_FUN_0040c4f0()
    ADD ESP,0x8                         ; 0054a01f
    PUSH 0x596de8                       ; 0054a022 | = "state"
    LEA EAX,[EBX + 0x6f8]               ; 0054a027
    PUSH EAX                            ; 0054a02d
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0054a02e
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0054a033
    PUSH 0x596dee                       ; 0054a036 | = "activateEvent"
    LEA EAX,[EBX + 0x6fc]               ; 0054a03b
    PUSH EAX                            ; 0054a041
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0054a042
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 0054a047
    PUSH 0x596dfc                       ; 0054a04a | = "chargeTime"
    LEA EAX,[EBX + 0x760]               ; 0054a04f
    PUSH EAX                            ; 0054a055
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0054a056
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0054a05b
    PUSH 0x596e07                       ; 0054a05e | = "patrolTime"
    LEA EAX,[EBX + 0x764]               ; 0054a063
    PUSH EAX                            ; 0054a069
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0054a06a
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0054a06f
    PUSH 0x596e12                       ; 0054a072 | = "powerDownTime"
    LEA EAX,[EBX + 0x768]               ; 0054a077
    PUSH EAX                            ; 0054a07d
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0054a07e
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0054a083
    PUSH 0x596e20                       ; 0054a086 | = "fireDelayTime"
    LEA EAX,[EBX + 0x76c]               ; 0054a08b
    PUSH EAX                            ; 0054a091
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0054a092
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0054a097
    PUSH 0x596e2e                       ; 0054a09a | = "timer"
    LEA EAX,[EBX + 0x774]               ; 0054a09f
    PUSH EAX                            ; 0054a0a5
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0054a0a6
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 0054a0ab
    PUSH 0x596e34                       ; 0054a0ae | = "guardZoneTriggerPtr"
    LEA EAX,[EBX + 0x778]               ; 0054a0b3
    PUSH EAX                            ; 0054a0b9
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 0054a0ba
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 0054a0bf
    PUSH 0x596e48                       ; 0054a0c2 | = "allowedVictimTypes"
    LEA EAX,[EBX + 0x77c]               ; 0054a0c7
    PUSH EAX                            ; 0054a0cd
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0054a0ce
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 0054a0d3
    PUSH 0x596e5b                       ; 0054a0d6 | = "rotateDegPerSec"
    LEA EAX,[EBX + 0x770]               ; 0054a0db
    PUSH EAX                            ; 0054a0e1
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0054a0e2
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    MOV EDX,dword ptr [0x005c1160]      ; 0054a0e7 | DAT_005c1160
    ADD ESP,0x8                         ; 0054a0ed
    CMP EDX,0x2                         ; 0054a0f0
    JGE 0x0054a0f7                      ; 0054a0f3
        ;   XREF to: 0054a0f7 (CONDITIONAL_JUMP)  ; LAB_0054a0f7
    POP EBX                             ; 0054a0f5
    RET                                 ; 0054a0f6
    PUSH 0x596e6b                       ; 0054a0f7 | = "canManualAim"
        ;   Label: LAB_0054a0f7
    ADD EBX,0x850                       ; 0054a0fc
    PUSH EBX                            ; 0054a102
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0054a103
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 0054a108
    POP EBX                             ; 0054a10b
    RET                                 ; 0054a10c

