; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_setSocketBlocking_FUN_005e1e50(_SOCKET *socket_handle,int blocking_mode)
;
; Parameters:
; _SOCKET *        Stack[0x4]:4   socket_handle
; int              Stack[0x8]:4   blocking_mode
; Local Variables:
; uint             Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_initializeNetwork_FUN_0053fbc0 at 0053fbfe
;
; Called Functions:
;   crt_wsock32.c_ioctlsocket
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005e1e50
        ;   Label: support_trisock.cpp_setSocketBlocking_FUN_005e1e50
    CMP dword ptr [ESP + 0xc],0x0       ; 005e1e53
    SETZ AL                             ; 005e1e58
    AND EAX,0xff                        ; 005e1e5b
    MOV dword ptr [ESP],EAX             ; 005e1e60
    MOV EAX,ESP                         ; 005e1e63
    PUSH EAX                            ; 005e1e65
    MOV EAX,dword ptr [ESP + 0xc]       ; 005e1e66
    PUSH 0x8004667e                     ; 005e1e6a
    MOV ECX,dword ptr [EAX]             ; 005e1e6f
    PUSH ECX                            ; 005e1e71
    CALL crt_wsock32.c_ioctlsocket      ; 005e1e72
        ;   XREF to: 00610ee6 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_ioctlsocket(_SOCKET s, long cmd, uint * argp)
    TEST EAX,EAX                        ; 005e1e77
    SETZ AL                             ; 005e1e79
    AND EAX,0xff                        ; 005e1e7c
    ADD ESP,0x4                         ; 005e1e81
    RET                                 ; 005e1e84

