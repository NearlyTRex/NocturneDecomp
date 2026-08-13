; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_performSocketOperation_FUN_00549090(_SOCKET *socket_handle,char *buffer,int length,SNetworkAddr *dest_addr)
;
; Parameters:
; _SOCKET *        Stack[0x4]:4   socket_handle
; char *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   length
; SNetworkAddr *   Stack[0x10]:4   dest_addr
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_sendPacket_FUN_004eb3c0 at 004eb3dd
;
; Called Functions:
;   crt_wsock32.c_send
;   crt_wsock32.c_sendto
;   support_trisock.cpp_buildSockaddrIn_FUN_00548dc0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00549090
        ;   Label: support_trisock.cpp_performSocketOperation_FUN_00549090
    PUSH EDI                            ; 00549091
    PUSH EBP                            ; 00549092
    SUB ESP,0x20                        ; 00549093
    MOV ESI,dword ptr [ESP + 0x3c]      ; 00549096
    TEST ESI,ESI                        ; 0054909a
    JNZ 0x005490c5                      ; 0054909c
        ;   XREF to: 005490c5 (CONDITIONAL_JUMP)  ; LAB_005490c5
    PUSH EBX                            ; 0054909e
    PUSH ESI                            ; 0054909f
    MOV EDX,dword ptr [ESP + 0x40]      ; 005490a0
    PUSH EDX                            ; 005490a4
    MOV ECX,dword ptr [ESP + 0x40]      ; 005490a5
    MOV ESI,dword ptr [ESP + 0x3c]      ; 005490a9
    PUSH ECX                            ; 005490ad
    MOV EBX,dword ptr [ESI]             ; 005490ae
    PUSH EBX                            ; 005490b0
    CALL crt_wsock32.c_send             ; 005490b1
        ;   XREF to: 00574bde (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_send(_SOCKET s, char * buf, int len, int flags)
    MOV ESI,EAX                         ; 005490b6
    POP EBX                             ; 005490b8
    CMP ESI,-0x1                        ; 005490b9
    MOV EAX,ESI                         ; 005490bc
    ADD ESP,0x20                        ; 005490be
    POP EBP                             ; 005490c1
    POP EDI                             ; 005490c2
    POP ESI                             ; 005490c3
    RET                                 ; 005490c4
    PUSH ESI                            ; 005490c5
        ;   Label: LAB_005490c5
    LEA ESI,[ESP + 0x4]                 ; 005490c6
    LEA EDI,[ESP + 0x14]                ; 005490ca
    CALL support_trisock.cpp_buildSockaddrIn_FUN_00548dc0 ; 005490ce
        ;   XREF to: 00548dc0 (UNCONDITIONAL_CALL)  ; SOCKADDR_IN * support_trisock.cpp_buildSockaddrIn_FUN_00548dc0(SNetworkAddr * net_addr, SOCKADDR_IN * dest_buffer)
    LEA ESI,[ESP + 0x4]                 ; 005490d3
    ADD ESP,0x4                         ; 005490d7
    MOVSD ES:EDI,ESI                    ; 005490da
    MOVSD ES:EDI,ESI                    ; 005490db
    MOVSD ES:EDI,ESI                    ; 005490dc
    MOVSD ES:EDI,ESI                    ; 005490dd
    PUSH 0x10                           ; 005490de
    LEA ESI,[ESP + 0x14]                ; 005490e0
    PUSH ESI                            ; 005490e4
    PUSH 0x0                            ; 005490e5
    MOV ESI,dword ptr [ESP + 0x44]      ; 005490e7
    PUSH ESI                            ; 005490eb
    MOV EDI,dword ptr [ESP + 0x44]      ; 005490ec
    MOV ESI,dword ptr [ESP + 0x40]      ; 005490f0
    PUSH EDI                            ; 005490f4
    MOV EBP,dword ptr [ESI]             ; 005490f5
    PUSH EBP                            ; 005490f7
    CALL crt_wsock32.c_sendto           ; 005490f8
        ;   XREF to: 00574bd8 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_sendto(_SOCKET s, char * buf, int len, int flags, ...)
    MOV ESI,EAX                         ; 005490fd
    CMP ESI,-0x1                        ; 005490ff
    MOV EAX,ESI                         ; 00549102
    ADD ESP,0x20                        ; 00549104
    POP EBP                             ; 00549107
    POP EDI                             ; 00549108
    POP ESI                             ; 00549109
    RET                                 ; 0054910a

