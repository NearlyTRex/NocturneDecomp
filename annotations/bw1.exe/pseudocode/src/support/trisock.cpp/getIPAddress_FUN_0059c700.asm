; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl support_trisock_cpp_getIPAddress_FUN_0059c700(SNetworkAddr *net_addr)
;
; Parameters:
; SNetworkAddr *   Stack[0x4]:4   net_addr
;
; XREF[1]:
;   support_trisock.cpp_buildSockaddrIn_FUN_0059c7d0 at 0059c7f6
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059c700
        ;   Label: support_trisock.cpp_getIPAddress_FUN_0059c700
    MOV EAX,dword ptr [EAX]             ; 0059c704
    RET                                 ; 0059c706

