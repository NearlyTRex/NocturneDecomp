; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_CSocket_setSocketBlocking_FUN_0056fd60(CSocket *this_ptr,int blocking_mode)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   blocking_mode
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_initializeNetwork_FUN_00504270 at 005042ae
;
; Called Functions:
;   crt_wsock32.c_ioctlsocket
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0056fd60
        ;   Label: support_trisock.cpp_CSocket_setSocketBlocking_FUN_0056fd60
    CMP dword ptr [ESP + 0xc],0x0       ; 0056fd63
    SETZ AL                             ; 0056fd68
    AND EAX,0xff                        ; 0056fd6b
    MOV dword ptr [ESP],EAX             ; 0056fd70
    MOV EAX,ESP                         ; 0056fd73
    PUSH EAX                            ; 0056fd75
    MOV EAX,dword ptr [ESP + 0xc]       ; 0056fd76
    PUSH 0x8004667e                     ; 0056fd7a
    MOV ECX,dword ptr [EAX]             ; 0056fd7f
    PUSH ECX                            ; 0056fd81
    CALL crt_wsock32.c_ioctlsocket      ; 0056fd82
        ;   XREF to: 005b257a (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_ioctlsocket(_SOCKET s, long cmd, uint * argp)
    TEST EAX,EAX                        ; 0056fd87
    SETZ AL                             ; 0056fd89
    AND EAX,0xff                        ; 0056fd8c
    ADD ESP,0x4                         ; 0056fd91
    RET                                 ; 0056fd94

