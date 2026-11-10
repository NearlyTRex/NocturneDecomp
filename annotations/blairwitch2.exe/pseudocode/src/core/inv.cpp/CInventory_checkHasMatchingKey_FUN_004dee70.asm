; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_inv_cpp_CInventory_checkHasMatchingKey_FUN_004dee70(CInventory *this_ptr,uint key_mask,int show_message)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   key_mask
; int              Stack[0xc]:4   show_message
;
; XREF[2]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_0048e7e0 at 0048f441
;   core_hero.cpp_CHero_tryOpenDoor_FUN_004cf230 at 004cf259
;
; Referenced Globals:
;   undefined4 s_You_used_a_key_005dbb29+1
;   TerminatedCString s_key_unlock_wav_005dbb3a
;   TerminatedCString s_This_door_will_not_open_005dbb49
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 g_CKeyActorClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_game.cpp_CGame_displayMessage_FUN_004b31a0
;   support_newmsg.cpp_getLocalizedString_FUN_0050fe80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dee70
        ;   Label: core_inv.cpp_CInventory_checkHasMatchingKey_FUN_004dee70
    PUSH ESI                            ; 004dee71
    PUSH EDI                            ; 004dee72
    PUSH EBP                            ; 004dee73
    MOV EDI,dword ptr [ESP + 0x14]      ; 004dee74
    MOV EBP,dword ptr [ESP + 0x18]      ; 004dee78
    TEST EBP,EBP                        ; 004dee7c
    JZ 0x004deef3                       ; 004dee7e
        ;   XREF to: 004deef3 (CONDITIONAL_JUMP)  ; LAB_004deef3
    MOV EDX,dword ptr [EDI + 0x10]      ; 004dee84
    XOR ESI,ESI                         ; 004dee87
    TEST EDX,EDX                        ; 004dee89
    JLE 0x004def08                      ; 004dee8b
        ;   XREF to: 004def08 (CONDITIONAL_JUMP)  ; LAB_004def08
    MOV EBX,EDI                         ; 004dee91
    MOV EAX,[0x01d02f80]                ; 004dee93 | g_CKeyActorClassInfo.name_hash
        ;   Label: LAB_004dee93
    PUSH EAX                            ; 004dee98
    MOV EDX,dword ptr [EBX + 0x14]      ; 004dee99
    PUSH EDX                            ; 004dee9c
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004dee9d
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004deea2
    TEST EAX,EAX                        ; 004deea5
    JZ 0x004deefd                       ; 004deea7
        ;   XREF to: 004deefd (CONDITIONAL_JUMP)  ; LAB_004deefd
    TEST dword ptr [EAX + 0x430],EBP    ; 004deea9
    JZ 0x004deefd                       ; 004deeaf
        ;   XREF to: 004deefd (CONDITIONAL_JUMP)  ; LAB_004deefd
    CMP dword ptr [ESP + 0x1c],0x0      ; 004deeb1
    JZ 0x004deef3                       ; 004deeb6
        ;   XREF to: 004deef3 (CONDITIONAL_JUMP)  ; LAB_004deef3
    PUSH 0x40a00000                     ; 004deeb8
    PUSH 0x5dbb2a                       ; 004deebd | s_You_used_a_key_005dbb29+1
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004deec2
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004deec7
    PUSH EAX                            ; 004deeca
    MOV ESI,dword ptr [0x00616494]      ; 004deecb | g_CGamePtr
    PUSH ESI                            ; 004deed1
    CALL core_game.cpp_CGame_displayMessage_FUN_004b31a0 ; 004deed2
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b31a0(CGame * this_ptr, char * message, float duration)
    MOV EBP,dword ptr [EDI + 0x4]       ; 004deed7
    ADD ESP,0xc                         ; 004deeda
    TEST EBP,EBP                        ; 004deedd
    JZ 0x004deef3                       ; 004deedf
        ;   XREF to: 004deef3 (CONDITIONAL_JUMP)  ; LAB_004deef3
    PUSH 0x5dbb3a                       ; 004deee1 | = "key-unlock.wav"
    MOV EBX,dword ptr [EBP + 0x2b0]     ; 004deee6
    PUSH EBP                            ; 004deeec
    CALL dword ptr [EBX + 0x34]         ; 004deeed
    ADD ESP,0x8                         ; 004deef0
    MOV EAX,0x1                         ; 004deef3
        ;   Label: LAB_004deef3
    POP EBP                             ; 004deef8
    POP EDI                             ; 004deef9
    POP ESI                             ; 004deefa
    POP EBX                             ; 004deefb
    RET                                 ; 004deefc
    INC ESI                             ; 004deefd
        ;   Label: LAB_004deefd
    MOV ECX,dword ptr [EDI + 0x10]      ; 004deefe
    ADD EBX,0x4                         ; 004def01
    CMP ESI,ECX                         ; 004def04
    JL 0x004dee93                       ; 004def06
        ;   XREF to: 004dee93 (CONDITIONAL_JUMP)  ; LAB_004dee93
    CMP dword ptr [ESP + 0x1c],0x0      ; 004def08
        ;   Label: LAB_004def08
    JZ 0x004def31                       ; 004def0d
        ;   XREF to: 004def31 (CONDITIONAL_JUMP)  ; LAB_004def31
    PUSH 0x40a00000                     ; 004def0f
    PUSH 0x5dbb49                       ; 004def14 | = "This door will not open"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004def19
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004def1e
    PUSH EAX                            ; 004def21
    MOV ESI,dword ptr [0x00616494]      ; 004def22 | g_CGamePtr
    PUSH ESI                            ; 004def28
    CALL core_game.cpp_CGame_displayMessage_FUN_004b31a0 ; 004def29
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b31a0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004def2e
    XOR EAX,EAX                         ; 004def31
        ;   Label: LAB_004def31
    POP EBP                             ; 004def33
    POP EDI                             ; 004def34
    POP ESI                             ; 004def35
    POP EBX                             ; 004def36
    RET                                 ; 004def37

