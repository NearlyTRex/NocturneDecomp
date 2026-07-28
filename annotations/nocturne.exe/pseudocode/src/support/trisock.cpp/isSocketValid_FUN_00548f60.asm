; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_isSocketValid_FUN_00548f60(_SOCKET *socket_handle)
;
; Parameters:
; _SOCKET *        Stack[0x4]:4   socket_handle
;
; XREF[3]:
;   core_netgame.cpp_CNetGame_flushIncomingPackets_FUN_004ea6e0 at 004ea6ed
;   core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740 at 004ea782
;   support_trisock.cpp_bindAndInvalidateSocket_FUN_00549110 at 00549116
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00548f60
        ;   Label: support_trisock.cpp_isSocketValid_FUN_00548f60
    CMP dword ptr [EAX],-0x1            ; 00548f64
    SETNZ AL                            ; 00548f67
    AND EAX,0xff                        ; 00548f6a
    RET                                 ; 00548f6f

