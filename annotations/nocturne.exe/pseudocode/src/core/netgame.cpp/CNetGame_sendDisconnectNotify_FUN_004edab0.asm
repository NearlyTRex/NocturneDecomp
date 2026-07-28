; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_004edab0(CNetGame *this_ptr,SNetworkAddr *dest_addr,int payload)
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
;   core_netgame.cpp_CNetGame_disconnect_FUN_004e9e90 at 004ea0eb
;   core_netgame.cpp_CNetGame_processPacket_FUN_004ea830 at 004eab19
;
; Called Functions:
;   core_netgame.cpp_CNetGame_sendPacket_FUN_004eb3c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004edab0
        ;   Label: core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_004edab0
    SUB ESP,0xc                         ; 004edab1
    MOV byte ptr [ESP + 0x4],0xd        ; 004edab4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004edab9
    MOV dword ptr [ESP + 0x5],EAX       ; 004edabd
    MOV EAX,ESP                         ; 004edac1
    PUSH EAX                            ; 004edac3
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004edac4
    PUSH ECX                            ; 004edac8
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004edac9
    MOV EDX,0x9                         ; 004edacd
    PUSH EBX                            ; 004edad2
    MOV dword ptr [ESP + 0xc],EDX       ; 004edad3
    CALL core_netgame.cpp_CNetGame_sendPacket_FUN_004eb3c0 ; 004edad7
        ;   XREF to: 004eb3c0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendPacket_FUN_004eb3c0(CNetGame * this_ptr, SNetworkAddr * dest_addr, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 004edadc
    ADD ESP,0xc                         ; 004edadf
    POP EBX                             ; 004edae2
    RET                                 ; 004edae3

