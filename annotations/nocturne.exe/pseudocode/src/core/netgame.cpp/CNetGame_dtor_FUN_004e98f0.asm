; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _SOCKET * core_netgame_cpp_CNetGame_dtor_FUN_004e98f0(int param_1)
;
;
; Called Functions:
;   support_trisock.cpp_bindSocketWrapper_FUN_00548ee0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e98f0
        ;   Label: core_netgame.cpp_CNetGame_dtor_FUN_004e98f0
    PUSH 0x0                            ; 004e98f4
    ADD EAX,0x170                       ; 004e98f6
    PUSH EAX                            ; 004e98fb
    CALL support_trisock.cpp_bindSocketWrapper_FUN_00548ee0 ; 004e98fc
        ;   XREF to: 00548ee0 (UNCONDITIONAL_CALL)  ; _SOCKET * support_trisock.cpp_bindSocketWrapper_FUN_00548ee0(_SOCKET * socket_handle, int flags)
    ADD ESP,0x8                         ; 004e9901
    SUB EAX,0x170                       ; 004e9904
    RET                                 ; 004e9909

