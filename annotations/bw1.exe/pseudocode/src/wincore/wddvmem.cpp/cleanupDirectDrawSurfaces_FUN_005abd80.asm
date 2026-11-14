; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_cleanupDirectDrawSurfaces_FUN_005abd80(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02c99304
;   undefined4 DAT_02c99308
;   undefined4 DAT_02c9930c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005abd80
        ;   Label: wincore_wddvmem.cpp_cleanupDirectDrawSurfaces_FUN_005abd80
    PUSH EDI                            ; 005abd81
    PUSH EBP                            ; 005abd82
    MOV EDX,dword ptr [0x02c9930c]      ; 005abd83 | DAT_02c9930c
    TEST EDX,EDX                        ; 005abd89
    JNZ 0x005abdb5                      ; 005abd8b
        ;   XREF to: 005abdb5 (CONDITIONAL_JUMP)  ; LAB_005abdb5
    MOV EBX,dword ptr [0x02c99308]      ; 005abd8d | DAT_02c99308
        ;   Label: LAB_005abd8d
    TEST EBX,EBX                        ; 005abd93
    JZ 0x005abda7                       ; 005abd95
        ;   XREF to: 005abda7 (CONDITIONAL_JUMP)  ; LAB_005abda7
    PUSH ESI                            ; 005abd97
    PUSH EBX                            ; 005abd98
    MOV EDX,dword ptr [EBX]             ; 005abd99
    XOR ESI,ESI                         ; 005abd9b
    CALL dword ptr [EDX + 0x8]          ; 005abd9d
    MOV dword ptr [0x02c99308],ESI      ; 005abda0 | DAT_02c99308
    POP ESI                             ; 005abda6
    MOV EDI,dword ptr [0x02c99304]      ; 005abda7 | DAT_02c99304
        ;   Label: LAB_005abda7
    TEST EDI,EDI                        ; 005abdad
    JNZ 0x005abdc7                      ; 005abdaf
        ;   XREF to: 005abdc7 (CONDITIONAL_JUMP)  ; LAB_005abdc7
    POP EBP                             ; 005abdb1
    POP EDI                             ; 005abdb2
    POP EBX                             ; 005abdb3
    RET                                 ; 005abdb4
    MOV EAX,EDX                         ; 005abdb5
        ;   Label: LAB_005abdb5
    PUSH EAX                            ; 005abdb7
    MOV EDX,dword ptr [EDX]             ; 005abdb8
    CALL dword ptr [EDX + 0x8]          ; 005abdba
    XOR ECX,ECX                         ; 005abdbd
    MOV dword ptr [0x02c9930c],ECX      ; 005abdbf | DAT_02c9930c
    JMP 0x005abd8d                      ; 005abdc5
        ;   XREF to: 005abd8d (UNCONDITIONAL_JUMP)  ; LAB_005abd8d
    PUSH EDI                            ; 005abdc7
        ;   Label: LAB_005abdc7
    MOV EDX,dword ptr [EDI]             ; 005abdc8
    XOR EBP,EBP                         ; 005abdca
    CALL dword ptr [EDX + 0x8]          ; 005abdcc
    MOV dword ptr [0x02c99304],EBP      ; 005abdcf | DAT_02c99304
    POP EBP                             ; 005abdd5
    POP EDI                             ; 005abdd6
    POP EBX                             ; 005abdd7
    RET                                 ; 005abdd8

