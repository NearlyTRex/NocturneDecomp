; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl support_trisock_cpp_getIPAddress_FUN_0056f6f0(SNetworkAddr *net_addr)
;
; Parameters:
; SNetworkAddr *   Stack[0x4]:4   net_addr
;
; XREF[1]:
;   support_trisock.cpp_buildSockaddrIn_FUN_0056f7c0 at 0056f7e6
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056f6f0
        ;   Label: support_trisock.cpp_getIPAddress_FUN_0056f6f0
    MOV EAX,dword ptr [EAX]             ; 0056f6f4
    RET                                 ; 0056f6f6

