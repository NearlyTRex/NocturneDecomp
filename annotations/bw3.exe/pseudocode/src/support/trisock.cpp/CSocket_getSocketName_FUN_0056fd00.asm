; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_CSocket_getSocketName_FUN_0056fd00(CSocket *this_ptr,SNetworkAddr *out_address)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
; SNetworkAddr *   Stack[0x8]:4   out_address
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_initializeNetwork_FUN_00504270 at 005042e7
;
; Called Functions:
;   crt_wsock32.c_getsockname
;   support_trisock.cpp_convertSockAddr_FUN_0056f750
;
; *****************************************************************************

section .text

    SUB ESP,0x1c                        ; 0056fd00
        ;   Label: support_trisock.cpp_CSocket_getSocketName_FUN_0056fd00
    LEA EAX,[ESP + 0x18]                ; 0056fd03
    PUSH EAX                            ; 0056fd07
    LEA EAX,[ESP + 0x4]                 ; 0056fd08
    MOV EDX,0x10                        ; 0056fd0c
    PUSH EAX                            ; 0056fd11
    MOV EAX,dword ptr [ESP + 0x28]      ; 0056fd12
    MOV dword ptr [ESP + 0x20],EDX      ; 0056fd16
    MOV ECX,dword ptr [EAX]             ; 0056fd1a
    PUSH ECX                            ; 0056fd1c
    CALL crt_wsock32.c_getsockname      ; 0056fd1d
        ;   XREF to: 005b2580 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_getsockname(SOCKET s, sockaddr * name, int * namelen)
    TEST EAX,EAX                        ; 0056fd22
    JZ 0x0056fd2c                       ; 0056fd24
        ;   XREF to: 0056fd2c (CONDITIONAL_JUMP)  ; LAB_0056fd2c
    XOR EAX,EAX                         ; 0056fd26
    ADD ESP,0x1c                        ; 0056fd28
    RET                                 ; 0056fd2b
    PUSH EDI                            ; 0056fd2c
        ;   Label: LAB_0056fd2c
    PUSH ESI                            ; 0056fd2d
    LEA EAX,[ESP + 0x8]                 ; 0056fd2e
    PUSH EAX                            ; 0056fd32
    LEA EAX,[ESP + 0x1c]                ; 0056fd33
    PUSH EAX                            ; 0056fd37
    CALL support_trisock.cpp_convertSockAddr_FUN_0056f750 ; 0056fd38
        ;   XREF to: 0056f750 (UNCONDITIONAL_CALL)  ; SOCKADDR_IN * support_trisock.cpp_convertSockAddr_FUN_0056f750(SNetworkAddr * dest_addr, SOCKADDR * src_addr)
    ADD ESP,0x8                         ; 0056fd3d
    MOV ESI,EAX                         ; 0056fd40
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0056fd42
    MOV EAX,0x1                         ; 0056fd46
    MOVSD ES:EDI,ESI                    ; 0056fd4b
    MOVSD ES:EDI,ESI                    ; 0056fd4c
    POP ESI                             ; 0056fd4d
    POP EDI                             ; 0056fd4e
    ADD ESP,0x1c                        ; 0056fd4f
    RET                                 ; 0056fd52

