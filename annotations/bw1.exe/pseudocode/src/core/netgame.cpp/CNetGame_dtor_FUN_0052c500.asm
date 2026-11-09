; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CNetGame * __cdecl core_netgame_cpp_CNetGame_dtor_FUN_0052c500(CNetGame *this_ptr,uint flags)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   support_trisock.cpp_CSocket_dtor_FUN_0059c8f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0052c500
        ;   Label: core_netgame.cpp_CNetGame_dtor_FUN_0052c500
    PUSH 0x0                            ; 0052c504
    ADD EAX,0x178                       ; 0052c506
    PUSH EAX                            ; 0052c50b
    CALL support_trisock.cpp_CSocket_dtor_FUN_0059c8f0 ; 0052c50c
        ;   XREF to: 0059c8f0 (UNCONDITIONAL_CALL)  ; CSocket * support_trisock.cpp_CSocket_dtor_FUN_0059c8f0(CSocket * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0052c511
    SUB EAX,0x178                       ; 0052c514
    RET                                 ; 0052c519

