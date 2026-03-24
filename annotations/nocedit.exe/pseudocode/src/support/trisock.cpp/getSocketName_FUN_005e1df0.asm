; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_getSocketName_FUN_005e1df0(_SOCKET *socket_handle,SNetworkAddr *out_address)
;
; Parameters:
; _SOCKET *        Stack[0x4]:4   socket_handle
; SNetworkAddr *   Stack[0x8]:4   out_address
; Local Variables:
; SOCKADDR         Stack[-0x1c]:16  local_1c
; SNetworkAddr     Stack[-0xc]:8  SStack_c
; int              Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_initializeNetwork_FUN_0053fbc0 at 0053fc3e
;
; Called Functions:
;   crt_wsock32.c_getsockname
;   support_trisock.cpp_convertSockAddr_FUN_005e1960
;
; *****************************************************************************

section .text

    SUB ESP,0x1c                        ; 005e1df0
        ;   Label: support_trisock.cpp_getSocketName_FUN_005e1df0
    LEA EAX,[ESP + 0x18]                ; 005e1df3
    PUSH EAX                            ; 005e1df7
    LEA EAX,[ESP + 0x4]                 ; 005e1df8
    MOV EDX,0x10                        ; 005e1dfc
    PUSH EAX                            ; 005e1e01
    MOV EAX,dword ptr [ESP + 0x28]      ; 005e1e02
    MOV dword ptr [ESP + 0x20],EDX      ; 005e1e06
    MOV ECX,dword ptr [EAX]             ; 005e1e0a
    PUSH ECX                            ; 005e1e0c
    CALL crt_wsock32.c_getsockname      ; 005e1e0d
        ;   XREF to: 00610eec (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_getsockname(_SOCKET s, SOCKADDR * name, int * namelen)
    TEST EAX,EAX                        ; 005e1e12
    JZ 0x005e1e1c                       ; 005e1e14
        ;   XREF to: 005e1e1c (CONDITIONAL_JUMP)  ; LAB_005e1e1c
    XOR EAX,EAX                         ; 005e1e16
    ADD ESP,0x1c                        ; 005e1e18
    RET                                 ; 005e1e1b
    PUSH EDI                            ; 005e1e1c
        ;   Label: LAB_005e1e1c
    PUSH ESI                            ; 005e1e1d
    LEA EAX,[ESP + 0x8]                 ; 005e1e1e
    PUSH EAX                            ; 005e1e22
    LEA EAX,[ESP + 0x1c]                ; 005e1e23
    PUSH EAX                            ; 005e1e27
    CALL support_trisock.cpp_convertSockAddr_FUN_005e1960 ; 005e1e28
        ;   XREF to: 005e1960 (UNCONDITIONAL_CALL)  ; SOCKADDR_IN * support_trisock.cpp_convertSockAddr_FUN_005e1960(SNetworkAddr * dest_addr, SOCKADDR * src_addr)
    ADD ESP,0x8                         ; 005e1e2d
    MOV ESI,EAX                         ; 005e1e30
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005e1e32
    MOV EAX,0x1                         ; 005e1e36
    JMP 0x0060c552                      ; 005e1e3b
        ;   XREF to: 0060c552 (UNCONDITIONAL_JUMP)  ; LAB_0060c552
    RET                                 ; 005e1e42
        ;   Label: LAB_005e1e42
    MOV ECX,dword ptr [ESI]             ; 0060c552
        ;   Label: LAB_0060c552
    MOV dword ptr [EDI],ECX             ; 0060c554
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060c556
    MOV dword ptr [EDI + 0x4],ECX       ; 0060c559
    ADD ESI,0x8                         ; 0060c55c
    ADD EDI,0x8                         ; 0060c55f
    POP ESI                             ; 0060c562
    POP EDI                             ; 0060c563
    ADD ESP,0x1c                        ; 0060c564
    JMP 0x005e1e42                      ; 0060c567
        ;   XREF to: 005e1e42 (UNCONDITIONAL_JUMP)  ; LAB_005e1e42

