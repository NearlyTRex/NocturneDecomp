; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_inv_cpp_CInventory_checkHasMatchingKey_FUN_004fc240(CInventory *this_ptr,uint key_mask,int show_message)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   key_mask
; int              Stack[0xc]:4   show_message
;
; XREF[2]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_004a70d0 at 004a7d31
;   core_hero.cpp_FUN_004eb5e0 at 004eb609
;
; Referenced Globals:
;   TerminatedCString s_You_used_a_key_005e6938
;   TerminatedCString s_key_unlock_wav_005e6948
;   TerminatedCString s_You_need_the_right_key_005e6957
;   CGame* g_CGamePtr = 01ccf390
;   CGame g_CGameInstance
;   undefined4 g_CKeyActorClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_game.cpp_CGame_displayMessage_FUN_004cc190
;   support_newmsg.cpp_getLocalizedString_FUN_00531090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc240
        ;   Label: core_inv.cpp_CInventory_checkHasMatchingKey_FUN_004fc240
    PUSH ESI                            ; 004fc241
    PUSH EDI                            ; 004fc242
    PUSH EBP                            ; 004fc243
    MOV EDI,dword ptr [ESP + 0x14]      ; 004fc244
    MOV EBP,dword ptr [ESP + 0x18]      ; 004fc248
    TEST EBP,EBP                        ; 004fc24c
    JZ 0x004fc2c3                       ; 004fc24e
        ;   XREF to: 004fc2c3 (CONDITIONAL_JUMP)  ; LAB_004fc2c3
    MOV EDX,dword ptr [EDI + 0x10]      ; 004fc254
    XOR ESI,ESI                         ; 004fc257
    TEST EDX,EDX                        ; 004fc259
    JLE 0x004fc2d8                      ; 004fc25b
        ;   XREF to: 004fc2d8 (CONDITIONAL_JUMP)  ; LAB_004fc2d8
    MOV EBX,EDI                         ; 004fc261
    MOV EAX,[0x01d1bc9c]                ; 004fc263 | g_CKeyActorClassInfo.name_hash
        ;   Label: LAB_004fc263
    PUSH EAX                            ; 004fc268
    MOV EDX,dword ptr [EBX + 0x14]      ; 004fc269
    PUSH EDX                            ; 004fc26c
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004fc26d
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004fc272
    TEST EAX,EAX                        ; 004fc275
    JZ 0x004fc2cd                       ; 004fc277
        ;   XREF to: 004fc2cd (CONDITIONAL_JUMP)  ; LAB_004fc2cd
    TEST dword ptr [EAX + 0x2d4],EBP    ; 004fc279
    JZ 0x004fc2cd                       ; 004fc27f
        ;   XREF to: 004fc2cd (CONDITIONAL_JUMP)  ; LAB_004fc2cd
    CMP dword ptr [ESP + 0x1c],0x0      ; 004fc281
    JZ 0x004fc2c3                       ; 004fc286
        ;   XREF to: 004fc2c3 (CONDITIONAL_JUMP)  ; LAB_004fc2c3
    PUSH 0x40a00000                     ; 004fc288
    PUSH 0x5e6938                       ; 004fc28d | = "You used a key."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004fc292
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004fc297
    PUSH EAX                            ; 004fc29a
    MOV ESI,dword ptr [0x0061d95c]      ; 004fc29b | g_CGamePtr
    PUSH ESI                            ; 004fc2a1 | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004fc2a2
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    MOV EBP,dword ptr [EDI + 0x4]       ; 004fc2a7
    ADD ESP,0xc                         ; 004fc2aa
    TEST EBP,EBP                        ; 004fc2ad
    JZ 0x004fc2c3                       ; 004fc2af
        ;   XREF to: 004fc2c3 (CONDITIONAL_JUMP)  ; LAB_004fc2c3
    PUSH 0x5e6948                       ; 004fc2b1 | = "key-unlock.wav"
    MOV EBX,dword ptr [EBP + 0x154]     ; 004fc2b6
    PUSH EBP                            ; 004fc2bc
    CALL dword ptr [EBX + 0x2c]         ; 004fc2bd
    ADD ESP,0x8                         ; 004fc2c0
    MOV EAX,0x1                         ; 004fc2c3
        ;   Label: LAB_004fc2c3
    POP EBP                             ; 004fc2c8
    POP EDI                             ; 004fc2c9
    POP ESI                             ; 004fc2ca
    POP EBX                             ; 004fc2cb
    RET                                 ; 004fc2cc
    INC ESI                             ; 004fc2cd
        ;   Label: LAB_004fc2cd
    MOV ECX,dword ptr [EDI + 0x10]      ; 004fc2ce
    ADD EBX,0x4                         ; 004fc2d1
    CMP ESI,ECX                         ; 004fc2d4
    JL 0x004fc263                       ; 004fc2d6
        ;   XREF to: 004fc263 (CONDITIONAL_JUMP)  ; LAB_004fc263
    CMP dword ptr [ESP + 0x1c],0x0      ; 004fc2d8
        ;   Label: LAB_004fc2d8
    JZ 0x004fc301                       ; 004fc2dd
        ;   XREF to: 004fc301 (CONDITIONAL_JUMP)  ; LAB_004fc301
    PUSH 0x40a00000                     ; 004fc2df
    PUSH 0x5e6957                       ; 004fc2e4 | = "You need the right key"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004fc2e9
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004fc2ee
    PUSH EAX                            ; 004fc2f1
    MOV ESI,dword ptr [0x0061d95c]      ; 004fc2f2 | g_CGamePtr
    PUSH ESI                            ; 004fc2f8 | g_CGameInstance
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004fc2f9
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004fc2fe
    XOR EAX,EAX                         ; 004fc301
        ;   Label: LAB_004fc301
    POP EBP                             ; 004fc303
    POP EDI                             ; 004fc304
    POP ESI                             ; 004fc305
    POP EBX                             ; 004fc306
    RET                                 ; 004fc307

