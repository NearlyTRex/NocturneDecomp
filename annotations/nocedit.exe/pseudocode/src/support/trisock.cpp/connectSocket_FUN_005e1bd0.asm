; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int support_trisock.cpp_connectSocket_FUN_005e1bd0(SOCKET * socket_handle, SNetworkAddr * dest_addr)
;
; Parameters:
; SOCKET *         Stack[0x4]:4   socket_handle
; SNetworkAddr *   Stack[0x8]:4   dest_addr
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x18]:1  local_18
;
; Called Functions:
;   crt_wsock32.c_connect
;   support_trisock.cpp_buildSockaddrIn_FUN_005e19d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005e1bd0
        ;   Label: support_trisock.cpp_connectSocket_FUN_005e1bd0
    PUSH EDI                            ; 005e1bd1
    SUB ESP,0x20                        ; 005e1bd2
    MOV EDX,dword ptr [ESP + 0x30]      ; 005e1bd5
    PUSH EDX                            ; 005e1bd9
    LEA ESI,[ESP + 0x14]                ; 005e1bda
    CALL support_trisock.cpp_buildSockaddrIn_FUN_005e19d0 ; 005e1bde | SOCKADDR_IN * support_trisock.cpp_buildSockaddrIn_FUN_005e19d0(SNetworkAddr * net_addr, SOCKADDR_IN * dest_buffer)
        ;   XREF to: 005e19d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e1be3
    MOV EDI,ESP                         ; 005e1be6
    PUSH 0x10                           ; 005e1be8
    LEA EAX,[ESP + 0x4]                 ; 005e1bea
    LEA ESI,[ESP + 0x14]                ; 005e1bee
    PUSH EAX                            ; 005e1bf2
    MOV EAX,dword ptr [ESP + 0x34]      ; 005e1bf3
    MOVSD ES:EDI,ESI                    ; 005e1bf7
    MOVSD ES:EDI,ESI                    ; 005e1bf8
    MOVSD ES:EDI,ESI                    ; 005e1bf9
    MOVSD ES:EDI,ESI                    ; 005e1bfa
    MOV ECX,dword ptr [EAX]             ; 005e1bfb
    PUSH ECX                            ; 005e1bfd
    CALL crt_wsock32.c_connect          ; 005e1bfe | int crt_wsock32.c_connect(SOCKET s, SOCKADDR * name, int namelen)
        ;   XREF to: 00610f1c (UNCONDITIONAL_CALL)
    TEST EAX,EAX                        ; 005e1c03
    SETZ AL                             ; 005e1c05
    AND EAX,0xff                        ; 005e1c08
    ADD ESP,0x20                        ; 005e1c0d
    POP EDI                             ; 005e1c10
    POP ESI                             ; 005e1c11
    RET                                 ; 005e1c12

