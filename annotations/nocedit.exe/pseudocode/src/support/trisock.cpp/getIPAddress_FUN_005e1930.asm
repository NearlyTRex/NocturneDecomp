; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint __cdecl support_trisock_cpp_getIPAddress_FUN_005e1930(SNetworkAddr *net_addr)
;
; Parameters:
; SNetworkAddr *   Stack[0x4]:4   net_addr
;
; XREF[1]:
;   support_trisock.cpp_buildSockaddrIn_FUN_005e19d0 at 005e19f6
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005e1930
        ;   Label: support_trisock.cpp_getIPAddress_FUN_005e1930
    MOV EAX,dword ptr [EAX]             ; 005e1934
    RET                                 ; 005e1936

