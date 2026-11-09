; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00507f90(CNetGame *this_ptr,SNetworkAddr *dest_addr,int payload)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; SNetworkAddr *   Stack[0x8]:4   dest_addr
; int              Stack[0xc]:4   payload
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined1       Stack[-0xc]:1  local_c
; undefined4       Stack[-0xb]:4  local_b
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_disconnect_FUN_005043b0 at 00504612
;   core_netgame.cpp_FUN_00504d60 at 00505034
;
; Called Functions:
;   core_netgame.cpp_CNetGame_sendPacket_FUN_005058d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00507f90
        ;   Label: core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00507f90
    SUB ESP,0xc                         ; 00507f91
    MOV byte ptr [ESP + 0x4],0xd        ; 00507f94
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00507f99
    MOV dword ptr [ESP + 0x5],EAX       ; 00507f9d
    MOV EAX,ESP                         ; 00507fa1
    PUSH EAX                            ; 00507fa3
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00507fa4
    PUSH ECX                            ; 00507fa8
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00507fa9
    MOV EDX,0x9                         ; 00507fad
    PUSH EBX                            ; 00507fb2
    MOV dword ptr [ESP + 0xc],EDX       ; 00507fb3
    CALL core_netgame.cpp_CNetGame_sendPacket_FUN_005058d0 ; 00507fb7
        ;   XREF to: 005058d0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendPacket_FUN_005058d0(CNetGame * this_ptr, SNetworkAddr * dest_addr, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 00507fbc
    ADD ESP,0xc                         ; 00507fbf
    POP EBX                             ; 00507fc2
    RET                                 ; 00507fc3

