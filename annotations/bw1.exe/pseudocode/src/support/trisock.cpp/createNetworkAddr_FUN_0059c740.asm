; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trisock_cpp_createNetworkAddr_FUN_0059c740(SNetworkAddr *dest_addr,uint32_t *ip_address_ptr,uint16_t port)
;
; Parameters:
; SNetworkAddr *   Stack[0x4]:4   dest_addr
; uint32_t *       Stack[0x8]:4   ip_address_ptr
; uint16_t         Stack[0xc]:2   port
;
; XREF[4]:
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_0052c6b0 at 0052c6f9
;   core_netgame.cpp_CNetGame_processPacket_FUN_0052d450 at 0052dcf1
;   core_netgame.cpp_FUN_0052c600 at 0052c658
;   support_trisock.cpp_FUN_0059cf00 at 0059cfe3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059c740
        ;   Label: support_trisock.cpp_createNetworkAddr_FUN_0059c740
    MOV EDX,dword ptr [ESP + 0x8]       ; 0059c744
    MOV dword ptr [EAX],EDX             ; 0059c748
    MOV EDX,dword ptr [ESP + 0xc]       ; 0059c74a
    MOV word ptr [EAX + 0x4],DX         ; 0059c74e
    RET                                 ; 0059c752

