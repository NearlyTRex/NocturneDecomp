; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_addChatHistory_FUN_00506a00(CNetGame *this_ptr,SNetworkAddr *sender_addr,int message_id,char *sender_name,char *message)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; SNetworkAddr *   Stack[0x8]:4   sender_addr
; int              Stack[0xc]:4   message_id
; char *           Stack[0x10]:4   sender_name
; char *           Stack[0x14]:4   message
;
; XREF[2]:
;   core_netgame.cpp_FUN_00504d60 at 00505210
;   core_netgame.cpp_FUN_005064d0 at 005065f3
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_01da648c
;
; Called Functions:
;   core_game.cpp_CGame_displayMessage_FUN_004b46b0
;   crt_string.c_memmove_FUN_005a54c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506a00
        ;   Label: core_netgame.cpp_CNetGame_addChatHistory_FUN_00506a00
    PUSH ESI                            ; 00506a01
    PUSH EDI                            ; 00506a02
    MOV EBX,dword ptr [ESP + 0x20]      ; 00506a03
    MOV EDX,dword ptr [0x01da648c]      ; 00506a07 | DAT_01da648c
    CMP EDX,0x190                       ; 00506a0d
    JGE 0x00506ac5                      ; 00506a13
        ;   XREF to: 00506ac5 (CONDITIONAL_JUMP)  ; LAB_00506ac5
    MOV EDX,dword ptr [0x01da648c]      ; 00506a19 | DAT_01da648c
        ;   Label: LAB_00506a19
    LEA EAX,[EDX*0x8 + 0x0]             ; 00506a1f
    ADD EAX,EDX                         ; 00506a26
    SHL EAX,0x5                         ; 00506a28
    MOV ESI,dword ptr [ESP + 0x14]      ; 00506a2b
    LEA EDI,[EAX + 0x1da6490]           ; 00506a2f
    MOV EDX,dword ptr [ESP + 0x18]      ; 00506a35
    MOVSD ES:EDI,ESI                    ; 00506a39
    MOVSD ES:EDI,ESI                    ; 00506a3a
    MOV dword ptr [EAX + 0x1da6498],EDX ; 00506a3b
    ADD EAX,0x1da6490                   ; 00506a41
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00506a46
    LEA EDI,[EAX + 0xc]                 ; 00506a4a
    PUSH EDI                            ; 00506a4d
    MOV AL,byte ptr [ESI]               ; 00506a4e
        ;   Label: LAB_00506a4e
    MOV byte ptr [EDI],AL               ; 00506a50
    CMP AL,0x0                          ; 00506a52
    JZ 0x00506a66                       ; 00506a54
        ;   XREF to: 00506a66 (CONDITIONAL_JUMP)  ; LAB_00506a66
    MOV AL,byte ptr [ESI + 0x1]         ; 00506a56
    ADD ESI,0x2                         ; 00506a59
    MOV byte ptr [EDI + 0x1],AL         ; 00506a5c
    ADD EDI,0x2                         ; 00506a5f
    CMP AL,0x0                          ; 00506a62
    JNZ 0x00506a4e                      ; 00506a64
        ;   XREF to: 00506a4e (CONDITIONAL_JUMP)  ; LAB_00506a4e
    POP EDI                             ; 00506a66
        ;   Label: LAB_00506a66
    MOV EDX,dword ptr [0x01da648c]      ; 00506a67 | DAT_01da648c
    LEA EAX,[EDX*0x8 + 0x0]             ; 00506a6d
    ADD EAX,EDX                         ; 00506a74
    MOV EDI,0x1da6490                   ; 00506a76
    SHL EAX,0x5                         ; 00506a7b
    ADD EDI,EAX                         ; 00506a7e
    MOV ESI,EBX                         ; 00506a80
    ADD EDI,0x20                        ; 00506a82
    PUSH EDI                            ; 00506a85
    MOV AL,byte ptr [ESI]               ; 00506a86
        ;   Label: LAB_00506a86
    MOV byte ptr [EDI],AL               ; 00506a88
    CMP AL,0x0                          ; 00506a8a
    JZ 0x00506a9e                       ; 00506a8c
        ;   XREF to: 00506a9e (CONDITIONAL_JUMP)  ; LAB_00506a9e
    MOV AL,byte ptr [ESI + 0x1]         ; 00506a8e
    ADD ESI,0x2                         ; 00506a91
    MOV byte ptr [EDI + 0x1],AL         ; 00506a94
    ADD EDI,0x2                         ; 00506a97
    CMP AL,0x0                          ; 00506a9a
    JNZ 0x00506a86                      ; 00506a9c
        ;   XREF to: 00506a86 (CONDITIONAL_JUMP)  ; LAB_00506a86
    POP EDI                             ; 00506a9e
        ;   Label: LAB_00506a9e
    PUSH 0x40a00000                     ; 00506a9f
    MOV ESI,dword ptr [0x01da648c]      ; 00506aa4 | DAT_01da648c
    PUSH EBX                            ; 00506aaa
    MOV EBX,dword ptr [0x005fe9dc]      ; 00506aab | g_CGamePtr
    INC ESI                             ; 00506ab1
    PUSH EBX                            ; 00506ab2
    MOV dword ptr [0x01da648c],ESI      ; 00506ab3 | DAT_01da648c
    CALL core_game.cpp_CGame_displayMessage_FUN_004b46b0 ; 00506ab9
        ;   XREF to: 004b46b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004b46b0(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 00506abe
    POP EDI                             ; 00506ac1
    POP ESI                             ; 00506ac2
    POP EBX                             ; 00506ac3
    RET                                 ; 00506ac4
    LEA ECX,[EDX + -0x1]                ; 00506ac5
        ;   Label: LAB_00506ac5
    MOV dword ptr [0x01da648c],ECX      ; 00506ac8 | DAT_01da648c
    LEA EAX,[ECX*0x8 + 0x0]             ; 00506ace
    ADD EAX,ECX                         ; 00506ad5
    SHL EAX,0x5                         ; 00506ad7
    PUSH EAX                            ; 00506ada
    PUSH 0x1da65b0                      ; 00506adb
    PUSH 0x1da6490                      ; 00506ae0
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00506ae5
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00506aea
    JMP 0x00506a19                      ; 00506aed
        ;   XREF to: 00506a19 (UNCONDITIONAL_JUMP)  ; LAB_00506a19

