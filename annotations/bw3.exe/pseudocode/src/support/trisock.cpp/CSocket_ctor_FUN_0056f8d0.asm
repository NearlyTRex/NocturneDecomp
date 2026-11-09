; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSocket * __cdecl support_trisock_cpp_CSocket_ctor_FUN_0056f8d0(CSocket *this_ptr)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_ctor_FUN_00503d70 at 00503d8f
;   support_trisock.cpp_FUN_00571030 at 0057103c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056f8d0
        ;   Label: support_trisock.cpp_CSocket_ctor_FUN_0056f8d0
    MOV dword ptr [EAX],0xffffffff      ; 0056f8d4
    RET                                 ; 0056f8da

