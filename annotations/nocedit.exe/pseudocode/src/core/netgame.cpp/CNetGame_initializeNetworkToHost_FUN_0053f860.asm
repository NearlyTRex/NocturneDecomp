; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_netgame_cpp_CNetGame_initializeNetworkToHost_FUN_0053f860(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_game.cpp_hostNetworkGame_FUN_004e2f10 at 004e2f1a
;
; Referenced Globals:
;   TerminatedCString s_Initializing_network_to__0063d30c
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CGame* g_CGamePtr = 02d81a9c
;   CEditorTools g_CEditorToolsInstance
;   undefined4 g_CGameInstance.hero_number
;   undefined4 DAT_02d81b60
;   uchar[4] g_AnyAddressIP
;
; Called Functions:
;   core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0
;   core_netgame.cpp_CNetGame_FUN_0053fd00
;   core_netgame.cpp_CNetGame_initializeNetwork_FUN_0053fbc0
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   support_trisock.cpp_createNetworkAddr_FUN_005e1940
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053f860
        ;   Label: core_netgame.cpp_CNetGame_initializeNetworkToHost_FUN_0053f860
    PUSH ESI                            ; 0053f861
    SUB ESP,0x8                         ; 0053f862
    MOV EBX,dword ptr [ESP + 0x14]      ; 0053f865
    PUSH 0x63d30c                       ; 0053f869 | = "Initializing network to host game"
    MOV EDX,dword ptr [0x00678a60]      ; 0053f86e | g_CEditorToolsPtr
    PUSH EDX                            ; 0053f874 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0053f875
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 0053f87a
    PUSH 0x0                            ; 0053f87d
    PUSH EBX                            ; 0053f87f
    CALL core_netgame.cpp_CNetGame_FUN_0053fd00 ; 0053f880
        ;   XREF to: 0053fd00 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_FUN_0053fd00(CNetGame * this_ptr)
    MOV EAX,[0x0067b654]                ; 0053f885 | g_CGamePtr
    MOV dword ptr [EBX + 0x1c],0x0      ; 0053f88a
    ADD ESP,0x8                         ; 0053f891
    MOV ECX,dword ptr [EAX + 0xc4]      ; 0053f894 | DAT_02d81b60
    PUSH ECX                            ; 0053f89a
    MOV ESI,dword ptr [EAX + 0xc0]      ; 0053f89b | g_CGameInstance.hero_number
    PUSH ESI                            ; 0053f8a1
    LEA EAX,[EBX + 0x8]                 ; 0053f8a2
    PUSH EAX                            ; 0053f8a5
    PUSH 0x1ddf                         ; 0053f8a6
    PUSH 0x3f87498                      ; 0053f8ab | g_AnyAddressIP
    LEA EAX,[ESP + 0x14]                ; 0053f8b0
    PUSH EAX                            ; 0053f8b4
    CALL support_trisock.cpp_createNetworkAddr_FUN_005e1940 ; 0053f8b5
        ;   XREF to: 005e1940 (UNCONDITIONAL_CALL)  ; void support_trisock.cpp_createNetworkAddr_FUN_005e1940(SNetworkAddr * dest_addr, uint32_t * ip_address_ptr, uint16_t port)
    ADD ESP,0xc                         ; 0053f8ba
    PUSH EAX                            ; 0053f8bd
    PUSH EBX                            ; 0053f8be
    CALL core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0 ; 0053f8bf
        ;   XREF to: 005412b0 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0(CNetGame * this_ptr)
    ADD ESP,0x14                        ; 0053f8c4
    MOV dword ptr [EBX + 0x114],EAX     ; 0053f8c7
    PUSH EBX                            ; 0053f8cd
    MOV dword ptr [EBX + 0x110],EAX     ; 0053f8ce
    CALL core_netgame.cpp_CNetGame_initializeNetwork_FUN_0053fbc0 ; 0053f8d4
        ;   XREF to: 0053fbc0 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_initializeNetwork_FUN_0053fbc0(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0053f8d9
    TEST EAX,EAX                        ; 0053f8dc
    JNZ 0x0053f8e6                      ; 0053f8de
        ;   XREF to: 0053f8e6 (CONDITIONAL_JUMP)  ; LAB_0053f8e6
    ADD ESP,0x8                         ; 0053f8e0
    POP ESI                             ; 0053f8e3
    POP EBX                             ; 0053f8e4
    RET                                 ; 0053f8e5
    MOV dword ptr [EBX + 0x4],0x1       ; 0053f8e6
        ;   Label: LAB_0053f8e6
    MOV EAX,0x1                         ; 0053f8ed
    MOV dword ptr [EBX],0x1             ; 0053f8f2
    ADD ESP,0x8                         ; 0053f8f8
    POP ESI                             ; 0053f8fb
    POP EBX                             ; 0053f8fc
    RET                                 ; 0053f8fd

