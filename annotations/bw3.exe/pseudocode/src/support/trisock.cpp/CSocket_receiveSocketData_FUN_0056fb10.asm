; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_CSocket_receiveSocketData_FUN_0056fb10(CSocket *this_ptr,char *buffer,int length,SNetworkAddr *source_addr)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   length
; SNetworkAddr *   Stack[0x10]:4   source_addr
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_netgame.cpp_CNetGame_flushIncomingPackets_FUN_00504c10 at 00504c4e
;   core_netgame.cpp_CNetGame_receivePackets_FUN_00504c70 at 00504cdd
;   support_trisock.cpp_FUN_00570350 at 005703c4
;   support_trisock.cpp_FUN_00571d80 at 00571dd4
;
; Called Functions:
;   crt_wsock32.c_recv
;   crt_wsock32.c_recvfrom
;   crt_wsock32.c_WSAGetLastError
;   support_trisock.cpp_convertSockAddr_FUN_0056f750
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056fb10
        ;   Label: support_trisock.cpp_CSocket_receiveSocketData_FUN_0056fb10
    PUSH ESI                            ; 0056fb11
    PUSH EDI                            ; 0056fb12
    PUSH EBP                            ; 0056fb13
    SUB ESP,0x1c                        ; 0056fb14
    MOV ECX,dword ptr [ESP + 0x30]      ; 0056fb17
    MOV EDX,dword ptr [ESP + 0x34]      ; 0056fb1b
    MOV EBX,dword ptr [ESP + 0x38]      ; 0056fb1f
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0056fb23
    TEST EDI,EDI                        ; 0056fb27
    JNZ 0x0056fb4b                      ; 0056fb29
        ;   XREF to: 0056fb4b (CONDITIONAL_JUMP)  ; LAB_0056fb4b
    PUSH EDI                            ; 0056fb2b
    PUSH EBX                            ; 0056fb2c
    PUSH EDX                            ; 0056fb2d
    MOV EDX,dword ptr [ECX]             ; 0056fb2e
    PUSH EDX                            ; 0056fb30
    CALL crt_wsock32.c_recv             ; 0056fb31
        ;   XREF to: 005b25aa (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_recv(_SOCKET s, char * buf, int len, int flags)
    MOV EBX,EAX                         ; 0056fb36
    TEST EBX,EBX                        ; 0056fb38
        ;   Label: LAB_0056fb38
    JZ 0x0056fb86                       ; 0056fb3a
        ;   XREF to: 0056fb86 (CONDITIONAL_JUMP)  ; LAB_0056fb86
    CMP EBX,-0x1                        ; 0056fb3c
    JZ 0x0056fb8d                       ; 0056fb3f
        ;   XREF to: 0056fb8d (CONDITIONAL_JUMP)  ; LAB_0056fb8d
    MOV EAX,EBX                         ; 0056fb41
        ;   Label: LAB_0056fb41
    ADD ESP,0x1c                        ; 0056fb43
        ;   Label: LAB_0056fb43
    POP EBP                             ; 0056fb46
    POP EDI                             ; 0056fb47
    POP ESI                             ; 0056fb48
    POP EBX                             ; 0056fb49
    RET                                 ; 0056fb4a
    LEA EAX,[ESP + 0x18]                ; 0056fb4b
        ;   Label: LAB_0056fb4b
    PUSH EAX                            ; 0056fb4f
    LEA EAX,[ESP + 0x4]                 ; 0056fb50
    PUSH EAX                            ; 0056fb54
    PUSH 0x0                            ; 0056fb55
    MOV ESI,0x10                        ; 0056fb57
    PUSH EBX                            ; 0056fb5c
    MOV dword ptr [ESP + 0x28],ESI      ; 0056fb5d
    PUSH EDX                            ; 0056fb61
    MOV EBP,dword ptr [ECX]             ; 0056fb62
    PUSH EBP                            ; 0056fb64
    CALL crt_wsock32.c_recvfrom         ; 0056fb65
        ;   XREF to: 005b25a4 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_recvfrom(SOCKET s, char * buf, int len, int flags, ...)
    MOV EBX,EAX                         ; 0056fb6a
    TEST EAX,EAX                        ; 0056fb6c
    JLE 0x0056fb38                      ; 0056fb6e
        ;   XREF to: 0056fb38 (CONDITIONAL_JUMP)  ; LAB_0056fb38
    MOV EAX,ESP                         ; 0056fb70
    PUSH EAX                            ; 0056fb72
    LEA EAX,[ESP + 0x14]                ; 0056fb73
    PUSH EAX                            ; 0056fb77
    CALL support_trisock.cpp_convertSockAddr_FUN_0056f750 ; 0056fb78
        ;   XREF to: 0056f750 (UNCONDITIONAL_CALL)  ; SOCKADDR_IN * support_trisock.cpp_convertSockAddr_FUN_0056f750(SNetworkAddr * dest_addr, SOCKADDR * src_addr)
    MOV ESI,EAX                         ; 0056fb7d
    ADD ESP,0x8                         ; 0056fb7f
    MOVSD ES:EDI,ESI                    ; 0056fb82
    MOVSD ES:EDI,ESI                    ; 0056fb83
    JMP 0x0056fb38                      ; 0056fb84
        ;   XREF to: 0056fb38 (UNCONDITIONAL_JUMP)  ; LAB_0056fb38
    MOV EAX,0xfffffffe                  ; 0056fb86
        ;   Label: LAB_0056fb86
    JMP 0x0056fb43                      ; 0056fb8b
        ;   XREF to: 0056fb43 (UNCONDITIONAL_JUMP)  ; LAB_0056fb43
    CALL crt_wsock32.c_WSAGetLastError  ; 0056fb8d
        ;   XREF to: 005b25e6 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_WSAGetLastError()
        ;   Label: LAB_0056fb8d
    CMP EAX,0x2733                      ; 0056fb92
    JNZ 0x0056fb41                      ; 0056fb97
        ;   XREF to: 0056fb41 (CONDITIONAL_JUMP)  ; LAB_0056fb41
    XOR EAX,EAX                         ; 0056fb99
    ADD ESP,0x1c                        ; 0056fb9b
    POP EBP                             ; 0056fb9e
    POP EDI                             ; 0056fb9f
    POP ESI                             ; 0056fba0
    POP EBX                             ; 0056fba1
    RET                                 ; 0056fba2

