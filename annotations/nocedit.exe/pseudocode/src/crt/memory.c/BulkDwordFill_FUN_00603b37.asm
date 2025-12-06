; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallRegister void crt_memory.c_BulkDwordFill_FUN_00603b37(void * dest, uint replicated_value, uint dword_count)
;
;
; XREF[1]:
;   crt_memory.c_OptimizedMemFill_FUN_00603b00 at 00603b17
;
; *****************************************************************************

section .text

    OR ECX,ECX                          ; 00603b37
        ;   Label: crt_memory.c_BulkDwordFill_FUN_00603b37
    JZ 0x00603ba2                       ; 00603b39 | LAB_00603ba2
        ;   XREF to: 00603ba2 (CONDITIONAL_JUMP)
    TEST AL,0x1f                        ; 00603b3b
        ;   Label: LAB_00603b3b
    JZ 0x00603b47                       ; 00603b3d | LAB_00603b47
        ;   XREF to: 00603b47 (CONDITIONAL_JUMP)
    MOV dword ptr [EAX],EDX             ; 00603b3f
    LEA EAX,[EAX + 0x4]                 ; 00603b41
    DEC ECX                             ; 00603b44
    JNZ 0x00603b3b                      ; 00603b45 | LAB_00603b3b
        ;   XREF to: 00603b3b (CONDITIONAL_JUMP)
    PUSH ECX                            ; 00603b47
        ;   Label: LAB_00603b47
    SHR ECX,0x2                         ; 00603b48
    JZ 0x00603b87                       ; 00603b4b | LAB_00603b87
        ;   XREF to: 00603b87 (CONDITIONAL_JUMP)
    DEC ECX                             ; 00603b4d
    JZ 0x00603b79                       ; 00603b4e | LAB_00603b79
        ;   XREF to: 00603b79 (CONDITIONAL_JUMP)
    MOV dword ptr [EAX],EDX             ; 00603b50
        ;   Label: LAB_00603b50
    MOV dword ptr [EAX + 0x4],EDX       ; 00603b52
    DEC ECX                             ; 00603b55
    MOV dword ptr [EAX + 0x8],EDX       ; 00603b56
    MOV dword ptr [EAX + 0xc],EDX       ; 00603b59
    JZ 0x00603b76                       ; 00603b5c | LAB_00603b76
        ;   XREF to: 00603b76 (CONDITIONAL_JUMP)
    CMP byte ptr [EAX + 0x20],DL        ; 00603b5e
    MOV dword ptr [EAX + 0x10],EDX      ; 00603b61
    MOV dword ptr [EAX + 0x14],EDX      ; 00603b64
    DEC ECX                             ; 00603b67
    MOV dword ptr [EAX + 0x18],EDX      ; 00603b68
    MOV dword ptr [EAX + 0x1c],EDX      ; 00603b6b
    LEA EAX,[EAX + 0x20]                ; 00603b6e
    JNZ 0x00603b50                      ; 00603b71 | LAB_00603b50
        ;   XREF to: 00603b50 (CONDITIONAL_JUMP)
    LEA EAX,[EAX + -0x10]               ; 00603b73
    LEA EAX,[EAX + 0x10]                ; 00603b76
        ;   Label: LAB_00603b76
    MOV dword ptr [EAX],EDX             ; 00603b79
        ;   Label: LAB_00603b79
    MOV dword ptr [EAX + 0x4],EDX       ; 00603b7b
    MOV dword ptr [EAX + 0x8],EDX       ; 00603b7e
    MOV dword ptr [EAX + 0xc],EDX       ; 00603b81
    LEA EAX,[EAX + 0x10]                ; 00603b84
    POP ECX                             ; 00603b87
        ;   Label: LAB_00603b87
    AND ECX,0x3                         ; 00603b88
    JZ 0x00603ba2                       ; 00603b8b | LAB_00603ba2
        ;   XREF to: 00603ba2 (CONDITIONAL_JUMP)
    MOV dword ptr [EAX],EDX             ; 00603b8d
    LEA EAX,[EAX + 0x4]                 ; 00603b8f
    DEC ECX                             ; 00603b92
    JZ 0x00603ba2                       ; 00603b93 | LAB_00603ba2
        ;   XREF to: 00603ba2 (CONDITIONAL_JUMP)
    MOV dword ptr [EAX],EDX             ; 00603b95
    LEA EAX,[EAX + 0x4]                 ; 00603b97
    DEC ECX                             ; 00603b9a
    JZ 0x00603ba2                       ; 00603b9b | LAB_00603ba2
        ;   XREF to: 00603ba2 (CONDITIONAL_JUMP)
    MOV dword ptr [EAX],EDX             ; 00603b9d
    LEA EAX,[EAX + 0x4]                 ; 00603b9f
    RET                                 ; 00603ba2
        ;   Label: LAB_00603ba2

