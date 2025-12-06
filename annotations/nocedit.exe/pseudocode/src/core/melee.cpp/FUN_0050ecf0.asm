; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_melee.cpp_FUN_0050ecf0()
;
;
; Referenced Globals:
;   TerminatedCString s_Allowed_attack_types_00635ced
;   TerminatedCString s_Attack_strength_lo_00635d02
;   TerminatedCString s_Attack_strength_hi_00635d15
;   TerminatedCString s_Can_attach_light_00635d28
;   TerminatedCString s_Dismember_prob_0_0_to_1__00635d39
;   TerminatedCString s_Can_go_in_inventory_00635d53
;   TerminatedCString s_Damage_type_00635da4
;   TerminatedCString s_thrustHitCharacterSound_00635db0
;   TerminatedCString s_swingHitCharacterSound_00635dc8
;   TerminatedCString s_hitOtherSound_00635ddf
;   void* PTR_s_Generic_0067d178 = 00635d67
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_FUN_0040e1a0
;   core_actor.cpp_CActorPropertyList_FUN_0040e2d0
;   core_actor.cpp_CActorPropertyList_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_FUN_0040e640
;   core_actor.cpp_CActorPropertyList_FUN_0040e6a0
;   core_weapon.cpp_CWeapon_FUN_005ee9f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050ecf0
        ;   Label: core_melee.cpp_FUN_0050ecf0
    PUSH ESI                            ; 0050ecf1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0050ecf2
    MOV ESI,dword ptr [ESP + 0x10]      ; 0050ecf6
    PUSH ESI                            ; 0050ecfa
    PUSH EBX                            ; 0050ecfb
    CALL core_weapon.cpp_CWeapon_FUN_005ee9f0 ; 0050ecfc | void core_weapon.cpp_CWeapon_FUN_005ee9f0(CWeapon * this_ptr)
        ;   XREF to: 005ee9f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0050ed01
    LEA EAX,[EBX + 0x578]               ; 0050ed04
    PUSH EAX                            ; 0050ed0a
    PUSH 0x635ced                       ; 0050ed0b | = "Allowed attack types" | s_Allowed_attack_types_00635ced = Allowed attack types
    PUSH ESI                            ; 0050ed10
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e6a0 ; 0050ed11 | void core_actor.cpp_CActorPropertyList_FUN_0040e6a0(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e6a0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0050ed16
    PUSH 0x0                            ; 0050ed19
    LEA EAX,[EBX + 0x57c]               ; 0050ed1b
    PUSH EAX                            ; 0050ed21
    PUSH 0x635d02                       ; 0050ed22 | = "Attack strength lo" | s_Attack_strength_lo_00635d02 = Attack strength lo
    PUSH ESI                            ; 0050ed27
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 0050ed28 | void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0050ed2d
    PUSH 0x0                            ; 0050ed30
    LEA EAX,[EBX + 0x580]               ; 0050ed32
    PUSH EAX                            ; 0050ed38
    PUSH 0x635d15                       ; 0050ed39 | = "Attack strength hi" | s_Attack_strength_hi_00635d15 = Attack strength hi
    PUSH ESI                            ; 0050ed3e
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 0050ed3f | void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0050ed44
    LEA EAX,[EBX + 0x2f0]               ; 0050ed47
    PUSH EAX                            ; 0050ed4d
    PUSH 0x635d28                       ; 0050ed4e | = "Can attach light" | s_Can_attach_light_00635d28 = Can attach light
    PUSH ESI                            ; 0050ed53
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e330 ; 0050ed54 | void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0050ed59
    PUSH 0x0                            ; 0050ed5c
    PUSH 0x3f800000                     ; 0050ed5e
    LEA EAX,[EBX + 0x584]               ; 0050ed63
    PUSH 0x0                            ; 0050ed69
    PUSH EAX                            ; 0050ed6b
    PUSH 0x635d39                       ; 0050ed6c | = "Dismember prob 0.0 to 1.0" | s_Dismember_prob_0_0_to_1__00635d39 = Dismember prob 0.0 to 1.0
    PUSH ESI                            ; 0050ed71
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0 ; 0050ed72 | void core_actor.cpp_CActorPropertyList_FUN_0040e1a0(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 0050ed77
    LEA EAX,[EBX + 0x588]               ; 0050ed7a
    PUSH EAX                            ; 0050ed80
    PUSH 0x635d53                       ; 0050ed81 | = "Can go in inventory" | s_Can_go_in_inventory_00635d53 = Can go in inventory
    PUSH ESI                            ; 0050ed86
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e330 ; 0050ed87 | void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0050ed8c
    LEA EAX,[EBX + 0x59c]               ; 0050ed8f
    PUSH EAX                            ; 0050ed95
    PUSH 0x67d178                       ; 0050ed96 | void * PTR_s_Generic_0067d178
    PUSH 0x9                            ; 0050ed9b
    PUSH 0x635da4                       ; 0050ed9d | = "Damage type" | s_Damage_type_00635da4 = Damage type
    PUSH ESI                            ; 0050eda2
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e640 ; 0050eda3 | void core_actor.cpp_CActorPropertyList_FUN_0040e640(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e640 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0050eda8
    LEA EAX,[EBX + 0x5a0]               ; 0050edab
    PUSH EAX                            ; 0050edb1
    PUSH 0x635db0                       ; 0050edb2 | = "thrustHitCharacterSound" | s_thrustHitCharacterSound_00635db0 = thrustHitCharacterSound
    PUSH ESI                            ; 0050edb7
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0 ; 0050edb8 | void core_actor.cpp_CActorPropertyList_FUN_0040e2d0(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0050edbd
    LEA EAX,[EBX + 0x604]               ; 0050edc0
    PUSH EAX                            ; 0050edc6
    PUSH 0x635dc8                       ; 0050edc7 | = "swingHitCharacterSound" | s_swingHitCharacterSound_00635dc8 = swingHitCharacterSound
    PUSH ESI                            ; 0050edcc
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0 ; 0050edcd | void core_actor.cpp_CActorPropertyList_FUN_0040e2d0(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0050edd2
    ADD EBX,0x668                       ; 0050edd5
    PUSH EBX                            ; 0050eddb
    PUSH 0x635ddf                       ; 0050eddc | = "hitOtherSound" | s_hitOtherSound_00635ddf = hitOtherSound
    PUSH ESI                            ; 0050ede1
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0 ; 0050ede2 | void core_actor.cpp_CActorPropertyList_FUN_0040e2d0(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0050ede7
    POP ESI                             ; 0050edea
    POP EBX                             ; 0050edeb
    RET                                 ; 0050edec

