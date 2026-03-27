; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_00543930(CNetGame *this_ptr,SNetworkAddr *dest_addr,int payload)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; SNetworkAddr *   Stack[0x8]:4   dest_addr
; int              Stack[0xc]:4   payload
; Local Variables:
; SNetPacket_Simple Stack[-0x10]:9  local_10
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_disconnect_FUN_0053fd00 at 00540191
;   core_netgame.cpp_CNetGame_processPacket_FUN_005406a0 at 00540d22
;
; Called Functions:
;   core_netgame.cpp_CNetGame_sendPacket_FUN_00541230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543930
        ;   Label: core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_00543930
    SUB ESP,0xc                         ; 00543931
    MOV byte ptr [ESP + 0x4],0xd        ; 00543934
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00543939
    MOV dword ptr [ESP + 0x5],EAX       ; 0054393d
    MOV EAX,ESP                         ; 00543941
    PUSH EAX                            ; 00543943
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00543944
    PUSH ECX                            ; 00543948
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00543949
    MOV EDX,0x9                         ; 0054394d
    PUSH EBX                            ; 00543952
    MOV dword ptr [ESP + 0xc],EDX       ; 00543953
    CALL core_netgame.cpp_CNetGame_sendPacket_FUN_00541230 ; 00543957
        ;   XREF to: 00541230 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_sendPacket_FUN_00541230(CNetGame * this_ptr, SNetworkAddr * dest_addr, SNetPacketHeader * packet)
    ADD ESP,0xc                         ; 0054395c
    ADD ESP,0xc                         ; 0054395f
    POP EBX                             ; 00543962
    RET                                 ; 00543963

