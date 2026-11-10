; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_addChatHistory_FUN_0050df20(CNetGame *this_ptr,SNetworkAddr *sender_addr,int message_id,char *sender_name,char *message)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; SNetworkAddr *   Stack[0x8]:4   sender_addr
; int              Stack[0xc]:4   message_id
; char *           Stack[0x10]:4   sender_name
; char *           Stack[0x14]:4   message
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_processChatOut_FUN_0050d9f0 at 0050db13
;   core_netgame.cpp_CNetGame_processPacket_FUN_0050c280 at 0050c730
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01cb6900
;   CGame g_CGameInstance
;   undefined4 DAT_01d34e4c
;
; Called Functions:
;   core_game.cpp_CGame_displayMessage_FUN_004b31a0
;   crt_string.c_memmove_FUN_005ba1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050df20
        ;   Label: core_netgame.cpp_CNetGame_addChatHistory_FUN_0050df20
    PUSH ESI                            ; 0050df21
    PUSH EDI                            ; 0050df22
    MOV EBX,dword ptr [ESP + 0x20]      ; 0050df23
    MOV EDX,dword ptr [0x01d34e4c]      ; 0050df27 | DAT_01d34e4c
    CMP EDX,0x190                       ; 0050df2d
    JGE 0x0050dfe5                      ; 0050df33
        ;   XREF to: 0050dfe5 (CONDITIONAL_JUMP)  ; LAB_0050dfe5
    MOV EDX,dword ptr [0x01d34e4c]      ; 0050df39 | DAT_01d34e4c
        ;   Label: LAB_0050df39
    LEA EAX,[EDX*0x8 + 0x0]             ; 0050df3f
    ADD EAX,EDX                         ; 0050df46
    SHL EAX,0x5                         ; 0050df48
    MOV ESI,dword ptr [ESP + 0x14]      ; 0050df4b
    LEA EDI,[EAX + 0x1d34e50]           ; 0050df4f
    MOV EDX,dword ptr [ESP + 0x18]      ; 0050df55
    MOVSD ES:EDI,ESI                    ; 0050df59
    MOVSD ES:EDI,ESI                    ; 0050df5a
    MOV dword ptr [EAX + 0x1d34e58],EDX ; 0050df5b
    ADD EAX,0x1d34e50                   ; 0050df61
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0050df66
    LEA EDI,[EAX + 0xc]                 ; 0050df6a
    PUSH EDI                            ; 0050df6d
    MOV AL,byte ptr [ESI]               ; 0050df6e
        ;   Label: LAB_0050df6e
    MOV byte ptr [EDI],AL               ; 0050df70
    CMP AL,0x0                          ; 0050df72
    JZ 0x0050df86                       ; 0050df74
        ;   XREF to: 0050df86 (CONDITIONAL_JUMP)  ; LAB_0050df86
    MOV AL,byte ptr [ESI + 0x1]         ; 0050df76
    ADD ESI,0x2                         ; 0050df79
    MOV byte ptr [EDI + 0x1],AL         ; 0050df7c
    ADD EDI,0x2                         ; 0050df7f
    CMP AL,0x0                          ; 0050df82
    JNZ 0x0050df6e                      ; 0050df84
        ;   XREF to: 0050df6e (CONDITIONAL_JUMP)  ; LAB_0050df6e
    POP EDI                             ; 0050df86
        ;   Label: LAB_0050df86
    MOV EDX,dword ptr [0x01d34e4c]      ; 0050df87 | DAT_01d34e4c
    LEA EAX,[EDX*0x8 + 0x0]             ; 0050df8d
    ADD EAX,EDX                         ; 0050df94
    MOV EDI,0x1d34e50                   ; 0050df96
    SHL EAX,0x5                         ; 0050df9b
    ADD EDI,EAX                         ; 0050df9e
    MOV ESI,EBX                         ; 0050dfa0
    ADD EDI,0x20                        ; 0050dfa2
    PUSH EDI                            ; 0050dfa5
    MOV AL,byte ptr [ESI]               ; 0050dfa6
        ;   Label: LAB_0050dfa6
    MOV byte ptr [EDI],AL               ; 0050dfa8
    CMP AL,0x0                          ; 0050dfaa
    JZ 0x0050dfbe                       ; 0050dfac
        ;   XREF to: 0050dfbe (CONDITIONAL_JUMP)  ; LAB_0050dfbe
    MOV AL,byte ptr [ESI + 0x1]         ; 0050dfae
    ADD ESI,0x2                         ; 0050dfb1
    MOV byte ptr [EDI + 0x1],AL         ; 0050dfb4
    ADD EDI,0x2                         ; 0050dfb7
    CMP AL,0x0                          ; 0050dfba
    JNZ 0x0050dfa6                      ; 0050dfbc
        ;   XREF to: 0050dfa6 (CONDITIONAL_JUMP)  ; LAB_0050dfa6
    POP EDI                             ; 0050dfbe
        ;   Label: LAB_0050dfbe
    PUSH 0x40a00000                     ; 0050dfbf
    MOV ESI,dword ptr [0x01d34e4c]      ; 0050dfc4 | DAT_01d34e4c
    PUSH EBX                            ; 0050dfca
    MOV EBX,dword ptr [0x00616494]      ; 0050dfcb | g_CGamePtr
    INC ESI                             ; 0050dfd1
    PUSH EBX                            ; 0050dfd2 | g_CGameInstance
    MOV dword ptr [0x01d34e4c],ESI      ; 0050dfd3 | DAT_01d34e4c
    CALL core_game.cpp_CGame_displayMessage_FUN_004b31a0 ; 0050dfd9
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b31a0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 0050dfde
    POP EDI                             ; 0050dfe1
    POP ESI                             ; 0050dfe2
    POP EBX                             ; 0050dfe3
    RET                                 ; 0050dfe4
    LEA ECX,[EDX + -0x1]                ; 0050dfe5
        ;   Label: LAB_0050dfe5
    MOV dword ptr [0x01d34e4c],ECX      ; 0050dfe8 | DAT_01d34e4c
    LEA EAX,[ECX*0x8 + 0x0]             ; 0050dfee
    ADD EAX,ECX                         ; 0050dff5
    SHL EAX,0x5                         ; 0050dff7
    PUSH EAX                            ; 0050dffa
    PUSH 0x1d34f70                      ; 0050dffb
    PUSH 0x1d34e50                      ; 0050e000
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0050e005
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0050e00a
    JMP 0x0050df39                      ; 0050e00d
        ;   XREF to: 0050df39 (UNCONDITIONAL_JUMP)  ; LAB_0050df39

