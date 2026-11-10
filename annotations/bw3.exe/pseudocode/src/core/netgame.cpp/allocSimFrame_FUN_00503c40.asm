; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * core_netgame_cpp_allocSimFrame_FUN_00503c40(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01dc5c80
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503c40
        ;   Label: core_netgame.cpp_allocSimFrame_FUN_00503c40
    PUSH EBP                            ; 00503c41
    MOV EBX,dword ptr [ESP + 0xc]       ; 00503c42
    MOV ECX,dword ptr [0x01dc5c80]      ; 00503c46 | DAT_01dc5c80
    XOR EDX,EDX                         ; 00503c4c
    TEST ECX,ECX                        ; 00503c4e
    JLE 0x00503c81                      ; 00503c50
        ;   XREF to: 00503c81 (CONDITIONAL_JUMP)  ; LAB_00503c81
    PUSH ESI                            ; 00503c52
    MOV ESI,ECX                         ; 00503c53
    SHL ECX,0x3                         ; 00503c55
    SUB ECX,ESI                         ; 00503c58
    SHL ECX,0x2                         ; 00503c5a
    ADD ECX,ESI                         ; 00503c5d
    XOR EAX,EAX                         ; 00503c5f
    SHL ECX,0x2                         ; 00503c61
    POP ESI                             ; 00503c64
    CMP EBX,dword ptr [EAX + 0x1dc5c84] ; 00503c65
        ;   Label: LAB_00503c65
    JNZ 0x00503c79                      ; 00503c6b
        ;   XREF to: 00503c79 (CONDITIONAL_JUMP)  ; LAB_00503c79
    TEST EDX,EDX                        ; 00503c6d
    JL 0x00503c81                       ; 00503c6f
        ;   XREF to: 00503c81 (CONDITIONAL_JUMP)  ; LAB_00503c81
    ADD EAX,0x1dc5c84                   ; 00503c71
    POP EBP                             ; 00503c76
    POP EBX                             ; 00503c77
    RET                                 ; 00503c78
    ADD EAX,0x74                        ; 00503c79
        ;   Label: LAB_00503c79
    INC EDX                             ; 00503c7c
    CMP EAX,ECX                         ; 00503c7d
    JL 0x00503c65                       ; 00503c7f
        ;   XREF to: 00503c65 (CONDITIONAL_JUMP)  ; LAB_00503c65
    CMP dword ptr [0x01dc5c80],0x200    ; 00503c81 | DAT_01dc5c80
        ;   Label: LAB_00503c81
    JL 0x00503caf                       ; 00503c8b
        ;   XREF to: 00503caf (CONDITIONAL_JUMP)  ; LAB_00503caf
    MOV EBP,0x5ca43b                    ; 00503c8d
    MOV EAX,0x12b                       ; 00503c92
    PUSH 0x5ca44f                       ; 00503c97
    MOV dword ptr [0x01d71de0],EBP      ; 00503c9c | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00503ca2 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00503ca7
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00503cac
    MOV EDX,dword ptr [0x01dc5c80]      ; 00503caf | DAT_01dc5c80
        ;   Label: LAB_00503caf
    LEA EAX,[EDX*0x8 + 0x0]             ; 00503cb5
    SUB EAX,EDX                         ; 00503cbc
    SHL EAX,0x2                         ; 00503cbe
    MOV EBX,0x1dc5c84                   ; 00503cc1
    ADD EAX,EDX                         ; 00503cc6
    PUSH 0x74                           ; 00503cc8
    SHL EAX,0x2                         ; 00503cca
    PUSH 0x0                            ; 00503ccd
    ADD EBX,EAX                         ; 00503ccf
    INC EDX                             ; 00503cd1
    PUSH EBX                            ; 00503cd2
    MOV dword ptr [0x01dc5c80],EDX      ; 00503cd3 | DAT_01dc5c80
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00503cd9
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00503cde
    MOV EAX,dword ptr [ESP + 0xc]       ; 00503ce1
    MOV dword ptr [EBX],EAX             ; 00503ce5
    MOV EAX,EBX                         ; 00503ce7
    POP EBP                             ; 00503ce9
    POP EBX                             ; 00503cea
    RET                                 ; 00503ceb

