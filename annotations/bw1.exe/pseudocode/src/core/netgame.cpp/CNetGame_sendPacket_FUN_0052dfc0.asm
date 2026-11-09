; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_sendPacket_FUN_0052dfc0(CNetGame *this_ptr,SNetworkAddr *dest_addr,SNetPacketHeader *packet)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; SNetworkAddr *   Stack[0x8]:4   dest_addr
; SNetPacketHeader * Stack[0xc]:4   packet
;
; XREF[4]:
;   core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_005306d0 at 005306f7
;   core_netgame.cpp_CNetGame_send_FUN_0052df50 at 0052df81
;   core_netgame.cpp_FUN_0052d450 at 0052d613
;   core_netgame.cpp_FUN_0052ed80 at 0052f0c3
;
; Called Functions:
;   support_trisock.cpp_CSocket_sendSocketData_FUN_0059cbc0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 0052dfc0
        ;   Label: core_netgame.cpp_CNetGame_sendPacket_FUN_0052dfc0
    MOV ECX,dword ptr [ESP + 0x8]       ; 0052dfc4
    MOV EAX,dword ptr [EDX]             ; 0052dfc8
    PUSH ECX                            ; 0052dfca
    SUB EAX,0x4                         ; 0052dfcb
    PUSH EAX                            ; 0052dfce
    LEA EAX,[EDX + 0x4]                 ; 0052dfcf
    PUSH EAX                            ; 0052dfd2
    MOV EAX,dword ptr [ESP + 0x10]      ; 0052dfd3
    ADD EAX,0x178                       ; 0052dfd7
    PUSH EAX                            ; 0052dfdc
    CALL support_trisock.cpp_CSocket_sendSocketData_FUN_0059cbc0 ; 0052dfdd
        ;   XREF to: 0059cbc0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_sendSocketData_FUN_0059cbc0(CSocket * this_ptr, char * buffer, int length, SNetworkAddr * dest_addr)
    ADD ESP,0x10                        ; 0052dfe2
    RET                                 ; 0052dfe5

