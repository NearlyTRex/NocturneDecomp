; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSocket * __cdecl support_trisock_cpp_CSocket_ctor_FUN_0059c8e0(CSocket *this_ptr)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_netgame.cpp_CNetGame_ctor_FUN_0052c470 at 0052c48f
;   support_trisock.cpp_FUN_0059cf00 at 0059cfc4
;   support_trisock.cpp_FUN_0059e040 at 0059e04c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059c8e0
        ;   Label: support_trisock.cpp_CSocket_ctor_FUN_0059c8e0
    MOV dword ptr [EAX],0xffffffff      ; 0059c8e4
    RET                                 ; 0059c8ea

