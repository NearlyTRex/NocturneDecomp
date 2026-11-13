; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_netgame_cpp_CNetGame_initializeNetwork_FUN_0052c970(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_0052c6b0 at 0052c712
;   core_netgame.cpp_FUN_0052c600 at 0052c677
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   undefined4 DAT_01d51d9c
;   undefined4 DAT_01d51da0
;
; Called Functions:
;   core_netgame.cpp_CNetGame_flushIncomingPackets_FUN_0052d300
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
;   shape_edittool.cpp_CEditorTools_showError_FUN_004943a0
;   support_trisock.cpp_CSocket_bindSocket_FUN_0059c980
;   support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40
;   support_trisock.cpp_CSocket_createUDPSocket_FUN_0059c940
;   support_trisock.cpp_CSocket_getSocketName_FUN_0059cd10
;   support_trisock.cpp_CSocket_setSocketBlocking_FUN_0059cd70
;   wincore_winrun.cpp_getTime_FUN_005b2420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052c970
        ;   Label: core_netgame.cpp_CNetGame_initializeNetwork_FUN_0052c970
    PUSH ESI                            ; 0052c971
    PUSH EBP                            ; 0052c972
    MOV ESI,dword ptr [ESP + 0x10]      ; 0052c973
    PUSH 0x5eb7a8                       ; 0052c977
    MOV EDX,dword ptr [0x0061abc0]      ; 0052c97c | g_CEditorToolsPtr
    PUSH EDX                            ; 0052c982
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400 ; 0052c983
        ;   XREF to: 00494400 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0052c988
    LEA EBX,[ESI + 0x178]               ; 0052c98b
    PUSH EBX                            ; 0052c991
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40 ; 0052c992
        ;   XREF to: 0059cc40 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0052c997
    PUSH EBX                            ; 0052c99a
    CALL support_trisock.cpp_CSocket_createUDPSocket_FUN_0059c940 ; 0052c99b
        ;   XREF to: 0059c940 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_createUDPSocket_FUN_0059c940(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0052c9a0
    TEST EAX,EAX                        ; 0052c9a3
    JZ 0x0052ca41                       ; 0052c9a5
        ;   XREF to: 0052ca41 (CONDITIONAL_JUMP)  ; LAB_0052ca41
    PUSH 0x0                            ; 0052c9ab
    PUSH EBX                            ; 0052c9ad
    CALL support_trisock.cpp_CSocket_setSocketBlocking_FUN_0059cd70 ; 0052c9ae
        ;   XREF to: 0059cd70 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_setSocketBlocking_FUN_0059cd70(CSocket * this_ptr, int blocking_mode)
    ADD ESP,0x8                         ; 0052c9b3
    TEST EAX,EAX                        ; 0052c9b6
    JZ 0x0052ca5b                       ; 0052c9b8
        ;   XREF to: 0052ca5b (CONDITIONAL_JUMP)  ; LAB_0052ca5b
    PUSH 0x1ddf                         ; 0052c9be
    PUSH EBX                            ; 0052c9c3
    CALL support_trisock.cpp_CSocket_bindSocket_FUN_0059c980 ; 0052c9c4
        ;   XREF to: 0059c980 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_bindSocket_FUN_0059c980(CSocket * this_ptr, ushort port)
    ADD ESP,0x8                         ; 0052c9c9
    TEST EAX,EAX                        ; 0052c9cc
    JZ 0x0052ca75                       ; 0052c9ce
        ;   XREF to: 0052ca75 (CONDITIONAL_JUMP)  ; LAB_0052ca75
    MOV EAX,dword ptr [ESI + 0x11c]     ; 0052c9d4
    SHL EAX,0x2                         ; 0052c9da
    MOV EDX,EAX                         ; 0052c9dd
    SHL EAX,0x5                         ; 0052c9df
    SUB EAX,EDX                         ; 0052c9e2
    LEA EDX,[ESI + 0x20]                ; 0052c9e4
    ADD EAX,EDX                         ; 0052c9e7
    ADD EAX,0x1c                        ; 0052c9e9
    PUSH EAX                            ; 0052c9ec
    PUSH EBX                            ; 0052c9ed
    CALL support_trisock.cpp_CSocket_getSocketName_FUN_0059cd10 ; 0052c9ee
        ;   XREF to: 0059cd10 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_getSocketName_FUN_0059cd10(CSocket * this_ptr, SNetworkAddr * out_address)
    ADD ESP,0x8                         ; 0052c9f3
    TEST EAX,EAX                        ; 0052c9f6
    JZ 0x0052ca8f                       ; 0052c9f8
        ;   XREF to: 0052ca8f (CONDITIONAL_JUMP)  ; LAB_0052ca8f
    PUSH ESI                            ; 0052c9fe
    MOV EBP,0x1                         ; 0052c9ff
    CALL core_netgame.cpp_CNetGame_flushIncomingPackets_FUN_0052d300 ; 0052ca04
        ;   XREF to: 0052d300 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_flushIncomingPackets_FUN_0052d300(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0052ca09
    MOV dword ptr [0x01d51da0],EBP      ; 0052ca0c | DAT_01d51da0
    CALL wincore_winrun.cpp_getTime_FUN_005b2420 ; 0052ca12
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005b2420()
    MOV EDX,EAX                         ; 0052ca17
    MOV EBX,0x12                        ; 0052ca19
    SAR EDX,0x1f                        ; 0052ca1e
    IDIV EBX                            ; 0052ca21
    PUSH 0x5eb840                       ; 0052ca23
    MOV [0x01d51d9c],EAX                ; 0052ca28 | DAT_01d51d9c
    MOV EAX,[0x0061abc0]                ; 0052ca2d | g_CEditorToolsPtr
    PUSH EAX                            ; 0052ca32
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400 ; 0052ca33
        ;   XREF to: 00494400 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0052ca38
    MOV EAX,EBP                         ; 0052ca3b
    POP EBP                             ; 0052ca3d
    POP ESI                             ; 0052ca3e
    POP EBX                             ; 0052ca3f
    RET                                 ; 0052ca40
    PUSH 0x5eb7c0                       ; 0052ca41
        ;   Label: LAB_0052ca41
    MOV ECX,dword ptr [0x0061abc0]      ; 0052ca46 | g_CEditorToolsPtr
    PUSH ECX                            ; 0052ca4c
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_004943a0 ; 0052ca4d
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_004943a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0052ca52
    XOR EAX,EAX                         ; 0052ca55
    POP EBP                             ; 0052ca57
    POP ESI                             ; 0052ca58
    POP EBX                             ; 0052ca59
    RET                                 ; 0052ca5a
    PUSH 0x5eb7dd                       ; 0052ca5b
        ;   Label: LAB_0052ca5b
    MOV EBX,dword ptr [0x0061abc0]      ; 0052ca60 | g_CEditorToolsPtr
    PUSH EBX                            ; 0052ca66
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_004943a0 ; 0052ca67
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_004943a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0052ca6c
    XOR EAX,EAX                         ; 0052ca6f
    POP EBP                             ; 0052ca71
    POP ESI                             ; 0052ca72
    POP EBX                             ; 0052ca73
    RET                                 ; 0052ca74
    PUSH 0x5eb805                       ; 0052ca75
        ;   Label: LAB_0052ca75
    MOV ESI,dword ptr [0x0061abc0]      ; 0052ca7a | g_CEditorToolsPtr
    PUSH ESI                            ; 0052ca80
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_004943a0 ; 0052ca81
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_004943a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0052ca86
    XOR EAX,EAX                         ; 0052ca89
    POP EBP                             ; 0052ca8b
    POP ESI                             ; 0052ca8c
    POP EBX                             ; 0052ca8d
    RET                                 ; 0052ca8e
    PUSH EDI                            ; 0052ca8f
        ;   Label: LAB_0052ca8f
    PUSH 0x5eb81b                       ; 0052ca90
    MOV EDI,dword ptr [0x0061abc0]      ; 0052ca95 | g_CEditorToolsPtr
    PUSH EDI                            ; 0052ca9b
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_004943a0 ; 0052ca9c
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_004943a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0052caa1
    XOR EAX,EAX                         ; 0052caa4
    POP EDI                             ; 0052caa6
    POP EBP                             ; 0052caa7
    POP ESI                             ; 0052caa8
    POP EBX                             ; 0052caa9
    RET                                 ; 0052caaa

