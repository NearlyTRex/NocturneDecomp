; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_0056f9c0(SOCKET *param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   support_trisock.cpp_FUN_0056fef0 at 0057004c
;
; Called Functions:
;   crt_wsock32.c_connect
;   crt_wsock32.c_WSAGetLastError
;   support_trisock.cpp_buildSockaddrIn_FUN_0056f7c0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0056f9c0
        ;   Label: support_trisock.cpp_FUN_0056f9c0
    PUSH EDI                            ; 0056f9c1
    SUB ESP,0x20                        ; 0056f9c2
    MOV EDX,dword ptr [ESP + 0x30]      ; 0056f9c5
    PUSH EDX                            ; 0056f9c9
    LEA ESI,[ESP + 0x14]                ; 0056f9ca
    CALL support_trisock.cpp_buildSockaddrIn_FUN_0056f7c0 ; 0056f9ce
        ;   XREF to: 0056f7c0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_buildSockaddrIn_FUN_0056f7c0()
    ADD ESP,0x4                         ; 0056f9d3
    MOV EDI,ESP                         ; 0056f9d6
    PUSH 0x10                           ; 0056f9d8
    LEA EAX,[ESP + 0x4]                 ; 0056f9da
    LEA ESI,[ESP + 0x14]                ; 0056f9de
    PUSH EAX                            ; 0056f9e2
    MOV EAX,dword ptr [ESP + 0x34]      ; 0056f9e3
    MOVSD ES:EDI,ESI                    ; 0056f9e7
    MOVSD ES:EDI,ESI                    ; 0056f9e8
    MOVSD ES:EDI,ESI                    ; 0056f9e9
    MOVSD ES:EDI,ESI                    ; 0056f9ea
    MOV ECX,dword ptr [EAX]             ; 0056f9eb
    PUSH ECX                            ; 0056f9ed
    CALL crt_wsock32.c_connect          ; 0056f9ee
        ;   XREF to: 005b25bc (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_connect(SOCKET s, sockaddr * name, int namelen)
    TEST EAX,EAX                        ; 0056f9f3
    JNZ 0x0056fa02                      ; 0056f9f5
        ;   XREF to: 0056fa02 (CONDITIONAL_JUMP)  ; LAB_0056fa02
    MOV EAX,0x1                         ; 0056f9f7
        ;   Label: LAB_0056f9f7
    ADD ESP,0x20                        ; 0056f9fc
    POP EDI                             ; 0056f9ff
    POP ESI                             ; 0056fa00
    RET                                 ; 0056fa01
    CALL crt_wsock32.c_WSAGetLastError  ; 0056fa02
        ;   XREF to: 005b25e6 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_WSAGetLastError()
        ;   Label: LAB_0056fa02
    CMP EAX,0x2733                      ; 0056fa07
    JZ 0x0056f9f7                       ; 0056fa0c
        ;   XREF to: 0056f9f7 (CONDITIONAL_JUMP)  ; LAB_0056f9f7
    XOR EAX,EAX                         ; 0056fa0e
    ADD ESP,0x20                        ; 0056fa10
    POP EDI                             ; 0056fa13
    POP ESI                             ; 0056fa14
    RET                                 ; 0056fa15

