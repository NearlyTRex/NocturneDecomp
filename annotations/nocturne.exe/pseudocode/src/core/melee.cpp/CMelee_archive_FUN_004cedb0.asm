; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_melee_cpp_CMelee_archive_FUN_004cedb0(CWeapon *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_allowedAttackTypes_00588390
;   TerminatedCString s_strengthLo_005883a3
;   TerminatedCString s_strengthHi_005883ae
;   TerminatedCString s_canAttachLight_005883b9
;   TerminatedCString s_dismemberProb_005883c8
;   TerminatedCString s_canGoInInventory_005883d6
;   TerminatedCString s_ammoType_005883e7
;   TerminatedCString s_thrustHitCharacterSound_005883f0
;   TerminatedCString s_swingHitCharacterSound_00588408
;   TerminatedCString s_hitOtherSound_0058841f
;   int INT_005bade4 = 0x7
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_weapon.cpp_CWeapon_archive_FUN_00554170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cedb0
        ;   Label: core_melee.cpp_CMelee_archive_FUN_004cedb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cedb1
    PUSH EBX                            ; 004cedb5
    CALL core_weapon.cpp_CWeapon_archive_FUN_00554170 ; 004cedb6
        ;   XREF to: 00554170 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_archive_FUN_00554170(CWeapon * this_ptr)
    MOV EDX,dword ptr [0x005bade4]      ; 004cedbb | INT_005bade4
    ADD ESP,0x4                         ; 004cedc1
    CMP EDX,0x2                         ; 004cedc4
    JGE 0x004cee74                      ; 004cedc7
        ;   XREF to: 004cee74 (CONDITIONAL_JUMP)  ; LAB_004cee74
    CMP dword ptr [0x005bade4],0x3      ; 004cedcd | INT_005bade4
        ;   Label: LAB_004cedcd
    JL 0x004cee12                       ; 004cedd4
        ;   XREF to: 004cee12 (CONDITIONAL_JUMP)  ; LAB_004cee12
    PUSH 0x5883a3                       ; 004cedd6 | = "strengthLo"
    LEA EAX,[EBX + 0x574]               ; 004ceddb
    PUSH EAX                            ; 004cede1
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004cede2
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cede7
    PUSH 0x5883ae                       ; 004cedea | = "strengthHi"
    LEA EAX,[EBX + 0x578]               ; 004cedef
    PUSH EAX                            ; 004cedf5
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004cedf6
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cedfb
    PUSH 0x5883b9                       ; 004cedfe | = "canAttachLight"
    LEA EAX,[EBX + 0x2e8]               ; 004cee03
    PUSH EAX                            ; 004cee09
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004cee0a
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cee0f
    CMP dword ptr [0x005bade4],0x4      ; 004cee12 | INT_005bade4
        ;   Label: LAB_004cee12
    JL 0x004cee2f                       ; 004cee19
        ;   XREF to: 004cee2f (CONDITIONAL_JUMP)  ; LAB_004cee2f
    PUSH 0x5883c8                       ; 004cee1b | = "dismemberProb"
    LEA EAX,[EBX + 0x57c]               ; 004cee20
    PUSH EAX                            ; 004cee26
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004cee27
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cee2c
    CMP dword ptr [0x005bade4],0x5      ; 004cee2f | INT_005bade4
        ;   Label: LAB_004cee2f
    JL 0x004cee4c                       ; 004cee36
        ;   XREF to: 004cee4c (CONDITIONAL_JUMP)  ; LAB_004cee4c
    PUSH 0x5883d6                       ; 004cee38 | = "canGoInInventory"
    LEA EAX,[EBX + 0x580]               ; 004cee3d
    PUSH EAX                            ; 004cee43
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004cee44
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cee49
    CMP dword ptr [0x005bade4],0x6      ; 004cee4c | INT_005bade4
        ;   Label: LAB_004cee4c
    JL 0x004cee69                       ; 004cee53
        ;   XREF to: 004cee69 (CONDITIONAL_JUMP)  ; LAB_004cee69
    PUSH 0x5883e7                       ; 004cee55 | = "ammoType"
    LEA EAX,[EBX + 0x594]               ; 004cee5a
    PUSH EAX                            ; 004cee60
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004cee61
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cee66
    CMP dword ptr [0x005bade4],0x7      ; 004cee69 | INT_005bade4
        ;   Label: LAB_004cee69
    JGE 0x004cee8d                      ; 004cee70
        ;   XREF to: 004cee8d (CONDITIONAL_JUMP)  ; LAB_004cee8d
    POP EBX                             ; 004cee72
    RET                                 ; 004cee73
    PUSH 0x588390                       ; 004cee74 | = "allowedAttackTypes"
        ;   Label: LAB_004cee74
    LEA EAX,[EBX + 0x570]               ; 004cee79
    PUSH EAX                            ; 004cee7f
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004cee80
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cee85
    JMP 0x004cedcd                      ; 004cee88
        ;   XREF to: 004cedcd (UNCONDITIONAL_JUMP)  ; LAB_004cedcd
    PUSH 0x5883f0                       ; 004cee8d | = "thrustHitCharacterSound"
        ;   Label: LAB_004cee8d
    LEA EAX,[EBX + 0x598]               ; 004cee92
    PUSH EAX                            ; 004cee98
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004cee99
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004cee9e
    PUSH 0x588408                       ; 004ceea1 | = "swingHitCharacterSound"
    LEA EAX,[EBX + 0x5fc]               ; 004ceea6
    PUSH EAX                            ; 004ceeac
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004ceead
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004ceeb2
    PUSH 0x58841f                       ; 004ceeb5 | = "hitOtherSound"
    ADD EBX,0x660                       ; 004ceeba
    PUSH EBX                            ; 004ceec0
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004ceec1
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004ceec6
    POP EBX                             ; 004ceec9
    RET                                 ; 004ceeca

