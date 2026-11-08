; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00578e80(undefined4 *param_1,short *param_2)
;
;
; XREF[2]:
;   FUN_00579240 at 005792a8
;   FUN_00579430 at 00579468
;
; Referenced Globals:
;   TerminatedCString s_support_trisock_cpp_005ed014
;   TerminatedCString s_sockaddr_is_not_of_AF_IN_005ed02b
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_00578be0
;   Ordinal_15
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578e80
        ;   Label: FUN_00578e80
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
    CALL Ordinal_15                     ; 00578e9a
        ;   XREF to: 005c7532 (UNCONDITIONAL_CALL)  ; undefined Ordinal_15()
    MOV word ptr [EBX + 0x4],AX         ; 00578e9f
    LEA EAX,[ESI + 0x4]                 ; 00578ea3
    PUSH EAX                            ; 00578ea6
    LEA EAX,[ESP + 0x4]                 ; 00578ea7
    PUSH EAX                            ; 00578eab
    CALL FUN_00578be0                   ; 00578eac
        ;   XREF to: 00578be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00578be0()
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
    CALL FUN_004e4500                   ; 00578edb
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00578ee0
    JMP 0x00578e93                      ; 00578ee3
        ;   XREF to: 00578e93 (UNCONDITIONAL_JUMP)  ; LAB_00578e93

