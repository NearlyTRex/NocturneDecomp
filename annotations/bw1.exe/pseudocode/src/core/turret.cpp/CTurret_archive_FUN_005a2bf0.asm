; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_turret_cpp_CTurret_archive_FUN_005a2bf0(CTurret *this_ptr)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_homeOrient_005f8aa8
;   TerminatedCString s_state_005f8ab3
;   TerminatedCString s_activateEvent_005f8ab9
;   TerminatedCString s_chargeTime_005f8ac7
;   TerminatedCString s_patrolTime_005f8ad2
;   TerminatedCString s_powerDownTime_005f8add
;   TerminatedCString s_fireDelayTime_005f8aeb
;   TerminatedCString s_timer_005f8af9
;   TerminatedCString s_guardZoneTriggerPtr_005f8aff
;   TerminatedCString s_allowedVictimTypes_005f8b13
;   TerminatedCString s_rotateDegPerSec_005f8b26
;   TerminatedCString s_canManualAim_005f8b36
;   int g_CTurretClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b6f0
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveOrientation_FUN_0040b260
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_weapon.cpp_CWeapon_archive_FUN_005ad8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a2bf0
        ;   Label: core_turret.cpp_CTurret_archive_FUN_005a2bf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a2bf1
    PUSH EBX                            ; 005a2bf5
    CALL core_weapon.cpp_CWeapon_archive_FUN_005ad8b0 ; 005a2bf6
        ;   XREF to: 005ad8b0 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_archive_FUN_005ad8b0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 005a2bfb
    PUSH 0x5f8aa8                       ; 005a2bfe | = "homeOrient"
    LEA EAX,[EBX + 0x578]               ; 005a2c03
    PUSH EAX                            ; 005a2c09
    CALL core_actor.cpp_archiveOrientation_FUN_0040b260 ; 005a2c0a
        ;   XREF to: 0040b260 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveOrientation_FUN_0040b260(COrientation * orient_ptr, char * property_name)
    ADD ESP,0x8                         ; 005a2c0f
    PUSH 0x5f8ab3                       ; 005a2c12 | = "state"
    LEA EAX,[EBX + 0x700]               ; 005a2c17
    PUSH EAX                            ; 005a2c1d
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 005a2c1e
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005a2c23
    PUSH 0x5f8ab9                       ; 005a2c26 | = "activateEvent"
    LEA EAX,[EBX + 0x704]               ; 005a2c2b
    PUSH EAX                            ; 005a2c31
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 005a2c32
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005a2c37
    PUSH 0x5f8ac7                       ; 005a2c3a | = "chargeTime"
    LEA EAX,[EBX + 0x768]               ; 005a2c3f
    PUSH EAX                            ; 005a2c45
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 005a2c46
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005a2c4b
    PUSH 0x5f8ad2                       ; 005a2c4e | = "patrolTime"
    LEA EAX,[EBX + 0x76c]               ; 005a2c53
    PUSH EAX                            ; 005a2c59
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 005a2c5a
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005a2c5f
    PUSH 0x5f8add                       ; 005a2c62 | = "powerDownTime"
    LEA EAX,[EBX + 0x770]               ; 005a2c67
    PUSH EAX                            ; 005a2c6d
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 005a2c6e
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005a2c73
    PUSH 0x5f8aeb                       ; 005a2c76 | = "fireDelayTime"
    LEA EAX,[EBX + 0x774]               ; 005a2c7b
    PUSH EAX                            ; 005a2c81
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 005a2c82
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005a2c87
    PUSH 0x5f8af9                       ; 005a2c8a | = "timer"
    LEA EAX,[EBX + 0x77c]               ; 005a2c8f
    PUSH EAX                            ; 005a2c95
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 005a2c96
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005a2c9b
    PUSH 0x5f8aff                       ; 005a2c9e | = "guardZoneTriggerPtr"
    LEA EAX,[EBX + 0x780]               ; 005a2ca3
    PUSH EAX                            ; 005a2ca9
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 005a2caa
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b6f0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 005a2caf
    PUSH 0x5f8b13                       ; 005a2cb2 | = "allowedVictimTypes"
    LEA EAX,[EBX + 0x784]               ; 005a2cb7
    PUSH EAX                            ; 005a2cbd
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 005a2cbe
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005a2cc3
    PUSH 0x5f8b26                       ; 005a2cc6 | = "rotateDegPerSec"
    LEA EAX,[EBX + 0x778]               ; 005a2ccb
    PUSH EAX                            ; 005a2cd1
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 005a2cd2
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    MOV EDX,dword ptr [0x00625c04]      ; 005a2cd7 | g_CTurretClassVersion
    ADD ESP,0x8                         ; 005a2cdd
    CMP EDX,0x2                         ; 005a2ce0
    JGE 0x005a2ce7                      ; 005a2ce3
        ;   XREF to: 005a2ce7 (CONDITIONAL_JUMP)  ; LAB_005a2ce7
    POP EBX                             ; 005a2ce5
    RET                                 ; 005a2ce6
    PUSH 0x5f8b36                       ; 005a2ce7 | = "canManualAim"
        ;   Label: LAB_005a2ce7
    ADD EBX,0x858                       ; 005a2cec
    PUSH EBX                            ; 005a2cf2
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 005a2cf3
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005a2cf8
    POP EBX                             ; 005a2cfb
    RET                                 ; 005a2cfc

