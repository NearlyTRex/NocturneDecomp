; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_updatePing_FUN_00541c80(CNetGame *this_ptr,int player_index,float max_ping)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   player_index
; float            Stack[0xc]:4   max_ping
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; SNetPacketHeader Stack[-0x24]:5  local_24
; uint             Stack[-0x1f]:4  local_1f
; int              Stack[-0x18]:4  local_18
;
; XREF[4]:
;   core_netgame.cpp_CNetGame_processClientFrame_FUN_005435a0 at 005435e9
;   core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150 at 0054320e
;   core_netgame.cpp_CNetGame_runLobby_FUN_00541390 at 00541b1d
;   core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0 at 00540495
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_0063da65
;   TerminatedCString s_CNetGame_updatePing_inva_0063da79
;   double g_TimeToSeconds = 0.0000152587890625
;   double g_MaxPingTime = 30
;   double g_PingCheckThreshold = 0.400000000000000
;   double g_BadConnectionTime = 5
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

    PUSH EBX                            ; 00541c80
        ;   Label: core_netgame.cpp_CNetGame_updatePing_FUN_00541c80
    PUSH ESI                            ; 00541c81
    PUSH EDI                            ; 00541c82
    PUSH EBP                            ; 00541c83
    MOV EBP,ESP                         ; 00541c84
    SUB ESP,0x1c                        ; 00541c86
    AND ESP,0xfffffff8                  ; 00541c89
    MOV ESI,dword ptr [EBP + 0x14]      ; 00541c8c
    MOV EBX,dword ptr [EBP + 0x18]      ; 00541c8f
    TEST EBX,EBX                        ; 00541c92
    JL 0x00541c9b                       ; 00541c94
        ;   XREF to: 00541c9b (CONDITIONAL_JUMP)  ; LAB_00541c9b
    CMP EBX,dword ptr [ESI + 0x1c]      ; 00541c96
    JL 0x00541cbe                       ; 00541c99
        ;   XREF to: 00541cbe (CONDITIONAL_JUMP)  ; LAB_00541cbe
    MOV ECX,0x63da65                    ; 00541c9b | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00541c9b
    MOV EDI,0x735                       ; 00541ca0
    PUSH 0x63da79                       ; 00541ca5 | = "CNetGame::updatePing - invalid player..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00541caa | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00541cb0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00541cb6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00541cbb
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 00541cbe
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   Label: LAB_00541cbe
    MOV EDX,EAX                         ; 00541cc3
    MOV ECX,0x12                        ; 00541cc5
    SAR EDX,0x1f                        ; 00541cca
    IDIV ECX                            ; 00541ccd
    MOV ECX,dword ptr [0x02f7c8b4]      ; 00541ccf | g_LastPingTime
    MOV EDX,EAX                         ; 00541cd5
    SUB EAX,ECX                         ; 00541cd7
    MOV dword ptr [0x02f7c8b4],EDX      ; 00541cd9 | g_LastPingTime
    TEST EAX,EAX                        ; 00541cdf
    JL 0x00541e1a                       ; 00541ce1
        ;   XREF to: 00541e1a (CONDITIONAL_JUMP)  ; LAB_00541e1a
    CMP EAX,0x20000                     ; 00541ce7
    JLE 0x00541cf3                      ; 00541cec
        ;   XREF to: 00541cf3 (CONDITIONAL_JUMP)  ; LAB_00541cf3
    MOV EAX,0x20000                     ; 00541cee
    MOV EDI,dword ptr [0x02f7c8b8]      ; 00541cf3 | g_CurrentGameTime
        ;   Label: LAB_00541cf3
    ADD EDI,EAX                         ; 00541cf9
    LEA EAX,[EBX*0x8 + 0x0]             ; 00541cfb
    MOV EDX,EAX                         ; 00541d02
    SHL EAX,0x4                         ; 00541d04
    SUB EAX,EDX                         ; 00541d07
    LEA EDX,[ESI + 0x20]                ; 00541d09
    ADD EDX,EAX                         ; 00541d0c
    MOV EAX,dword ptr [ESI + 0x114]     ; 00541d0e
    MOV dword ptr [0x02f7c8b8],EDI      ; 00541d14 | g_CurrentGameTime
    CMP EBX,EAX                         ; 00541d1a
    JZ 0x00541e21                       ; 00541d1c
        ;   XREF to: 00541e21 (CONDITIONAL_JUMP)  ; LAB_00541e21
    MOV ECX,EDI                         ; 00541d22
    MOV EAX,dword ptr [EDX + 0x2c]      ; 00541d24
    SUB ECX,EAX                         ; 00541d27
    MOV dword ptr [ESP + 0x18],ECX      ; 00541d29
    FILD dword ptr [ESP + 0x18]         ; 00541d2d
    FMUL double ptr [0x0063daa5]        ; 00541d31 | g_TimeToSeconds
    FST float ptr [ESP + 0x8]           ; 00541d37
    FLDZ                                ; 00541d3b
    FCOMPP                              ; 00541d3d
    FNSTSW AX                           ; 00541d3f
    SAHF                                ; 00541d41
    JBE 0x00541d4a                      ; 00541d42
        ;   XREF to: 00541d4a (CONDITIONAL_JUMP)  ; LAB_00541d4a
    XOR ECX,ECX                         ; 00541d44
    MOV dword ptr [ESP + 0x8],ECX       ; 00541d46
    FLD float ptr [ESP + 0x8]           ; 00541d4a
        ;   Label: LAB_00541d4a
    FCOMP double ptr [0x0063daad]       ; 00541d4e | g_MaxPingTime
    FNSTSW AX                           ; 00541d54
    SAHF                                ; 00541d56
    JBE 0x00541d61                      ; 00541d57
        ;   XREF to: 00541d61 (CONDITIONAL_JUMP)  ; LAB_00541d61
    MOV dword ptr [ESP + 0x8],0x41f00000 ; 00541d59
    FLD float ptr [ESP + 0x8]           ; 00541d61
        ;   Label: LAB_00541d61
    FCOMP double ptr [0x0063dab5]       ; 00541d65 | g_PingCheckThreshold
    FNSTSW AX                           ; 00541d6b
    SAHF                                ; 00541d6d
    JC 0x00541e13                       ; 00541d6e
        ;   XREF to: 00541e13 (CONDITIONAL_JUMP)  ; LAB_00541e13
    MOV ECX,dword ptr [0x02f7c8b8]      ; 00541d74 | g_CurrentGameTime
    MOV EAX,dword ptr [EDX + 0x30]      ; 00541d7a
    SUB ECX,EAX                         ; 00541d7d
    MOV dword ptr [ESP + 0x18],ECX      ; 00541d7f
    FILD dword ptr [ESP + 0x18]         ; 00541d83
    FMUL double ptr [0x0063daa5]        ; 00541d87 | g_TimeToSeconds
    FST float ptr [ESP + 0x4]           ; 00541d8d
    FLDZ                                ; 00541d91
    FCOMPP                              ; 00541d93
    FNSTSW AX                           ; 00541d95
    SAHF                                ; 00541d97
    JBE 0x00541da0                      ; 00541d98
        ;   XREF to: 00541da0 (CONDITIONAL_JUMP)  ; LAB_00541da0
    XOR EAX,EAX                         ; 00541d9a
    MOV dword ptr [ESP + 0x4],EAX       ; 00541d9c
    FLD float ptr [ESP + 0x4]           ; 00541da0
        ;   Label: LAB_00541da0
    FCOMP double ptr [0x0063daad]       ; 00541da4 | g_MaxPingTime
    FNSTSW AX                           ; 00541daa
    SAHF                                ; 00541dac
    JBE 0x00541db7                      ; 00541dad
        ;   XREF to: 00541db7 (CONDITIONAL_JUMP)  ; LAB_00541db7
    MOV dword ptr [ESP + 0x4],0x41f00000 ; 00541daf
    MOV EAX,dword ptr [ESP + 0x4]       ; 00541db7
        ;   Label: LAB_00541db7
    FLDZ                                ; 00541dbb
    MOV dword ptr [ESP],EAX             ; 00541dbd
    FCOMP float ptr [EDX + 0x28]        ; 00541dc0
    FNSTSW AX                           ; 00541dc3
    SAHF                                ; 00541dc5
    JA 0x00541dd4                       ; 00541dc6
        ;   XREF to: 00541dd4 (CONDITIONAL_JUMP)  ; LAB_00541dd4
    FLD float ptr [ESP + 0x4]           ; 00541dc8
    FCOMP float ptr [EBP + 0x1c]        ; 00541dcc
    FNSTSW AX                           ; 00541dcf
    SAHF                                ; 00541dd1
    JC 0x00541e13                       ; 00541dd2
        ;   XREF to: 00541e13 (CONDITIONAL_JUMP)  ; LAB_00541e13
    FLD float ptr [ESP]                 ; 00541dd4
        ;   Label: LAB_00541dd4
    FCOMP double ptr [0x0063dabd]       ; 00541dd7 | g_BadConnectionTime
    FNSTSW AX                           ; 00541ddd
    SAHF                                ; 00541ddf
    JBE 0x00541de9                      ; 00541de0
        ;   XREF to: 00541de9 (CONDITIONAL_JUMP)  ; LAB_00541de9
    MOV dword ptr [EDX + 0x28],0xbf800000 ; 00541de2
    MOV AH,0x4                          ; 00541de9
        ;   Label: LAB_00541de9
    MOV EDI,0x9                         ; 00541deb
    MOV byte ptr [ESP + 0x10],AH        ; 00541df0
    MOV EAX,[0x02f7c8b8]                ; 00541df4 | g_CurrentGameTime
    MOV dword ptr [ESP + 0xc],EDI       ; 00541df9
    MOV dword ptr [ESP + 0x11],EAX      ; 00541dfd
    MOV dword ptr [EDX + 0x2c],EAX      ; 00541e01
    LEA EAX,[ESP + 0xc]                 ; 00541e04
    PUSH EAX                            ; 00541e08
    PUSH EBX                            ; 00541e09
    PUSH ESI                            ; 00541e0a
    CALL core_netgame.cpp_CNetGame_send_FUN_005411c0 ; 00541e0b
        ;   XREF to: 005411c0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_005411c0(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 00541e10
    MOV ESP,EBP                         ; 00541e13
        ;   Label: LAB_00541e13
    POP EBP                             ; 00541e15
    POP EDI                             ; 00541e16
    POP ESI                             ; 00541e17
    POP EBX                             ; 00541e18
    RET                                 ; 00541e19
    XOR EAX,EAX                         ; 00541e1a
        ;   Label: LAB_00541e1a
    JMP 0x00541cf3                      ; 00541e1c
        ;   XREF to: 00541cf3 (UNCONDITIONAL_JUMP)  ; LAB_00541cf3
    MOV dword ptr [EDX + 0x28],0x0      ; 00541e21
        ;   Label: LAB_00541e21
    MOV dword ptr [EDX + 0x2c],EDI      ; 00541e28
    MOV dword ptr [EDX + 0x30],EDI      ; 00541e2b
    MOV ESP,EBP                         ; 00541e2e
    POP EBP                             ; 00541e30
    POP EDI                             ; 00541e31
    POP ESI                             ; 00541e32
    POP EBX                             ; 00541e33
    RET                                 ; 00541e34

