; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_sendPacket_FUN_005058d0(CNetGame *this_ptr,SNetworkAddr *dest_addr,SNetPacketHeader *packet)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; SNetworkAddr *   Stack[0x8]:4   dest_addr
; SNetPacketHeader * Stack[0xc]:4   packet
;
; XREF[4]:
;   core_netgame.cpp_CNetGame_processPacket_FUN_00504d60 at 00504f15
;   core_netgame.cpp_CNetGame_removeChatOut_FUN_00506670 at 005069b9
;   core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00507f90 at 00507fb7
;   core_netgame.cpp_CNetGame_send_FUN_00505870 at 00505898
;
; Called Functions:
;   support_trisock.cpp_CSocket_sendSocketData_FUN_0056fbb0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 005058d0
        ;   Label: core_netgame.cpp_CNetGame_sendPacket_FUN_005058d0
    MOV ECX,dword ptr [ESP + 0x8]       ; 005058d4
    MOV EAX,dword ptr [EDX]             ; 005058d8
    PUSH ECX                            ; 005058da
    SUB EAX,0x4                         ; 005058db
    PUSH EAX                            ; 005058de
    LEA EAX,[EDX + 0x4]                 ; 005058df
    PUSH EAX                            ; 005058e2
    MOV EAX,dword ptr [ESP + 0x10]      ; 005058e3
    ADD EAX,0x180                       ; 005058e7
    PUSH EAX                            ; 005058ec
    CALL support_trisock.cpp_CSocket_sendSocketData_FUN_0056fbb0 ; 005058ed
        ;   XREF to: 0056fbb0 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_sendSocketData_FUN_0056fbb0(CSocket * this_ptr, char * buffer, int length, SNetworkAddr * dest_addr)
    ADD ESP,0x10                        ; 005058f2
    RET                                 ; 005058f5

