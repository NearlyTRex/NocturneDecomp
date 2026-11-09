; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * __cdecl support_trisock_cpp_convertSockAddr_FUN_00578e80(undefined4 *param_1,short *param_2)
;
;
; XREF[2]:
;   support_trisock.cpp_CSocket_getSocketName_FUN_00579430 at 00579468
;   support_trisock.cpp_FUN_00579240 at 005792a8
;
; Referenced Globals:
;   TerminatedCString s_support_trisock_cpp_005ed014
;   TerminatedCString s_sockaddr_is_not_of_AF_IN_005ed02b
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_wsock32.c_ntohs
;   support_trisock.cpp_FUN_00578be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578e80
        ;   Label: support_trisock.cpp_convertSockAddr_FUN_00578e80
    PUSH ESI                            ; 00578e81
    SUB ESP,0x4                         ; 00578e82
    MOV EBX,dword ptr [ESP + 0x10]      ; 00578e85
    MOV ESI,dword ptr [ESP + 0x14]      ; 00578e89
    CMP word ptr [ESI],0x2              ; 00578e8d
    JNZ 0x00578ec0                      ; 00578e91
        ;   XREF to: 00578ec0 (CONDITIONAL_JUMP)  ; LAB_00578ec0
    XOR EAX,EAX                         ; 00578e93
        ;   Label: LAB_00578e93
    MOV AX,word ptr [ESI + 0x2]         ; 00578e95
    PUSH EAX                            ; 00578e99
    CALL crt_wsock32.c_ntohs            ; 00578e9a
        ;   XREF to: 005c7532 (UNCONDITIONAL_CALL)  ; ushort crt_wsock32.c_ntohs(ushort netshort)
    MOV word ptr [EBX + 0x4],AX         ; 00578e9f
    LEA EAX,[ESI + 0x4]                 ; 00578ea3
    PUSH EAX                            ; 00578ea6
    LEA EAX,[ESP + 0x4]                 ; 00578ea7
    PUSH EAX                            ; 00578eab
    CALL support_trisock.cpp_FUN_00578be0 ; 00578eac
        ;   XREF to: 00578be0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00578be0()
    MOV EAX,dword ptr [EAX]             ; 00578eb1
    ADD ESP,0x8                         ; 00578eb3
    MOV dword ptr [EBX],EAX             ; 00578eb6
    MOV EAX,EBX                         ; 00578eb8
    ADD ESP,0x4                         ; 00578eba
    POP ESI                             ; 00578ebd
    POP EBX                             ; 00578ebe
    RET                                 ; 00578ebf
    MOV EDX,0x5ed014                    ; 00578ec0 | = "..\\support\\trisock.cpp"
        ;   Label: LAB_00578ec0
    MOV ECX,0xd6                        ; 00578ec5
    PUSH 0x5ed02b                       ; 00578eca | = "sockaddr is not of AF_INET family!"
    MOV dword ptr [0x01d046a0],EDX      ; 00578ecf | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00578ed5 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00578edb
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00578ee0
    JMP 0x00578e93                      ; 00578ee3
        ;   XREF to: 00578e93 (UNCONDITIONAL_JUMP)  ; LAB_00578e93

