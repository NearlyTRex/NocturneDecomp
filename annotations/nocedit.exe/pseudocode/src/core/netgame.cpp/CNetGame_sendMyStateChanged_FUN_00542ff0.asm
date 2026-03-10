; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_sendMyStateChanged_FUN_00542ff0(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined1       Stack[-0x38]:1  local_38
; undefined4       Stack[-0x37]:4  local_37
; undefined1       Stack[-0x33]:1  local_33
; undefined1       Stack[-0x32]:1  local_32
; undefined4       Stack[-0x1f]:4  local_1f
; undefined4       Stack[-0x1b]:4  local_1b
; undefined4       Stack[-0x17]:4  local_17
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470 at 005429e5
;   core_netgame.cpp_CNetGame_runLobby_FUN_00541390 at 00541406
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0063dd48
;   TerminatedCString s_CNetGame_sendMyStateChan_0063dd5c
;   int INT_00680a04 = 0x1
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_LastPingTime
;   uint g_CurrentGameTime
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_netgame.cpp_CNetGame_send_FUN_005411c0
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00542ff0
        ;   Label: core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0
    PUSH ESI                            ; 00542ff1
    PUSH EDI                            ; 00542ff2
    PUSH EBP                            ; 00542ff3
    SUB ESP,0x2c                        ; 00542ff4
    MOV EBX,dword ptr [ESP + 0x40]      ; 00542ff7
    CMP dword ptr [EBX],0x2             ; 00542ffb
    JNZ 0x00543006                      ; 00542ffe
        ;   XREF to: 00543006 (CONDITIONAL_JUMP)  ; LAB_00543006
    CMP dword ptr [EBX + 0x4],0x1       ; 00543000
    JZ 0x00543029                       ; 00543004
        ;   XREF to: 00543029 (CONDITIONAL_JUMP)  ; LAB_00543029
    MOV ESI,0x63dd48                    ; 00543006 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00543006
    MOV EDI,0x8d0                       ; 0054300b
    PUSH 0x63dd5c                       ; 00543010 | = "CNetGame::sendMyStateChanged - should..."
    MOV dword ptr [0x02f0ca48],ESI      ; 00543015 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0054301b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00543021
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00543026
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 00543029
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   Label: LAB_00543029
    MOV EDX,EAX                         ; 0054302e
    MOV ESI,0x12                        ; 00543030
    SAR EDX,0x1f                        ; 00543035
    IDIV ESI                            ; 00543038
    MOV EBP,dword ptr [0x02f7c8b4]      ; 0054303a | g_LastPingTime
    MOV EDX,EAX                         ; 00543040
    SUB EAX,EBP                         ; 00543042
    MOV dword ptr [0x02f7c8b4],EDX      ; 00543044 | g_LastPingTime
    TEST EAX,EAX                        ; 0054304a
    JL 0x0054313e                       ; 0054304c
        ;   XREF to: 0054313e (CONDITIONAL_JUMP)  ; LAB_0054313e
    CMP EAX,0x20000                     ; 00543052
    JLE 0x0054305e                      ; 00543057
        ;   XREF to: 0054305e (CONDITIONAL_JUMP)  ; LAB_0054305e
    MOV EAX,0x20000                     ; 00543059
    MOV EDX,dword ptr [0x02f7c8b8]      ; 0054305e | g_CurrentGameTime
        ;   Label: LAB_0054305e
    MOV ECX,0x29                        ; 00543064
    ADD EDX,EAX                         ; 00543069
    MOV AH,0xa                          ; 0054306b
    MOV dword ptr [ESP],ECX             ; 0054306d
    MOV byte ptr [ESP + 0x4],AH         ; 00543070
    MOV EAX,dword ptr [EBX + 0x114]     ; 00543074
    SHL EAX,0x3                         ; 0054307a
    MOV dword ptr [0x02f7c8b8],EDX      ; 0054307d | g_CurrentGameTime
    MOV EDX,EAX                         ; 00543083
    SHL EAX,0x4                         ; 00543085
    SUB EAX,EDX                         ; 00543088
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x64] ; 0054308a
    MOV dword ptr [ESP + 0x1d],EAX      ; 0054308e
    MOV EAX,[0x02f7c8b8]                ; 00543092 | g_CurrentGameTime
    MOV dword ptr [ESP + 0x5],EAX       ; 00543097
    MOV EAX,dword ptr [EBX + 0x114]     ; 0054309b
    SHL EAX,0x3                         ; 005430a1
    MOV EDX,EAX                         ; 005430a4
    SHL EAX,0x4                         ; 005430a6
    SUB EAX,EDX                         ; 005430a9
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x34] ; 005430ab
    MOV dword ptr [ESP + 0x21],EAX      ; 005430af
    MOV EAX,dword ptr [EBX + 0x114]     ; 005430b3
    SHL EAX,0x3                         ; 005430b9
    MOV EDX,EAX                         ; 005430bc
    SHL EAX,0x4                         ; 005430be
    SUB EAX,EDX                         ; 005430c1
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x38] ; 005430c3
    MOV dword ptr [ESP + 0x25],EAX      ; 005430c7
    MOV EAX,dword ptr [EBX + 0x114]     ; 005430cb
    SHL EAX,0x3                         ; 005430d1
    MOV EDX,EAX                         ; 005430d4
    SHL EAX,0x4                         ; 005430d6
    LEA ESI,[EBX + 0x20]                ; 005430d9
    SUB EAX,EDX                         ; 005430dc
    LEA EDI,[ESP + 0x9]                 ; 005430de
    ADD ESI,EAX                         ; 005430e2
    PUSH EDI                            ; 005430e4
    MOV AL,byte ptr [ESI]               ; 005430e5
        ;   Label: LAB_005430e5
    MOV byte ptr [EDI],AL               ; 005430e7
    CMP AL,0x0                          ; 005430e9
    JZ 0x005430fd                       ; 005430eb
        ;   XREF to: 005430fd (CONDITIONAL_JUMP)  ; LAB_005430fd
    MOV AL,byte ptr [ESI + 0x1]         ; 005430ed
    ADD ESI,0x2                         ; 005430f0
    MOV byte ptr [EDI + 0x1],AL         ; 005430f3
    ADD EDI,0x2                         ; 005430f6
    CMP AL,0x0                          ; 005430f9
    JNZ 0x005430e5                      ; 005430fb
        ;   XREF to: 005430e5 (CONDITIONAL_JUMP)  ; LAB_005430e5
    POP EDI                             ; 005430fd
        ;   Label: LAB_005430fd
    MOV EAX,ESP                         ; 005430fe
    PUSH EAX                            ; 00543100
    MOV ESI,dword ptr [EBX + 0x110]     ; 00543101
    PUSH ESI                            ; 00543107
    PUSH EBX                            ; 00543108
    CALL core_netgame.cpp_CNetGame_send_FUN_005411c0 ; 00543109
        ;   XREF to: 005411c0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_005411c0(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    MOV EAX,dword ptr [EBX + 0x114]     ; 0054310e
    SHL EAX,0x3                         ; 00543114
    MOV EDX,EAX                         ; 00543117
    SHL EAX,0x4                         ; 00543119
    MOV EDI,0x1                         ; 0054311c
    SUB EAX,EDX                         ; 00543121
    ADD ESP,0xc                         ; 00543123
    ADD EBX,EAX                         ; 00543126
    MOV EAX,[0x02f7c8b8]                ; 00543128 | g_CurrentGameTime
    MOV dword ptr [0x00680a04],EDI      ; 0054312d | INT_00680a04
    MOV dword ptr [EBX + 0x60],EAX      ; 00543133
    ADD ESP,0x2c                        ; 00543136
    POP EBP                             ; 00543139
    POP EDI                             ; 0054313a
    POP ESI                             ; 0054313b
    POP EBX                             ; 0054313c
    RET                                 ; 0054313d
    XOR EAX,EAX                         ; 0054313e
        ;   Label: LAB_0054313e
    JMP 0x0054305e                      ; 00543140
        ;   XREF to: 0054305e (UNCONDITIONAL_JUMP)  ; LAB_0054305e

