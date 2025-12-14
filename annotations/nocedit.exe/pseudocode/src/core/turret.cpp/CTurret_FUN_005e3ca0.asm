; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_turret.cpp_CTurret_FUN_005e3ca0(CTurret * this_ptr)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_State_006567da
;   TerminatedCString s_Activate_event_006567e0
;   TerminatedCString s_Charge_time_006567ef
;   TerminatedCString s_Patrol_time_006567fb
;   TerminatedCString s_Power_down_time_00656807
;   TerminatedCString s_Fire_delay_time_00656817
;   TerminatedCString s_Rotate_speed_deg_sec_00656827
;   TerminatedCString s_CTrigger_0065683e
;   TerminatedCString s_Guard_zone_box_trigger_00656847
;   TerminatedCString s_Allowed_victim_types_00656860
;   TerminatedCString s_canManualAim_00656875
;   void* PTR_s_Inactive_00684414 = 006567b0
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e1a0
;   core_actor.cpp_CActorPropertyList_FUN_0040e290
;   core_actor.cpp_CActorPropertyList_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_FUN_0040e350
;   core_actor.cpp_CActorPropertyList_FUN_0040e460
;   core_actor.cpp_CActorPropertyList_FUN_0040e640
;   core_weapon.cpp_CWeapon_FUN_005ee9f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e3ca0
        ;   Label: core_turret.cpp_CTurret_FUN_005e3ca0
    PUSH ESI                            ; 005e3ca1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005e3ca2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005e3ca6
    PUSH ESI                            ; 005e3caa
    PUSH EBX                            ; 005e3cab
    CALL core_weapon.cpp_CWeapon_FUN_005ee9f0 ; 005e3cac
        ;   XREF to: 005ee9f0 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_FUN_005ee9f0(CWeapon * this_ptr)
    ADD ESP,0x8                         ; 005e3cb1
    LEA EAX,[EBX + 0x700]               ; 005e3cb4
    PUSH EAX                            ; 005e3cba
    PUSH 0x684414                       ; 005e3cbb | PTR_s_Inactive_00684414
    PUSH 0x5                            ; 005e3cc0
    PUSH 0x6567da                       ; 005e3cc2 | = "State"
    PUSH ESI                            ; 005e3cc7
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e640 ; 005e3cc8
        ;   XREF to: 0040e640 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e640(CActorPropertyList * this_ptr)
    ADD ESP,0x14                        ; 005e3ccd
    LEA EAX,[EBX + 0x704]               ; 005e3cd0
    PUSH EAX                            ; 005e3cd6
    PUSH 0x6567e0                       ; 005e3cd7 | = "Activate event"
    PUSH ESI                            ; 005e3cdc
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e460 ; 005e3cdd
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e460(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 005e3ce2
    PUSH 0x0                            ; 005e3ce5
    PUSH 0x47c34f80                     ; 005e3ce7
    LEA EAX,[EBX + 0x768]               ; 005e3cec
    PUSH 0x0                            ; 005e3cf2
    PUSH EAX                            ; 005e3cf4
    PUSH 0x6567ef                       ; 005e3cf5 | = "Charge time"
    PUSH ESI                            ; 005e3cfa
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0 ; 005e3cfb
        ;   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e1a0(CActorPropertyList * this_ptr)
    ADD ESP,0x18                        ; 005e3d00
    PUSH 0x0                            ; 005e3d03
    PUSH 0x47c34f80                     ; 005e3d05
    LEA EAX,[EBX + 0x76c]               ; 005e3d0a
    PUSH 0x0                            ; 005e3d10
    PUSH EAX                            ; 005e3d12
    PUSH 0x6567fb                       ; 005e3d13 | = "Patrol time"
    PUSH ESI                            ; 005e3d18
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0 ; 005e3d19
        ;   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e1a0(CActorPropertyList * this_ptr)
    ADD ESP,0x18                        ; 005e3d1e
    PUSH 0x0                            ; 005e3d21
    PUSH 0x47c34f80                     ; 005e3d23
    LEA EAX,[EBX + 0x770]               ; 005e3d28
    PUSH 0x0                            ; 005e3d2e
    PUSH EAX                            ; 005e3d30
    PUSH 0x656807                       ; 005e3d31 | = "Power down time"
    PUSH ESI                            ; 005e3d36
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0 ; 005e3d37
        ;   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e1a0(CActorPropertyList * this_ptr)
    ADD ESP,0x18                        ; 005e3d3c
    PUSH 0x0                            ; 005e3d3f
    PUSH 0x47c34f80                     ; 005e3d41
    LEA EAX,[EBX + 0x774]               ; 005e3d46
    PUSH 0x0                            ; 005e3d4c
    PUSH EAX                            ; 005e3d4e
    PUSH 0x656817                       ; 005e3d4f | = "Fire delay time"
    PUSH ESI                            ; 005e3d54
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0 ; 005e3d55
        ;   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e1a0(CActorPropertyList * this_ptr)
    ADD ESP,0x18                        ; 005e3d5a
    PUSH 0x0                            ; 005e3d5d
    PUSH 0x47c34f80                     ; 005e3d5f
    LEA EAX,[EBX + 0x778]               ; 005e3d64
    PUSH 0x0                            ; 005e3d6a
    PUSH EAX                            ; 005e3d6c
    PUSH 0x656827                       ; 005e3d6d | = "Rotate speed (deg/sec)"
    PUSH ESI                            ; 005e3d72
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0 ; 005e3d73
        ;   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e1a0(CActorPropertyList * this_ptr)
    ADD ESP,0x18                        ; 005e3d78
    PUSH 0x0                            ; 005e3d7b
    PUSH 0x65683e                       ; 005e3d7d | = "CTrigger"
    PUSH 0x1                            ; 005e3d82
    LEA EAX,[EBX + 0x780]               ; 005e3d84
    PUSH EAX                            ; 005e3d8a
    PUSH 0x656847                       ; 005e3d8b | = "Guard zone box (trigger)"
    PUSH ESI                            ; 005e3d90
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e350 ; 005e3d91
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CActorPropertyList_FUN_0040e350(CActorPropertyList * this_ptr)
    ADD ESP,0x18                        ; 005e3d96
    PUSH 0x0                            ; 005e3d99
    PUSH 0xc8                           ; 005e3d9b
    LEA EAX,[EBX + 0x784]               ; 005e3da0
    PUSH EAX                            ; 005e3da6
    PUSH 0x656860                       ; 005e3da7 | = "Allowed victim types"
    PUSH ESI                            ; 005e3dac
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e290 ; 005e3dad
        ;   XREF to: 0040e290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e290(CActorPropertyList * this_ptr)
    ADD ESP,0x14                        ; 005e3db2
    ADD EBX,0x858                       ; 005e3db5
    PUSH EBX                            ; 005e3dbb
    PUSH 0x656875                       ; 005e3dbc | = "canManualAim"
    PUSH ESI                            ; 005e3dc1
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e330 ; 005e3dc2
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 005e3dc7
    POP ESI                             ; 005e3dca
    POP EBX                             ; 005e3dcb
    RET                                 ; 005e3dcc

