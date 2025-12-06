; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_0060fe94()
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0060fcf4 at 0060fda0
;
; Referenced Globals:
;   char** g_EnvironStringArea
;   int g_EnvironInitialized
;
; Called Functions:
;   crt_memory.c_free_FUN_00601cd0
;   crt_string.c_memmove_FUN_005fe5e0
;   crt_unknown.c_FUN_00610970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060fe94
        ;   Label: crt_unknown.c_FUN_0060fe94
    PUSH ESI                            ; 0060fe95
    PUSH EDI                            ; 0060fe96
    PUSH EBP                            ; 0060fe97
    MOV EBP,dword ptr [0x03f9b868]      ; 0060fe98 | int g_EnvironInitialized
    JMP 0x0060ff88                      ; 0060fe9e | LAB_0060ff88
        ;   XREF to: 0060ff88 (UNCONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x14]      ; 0060fea3
        ;   Label: LAB_0060fea3
    CMP word ptr [ESI],0x0              ; 0060fea7
    JZ 0x0060ff85                       ; 0060feab | LAB_0060ff85
        ;   XREF to: 0060ff85 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0060feb1
        ;   Label: LAB_0060feb1
    MOV AX,word ptr [EBX]               ; 0060feb3
    PUSH EAX                            ; 0060feb6
    CALL crt_unknown.c_FUN_00610970     ; 0060feb7 | undefined crt_unknown.c_FUN_00610970()
        ;   XREF to: 00610970 (UNCONDITIONAL_CALL)
    MOV EDI,EAX                         ; 0060febc
    XOR EAX,EAX                         ; 0060febe
    ADD ESP,0x4                         ; 0060fec0
    MOV AX,word ptr [ESI]               ; 0060fec3
    PUSH EAX                            ; 0060fec6
    CALL crt_unknown.c_FUN_00610970     ; 0060fec7 | undefined crt_unknown.c_FUN_00610970()
        ;   XREF to: 00610970 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060fecc
    CMP DI,AX                           ; 0060fecf
    JNZ 0x0060ff85                      ; 0060fed2 | LAB_0060ff85
        ;   XREF to: 0060ff85 (CONDITIONAL_JUMP)
    CMP word ptr [EBX],0x3d             ; 0060fed8
    JNZ 0x0060ff72                      ; 0060fedc | LAB_0060ff72
        ;   XREF to: 0060ff72 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x03f9b868]      ; 0060fee2 | int g_EnvironInitialized
    MOV ESI,EBP                         ; 0060fee8
    SUB ESI,EDX                         ; 0060feea
    MOV EBX,dword ptr [ESP + 0x18]      ; 0060feec
    SAR ESI,0x2                         ; 0060fef0
    TEST EBX,EBX                        ; 0060fef3
    JZ 0x0060ff6a                       ; 0060fef5 | LAB_0060ff6a
        ;   XREF to: 0060ff6a (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBP]             ; 0060fefb
    MOV EBX,EBP                         ; 0060fefe
    TEST EDX,EDX                        ; 0060ff00
    JZ 0x0060ff13                       ; 0060ff02 | LAB_0060ff13
        ;   XREF to: 0060ff13 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x4]       ; 0060ff04
        ;   Label: LAB_0060ff04
    MOV dword ptr [EBX],EAX             ; 0060ff07
    MOV ECX,dword ptr [EBX + 0x4]       ; 0060ff09
    ADD EBX,0x4                         ; 0060ff0c
    TEST ECX,ECX                        ; 0060ff0f
    JNZ 0x0060ff04                      ; 0060ff11 | LAB_0060ff04
        ;   XREF to: 0060ff04 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [0x03f9b860]      ; 0060ff13 | char * * g_EnvironStringArea
        ;   Label: LAB_0060ff13
    TEST EDI,EDI                        ; 0060ff19
    JZ 0x0060ff63                       ; 0060ff1b | LAB_0060ff63
        ;   XREF to: 0060ff63 (CONDITIONAL_JUMP)
    MOV EAX,EDI                         ; 0060ff1d
    CMP byte ptr [ESI + EAX*0x1],0x0    ; 0060ff1f
    JZ 0x0060ff2e                       ; 0060ff23 | LAB_0060ff2e
        ;   XREF to: 0060ff2e (CONDITIONAL_JUMP)
    PUSH EDX                            ; 0060ff25
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060ff26 | void crt_memory.c_free_FUN_00601cd0(void * ptr)
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060ff2b
    MOV EAX,[0x03f9b868]                ; 0060ff2e | int g_EnvironInitialized
        ;   Label: LAB_0060ff2e
    MOV EBP,EBX                         ; 0060ff33
    SUB EBP,EAX                         ; 0060ff35
    SAR EBP,0x2                         ; 0060ff37
    PUSH EBP                            ; 0060ff3a
    MOV EDX,dword ptr [0x03f9b860]      ; 0060ff3b | char * * g_EnvironStringArea
    PUSH EDX                            ; 0060ff41
    PUSH EBX                            ; 0060ff42
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 0060ff43 | void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0060ff48
    MOV dword ptr [0x03f9b860],EBX      ; 0060ff4b | char * * g_EnvironStringArea
    CMP ESI,EBP                         ; 0060ff51
    JGE 0x0060ff63                      ; 0060ff53 | LAB_0060ff63
        ;   XREF to: 0060ff63 (CONDITIONAL_JUMP)
    LEA EAX,[ESI + EBX*0x1]             ; 0060ff55
    INC EAX                             ; 0060ff58
        ;   Label: LAB_0060ff58
    MOV BL,byte ptr [EAX]               ; 0060ff59
    INC ESI                             ; 0060ff5b
    MOV byte ptr [EAX + -0x1],BL        ; 0060ff5c
    CMP ESI,EBP                         ; 0060ff5f
    JL 0x0060ff58                       ; 0060ff61 | LAB_0060ff58
        ;   XREF to: 0060ff58 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0060ff63
        ;   Label: LAB_0060ff63
    POP EBP                             ; 0060ff65
    POP EDI                             ; 0060ff66
    POP ESI                             ; 0060ff67
    POP EBX                             ; 0060ff68
    RET                                 ; 0060ff69
    LEA EAX,[ESI + 0x1]                 ; 0060ff6a
        ;   Label: LAB_0060ff6a
    POP EBP                             ; 0060ff6d
    POP EDI                             ; 0060ff6e
    POP ESI                             ; 0060ff6f
    POP EBX                             ; 0060ff70
    RET                                 ; 0060ff71
    ADD EBX,0x2                         ; 0060ff72
        ;   Label: LAB_0060ff72
    MOV CX,word ptr [ESI + 0x2]         ; 0060ff75
    ADD ESI,0x2                         ; 0060ff79
    TEST CX,CX                          ; 0060ff7c
    JNZ 0x0060feb1                      ; 0060ff7f | LAB_0060feb1
        ;   XREF to: 0060feb1 (CONDITIONAL_JUMP)
    ADD EBP,0x4                         ; 0060ff85
        ;   Label: LAB_0060ff85
    MOV EBX,dword ptr [EBP]             ; 0060ff88
        ;   Label: LAB_0060ff88
    TEST EBX,EBX                        ; 0060ff8b
    JNZ 0x0060fea3                      ; 0060ff8d | LAB_0060fea3
        ;   XREF to: 0060fea3 (CONDITIONAL_JUMP)
    MOV EAX,[0x03f9b868]                ; 0060ff93 | int g_EnvironInitialized
    SUB EAX,EBP                         ; 0060ff98
    SAR EAX,0x2                         ; 0060ff9a
    POP EBP                             ; 0060ff9d
    POP EDI                             ; 0060ff9e
    POP ESI                             ; 0060ff9f
    POP EBX                             ; 0060ffa0
    RET                                 ; 0060ffa1

