; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trisock_cpp_createNetworkAddr_FUN_00548d30(SNetworkAddr *dest_addr,uint32_t *ip_address_ptr,uint16_t port)
;
; Parameters:
; SNetworkAddr *   Stack[0x4]:4   dest_addr
; uint32_t *       Stack[0x8]:4   ip_address_ptr
; uint16_t         Stack[0xc]:2   port
;
; XREF[3]:
;   core_netgame.cpp_CNetGame_initializeNetworkToHost_FUN_004e99f0 at 004e9a45
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_004e9a90 at 004e9ad7
;   core_netgame.cpp_CNetGame_processPacket_FUN_004ea830 at 004eb0f6
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00548d30
        ;   Label: support_trisock.cpp_createNetworkAddr_FUN_00548d30
    MOV EDX,dword ptr [ESP + 0x8]       ; 00548d34
    MOV EDX,dword ptr [EDX]             ; 00548d38
    MOV dword ptr [EAX],EDX             ; 00548d3a
    MOV EDX,dword ptr [ESP + 0xc]       ; 00548d3c
    MOV word ptr [EAX + 0x4],DX         ; 00548d40
    RET                                 ; 00548d44

