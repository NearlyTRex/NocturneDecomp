; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_trisock_cpp_invalidateSocket_FUN_00548ed0(undefined4 *param_1)
;
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_ctor_FUN_004e9860 at 004e987f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00548ed0
        ;   Label: support_trisock.cpp_invalidateSocket_FUN_00548ed0
    MOV dword ptr [EAX],0xffffffff      ; 00548ed4
    RET                                 ; 00548eda

