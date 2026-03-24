; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_receiveSocketData_FUN_005e1c20(_SOCKET *socket_handle,char *buffer,int length,SNetworkAddr *source_addr)
;
; Parameters:
; _SOCKET *        Stack[0x4]:4   socket_handle
; char *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   length
; SNetworkAddr *   Stack[0x10]:4   source_addr
; Local Variables:
; SOCKADDR         Stack[-0x2c]:16  local_2c
; SNetworkAddr     Stack[-0x1c]:8  SStack_1c
; int              Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_flushIncomingPackets_FUN_00540550 at 0054058e
;   core_netgame.cpp_CNetGame_receivePackets_FUN_005405b0 at 0054061d
;
; Called Functions:
;   crt_wsock32.c_recv
;   crt_wsock32.c_recvfrom
;   support_trisock.cpp_convertSockAddr_FUN_005e1960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e1c20
        ;   Label: support_trisock.cpp_receiveSocketData_FUN_005e1c20
    PUSH ESI                            ; 005e1c21
    PUSH EDI                            ; 005e1c22
    PUSH EBP                            ; 005e1c23
    SUB ESP,0x1c                        ; 005e1c24
    MOV EDX,dword ptr [ESP + 0x30]      ; 005e1c27
    MOV ECX,dword ptr [ESP + 0x34]      ; 005e1c2b
    MOV EBX,dword ptr [ESP + 0x38]      ; 005e1c2f
    MOV EDI,dword ptr [ESP + 0x3c]      ; 005e1c33
    TEST EDI,EDI                        ; 005e1c37
    JNZ 0x005e1c55                      ; 005e1c39
        ;   XREF to: 005e1c55 (CONDITIONAL_JUMP)  ; LAB_005e1c55
    PUSH EDI                            ; 005e1c3b
    PUSH EBX                            ; 005e1c3c
    PUSH ECX                            ; 005e1c3d
    MOV ECX,dword ptr [EDX]             ; 005e1c3e
    PUSH ECX                            ; 005e1c40
    CALL crt_wsock32.c_recv             ; 005e1c41
        ;   XREF to: 00610f16 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_recv(_SOCKET s, char * buf, int len, int flags)
    MOV EBX,EAX                         ; 005e1c46
    CMP EBX,-0x1                        ; 005e1c48
        ;   Label: LAB_005e1c48
    MOV EAX,EBX                         ; 005e1c4b
    ADD ESP,0x1c                        ; 005e1c4d
    POP EBP                             ; 005e1c50
    POP EDI                             ; 005e1c51
    POP ESI                             ; 005e1c52
    POP EBX                             ; 005e1c53
    RET                                 ; 005e1c54
    LEA EAX,[ESP + 0x18]                ; 005e1c55
        ;   Label: LAB_005e1c55
    PUSH EAX                            ; 005e1c59
    LEA EAX,[ESP + 0x4]                 ; 005e1c5a
    PUSH EAX                            ; 005e1c5e
    PUSH 0x0                            ; 005e1c5f
    MOV ESI,0x10                        ; 005e1c61
    PUSH EBX                            ; 005e1c66
    MOV dword ptr [ESP + 0x28],ESI      ; 005e1c67
    PUSH ECX                            ; 005e1c6b
    MOV EBP,dword ptr [EDX]             ; 005e1c6c
    PUSH EBP                            ; 005e1c6e
    CALL crt_wsock32.c_recvfrom         ; 005e1c6f
        ;   XREF to: 00610f10 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_recvfrom(_SOCKET s, char * buf, int len, int flags, ...)
    MOV EBX,EAX                         ; 005e1c74
    TEST EAX,EAX                        ; 005e1c76
    JLE 0x005e1c48                      ; 005e1c78
        ;   XREF to: 005e1c48 (CONDITIONAL_JUMP)  ; LAB_005e1c48
    MOV EAX,ESP                         ; 005e1c7a
    PUSH EAX                            ; 005e1c7c
    LEA EAX,[ESP + 0x14]                ; 005e1c7d
    PUSH EAX                            ; 005e1c81
    CALL support_trisock.cpp_convertSockAddr_FUN_005e1960 ; 005e1c82
        ;   XREF to: 005e1960 (UNCONDITIONAL_CALL)  ; SOCKADDR_IN * support_trisock.cpp_convertSockAddr_FUN_005e1960(SNetworkAddr * dest_addr, SOCKADDR * src_addr)
    MOV ESI,EAX                         ; 005e1c87
    ADD ESP,0x8                         ; 005e1c89
    JMP 0x0060c976                      ; 005e1c8c
        ;   XREF to: 0060c976 (UNCONDITIONAL_JUMP)  ; LAB_0060c976
    MOV EAX,EBX                         ; 005e1c91
        ;   Label: LAB_005e1c91
    ADD ESP,0x1c                        ; 005e1c93
    POP EBP                             ; 005e1c96
    POP EDI                             ; 005e1c97
    POP ESI                             ; 005e1c98
    POP EBX                             ; 005e1c99
    RET                                 ; 005e1c9a
    MOV ECX,dword ptr [ESI]             ; 0060c976
        ;   Label: LAB_0060c976
    MOV dword ptr [EDI],ECX             ; 0060c978
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060c97a
    MOV dword ptr [EDI + 0x4],ECX       ; 0060c97d
    ADD ESI,0x8                         ; 0060c980
    ADD EDI,0x8                         ; 0060c983
    CMP EBX,-0x1                        ; 0060c986
    JMP 0x005e1c91                      ; 0060c989
        ;   XREF to: 005e1c91 (UNCONDITIONAL_JUMP)  ; LAB_005e1c91

