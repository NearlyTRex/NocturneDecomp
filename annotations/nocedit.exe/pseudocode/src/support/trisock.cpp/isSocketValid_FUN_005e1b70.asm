; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl support_trisock_cpp_isSocketValid_FUN_005e1b70(SSocketContext *socket_ctx)
;
; Parameters:
; SSocketContext * Stack[0x4]:4   socket_ctx
;
; XREF[3]:
;   core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0 at 005405f2
;   core_netgame.cpp_FUN_00540550 at 0054055d
;   support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20 at 005e1d26
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005e1b70
        ;   Label: support_trisock.cpp_isSocketValid_FUN_005e1b70
    CMP dword ptr [EAX],-0x1            ; 005e1b74
    SETNZ AL                            ; 005e1b77
    AND EAX,0xff                        ; 005e1b7a
    RET                                 ; 005e1b7f

