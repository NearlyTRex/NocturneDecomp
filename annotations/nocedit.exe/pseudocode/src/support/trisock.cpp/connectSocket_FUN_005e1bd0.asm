; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_connectSocket_FUN_005e1bd0(_SOCKET *socket_handle,SNetworkAddr *dest_addr)
;
; Parameters:
; _SOCKET *        Stack[0x4]:4   socket_handle
; SNetworkAddr *   Stack[0x8]:4   dest_addr
; Local Variables:
; undefined4[1524] Stack[-0x1804]:6096  auStackY_1804
; SOCKADDR_IN      Stack[-0x28]:16  local_28
; SOCKADDR_IN      Stack[-0x18]:16  local_18
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
    CALL support_trisock.cpp_buildSockaddrIn_FUN_005e19d0 ; 005e1bde
        ;   XREF to: 005e19d0 (UNCONDITIONAL_CALL)  ; SOCKADDR_IN * support_trisock.cpp_buildSockaddrIn_FUN_005e19d0(SNetworkAddr * net_addr, SOCKADDR_IN * dest_buffer)
    ADD ESP,0x4                         ; 005e1be3
    MOV EDI,ESP                         ; 005e1be6
    PUSH 0x10                           ; 005e1be8
    LEA EAX,[ESP + 0x4]                 ; 005e1bea
    LEA ESI,[ESP + 0x14]                ; 005e1bee
    PUSH EAX                            ; 005e1bf2
    MOV EAX,dword ptr [ESP + 0x34]      ; 005e1bf3
    JMP 0x00604f7b                      ; 005e1bf7
        ;   XREF to: 00604f7b (UNCONDITIONAL_JUMP)  ; LAB_00604f7b
    PUSH ECX                            ; 005e1bfd
        ;   Label: LAB_005e1bfd
    CALL crt_wsock32.c_connect          ; 005e1bfe
        ;   XREF to: 00610f1c (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_connect(_SOCKET s, SOCKADDR * name, int namelen)
    TEST EAX,EAX                        ; 005e1c03
    SETZ AL                             ; 005e1c05
    AND EAX,0xff                        ; 005e1c08
    ADD ESP,0x20                        ; 005e1c0d
    POP EDI                             ; 005e1c10
    POP ESI                             ; 005e1c11
    RET                                 ; 005e1c12
    MOV ECX,dword ptr [ESI]             ; 00604f7b
        ;   Label: LAB_00604f7b
    MOV dword ptr [EDI],ECX             ; 00604f7d
    MOV ECX,dword ptr [ESI + 0x4]       ; 00604f7f
    MOV dword ptr [EDI + 0x4],ECX       ; 00604f82
    MOV ECX,dword ptr [ESI + 0x8]       ; 00604f85
    MOV dword ptr [EDI + 0x8],ECX       ; 00604f88
    MOV ECX,dword ptr [ESI + 0xc]       ; 00604f8b
    MOV dword ptr [EDI + 0xc],ECX       ; 00604f8e
    ADD ESI,0x10                        ; 00604f91
    ADD EDI,0x10                        ; 00604f94
    MOV ECX,dword ptr [EAX]             ; 00604f97
    JMP 0x005e1bfd                      ; 00604f99
        ;   XREF to: 005e1bfd (UNCONDITIONAL_JUMP)  ; LAB_005e1bfd

