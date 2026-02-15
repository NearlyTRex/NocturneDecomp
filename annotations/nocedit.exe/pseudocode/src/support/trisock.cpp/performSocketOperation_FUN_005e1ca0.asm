; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_performSocketOperation_FUN_005e1ca0(SSocketContext *socket_ctx,char *buffer,int length,SNetworkAddr *dest_addr)
;
; Parameters:
; SSocketContext * Stack[0x4]:4   socket_ctx
; char *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   length
; SNetworkAddr *   Stack[0x10]:4   dest_addr
; Local Variables:
; undefined1       Stack[-0x2c]:1  local_2c
; undefined1       Stack[-0x1c]:1  local_1c
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_FUN_00541230 at 0054124d
;
; Called Functions:
;   crt_wsock32.c_send
;   crt_wsock32.c_sendto
;   support_trisock.cpp_buildSockaddrIn_FUN_005e19d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005e1ca0
        ;   Label: support_trisock.cpp_performSocketOperation_FUN_005e1ca0
    PUSH EDI                            ; 005e1ca1
    PUSH EBP                            ; 005e1ca2
    SUB ESP,0x20                        ; 005e1ca3
    MOV ESI,dword ptr [ESP + 0x3c]      ; 005e1ca6
    TEST ESI,ESI                        ; 005e1caa
    JNZ 0x005e1cd5                      ; 005e1cac
        ;   XREF to: 005e1cd5 (CONDITIONAL_JUMP)  ; LAB_005e1cd5
    PUSH EBX                            ; 005e1cae
    PUSH ESI                            ; 005e1caf
    MOV EDX,dword ptr [ESP + 0x40]      ; 005e1cb0
    PUSH EDX                            ; 005e1cb4
    MOV ECX,dword ptr [ESP + 0x40]      ; 005e1cb5
    MOV ESI,dword ptr [ESP + 0x3c]      ; 005e1cb9
    PUSH ECX                            ; 005e1cbd
    MOV EBX,dword ptr [ESI]             ; 005e1cbe
    PUSH EBX                            ; 005e1cc0
    CALL crt_wsock32.c_send             ; 005e1cc1
        ;   XREF to: 00610f0a (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_send(SOCKET s, char * buf, int len, int flags)
    MOV ESI,EAX                         ; 005e1cc6
    POP EBX                             ; 005e1cc8
    CMP ESI,-0x1                        ; 005e1cc9
    MOV EAX,ESI                         ; 005e1ccc
    ADD ESP,0x20                        ; 005e1cce
    POP EBP                             ; 005e1cd1
    POP EDI                             ; 005e1cd2
    POP ESI                             ; 005e1cd3
    RET                                 ; 005e1cd4
    PUSH ESI                            ; 005e1cd5
        ;   Label: LAB_005e1cd5
    LEA ESI,[ESP + 0x4]                 ; 005e1cd6
    LEA EDI,[ESP + 0x14]                ; 005e1cda
    CALL support_trisock.cpp_buildSockaddrIn_FUN_005e19d0 ; 005e1cde
        ;   XREF to: 005e19d0 (UNCONDITIONAL_CALL)  ; SOCKADDR_IN * support_trisock.cpp_buildSockaddrIn_FUN_005e19d0(SNetworkAddr * net_addr, SOCKADDR_IN * dest_buffer)
    LEA ESI,[ESP + 0x4]                 ; 005e1ce3
    ADD ESP,0x4                         ; 005e1ce7
    MOVSD ES:EDI,ESI                    ; 005e1cea
    MOVSD ES:EDI,ESI                    ; 005e1ceb
    MOVSD ES:EDI,ESI                    ; 005e1cec
    MOVSD ES:EDI,ESI                    ; 005e1ced
    PUSH 0x10                           ; 005e1cee
    LEA ESI,[ESP + 0x14]                ; 005e1cf0
    PUSH ESI                            ; 005e1cf4
    PUSH 0x0                            ; 005e1cf5
    MOV ESI,dword ptr [ESP + 0x44]      ; 005e1cf7
    PUSH ESI                            ; 005e1cfb
    MOV EDI,dword ptr [ESP + 0x44]      ; 005e1cfc
    MOV ESI,dword ptr [ESP + 0x40]      ; 005e1d00
    PUSH EDI                            ; 005e1d04
    MOV EBP,dword ptr [ESI]             ; 005e1d05
    PUSH EBP                            ; 005e1d07
    CALL crt_wsock32.c_sendto           ; 005e1d08
        ;   XREF to: 00610f04 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_sendto(SOCKET s, char * buf, int len, int flags, ...)
    MOV ESI,EAX                         ; 005e1d0d
    CMP ESI,-0x1                        ; 005e1d0f
    MOV EAX,ESI                         ; 005e1d12
    ADD ESP,0x20                        ; 005e1d14
    POP EBP                             ; 005e1d17
    POP EDI                             ; 005e1d18
    POP ESI                             ; 005e1d19
    RET                                 ; 005e1d1a

