; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_inv.cpp_CInventory_checkHasMatchingKey_FUN_005013d0(CInventory * this_ptr, uint key_mask, int show_message)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   key_mask
; int              Stack[0xc]:4   show_message
;
; XREF[2]:
;   core_event.cpp_CEventList_FUN_004ae140 at 004aecfa
;   core_hero.cpp_FUN_004f2ed0 at 004f2ef9
;
; Referenced Globals:
;   TerminatedCString s_You_used_a_key_00630b9a
;   TerminatedCString s_key_unlock_wav_00630baa
;   TerminatedCString s_You_need_the_right_key_00630bb9
;   CGame* g_CGamePtr = 02d81a9c
;   CGame g_CGameInstance
;   undefined4 g_CKeyActorClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_game.cpp_CGame_displayMessage_FUN_004d7f20
;   support_newmsg.cpp_getLocalizedString_FUN_005441f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005013d0
        ;   Label: core_inv.cpp_CInventory_checkHasMatchingKey_FUN_005013d0
    PUSH ESI                            ; 005013d1
    PUSH EDI                            ; 005013d2
    PUSH EBP                            ; 005013d3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005013d4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005013d8
    TEST EBP,EBP                        ; 005013dc
    JZ 0x00501453                       ; 005013de
        ;   XREF to: 00501453 (CONDITIONAL_JUMP)  ; LAB_00501453
    MOV EDX,dword ptr [EDI + 0x8]       ; 005013e4
    XOR ESI,ESI                         ; 005013e7
    TEST EDX,EDX                        ; 005013e9
    JLE 0x00501468                      ; 005013eb
        ;   XREF to: 00501468 (CONDITIONAL_JUMP)  ; LAB_00501468
    MOV EBX,EDI                         ; 005013f1
    MOV EAX,[0x02dcd7d0]                ; 005013f3 | g_CKeyActorClassInfo.name_hash
        ;   Label: LAB_005013f3
    PUSH EAX                            ; 005013f8
    MOV EDX,dword ptr [EBX + 0xc]       ; 005013f9
    PUSH EDX                            ; 005013fc
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005013fd
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00501402
    TEST EAX,EAX                        ; 00501405
    JZ 0x0050145d                       ; 00501407
        ;   XREF to: 0050145d (CONDITIONAL_JUMP)  ; LAB_0050145d
    TEST dword ptr [EAX + 0x2d4],EBP    ; 00501409
    JZ 0x0050145d                       ; 0050140f
        ;   XREF to: 0050145d (CONDITIONAL_JUMP)  ; LAB_0050145d
    CMP dword ptr [ESP + 0x1c],0x0      ; 00501411
    JZ 0x00501453                       ; 00501416
        ;   XREF to: 00501453 (CONDITIONAL_JUMP)  ; LAB_00501453
    PUSH 0x40a00000                     ; 00501418
    PUSH 0x630b9a                       ; 0050141d | = "You used a key."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00501422
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00501427
    PUSH EAX                            ; 0050142a
    MOV ESI,dword ptr [0x0067b654]      ; 0050142b | g_CGamePtr
    PUSH ESI                            ; 00501431 | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 00501432
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    MOV EBP,dword ptr [EDI + 0x4]       ; 00501437
    ADD ESP,0xc                         ; 0050143a
    TEST EBP,EBP                        ; 0050143d
    JZ 0x00501453                       ; 0050143f
        ;   XREF to: 00501453 (CONDITIONAL_JUMP)  ; LAB_00501453
    PUSH 0x630baa                       ; 00501441 | = "key-unlock.wav"
    MOV EBX,dword ptr [EBP + 0x154]     ; 00501446
    PUSH EBP                            ; 0050144c
    CALL dword ptr [EBX + 0x24]         ; 0050144d
    ADD ESP,0x8                         ; 00501450
    MOV EAX,0x1                         ; 00501453
        ;   Label: LAB_00501453
    POP EBP                             ; 00501458
    POP EDI                             ; 00501459
    POP ESI                             ; 0050145a
    POP EBX                             ; 0050145b
    RET                                 ; 0050145c
    INC ESI                             ; 0050145d
        ;   Label: LAB_0050145d
    MOV ECX,dword ptr [EDI + 0x8]       ; 0050145e
    ADD EBX,0x4                         ; 00501461
    CMP ESI,ECX                         ; 00501464
    JL 0x005013f3                       ; 00501466
        ;   XREF to: 005013f3 (CONDITIONAL_JUMP)  ; LAB_005013f3
    CMP dword ptr [ESP + 0x1c],0x0      ; 00501468
        ;   Label: LAB_00501468
    JZ 0x00501491                       ; 0050146d
        ;   XREF to: 00501491 (CONDITIONAL_JUMP)  ; LAB_00501491
    PUSH 0x40a00000                     ; 0050146f
    PUSH 0x630bb9                       ; 00501474 | = "You need the right key"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00501479
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 0050147e
    PUSH EAX                            ; 00501481
    MOV ESI,dword ptr [0x0067b654]      ; 00501482 | g_CGamePtr
    PUSH ESI                            ; 00501488 | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 00501489
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 0050148e
    XOR EAX,EAX                         ; 00501491
        ;   Label: LAB_00501491
    POP EBP                             ; 00501493
    POP EDI                             ; 00501494
    POP ESI                             ; 00501495
    POP EBX                             ; 00501496
    RET                                 ; 00501497

