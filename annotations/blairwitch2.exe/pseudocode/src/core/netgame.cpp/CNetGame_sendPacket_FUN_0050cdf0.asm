; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_sendPacket_FUN_0050cdf0(CNetGame *this_ptr,SNetworkAddr *dest_addr,SNetPacketHeader *packet)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; SNetworkAddr *   Stack[0x8]:4   dest_addr
; SNetPacketHeader * Stack[0xc]:4   packet
;
; XREF[4]:
;   core_netgame.cpp_CNetGame_processPacket_FUN_0050c280 at 0050c435
;   core_netgame.cpp_CNetGame_removeChatOut_FUN_0050db90 at 0050ded9
;   core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_0050f4b0 at 0050f4d7
;   core_netgame.cpp_CNetGame_send_FUN_0050cd90 at 0050cdb8
;
; Called Functions:
;   support_trisock.cpp_CSocket_sendSocketData_FUN_005792e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 0050cdf0
        ;   Label: core_netgame.cpp_CNetGame_sendPacket_FUN_0050cdf0
    MOV ECX,dword ptr [ESP + 0x8]       ; 0050cdf4
    MOV EAX,dword ptr [EDX]             ; 0050cdf8
    PUSH ECX                            ; 0050cdfa
    SUB EAX,0x4                         ; 0050cdfb
    PUSH EAX                            ; 0050cdfe
    LEA EAX,[EDX + 0x4]                 ; 0050cdff
    PUSH EAX                            ; 0050ce02
    MOV EAX,dword ptr [ESP + 0x10]      ; 0050ce03
    ADD EAX,0x180                       ; 0050ce07
    PUSH EAX                            ; 0050ce0c
    CALL support_trisock.cpp_CSocket_sendSocketData_FUN_005792e0 ; 0050ce0d
        ;   XREF to: 005792e0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_sendSocketData_FUN_005792e0(CSocket * this_ptr, char * buffer, int length, SNetworkAddr * dest_addr)
    ADD ESP,0x10                        ; 0050ce12
    RET                                 ; 0050ce15

