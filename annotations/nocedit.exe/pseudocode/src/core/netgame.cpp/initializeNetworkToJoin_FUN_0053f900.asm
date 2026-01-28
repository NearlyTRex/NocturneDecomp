; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 core_netgame_cpp_initializeNetworkToJoin_FUN_0053f900(void)
;
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined1       Stack[-0x58]:1  local_58
; undefined        Stack[-0x57]:1  local_57
; undefined        Stack[-0x4f]:1  local_4f
; undefined1       Stack[-0x4e]:1  local_4e
; undefined4       Stack[-0x3b]:4  local_3b
; undefined4       Stack[-0x37]:4  local_37
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_game.cpp_FUN_004e2fc0 at 004e3016
;
; Referenced Globals:
;   TerminatedCString s_TheServer_0063d32e
;   TerminatedCString s_Contacting_server_Press__0063d338
;   TerminatedCString s_Connection_refused_compu_0063d364
;   TerminatedCString s_Connection_refused_game__0063d392
;   TerminatedCString s_Connection_refused_alrea_0063d3b4
;   double DOUBLE_0063d3dd = 0.0000152587890625
;   double DOUBLE_0063d3e5 = 30
;   double DOUBLE_0063d3ed = 0.200000000000000
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CGame* g_CGamePtr = 02d81a9c
;   CKeys* g_CKeysPtr = 02dcd7d4
;   int g_ForceMessagePump = 0x1
;   CEditorTools g_CEditorToolsInstance
;   undefined4 g_CGameInstance.hero_number
;   undefined4 DAT_02d81b60
;   ... and 4 more
;
; Called Functions:
;   core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0
;   core_netgame.cpp_CNetGame_FUN_0053fd00
;   core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0
;   core_netgame.cpp_CNetGame_send_FUN_005411c0
;   core_netgame.cpp_initializeNetwork_FUN_0053fbc0
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   support_trisock.cpp_createNetworkAddr_FUN_005e1940
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053f900
        ;   Label: core_netgame.cpp_initializeNetworkToJoin_FUN_0053f900
    PUSH ESI                            ; 0053f901
    PUSH EDI                            ; 0053f902
    PUSH EBP                            ; 0053f903
    MOV EBP,ESP                         ; 0053f904
    SUB ESP,0x4c                        ; 0053f906
    AND ESP,0xfffffff8                  ; 0053f909
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053f90c
    PUSH 0x0                            ; 0053f90f
    PUSH EBX                            ; 0053f911
    CALL core_netgame.cpp_CNetGame_FUN_0053fd00 ; 0053f912
        ;   XREF to: 0053fd00 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_FUN_0053fd00(CNetGame * this_ptr)
    MOV EAX,[0x0067b654]                ; 0053f917 | g_CGamePtr
    MOV dword ptr [EBX + 0x1c],0x0      ; 0053f91c
    ADD ESP,0x8                         ; 0053f923
    MOV EDX,dword ptr [EAX + 0xc4]      ; 0053f926 | DAT_02d81b60
    PUSH EDX                            ; 0053f92c
    MOV ECX,dword ptr [EAX + 0xc0]      ; 0053f92d | g_CGameInstance.hero_number
    PUSH ECX                            ; 0053f933
    LEA ESI,[EBX + 0x8]                 ; 0053f934
    PUSH ESI                            ; 0053f937
    PUSH 0x1ddf                         ; 0053f938
    PUSH 0x3f87498                      ; 0053f93d | g_AnyAddressIP
    LEA EAX,[ESP + 0x44]                ; 0053f942
    PUSH EAX                            ; 0053f946
    CALL support_trisock.cpp_createNetworkAddr_FUN_005e1940 ; 0053f947
        ;   XREF to: 005e1940 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_createNetworkAddr_FUN_005e1940(SNetworkAddr * dest_addr, uint32_t * ip_address_ptr, uint16_t port)
    ADD ESP,0xc                         ; 0053f94c
    PUSH EAX                            ; 0053f94f
    PUSH EBX                            ; 0053f950
    CALL core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0 ; 0053f951
        ;   XREF to: 005412b0 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0()
    ADD ESP,0x14                        ; 0053f956
    PUSH EBX                            ; 0053f959
    MOV dword ptr [EBX + 0x114],EAX     ; 0053f95a
    CALL core_netgame.cpp_initializeNetwork_FUN_0053fbc0 ; 0053f960
        ;   XREF to: 0053fbc0 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_initializeNetwork_FUN_0053fbc0()
    ADD ESP,0x4                         ; 0053f965
    TEST EAX,EAX                        ; 0053f968
    JNZ 0x0053f973                      ; 0053f96a
        ;   XREF to: 0053f973 (CONDITIONAL_JUMP)  ; LAB_0053f973
    MOV ESP,EBP                         ; 0053f96c
    POP EBP                             ; 0053f96e
    POP EDI                             ; 0053f96f
    POP ESI                             ; 0053f970
    POP EBX                             ; 0053f971
    RET                                 ; 0053f972
    PUSH 0x1ddf                         ; 0053f973
        ;   Label: LAB_0053f973
    MOV EDI,dword ptr [EBP + 0x18]      ; 0053f978
    PUSH EDI                            ; 0053f97b
    LEA EAX,[ESP + 0x40]                ; 0053f97c
    PUSH EAX                            ; 0053f980
    CALL support_trisock.cpp_createNetworkAddr_FUN_005e1940 ; 0053f981
        ;   XREF to: 005e1940 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_createNetworkAddr_FUN_005e1940(SNetworkAddr * dest_addr, uint32_t * ip_address_ptr, uint16_t port)
    ADD ESP,0xc                         ; 0053f986
    PUSH 0x0                            ; 0053f989
    PUSH 0x0                            ; 0053f98b
    PUSH 0x63d32e                       ; 0053f98d | = "TheServer"
    LEA EAX,[ESP + 0x44]                ; 0053f992
    PUSH EAX                            ; 0053f996
    PUSH EBX                            ; 0053f997
    CALL core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0 ; 0053f998
        ;   XREF to: 005412b0 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0()
    MOV EDI,dword ptr [0x02f7c8b8]      ; 0053f99d | g_CurrentGameTime
    ADD ESP,0x14                        ; 0053f9a3
    MOV dword ptr [EBX],0x2             ; 0053f9a6
    MOV EDX,dword ptr [0x00678a60]      ; 0053f9ac | g_CEditorToolsPtr
    MOV dword ptr [EBX + 0x4],0x1       ; 0053f9b2
    PUSH 0x63d338                       ; 0053f9b9 | = "Contacting server.  Press ESC to give..."
    MOV dword ptr [EBX + 0x110],EAX     ; 0053f9be
    XOR EAX,EAX                         ; 0053f9c4
    PUSH EDX                            ; 0053f9c6 | g_CEditorToolsInstance
    SUB EDI,0x50000                     ; 0053f9c7
    MOV [0x02f7c8bc],EAX                ; 0053f9cd | DAT_02f7c8bc
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0053f9d2
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    MOV EAX,[0x006849a8]                ; 0053f9d7 | g_ForceMessagePump
    ADD ESP,0x8                         ; 0053f9dc
    XOR ECX,ECX                         ; 0053f9df
    MOV dword ptr [ESP + 0x44],EAX      ; 0053f9e1
    MOV EAX,dword ptr [EBX + 0x110]     ; 0053f9e5
    MOV dword ptr [0x006849a8],ECX      ; 0053f9eb | g_ForceMessagePump
    TEST EAX,EAX                        ; 0053f9f1
    JL 0x0053fb09                       ; 0053f9f3
        ;   XREF to: 0053fb09 (CONDITIONAL_JUMP)  ; LAB_0053fb09
    MOV dword ptr [ESP + 0x48],ESI      ; 0053f9f9
    MOV EAX,[0x02f7c8b8]                ; 0053f9fd | g_CurrentGameTime
        ;   Label: LAB_0053f9fd
    SUB EAX,EDI                         ; 0053fa02
    MOV dword ptr [ESP + 0x40],EAX      ; 0053fa04
    FILD dword ptr [ESP + 0x40]         ; 0053fa08
    FMUL double ptr [0x0063d3dd]        ; 0053fa0c | DOUBLE_0063d3dd
    FST float ptr [ESP]                 ; 0053fa12
    FLDZ                                ; 0053fa15
    FCOMPP                              ; 0053fa17
    FNSTSW AX                           ; 0053fa19
    SAHF                                ; 0053fa1b
    JBE 0x0053fa23                      ; 0053fa1c
        ;   XREF to: 0053fa23 (CONDITIONAL_JUMP)  ; LAB_0053fa23
    XOR ECX,ECX                         ; 0053fa1e
    MOV dword ptr [ESP],ECX             ; 0053fa20
    FLD float ptr [ESP]                 ; 0053fa23
        ;   Label: LAB_0053fa23
    FCOMP double ptr [0x0063d3e5]       ; 0053fa26 | DOUBLE_0063d3e5
    FNSTSW AX                           ; 0053fa2c
    SAHF                                ; 0053fa2e
    JBE 0x0053fa38                      ; 0053fa2f
        ;   XREF to: 0053fa38 (CONDITIONAL_JUMP)  ; LAB_0053fa38
    MOV dword ptr [ESP],0x41f00000      ; 0053fa31
    FLD float ptr [ESP]                 ; 0053fa38
        ;   Label: LAB_0053fa38
    FCOMP double ptr [0x0063d3ed]       ; 0053fa3b | DOUBLE_0063d3ed
    FNSTSW AX                           ; 0053fa41
    SAHF                                ; 0053fa43
    JBE 0x0053faba                      ; 0053fa44
        ;   XREF to: 0053faba (CONDITIONAL_JUMP)  ; LAB_0053faba
    MOV EDI,0x29                        ; 0053fa46
    MOV AH,0x1                          ; 0053fa4b
    LEA ESI,[ESP + 0x38]                ; 0053fa4d
    MOV dword ptr [ESP + 0x4],EDI       ; 0053fa51
    LEA EDI,[ESP + 0x9]                 ; 0053fa55
    MOV byte ptr [ESP + 0x8],AH         ; 0053fa59
    MOVSD ES:EDI,ESI                    ; 0053fa5d
    MOVSD ES:EDI,ESI                    ; 0053fa5e
    IMUL EAX,dword ptr [EBX + 0x114],0x78 ; 0053fa5f
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x34] ; 0053fa66
    MOV dword ptr [ESP + 0x25],EAX      ; 0053fa6a
    IMUL EAX,dword ptr [EBX + 0x114],0x78 ; 0053fa6e
    MOV ESI,dword ptr [ESP + 0x48]      ; 0053fa75
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x38] ; 0053fa79
    LEA EDI,[ESP + 0x11]                ; 0053fa7d
    MOV dword ptr [ESP + 0x29],EAX      ; 0053fa81
    PUSH EDI                            ; 0053fa85
    MOV AL,byte ptr [ESI]               ; 0053fa86
        ;   Label: LAB_0053fa86
    MOV byte ptr [EDI],AL               ; 0053fa88
    CMP AL,0x0                          ; 0053fa8a
    JZ 0x0053fa9e                       ; 0053fa8c
        ;   XREF to: 0053fa9e (CONDITIONAL_JUMP)  ; LAB_0053fa9e
    MOV AL,byte ptr [ESI + 0x1]         ; 0053fa8e
    ADD ESI,0x2                         ; 0053fa91
    MOV byte ptr [EDI + 0x1],AL         ; 0053fa94
    ADD EDI,0x2                         ; 0053fa97
    CMP AL,0x0                          ; 0053fa9a
    JNZ 0x0053fa86                      ; 0053fa9c
        ;   XREF to: 0053fa86 (CONDITIONAL_JUMP)  ; LAB_0053fa86
    POP EDI                             ; 0053fa9e
        ;   Label: LAB_0053fa9e
    LEA EAX,[ESP + 0x4]                 ; 0053fa9f
    PUSH EAX                            ; 0053faa3
    MOV ESI,dword ptr [EBX + 0x110]     ; 0053faa4
    PUSH ESI                            ; 0053faaa
    PUSH EBX                            ; 0053faab
    CALL core_netgame.cpp_CNetGame_send_FUN_005411c0 ; 0053faac
        ;   XREF to: 005411c0 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_send_FUN_005411c0()
    MOV EDI,dword ptr [0x02f7c8b8]      ; 0053fab1 | g_CurrentGameTime
    ADD ESP,0xc                         ; 0053fab7
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0053faba
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   Label: LAB_0053faba
    PUSH EBX                            ; 0053fabf
    CALL core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0 ; 0053fac0
        ;   XREF to: 005405b0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0(CNetGame * this_ptr)
    MOV EAX,[0x02f7c8bc]                ; 0053fac5 | DAT_02f7c8bc
    ADD ESP,0x4                         ; 0053faca
    CMP EAX,0x1                         ; 0053facd
    JZ 0x0053fba1                       ; 0053fad0
        ;   XREF to: 0053fba1 (CONDITIONAL_JUMP)  ; LAB_0053fba1
    CMP EAX,0x3                         ; 0053fad6
    JNC 0x0053fb95                      ; 0053fad9
        ;   XREF to: 0053fb95 (CONDITIONAL_JUMP)  ; LAB_0053fb95
    CMP EAX,0x2                         ; 0053fadf
    JZ 0x0053fb1d                       ; 0053fae2
        ;   XREF to: 0053fb1d (CONDITIONAL_JUMP)  ; LAB_0053fb1d
    PUSH 0x1                            ; 0053fae4
        ;   Label: LAB_0053fae4
    MOV EAX,[0x0067cf44]                ; 0053fae6 | g_CKeysPtr
    PUSH EAX                            ; 0053faeb | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0053faec | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0053faee
    ADD ESP,0x8                         ; 0053faf1
    TEST EAX,EAX                        ; 0053faf4
    JNZ 0x0053fb81                      ; 0053faf6
        ;   XREF to: 0053fb81 (CONDITIONAL_JUMP)  ; LAB_0053fb81
    CMP dword ptr [EBX + 0x110],0x0     ; 0053fafc
    JGE 0x0053f9fd                      ; 0053fb03
        ;   XREF to: 0053f9fd (CONDITIONAL_JUMP)  ; LAB_0053f9fd
    PUSH 0x1                            ; 0053fb09
        ;   Label: LAB_0053fb09
    PUSH EBX                            ; 0053fb0b
    CALL core_netgame.cpp_CNetGame_FUN_0053fd00 ; 0053fb0c
        ;   XREF to: 0053fd00 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_FUN_0053fd00(CNetGame * this_ptr)
    ADD ESP,0x8                         ; 0053fb11
    XOR EAX,EAX                         ; 0053fb14
    MOV ESP,EBP                         ; 0053fb16
    POP EBP                             ; 0053fb18
    POP EDI                             ; 0053fb19
    POP ESI                             ; 0053fb1a
    POP EBX                             ; 0053fb1b
    RET                                 ; 0053fb1c
    PUSH 0x63d364                       ; 0053fb1d | = "Connection refused - computer is not ..."
        ;   Label: LAB_0053fb1d
    MOV ESI,dword ptr [0x00678a60]      ; 0053fb22 | g_CEditorToolsPtr
    PUSH ESI                            ; 0053fb28 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0053fb29
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0053fb2e
    PUSH 0x0                            ; 0053fb31
    PUSH EBX                            ; 0053fb33
    CALL core_netgame.cpp_CNetGame_FUN_0053fd00 ; 0053fb34
        ;   XREF to: 0053fd00 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_FUN_0053fd00(CNetGame * this_ptr)
    ADD ESP,0x8                         ; 0053fb39
    XOR EAX,EAX                         ; 0053fb3c
    MOV ESP,EBP                         ; 0053fb3e
    POP EBP                             ; 0053fb40
    POP EDI                             ; 0053fb41
    POP ESI                             ; 0053fb42
    POP EBX                             ; 0053fb43
    RET                                 ; 0053fb44
    PUSH 0x63d392                       ; 0053fb45 | = "Connection refused - game is full"
        ;   Label: LAB_0053fb45
    MOV ECX,dword ptr [0x00678a60]      ; 0053fb4a | g_CEditorToolsPtr
    PUSH ECX                            ; 0053fb50 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0053fb51
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0053fb56
    PUSH 0x0                            ; 0053fb59
    PUSH EBX                            ; 0053fb5b
    CALL core_netgame.cpp_CNetGame_FUN_0053fd00 ; 0053fb5c
        ;   XREF to: 0053fd00 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_FUN_0053fd00(CNetGame * this_ptr)
    ADD ESP,0x8                         ; 0053fb61
    XOR EAX,EAX                         ; 0053fb64
    MOV ESP,EBP                         ; 0053fb66
    POP EBP                             ; 0053fb68
    POP EDI                             ; 0053fb69
    POP ESI                             ; 0053fb6a
    POP EBX                             ; 0053fb6b
    RET                                 ; 0053fb6c
    PUSH 0x63d3b4                       ; 0053fb6d | = "Connection refused - already in the game"
        ;   Label: LAB_0053fb6d
    MOV EDX,dword ptr [0x00678a60]      ; 0053fb72 | g_CEditorToolsPtr
    PUSH EDX                            ; 0053fb78 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0053fb79
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0053fb7e
    PUSH 0x0                            ; 0053fb81
        ;   Label: LAB_0053fb81
    PUSH EBX                            ; 0053fb83
    CALL core_netgame.cpp_CNetGame_FUN_0053fd00 ; 0053fb84
        ;   XREF to: 0053fd00 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_FUN_0053fd00(CNetGame * this_ptr)
    ADD ESP,0x8                         ; 0053fb89
    XOR EAX,EAX                         ; 0053fb8c
    MOV ESP,EBP                         ; 0053fb8e
    POP EBP                             ; 0053fb90
    POP EDI                             ; 0053fb91
    POP ESI                             ; 0053fb92
    POP EBX                             ; 0053fb93
    RET                                 ; 0053fb94
    JBE 0x0053fb45                      ; 0053fb95
        ;   XREF to: 0053fb45 (CONDITIONAL_JUMP)  ; LAB_0053fb45
        ;   Label: LAB_0053fb95
    CMP EAX,0x4                         ; 0053fb97
    JZ 0x0053fb6d                       ; 0053fb9a
        ;   XREF to: 0053fb6d (CONDITIONAL_JUMP)  ; LAB_0053fb6d
    JMP 0x0053fae4                      ; 0053fb9c
        ;   XREF to: 0053fae4 (UNCONDITIONAL_JUMP)  ; LAB_0053fae4
    MOV EAX,dword ptr [ESP + 0x44]      ; 0053fba1
        ;   Label: LAB_0053fba1
    MOV [0x006849a8],EAX                ; 0053fba5 | g_ForceMessagePump
    MOV EAX,0x1                         ; 0053fbaa
    MOV ESP,EBP                         ; 0053fbaf
    POP EBP                             ; 0053fbb1
    POP EDI                             ; 0053fbb2
    POP ESI                             ; 0053fbb3
    POP EBX                             ; 0053fbb4
    RET                                 ; 0053fbb5

