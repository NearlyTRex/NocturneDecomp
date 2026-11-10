; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_CSocket_setSocketBlocking_FUN_0059cd70(CSocket *this_ptr,int blocking_mode)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   blocking_mode
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_initializeNetwork_FUN_0052c970 at 0052c9ae
;
; Called Functions:
;   crt_wsock32.c_ioctlsocket
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0059cd70
        ;   Label: support_trisock.cpp_CSocket_setSocketBlocking_FUN_0059cd70
    CMP dword ptr [ESP + 0xc],0x0       ; 0059cd73
    SETZ AL                             ; 0059cd78
    AND EAX,0xff                        ; 0059cd7b
    MOV dword ptr [ESP],EAX             ; 0059cd80
    MOV EAX,ESP                         ; 0059cd83
    PUSH EAX                            ; 0059cd85
    MOV EAX,dword ptr [ESP + 0xc]       ; 0059cd86
    PUSH 0x8004667e                     ; 0059cd8a
    MOV ECX,dword ptr [EAX]             ; 0059cd8f
    PUSH ECX                            ; 0059cd91
    CALL crt_wsock32.c_ioctlsocket      ; 0059cd92
        ;   XREF to: 005cf7ea (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_ioctlsocket(_SOCKET s, long cmd, uint * argp)
    TEST EAX,EAX                        ; 0059cd97
    SETZ AL                             ; 0059cd99
    AND EAX,0xff                        ; 0059cd9c
    ADD ESP,0x4                         ; 0059cda1
    RET                                 ; 0059cda4

