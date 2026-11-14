; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_updatePing_FUN_0052ea10(CNetGame *this_ptr,int player_index,float max_ping)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   player_index
; float            Stack[0xc]:4   max_ping
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined1       Stack[-0x20]:1  local_20
; undefined4       Stack[-0x1f]:4  local_1f
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[4]:
;   core_netgame.cpp_CNetGame_processClientFrame_FUN_00530340 at 00530389
;   core_netgame.cpp_CNetGame_processServerFrame_FUN_0052fee0 at 0052ff9e
;   core_netgame.cpp_CNetGame_runLobby_FUN_0052e120 at 0052e8ac
;   core_netgame.cpp_CNetGame_syncPlayers_FUN_0052cf90 at 0052d245
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005ebe18
;   TerminatedCString s_CNetGame_updatePing_inva_005ebe2c
;   undefined4 DAT_005ebe58
;   undefined4 DAT_005ebe60
;   undefined4 DAT_005ebe68
;   undefined4 DAT_005ebe70
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d51d9c
;   undefined4 DAT_01d51da0
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_netgame.cpp_CNetGame_send_FUN_0052df50
;   wincore_winrun.cpp_getTime_FUN_005b2420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052ea10
        ;   Label: core_netgame.cpp_CNetGame_updatePing_FUN_0052ea10
    PUSH ESI                            ; 0052ea11
    PUSH EDI                            ; 0052ea12
    PUSH EBP                            ; 0052ea13
    MOV EBP,ESP                         ; 0052ea14
    SUB ESP,0x1c                        ; 0052ea16
    AND ESP,0xfffffff8                  ; 0052ea19
    MOV ESI,dword ptr [EBP + 0x14]      ; 0052ea1c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0052ea1f
    TEST EBX,EBX                        ; 0052ea22
    JL 0x0052ea2b                       ; 0052ea24
        ;   XREF to: 0052ea2b (CONDITIONAL_JUMP)  ; LAB_0052ea2b
    CMP EBX,dword ptr [ESI + 0x1c]      ; 0052ea26
    JL 0x0052ea4e                       ; 0052ea29
        ;   XREF to: 0052ea4e (CONDITIONAL_JUMP)  ; LAB_0052ea4e
    MOV ECX,0x5ebe18                    ; 0052ea2b | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0052ea2b
    MOV EDI,0x735                       ; 0052ea30
    PUSH 0x5ebe2c                       ; 0052ea35 | = "CNetGame::updatePing - invalid player..."
    MOV dword ptr [0x01d1d400],ECX      ; 0052ea3a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0052ea40 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0052ea46
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0052ea4b
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 0052ea4e
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005b2420()
        ;   Label: LAB_0052ea4e
    MOV EDX,EAX                         ; 0052ea53
    MOV ECX,0x12                        ; 0052ea55
    SAR EDX,0x1f                        ; 0052ea5a
    IDIV ECX                            ; 0052ea5d
    MOV ECX,dword ptr [0x01d51d9c]      ; 0052ea5f | DAT_01d51d9c
    MOV EDX,EAX                         ; 0052ea65
    SUB EAX,ECX                         ; 0052ea67
    MOV dword ptr [0x01d51d9c],EDX      ; 0052ea69 | DAT_01d51d9c
    TEST EAX,EAX                        ; 0052ea6f
    JL 0x0052ebaa                       ; 0052ea71
        ;   XREF to: 0052ebaa (CONDITIONAL_JUMP)  ; LAB_0052ebaa
    CMP EAX,0x20000                     ; 0052ea77
    JLE 0x0052ea83                      ; 0052ea7c
        ;   XREF to: 0052ea83 (CONDITIONAL_JUMP)  ; LAB_0052ea83
    MOV EAX,0x20000                     ; 0052ea7e
    MOV EDI,dword ptr [0x01d51da0]      ; 0052ea83 | DAT_01d51da0
        ;   Label: LAB_0052ea83
    ADD EDI,EAX                         ; 0052ea89
    LEA EAX,[EBX*0x4 + 0x0]             ; 0052ea8b
    MOV EDX,EAX                         ; 0052ea92
    SHL EAX,0x5                         ; 0052ea94
    SUB EAX,EDX                         ; 0052ea97
    LEA EDX,[ESI + 0x20]                ; 0052ea99
    ADD EDX,EAX                         ; 0052ea9c
    MOV EAX,dword ptr [ESI + 0x11c]     ; 0052ea9e
    MOV dword ptr [0x01d51da0],EDI      ; 0052eaa4 | DAT_01d51da0
    CMP EBX,EAX                         ; 0052eaaa
    JZ 0x0052ebb1                       ; 0052eaac
        ;   XREF to: 0052ebb1 (CONDITIONAL_JUMP)  ; LAB_0052ebb1
    MOV ECX,EDI                         ; 0052eab2
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0052eab4
    SUB ECX,EAX                         ; 0052eab7
    MOV dword ptr [ESP + 0x18],ECX      ; 0052eab9
    FILD dword ptr [ESP + 0x18]         ; 0052eabd
    FMUL double ptr [0x005ebe58]        ; 0052eac1 | DAT_005ebe58
    FST float ptr [ESP + 0x8]           ; 0052eac7
    FLDZ                                ; 0052eacb
    FCOMPP                              ; 0052eacd
    FNSTSW AX                           ; 0052eacf
    SAHF                                ; 0052ead1
    JBE 0x0052eada                      ; 0052ead2
        ;   XREF to: 0052eada (CONDITIONAL_JUMP)  ; LAB_0052eada
    XOR ECX,ECX                         ; 0052ead4
    MOV dword ptr [ESP + 0x8],ECX       ; 0052ead6
    FLD float ptr [ESP + 0x8]           ; 0052eada
        ;   Label: LAB_0052eada
    FCOMP double ptr [0x005ebe60]       ; 0052eade | DAT_005ebe60
    FNSTSW AX                           ; 0052eae4
    SAHF                                ; 0052eae6
    JBE 0x0052eaf1                      ; 0052eae7
        ;   XREF to: 0052eaf1 (CONDITIONAL_JUMP)  ; LAB_0052eaf1
    MOV dword ptr [ESP + 0x8],0x41f00000 ; 0052eae9
    FLD float ptr [ESP + 0x8]           ; 0052eaf1
        ;   Label: LAB_0052eaf1
    FCOMP double ptr [0x005ebe68]       ; 0052eaf5 | DAT_005ebe68
    FNSTSW AX                           ; 0052eafb
    SAHF                                ; 0052eafd
    JC 0x0052eba3                       ; 0052eafe
        ;   XREF to: 0052eba3 (CONDITIONAL_JUMP)  ; LAB_0052eba3
    MOV ECX,dword ptr [0x01d51da0]      ; 0052eb04 | DAT_01d51da0
    MOV EAX,dword ptr [EDX + 0x30]      ; 0052eb0a
    SUB ECX,EAX                         ; 0052eb0d
    MOV dword ptr [ESP + 0x18],ECX      ; 0052eb0f
    FILD dword ptr [ESP + 0x18]         ; 0052eb13
    FMUL double ptr [0x005ebe58]        ; 0052eb17 | DAT_005ebe58
    FST float ptr [ESP + 0x4]           ; 0052eb1d
    FLDZ                                ; 0052eb21
    FCOMPP                              ; 0052eb23
    FNSTSW AX                           ; 0052eb25
    SAHF                                ; 0052eb27
    JBE 0x0052eb30                      ; 0052eb28
        ;   XREF to: 0052eb30 (CONDITIONAL_JUMP)  ; LAB_0052eb30
    XOR EAX,EAX                         ; 0052eb2a
    MOV dword ptr [ESP + 0x4],EAX       ; 0052eb2c
    FLD float ptr [ESP + 0x4]           ; 0052eb30
        ;   Label: LAB_0052eb30
    FCOMP double ptr [0x005ebe60]       ; 0052eb34 | DAT_005ebe60
    FNSTSW AX                           ; 0052eb3a
    SAHF                                ; 0052eb3c
    JBE 0x0052eb47                      ; 0052eb3d
        ;   XREF to: 0052eb47 (CONDITIONAL_JUMP)  ; LAB_0052eb47
    MOV dword ptr [ESP + 0x4],0x41f00000 ; 0052eb3f
    MOV EAX,dword ptr [ESP + 0x4]       ; 0052eb47
        ;   Label: LAB_0052eb47
    FLDZ                                ; 0052eb4b
    MOV dword ptr [ESP],EAX             ; 0052eb4d
    FCOMP float ptr [EDX + 0x28]        ; 0052eb50
    FNSTSW AX                           ; 0052eb53
    SAHF                                ; 0052eb55
    JA 0x0052eb64                       ; 0052eb56
        ;   XREF to: 0052eb64 (CONDITIONAL_JUMP)  ; LAB_0052eb64
    FLD float ptr [ESP + 0x4]           ; 0052eb58
    FCOMP float ptr [EBP + 0x1c]        ; 0052eb5c
    FNSTSW AX                           ; 0052eb5f
    SAHF                                ; 0052eb61
    JC 0x0052eba3                       ; 0052eb62
        ;   XREF to: 0052eba3 (CONDITIONAL_JUMP)  ; LAB_0052eba3
    FLD float ptr [ESP]                 ; 0052eb64
        ;   Label: LAB_0052eb64
    FCOMP double ptr [0x005ebe70]       ; 0052eb67 | DAT_005ebe70
    FNSTSW AX                           ; 0052eb6d
    SAHF                                ; 0052eb6f
    JBE 0x0052eb79                      ; 0052eb70
        ;   XREF to: 0052eb79 (CONDITIONAL_JUMP)  ; LAB_0052eb79
    MOV dword ptr [EDX + 0x28],0xbf800000 ; 0052eb72
    MOV AH,0x4                          ; 0052eb79
        ;   Label: LAB_0052eb79
    MOV EDI,0x9                         ; 0052eb7b
    MOV byte ptr [ESP + 0x10],AH        ; 0052eb80
    MOV EAX,[0x01d51da0]                ; 0052eb84 | DAT_01d51da0
    MOV dword ptr [ESP + 0xc],EDI       ; 0052eb89
    MOV dword ptr [ESP + 0x11],EAX      ; 0052eb8d
    MOV dword ptr [EDX + 0x2c],EAX      ; 0052eb91
    LEA EAX,[ESP + 0xc]                 ; 0052eb94
    PUSH EAX                            ; 0052eb98
    PUSH EBX                            ; 0052eb99
    PUSH ESI                            ; 0052eb9a
    CALL core_netgame.cpp_CNetGame_send_FUN_0052df50 ; 0052eb9b
        ;   XREF to: 0052df50 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_send_FUN_0052df50(CNetGame * this_ptr, int player_index, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 0052eba0
    MOV ESP,EBP                         ; 0052eba3
        ;   Label: LAB_0052eba3
    POP EBP                             ; 0052eba5
    POP EDI                             ; 0052eba6
    POP ESI                             ; 0052eba7
    POP EBX                             ; 0052eba8
    RET                                 ; 0052eba9
    XOR EAX,EAX                         ; 0052ebaa
        ;   Label: LAB_0052ebaa
    JMP 0x0052ea83                      ; 0052ebac
        ;   XREF to: 0052ea83 (UNCONDITIONAL_JUMP)  ; LAB_0052ea83
    MOV dword ptr [EDX + 0x28],0x0      ; 0052ebb1
        ;   Label: LAB_0052ebb1
    MOV dword ptr [EDX + 0x2c],EDI      ; 0052ebb8
    MOV dword ptr [EDX + 0x30],EDI      ; 0052ebbb
    MOV ESP,EBP                         ; 0052ebbe
    POP EBP                             ; 0052ebc0
    POP EDI                             ; 0052ebc1
    POP ESI                             ; 0052ebc2
    POP EBX                             ; 0052ebc3
    RET                                 ; 0052ebc4

