; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_CSocket_getSocketName_FUN_0059cd10(CSocket *this_ptr,SNetworkAddr *out_address)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
; SNetworkAddr *   Stack[0x8]:4   out_address
;
; XREF[1]:
;   core_netgame.cpp_FUN_0052c970 at 0052c9ee
;
; Called Functions:
;   crt_wsock32.c_getsockname
;   support_trisock.cpp_convertSockAddr_FUN_0059c760
;
; *****************************************************************************

section .text

    SUB ESP,0x1c                        ; 0059cd10
        ;   Label: support_trisock.cpp_CSocket_getSocketName_FUN_0059cd10
    LEA EAX,[ESP + 0x18]                ; 0059cd13
    PUSH EAX                            ; 0059cd17
    LEA EAX,[ESP + 0x4]                 ; 0059cd18
    MOV EDX,0x10                        ; 0059cd1c
    PUSH EAX                            ; 0059cd21
    MOV EAX,dword ptr [ESP + 0x28]      ; 0059cd22
    MOV dword ptr [ESP + 0x20],EDX      ; 0059cd26
    MOV ECX,dword ptr [EAX]             ; 0059cd2a
    PUSH ECX                            ; 0059cd2c
    CALL crt_wsock32.c_getsockname      ; 0059cd2d
        ;   XREF to: 005cf7f0 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_getsockname(SOCKET s, sockaddr * name, int * namelen)
    TEST EAX,EAX                        ; 0059cd32
    JZ 0x0059cd3c                       ; 0059cd34
        ;   XREF to: 0059cd3c (CONDITIONAL_JUMP)  ; LAB_0059cd3c
    XOR EAX,EAX                         ; 0059cd36
    ADD ESP,0x1c                        ; 0059cd38
    RET                                 ; 0059cd3b
    PUSH EDI                            ; 0059cd3c
        ;   Label: LAB_0059cd3c
    PUSH ESI                            ; 0059cd3d
    LEA EAX,[ESP + 0x8]                 ; 0059cd3e
    PUSH EAX                            ; 0059cd42
    LEA EAX,[ESP + 0x1c]                ; 0059cd43
    PUSH EAX                            ; 0059cd47
    CALL support_trisock.cpp_convertSockAddr_FUN_0059c760 ; 0059cd48
        ;   XREF to: 0059c760 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_convertSockAddr_FUN_0059c760()
    ADD ESP,0x8                         ; 0059cd4d
    MOV ESI,EAX                         ; 0059cd50
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0059cd52
    MOV EAX,0x1                         ; 0059cd56
    MOVSD ES:EDI,ESI                    ; 0059cd5b
    MOVSD ES:EDI,ESI                    ; 0059cd5c
    POP ESI                             ; 0059cd5d
    POP EDI                             ; 0059cd5e
    ADD ESP,0x1c                        ; 0059cd5f
    RET                                 ; 0059cd62

