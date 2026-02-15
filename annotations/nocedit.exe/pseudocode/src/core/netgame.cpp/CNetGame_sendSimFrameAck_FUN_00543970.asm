; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_00543970(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined1       Stack[-0x44]:1  local_44
; undefined4       Stack[-0x43]:4  local_43
; undefined1       Stack[-0x3f]:1  local_3f
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_processClientFrame_FUN_005435a0 at 00543649
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0063e008
;   TerminatedCString s_CNetGame_sendSimFrameAck_0063e01c
;   TerminatedCString s_core_netgame_cpp_0063e05d
;   TerminatedCString s_CNetGame_sendSimFrameAck_0063e071
;   TerminatedCString s_core_netgame_cpp_0063e0b4
;   TerminatedCString s_CNetGame_sendSimFrameAck_0063e0c8
;   TerminatedCString s_core_netgame_cpp_0063e0fe
;   TerminatedCString s_CNetGame_sendSimFrameAck_0063e112
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   uint g_CurrentGameTime
;   undefined4 DAT_02f7c8c8
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_netgame.cpp_CNetGame_send_FUN_005411c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543970
        ;   Label: core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00543970
    PUSH ESI                            ; 00543971
    PUSH EDI                            ; 00543972
    PUSH EBP                            ; 00543973
    SUB ESP,0x38                        ; 00543974
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00543977
    CMP dword ptr [EBX],0x2             ; 0054397b
    JNZ 0x00543a32                      ; 0054397e
        ;   XREF to: 00543a32 (CONDITIONAL_JUMP)  ; LAB_00543a32
    CMP dword ptr [EBX + 0x4],0x3       ; 00543984
        ;   Label: LAB_00543984
    JZ 0x005439ac                       ; 00543988
        ;   XREF to: 005439ac (CONDITIONAL_JUMP)  ; LAB_005439ac
    MOV EBP,0x63e05d                    ; 0054398a | = "..\\core\\netgame.cpp"
    MOV EAX,0xa2a                       ; 0054398f
    PUSH 0x63e071                       ; 00543994 | = "CNetGame::sendSimFrameAck - should on..."
    MOV dword ptr [0x02f0ca48],EBP      ; 00543999 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0054399f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005439a4
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005439a9
    CMP dword ptr [EBX + 0x110],0x0     ; 005439ac
        ;   Label: LAB_005439ac
    JL 0x00543a5a                       ; 005439b3
        ;   XREF to: 00543a5a (CONDITIONAL_JUMP)  ; LAB_00543a5a
    CMP dword ptr [EBX + 0x114],0x0     ; 005439b9
        ;   Label: LAB_005439b9
    JL 0x00543a82                       ; 005439c0
        ;   XREF to: 00543a82 (CONDITIONAL_JUMP)  ; LAB_00543a82
    MOV EDX,0x35                        ; 005439c6
        ;   Label: LAB_005439c6
    MOV AH,0x10                         ; 005439cb
    MOV dword ptr [ESP],EDX             ; 005439cd
    MOV byte ptr [ESP + 0x4],AH         ; 005439d0
    MOV EAX,dword ptr [EBX + 0x114]     ; 005439d4
    SHL EAX,0x3                         ; 005439da
    MOV EDX,EAX                         ; 005439dd
    SHL EAX,0x4                         ; 005439df
    SUB EAX,EDX                         ; 005439e2
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x68] ; 005439e4
    MOV dword ptr [ESP + 0x5],EAX       ; 005439e8
    MOV EAX,dword ptr [EBX + 0x114]     ; 005439ec
    SHL EAX,0x3                         ; 005439f2
    MOV EDX,EAX                         ; 005439f5
    SHL EAX,0x4                         ; 005439f7
    SUB EAX,EDX                         ; 005439fa
    LEA ESI,[EBX + EAX*0x1]             ; 005439fc
    MOV ECX,0xb                         ; 005439ff
    LEA EDI,[ESP + 0x9]                 ; 00543a04
    LEA ESI,[ESI + 0x6c]                ; 00543a08
    MOV EAX,ESP                         ; 00543a0b
    MOVSD.REP ES:EDI,ESI                ; 00543a0d
    PUSH EAX                            ; 00543a0f
    MOV ECX,dword ptr [EBX + 0x110]     ; 00543a10
    PUSH ECX                            ; 00543a16
    PUSH EBX                            ; 00543a17
    CALL core_netgame.cpp_CNetGame_send_FUN_005411c0 ; 00543a18
        ;   XREF to: 005411c0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_005411c0(CNetGame * this_ptr, int player_index)
    MOV EAX,[0x02f7c8b8]                ; 00543a1d | g_CurrentGameTime
    ADD ESP,0xc                         ; 00543a22
    MOV [0x02f7c8c8],EAX                ; 00543a25 | DAT_02f7c8c8
    ADD ESP,0x38                        ; 00543a2a
    POP EBP                             ; 00543a2d
    POP EDI                             ; 00543a2e
    POP ESI                             ; 00543a2f
    POP EBX                             ; 00543a30
    RET                                 ; 00543a31
    MOV ECX,0x63e008                    ; 00543a32 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00543a32
    MOV ESI,0xa29                       ; 00543a37
    PUSH 0x63e01c                       ; 00543a3c | = "CNetGame::sendSimFrameAck - should on..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00543a41 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00543a47 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00543a4d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00543a52
    JMP 0x00543984                      ; 00543a55
        ;   XREF to: 00543984 (UNCONDITIONAL_JUMP)  ; LAB_00543984
    MOV ECX,0x63e0b4                    ; 00543a5a | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00543a5a
    MOV ESI,0xa2b                       ; 00543a5f
    PUSH 0x63e0c8                       ; 00543a64 | = "CNetGame::sendSimFrameAck - server no..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00543a69 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00543a6f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00543a75
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00543a7a
    JMP 0x005439b9                      ; 00543a7d
        ;   XREF to: 005439b9 (UNCONDITIONAL_JUMP)  ; LAB_005439b9
    MOV EBP,0x63e0fe                    ; 00543a82 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00543a82
    MOV EAX,0xa2c                       ; 00543a87
    PUSH 0x63e112                       ; 00543a8c | = "CNetGame::sendSimFrameAck - I'm not i..."
    MOV dword ptr [0x02f0ca48],EBP      ; 00543a91 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00543a97 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00543a9c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00543aa1
    JMP 0x005439c6                      ; 00543aa4
        ;   XREF to: 005439c6 (UNCONDITIONAL_JUMP)  ; LAB_005439c6

