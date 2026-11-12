; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_CSocket_receiveSocketData_FUN_0059cb20(CSocket *this_ptr,char *buffer,int length,SNetworkAddr *source_addr)
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
;   core_netgame.cpp_CNetGame_flushIncomingPackets_FUN_0052d300 at 0052d33e
;   core_netgame.cpp_CNetGame_receivePackets_FUN_0052d360 at 0052d3cd
;   support_trisock.cpp_FUN_0059d360 at 0059d3d4
;   support_trisock.cpp_FUN_0059ed90 at 0059ede4
;
; Called Functions:
;   crt_wsock32.c_recv
;   crt_wsock32.c_recvfrom
;   crt_wsock32.c_WSAGetLastError
;   support_trisock.cpp_convertSockAddr_FUN_0059c760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059cb20
        ;   Label: support_trisock.cpp_CSocket_receiveSocketData_FUN_0059cb20
    PUSH ESI                            ; 0059cb21
    PUSH EDI                            ; 0059cb22
    PUSH EBP                            ; 0059cb23
    SUB ESP,0x1c                        ; 0059cb24
    MOV ECX,dword ptr [ESP + 0x30]      ; 0059cb27
    MOV EDX,dword ptr [ESP + 0x34]      ; 0059cb2b
    MOV EBX,dword ptr [ESP + 0x38]      ; 0059cb2f
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0059cb33
    TEST EDI,EDI                        ; 0059cb37
    JNZ 0x0059cb5b                      ; 0059cb39
        ;   XREF to: 0059cb5b (CONDITIONAL_JUMP)  ; LAB_0059cb5b
    PUSH EDI                            ; 0059cb3b
    PUSH EBX                            ; 0059cb3c
    PUSH EDX                            ; 0059cb3d
    MOV EDX,dword ptr [ECX]             ; 0059cb3e
    PUSH EDX                            ; 0059cb40
    CALL crt_wsock32.c_recv             ; 0059cb41
        ;   XREF to: 005cf81a (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_recv(_SOCKET s, char * buf, int len, int flags)
    MOV EBX,EAX                         ; 0059cb46
    TEST EBX,EBX                        ; 0059cb48
        ;   Label: LAB_0059cb48
    JZ 0x0059cb96                       ; 0059cb4a
        ;   XREF to: 0059cb96 (CONDITIONAL_JUMP)  ; LAB_0059cb96
    CMP EBX,-0x1                        ; 0059cb4c
    JZ 0x0059cb9d                       ; 0059cb4f
        ;   XREF to: 0059cb9d (CONDITIONAL_JUMP)  ; LAB_0059cb9d
    MOV EAX,EBX                         ; 0059cb51
        ;   Label: LAB_0059cb51
    ADD ESP,0x1c                        ; 0059cb53
        ;   Label: LAB_0059cb53
    POP EBP                             ; 0059cb56
    POP EDI                             ; 0059cb57
    POP ESI                             ; 0059cb58
    POP EBX                             ; 0059cb59
    RET                                 ; 0059cb5a
    LEA EAX,[ESP + 0x18]                ; 0059cb5b
        ;   Label: LAB_0059cb5b
    PUSH EAX                            ; 0059cb5f
    LEA EAX,[ESP + 0x4]                 ; 0059cb60
    PUSH EAX                            ; 0059cb64
    PUSH 0x0                            ; 0059cb65
    MOV ESI,0x10                        ; 0059cb67
    PUSH EBX                            ; 0059cb6c
    MOV dword ptr [ESP + 0x28],ESI      ; 0059cb6d
    PUSH EDX                            ; 0059cb71
    MOV EBP,dword ptr [ECX]             ; 0059cb72
    PUSH EBP                            ; 0059cb74
    CALL crt_wsock32.c_recvfrom         ; 0059cb75
        ;   XREF to: 005cf814 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_recvfrom(SOCKET s, char * buf, int len, int flags, ...)
    MOV EBX,EAX                         ; 0059cb7a
    TEST EAX,EAX                        ; 0059cb7c
    JLE 0x0059cb48                      ; 0059cb7e
        ;   XREF to: 0059cb48 (CONDITIONAL_JUMP)  ; LAB_0059cb48
    MOV EAX,ESP                         ; 0059cb80
    PUSH EAX                            ; 0059cb82
    LEA EAX,[ESP + 0x14]                ; 0059cb83
    PUSH EAX                            ; 0059cb87
    CALL support_trisock.cpp_convertSockAddr_FUN_0059c760 ; 0059cb88
        ;   XREF to: 0059c760 (UNCONDITIONAL_CALL)  ; SOCKADDR_IN * support_trisock.cpp_convertSockAddr_FUN_0059c760(SNetworkAddr * dest_addr, SOCKADDR * src_addr)
    MOV ESI,EAX                         ; 0059cb8d
    ADD ESP,0x8                         ; 0059cb8f
    MOVSD ES:EDI,ESI                    ; 0059cb92
    MOVSD ES:EDI,ESI                    ; 0059cb93
    JMP 0x0059cb48                      ; 0059cb94
        ;   XREF to: 0059cb48 (UNCONDITIONAL_JUMP)  ; LAB_0059cb48
    MOV EAX,0xfffffffe                  ; 0059cb96
        ;   Label: LAB_0059cb96
    JMP 0x0059cb53                      ; 0059cb9b
        ;   XREF to: 0059cb53 (UNCONDITIONAL_JUMP)  ; LAB_0059cb53
    CALL crt_wsock32.c_WSAGetLastError  ; 0059cb9d
        ;   XREF to: 005cf856 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_WSAGetLastError()
        ;   Label: LAB_0059cb9d
    CMP EAX,0x2733                      ; 0059cba2
    JNZ 0x0059cb51                      ; 0059cba7
        ;   XREF to: 0059cb51 (CONDITIONAL_JUMP)  ; LAB_0059cb51
    XOR EAX,EAX                         ; 0059cba9
    ADD ESP,0x1c                        ; 0059cbab
    POP EBP                             ; 0059cbae
    POP EDI                             ; 0059cbaf
    POP ESI                             ; 0059cbb0
    POP EBX                             ; 0059cbb1
    RET                                 ; 0059cbb2

