; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl support_trisock_cpp_createNetworkAddr_FUN_005e1940(SNetworkAddr *dest_addr,uint32_t *ip_address_ptr,uint16_t port)
;
; Parameters:
; SNetworkAddr *   Stack[0x4]:4   dest_addr
; uint32_t *       Stack[0x8]:4   ip_address_ptr
; uint16_t         Stack[0xc]:2   port
;
; XREF[3]:
;   core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0 at 00540f66
;   core_netgame.cpp_CNetGame_initializeNetworkToHost_FUN_0053f860 at 0053f8b5
;   core_netgame.cpp_CNetGame_initializeNetworkToJoin_FUN_0053f900 at 0053f947
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005e1940
        ;   Label: support_trisock.cpp_createNetworkAddr_FUN_005e1940
    MOV EDX,dword ptr [ESP + 0x8]       ; 005e1944
    MOV EDX,dword ptr [EDX]             ; 005e1948
    MOV dword ptr [EAX],EDX             ; 005e194a
    MOV EDX,dword ptr [ESP + 0xc]       ; 005e194c
    MOV word ptr [EAX + 0x4],DX         ; 005e1950
    RET                                 ; 005e1954

