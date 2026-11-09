; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CNetGame * __cdecl core_netgame_cpp_CNetGame_dtor_FUN_00503e00(CNetGame *this_ptr,uint flags)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   support_trisock.cpp_CSocket_dtor_FUN_0056f8e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00503e00
        ;   Label: core_netgame.cpp_CNetGame_dtor_FUN_00503e00
    PUSH 0x0                            ; 00503e04
    ADD EAX,0x180                       ; 00503e06
    PUSH EAX                            ; 00503e0b
    CALL support_trisock.cpp_CSocket_dtor_FUN_0056f8e0 ; 00503e0c
        ;   XREF to: 0056f8e0 (UNCONDITIONAL_CALL)  ; CSocket * support_trisock.cpp_CSocket_dtor_FUN_0056f8e0(CSocket * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00503e11
    SUB EAX,0x180                       ; 00503e14
    RET                                 ; 00503e19

