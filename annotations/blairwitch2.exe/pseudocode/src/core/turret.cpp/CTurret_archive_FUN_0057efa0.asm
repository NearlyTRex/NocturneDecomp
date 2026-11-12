; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_turret_cpp_CTurret_archive_FUN_0057efa0(CTurret *this_ptr)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_homeOrient_005ed74c
;   TerminatedCString s_state_005ed757
;   TerminatedCString s_activateEvent_005ed75d
;   TerminatedCString s_chargeTime_005ed76b
;   TerminatedCString s_patrolTime_005ed776
;   TerminatedCString s_powerDownTime_005ed781
;   TerminatedCString s_fireDelayTime_005ed78f
;   TerminatedCString s_timer_005ed79d
;   TerminatedCString s_guardZoneTriggerPtr_005ed7a3
;   TerminatedCString s_allowedVictimTypes_005ed7b7
;   TerminatedCString s_rotateDegPerSec_005ed7ca
;   TerminatedCString s_canManualAim_005ed7da
;   int g_CTurretClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b9e0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveOrientation_FUN_0040b550
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_weapon.cpp_CWeapon_archive_FUN_00589d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057efa0
        ;   Label: core_turret.cpp_CTurret_archive_FUN_0057efa0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057efa1
    PUSH EBX                            ; 0057efa5
    CALL core_weapon.cpp_CWeapon_archive_FUN_00589d60 ; 0057efa6
        ;   XREF to: 00589d60 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_archive_FUN_00589d60(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0057efab
    PUSH 0x5ed74c                       ; 0057efae | = "homeOrient"
    LEA EAX,[EBX + 0x6d4]               ; 0057efb3
    PUSH EAX                            ; 0057efb9
    CALL core_actor.cpp_archiveOrientation_FUN_0040b550 ; 0057efba
        ;   XREF to: 0040b550 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveOrientation_FUN_0040b550(COrientation * orient_ptr, char * property_name)
    ADD ESP,0x8                         ; 0057efbf
    PUSH 0x5ed757                       ; 0057efc2 | = "state"
    LEA EAX,[EBX + 0x85c]               ; 0057efc7
    PUSH EAX                            ; 0057efcd
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0057efce
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0057efd3
    PUSH 0x5ed75d                       ; 0057efd6 | = "activateEvent"
    LEA EAX,[EBX + 0x860]               ; 0057efdb
    PUSH EAX                            ; 0057efe1
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 0057efe2
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0057efe7
    PUSH 0x5ed76b                       ; 0057efea | = "chargeTime"
    LEA EAX,[EBX + 0x8c4]               ; 0057efef
    PUSH EAX                            ; 0057eff5
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0057eff6
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0057effb
    PUSH 0x5ed776                       ; 0057effe | = "patrolTime"
    LEA EAX,[EBX + 0x8c8]               ; 0057f003
    PUSH EAX                            ; 0057f009
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0057f00a
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0057f00f
    PUSH 0x5ed781                       ; 0057f012 | = "powerDownTime"
    LEA EAX,[EBX + 0x8cc]               ; 0057f017
    PUSH EAX                            ; 0057f01d
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0057f01e
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0057f023
    PUSH 0x5ed78f                       ; 0057f026 | = "fireDelayTime"
    LEA EAX,[EBX + 0x8d0]               ; 0057f02b
    PUSH EAX                            ; 0057f031
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0057f032
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0057f037
    PUSH 0x5ed79d                       ; 0057f03a | = "timer"
    LEA EAX,[EBX + 0x8d8]               ; 0057f03f
    PUSH EAX                            ; 0057f045
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0057f046
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0057f04b
    PUSH 0x5ed7a3                       ; 0057f04e | = "guardZoneTriggerPtr"
    LEA EAX,[EBX + 0x8dc]               ; 0057f053
    PUSH EAX                            ; 0057f059
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 0057f05a
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b9e0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0057f05f
    PUSH 0x5ed7b7                       ; 0057f062 | = "allowedVictimTypes"
    LEA EAX,[EBX + 0x8e0]               ; 0057f067
    PUSH EAX                            ; 0057f06d
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 0057f06e
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0057f073
    PUSH 0x5ed7ca                       ; 0057f076 | = "rotateDegPerSec"
    LEA EAX,[EBX + 0x8d4]               ; 0057f07b
    PUSH EAX                            ; 0057f081
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0057f082
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    MOV EDX,dword ptr [0x0061e494]      ; 0057f087 | g_CTurretClassVersion
    ADD ESP,0x8                         ; 0057f08d
    CMP EDX,0x2                         ; 0057f090
    JGE 0x0057f097                      ; 0057f093
        ;   XREF to: 0057f097 (CONDITIONAL_JUMP)  ; LAB_0057f097
    POP EBX                             ; 0057f095
    RET                                 ; 0057f096
    PUSH 0x5ed7da                       ; 0057f097 | = "canManualAim"
        ;   Label: LAB_0057f097
    ADD EBX,0x9b4                       ; 0057f09c
    PUSH EBX                            ; 0057f0a2
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0057f0a3
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0057f0a8
    POP EBX                             ; 0057f0ab
    RET                                 ; 0057f0ac

