; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_gameSettingsChanged_FUN_00542cf0(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_processPacket_FUN_005406a0 at 00540de9
;   core_netgame.cpp_CNetGame_runLobby_FUN_00541390 at 005416b3
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0063dc53
;   TerminatedCString s_CNetGame_gameSettingsCha_0063dc67
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_LastPingTime
;   uint g_CurrentGameTime
;   int INT_02f7c8c4
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00542cf0
        ;   Label: core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0
    PUSH ESI                            ; 00542cf1
    PUSH EDI                            ; 00542cf2
    PUSH EBP                            ; 00542cf3
    MOV ESI,dword ptr [0x02f7c8b8]      ; 00542cf4 | g_CurrentGameTime
    MOV EDI,dword ptr [0x02f7c8c4]      ; 00542cfa | INT_02f7c8c4
    MOV EBX,dword ptr [ESP + 0x14]      ; 00542d00
    CMP dword ptr [EBX],0x1             ; 00542d04
    JNZ 0x00542d95                      ; 00542d07
        ;   XREF to: 00542d95 (CONDITIONAL_JUMP)  ; LAB_00542d95
    MOV EDI,dword ptr [0x02f7c8c4]      ; 00542d0d | INT_02f7c8c4
        ;   Label: LAB_00542d0d
    INC EDI                             ; 00542d13
    MOV dword ptr [0x02f7c8c4],EDI      ; 00542d14 | INT_02f7c8c4
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 00542d1a
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV EDX,EAX                         ; 00542d1f
    MOV ECX,0x12                        ; 00542d21
    SAR EDX,0x1f                        ; 00542d26
    IDIV ECX                            ; 00542d29
    MOV EDI,dword ptr [0x02f7c8c4]      ; 00542d2b | INT_02f7c8c4
    MOV ECX,dword ptr [0x02f7c8b4]      ; 00542d31 | g_LastPingTime
    MOV EDX,EAX                         ; 00542d37
    SUB EAX,ECX                         ; 00542d39
    MOV dword ptr [0x02f7c8b4],EDX      ; 00542d3b | g_LastPingTime
    TEST EAX,EAX                        ; 00542d41
    JL 0x00542dbd                       ; 00542d43
        ;   XREF to: 00542dbd (CONDITIONAL_JUMP)  ; LAB_00542dbd
    MOV ESI,dword ptr [0x02f7c8b8]      ; 00542d49 | g_CurrentGameTime
    CMP EAX,0x20000                     ; 00542d4f
    JLE 0x00542d5b                      ; 00542d54
        ;   XREF to: 00542d5b (CONDITIONAL_JUMP)  ; LAB_00542d5b
    MOV EAX,0x20000                     ; 00542d56
    MOV EBP,dword ptr [EBX + 0x1c]      ; 00542d5b
        ;   Label: LAB_00542d5b
    ADD ESI,EAX                         ; 00542d5e
    XOR EAX,EAX                         ; 00542d60
    TEST EBP,EBP                        ; 00542d62
    JLE 0x00542d84                      ; 00542d64
        ;   XREF to: 00542d84 (CONDITIONAL_JUMP)  ; LAB_00542d84
    MOV EDX,EBX                         ; 00542d66
    CMP EAX,dword ptr [EBX + 0x114]     ; 00542d68
        ;   Label: LAB_00542d68
    JZ 0x00542dc7                       ; 00542d6e
        ;   XREF to: 00542dc7 (CONDITIONAL_JUMP)  ; LAB_00542dc7
    LEA ECX,[ESI + 0xffe20000]          ; 00542d70
    MOV dword ptr [EDX + 0x58],ECX      ; 00542d76
    INC EAX                             ; 00542d79
        ;   Label: LAB_00542d79
    MOV ECX,dword ptr [EBX + 0x1c]      ; 00542d7a
    ADD EDX,0x78                        ; 00542d7d
    CMP EAX,ECX                         ; 00542d80
    JL 0x00542d68                       ; 00542d82
        ;   XREF to: 00542d68 (CONDITIONAL_JUMP)  ; LAB_00542d68
    MOV dword ptr [0x02f7c8c4],EDI      ; 00542d84 | INT_02f7c8c4
        ;   Label: LAB_00542d84
    MOV dword ptr [0x02f7c8b8],ESI      ; 00542d8a | g_CurrentGameTime
    POP EBP                             ; 00542d90
    POP EDI                             ; 00542d91
    POP ESI                             ; 00542d92
    POP EBX                             ; 00542d93
    RET                                 ; 00542d94
    MOV ECX,0x63dc53                    ; 00542d95 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00542d95
    MOV EBP,0x88c                       ; 00542d9a
    PUSH 0x63dc67                       ; 00542d9f | = "CNetGame::gameSettingsChanged - shoul..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00542da4 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 00542daa | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00542db0
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00542db5
    JMP 0x00542d0d                      ; 00542db8
        ;   XREF to: 00542d0d (UNCONDITIONAL_JUMP)  ; LAB_00542d0d
    MOV ESI,dword ptr [0x02f7c8b8]      ; 00542dbd | g_CurrentGameTime
        ;   Label: LAB_00542dbd
    XOR EAX,EAX                         ; 00542dc3
    JMP 0x00542d5b                      ; 00542dc5
        ;   XREF to: 00542d5b (UNCONDITIONAL_JUMP)  ; LAB_00542d5b
    MOV dword ptr [EDX + 0x54],EDI      ; 00542dc7
        ;   Label: LAB_00542dc7
    JMP 0x00542d79                      ; 00542dca
        ;   XREF to: 00542d79 (UNCONDITIONAL_JUMP)  ; LAB_00542d79

