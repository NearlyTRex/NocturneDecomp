; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_0060fcf4(short *param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   crt_env.c_putenv_internal_FUN_0060ee80 at 0060f03c
;   crt_unknown.c_FUN_0060fb40 at 0060fc64
;   crt_unknown.c_FUN_00610900 at 0061094a
;
; Referenced Globals:
;   char** g_EnvironStringArea
;   int g_EnvironInitialized
;
; Called Functions:
;   crt_memory.c_malloc_FUN_00601bb0
;   crt_memory.c_memset_FUN_005fde40
;   crt_memory.c_realloc_FUN_00601df0
;   crt_string.c_memcpy_FUN_0060cd60
;   crt_string.c_memmove_FUN_005fe5e0
;   crt_unknown.c_FUN_0060fe94
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060fcf4
        ;   Label: crt_unknown.c_FUN_0060fcf4
    PUSH ESI                            ; 0060fcf5
    PUSH EDI                            ; 0060fcf6
    PUSH EBP                            ; 0060fcf7
    SUB ESP,0x8                         ; 0060fcf8
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0060fcfb
    TEST EDX,EDX                        ; 0060fcff
    JNZ 0x0060fd0d                      ; 0060fd01
        ;   XREF to: 0060fd0d (CONDITIONAL_JUMP)  ; LAB_0060fd0d
    MOV EAX,0xffffffff                  ; 0060fd03
    JMP 0x0060fe8a                      ; 0060fd08
        ;   XREF to: 0060fe8a (UNCONDITIONAL_JUMP)  ; LAB_0060fe8a
    CMP word ptr [EDX],0x0              ; 0060fd0d
        ;   Label: LAB_0060fd0d
    JZ 0x0060fd35                       ; 0060fd11
        ;   XREF to: 0060fd35 (CONDITIONAL_JUMP)  ; LAB_0060fd35
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0060fd13
    MOV BX,word ptr [EAX + 0x2]         ; 0060fd17
    ADD EAX,0x2                         ; 0060fd1b
    TEST BX,BX                          ; 0060fd1e
    JZ 0x0060fd35                       ; 0060fd21
        ;   XREF to: 0060fd35 (CONDITIONAL_JUMP)  ; LAB_0060fd35
    CMP word ptr [EAX],0x3d             ; 0060fd23
        ;   Label: LAB_0060fd23
    JZ 0x0060fd35                       ; 0060fd27
        ;   XREF to: 0060fd35 (CONDITIONAL_JUMP)  ; LAB_0060fd35
    MOV CX,word ptr [EAX + 0x2]         ; 0060fd29
    ADD EAX,0x2                         ; 0060fd2d
    TEST CX,CX                          ; 0060fd30
    JNZ 0x0060fd23                      ; 0060fd33
        ;   XREF to: 0060fd23 (CONDITIONAL_JUMP)  ; LAB_0060fd23
    CMP word ptr [EAX],0x0              ; 0060fd35
        ;   Label: LAB_0060fd35
    JNZ 0x0060fd48                      ; 0060fd39
        ;   XREF to: 0060fd48 (CONDITIONAL_JUMP)  ; LAB_0060fd48
    MOV EAX,0xffffffff                  ; 0060fd3b
    ADD ESP,0x8                         ; 0060fd40
    POP EBP                             ; 0060fd43
    POP EDI                             ; 0060fd44
    POP ESI                             ; 0060fd45
    POP EBX                             ; 0060fd46
    RET                                 ; 0060fd47
    CMP word ptr [EAX + 0x2],0x0        ; 0060fd48
        ;   Label: LAB_0060fd48
    SETZ AL                             ; 0060fd4d
    MOV EBX,dword ptr [0x03f9b868]      ; 0060fd50 | g_EnvironInitialized
    MOVZX ESI,AL                        ; 0060fd56
    TEST EBX,EBX                        ; 0060fd59
    JNZ 0x0060fd9a                      ; 0060fd5b
        ;   XREF to: 0060fd9a (CONDITIONAL_JUMP)  ; LAB_0060fd9a
    TEST ESI,ESI                        ; 0060fd5d
    JNZ 0x0060fe88                      ; 0060fd5f
        ;   XREF to: 0060fe88 (CONDITIONAL_JUMP)  ; LAB_0060fe88
    PUSH 0x9                            ; 0060fd65
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 0060fd67
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    ADD ESP,0x4                         ; 0060fd6c
    MOV EBX,EAX                         ; 0060fd6f
    TEST EAX,EAX                        ; 0060fd71
    JNZ 0x0060fd82                      ; 0060fd73
        ;   XREF to: 0060fd82 (CONDITIONAL_JUMP)  ; LAB_0060fd82
    MOV EAX,0xffffffff                  ; 0060fd75
    ADD ESP,0x8                         ; 0060fd7a
    POP EBP                             ; 0060fd7d
    POP EDI                             ; 0060fd7e
    POP ESI                             ; 0060fd7f
    POP EBX                             ; 0060fd80
    RET                                 ; 0060fd81
    MOV [0x03f9b868],EAX                ; 0060fd82 | g_EnvironInitialized
        ;   Label: LAB_0060fd82
    ADD EAX,0x8                         ; 0060fd87
    MOV dword ptr [EAX + -0x8],ESI      ; 0060fd8a
    MOV dword ptr [EAX + -0x4],ESI      ; 0060fd8d
    MOV [0x03f9b860],EAX                ; 0060fd90 | g_EnvironStringArea
    JMP 0x0060fe70                      ; 0060fd95
        ;   XREF to: 0060fe70 (UNCONDITIONAL_JUMP)  ; LAB_0060fe70
    PUSH ESI                            ; 0060fd9a
        ;   Label: LAB_0060fd9a
    MOV ECX,dword ptr [ESP + 0x20]      ; 0060fd9b
    PUSH ECX                            ; 0060fd9f
    CALL crt_unknown.c_FUN_0060fe94     ; 0060fda0
        ;   XREF to: 0060fe94 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0060fe94()
    ADD ESP,0x8                         ; 0060fda5
    TEST ESI,ESI                        ; 0060fda8
    JNZ 0x0060fe88                      ; 0060fdaa
        ;   XREF to: 0060fe88 (CONDITIONAL_JUMP)  ; LAB_0060fe88
    TEST EAX,EAX                        ; 0060fdb0
    JG 0x0060fe6d                       ; 0060fdb2
        ;   XREF to: 0060fe6d (CONDITIONAL_JUMP)  ; LAB_0060fe6d
    NEG EAX                             ; 0060fdb8
    MOV ESI,EAX                         ; 0060fdba
    INC EAX                             ; 0060fdbc
    MOV dword ptr [ESP + 0x4],EAX       ; 0060fdbd
    MOV EAX,ESI                         ; 0060fdc1
    SHL EAX,0x2                         ; 0060fdc3
    MOV dword ptr [ESP],EAX             ; 0060fdc6
    LEA EBP,[EAX + 0x8]                 ; 0060fdc9
    MOV EAX,dword ptr [ESP + 0x4]       ; 0060fdcc
    MOV EDI,dword ptr [0x03f9b860]      ; 0060fdd0 | g_EnvironStringArea
    ADD EAX,EBP                         ; 0060fdd6
    TEST EDI,EDI                        ; 0060fdd8
    JNZ 0x0060fe27                      ; 0060fdda
        ;   XREF to: 0060fe27 (CONDITIONAL_JUMP)  ; LAB_0060fe27
    PUSH EAX                            ; 0060fddc
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 0060fddd
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    MOV EDI,EAX                         ; 0060fde2
    ADD ESP,0x4                         ; 0060fde4
    MOV EBX,EAX                         ; 0060fde7
    TEST EAX,EAX                        ; 0060fde9
    JNZ 0x0060fdfa                      ; 0060fdeb
        ;   XREF to: 0060fdfa (CONDITIONAL_JUMP)  ; LAB_0060fdfa
    MOV EAX,0xffffffff                  ; 0060fded
    ADD ESP,0x8                         ; 0060fdf2
    POP EBP                             ; 0060fdf5
    POP EDI                             ; 0060fdf6
    POP ESI                             ; 0060fdf7
    POP EBX                             ; 0060fdf8
    RET                                 ; 0060fdf9
    MOV ECX,dword ptr [ESP]             ; 0060fdfa
        ;   Label: LAB_0060fdfa
    PUSH ECX                            ; 0060fdfd
    MOV EAX,[0x03f9b868]                ; 0060fdfe | g_EnvironInitialized
    PUSH EAX                            ; 0060fe03
    PUSH EDI                            ; 0060fe04
    CALL crt_string.c_memcpy_FUN_0060cd60 ; 0060fe05
        ;   XREF to: 0060cd60 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memcpy_FUN_0060cd60(void * dest, void * src, SIZE_T count)
    ADD ESP,0xc                         ; 0060fe0a
    MOV EDX,dword ptr [ESP + 0x4]       ; 0060fe0d
    PUSH EDX                            ; 0060fe11
    PUSH 0x0                            ; 0060fe12
    ADD EDI,EBP                         ; 0060fe14
    PUSH EDI                            ; 0060fe16
    MOV dword ptr [0x03f9b860],EDI      ; 0060fe17 | g_EnvironStringArea
    CALL crt_memory.c_memset_FUN_005fde40 ; 0060fe1d
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0060fe22
    JMP 0x0060fe5d                      ; 0060fe25
        ;   XREF to: 0060fe5d (UNCONDITIONAL_JUMP)  ; LAB_0060fe5d
    PUSH EAX                            ; 0060fe27
        ;   Label: LAB_0060fe27
    PUSH EBX                            ; 0060fe28
    CALL crt_memory.c_realloc_FUN_00601df0 ; 0060fe29
        ;   XREF to: 00601df0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_00601df0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 0060fe2e
    MOV EBX,EAX                         ; 0060fe31
    TEST EAX,EAX                        ; 0060fe33
    JNZ 0x0060fe44                      ; 0060fe35
        ;   XREF to: 0060fe44 (CONDITIONAL_JUMP)  ; LAB_0060fe44
    MOV EAX,0xffffffff                  ; 0060fe37
    ADD ESP,0x8                         ; 0060fe3c
    POP EBP                             ; 0060fe3f
    POP EDI                             ; 0060fe40
    POP ESI                             ; 0060fe41
    POP EBX                             ; 0060fe42
    RET                                 ; 0060fe43
    PUSH ESI                            ; 0060fe44
        ;   Label: LAB_0060fe44
    MOV EDX,dword ptr [0x03f9b860]      ; 0060fe45 | g_EnvironStringArea
    PUSH EDX                            ; 0060fe4b
    ADD EBP,EAX                         ; 0060fe4c
    PUSH EBP                            ; 0060fe4e
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 0060fe4f
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0060fe54
    MOV dword ptr [0x03f9b860],EBP      ; 0060fe57 | g_EnvironStringArea
    MOV dword ptr [EBX + ESI*0x4 + 0x4],0x0 ; 0060fe5d
        ;   Label: LAB_0060fe5d
    MOV dword ptr [0x03f9b868],EBX      ; 0060fe65 | g_EnvironInitialized
    JMP 0x0060fe70                      ; 0060fe6b
        ;   XREF to: 0060fe70 (UNCONDITIONAL_JUMP)  ; LAB_0060fe70
    LEA ESI,[EAX + -0x1]                ; 0060fe6d
        ;   Label: LAB_0060fe6d
    LEA EAX,[ESI*0x4 + 0x0]             ; 0060fe70
        ;   Label: LAB_0060fe70
    ADD EBX,EAX                         ; 0060fe77
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0060fe79
    MOV dword ptr [EBX],EAX             ; 0060fe7d
    MOV EAX,[0x03f9b860]                ; 0060fe7f | g_EnvironStringArea
    MOV byte ptr [ESI + EAX*0x1],0x0    ; 0060fe84
    XOR EAX,EAX                         ; 0060fe88
        ;   Label: LAB_0060fe88
    ADD ESP,0x8                         ; 0060fe8a
        ;   Label: LAB_0060fe8a
    POP EBP                             ; 0060fe8d
    POP EDI                             ; 0060fe8e
    POP ESI                             ; 0060fe8f
    POP EBX                             ; 0060fe90
    RET                                 ; 0060fe91

