; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_005306d0(CNetGame *this_ptr,SNetworkAddr *dest_addr,int payload)
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
;   core_netgame.cpp_CNetGame_disconnect_FUN_0052cab0 at 0052cd0b
;   core_netgame.cpp_FUN_0052d450 at 0052d739
;
; Called Functions:
;   core_netgame.cpp_CNetGame_sendPacket_FUN_0052dfc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005306d0
        ;   Label: core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_005306d0
    SUB ESP,0xc                         ; 005306d1
    MOV byte ptr [ESP + 0x4],0xd        ; 005306d4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005306d9
    MOV dword ptr [ESP + 0x5],EAX       ; 005306dd
    MOV EAX,ESP                         ; 005306e1
    PUSH EAX                            ; 005306e3
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005306e4
    PUSH ECX                            ; 005306e8
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005306e9
    MOV EDX,0x9                         ; 005306ed
    PUSH EBX                            ; 005306f2
    MOV dword ptr [ESP + 0xc],EDX       ; 005306f3
    CALL core_netgame.cpp_CNetGame_sendPacket_FUN_0052dfc0 ; 005306f7
        ;   XREF to: 0052dfc0 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendPacket_FUN_0052dfc0(CNetGame * this_ptr, SNetworkAddr * dest_addr, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 005306fc
    ADD ESP,0xc                         ; 005306ff
    POP EBX                             ; 00530702
    RET                                 ; 00530703

