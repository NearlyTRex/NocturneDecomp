; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_disconnect_FUN_0053fd00(CNetGame *this_ptr,int perform_handshake)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   perform_handshake
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[9]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db42c
;   core_game.cpp_hostNetworkGame_FUN_004e2f10 at 004e2f8a
;   core_game.cpp_joinNetworkGame_FUN_004e2fc0 at 004e3057
;   core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0 at 00540f43
;   core_netgame.cpp_CNetGame_init_FUN_0053f780 at 0053f806
;   core_netgame.cpp_CNetGame_initializeNetworkToHost_FUN_0053f860 at 0053f880
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_0053f900 at 0053f912
;   core_netgame.cpp_CNetGame_runLobby_FUN_00541390 at 005416dc
;   core_netgame.cpp_CNetGame_shutdown_FUN_0053f830 at 0053f837
;
; Referenced Globals:
;   TerminatedCString s_Disconnecting_from_serve_0063d4a7
;   TerminatedCString s_Couldn_t_contact_server__0063d4c4
;   TerminatedCString s_Disconnecting_0063d4eb
;   TerminatedCString s_Couldn_t_connect_to_all__0063d4fc
;   double DOUBLE_0063d52d = 0.0000152587890625
;   float FLOAT_0063d535 = 1000
;   double DOUBLE_0063d53d = 30
;   double DOUBLE_0063d545 = 0.100000000000000
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;   int g_LastPingTime
;   uint g_CurrentGameTime
;   int g_RemoteSyncStage
;   int INT_02f7c8c4
;   int g_ChatHistoryCount
;   ... and 1 more
;
; Called Functions:
;   core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0
;   core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00543930
;   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053fd00
        ;   Label: core_netgame.cpp_CNetGame_disconnect_FUN_0053fd00
    PUSH ESI                            ; 0053fd01
    PUSH EDI                            ; 0053fd02
    PUSH EBP                            ; 0053fd03
    MOV EBP,ESP                         ; 0053fd04
    SUB ESP,0x20                        ; 0053fd06
    AND ESP,0xfffffff8                  ; 0053fd09
    MOV ESI,dword ptr [EBP + 0x14]      ; 0053fd0c
    CMP dword ptr [EBP + 0x18],0x0      ; 0053fd0f
    JZ 0x0053fd23                       ; 0053fd13
        ;   XREF to: 0053fd23 (CONDITIONAL_JUMP)  ; LAB_0053fd23
    CMP dword ptr [ESI],0x2             ; 0053fd15
    JZ 0x0053fd75                       ; 0053fd18
        ;   XREF to: 0053fd75 (CONDITIONAL_JUMP)  ; LAB_0053fd75
    CMP dword ptr [ESI],0x1             ; 0053fd1a
        ;   Label: LAB_0053fd1a
    JZ 0x0053ff94                       ; 0053fd1d
        ;   XREF to: 0053ff94 (CONDITIONAL_JUMP)  ; LAB_0053ff94
    MOV dword ptr [ESI + 0x4],0x0       ; 0053fd23
        ;   Label: LAB_0053fd23
    MOV dword ptr [ESI + 0x114],0xffffffff ; 0053fd2a
    MOV dword ptr [ESI + 0x110],0xffffffff ; 0053fd34
    MOV byte ptr [ESI + 0x118],0x0      ; 0053fd3e
    XOR EDX,EDX                         ; 0053fd45
    MOV dword ptr [ESI],0x0             ; 0053fd47
    MOV dword ptr [0x02f7c8cc],EDX      ; 0053fd4d | g_ChatHistoryCount
    MOV dword ptr [0x02f98ad0],EDX      ; 0053fd53 | g_ChatOutCount
    MOV dword ptr [0x02f7c8c0],EDX      ; 0053fd59 | g_RemoteSyncStage
    MOV dword ptr [ESI + 0x1c],EDX      ; 0053fd5f
    MOV dword ptr [0x02f7c8c4],EDX      ; 0053fd62 | INT_02f7c8c4
    MOV dword ptr [ESI + 0x168],EDX     ; 0053fd68
    MOV ESP,EBP                         ; 0053fd6e
    POP EBP                             ; 0053fd70
    POP EDI                             ; 0053fd71
    POP ESI                             ; 0053fd72
    POP EBX                             ; 0053fd73
    RET                                 ; 0053fd74
    PUSH 0x63d4a7                       ; 0053fd75 | = "Disconnecting from server..."
        ;   Label: LAB_0053fd75
    MOV EBX,dword ptr [0x00678a60]      ; 0053fd7a | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 0053fd80 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 ; 0053fd81
        ;   XREF to: 004a0430 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 0053fd86
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0053fd89
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV EDX,EAX                         ; 0053fd8e
    MOV EBX,0x12                        ; 0053fd90
    SAR EDX,0x1f                        ; 0053fd95
    IDIV EBX                            ; 0053fd98
    MOV EDI,dword ptr [0x02f7c8b4]      ; 0053fd9a | g_LastPingTime
    MOV EDX,EAX                         ; 0053fda0
    SUB EAX,EDI                         ; 0053fda2
    MOV dword ptr [0x02f7c8b4],EDX      ; 0053fda4 | g_LastPingTime
    TEST EAX,EAX                        ; 0053fdaa
    JL 0x0053fe88                       ; 0053fdac
        ;   XREF to: 0053fe88 (CONDITIONAL_JUMP)  ; LAB_0053fe88
    CMP EAX,0x20000                     ; 0053fdb2
    JLE 0x0053fdbe                      ; 0053fdb7
        ;   XREF to: 0053fdbe (CONDITIONAL_JUMP)  ; LAB_0053fdbe
    MOV EAX,0x20000                     ; 0053fdb9
    MOV EDX,dword ptr [0x02f7c8b8]      ; 0053fdbe | g_CurrentGameTime
        ;   Label: LAB_0053fdbe
    ADD EDX,EAX                         ; 0053fdc4
    MOV ECX,dword ptr [ESI + 0x110]     ; 0053fdc6
    MOV EDI,EDX                         ; 0053fdcc
    MOV dword ptr [0x02f7c8b8],EDX      ; 0053fdce | g_CurrentGameTime
    LEA EBX,[EDX + 0xffe20000]          ; 0053fdd4
    TEST ECX,ECX                        ; 0053fdda
    JL 0x0053fe74                       ; 0053fddc
        ;   XREF to: 0053fe74 (CONDITIONAL_JUMP)  ; LAB_0053fe74
    LEA EAX,[ESI + 0x20]                ; 0053fde2
    MOV dword ptr [ESP + 0x10],EAX      ; 0053fde5
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0053fde9
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   Label: LAB_0053fde9
    MOV EDX,EAX                         ; 0053fdee
    MOV ECX,0x12                        ; 0053fdf0
    SAR EDX,0x1f                        ; 0053fdf5
    IDIV ECX                            ; 0053fdf8
    MOV ECX,dword ptr [0x02f7c8b4]      ; 0053fdfa | g_LastPingTime
    MOV EDX,EAX                         ; 0053fe00
    SUB EAX,ECX                         ; 0053fe02
    MOV dword ptr [0x02f7c8b4],EDX      ; 0053fe04 | g_LastPingTime
    TEST EAX,EAX                        ; 0053fe0a
    JL 0x0053fe8f                       ; 0053fe0c
        ;   XREF to: 0053fe8f (CONDITIONAL_JUMP)  ; LAB_0053fe8f
    CMP EAX,0x20000                     ; 0053fe12
    JLE 0x0053fe1e                      ; 0053fe17
        ;   XREF to: 0053fe1e (CONDITIONAL_JUMP)  ; LAB_0053fe1e
    MOV EAX,0x20000                     ; 0053fe19
    MOV EDX,dword ptr [0x02f7c8b8]      ; 0053fe1e | g_CurrentGameTime
        ;   Label: LAB_0053fe1e
    ADD EDX,EAX                         ; 0053fe24
    MOV EAX,EDX                         ; 0053fe26
    SUB EAX,EDI                         ; 0053fe28
    MOV dword ptr [ESP + 0x1c],EAX      ; 0053fe2a
    FILD dword ptr [ESP + 0x1c]         ; 0053fe2e
    FMUL double ptr [0x0063d52d]        ; 0053fe32 | DOUBLE_0063d52d
    MOV dword ptr [0x02f7c8b8],EDX      ; 0053fe38 | g_CurrentGameTime
    FST float ptr [ESP + 0xc]           ; 0053fe3e
    FLDZ                                ; 0053fe42
    FCOMPP                              ; 0053fe44
    FNSTSW AX                           ; 0053fe46
    SAHF                                ; 0053fe48
    JBE 0x0053fe51                      ; 0053fe49
        ;   XREF to: 0053fe51 (CONDITIONAL_JUMP)  ; LAB_0053fe51
    XOR ECX,ECX                         ; 0053fe4b
    MOV dword ptr [ESP + 0xc],ECX       ; 0053fe4d
    FLD float ptr [ESP + 0xc]           ; 0053fe51
        ;   Label: LAB_0053fe51
    FCOMP double ptr [0x0063d53d]       ; 0053fe55 | DOUBLE_0063d53d
    FNSTSW AX                           ; 0053fe5b
    SAHF                                ; 0053fe5d
    JBE 0x0053fe93                      ; 0053fe5e
        ;   XREF to: 0053fe93 (CONDITIONAL_JUMP)  ; LAB_0053fe93
    PUSH 0x63d4c4                       ; 0053fe60 | = "Couldn't contact server to disconnect."
        ;   Label: LAB_0053fe60
    MOV EBX,dword ptr [0x00678a60]      ; 0053fe65 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 0053fe6b | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 0053fe6c
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0053fe71
    MOV EDI,dword ptr [0x00678a60]      ; 0053fe74 | g_CEditorToolsPtr
        ;   Label: LAB_0053fe74
    PUSH EDI                            ; 0053fe7a | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 0053fe7b
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0053fe80
    JMP 0x0053fd1a                      ; 0053fe83
        ;   XREF to: 0053fd1a (UNCONDITIONAL_JUMP)  ; LAB_0053fd1a
    XOR EAX,EAX                         ; 0053fe88
        ;   Label: LAB_0053fe88
    JMP 0x0053fdbe                      ; 0053fe8a
        ;   XREF to: 0053fdbe (UNCONDITIONAL_JUMP)  ; LAB_0053fdbe
    XOR EAX,EAX                         ; 0053fe8f
        ;   Label: LAB_0053fe8f
    JMP 0x0053fe1e                      ; 0053fe91
        ;   XREF to: 0053fe1e (UNCONDITIONAL_JUMP)  ; LAB_0053fe1e
    CMP dword ptr [ESP + 0xc],0x40400000 ; 0053fe93
        ;   Label: LAB_0053fe93
    JG 0x0053fe60                       ; 0053fe9b
        ;   XREF to: 0053fe60 (CONDITIONAL_JUMP)  ; LAB_0053fe60
    FLD float ptr [ESP + 0xc]           ; 0053fe9d
    FMUL float ptr [0x0063d535]         ; 0053fea1 | FLOAT_0063d535
    PUSH 0x453b8000                     ; 0053fea7
    SUB ESP,0x4                         ; 0053feac
    MOV ECX,dword ptr [0x00678a60]      ; 0053feaf | g_CEditorToolsInstance | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 0053feb5
    PUSH ECX                            ; 0053feb8 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 0053feb9
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float progress_min, float progress_max)
    ADD ESP,0xc                         ; 0053febe
    MOV EAX,[0x02f7c8b8]                ; 0053fec1 | g_CurrentGameTime
        ;   Label: LAB_0053fec1
    SUB EAX,EBX                         ; 0053fec6
    MOV dword ptr [ESP + 0x1c],EAX      ; 0053fec8
    FILD dword ptr [ESP + 0x1c]         ; 0053fecc
    FMUL double ptr [0x0063d52d]        ; 0053fed0 | DOUBLE_0063d52d
    FST float ptr [ESP]                 ; 0053fed6
    FLDZ                                ; 0053fed9
    FCOMPP                              ; 0053fedb
    FNSTSW AX                           ; 0053fedd
    SAHF                                ; 0053fedf
    JBE 0x0053fee7                      ; 0053fee0
        ;   XREF to: 0053fee7 (CONDITIONAL_JUMP)  ; LAB_0053fee7
    XOR EAX,EAX                         ; 0053fee2
    MOV dword ptr [ESP],EAX             ; 0053fee4
    FLD float ptr [ESP]                 ; 0053fee7
        ;   Label: LAB_0053fee7
    FCOMP double ptr [0x0063d53d]       ; 0053feea | DOUBLE_0063d53d
    FNSTSW AX                           ; 0053fef0
    SAHF                                ; 0053fef2
    JBE 0x0053fefc                      ; 0053fef3
        ;   XREF to: 0053fefc (CONDITIONAL_JUMP)  ; LAB_0053fefc
    MOV dword ptr [ESP],0x41f00000      ; 0053fef5
    FLD float ptr [ESP]                 ; 0053fefc
        ;   Label: LAB_0053fefc
    FCOMP double ptr [0x0063d545]       ; 0053feff | DOUBLE_0063d545
    FNSTSW AX                           ; 0053ff05
    SAHF                                ; 0053ff07
    JNC 0x0053ff49                      ; 0053ff08
        ;   XREF to: 0053ff49 (CONDITIONAL_JUMP)  ; LAB_0053ff49
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0053ff0a
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV EDX,EAX                         ; 0053ff0f
    MOV ECX,0x12                        ; 0053ff11
    SAR EDX,0x1f                        ; 0053ff16
    IDIV ECX                            ; 0053ff19
    MOV ECX,dword ptr [0x02f7c8b4]      ; 0053ff1b | g_LastPingTime
    MOV EDX,EAX                         ; 0053ff21
    SUB EAX,ECX                         ; 0053ff23
    MOV dword ptr [0x02f7c8b4],EDX      ; 0053ff25 | g_LastPingTime
    TEST EAX,EAX                        ; 0053ff2b
    JL 0x0053ff3e                       ; 0053ff2d
        ;   XREF to: 0053ff3e (CONDITIONAL_JUMP)  ; LAB_0053ff3e
    CMP EAX,0x20000                     ; 0053ff2f
    JG 0x0053ff42                       ; 0053ff34
        ;   XREF to: 0053ff42 (CONDITIONAL_JUMP)  ; LAB_0053ff42
    ADD dword ptr [0x02f7c8b8],EAX      ; 0053ff36 | g_CurrentGameTime
        ;   Label: LAB_0053ff36
    JMP 0x0053fec1                      ; 0053ff3c
        ;   XREF to: 0053fec1 (UNCONDITIONAL_JUMP)  ; LAB_0053fec1
    XOR EAX,EAX                         ; 0053ff3e
        ;   Label: LAB_0053ff3e
    JMP 0x0053ff36                      ; 0053ff40
        ;   XREF to: 0053ff36 (UNCONDITIONAL_JUMP)  ; LAB_0053ff36
    MOV EAX,0x20000                     ; 0053ff42
        ;   Label: LAB_0053ff42
    JMP 0x0053ff36                      ; 0053ff47
        ;   XREF to: 0053ff36 (UNCONDITIONAL_JUMP)  ; LAB_0053ff36
    IMUL EAX,dword ptr [ESI + 0x110],0x78 ; 0053ff49
        ;   Label: LAB_0053ff49
    ADD EAX,dword ptr [ESP + 0x10]      ; 0053ff50
    PUSH 0x1                            ; 0053ff54
    ADD EAX,0x1c                        ; 0053ff56
    PUSH EAX                            ; 0053ff59
    PUSH ESI                            ; 0053ff5a
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00543930 ; 0053ff5b
        ;   XREF to: 00543930 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00543930(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 0053ff60
    PUSH ESI                            ; 0053ff63
    MOV EBX,dword ptr [0x02f7c8b8]      ; 0053ff64 | g_CurrentGameTime
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0 ; 0053ff6a
        ;   XREF to: 005405b0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0(CNetGame * this_ptr)
    MOV ECX,dword ptr [ESI + 0x110]     ; 0053ff6f
    ADD ESP,0x4                         ; 0053ff75
    TEST ECX,ECX                        ; 0053ff78
    JGE 0x0053fde9                      ; 0053ff7a
        ;   XREF to: 0053fde9 (CONDITIONAL_JUMP)  ; LAB_0053fde9
    MOV EDI,dword ptr [0x00678a60]      ; 0053ff80 | g_CEditorToolsPtr
    PUSH EDI                            ; 0053ff86 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 0053ff87
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0053ff8c
    JMP 0x0053fd1a                      ; 0053ff8f
        ;   XREF to: 0053fd1a (UNCONDITIONAL_JUMP)  ; LAB_0053fd1a
    PUSH 0x63d4eb                       ; 0053ff94 | = "Disconnecting..."
        ;   Label: LAB_0053ff94
    MOV EBX,dword ptr [0x00678a60]      ; 0053ff99 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 0053ff9f | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 ; 0053ffa0
        ;   XREF to: 004a0430 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 0053ffa5
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0053ffa8
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV EDX,EAX                         ; 0053ffad
    MOV EBX,0x12                        ; 0053ffaf
    SAR EDX,0x1f                        ; 0053ffb4
    IDIV EBX                            ; 0053ffb7
    MOV EDI,dword ptr [0x02f7c8b4]      ; 0053ffb9 | g_LastPingTime
    MOV EDX,EAX                         ; 0053ffbf
    SUB EAX,EDI                         ; 0053ffc1
    MOV dword ptr [0x02f7c8b4],EDX      ; 0053ffc3 | g_LastPingTime
    TEST EAX,EAX                        ; 0053ffc9
    JL 0x005400ab                       ; 0053ffcb
        ;   XREF to: 005400ab (CONDITIONAL_JUMP)  ; LAB_005400ab
    CMP EAX,0x20000                     ; 0053ffd1
    JLE 0x0053ffdd                      ; 0053ffd6
        ;   XREF to: 0053ffdd (CONDITIONAL_JUMP)  ; LAB_0053ffdd
    MOV EAX,0x20000                     ; 0053ffd8
    MOV EDX,dword ptr [0x02f7c8b8]      ; 0053ffdd | g_CurrentGameTime
        ;   Label: LAB_0053ffdd
    ADD EDX,EAX                         ; 0053ffe3
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0053ffe5
    MOV dword ptr [ESP + 0x18],EDX      ; 0053ffe8
    MOV dword ptr [0x02f7c8b8],EDX      ; 0053ffec | g_CurrentGameTime
    LEA EBX,[EDX + 0xffe20000]          ; 0053fff2
    CMP ECX,0x1                         ; 0053fff8
    JLE 0x00540097                      ; 0053fffb
        ;   XREF to: 00540097 (CONDITIONAL_JUMP)  ; LAB_00540097
    LEA EAX,[ESI + 0x20]                ; 00540001
    MOV dword ptr [ESP + 0x14],EAX      ; 00540004
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 00540008
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   Label: LAB_00540008
    MOV EDX,EAX                         ; 0054000d
    MOV ECX,0x12                        ; 0054000f
    SAR EDX,0x1f                        ; 00540014
    IDIV ECX                            ; 00540017
    MOV ECX,dword ptr [0x02f7c8b4]      ; 00540019 | g_LastPingTime
    MOV EDX,EAX                         ; 0054001f
    SUB EAX,ECX                         ; 00540021
    MOV dword ptr [0x02f7c8b4],EDX      ; 00540023 | g_LastPingTime
    TEST EAX,EAX                        ; 00540029
    JL 0x005400b2                       ; 0054002b
        ;   XREF to: 005400b2 (CONDITIONAL_JUMP)  ; LAB_005400b2
    CMP EAX,0x20000                     ; 00540031
    JLE 0x0054003d                      ; 00540036
        ;   XREF to: 0054003d (CONDITIONAL_JUMP)  ; LAB_0054003d
    MOV EAX,0x20000                     ; 00540038
    MOV EDI,dword ptr [0x02f7c8b8]      ; 0054003d | g_CurrentGameTime
        ;   Label: LAB_0054003d
    ADD EDI,EAX                         ; 00540043
    MOV EDX,dword ptr [ESP + 0x18]      ; 00540045
    MOV EAX,EDI                         ; 00540049
    SUB EAX,EDX                         ; 0054004b
    MOV dword ptr [ESP + 0x1c],EAX      ; 0054004d
    FILD dword ptr [ESP + 0x1c]         ; 00540051
    FMUL double ptr [0x0063d52d]        ; 00540055 | DOUBLE_0063d52d
    MOV dword ptr [0x02f7c8b8],EDI      ; 0054005b | g_CurrentGameTime
    FST float ptr [ESP + 0x4]           ; 00540061
    FLDZ                                ; 00540065
    FCOMPP                              ; 00540067
    FNSTSW AX                           ; 00540069
    SAHF                                ; 0054006b
    JBE 0x00540074                      ; 0054006c
        ;   XREF to: 00540074 (CONDITIONAL_JUMP)  ; LAB_00540074
    XOR ECX,ECX                         ; 0054006e
    MOV dword ptr [ESP + 0x4],ECX       ; 00540070
    FLD float ptr [ESP + 0x4]           ; 00540074
        ;   Label: LAB_00540074
    FCOMP double ptr [0x0063d53d]       ; 00540078 | DOUBLE_0063d53d
    FNSTSW AX                           ; 0054007e
    SAHF                                ; 00540080
    JBE 0x005400b6                      ; 00540081
        ;   XREF to: 005400b6 (CONDITIONAL_JUMP)  ; LAB_005400b6
    PUSH 0x63d4fc                       ; 00540083 | = "Couldn't connect to all clients to di..."
        ;   Label: LAB_00540083
    MOV EDX,dword ptr [0x00678a60]      ; 00540088 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 0054008e | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 0054008f
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00540094
    MOV ECX,dword ptr [0x00678a60]      ; 00540097 | g_CEditorToolsInstance | g_CEditorToolsPtr
        ;   Label: LAB_00540097
    PUSH ECX                            ; 0054009d | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 0054009e
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 005400a3
    JMP 0x0053fd23                      ; 005400a6
        ;   XREF to: 0053fd23 (UNCONDITIONAL_JUMP)  ; LAB_0053fd23
    XOR EAX,EAX                         ; 005400ab
        ;   Label: LAB_005400ab
    JMP 0x0053ffdd                      ; 005400ad
        ;   XREF to: 0053ffdd (UNCONDITIONAL_JUMP)  ; LAB_0053ffdd
    XOR EAX,EAX                         ; 005400b2
        ;   Label: LAB_005400b2
    JMP 0x0054003d                      ; 005400b4
        ;   XREF to: 0054003d (UNCONDITIONAL_JUMP)  ; LAB_0054003d
    CMP dword ptr [ESP + 0x4],0x40a00000 ; 005400b6
        ;   Label: LAB_005400b6
    JG 0x00540083                       ; 005400be
        ;   XREF to: 00540083 (CONDITIONAL_JUMP)  ; LAB_00540083
    FLD float ptr [ESP + 0x4]           ; 005400c0
    FMUL float ptr [0x0063d535]         ; 005400c4 | FLOAT_0063d535
    PUSH 0x459c4000                     ; 005400ca
    SUB ESP,0x4                         ; 005400cf
    MOV EAX,[0x00678a60]                ; 005400d2 | g_CEditorToolsInstance | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 005400d7
    PUSH EAX                            ; 005400da | g_CEditorToolsInstance
    MOV EDI,0x20000                     ; 005400db
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 005400e0
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float progress_min, float progress_max)
    ADD ESP,0xc                         ; 005400e5
    MOV EAX,[0x02f7c8b8]                ; 005400e8 | g_CurrentGameTime
        ;   Label: LAB_005400e8
    SUB EAX,EBX                         ; 005400ed
    MOV dword ptr [ESP + 0x1c],EAX      ; 005400ef
    FILD dword ptr [ESP + 0x1c]         ; 005400f3
    FMUL double ptr [0x0063d52d]        ; 005400f7 | DOUBLE_0063d52d
    FST float ptr [ESP + 0x8]           ; 005400fd
    FLDZ                                ; 00540101
    FCOMPP                              ; 00540103
    FNSTSW AX                           ; 00540105
    SAHF                                ; 00540107
    JBE 0x00540110                      ; 00540108
        ;   XREF to: 00540110 (CONDITIONAL_JUMP)  ; LAB_00540110
    XOR EAX,EAX                         ; 0054010a
    MOV dword ptr [ESP + 0x8],EAX       ; 0054010c
    FLD float ptr [ESP + 0x8]           ; 00540110
        ;   Label: LAB_00540110
    FCOMP double ptr [0x0063d53d]       ; 00540114 | DOUBLE_0063d53d
    FNSTSW AX                           ; 0054011a
    SAHF                                ; 0054011c
    JBE 0x00540127                      ; 0054011d
        ;   XREF to: 00540127 (CONDITIONAL_JUMP)  ; LAB_00540127
    MOV dword ptr [ESP + 0x8],0x41f00000 ; 0054011f
    FLD float ptr [ESP + 0x8]           ; 00540127
        ;   Label: LAB_00540127
    FCOMP double ptr [0x0063d545]       ; 0054012b | DOUBLE_0063d545
    FNSTSW AX                           ; 00540131
    SAHF                                ; 00540133
    JNC 0x00540175                      ; 00540134
        ;   XREF to: 00540175 (CONDITIONAL_JUMP)  ; LAB_00540175
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 00540136
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV EDX,EAX                         ; 0054013b
    MOV ECX,0x12                        ; 0054013d
    SAR EDX,0x1f                        ; 00540142
    IDIV ECX                            ; 00540145
    MOV ECX,dword ptr [0x02f7c8b4]      ; 00540147 | g_LastPingTime
    MOV EDX,EAX                         ; 0054014d
    SUB EAX,ECX                         ; 0054014f
    MOV dword ptr [0x02f7c8b4],EDX      ; 00540151 | g_LastPingTime
    TEST EAX,EAX                        ; 00540157
    JL 0x0054016d                       ; 00540159
        ;   XREF to: 0054016d (CONDITIONAL_JUMP)  ; LAB_0054016d
    CMP EAX,0x20000                     ; 0054015b
    JG 0x00540171                       ; 00540160
        ;   XREF to: 00540171 (CONDITIONAL_JUMP)  ; LAB_00540171
    ADD dword ptr [0x02f7c8b8],EAX      ; 00540162 | g_CurrentGameTime
        ;   Label: LAB_00540162
    JMP 0x005400e8                      ; 00540168
        ;   XREF to: 005400e8 (UNCONDITIONAL_JUMP)  ; LAB_005400e8
    XOR EAX,EAX                         ; 0054016d
        ;   Label: LAB_0054016d
    JMP 0x00540162                      ; 0054016f
        ;   XREF to: 00540162 (UNCONDITIONAL_JUMP)  ; LAB_00540162
    MOV EAX,EDI                         ; 00540171
        ;   Label: LAB_00540171
    JMP 0x00540162                      ; 00540173
        ;   XREF to: 00540162 (UNCONDITIONAL_JUMP)  ; LAB_00540162
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00540175
        ;   Label: LAB_00540175
    XOR EBX,EBX                         ; 00540178
    TEST ECX,ECX                        ; 0054017a
    JLE 0x005401a4                      ; 0054017c
        ;   XREF to: 005401a4 (CONDITIONAL_JUMP)  ; LAB_005401a4
    MOV EDI,dword ptr [ESP + 0x14]      ; 0054017e
    ADD EDI,0x1c                        ; 00540182
    CMP EBX,dword ptr [ESI + 0x114]     ; 00540185
        ;   Label: LAB_00540185
    JZ 0x00540199                       ; 0054018b
        ;   XREF to: 00540199 (CONDITIONAL_JUMP)  ; LAB_00540199
    PUSH 0x1                            ; 0054018d
    PUSH EDI                            ; 0054018f
    PUSH ESI                            ; 00540190
    CALL core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00543930 ; 00540191
        ;   XREF to: 00543930 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00543930(CNetGame * this_ptr, SNetworkAddr * dest_addr, int payload)
    ADD ESP,0xc                         ; 00540196
    INC EBX                             ; 00540199
        ;   Label: LAB_00540199
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0054019a
    ADD EDI,0x78                        ; 0054019d
    CMP EBX,ECX                         ; 005401a0
    JL 0x00540185                       ; 005401a2
        ;   XREF to: 00540185 (CONDITIONAL_JUMP)  ; LAB_00540185
    PUSH ESI                            ; 005401a4
        ;   Label: LAB_005401a4
    MOV EBX,dword ptr [0x02f7c8b8]      ; 005401a5 | g_CurrentGameTime
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0 ; 005401ab
        ;   XREF to: 005405b0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0(CNetGame * this_ptr)
    MOV EDI,dword ptr [ESI + 0x1c]      ; 005401b0
    ADD ESP,0x4                         ; 005401b3
    CMP EDI,0x1                         ; 005401b6
    JG 0x00540008                       ; 005401b9
        ;   XREF to: 00540008 (CONDITIONAL_JUMP)  ; LAB_00540008
    MOV ECX,dword ptr [0x00678a60]      ; 005401bf | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 005401c5 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 005401c6
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 005401cb
    JMP 0x0053fd23                      ; 005401ce
        ;   XREF to: 0053fd23 (UNCONDITIONAL_JUMP)  ; LAB_0053fd23

