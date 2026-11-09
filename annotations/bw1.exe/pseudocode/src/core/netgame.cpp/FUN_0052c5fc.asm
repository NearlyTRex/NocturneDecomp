; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_netgame_cpp_FUN_0052c5fc(CNetGame *param_1)
;
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_02c8ae4c
;
; Called Functions:
;   core_netgame.cpp_CNetGame_addPlayer_FUN_0052e040
;   core_netgame.cpp_CNetGame_disconnect_FUN_0052cab0
;   core_netgame.cpp_FUN_0052c970
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
;   support_trisock.cpp_createNetworkAddr_FUN_0059c740
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0052c5fc
        ;   Label: core_netgame.cpp_FUN_0052c5fc
    PUSH EBX                            ; 0052c600
    PUSH ESI                            ; 0052c601
    PUSH EDI                            ; 0052c602
    SUB ESP,0x8                         ; 0052c603
    MOV EBX,dword ptr [ESP + 0x18]      ; 0052c606
    PUSH 0x5eb6bf                       ; 0052c60a
    MOV EDX,dword ptr [0x0061abc0]      ; 0052c60f | g_CEditorToolsPtr
    PUSH EDX                            ; 0052c615
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400 ; 0052c616
        ;   XREF to: 00494400 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0052c61b
    PUSH 0x0                            ; 0052c61e
    PUSH EBX                            ; 0052c620
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_0052cab0 ; 0052c621
        ;   XREF to: 0052cab0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_0052cab0(CNetGame * this_ptr, int perform_handshake)
    MOV EAX,[0x0061d95c]                ; 0052c626 | g_CGamePtr
    MOV dword ptr [EBX + 0x1c],0x0      ; 0052c62b
    ADD ESP,0x8                         ; 0052c632
    MOV ECX,dword ptr [EAX + 0xd8]      ; 0052c635
    PUSH ECX                            ; 0052c63b
    MOV ESI,dword ptr [EAX + 0xd4]      ; 0052c63c
    PUSH ESI                            ; 0052c642
    LEA EAX,[EBX + 0x8]                 ; 0052c643
    PUSH EAX                            ; 0052c646
    PUSH 0x1ddf                         ; 0052c647
    MOV EDI,dword ptr [0x02c8ae4c]      ; 0052c64c | DAT_02c8ae4c
    PUSH EDI                            ; 0052c652
    LEA EAX,[ESP + 0x14]                ; 0052c653
    PUSH EAX                            ; 0052c657
    CALL support_trisock.cpp_createNetworkAddr_FUN_0059c740 ; 0052c658
        ;   XREF to: 0059c740 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_createNetworkAddr_FUN_0059c740()
    ADD ESP,0xc                         ; 0052c65d
    PUSH EAX                            ; 0052c660
    PUSH EBX                            ; 0052c661
    CALL core_netgame.cpp_CNetGame_addPlayer_FUN_0052e040 ; 0052c662
        ;   XREF to: 0052e040 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_CNetGame_addPlayer_FUN_0052e040(CNetGame * this_ptr, SNetworkAddr * addr, char * name, int hero_number, ...)
    ADD ESP,0x14                        ; 0052c667
    MOV dword ptr [EBX + 0x11c],EAX     ; 0052c66a
    PUSH EBX                            ; 0052c670
    MOV dword ptr [EBX + 0x118],EAX     ; 0052c671
    CALL core_netgame.cpp_FUN_0052c970  ; 0052c677
        ;   XREF to: 0052c970 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_FUN_0052c970(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0052c67c
    TEST EAX,EAX                        ; 0052c67f
    JNZ 0x0052c68a                      ; 0052c681
        ;   XREF to: 0052c68a (CONDITIONAL_JUMP)  ; LAB_0052c68a
    ADD ESP,0x8                         ; 0052c683
    POP EDI                             ; 0052c686
    POP ESI                             ; 0052c687
    POP EBX                             ; 0052c688
    RET                                 ; 0052c689
    MOV dword ptr [EBX + 0x4],0x1       ; 0052c68a
        ;   Label: LAB_0052c68a
    MOV EAX,0x1                         ; 0052c691
    MOV dword ptr [EBX],0x1             ; 0052c696
    ADD ESP,0x8                         ; 0052c69c
    POP EDI                             ; 0052c69f
    POP ESI                             ; 0052c6a0
    POP EBX                             ; 0052c6a1
    RET                                 ; 0052c6a2

