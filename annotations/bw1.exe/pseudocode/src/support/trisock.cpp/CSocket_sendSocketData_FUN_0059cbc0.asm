; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_CSocket_sendSocketData_FUN_0059cbc0(CSocket *this_ptr,char *buffer,int length,SNetworkAddr *dest_addr)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   length
; SNetworkAddr *   Stack[0x10]:4   dest_addr
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[3]:
;   core_netgame.cpp_CNetGame_sendPacket_FUN_0052dfc0 at 0052dfdd
;   support_trisock.cpp_FUN_0059d760 at 0059d7ff
;   support_trisock.cpp_FUN_0059d850 at 0059d920
;
; Called Functions:
;   crt_wsock32.c_send
;   crt_wsock32.c_sendto
;   support_trisock.cpp_buildSockaddrIn_FUN_0059c7d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0059cbc0
        ;   Label: support_trisock.cpp_CSocket_sendSocketData_FUN_0059cbc0
    PUSH EDI                            ; 0059cbc1
    PUSH EBP                            ; 0059cbc2
    SUB ESP,0x20                        ; 0059cbc3
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0059cbc6
    TEST ESI,ESI                        ; 0059cbca
    JNZ 0x0059cbf5                      ; 0059cbcc
        ;   XREF to: 0059cbf5 (CONDITIONAL_JUMP)  ; LAB_0059cbf5
    PUSH EBX                            ; 0059cbce
    PUSH ESI                            ; 0059cbcf
    MOV EDX,dword ptr [ESP + 0x40]      ; 0059cbd0
    PUSH EDX                            ; 0059cbd4
    MOV ECX,dword ptr [ESP + 0x40]      ; 0059cbd5
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0059cbd9
    PUSH ECX                            ; 0059cbdd
    MOV EBX,dword ptr [ESI]             ; 0059cbde
    PUSH EBX                            ; 0059cbe0
    CALL crt_wsock32.c_send             ; 0059cbe1
        ;   XREF to: 005cf80e (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_send(_SOCKET s, char * buf, int len, int flags)
    MOV ESI,EAX                         ; 0059cbe6
    POP EBX                             ; 0059cbe8
    CMP ESI,-0x1                        ; 0059cbe9
    MOV EAX,ESI                         ; 0059cbec
    ADD ESP,0x20                        ; 0059cbee
    POP EBP                             ; 0059cbf1
    POP EDI                             ; 0059cbf2
    POP ESI                             ; 0059cbf3
    RET                                 ; 0059cbf4
    PUSH ESI                            ; 0059cbf5
        ;   Label: LAB_0059cbf5
    LEA ESI,[ESP + 0x4]                 ; 0059cbf6
    LEA EDI,[ESP + 0x14]                ; 0059cbfa
    CALL support_trisock.cpp_buildSockaddrIn_FUN_0059c7d0 ; 0059cbfe
        ;   XREF to: 0059c7d0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_buildSockaddrIn_FUN_0059c7d0()
    LEA ESI,[ESP + 0x4]                 ; 0059cc03
    ADD ESP,0x4                         ; 0059cc07
    MOVSD ES:EDI,ESI                    ; 0059cc0a
    MOVSD ES:EDI,ESI                    ; 0059cc0b
    MOVSD ES:EDI,ESI                    ; 0059cc0c
    MOVSD ES:EDI,ESI                    ; 0059cc0d
    PUSH 0x10                           ; 0059cc0e
    LEA ESI,[ESP + 0x14]                ; 0059cc10
    PUSH ESI                            ; 0059cc14
    PUSH 0x0                            ; 0059cc15
    MOV ESI,dword ptr [ESP + 0x44]      ; 0059cc17
    PUSH ESI                            ; 0059cc1b
    MOV EDI,dword ptr [ESP + 0x44]      ; 0059cc1c
    MOV ESI,dword ptr [ESP + 0x40]      ; 0059cc20
    PUSH EDI                            ; 0059cc24
    MOV EBP,dword ptr [ESI]             ; 0059cc25
    PUSH EBP                            ; 0059cc27
    CALL crt_wsock32.c_sendto           ; 0059cc28
        ;   XREF to: 005cf808 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_sendto(SOCKET s, char * buf, int len, int flags, ...)
    MOV ESI,EAX                         ; 0059cc2d
    CMP ESI,-0x1                        ; 0059cc2f
    MOV EAX,ESI                         ; 0059cc32
    ADD ESP,0x20                        ; 0059cc34
    POP EBP                             ; 0059cc37
    POP EDI                             ; 0059cc38
    POP ESI                             ; 0059cc39
    RET                                 ; 0059cc3a

