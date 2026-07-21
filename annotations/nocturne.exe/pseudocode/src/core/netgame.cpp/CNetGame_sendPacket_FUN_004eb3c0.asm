; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_sendPacket_FUN_004eb3c0(int param_1,undefined4 param_2,int *param_3)
;
;
; XREF[4]:
;   core_netgame.cpp_CNetGame_processPacket_FUN_004ea830 at 004ea9f3
;   core_netgame.cpp_CNetGame_removeChatOut_FUN_004ec180 at 004ec4c3
;   core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_004edab0 at 004edad7
;   core_netgame.cpp_CNetGame_send_FUN_004eb350 at 004eb381
;
; Called Functions:
;   support_trisock.cpp_performSocketOperation_FUN_00549090
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 004eb3c0
        ;   Label: core_netgame.cpp_CNetGame_sendPacket_FUN_004eb3c0
    MOV ECX,dword ptr [ESP + 0x8]       ; 004eb3c4
    MOV EAX,dword ptr [EDX]             ; 004eb3c8
    PUSH ECX                            ; 004eb3ca
    SUB EAX,0x4                         ; 004eb3cb
    PUSH EAX                            ; 004eb3ce
    LEA EAX,[EDX + 0x4]                 ; 004eb3cf
    PUSH EAX                            ; 004eb3d2
    MOV EAX,dword ptr [ESP + 0x10]      ; 004eb3d3
    ADD EAX,0x170                       ; 004eb3d7
    PUSH EAX                            ; 004eb3dc
    CALL support_trisock.cpp_performSocketOperation_FUN_00549090 ; 004eb3dd
        ;   XREF to: 00549090 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_performSocketOperation_FUN_00549090()
    ADD ESP,0x10                        ; 004eb3e2
    RET                                 ; 004eb3e5

