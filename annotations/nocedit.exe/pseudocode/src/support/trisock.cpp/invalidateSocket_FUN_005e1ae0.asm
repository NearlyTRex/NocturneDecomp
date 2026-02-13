; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SSocketContext * __cdecl support_trisock_cpp_invalidateSocket_FUN_005e1ae0(SSocketContext *socket_ctx)
;
; Parameters:
; SSocketContext * Stack[0x4]:4   socket_ctx
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_ctor_FUN_0053f6d0 at 0053f6ef
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005e1ae0
        ;   Label: support_trisock.cpp_invalidateSocket_FUN_005e1ae0
    MOV dword ptr [EAX],0xffffffff      ; 005e1ae4
    RET                                 ; 005e1aea

