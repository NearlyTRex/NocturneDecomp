; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_005790f0(SOCKET *param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   support_trisock.cpp_FUN_00579890 at 005799ec
;
; Called Functions:
;   crt_wsock32.c_connect
;   crt_wsock32.c_WSAGetLastError
;   support_trisock.cpp_buildSockaddrIn_FUN_00578ef0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005790f0
        ;   Label: support_trisock.cpp_FUN_005790f0
    PUSH EDI                            ; 005790f1
    SUB ESP,0x20                        ; 005790f2
    MOV EDX,dword ptr [ESP + 0x30]      ; 005790f5
    PUSH EDX                            ; 005790f9
    LEA ESI,[ESP + 0x14]                ; 005790fa
    CALL support_trisock.cpp_buildSockaddrIn_FUN_00578ef0 ; 005790fe
        ;   XREF to: 00578ef0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_buildSockaddrIn_FUN_00578ef0()
    ADD ESP,0x4                         ; 00579103
    MOV EDI,ESP                         ; 00579106
    PUSH 0x10                           ; 00579108
    LEA EAX,[ESP + 0x4]                 ; 0057910a
    LEA ESI,[ESP + 0x14]                ; 0057910e
    PUSH EAX                            ; 00579112
    MOV EAX,dword ptr [ESP + 0x34]      ; 00579113
    MOVSD ES:EDI,ESI                    ; 00579117
    MOVSD ES:EDI,ESI                    ; 00579118
    MOVSD ES:EDI,ESI                    ; 00579119
    MOVSD ES:EDI,ESI                    ; 0057911a
    MOV ECX,dword ptr [EAX]             ; 0057911b
    PUSH ECX                            ; 0057911d
    CALL crt_wsock32.c_connect          ; 0057911e
        ;   XREF to: 005c751a (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_connect(SOCKET s, sockaddr * name, int namelen)
    TEST EAX,EAX                        ; 00579123
    JNZ 0x00579132                      ; 00579125
        ;   XREF to: 00579132 (CONDITIONAL_JUMP)  ; LAB_00579132
    MOV EAX,0x1                         ; 00579127
        ;   Label: LAB_00579127
    ADD ESP,0x20                        ; 0057912c
    POP EDI                             ; 0057912f
    POP ESI                             ; 00579130
    RET                                 ; 00579131
    CALL crt_wsock32.c_WSAGetLastError  ; 00579132
        ;   XREF to: 005c7544 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_WSAGetLastError()
        ;   Label: LAB_00579132
    CMP EAX,0x2733                      ; 00579137
    JZ 0x00579127                       ; 0057913c
        ;   XREF to: 00579127 (CONDITIONAL_JUMP)  ; LAB_00579127
    XOR EAX,EAX                         ; 0057913e
    ADD ESP,0x20                        ; 00579140
    POP EDI                             ; 00579143
    POP ESI                             ; 00579144
    RET                                 ; 00579145

