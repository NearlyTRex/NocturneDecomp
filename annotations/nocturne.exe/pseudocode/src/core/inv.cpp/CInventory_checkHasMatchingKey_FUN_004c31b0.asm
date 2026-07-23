; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_inv_cpp_CInventory_checkHasMatchingKey_FUN_004c31b0(int param_1,uint param_2,int param_3)
;
;
; XREF[2]:
;   FUN_004b5270 at 004b5299
;   core_event.cpp_CEventList_evaluateAtom_FUN_0047e0d0 at 0047ec93
;
; Referenced Globals:
;   TerminatedCString s_You_used_a_key_005874f9
;   TerminatedCString s_key_unlock_wav_00587509
;   TerminatedCString s_You_need_the_right_key_00587518
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c775ec
;   undefined4 DAT_01cc30e0
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_game.cpp_CGame_displayMessage_FUN_0049aa30
;   support_newmsg.cpp_getLocalizedString_FUN_004ee370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c31b0
        ;   Label: core_inv.cpp_CInventory_checkHasMatchingKey_FUN_004c31b0
    PUSH ESI                            ; 004c31b1
    PUSH EDI                            ; 004c31b2
    PUSH EBP                            ; 004c31b3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004c31b4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004c31b8
    TEST EBP,EBP                        ; 004c31bc
    JZ 0x004c3233                       ; 004c31be
        ;   XREF to: 004c3233 (CONDITIONAL_JUMP)  ; LAB_004c3233
    MOV EDX,dword ptr [EDI + 0x8]       ; 004c31c4
    XOR ESI,ESI                         ; 004c31c7
    TEST EDX,EDX                        ; 004c31c9
    JLE 0x004c3248                      ; 004c31cb
        ;   XREF to: 004c3248 (CONDITIONAL_JUMP)  ; LAB_004c3248
    MOV EBX,EDI                         ; 004c31d1
    MOV EAX,[0x01cc30e0]                ; 004c31d3 | DAT_01cc30e0
        ;   Label: LAB_004c31d3
    PUSH EAX                            ; 004c31d8
    MOV EDX,dword ptr [EBX + 0xc]       ; 004c31d9
    PUSH EDX                            ; 004c31dc
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004c31dd
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004c31e2
    TEST EAX,EAX                        ; 004c31e5
    JZ 0x004c323d                       ; 004c31e7
        ;   XREF to: 004c323d (CONDITIONAL_JUMP)  ; LAB_004c323d
    TEST dword ptr [EAX + 0x2cc],EBP    ; 004c31e9
    JZ 0x004c323d                       ; 004c31ef
        ;   XREF to: 004c323d (CONDITIONAL_JUMP)  ; LAB_004c323d
    CMP dword ptr [ESP + 0x1c],0x0      ; 004c31f1
    JZ 0x004c3233                       ; 004c31f6
        ;   XREF to: 004c3233 (CONDITIONAL_JUMP)  ; LAB_004c3233
    PUSH 0x40a00000                     ; 004c31f8
    PUSH 0x5874f9                       ; 004c31fd | = "You used a key."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004c3202
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004c3207
    PUSH EAX                            ; 004c320a
    MOV ESI,dword ptr [0x005b9354]      ; 004c320b | DAT_005b9354
    PUSH ESI                            ; 004c3211 | DAT_01c775ec
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004c3212
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_displayMessage_FUN_0049aa30()
    MOV EBP,dword ptr [EDI + 0x4]       ; 004c3217
    ADD ESP,0xc                         ; 004c321a
    TEST EBP,EBP                        ; 004c321d
    JZ 0x004c3233                       ; 004c321f
        ;   XREF to: 004c3233 (CONDITIONAL_JUMP)  ; LAB_004c3233
    PUSH 0x587509                       ; 004c3221 | = "key-unlock.wav"
    MOV EBX,dword ptr [EBP + 0x14c]     ; 004c3226
    PUSH EBP                            ; 004c322c
    CALL dword ptr [EBX + 0x24]         ; 004c322d
    ADD ESP,0x8                         ; 004c3230
    MOV EAX,0x1                         ; 004c3233
        ;   Label: LAB_004c3233
    POP EBP                             ; 004c3238
    POP EDI                             ; 004c3239
    POP ESI                             ; 004c323a
    POP EBX                             ; 004c323b
    RET                                 ; 004c323c
    INC ESI                             ; 004c323d
        ;   Label: LAB_004c323d
    MOV ECX,dword ptr [EDI + 0x8]       ; 004c323e
    ADD EBX,0x4                         ; 004c3241
    CMP ESI,ECX                         ; 004c3244
    JL 0x004c31d3                       ; 004c3246
        ;   XREF to: 004c31d3 (CONDITIONAL_JUMP)  ; LAB_004c31d3
    CMP dword ptr [ESP + 0x1c],0x0      ; 004c3248
        ;   Label: LAB_004c3248
    JZ 0x004c3271                       ; 004c324d
        ;   XREF to: 004c3271 (CONDITIONAL_JUMP)  ; LAB_004c3271
    PUSH 0x40a00000                     ; 004c324f
    PUSH 0x587518                       ; 004c3254 | = "You need the right key"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004c3259
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004c325e
    PUSH EAX                            ; 004c3261
    MOV ESI,dword ptr [0x005b9354]      ; 004c3262 | DAT_005b9354
    PUSH ESI                            ; 004c3268 | DAT_01c775ec
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004c3269
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_displayMessage_FUN_0049aa30()
    ADD ESP,0xc                         ; 004c326e
    XOR EAX,EAX                         ; 004c3271
        ;   Label: LAB_004c3271
    POP EBP                             ; 004c3273
    POP EDI                             ; 004c3274
    POP ESI                             ; 004c3275
    POP EBX                             ; 004c3276
    RET                                 ; 004c3277

