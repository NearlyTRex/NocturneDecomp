; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_netgame_cpp_CNetGame_initializeNetwork_FUN_0053fbc0(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_initializeNetworkToHost_FUN_0053f860 at 0053f8d4
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_0053f900 at 0053f960
;
; Referenced Globals:
;   TerminatedCString s_Initializing_network_0063d3f5
;   TerminatedCString s_Can_t_create_datagram_so_0063d40d
;   TerminatedCString s_Can_t_turn_off_blocking__0063d42a
;   TerminatedCString s_Can_t_bind_UDP_socket_0063d452
;   TerminatedCString s_Can_t_querry_back_for_so_0063d468
;   TerminatedCString s_Initializing_network_OK_0063d48d
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;   int g_LastPingTime
;   uint g_CurrentGameTime
;
; Called Functions:
;   core_netgame.cpp_CNetGame_FUN_00540550
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20
;   support_trisock.cpp_bindSocket_FUN_005e1b80
;   support_trisock.cpp_createUDPSocket_FUN_005e1b40
;   support_trisock.cpp_getSocketName_FUN_005e1df0
;   support_trisock.cpp_setSocketBlocking_FUN_005e1e50
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053fbc0
        ;   Label: core_netgame.cpp_CNetGame_initializeNetwork_FUN_0053fbc0
    PUSH ESI                            ; 0053fbc1
    PUSH EBP                            ; 0053fbc2
    MOV ESI,dword ptr [ESP + 0x10]      ; 0053fbc3
    PUSH 0x63d3f5                       ; 0053fbc7 | = "Initializing network..."
    MOV EDX,dword ptr [0x00678a60]      ; 0053fbcc | g_CEditorToolsPtr
    PUSH EDX                            ; 0053fbd2 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0053fbd3
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 0053fbd8
    LEA EBX,[ESI + 0x170]               ; 0053fbdb
    PUSH EBX                            ; 0053fbe1
    CALL support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20 ; 0053fbe2
        ;   XREF to: 005e1d20 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20(_SOCKET * socket_handle)
    ADD ESP,0x4                         ; 0053fbe7
    PUSH EBX                            ; 0053fbea
    CALL support_trisock.cpp_createUDPSocket_FUN_005e1b40 ; 0053fbeb
        ;   XREF to: 005e1b40 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_createUDPSocket_FUN_005e1b40(_SOCKET * socket_handle)
    ADD ESP,0x4                         ; 0053fbf0
    TEST EAX,EAX                        ; 0053fbf3
    JZ 0x0053fc91                       ; 0053fbf5
        ;   XREF to: 0053fc91 (CONDITIONAL_JUMP)  ; LAB_0053fc91
    PUSH 0x0                            ; 0053fbfb
    PUSH EBX                            ; 0053fbfd
    CALL support_trisock.cpp_setSocketBlocking_FUN_005e1e50 ; 0053fbfe
        ;   XREF to: 005e1e50 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_setSocketBlocking_FUN_005e1e50(_SOCKET * socket_handle, int blocking_mode)
    ADD ESP,0x8                         ; 0053fc03
    TEST EAX,EAX                        ; 0053fc06
    JZ 0x0053fcab                       ; 0053fc08
        ;   XREF to: 0053fcab (CONDITIONAL_JUMP)  ; LAB_0053fcab
    PUSH 0x1ddf                         ; 0053fc0e
    PUSH EBX                            ; 0053fc13
    CALL support_trisock.cpp_bindSocket_FUN_005e1b80 ; 0053fc14
        ;   XREF to: 005e1b80 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_bindSocket_FUN_005e1b80(uint16_t port, _SOCKET * socket_handle)
    ADD ESP,0x8                         ; 0053fc19
    TEST EAX,EAX                        ; 0053fc1c
    JZ 0x0053fcc5                       ; 0053fc1e
        ;   XREF to: 0053fcc5 (CONDITIONAL_JUMP)  ; LAB_0053fcc5
    MOV EAX,dword ptr [ESI + 0x114]     ; 0053fc24
    SHL EAX,0x3                         ; 0053fc2a
    MOV EDX,EAX                         ; 0053fc2d
    SHL EAX,0x4                         ; 0053fc2f
    SUB EAX,EDX                         ; 0053fc32
    LEA EDX,[ESI + 0x20]                ; 0053fc34
    ADD EAX,EDX                         ; 0053fc37
    ADD EAX,0x1c                        ; 0053fc39
    PUSH EAX                            ; 0053fc3c
    PUSH EBX                            ; 0053fc3d
    CALL support_trisock.cpp_getSocketName_FUN_005e1df0 ; 0053fc3e
        ;   XREF to: 005e1df0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_getSocketName_FUN_005e1df0(_SOCKET * socket_handle, SNetworkAddr * param_2)
    ADD ESP,0x8                         ; 0053fc43
    TEST EAX,EAX                        ; 0053fc46
    JZ 0x0053fcdf                       ; 0053fc48
        ;   XREF to: 0053fcdf (CONDITIONAL_JUMP)  ; LAB_0053fcdf
    PUSH ESI                            ; 0053fc4e
    MOV EBP,0x1                         ; 0053fc4f
    CALL core_netgame.cpp_CNetGame_FUN_00540550 ; 0053fc54
        ;   XREF to: 00540550 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_FUN_00540550(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0053fc59
    MOV dword ptr [0x02f7c8b8],EBP      ; 0053fc5c | g_CurrentGameTime
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0053fc62
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV EDX,EAX                         ; 0053fc67
    MOV EBX,0x12                        ; 0053fc69
    SAR EDX,0x1f                        ; 0053fc6e
    IDIV EBX                            ; 0053fc71
    PUSH 0x63d48d                       ; 0053fc73 | = "Initializing network...OK"
    MOV [0x02f7c8b4],EAX                ; 0053fc78 | g_LastPingTime
    MOV EAX,[0x00678a60]                ; 0053fc7d | g_CEditorToolsPtr
    PUSH EAX                            ; 0053fc82 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0053fc83
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 0053fc88
    MOV EAX,EBP                         ; 0053fc8b
    POP EBP                             ; 0053fc8d
    POP ESI                             ; 0053fc8e
    POP EBX                             ; 0053fc8f
    RET                                 ; 0053fc90
    PUSH 0x63d40d                       ; 0053fc91 | = "Can't create datagram socket"
        ;   Label: LAB_0053fc91
    MOV ECX,dword ptr [0x00678a60]      ; 0053fc96 | g_CEditorToolsPtr
    PUSH ECX                            ; 0053fc9c | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0053fc9d
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0053fca2
    XOR EAX,EAX                         ; 0053fca5
    POP EBP                             ; 0053fca7
    POP ESI                             ; 0053fca8
    POP EBX                             ; 0053fca9
    RET                                 ; 0053fcaa
    PUSH 0x63d42a                       ; 0053fcab | = "Can't turn off blocking mode for socket"
        ;   Label: LAB_0053fcab
    MOV EBX,dword ptr [0x00678a60]      ; 0053fcb0 | g_CEditorToolsPtr
    PUSH EBX                            ; 0053fcb6 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0053fcb7
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0053fcbc
    XOR EAX,EAX                         ; 0053fcbf
    POP EBP                             ; 0053fcc1
    POP ESI                             ; 0053fcc2
    POP EBX                             ; 0053fcc3
    RET                                 ; 0053fcc4
    PUSH 0x63d452                       ; 0053fcc5 | = "Can't bind UDP socket"
        ;   Label: LAB_0053fcc5
    MOV ESI,dword ptr [0x00678a60]      ; 0053fcca | g_CEditorToolsPtr
    PUSH ESI                            ; 0053fcd0 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0053fcd1
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0053fcd6
    XOR EAX,EAX                         ; 0053fcd9
    POP EBP                             ; 0053fcdb
    POP ESI                             ; 0053fcdc
    POP EBX                             ; 0053fcdd
    RET                                 ; 0053fcde
    PUSH EDI                            ; 0053fcdf
        ;   Label: LAB_0053fcdf
    PUSH 0x63d468                       ; 0053fce0 | = "Can't querry back for socket address"
    MOV EDI,dword ptr [0x00678a60]      ; 0053fce5 | g_CEditorToolsPtr
    PUSH EDI                            ; 0053fceb | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0053fcec
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0053fcf1
    XOR EAX,EAX                         ; 0053fcf4
    POP EDI                             ; 0053fcf6
    POP EBP                             ; 0053fcf7
    POP ESI                             ; 0053fcf8
    POP EBX                             ; 0053fcf9
    RET                                 ; 0053fcfa

