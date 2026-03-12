; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_acceptConnection_FUN_005e1d80(_SOCKET *listen_socket,SNetworkAddr *client_addr,_SOCKET *new_socket)
;
; Parameters:
; _SOCKET *        Stack[0x4]:4   listen_socket
; SNetworkAddr *   Stack[0x8]:4   client_addr
; _SOCKET *        Stack[0xc]:4   new_socket
; Local Variables:
; SOCKADDR         Stack[-0x20]:16  local_20
; SNetworkAddr     Stack[-0x10]:8  SStack_10
; int              Stack[-0x8]:4  local_8
;
; Called Functions:
;   crt_wsock32.c_accept
;   support_trisock.cpp_convertSockAddr_FUN_005e1960
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005e1d80
        ;   Label: support_trisock.cpp_acceptConnection_FUN_005e1d80
    SUB ESP,0x1c                        ; 005e1d81
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005e1d84
    LEA EAX,[ESP + 0x18]                ; 005e1d88
    PUSH EAX                            ; 005e1d8c
    LEA EAX,[ESP + 0x4]                 ; 005e1d8d
    MOV EDX,0x10                        ; 005e1d91
    PUSH EAX                            ; 005e1d96
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005e1d97
    MOV dword ptr [ESP + 0x20],EDX      ; 005e1d9b
    MOV ECX,dword ptr [EAX]             ; 005e1d9f
    PUSH ECX                            ; 005e1da1
    CALL crt_wsock32.c_accept           ; 005e1da2
        ;   XREF to: 00610ef2 (UNCONDITIONAL_CALL)  ; _SOCKET crt_wsock32.c_accept(_SOCKET s, SOCKADDR * addr, int * addrlen)
    MOV EDX,dword ptr [ESP + 0x28]      ; 005e1da7
    MOV dword ptr [EDX],EAX             ; 005e1dab
    CMP EAX,-0x1                        ; 005e1dad
    JZ 0x005e1dc0                       ; 005e1db0
        ;   XREF to: 005e1dc0 (CONDITIONAL_JUMP)  ; LAB_005e1dc0
    TEST EDI,EDI                        ; 005e1db2
    JNZ 0x005e1dc7                      ; 005e1db4
        ;   XREF to: 005e1dc7 (CONDITIONAL_JUMP)  ; LAB_005e1dc7
    MOV EAX,0x1                         ; 005e1db6
    ADD ESP,0x1c                        ; 005e1dbb
    POP EDI                             ; 005e1dbe
    RET                                 ; 005e1dbf
    XOR EAX,EAX                         ; 005e1dc0
        ;   Label: LAB_005e1dc0
    ADD ESP,0x1c                        ; 005e1dc2
    POP EDI                             ; 005e1dc5
    RET                                 ; 005e1dc6
    PUSH ESI                            ; 005e1dc7
        ;   Label: LAB_005e1dc7
    LEA EAX,[ESP + 0x4]                 ; 005e1dc8
    PUSH EAX                            ; 005e1dcc
    LEA EAX,[ESP + 0x18]                ; 005e1dcd
    PUSH EAX                            ; 005e1dd1
    CALL support_trisock.cpp_convertSockAddr_FUN_005e1960 ; 005e1dd2
        ;   XREF to: 005e1960 (UNCONDITIONAL_CALL)  ; SOCKADDR_IN * support_trisock.cpp_convertSockAddr_FUN_005e1960(SNetworkAddr * dest_addr, SOCKADDR * src_addr)
    MOV ESI,EAX                         ; 005e1dd7
    ADD ESP,0x8                         ; 005e1dd9
    MOVSD ES:EDI,ESI                    ; 005e1ddc
    MOVSD ES:EDI,ESI                    ; 005e1ddd
    POP ESI                             ; 005e1dde
    MOV EAX,0x1                         ; 005e1ddf
    ADD ESP,0x1c                        ; 005e1de4
    POP EDI                             ; 005e1de7
    RET                                 ; 005e1de8

