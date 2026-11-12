; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trisock_cpp_createNetworkAddr_FUN_0056f730(SNetworkAddr *dest_addr,uint32_t *ip_address_ptr,uint16_t port)
;
; Parameters:
; SNetworkAddr *   Stack[0x4]:4   dest_addr
; uint32_t *       Stack[0x8]:4   ip_address_ptr
; uint16_t         Stack[0xc]:2   port
;
; XREF[4]:
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_00503fb0 at 00503ff9
;   core_netgame.cpp_CNetGame_processPacket_FUN_00504d60 at 0050560c
;   core_netgame.cpp_FUN_00503efc at 00503f58
;   support_trisock.cpp_FUN_0056fef0 at 0056ffd3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056f730
        ;   Label: support_trisock.cpp_createNetworkAddr_FUN_0056f730
    MOV EDX,dword ptr [ESP + 0x8]       ; 0056f734
    MOV dword ptr [EAX],EDX             ; 0056f738
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056f73a
    MOV word ptr [EAX + 0x4],DX         ; 0056f73e
    RET                                 ; 0056f742

