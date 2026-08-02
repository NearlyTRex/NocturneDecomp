; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_env_c_updateEnvironTable_FUN_00573afc(char *envstr)
;
; Parameters:
; char *           Stack[0x4]:4   envstr
;
; XREF[2]:
;   crt_env.c_putenv_internal_FUN_00573930 at 00573a66
;   crt_unknown.c_FUN_005740b0 at 00574251
;
; Referenced Globals:
;   undefined4 DAT_02de54a0
;   undefined4 DAT_02de54a4
;
; Called Functions:
;   crt_env.c_findEnvVar_FUN_00573ca0
;   crt_memory.c_malloc_FUN_005635b0
;   crt_memory.c_memset_FUN_00563cc0
;   crt_memory.c_realloc_FUN_00564a70
;   crt_string.c_memmove_FUN_00566170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573afc
        ;   Label: crt_env.c_updateEnvironTable_FUN_00573afc
    PUSH ESI                            ; 00573afd
    PUSH EDI                            ; 00573afe
    PUSH EBP                            ; 00573aff
    SUB ESP,0x8                         ; 00573b00
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00573b03
    TEST EDX,EDX                        ; 00573b07
    JNZ 0x00573b15                      ; 00573b09
        ;   XREF to: 00573b15 (CONDITIONAL_JUMP)  ; LAB_00573b15
    MOV EAX,0xffffffff                  ; 00573b0b
    JMP 0x00573c97                      ; 00573b10
        ;   XREF to: 00573c97 (UNCONDITIONAL_JUMP)  ; LAB_00573c97
    CMP byte ptr [EDX],0x0              ; 00573b15
        ;   Label: LAB_00573b15
    JZ 0x00573b2f                       ; 00573b18
        ;   XREF to: 00573b2f (CONDITIONAL_JUMP)  ; LAB_00573b2f
    LEA EAX,[EDX + 0x1]                 ; 00573b1a
    CMP byte ptr [EAX],0x0              ; 00573b1d
    JZ 0x00573b2f                       ; 00573b20
        ;   XREF to: 00573b2f (CONDITIONAL_JUMP)  ; LAB_00573b2f
    CMP byte ptr [EAX],0x3d             ; 00573b22
        ;   Label: LAB_00573b22
    JZ 0x00573b2f                       ; 00573b25
        ;   XREF to: 00573b2f (CONDITIONAL_JUMP)  ; LAB_00573b2f
    MOV CL,byte ptr [EAX + 0x1]         ; 00573b27
    INC EAX                             ; 00573b2a
    TEST CL,CL                          ; 00573b2b
    JNZ 0x00573b22                      ; 00573b2d
        ;   XREF to: 00573b22 (CONDITIONAL_JUMP)  ; LAB_00573b22
    CMP byte ptr [EAX],0x0              ; 00573b2f
        ;   Label: LAB_00573b2f
    JNZ 0x00573b41                      ; 00573b32
        ;   XREF to: 00573b41 (CONDITIONAL_JUMP)  ; LAB_00573b41
    MOV EAX,0xffffffff                  ; 00573b34
    ADD ESP,0x8                         ; 00573b39
    POP EBP                             ; 00573b3c
    POP EDI                             ; 00573b3d
    POP ESI                             ; 00573b3e
    POP EBX                             ; 00573b3f
    RET                                 ; 00573b40
    CMP byte ptr [EAX + 0x1],0x0        ; 00573b41
        ;   Label: LAB_00573b41
    SETZ AL                             ; 00573b45
    MOV EBX,dword ptr [0x02de54a4]      ; 00573b48 | DAT_02de54a4
    MOVZX EBP,AL                        ; 00573b4e
    TEST EBX,EBX                        ; 00573b51
    JNZ 0x00573b92                      ; 00573b53
        ;   XREF to: 00573b92 (CONDITIONAL_JUMP)  ; LAB_00573b92
    TEST EBP,EBP                        ; 00573b55
    JNZ 0x00573c95                      ; 00573b57
        ;   XREF to: 00573c95 (CONDITIONAL_JUMP)  ; LAB_00573c95
    PUSH 0x9                            ; 00573b5d
    CALL crt_memory.c_malloc_FUN_005635b0 ; 00573b5f
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 00573b64
    MOV EBX,EAX                         ; 00573b67
    TEST EAX,EAX                        ; 00573b69
    JNZ 0x00573b7a                      ; 00573b6b
        ;   XREF to: 00573b7a (CONDITIONAL_JUMP)  ; LAB_00573b7a
    MOV EAX,0xffffffff                  ; 00573b6d
    ADD ESP,0x8                         ; 00573b72
    POP EBP                             ; 00573b75
    POP EDI                             ; 00573b76
    POP ESI                             ; 00573b77
    POP EBX                             ; 00573b78
    RET                                 ; 00573b79
    MOV [0x02de54a4],EAX                ; 00573b7a | DAT_02de54a4
        ;   Label: LAB_00573b7a
    ADD EAX,0x8                         ; 00573b7f
    MOV dword ptr [EAX + -0x8],EBP      ; 00573b82
    MOV dword ptr [EAX + -0x4],EBP      ; 00573b85
    MOV [0x02de54a0],EAX                ; 00573b88 | DAT_02de54a0
    JMP 0x00573c7d                      ; 00573b8d
        ;   XREF to: 00573c7d (UNCONDITIONAL_JUMP)  ; LAB_00573c7d
    PUSH EBP                            ; 00573b92
        ;   Label: LAB_00573b92
    MOV ECX,dword ptr [ESP + 0x20]      ; 00573b93
    PUSH ECX                            ; 00573b97
    CALL crt_env.c_findEnvVar_FUN_00573ca0 ; 00573b98
        ;   XREF to: 00573ca0 (UNCONDITIONAL_CALL)  ; int crt_env.c_findEnvVar_FUN_00573ca0(char * name, int delete_flag)
    ADD ESP,0x8                         ; 00573b9d
    TEST EBP,EBP                        ; 00573ba0
    JNZ 0x00573c95                      ; 00573ba2
        ;   XREF to: 00573c95 (CONDITIONAL_JUMP)  ; LAB_00573c95
    TEST EAX,EAX                        ; 00573ba8
    JG 0x00573c7a                       ; 00573baa
        ;   XREF to: 00573c7a (CONDITIONAL_JUMP)  ; LAB_00573c7a
    NEG EAX                             ; 00573bb0
    MOV EDX,dword ptr [0x02de54a0]      ; 00573bb2 | DAT_02de54a0
    MOV EBP,EAX                         ; 00573bb8
    INC EAX                             ; 00573bba
    LEA ESI,[EBP*0x4 + 0x0]             ; 00573bbb
    MOV dword ptr [ESP],EAX             ; 00573bc2
    LEA EAX,[ESI + 0x8]                 ; 00573bc5
    MOV EDI,dword ptr [ESP]             ; 00573bc8
    MOV dword ptr [ESP + 0x4],EAX       ; 00573bcb
    ADD EAX,EDI                         ; 00573bcf
    TEST EDX,EDX                        ; 00573bd1
    JNZ 0x00573c30                      ; 00573bd3
        ;   XREF to: 00573c30 (CONDITIONAL_JUMP)  ; LAB_00573c30
    PUSH EAX                            ; 00573bd5
    CALL crt_memory.c_malloc_FUN_005635b0 ; 00573bd6
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    MOV EDX,EAX                         ; 00573bdb
    ADD ESP,0x4                         ; 00573bdd
    MOV EBX,EAX                         ; 00573be0
    TEST EAX,EAX                        ; 00573be2
    JNZ 0x00573bf3                      ; 00573be4
        ;   XREF to: 00573bf3 (CONDITIONAL_JUMP)  ; LAB_00573bf3
    MOV EAX,0xffffffff                  ; 00573be6
    ADD ESP,0x8                         ; 00573beb
    POP EBP                             ; 00573bee
    POP EDI                             ; 00573bef
    POP ESI                             ; 00573bf0
    POP EBX                             ; 00573bf1
    RET                                 ; 00573bf2
    MOV EAX,[0x02de54a4]                ; 00573bf3 | DAT_02de54a4
        ;   Label: LAB_00573bf3
    MOV ECX,ESI                         ; 00573bf8
    MOV EDI,EDX                         ; 00573bfa
    MOV ESI,EAX                         ; 00573bfc
    PUSH ES                             ; 00573bfe
    MOV AX,DS                           ; 00573bff
    MOV ES,AX                           ; 00573c01
    PUSH EDI                            ; 00573c03
    MOV EAX,ECX                         ; 00573c04
    SHR ECX,0x2                         ; 00573c06
    MOVSD.REP ES:EDI,ESI                ; 00573c09
    MOV CL,AL                           ; 00573c0b
    AND CL,0x3                          ; 00573c0d
    MOVSB.REP ES:EDI,ESI                ; 00573c10
    POP EDI                             ; 00573c12
    POP ES                              ; 00573c13
    MOV ESI,dword ptr [ESP]             ; 00573c14
    PUSH ESI                            ; 00573c17
    MOV EAX,dword ptr [ESP + 0x8]       ; 00573c18
    PUSH 0x0                            ; 00573c1c
    ADD EAX,EDX                         ; 00573c1e
    PUSH EAX                            ; 00573c20
    MOV [0x02de54a0],EAX                ; 00573c21 | DAT_02de54a0
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00573c26
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00573c2b
    JMP 0x00573c6a                      ; 00573c2e
        ;   XREF to: 00573c6a (UNCONDITIONAL_JUMP)  ; LAB_00573c6a
    PUSH EAX                            ; 00573c30
        ;   Label: LAB_00573c30
    PUSH EBX                            ; 00573c31
    CALL crt_memory.c_realloc_FUN_00564a70 ; 00573c32
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_00564a70(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 00573c37
    MOV EBX,EAX                         ; 00573c3a
    TEST EAX,EAX                        ; 00573c3c
    JNZ 0x00573c4d                      ; 00573c3e
        ;   XREF to: 00573c4d (CONDITIONAL_JUMP)  ; LAB_00573c4d
    MOV EAX,0xffffffff                  ; 00573c40
    ADD ESP,0x8                         ; 00573c45
    POP EBP                             ; 00573c48
    POP EDI                             ; 00573c49
    POP ESI                             ; 00573c4a
    POP EBX                             ; 00573c4b
    RET                                 ; 00573c4c
    PUSH EBP                            ; 00573c4d
        ;   Label: LAB_00573c4d
    MOV ECX,dword ptr [0x02de54a0]      ; 00573c4e | DAT_02de54a0
    MOV ESI,dword ptr [ESP + 0x8]       ; 00573c54
    PUSH ECX                            ; 00573c58
    ADD ESI,EAX                         ; 00573c59
    PUSH ESI                            ; 00573c5b
    CALL crt_string.c_memmove_FUN_00566170 ; 00573c5c
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_00566170(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00573c61
    MOV dword ptr [0x02de54a0],ESI      ; 00573c64 | DAT_02de54a0
    MOV dword ptr [EBX + EBP*0x4 + 0x4],0x0 ; 00573c6a
        ;   Label: LAB_00573c6a
    MOV dword ptr [0x02de54a4],EBX      ; 00573c72 | DAT_02de54a4
    JMP 0x00573c7d                      ; 00573c78
        ;   XREF to: 00573c7d (UNCONDITIONAL_JUMP)  ; LAB_00573c7d
    LEA EBP,[EAX + -0x1]                ; 00573c7a
        ;   Label: LAB_00573c7a
    LEA EAX,[EBP*0x4 + 0x0]             ; 00573c7d
        ;   Label: LAB_00573c7d
    ADD EBX,EAX                         ; 00573c84
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00573c86
    MOV dword ptr [EBX],EAX             ; 00573c8a
    MOV EAX,[0x02de54a0]                ; 00573c8c | DAT_02de54a0
    MOV byte ptr [EAX + EBP*0x1],0x0    ; 00573c91
    XOR EAX,EAX                         ; 00573c95
        ;   Label: LAB_00573c95
    ADD ESP,0x8                         ; 00573c97
        ;   Label: LAB_00573c97
    POP EBP                             ; 00573c9a
    POP EDI                             ; 00573c9b
    POP ESI                             ; 00573c9c
    POP EBX                             ; 00573c9d
    RET                                 ; 00573c9e

