; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_inv_cpp_CInventory_checkHasMatchingKey_FUN_004de610(CInventory *this_ptr,uint key_mask,int show_message)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   key_mask
; int              Stack[0xc]:4   show_message
;
; XREF[2]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_00491f40 at 00492ba1
;   core_hero.cpp_CHero_tryOpenDoor_FUN_004d3250 at 004d3279
;
; Referenced Globals:
;   undefined4 s_You_used_a_key_005c665e+1
;   TerminatedCString s_key_unlock_wav_005c666f
;   TerminatedCString s_You_need_the_right_key_005c667e
;   CGame* g_CGamePtr = 01d2130c
;   CGame g_CGameInstance
;   undefined4 g_CKeyActorClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_game.cpp_CGame_displayMessage_FUN_004b46b0
;   support_newmsg.cpp_getLocalizedString_FUN_00508960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004de610
        ;   Label: core_inv.cpp_CInventory_checkHasMatchingKey_FUN_004de610
    PUSH ESI                            ; 004de611
    PUSH EDI                            ; 004de612
    PUSH EBP                            ; 004de613
    MOV EDI,dword ptr [ESP + 0x14]      ; 004de614
    MOV EBP,dword ptr [ESP + 0x18]      ; 004de618
    TEST EBP,EBP                        ; 004de61c
    JZ 0x004de693                       ; 004de61e
        ;   XREF to: 004de693 (CONDITIONAL_JUMP)  ; LAB_004de693
    MOV EDX,dword ptr [EDI + 0x10]      ; 004de624
    XOR ESI,ESI                         ; 004de627
    TEST EDX,EDX                        ; 004de629
    JLE 0x004de6a8                      ; 004de62b
        ;   XREF to: 004de6a8 (CONDITIONAL_JUMP)  ; LAB_004de6a8
    MOV EBX,EDI                         ; 004de631
    MOV EAX,[0x01d70a74]                ; 004de633 | g_CKeyActorClassInfo.name_hash
        ;   Label: LAB_004de633
    PUSH EAX                            ; 004de638
    MOV EDX,dword ptr [EBX + 0x14]      ; 004de639
    PUSH EDX                            ; 004de63c
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004de63d
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004de642
    TEST EAX,EAX                        ; 004de645
    JZ 0x004de69d                       ; 004de647
        ;   XREF to: 004de69d (CONDITIONAL_JUMP)  ; LAB_004de69d
    TEST dword ptr [EAX + 0x2d4],EBP    ; 004de649
    JZ 0x004de69d                       ; 004de64f
        ;   XREF to: 004de69d (CONDITIONAL_JUMP)  ; LAB_004de69d
    CMP dword ptr [ESP + 0x1c],0x0      ; 004de651
    JZ 0x004de693                       ; 004de656
        ;   XREF to: 004de693 (CONDITIONAL_JUMP)  ; LAB_004de693
    PUSH 0x40a00000                     ; 004de658
    PUSH 0x5c665f                       ; 004de65d | s_You_used_a_key_005c665e+1
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004de662
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004de667
    PUSH EAX                            ; 004de66a
    MOV ESI,dword ptr [0x005fe9dc]      ; 004de66b | g_CGamePtr
    PUSH ESI                            ; 004de671 | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004b46b0 ; 004de672
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b46b0(CGame * this_ptr, char * message, float duration)
    MOV EBP,dword ptr [EDI + 0x4]       ; 004de677
    ADD ESP,0xc                         ; 004de67a
    TEST EBP,EBP                        ; 004de67d
    JZ 0x004de693                       ; 004de67f
        ;   XREF to: 004de693 (CONDITIONAL_JUMP)  ; LAB_004de693
    PUSH 0x5c666f                       ; 004de681 | = "key-unlock.wav"
    MOV EBX,dword ptr [EBP + 0x154]     ; 004de686
    PUSH EBP                            ; 004de68c
    CALL dword ptr [EBX + 0x2c]         ; 004de68d
    ADD ESP,0x8                         ; 004de690
    MOV EAX,0x1                         ; 004de693
        ;   Label: LAB_004de693
    POP EBP                             ; 004de698
    POP EDI                             ; 004de699
    POP ESI                             ; 004de69a
    POP EBX                             ; 004de69b
    RET                                 ; 004de69c
    INC ESI                             ; 004de69d
        ;   Label: LAB_004de69d
    MOV ECX,dword ptr [EDI + 0x10]      ; 004de69e
    ADD EBX,0x4                         ; 004de6a1
    CMP ESI,ECX                         ; 004de6a4
    JL 0x004de633                       ; 004de6a6
        ;   XREF to: 004de633 (CONDITIONAL_JUMP)  ; LAB_004de633
    CMP dword ptr [ESP + 0x1c],0x0      ; 004de6a8
        ;   Label: LAB_004de6a8
    JZ 0x004de6d1                       ; 004de6ad
        ;   XREF to: 004de6d1 (CONDITIONAL_JUMP)  ; LAB_004de6d1
    PUSH 0x40a00000                     ; 004de6af
    PUSH 0x5c667e                       ; 004de6b4 | = "You need the right key"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004de6b9
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004de6be
    PUSH EAX                            ; 004de6c1
    MOV ESI,dword ptr [0x005fe9dc]      ; 004de6c2 | g_CGamePtr
    PUSH ESI                            ; 004de6c8 | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004b46b0 ; 004de6c9
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b46b0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004de6ce
    XOR EAX,EAX                         ; 004de6d1
        ;   Label: LAB_004de6d1
    POP EBP                             ; 004de6d3
    POP EDI                             ; 004de6d4
    POP ESI                             ; 004de6d5
    POP EBX                             ; 004de6d6
    RET                                 ; 004de6d7

