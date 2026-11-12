; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSocket * __cdecl support_trisock_cpp_CSocket_ctor_FUN_00579000(CSocket *this_ptr)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_netgame.cpp_CNetGame_ctor_FUN_0050b290 at 0050b2af
;   support_trisock.cpp_FUN_00579890 at 00579954
;   support_trisock.cpp_FUN_0057aa00 at 0057aa0c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00579000
        ;   Label: support_trisock.cpp_CSocket_ctor_FUN_00579000
    MOV dword ptr [EAX],0xffffffff      ; 00579004
    RET                                 ; 0057900a

