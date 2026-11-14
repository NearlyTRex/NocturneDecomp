; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_melee_cpp_CMelee_archive_FUN_004eaa00(CMelee *this_ptr)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_allowedAttackTypes_005dc963
;   TerminatedCString s_strengthLo_005dc976
;   TerminatedCString s_strengthHi_005dc981
;   TerminatedCString s_canAttachLight_005dc98c
;   TerminatedCString s_dismemberProb_005dc99b
;   TerminatedCString s_canGoInInventory_005dc9a9
;   TerminatedCString s_ammoType_005dc9ba
;   TerminatedCString s_thrustHitCharacterSound_005dc9c3
;   TerminatedCString s_swingHitCharacterSound_005dc9db
;   TerminatedCString s_hitOtherSound_005dc9f2
;   int g_CMeleeClassVersion = 0x7
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_weapon.cpp_CWeapon_archive_FUN_00589d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eaa00
        ;   Label: core_melee.cpp_CMelee_archive_FUN_004eaa00
    MOV EBX,dword ptr [ESP + 0x8]       ; 004eaa01
    PUSH EBX                            ; 004eaa05
    CALL core_weapon.cpp_CWeapon_archive_FUN_00589d60 ; 004eaa06
        ;   XREF to: 00589d60 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_archive_FUN_00589d60(CWeapon * this_ptr)
    MOV EDX,dword ptr [0x00617f54]      ; 004eaa0b | g_CMeleeClassVersion
    ADD ESP,0x4                         ; 004eaa11
    CMP EDX,0x2                         ; 004eaa14
    JGE 0x004eaac4                      ; 004eaa17
        ;   XREF to: 004eaac4 (CONDITIONAL_JUMP)  ; LAB_004eaac4
    CMP dword ptr [0x00617f54],0x3      ; 004eaa1d | g_CMeleeClassVersion
        ;   Label: LAB_004eaa1d
    JL 0x004eaa62                       ; 004eaa24
        ;   XREF to: 004eaa62 (CONDITIONAL_JUMP)  ; LAB_004eaa62
    PUSH 0x5dc976                       ; 004eaa26 | = "strengthLo"
    LEA EAX,[EBX + 0x6d8]               ; 004eaa2b
    PUSH EAX                            ; 004eaa31
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004eaa32
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004eaa37
    PUSH 0x5dc981                       ; 004eaa3a | = "strengthHi"
    LEA EAX,[EBX + 0x6dc]               ; 004eaa3f
    PUSH EAX                            ; 004eaa45
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004eaa46
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004eaa4b
    PUSH 0x5dc98c                       ; 004eaa4e | = "canAttachLight"
    LEA EAX,[EBX + 0x44c]               ; 004eaa53
    PUSH EAX                            ; 004eaa59
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004eaa5a
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004eaa5f
    CMP dword ptr [0x00617f54],0x4      ; 004eaa62 | g_CMeleeClassVersion
        ;   Label: LAB_004eaa62
    JL 0x004eaa7f                       ; 004eaa69
        ;   XREF to: 004eaa7f (CONDITIONAL_JUMP)  ; LAB_004eaa7f
    PUSH 0x5dc99b                       ; 004eaa6b | = "dismemberProb"
    LEA EAX,[EBX + 0x6e0]               ; 004eaa70
    PUSH EAX                            ; 004eaa76
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004eaa77
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004eaa7c
    CMP dword ptr [0x00617f54],0x5      ; 004eaa7f | g_CMeleeClassVersion
        ;   Label: LAB_004eaa7f
    JL 0x004eaa9c                       ; 004eaa86
        ;   XREF to: 004eaa9c (CONDITIONAL_JUMP)  ; LAB_004eaa9c
    PUSH 0x5dc9a9                       ; 004eaa88 | = "canGoInInventory"
    LEA EAX,[EBX + 0x6e4]               ; 004eaa8d
    PUSH EAX                            ; 004eaa93
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004eaa94
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004eaa99
    CMP dword ptr [0x00617f54],0x6      ; 004eaa9c | g_CMeleeClassVersion
        ;   Label: LAB_004eaa9c
    JL 0x004eaab9                       ; 004eaaa3
        ;   XREF to: 004eaab9 (CONDITIONAL_JUMP)  ; LAB_004eaab9
    PUSH 0x5dc9ba                       ; 004eaaa5 | = "ammoType"
    LEA EAX,[EBX + 0x6f8]               ; 004eaaaa
    PUSH EAX                            ; 004eaab0
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004eaab1
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004eaab6
    CMP dword ptr [0x00617f54],0x7      ; 004eaab9 | g_CMeleeClassVersion
        ;   Label: LAB_004eaab9
    JGE 0x004eaadd                      ; 004eaac0
        ;   XREF to: 004eaadd (CONDITIONAL_JUMP)  ; LAB_004eaadd
    POP EBX                             ; 004eaac2
    RET                                 ; 004eaac3
    PUSH 0x5dc963                       ; 004eaac4 | = "allowedAttackTypes"
        ;   Label: LAB_004eaac4
    LEA EAX,[EBX + 0x6d4]               ; 004eaac9
    PUSH EAX                            ; 004eaacf
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004eaad0
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004eaad5
    JMP 0x004eaa1d                      ; 004eaad8
        ;   XREF to: 004eaa1d (UNCONDITIONAL_JUMP)  ; LAB_004eaa1d
    PUSH 0x5dc9c3                       ; 004eaadd | = "thrustHitCharacterSound"
        ;   Label: LAB_004eaadd
    LEA EAX,[EBX + 0x6fc]               ; 004eaae2
    PUSH EAX                            ; 004eaae8
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004eaae9
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004eaaee
    PUSH 0x5dc9db                       ; 004eaaf1 | = "swingHitCharacterSound"
    LEA EAX,[EBX + 0x760]               ; 004eaaf6
    PUSH EAX                            ; 004eaafc
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004eaafd
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004eab02
    PUSH 0x5dc9f2                       ; 004eab05 | = "hitOtherSound"
    ADD EBX,0x7c4                       ; 004eab0a
    PUSH EBX                            ; 004eab10
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004eab11
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004eab16
    POP EBX                             ; 004eab19
    RET                                 ; 004eab1a

