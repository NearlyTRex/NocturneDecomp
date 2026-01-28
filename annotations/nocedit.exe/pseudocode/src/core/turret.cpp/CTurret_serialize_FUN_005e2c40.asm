; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_turret_cpp_CTurret_serialize_FUN_005e2c40(CTurret *this_ptr)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_homeOrient_006566c0
;   TerminatedCString s_state_006566cb
;   TerminatedCString s_activateEvent_006566d1
;   TerminatedCString s_chargeTime_006566df
;   TerminatedCString s_patrolTime_006566ea
;   TerminatedCString s_powerDownTime_006566f5
;   TerminatedCString s_fireDelayTime_00656703
;   TerminatedCString s_timer_00656711
;   TerminatedCString s_guardZoneTriggerPtr_00656717
;   TerminatedCString s_allowedVictimTypes_0065672b
;   TerminatedCString s_rotateDegPerSec_0065673e
;   TerminatedCString s_canManualAim_0065674e
;   int g_CTurretClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_serializeActor_FUN_0040b870
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeOrientation_FUN_0040b3e0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;   core_weapon.cpp_CWeapon_serialize_FUN_005ee250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e2c40
        ;   Label: core_turret.cpp_CTurret_serialize_FUN_005e2c40
    MOV EBX,dword ptr [ESP + 0x8]       ; 005e2c41
    PUSH EBX                            ; 005e2c45
    CALL core_weapon.cpp_CWeapon_serialize_FUN_005ee250 ; 005e2c46
        ;   XREF to: 005ee250 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_serialize_FUN_005ee250(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 005e2c4b
    PUSH 0x6566c0                       ; 005e2c4e | = "homeOrient"
    LEA EAX,[EBX + 0x578]               ; 005e2c53
    PUSH EAX                            ; 005e2c59
    CALL core_actor.cpp_serializeOrientation_FUN_0040b3e0 ; 005e2c5a
        ;   XREF to: 0040b3e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeOrientation_FUN_0040b3e0(COrientation * orient_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e2c5f
    PUSH 0x6566cb                       ; 005e2c62 | = "state"
    LEA EAX,[EBX + 0x700]               ; 005e2c67
    PUSH EAX                            ; 005e2c6d
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 005e2c6e
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e2c73
    PUSH 0x6566d1                       ; 005e2c76 | = "activateEvent"
    LEA EAX,[EBX + 0x704]               ; 005e2c7b
    PUSH EAX                            ; 005e2c81
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 005e2c82
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005e2c87
    PUSH 0x6566df                       ; 005e2c8a | = "chargeTime"
    LEA EAX,[EBX + 0x768]               ; 005e2c8f
    PUSH EAX                            ; 005e2c95
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005e2c96
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e2c9b
    PUSH 0x6566ea                       ; 005e2c9e | = "patrolTime"
    LEA EAX,[EBX + 0x76c]               ; 005e2ca3
    PUSH EAX                            ; 005e2ca9
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005e2caa
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e2caf
    PUSH 0x6566f5                       ; 005e2cb2 | = "powerDownTime"
    LEA EAX,[EBX + 0x770]               ; 005e2cb7
    PUSH EAX                            ; 005e2cbd
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005e2cbe
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e2cc3
    PUSH 0x656703                       ; 005e2cc6 | = "fireDelayTime"
    LEA EAX,[EBX + 0x774]               ; 005e2ccb
    PUSH EAX                            ; 005e2cd1
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005e2cd2
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e2cd7
    PUSH 0x656711                       ; 005e2cda | = "timer"
    LEA EAX,[EBX + 0x77c]               ; 005e2cdf
    PUSH EAX                            ; 005e2ce5
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005e2ce6
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e2ceb
    PUSH 0x656717                       ; 005e2cee | = "guardZoneTriggerPtr"
    LEA EAX,[EBX + 0x780]               ; 005e2cf3
    PUSH EAX                            ; 005e2cf9
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 005e2cfa
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e2cff
    PUSH 0x65672b                       ; 005e2d02 | = "allowedVictimTypes"
    LEA EAX,[EBX + 0x784]               ; 005e2d07
    PUSH EAX                            ; 005e2d0d
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 005e2d0e
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005e2d13
    PUSH 0x65673e                       ; 005e2d16 | = "rotateDegPerSec"
    LEA EAX,[EBX + 0x778]               ; 005e2d1b
    PUSH EAX                            ; 005e2d21
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 005e2d22
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    MOV EDX,dword ptr [0x0068443c]      ; 005e2d27 | g_CTurretClassVersion
    ADD ESP,0x8                         ; 005e2d2d
    CMP EDX,0x2                         ; 005e2d30
    JGE 0x005e2d37                      ; 005e2d33
        ;   XREF to: 005e2d37 (CONDITIONAL_JUMP)  ; LAB_005e2d37
    POP EBX                             ; 005e2d35
    RET                                 ; 005e2d36
    PUSH 0x65674e                       ; 005e2d37 | = "canManualAim"
        ;   Label: LAB_005e2d37
    ADD EBX,0x858                       ; 005e2d3c
    PUSH EBX                            ; 005e2d42
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 005e2d43
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005e2d48
    POP EBX                             ; 005e2d4b
    RET                                 ; 005e2d4c

