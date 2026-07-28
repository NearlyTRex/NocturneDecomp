; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_bindAndInvalidateSocket_FUN_00549110(_SOCKET *socket_handle)
;
; Parameters:
; _SOCKET *        Stack[0x4]:4   socket_handle
;
; XREF[5]:
;   core_netgame.cpp_CNetGame_initializeNetwork_FUN_004e9d50 at 004e9d72
;   core_netgame.cpp_CNetGame_shutdown_FUN_004e99c0 at 004e99d9
;   support_trisock.cpp_bindSocketWrapper_FUN_00548ee0 at 00548ee6
;   support_trisock.cpp_createSocket_FUN_00548f00 at 00548f06
;   support_trisock.cpp_createUDPSocket_FUN_00548f30 at 00548f36
;
; Called Functions:
;   Ordinal_3
;   support_trisock.cpp_isSocketValid_FUN_00548f60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00549110
        ;   Label: support_trisock.cpp_bindAndInvalidateSocket_FUN_00549110
    MOV EBX,dword ptr [ESP + 0x8]       ; 00549111
    PUSH EBX                            ; 00549115
    CALL support_trisock.cpp_isSocketValid_FUN_00548f60 ; 00549116
        ;   XREF to: 00548f60 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_isSocketValid_FUN_00548f60(_SOCKET * socket_handle)
    ADD ESP,0x4                         ; 0054911b
    TEST EAX,EAX                        ; 0054911e
    JNZ 0x00549129                      ; 00549120
        ;   XREF to: 00549129 (CONDITIONAL_JUMP)  ; LAB_00549129
    MOV EAX,0x1                         ; 00549122
    POP EBX                             ; 00549127
    RET                                 ; 00549128
    MOV EDX,dword ptr [EBX]             ; 00549129
        ;   Label: LAB_00549129
    PUSH EDX                            ; 0054912b
    CALL Ordinal_3                      ; 0054912c
        ;   XREF to: 00574bd2 (UNCONDITIONAL_CALL)  ; undefined Ordinal_3()
    TEST EAX,EAX                        ; 00549131
    SETZ AL                             ; 00549133
    AND EAX,0xff                        ; 00549136
    MOV dword ptr [EBX],0xffffffff      ; 0054913b
    POP EBX                             ; 00549141
    RET                                 ; 00549142

