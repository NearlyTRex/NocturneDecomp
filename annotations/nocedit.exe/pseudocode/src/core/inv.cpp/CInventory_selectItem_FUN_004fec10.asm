; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_inv_cpp_CInventory_selectItem_FUN_004fec10(CInventory *this_ptr,int direction)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   direction
;
; XREF[1]:
;   core_game.cpp_CGame_processKeyboardControls_FUN_004dc3e0 at 004dc729
;
; Referenced Globals:
;   TerminatedCString s_CWeapon_00630822
;   TerminatedCString s_CAmmo_0063082a
;   TerminatedCString s_CWeapon_00630830
;   TerminatedCString s_CAmmo_00630838
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004ffff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fec10
        ;   Label: core_inv.cpp_CInventory_selectItem_FUN_004fec10
    PUSH ESI                            ; 004fec11
    PUSH EDI                            ; 004fec12
    PUSH EBP                            ; 004fec13
    MOV ESI,dword ptr [ESP + 0x14]      ; 004fec14
    PUSH ESI                            ; 004fec18
    CALL core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004ffff0 ; 004fec19
        ;   XREF to: 004ffff0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004ffff0(CInventory * this_ptr)
    MOV EDX,dword ptr [ESI + 0x334]     ; 004fec1e
    ADD ESP,0x4                         ; 004fec24
    TEST EDX,EDX                        ; 004fec27
    JNZ 0x004fec7e                      ; 004fec29
        ;   XREF to: 004fec7e (CONDITIONAL_JUMP)  ; LAB_004fec7e
    MOV EBX,dword ptr [ESI + 0x8]       ; 004fec2b
    XOR EDI,EDI                         ; 004fec2e
    TEST EBX,EBX                        ; 004fec30
    JLE 0x004fec56                      ; 004fec32
        ;   XREF to: 004fec56 (CONDITIONAL_JUMP)  ; LAB_004fec56
    MOV EBX,ESI                         ; 004fec34
    PUSH 0x630822                       ; 004fec36 | = "CWeapon"
        ;   Label: LAB_004fec36
    MOV EBP,dword ptr [EBX + 0xc]       ; 004fec3b
    PUSH EBP                            ; 004fec3e
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004fec3f
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fec44
    TEST EAX,EAX                        ; 004fec47
    JZ 0x004fec5b                       ; 004fec49
        ;   XREF to: 004fec5b (CONDITIONAL_JUMP)  ; LAB_004fec5b
    INC EDI                             ; 004fec4b
        ;   Label: LAB_004fec4b
    MOV ECX,dword ptr [ESI + 0x8]       ; 004fec4c
    ADD EBX,0x4                         ; 004fec4f
    CMP EDI,ECX                         ; 004fec52
    JL 0x004fec36                       ; 004fec54
        ;   XREF to: 004fec36 (CONDITIONAL_JUMP)  ; LAB_004fec36
    POP EBP                             ; 004fec56
        ;   Label: LAB_004fec56
    POP EDI                             ; 004fec57
    POP ESI                             ; 004fec58
    POP EBX                             ; 004fec59
    RET                                 ; 004fec5a
    PUSH 0x63082a                       ; 004fec5b | = "CAmmo"
        ;   Label: LAB_004fec5b
    MOV EAX,dword ptr [EBX + 0xc]       ; 004fec60
    PUSH EAX                            ; 004fec63
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004fec64
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fec69
    TEST EAX,EAX                        ; 004fec6c
    JNZ 0x004fec4b                      ; 004fec6e
        ;   XREF to: 004fec4b (CONDITIONAL_JUMP)  ; LAB_004fec4b
    MOV EAX,dword ptr [EBX + 0xc]       ; 004fec70
    MOV dword ptr [ESI + 0x334],EAX     ; 004fec73
    POP EBP                             ; 004fec79
    POP EDI                             ; 004fec7a
    POP ESI                             ; 004fec7b
    POP EBX                             ; 004fec7c
    RET                                 ; 004fec7d
    MOV ECX,dword ptr [ESI + 0x8]       ; 004fec7e
        ;   Label: LAB_004fec7e
    XOR EDI,EDI                         ; 004fec81
    TEST ECX,ECX                        ; 004fec83
    JLE 0x004fec94                      ; 004fec85
        ;   XREF to: 004fec94 (CONDITIONAL_JUMP)  ; LAB_004fec94
    MOV EBX,ESI                         ; 004fec87
    MOV EDX,dword ptr [ESI + 0x334]     ; 004fec89
        ;   Label: LAB_004fec89
    CMP EDX,dword ptr [EBX + 0xc]       ; 004fec8f
    JNZ 0x004feccc                      ; 004fec92
        ;   XREF to: 004feccc (CONDITIONAL_JUMP)  ; LAB_004feccc
    MOV EBX,EDI                         ; 004fec94
        ;   Label: LAB_004fec94
    MOV ECX,dword ptr [ESP + 0x18]      ; 004fec96
        ;   Label: LAB_004fec96
    MOV EBP,dword ptr [ESI + 0x8]       ; 004fec9a
    ADD EBX,ECX                         ; 004fec9d
    CMP EBX,EBP                         ; 004fec9f
    JL 0x004fecd9                       ; 004feca1
        ;   XREF to: 004fecd9 (CONDITIONAL_JUMP)  ; LAB_004fecd9
    XOR EBX,EBX                         ; 004feca3
    LEA EBP,[EBX*0x4 + 0x0]             ; 004feca5
        ;   Label: LAB_004feca5
    ADD EBP,ESI                         ; 004fecac
    PUSH 0x630830                       ; 004fecae | = "CWeapon"
    MOV EAX,dword ptr [EBP + 0xc]       ; 004fecb3
    PUSH EAX                            ; 004fecb6
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004fecb7
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fecbc
    TEST EAX,EAX                        ; 004fecbf
    JZ 0x004fece2                       ; 004fecc1
        ;   XREF to: 004fece2 (CONDITIONAL_JUMP)  ; LAB_004fece2
    CMP EBX,EDI                         ; 004fecc3
        ;   Label: LAB_004fecc3
    JNZ 0x004fec96                      ; 004fecc5
        ;   XREF to: 004fec96 (CONDITIONAL_JUMP)  ; LAB_004fec96
    POP EBP                             ; 004fecc7
    POP EDI                             ; 004fecc8
    POP ESI                             ; 004fecc9
    POP EBX                             ; 004fecca
    RET                                 ; 004feccb
    INC EDI                             ; 004feccc
        ;   Label: LAB_004feccc
    MOV EBP,dword ptr [ESI + 0x8]       ; 004feccd
    ADD EBX,0x4                         ; 004fecd0
    CMP EDI,EBP                         ; 004fecd3
    JL 0x004fec89                       ; 004fecd5
        ;   XREF to: 004fec89 (CONDITIONAL_JUMP)  ; LAB_004fec89
    JMP 0x004fec94                      ; 004fecd7
        ;   XREF to: 004fec94 (UNCONDITIONAL_JUMP)  ; LAB_004fec94
    TEST EBX,EBX                        ; 004fecd9
        ;   Label: LAB_004fecd9
    JGE 0x004feca5                      ; 004fecdb
        ;   XREF to: 004feca5 (CONDITIONAL_JUMP)  ; LAB_004feca5
    LEA EBX,[EBP + -0x1]                ; 004fecdd
    JMP 0x004feca5                      ; 004fece0
        ;   XREF to: 004feca5 (UNCONDITIONAL_JUMP)  ; LAB_004feca5
    PUSH 0x630838                       ; 004fece2 | = "CAmmo"
        ;   Label: LAB_004fece2
    MOV EDX,dword ptr [EBP + 0xc]       ; 004fece7
    PUSH EDX                            ; 004fecea
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004feceb
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fecf0
    TEST EAX,EAX                        ; 004fecf3
    JNZ 0x004fecc3                      ; 004fecf5
        ;   XREF to: 004fecc3 (CONDITIONAL_JUMP)  ; LAB_004fecc3
    MOV EAX,dword ptr [EBP + 0xc]       ; 004fecf7
    MOV dword ptr [ESI + 0x334],EAX     ; 004fecfa
    POP EBP                             ; 004fed00
    POP EDI                             ; 004fed01
    POP ESI                             ; 004fed02
    POP EBX                             ; 004fed03
    RET                                 ; 004fed04

