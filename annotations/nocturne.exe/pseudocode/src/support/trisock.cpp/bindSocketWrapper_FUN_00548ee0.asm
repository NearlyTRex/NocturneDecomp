; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_trisock_cpp_bindSocketWrapper_FUN_00548ee0(undefined4 param_1)
;
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_dtor_FUN_004e98f0 at 004e98fc
;
; Called Functions:
;   support_trisock.cpp_bindAndInvalidateSocket_FUN_00549110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548ee0
        ;   Label: support_trisock.cpp_bindSocketWrapper_FUN_00548ee0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00548ee1
    PUSH EBX                            ; 00548ee5
    CALL support_trisock.cpp_bindAndInvalidateSocket_FUN_00549110 ; 00548ee6
        ;   XREF to: 00549110 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_bindAndInvalidateSocket_FUN_00549110()
    ADD ESP,0x4                         ; 00548eeb
    MOV EAX,EBX                         ; 00548eee
    POP EBX                             ; 00548ef0
    RET                                 ; 00548ef1

