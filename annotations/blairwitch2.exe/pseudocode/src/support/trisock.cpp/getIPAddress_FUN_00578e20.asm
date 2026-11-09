; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl support_trisock_cpp_getIPAddress_FUN_00578e20(SNetworkAddr *net_addr)
;
; Parameters:
; SNetworkAddr *   Stack[0x4]:4   net_addr
;
; XREF[1]:
;   support_trisock.cpp_buildSockaddrIn_FUN_00578ef0 at 00578f16
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00578e20
        ;   Label: support_trisock.cpp_getIPAddress_FUN_00578e20
    MOV EAX,dword ptr [EAX]             ; 00578e24
    RET                                 ; 00578e26

