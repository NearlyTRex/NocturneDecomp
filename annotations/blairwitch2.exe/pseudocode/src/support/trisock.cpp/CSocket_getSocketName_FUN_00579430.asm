; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_CSocket_getSocketName_FUN_00579430(CSocket *this_ptr,SNetworkAddr *out_address)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
; SNetworkAddr *   Stack[0x8]:4   out_address
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_initializeNetwork_FUN_0050b790 at 0050b807
;
; Called Functions:
;   crt_wsock32.c_getsockname
;   support_trisock.cpp_convertSockAddr_FUN_00578e80
;
; *****************************************************************************

section .text

    SUB ESP,0x1c                        ; 00579430
        ;   Label: support_trisock.cpp_CSocket_getSocketName_FUN_00579430
    LEA EAX,[ESP + 0x18]                ; 00579433
    PUSH EAX                            ; 00579437
    LEA EAX,[ESP + 0x4]                 ; 00579438
    MOV EDX,0x10                        ; 0057943c
    PUSH EAX                            ; 00579441
    MOV EAX,dword ptr [ESP + 0x28]      ; 00579442
    MOV dword ptr [ESP + 0x20],EDX      ; 00579446
    MOV ECX,dword ptr [EAX]             ; 0057944a
    PUSH ECX                            ; 0057944c
    CALL crt_wsock32.c_getsockname      ; 0057944d
        ;   XREF to: 005c74de (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_getsockname(SOCKET s, sockaddr * name, int * namelen)
    TEST EAX,EAX                        ; 00579452
    JZ 0x0057945c                       ; 00579454
        ;   XREF to: 0057945c (CONDITIONAL_JUMP)  ; LAB_0057945c
    XOR EAX,EAX                         ; 00579456
    ADD ESP,0x1c                        ; 00579458
    RET                                 ; 0057945b
    PUSH EDI                            ; 0057945c
        ;   Label: LAB_0057945c
    PUSH ESI                            ; 0057945d
    LEA EAX,[ESP + 0x8]                 ; 0057945e
    PUSH EAX                            ; 00579462
    LEA EAX,[ESP + 0x1c]                ; 00579463
    PUSH EAX                            ; 00579467
    CALL support_trisock.cpp_convertSockAddr_FUN_00578e80 ; 00579468
        ;   XREF to: 00578e80 (UNCONDITIONAL_CALL)  ; SOCKADDR_IN * support_trisock.cpp_convertSockAddr_FUN_00578e80(SNetworkAddr * dest_addr, SOCKADDR * src_addr)
    ADD ESP,0x8                         ; 0057946d
    MOV ESI,EAX                         ; 00579470
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00579472
    MOV EAX,0x1                         ; 00579476
    MOVSD ES:EDI,ESI                    ; 0057947b
    MOVSD ES:EDI,ESI                    ; 0057947c
    POP ESI                             ; 0057947d
    POP EDI                             ; 0057947e
    ADD ESP,0x1c                        ; 0057947f
    RET                                 ; 00579482

