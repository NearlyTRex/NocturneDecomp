; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_netgame_cpp_CNetGame_initializeNetwork_FUN_0050b790(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_0050b4d0 at 0050b532
;   core_netgame.cpp_FUN_0050b420 at 0050b497
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   undefined4 DAT_01d34e34
;   undefined4 DAT_01d34e38
;
; Called Functions:
;   core_netgame.cpp_CNetGame_flushIncomingPackets_FUN_0050c130
;   shape_edittool.cpp_CEditorTools_showError_FUN_0047be40
;   shape_edittool.cpp_FUN_0047be90
;   support_trisock.cpp_CSocket_bindSocket_FUN_005790a0
;   support_trisock.cpp_CSocket_closeSocket_FUN_00579360
;   support_trisock.cpp_CSocket_createUDPSocket_FUN_00579060
;   support_trisock.cpp_CSocket_getSocketName_FUN_00579430
;   support_trisock.cpp_CSocket_setSocketBlocking_FUN_00579490
;   wincore_winrun.cpp_getTime_FUN_0058e9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b790
        ;   Label: core_netgame.cpp_CNetGame_initializeNetwork_FUN_0050b790
    PUSH ESI                            ; 0050b791
    PUSH EBP                            ; 0050b792
    MOV ESI,dword ptr [ESP + 0x10]      ; 0050b793
    PUSH 0x5e054d                       ; 0050b797
    MOV EDX,dword ptr [0x006138e0]      ; 0050b79c | g_CEditorToolsPtr
    PUSH EDX                            ; 0050b7a2
    CALL shape_edittool.cpp_FUN_0047be90 ; 0050b7a3
        ;   XREF to: 0047be90 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047be90()
    ADD ESP,0x8                         ; 0050b7a8
    LEA EBX,[ESI + 0x180]               ; 0050b7ab
    PUSH EBX                            ; 0050b7b1
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_00579360 ; 0050b7b2
        ;   XREF to: 00579360 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_00579360(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0050b7b7
    PUSH EBX                            ; 0050b7ba
    CALL support_trisock.cpp_CSocket_createUDPSocket_FUN_00579060 ; 0050b7bb
        ;   XREF to: 00579060 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_createUDPSocket_FUN_00579060(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0050b7c0
    TEST EAX,EAX                        ; 0050b7c3
    JZ 0x0050b85a                       ; 0050b7c5
        ;   XREF to: 0050b85a (CONDITIONAL_JUMP)  ; LAB_0050b85a
    PUSH 0x0                            ; 0050b7cb
    PUSH EBX                            ; 0050b7cd
    CALL support_trisock.cpp_CSocket_setSocketBlocking_FUN_00579490 ; 0050b7ce
        ;   XREF to: 00579490 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_setSocketBlocking_FUN_00579490(CSocket * this_ptr, int blocking_mode)
    ADD ESP,0x8                         ; 0050b7d3
    TEST EAX,EAX                        ; 0050b7d6
    JZ 0x0050b874                       ; 0050b7d8
        ;   XREF to: 0050b874 (CONDITIONAL_JUMP)  ; LAB_0050b874
    PUSH 0x1ddf                         ; 0050b7de
    PUSH EBX                            ; 0050b7e3
    CALL support_trisock.cpp_CSocket_bindSocket_FUN_005790a0 ; 0050b7e4
        ;   XREF to: 005790a0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_bindSocket_FUN_005790a0(CSocket * this_ptr, ushort port)
    ADD ESP,0x8                         ; 0050b7e9
    TEST EAX,EAX                        ; 0050b7ec
    JZ 0x0050b88e                       ; 0050b7ee
        ;   XREF to: 0050b88e (CONDITIONAL_JUMP)  ; LAB_0050b88e
    MOV EDX,dword ptr [ESI + 0x124]     ; 0050b7f4
    LEA EAX,[ESI + 0x20]                ; 0050b7fa
    SHL EDX,0x7                         ; 0050b7fd
    ADD EAX,EDX                         ; 0050b800
    ADD EAX,0x1c                        ; 0050b802
    PUSH EAX                            ; 0050b805
    PUSH EBX                            ; 0050b806
    CALL support_trisock.cpp_CSocket_getSocketName_FUN_00579430 ; 0050b807
        ;   XREF to: 00579430 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_getSocketName_FUN_00579430(CSocket * this_ptr, SNetworkAddr * out_address)
    ADD ESP,0x8                         ; 0050b80c
    TEST EAX,EAX                        ; 0050b80f
    JZ 0x0050b8a8                       ; 0050b811
        ;   XREF to: 0050b8a8 (CONDITIONAL_JUMP)  ; LAB_0050b8a8
    PUSH ESI                            ; 0050b817
    MOV EBP,0x1                         ; 0050b818
    CALL core_netgame.cpp_CNetGame_flushIncomingPackets_FUN_0050c130 ; 0050b81d
        ;   XREF to: 0050c130 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_flushIncomingPackets_FUN_0050c130(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 0050b822
    MOV dword ptr [0x01d34e38],EBP      ; 0050b825 | DAT_01d34e38
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 0050b82b
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_0058e9e0()
    MOV EDX,EAX                         ; 0050b830
    MOV EBX,0x12                        ; 0050b832
    SAR EDX,0x1f                        ; 0050b837
    IDIV EBX                            ; 0050b83a
    PUSH 0x5e05e5                       ; 0050b83c
    MOV [0x01d34e34],EAX                ; 0050b841 | DAT_01d34e34
    MOV EAX,[0x006138e0]                ; 0050b846 | g_CEditorToolsPtr
    PUSH EAX                            ; 0050b84b
    CALL shape_edittool.cpp_FUN_0047be90 ; 0050b84c
        ;   XREF to: 0047be90 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047be90()
    ADD ESP,0x8                         ; 0050b851
    MOV EAX,EBP                         ; 0050b854
    POP EBP                             ; 0050b856
    POP ESI                             ; 0050b857
    POP EBX                             ; 0050b858
    RET                                 ; 0050b859
    PUSH 0x5e0565                       ; 0050b85a
        ;   Label: LAB_0050b85a
    MOV ECX,dword ptr [0x006138e0]      ; 0050b85f | g_CEditorToolsPtr
    PUSH ECX                            ; 0050b865
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 0050b866
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0050b86b
    XOR EAX,EAX                         ; 0050b86e
    POP EBP                             ; 0050b870
    POP ESI                             ; 0050b871
    POP EBX                             ; 0050b872
    RET                                 ; 0050b873
    PUSH 0x5e0582                       ; 0050b874
        ;   Label: LAB_0050b874
    MOV EBX,dword ptr [0x006138e0]      ; 0050b879 | g_CEditorToolsPtr
    PUSH EBX                            ; 0050b87f
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 0050b880
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0050b885
    XOR EAX,EAX                         ; 0050b888
    POP EBP                             ; 0050b88a
    POP ESI                             ; 0050b88b
    POP EBX                             ; 0050b88c
    RET                                 ; 0050b88d
    PUSH 0x5e05aa                       ; 0050b88e
        ;   Label: LAB_0050b88e
    MOV ESI,dword ptr [0x006138e0]      ; 0050b893 | g_CEditorToolsPtr
    PUSH ESI                            ; 0050b899
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 0050b89a
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0050b89f
    XOR EAX,EAX                         ; 0050b8a2
    POP EBP                             ; 0050b8a4
    POP ESI                             ; 0050b8a5
    POP EBX                             ; 0050b8a6
    RET                                 ; 0050b8a7
    PUSH EDI                            ; 0050b8a8
        ;   Label: LAB_0050b8a8
    PUSH 0x5e05c0                       ; 0050b8a9
    MOV EDI,dword ptr [0x006138e0]      ; 0050b8ae | g_CEditorToolsPtr
    PUSH EDI                            ; 0050b8b4
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 0050b8b5
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0050b8ba
    XOR EAX,EAX                         ; 0050b8bd
    POP EDI                             ; 0050b8bf
    POP EBP                             ; 0050b8c0
    POP ESI                             ; 0050b8c1
    POP EBX                             ; 0050b8c2
    RET                                 ; 0050b8c3

