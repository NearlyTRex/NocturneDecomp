; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_netgame_cpp_FUN_00503efc(CNetGame *param_1)
;
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 01c5b0e4
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_02cfd89c
;
; Called Functions:
;   core_netgame.cpp_CNetGame_disconnect_FUN_005043b0
;   core_netgame.cpp_FUN_00504270
;   core_netgame.cpp_FUN_00505950
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0
;   support_trisock.cpp_createNetworkAddr_FUN_0056f730
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 00503efc
        ;   Label: core_netgame.cpp_FUN_00503efc
    PUSH EBX                            ; 00503f00
    PUSH ESI                            ; 00503f01
    PUSH EDI                            ; 00503f02
    SUB ESP,0x8                         ; 00503f03
    MOV EBX,dword ptr [ESP + 0x18]      ; 00503f06
    PUSH 0x5ca4d0                       ; 00503f0a
    MOV EDX,dword ptr [0x005fb140]      ; 00503f0f | g_CEditorToolsPtr
    PUSH EDX                            ; 00503f15
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0 ; 00503f16
        ;   XREF to: 0047cfa0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00503f1b
    PUSH 0x0                            ; 00503f1e
    PUSH EBX                            ; 00503f20
    CALL core_netgame.cpp_CNetGame_disconnect_FUN_005043b0 ; 00503f21
        ;   XREF to: 005043b0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_disconnect_FUN_005043b0(CNetGame * this_ptr, int perform_handshake)
    MOV EAX,[0x005fe9dc]                ; 00503f26 | g_CGamePtr
    MOV dword ptr [EBX + 0x1c],0x0      ; 00503f2b
    ADD ESP,0x8                         ; 00503f32
    MOV ECX,dword ptr [EAX + 0xdc]      ; 00503f35
    PUSH ECX                            ; 00503f3b
    MOV ESI,dword ptr [EAX + 0xd8]      ; 00503f3c
    PUSH ESI                            ; 00503f42
    LEA EAX,[EBX + 0x8]                 ; 00503f43
    PUSH EAX                            ; 00503f46
    PUSH 0x1ddf                         ; 00503f47
    MOV EDI,dword ptr [0x02cfd89c]      ; 00503f4c | DAT_02cfd89c
    PUSH EDI                            ; 00503f52
    LEA EAX,[ESP + 0x14]                ; 00503f53
    PUSH EAX                            ; 00503f57
    CALL support_trisock.cpp_createNetworkAddr_FUN_0056f730 ; 00503f58
        ;   XREF to: 0056f730 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_createNetworkAddr_FUN_0056f730()
    ADD ESP,0xc                         ; 00503f5d
    PUSH EAX                            ; 00503f60
    PUSH EBX                            ; 00503f61
    CALL core_netgame.cpp_FUN_00505950  ; 00503f62
        ;   XREF to: 00505950 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_FUN_00505950()
    ADD ESP,0x14                        ; 00503f67
    MOV dword ptr [EBX + 0x124],EAX     ; 00503f6a
    PUSH EBX                            ; 00503f70
    MOV dword ptr [EBX + 0x120],EAX     ; 00503f71
    CALL core_netgame.cpp_FUN_00504270  ; 00503f77
        ;   XREF to: 00504270 (UNCONDITIONAL_CALL)  ; int core_netgame.cpp_FUN_00504270(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 00503f7c
    TEST EAX,EAX                        ; 00503f7f
    JNZ 0x00503f8a                      ; 00503f81
        ;   XREF to: 00503f8a (CONDITIONAL_JUMP)  ; LAB_00503f8a
    ADD ESP,0x8                         ; 00503f83
    POP EDI                             ; 00503f86
    POP ESI                             ; 00503f87
    POP EBX                             ; 00503f88
    RET                                 ; 00503f89
    MOV dword ptr [EBX + 0x4],0x1       ; 00503f8a
        ;   Label: LAB_00503f8a
    MOV EAX,0x1                         ; 00503f91
    MOV dword ptr [EBX],0x1             ; 00503f96
    ADD ESP,0x8                         ; 00503f9c
    POP EDI                             ; 00503f9f
    POP ESI                             ; 00503fa0
    POP EBX                             ; 00503fa1
    RET                                 ; 00503fa2

