; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSocket * __cdecl support_trisock_cpp_CSocket_ctor_FUN_005e1ae0(CSocket *this_ptr)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_ctor_FUN_0053f6d0 at 0053f6ef
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005e1ae0
        ;   Label: support_trisock.cpp_CSocket_ctor_FUN_005e1ae0
    MOV dword ptr [EAX],0xffffffff      ; 005e1ae4
    RET                                 ; 005e1aea

