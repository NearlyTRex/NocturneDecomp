; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CNetGame * __cdecl core_netgame_cpp_CNetGame_dtor_FUN_0050b320(CNetGame *this_ptr,uint flags)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   support_trisock.cpp_CSocket_dtor_FUN_00579010
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0050b320
        ;   Label: core_netgame.cpp_CNetGame_dtor_FUN_0050b320
    PUSH 0x0                            ; 0050b324
    ADD EAX,0x180                       ; 0050b326
    PUSH EAX                            ; 0050b32b
    CALL support_trisock.cpp_CSocket_dtor_FUN_00579010 ; 0050b32c
        ;   XREF to: 00579010 (UNCONDITIONAL_CALL)  ; CSocket * support_trisock.cpp_CSocket_dtor_FUN_00579010(CSocket * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0050b331
    SUB EAX,0x180                       ; 0050b334
    RET                                 ; 0050b339

