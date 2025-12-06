; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int support_trisock.cpp_setSocketBroadcast_FUN_005e1e90(SOCKET * socket_handle, int broadcast_flag)
;
; Parameters:
; SOCKET *         Stack[0x4]:4   socket_handle
; int              Stack[0x8]:4   broadcast_flag
;
; Called Functions:
;   crt_wsock32.c_setsockopt
;
; *****************************************************************************

section .text

    PUSH 0x4                            ; 005e1e90
        ;   Label: support_trisock.cpp_setSocketBroadcast_FUN_005e1e90
    LEA EAX,[ESP + 0xc]                 ; 005e1e92
    PUSH EAX                            ; 005e1e96
    PUSH 0x20                           ; 005e1e97
    MOV EAX,dword ptr [ESP + 0x10]      ; 005e1e99
    PUSH 0xffff                         ; 005e1e9d
    MOV EDX,dword ptr [EAX]             ; 005e1ea2
    PUSH EDX                            ; 005e1ea4
    CALL crt_wsock32.c_setsockopt       ; 005e1ea5 | int crt_wsock32.c_setsockopt(SOCKET s, int level, int optname, char * optval, ...)
        ;   XREF to: 00610ee0 (UNCONDITIONAL_CALL)
    TEST EAX,EAX                        ; 005e1eaa
    SETZ AL                             ; 005e1eac
    AND EAX,0xff                        ; 005e1eaf
    RET                                 ; 005e1eb4

