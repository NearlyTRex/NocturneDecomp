; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_connectSocket_FUN_00548fc0(_SOCKET *socket_handle,SNetworkAddr *dest_addr)
;
; Parameters:
; _SOCKET *        Stack[0x4]:4   socket_handle
; SNetworkAddr *   Stack[0x8]:4   dest_addr
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x18]:1  local_18
;
; Called Functions:
;   crt_wsock32.c_connect
;   support_trisock.cpp_buildSockaddrIn_FUN_00548dc0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00548fc0
        ;   Label: support_trisock.cpp_connectSocket_FUN_00548fc0
    PUSH EDI                            ; 00548fc1
    SUB ESP,0x20                        ; 00548fc2
    MOV EDX,dword ptr [ESP + 0x30]      ; 00548fc5
    PUSH EDX                            ; 00548fc9
    LEA ESI,[ESP + 0x14]                ; 00548fca
    CALL support_trisock.cpp_buildSockaddrIn_FUN_00548dc0 ; 00548fce
        ;   XREF to: 00548dc0 (UNCONDITIONAL_CALL)  ; SOCKADDR_IN * support_trisock.cpp_buildSockaddrIn_FUN_00548dc0(SNetworkAddr * net_addr, SOCKADDR_IN * dest_buffer)
    ADD ESP,0x4                         ; 00548fd3
    MOV EDI,ESP                         ; 00548fd6
    PUSH 0x10                           ; 00548fd8
    LEA EAX,[ESP + 0x4]                 ; 00548fda
    LEA ESI,[ESP + 0x14]                ; 00548fde
    PUSH EAX                            ; 00548fe2
    MOV EAX,dword ptr [ESP + 0x34]      ; 00548fe3
    MOVSD ES:EDI,ESI                    ; 00548fe7
    MOVSD ES:EDI,ESI                    ; 00548fe8
    MOVSD ES:EDI,ESI                    ; 00548fe9
    MOVSD ES:EDI,ESI                    ; 00548fea
    MOV ECX,dword ptr [EAX]             ; 00548feb
    PUSH ECX                            ; 00548fed
    CALL crt_wsock32.c_connect          ; 00548fee
        ;   XREF to: 00574bf0 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_connect(_SOCKET s, SOCKADDR * name, int namelen)
    TEST EAX,EAX                        ; 00548ff3
    SETZ AL                             ; 00548ff5
    AND EAX,0xff                        ; 00548ff8
    ADD ESP,0x20                        ; 00548ffd
    POP EDI                             ; 00549000
    POP ESI                             ; 00549001
    RET                                 ; 00549002

