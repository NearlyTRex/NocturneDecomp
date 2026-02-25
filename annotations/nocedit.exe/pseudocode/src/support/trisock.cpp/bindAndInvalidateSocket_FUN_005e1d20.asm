; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_bindAndInvalidateSocket_FUN_005e1d20(_SOCKET *socket_handle)
;
; Parameters:
; _SOCKET *        Stack[0x4]:4   socket_handle
;
; XREF[5]:
;   core_netgame.cpp_CNetGame_FUN_0053f830 at 0053f849
;   core_netgame.cpp_CNetGame_initializeNetwork_FUN_0053fbc0 at 0053fbe2
;   support_trisock.cpp_bindSocketWrapper_FUN_005e1af0 at 005e1af6
;   support_trisock.cpp_createSocket_FUN_005e1b10 at 005e1b16
;   support_trisock.cpp_createUDPSocket_FUN_005e1b40 at 005e1b46
;
; Called Functions:
;   crt_wsock32.c_closesocket
;   support_trisock.cpp_isSocketValid_FUN_005e1b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e1d20
        ;   Label: support_trisock.cpp_bindAndInvalidateSocket_FUN_005e1d20
    MOV EBX,dword ptr [ESP + 0x8]       ; 005e1d21
    PUSH EBX                            ; 005e1d25
    CALL support_trisock.cpp_isSocketValid_FUN_005e1b70 ; 005e1d26
        ;   XREF to: 005e1b70 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_isSocketValid_FUN_005e1b70(_SOCKET * socket_handle)
    ADD ESP,0x4                         ; 005e1d2b
    TEST EAX,EAX                        ; 005e1d2e
    JNZ 0x005e1d39                      ; 005e1d30
        ;   XREF to: 005e1d39 (CONDITIONAL_JUMP)  ; LAB_005e1d39
    MOV EAX,0x1                         ; 005e1d32
    POP EBX                             ; 005e1d37
    RET                                 ; 005e1d38
    MOV EDX,dword ptr [EBX]             ; 005e1d39
        ;   Label: LAB_005e1d39
    PUSH EDX                            ; 005e1d3b
    CALL crt_wsock32.c_closesocket      ; 005e1d3c
        ;   XREF to: 00610efe (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_closesocket(_SOCKET s)
    TEST EAX,EAX                        ; 005e1d41
    SETZ AL                             ; 005e1d43
    AND EAX,0xff                        ; 005e1d46
    MOV dword ptr [EBX],0xffffffff      ; 005e1d4b
    POP EBX                             ; 005e1d51
    RET                                 ; 005e1d52

