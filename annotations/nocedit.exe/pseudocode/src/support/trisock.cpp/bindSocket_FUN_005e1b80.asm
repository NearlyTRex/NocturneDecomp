; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_bindSocket_FUN_005e1b80(_SOCKET *socket_handle,uint16_t port)
;
; Parameters:
; _SOCKET *        Stack[0x4]:4   socket_handle
; uint16_t         Stack[0x8]:2   port
; Local Variables:
; undefined2       Stack[-0x10]:2  local_10
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_initializeNetwork_FUN_0053fbc0 at 0053fc14
;
; Called Functions:
;   crt_wsock32.c_bind
;   crt_wsock32.c_htons
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 005e1b80
        ;   Label: support_trisock.cpp_bindSocket_FUN_005e1b80
    XOR EAX,EAX                         ; 005e1b83
    MOV AX,word ptr [ESP + 0x18]        ; 005e1b85
    MOV EDX,0x2                         ; 005e1b8a
    PUSH EAX                            ; 005e1b8f
    MOV word ptr [ESP + 0x4],DX         ; 005e1b90
    CALL crt_wsock32.c_htons            ; 005e1b95
        ;   XREF to: 00610f2e (UNCONDITIONAL_CALL)  ; ushort crt_wsock32.c_htons(ushort hostshort)
    PUSH 0x10                           ; 005e1b9a
    MOV word ptr [ESP + 0x6],AX         ; 005e1b9c
    LEA EAX,[ESP + 0x4]                 ; 005e1ba1
    XOR EDX,EDX                         ; 005e1ba5
    PUSH EAX                            ; 005e1ba7
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005e1ba8
    MOV dword ptr [ESP + 0xc],EDX       ; 005e1bac
    MOV ECX,dword ptr [EAX]             ; 005e1bb0
    PUSH ECX                            ; 005e1bb2
    CALL crt_wsock32.c_bind             ; 005e1bb3
        ;   XREF to: 00610f22 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_bind(_SOCKET s, SOCKADDR * addr, int namelen)
    TEST EAX,EAX                        ; 005e1bb8
    SETZ AL                             ; 005e1bba
    AND EAX,0xff                        ; 005e1bbd
    ADD ESP,0x10                        ; 005e1bc2
    RET                                 ; 005e1bc5

