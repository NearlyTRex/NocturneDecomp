; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_addChatHistory_FUN_004ec500(CNetGame *this_ptr,SNetworkAddr *sender_addr,int message_id,char *sender_name,char *message)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; SNetworkAddr *   Stack[0x8]:4   sender_addr
; int              Stack[0xc]:4   message_id
; char *           Stack[0x10]:4   sender_name
; char *           Stack[0x14]:4   message
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_processChatOut_FUN_004ebfd0 at 004ec0fc
;   core_netgame.cpp_CNetGame_processPacket_FUN_004ea830 at 004eacfa
;
; Referenced Globals:
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   CGame g_CGame_01c775ec
;   undefined4 DAT_01cea40c
;
; Called Functions:
;   core_game.cpp_CGame_displayMessage_FUN_0049aa30
;   crt_string.c_memmove_FUN_00566170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ec500
        ;   Label: core_netgame.cpp_CNetGame_addChatHistory_FUN_004ec500
    PUSH ESI                            ; 004ec501
    PUSH EDI                            ; 004ec502
    MOV EBX,dword ptr [ESP + 0x20]      ; 004ec503
    MOV EDX,dword ptr [0x01cea40c]      ; 004ec507 | DAT_01cea40c
    CMP EDX,0x190                       ; 004ec50d
    JGE 0x004ec5c5                      ; 004ec513
        ;   XREF to: 004ec5c5 (CONDITIONAL_JUMP)  ; LAB_004ec5c5
    MOV EDX,dword ptr [0x01cea40c]      ; 004ec519 | DAT_01cea40c
        ;   Label: LAB_004ec519
    LEA EAX,[EDX*0x8 + 0x0]             ; 004ec51f
    ADD EAX,EDX                         ; 004ec526
    SHL EAX,0x5                         ; 004ec528
    MOV ESI,dword ptr [ESP + 0x14]      ; 004ec52b
    LEA EDI,[EAX + 0x1cea410]           ; 004ec52f
    MOV EDX,dword ptr [ESP + 0x18]      ; 004ec535
    MOVSD ES:EDI,ESI                    ; 004ec539
    MOVSD ES:EDI,ESI                    ; 004ec53a
    MOV dword ptr [EAX + 0x1cea418],EDX ; 004ec53b
    ADD EAX,0x1cea410                   ; 004ec541
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004ec546
    LEA EDI,[EAX + 0xc]                 ; 004ec54a
    PUSH EDI                            ; 004ec54d
    MOV AL,byte ptr [ESI]               ; 004ec54e
        ;   Label: LAB_004ec54e
    MOV byte ptr [EDI],AL               ; 004ec550
    CMP AL,0x0                          ; 004ec552
    JZ 0x004ec566                       ; 004ec554
        ;   XREF to: 004ec566 (CONDITIONAL_JUMP)  ; LAB_004ec566
    MOV AL,byte ptr [ESI + 0x1]         ; 004ec556
    ADD ESI,0x2                         ; 004ec559
    MOV byte ptr [EDI + 0x1],AL         ; 004ec55c
    ADD EDI,0x2                         ; 004ec55f
    CMP AL,0x0                          ; 004ec562
    JNZ 0x004ec54e                      ; 004ec564
        ;   XREF to: 004ec54e (CONDITIONAL_JUMP)  ; LAB_004ec54e
    POP EDI                             ; 004ec566
        ;   Label: LAB_004ec566
    MOV EDX,dword ptr [0x01cea40c]      ; 004ec567 | DAT_01cea40c
    LEA EAX,[EDX*0x8 + 0x0]             ; 004ec56d
    ADD EAX,EDX                         ; 004ec574
    MOV EDI,0x1cea410                   ; 004ec576
    SHL EAX,0x5                         ; 004ec57b
    ADD EDI,EAX                         ; 004ec57e
    MOV ESI,EBX                         ; 004ec580
    ADD EDI,0x20                        ; 004ec582
    PUSH EDI                            ; 004ec585
    MOV AL,byte ptr [ESI]               ; 004ec586
        ;   Label: LAB_004ec586
    MOV byte ptr [EDI],AL               ; 004ec588
    CMP AL,0x0                          ; 004ec58a
    JZ 0x004ec59e                       ; 004ec58c
        ;   XREF to: 004ec59e (CONDITIONAL_JUMP)  ; LAB_004ec59e
    MOV AL,byte ptr [ESI + 0x1]         ; 004ec58e
    ADD ESI,0x2                         ; 004ec591
    MOV byte ptr [EDI + 0x1],AL         ; 004ec594
    ADD EDI,0x2                         ; 004ec597
    CMP AL,0x0                          ; 004ec59a
    JNZ 0x004ec586                      ; 004ec59c
        ;   XREF to: 004ec586 (CONDITIONAL_JUMP)  ; LAB_004ec586
    POP EDI                             ; 004ec59e
        ;   Label: LAB_004ec59e
    PUSH 0x40a00000                     ; 004ec59f
    MOV ESI,dword ptr [0x01cea40c]      ; 004ec5a4 | DAT_01cea40c
    PUSH EBX                            ; 004ec5aa
    MOV EBX,dword ptr [0x005b9354]      ; 004ec5ab | g_CGame_PTR_005b9354
    INC ESI                             ; 004ec5b1
    PUSH EBX                            ; 004ec5b2 | g_CGame_01c775ec
    MOV dword ptr [0x01cea40c],ESI      ; 004ec5b3 | DAT_01cea40c
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004ec5b9
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004ec5be
    POP EDI                             ; 004ec5c1
    POP ESI                             ; 004ec5c2
    POP EBX                             ; 004ec5c3
    RET                                 ; 004ec5c4
    LEA ECX,[EDX + -0x1]                ; 004ec5c5
        ;   Label: LAB_004ec5c5
    MOV dword ptr [0x01cea40c],ECX      ; 004ec5c8 | DAT_01cea40c
    LEA EAX,[ECX*0x8 + 0x0]             ; 004ec5ce
    ADD EAX,ECX                         ; 004ec5d5
    SHL EAX,0x5                         ; 004ec5d7
    PUSH EAX                            ; 004ec5da
    PUSH 0x1cea530                      ; 004ec5db
    PUSH 0x1cea410                      ; 004ec5e0
    CALL crt_string.c_memmove_FUN_00566170 ; 004ec5e5
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_00566170(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004ec5ea
    JMP 0x004ec519                      ; 004ec5ed
        ;   XREF to: 004ec519 (UNCONDITIONAL_JUMP)  ; LAB_004ec519

