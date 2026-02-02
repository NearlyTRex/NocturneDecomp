; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_netgame_cpp_CNetGame_FUN_00542370(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0 at 00540b6a
;   core_netgame.cpp_CNetGame_processChatOut_FUN_00541e40 at 00541f6c
;
; Referenced Globals:
;   CGame* g_CGamePtr = 02d81a9c
;   CGame g_CGameInstance
;   int g_ChatHistoryCount
;   SChatHistory[400] g_ChatHistory
;   undefined4 DAT_02f7c8d4
;   undefined4 DAT_02f7c8d8
;   undefined4 DAT_02f7c8dc
;   undefined4 DAT_02f7c8dd
;   undefined4 DAT_02f7c8de
;   undefined4 DAT_02f7c8df
;   undefined4 DAT_02f7c8f0
;   undefined4 DAT_02f7c8f1
;   undefined4 DAT_02f7c8f2
;   undefined4 DAT_02f7c8f3
;   undefined4 DAT_02f7c9f0
;
; Called Functions:
;   core_game.cpp_CGame_displayMessage_FUN_004d7f20
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00542370
        ;   Label: core_netgame.cpp_CNetGame_FUN_00542370
    PUSH ESI                            ; 00542371
    PUSH EDI                            ; 00542372
    MOV EBX,dword ptr [ESP + 0x20]      ; 00542373
    MOV EDX,dword ptr [0x02f7c8cc]      ; 00542377 | g_ChatHistoryCount
    CMP EDX,0x190                       ; 0054237d
    JGE 0x00542435                      ; 00542383
        ;   XREF to: 00542435 (CONDITIONAL_JUMP)  ; LAB_00542435
    MOV EDX,dword ptr [0x02f7c8cc]      ; 00542389 | g_ChatHistoryCount
        ;   Label: LAB_00542389
    LEA EAX,[EDX*0x8 + 0x0]             ; 0054238f
    ADD EAX,EDX                         ; 00542396
    SHL EAX,0x5                         ; 00542398
    MOV ESI,dword ptr [ESP + 0x14]      ; 0054239b
    LEA EDI,[EAX + 0x2f7c8d0]           ; 0054239f | g_ChatHistory
    MOV EDX,dword ptr [ESP + 0x18]      ; 005423a5
    MOVSD ES:EDI,ESI                    ; 005423a9 | g_ChatHistory
    MOVSD ES:EDI,ESI                    ; 005423aa | DAT_02f7c8d4
    MOV dword ptr [EAX + 0x2f7c8d8],EDX ; 005423ab | DAT_02f7c8d8
    ADD EAX,0x2f7c8d0                   ; 005423b1 | g_ChatHistory
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005423b6
    LEA EDI,[EAX + 0xc]                 ; 005423ba
    PUSH EDI                            ; 005423bd
    MOV AL,byte ptr [ESI]               ; 005423be
        ;   Label: LAB_005423be
    MOV byte ptr [EDI],AL               ; 005423c0 | DAT_02f7c8dc | DAT_02f7c8de
    CMP AL,0x0                          ; 005423c2
    JZ 0x005423d6                       ; 005423c4
        ;   XREF to: 005423d6 (CONDITIONAL_JUMP)  ; LAB_005423d6
    MOV AL,byte ptr [ESI + 0x1]         ; 005423c6
    ADD ESI,0x2                         ; 005423c9
    MOV byte ptr [EDI + 0x1],AL         ; 005423cc | DAT_02f7c8dd | DAT_02f7c8df
    ADD EDI,0x2                         ; 005423cf
    CMP AL,0x0                          ; 005423d2
    JNZ 0x005423be                      ; 005423d4
        ;   XREF to: 005423be (CONDITIONAL_JUMP)  ; LAB_005423be
    POP EDI                             ; 005423d6
        ;   Label: LAB_005423d6
    MOV EDX,dword ptr [0x02f7c8cc]      ; 005423d7 | g_ChatHistoryCount
    LEA EAX,[EDX*0x8 + 0x0]             ; 005423dd
    ADD EAX,EDX                         ; 005423e4
    MOV EDI,0x2f7c8d0                   ; 005423e6 | g_ChatHistory
    SHL EAX,0x5                         ; 005423eb
    ADD EDI,EAX                         ; 005423ee
    MOV ESI,EBX                         ; 005423f0
    ADD EDI,0x20                        ; 005423f2
    PUSH EDI                            ; 005423f5
    MOV AL,byte ptr [ESI]               ; 005423f6
        ;   Label: LAB_005423f6
    MOV byte ptr [EDI],AL               ; 005423f8 | DAT_02f7c8f0 | DAT_02f7c8f2
    CMP AL,0x0                          ; 005423fa
    JZ 0x0054240e                       ; 005423fc
        ;   XREF to: 0054240e (CONDITIONAL_JUMP)  ; LAB_0054240e
    MOV AL,byte ptr [ESI + 0x1]         ; 005423fe
    ADD ESI,0x2                         ; 00542401
    MOV byte ptr [EDI + 0x1],AL         ; 00542404 | DAT_02f7c8f1 | DAT_02f7c8f3
    ADD EDI,0x2                         ; 00542407
    CMP AL,0x0                          ; 0054240a
    JNZ 0x005423f6                      ; 0054240c
        ;   XREF to: 005423f6 (CONDITIONAL_JUMP)  ; LAB_005423f6
    POP EDI                             ; 0054240e
        ;   Label: LAB_0054240e
    PUSH 0x40a00000                     ; 0054240f
    MOV ESI,dword ptr [0x02f7c8cc]      ; 00542414 | g_ChatHistoryCount
    PUSH EBX                            ; 0054241a
    MOV EBX,dword ptr [0x0067b654]      ; 0054241b | g_CGameInstance | g_CGamePtr
    INC ESI                             ; 00542421
    PUSH EBX                            ; 00542422 | g_CGameInstance
    MOV dword ptr [0x02f7c8cc],ESI      ; 00542423 | g_ChatHistoryCount
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 00542429
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 0054242e
    POP EDI                             ; 00542431
    POP ESI                             ; 00542432
    POP EBX                             ; 00542433
    RET                                 ; 00542434
    LEA ECX,[EDX + -0x1]                ; 00542435
        ;   Label: LAB_00542435
    MOV dword ptr [0x02f7c8cc],ECX      ; 00542438 | g_ChatHistoryCount
    LEA EAX,[ECX*0x8 + 0x0]             ; 0054243e
    ADD EAX,ECX                         ; 00542445
    SHL EAX,0x5                         ; 00542447
    PUSH EAX                            ; 0054244a
    PUSH 0x2f7c9f0                      ; 0054244b | DAT_02f7c9f0
    PUSH 0x2f7c8d0                      ; 00542450 | g_ChatHistory
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 00542455
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0054245a
    JMP 0x00542389                      ; 0054245d
        ;   XREF to: 00542389 (UNCONDITIONAL_JUMP)  ; LAB_00542389

