; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_melee_cpp_FUN_004e70e0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_allowedAttackTypes_005c707f
;   TerminatedCString s_strengthLo_005c7092
;   TerminatedCString s_strengthHi_005c709d
;   TerminatedCString s_canAttachLight_005c70a8
;   TerminatedCString s_dismemberProb_005c70b7
;   TerminatedCString s_canGoInInventory_005c70c5
;   TerminatedCString s_ammoType_005c70d6
;   TerminatedCString s_thrustHitCharacterSound_005c70df
;   TerminatedCString s_swingHitCharacterSound_005c70f7
;   TerminatedCString s_hitOtherSound_005c710e
;   int g_CMeleeClassVersion = 0x7
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_weapon.cpp_FUN_0057b2a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e70e0
        ;   Label: core_melee.cpp_FUN_004e70e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e70e1
    PUSH EBX                            ; 004e70e5
    CALL core_weapon.cpp_FUN_0057b2a0   ; 004e70e6
        ;   XREF to: 0057b2a0 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_FUN_0057b2a0()
    MOV EDX,dword ptr [0x00600344]      ; 004e70eb | g_CMeleeClassVersion
    ADD ESP,0x4                         ; 004e70f1
    CMP EDX,0x2                         ; 004e70f4
    JGE 0x004e71a4                      ; 004e70f7
        ;   XREF to: 004e71a4 (CONDITIONAL_JUMP)  ; LAB_004e71a4
    CMP dword ptr [0x00600344],0x3      ; 004e70fd | g_CMeleeClassVersion
        ;   Label: LAB_004e70fd
    JL 0x004e7142                       ; 004e7104
        ;   XREF to: 004e7142 (CONDITIONAL_JUMP)  ; LAB_004e7142
    PUSH 0x5c7092                       ; 004e7106 | = "strengthLo"
    LEA EAX,[EBX + 0x598]               ; 004e710b
    PUSH EAX                            ; 004e7111
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 004e7112
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 004e7117
    PUSH 0x5c709d                       ; 004e711a | = "strengthHi"
    LEA EAX,[EBX + 0x59c]               ; 004e711f
    PUSH EAX                            ; 004e7125
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 004e7126
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 004e712b
    PUSH 0x5c70a8                       ; 004e712e | = "canAttachLight"
    LEA EAX,[EBX + 0x2f0]               ; 004e7133
    PUSH EAX                            ; 004e7139
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004e713a
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004e713f
    CMP dword ptr [0x00600344],0x4      ; 004e7142 | g_CMeleeClassVersion
        ;   Label: LAB_004e7142
    JL 0x004e715f                       ; 004e7149
        ;   XREF to: 004e715f (CONDITIONAL_JUMP)  ; LAB_004e715f
    PUSH 0x5c70b7                       ; 004e714b | = "dismemberProb"
    LEA EAX,[EBX + 0x5a0]               ; 004e7150
    PUSH EAX                            ; 004e7156
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 004e7157
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 004e715c
    CMP dword ptr [0x00600344],0x5      ; 004e715f | g_CMeleeClassVersion
        ;   Label: LAB_004e715f
    JL 0x004e717c                       ; 004e7166
        ;   XREF to: 004e717c (CONDITIONAL_JUMP)  ; LAB_004e717c
    PUSH 0x5c70c5                       ; 004e7168 | = "canGoInInventory"
    LEA EAX,[EBX + 0x5a4]               ; 004e716d
    PUSH EAX                            ; 004e7173
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004e7174
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004e7179
    CMP dword ptr [0x00600344],0x6      ; 004e717c | g_CMeleeClassVersion
        ;   Label: LAB_004e717c
    JL 0x004e7199                       ; 004e7183
        ;   XREF to: 004e7199 (CONDITIONAL_JUMP)  ; LAB_004e7199
    PUSH 0x5c70d6                       ; 004e7185 | = "ammoType"
    LEA EAX,[EBX + 0x5b8]               ; 004e718a
    PUSH EAX                            ; 004e7190
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004e7191
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004e7196
    CMP dword ptr [0x00600344],0x7      ; 004e7199 | g_CMeleeClassVersion
        ;   Label: LAB_004e7199
    JGE 0x004e71bd                      ; 004e71a0
        ;   XREF to: 004e71bd (CONDITIONAL_JUMP)  ; LAB_004e71bd
    POP EBX                             ; 004e71a2
    RET                                 ; 004e71a3
    PUSH 0x5c707f                       ; 004e71a4 | = "allowedAttackTypes"
        ;   Label: LAB_004e71a4
    LEA EAX,[EBX + 0x594]               ; 004e71a9
    PUSH EAX                            ; 004e71af
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004e71b0
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004e71b5
    JMP 0x004e70fd                      ; 004e71b8
        ;   XREF to: 004e70fd (UNCONDITIONAL_JUMP)  ; LAB_004e70fd
    PUSH 0x5c70df                       ; 004e71bd | = "thrustHitCharacterSound"
        ;   Label: LAB_004e71bd
    LEA EAX,[EBX + 0x5bc]               ; 004e71c2
    PUSH EAX                            ; 004e71c8
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 004e71c9
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004e71ce
    PUSH 0x5c70f7                       ; 004e71d1 | = "swingHitCharacterSound"
    LEA EAX,[EBX + 0x620]               ; 004e71d6
    PUSH EAX                            ; 004e71dc
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 004e71dd
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004e71e2
    PUSH 0x5c710e                       ; 004e71e5 | = "hitOtherSound"
    ADD EBX,0x684                       ; 004e71ea
    PUSH EBX                            ; 004e71f0
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 004e71f1
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004e71f6
    POP EBX                             ; 004e71f9
    RET                                 ; 004e71fa

