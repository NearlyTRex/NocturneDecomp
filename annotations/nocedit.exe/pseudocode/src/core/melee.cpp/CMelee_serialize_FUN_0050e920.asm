; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_melee_cpp_CMelee_serialize_FUN_0050e920(CMelee *this_ptr)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_allowedAttackTypes_00635c04
;   TerminatedCString s_strengthLo_00635c17
;   TerminatedCString s_strengthHi_00635c22
;   TerminatedCString s_canAttachLight_00635c2d
;   TerminatedCString s_dismemberProb_00635c3c
;   TerminatedCString s_canGoInInventory_00635c4a
;   TerminatedCString s_ammoType_00635c5b
;   TerminatedCString s_thrustHitCharacterSound_00635c64
;   TerminatedCString s_swingHitCharacterSound_00635c7c
;   TerminatedCString s_hitOtherSound_00635c93
;   int g_CMeleeClassVersion = 0x7
;
; Called Functions:
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeString_FUN_0040b5c0
;   core_weapon.cpp_CWeapon_serialize_FUN_005ee250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050e920
        ;   Label: core_melee.cpp_CMelee_serialize_FUN_0050e920
    MOV EBX,dword ptr [ESP + 0x8]       ; 0050e921
    PUSH EBX                            ; 0050e925
    CALL core_weapon.cpp_CWeapon_serialize_FUN_005ee250 ; 0050e926
        ;   XREF to: 005ee250 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_serialize_FUN_005ee250(CWeapon * this_ptr)
    MOV EDX,dword ptr [0x0067d1c0]      ; 0050e92b | g_CMeleeClassVersion
    ADD ESP,0x4                         ; 0050e931
    CMP EDX,0x2                         ; 0050e934
    JGE 0x0050e9e4                      ; 0050e937
        ;   XREF to: 0050e9e4 (CONDITIONAL_JUMP)  ; LAB_0050e9e4
    CMP dword ptr [0x0067d1c0],0x3      ; 0050e93d | g_CMeleeClassVersion
        ;   Label: LAB_0050e93d
    JL 0x0050e982                       ; 0050e944
        ;   XREF to: 0050e982 (CONDITIONAL_JUMP)  ; LAB_0050e982
    PUSH 0x635c17                       ; 0050e946 | = "strengthLo"
    LEA EAX,[EBX + 0x57c]               ; 0050e94b
    PUSH EAX                            ; 0050e951
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0050e952
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0050e957
    PUSH 0x635c22                       ; 0050e95a | = "strengthHi"
    LEA EAX,[EBX + 0x580]               ; 0050e95f
    PUSH EAX                            ; 0050e965
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0050e966
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0050e96b
    PUSH 0x635c2d                       ; 0050e96e | = "canAttachLight"
    LEA EAX,[EBX + 0x2f0]               ; 0050e973
    PUSH EAX                            ; 0050e979
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0050e97a
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0050e97f
    CMP dword ptr [0x0067d1c0],0x4      ; 0050e982 | g_CMeleeClassVersion
        ;   Label: LAB_0050e982
    JL 0x0050e99f                       ; 0050e989
        ;   XREF to: 0050e99f (CONDITIONAL_JUMP)  ; LAB_0050e99f
    PUSH 0x635c3c                       ; 0050e98b | = "dismemberProb"
    LEA EAX,[EBX + 0x584]               ; 0050e990
    PUSH EAX                            ; 0050e996
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 0050e997
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0050e99c
    CMP dword ptr [0x0067d1c0],0x5      ; 0050e99f | g_CMeleeClassVersion
        ;   Label: LAB_0050e99f
    JL 0x0050e9bc                       ; 0050e9a6
        ;   XREF to: 0050e9bc (CONDITIONAL_JUMP)  ; LAB_0050e9bc
    PUSH 0x635c4a                       ; 0050e9a8 | = "canGoInInventory"
    LEA EAX,[EBX + 0x588]               ; 0050e9ad
    PUSH EAX                            ; 0050e9b3
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0050e9b4
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0050e9b9
    CMP dword ptr [0x0067d1c0],0x6      ; 0050e9bc | g_CMeleeClassVersion
        ;   Label: LAB_0050e9bc
    JL 0x0050e9d9                       ; 0050e9c3
        ;   XREF to: 0050e9d9 (CONDITIONAL_JUMP)  ; LAB_0050e9d9
    PUSH 0x635c5b                       ; 0050e9c5 | = "ammoType"
    LEA EAX,[EBX + 0x59c]               ; 0050e9ca
    PUSH EAX                            ; 0050e9d0
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0050e9d1
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0050e9d6
    CMP dword ptr [0x0067d1c0],0x7      ; 0050e9d9 | g_CMeleeClassVersion
        ;   Label: LAB_0050e9d9
    JGE 0x0050e9fd                      ; 0050e9e0
        ;   XREF to: 0050e9fd (CONDITIONAL_JUMP)  ; LAB_0050e9fd
    POP EBX                             ; 0050e9e2
    RET                                 ; 0050e9e3
    PUSH 0x635c04                       ; 0050e9e4 | = "allowedAttackTypes"
        ;   Label: LAB_0050e9e4
    LEA EAX,[EBX + 0x578]               ; 0050e9e9
    PUSH EAX                            ; 0050e9ef
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 0050e9f0
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0050e9f5
    JMP 0x0050e93d                      ; 0050e9f8
        ;   XREF to: 0050e93d (UNCONDITIONAL_JUMP)  ; LAB_0050e93d
    PUSH 0x635c64                       ; 0050e9fd | = "thrustHitCharacterSound"
        ;   Label: LAB_0050e9fd
    LEA EAX,[EBX + 0x5a0]               ; 0050ea02
    PUSH EAX                            ; 0050ea08
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 0050ea09
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0050ea0e
    PUSH 0x635c7c                       ; 0050ea11 | = "swingHitCharacterSound"
    LEA EAX,[EBX + 0x604]               ; 0050ea16
    PUSH EAX                            ; 0050ea1c
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 0050ea1d
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0050ea22
    PUSH 0x635c93                       ; 0050ea25 | = "hitOtherSound"
    ADD EBX,0x668                       ; 0050ea2a
    PUSH EBX                            ; 0050ea30
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 0050ea31
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0050ea36
    POP EBX                             ; 0050ea39
    RET                                 ; 0050ea3a

