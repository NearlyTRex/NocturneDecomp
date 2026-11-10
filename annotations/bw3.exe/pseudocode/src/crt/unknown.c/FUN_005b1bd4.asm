; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005b1bd4(short *param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005b12a0 at 005b145c
;
; Referenced Globals:
;   undefined4 DAT_02d25920
;   undefined4 DAT_02d25928
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   crt_memory.c_realloc_FUN_005a3e50
;   crt_string.c_memmove_FUN_005a54c0
;   crt_unknown.c_FUN_005a3650
;   crt_unknown.c_FUN_005afd80
;   crt_unknown.c_FUN_005b1d74
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1bd4
        ;   Label: crt_unknown.c_FUN_005b1bd4
    PUSH ESI                            ; 005b1bd5
    PUSH EDI                            ; 005b1bd6
    PUSH EBP                            ; 005b1bd7
    SUB ESP,0x8                         ; 005b1bd8
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005b1bdb
    TEST EDX,EDX                        ; 005b1bdf
    JNZ 0x005b1bed                      ; 005b1be1
        ;   XREF to: 005b1bed (CONDITIONAL_JUMP)  ; LAB_005b1bed
    MOV EAX,0xffffffff                  ; 005b1be3
    JMP 0x005b1d6a                      ; 005b1be8
        ;   XREF to: 005b1d6a (UNCONDITIONAL_JUMP)  ; LAB_005b1d6a
    CMP word ptr [EDX],0x0              ; 005b1bed
        ;   Label: LAB_005b1bed
    JZ 0x005b1c15                       ; 005b1bf1
        ;   XREF to: 005b1c15 (CONDITIONAL_JUMP)  ; LAB_005b1c15
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005b1bf3
    MOV BX,word ptr [EAX + 0x2]         ; 005b1bf7
    ADD EAX,0x2                         ; 005b1bfb
    TEST BX,BX                          ; 005b1bfe
    JZ 0x005b1c15                       ; 005b1c01
        ;   XREF to: 005b1c15 (CONDITIONAL_JUMP)  ; LAB_005b1c15
    CMP word ptr [EAX],0x3d             ; 005b1c03
        ;   Label: LAB_005b1c03
    JZ 0x005b1c15                       ; 005b1c07
        ;   XREF to: 005b1c15 (CONDITIONAL_JUMP)  ; LAB_005b1c15
    MOV CX,word ptr [EAX + 0x2]         ; 005b1c09
    ADD EAX,0x2                         ; 005b1c0d
    TEST CX,CX                          ; 005b1c10
    JNZ 0x005b1c03                      ; 005b1c13
        ;   XREF to: 005b1c03 (CONDITIONAL_JUMP)  ; LAB_005b1c03
    CMP word ptr [EAX],0x0              ; 005b1c15
        ;   Label: LAB_005b1c15
    JNZ 0x005b1c28                      ; 005b1c19
        ;   XREF to: 005b1c28 (CONDITIONAL_JUMP)  ; LAB_005b1c28
    MOV EAX,0xffffffff                  ; 005b1c1b
    ADD ESP,0x8                         ; 005b1c20
    POP EBP                             ; 005b1c23
    POP EDI                             ; 005b1c24
    POP ESI                             ; 005b1c25
    POP EBX                             ; 005b1c26
    RET                                 ; 005b1c27
    CMP word ptr [EAX + 0x2],0x0        ; 005b1c28
        ;   Label: LAB_005b1c28
    SETZ AL                             ; 005b1c2d
    MOV EBX,dword ptr [0x02d25928]      ; 005b1c30 | DAT_02d25928
    MOVZX ESI,AL                        ; 005b1c36
    TEST EBX,EBX                        ; 005b1c39
    JNZ 0x005b1c7a                      ; 005b1c3b
        ;   XREF to: 005b1c7a (CONDITIONAL_JUMP)  ; LAB_005b1c7a
    TEST ESI,ESI                        ; 005b1c3d
    JNZ 0x005b1d68                      ; 005b1c3f
        ;   XREF to: 005b1d68 (CONDITIONAL_JUMP)  ; LAB_005b1d68
    PUSH 0x9                            ; 005b1c45
    CALL crt_unknown.c_FUN_005a3650     ; 005b1c47
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 005b1c4c
    MOV EBX,EAX                         ; 005b1c4f
    TEST EAX,EAX                        ; 005b1c51
    JNZ 0x005b1c62                      ; 005b1c53
        ;   XREF to: 005b1c62 (CONDITIONAL_JUMP)  ; LAB_005b1c62
    MOV EAX,0xffffffff                  ; 005b1c55
    ADD ESP,0x8                         ; 005b1c5a
    POP EBP                             ; 005b1c5d
    POP EDI                             ; 005b1c5e
    POP ESI                             ; 005b1c5f
    POP EBX                             ; 005b1c60
    RET                                 ; 005b1c61
    MOV [0x02d25928],EAX                ; 005b1c62 | DAT_02d25928
        ;   Label: LAB_005b1c62
    ADD EAX,0x8                         ; 005b1c67
    MOV dword ptr [EAX + -0x8],ESI      ; 005b1c6a
    MOV dword ptr [EAX + -0x4],ESI      ; 005b1c6d
    MOV [0x02d25920],EAX                ; 005b1c70 | DAT_02d25920
    JMP 0x005b1d50                      ; 005b1c75
        ;   XREF to: 005b1d50 (UNCONDITIONAL_JUMP)  ; LAB_005b1d50
    PUSH ESI                            ; 005b1c7a
        ;   Label: LAB_005b1c7a
    MOV ECX,dword ptr [ESP + 0x20]      ; 005b1c7b
    PUSH ECX                            ; 005b1c7f
    CALL crt_unknown.c_FUN_005b1d74     ; 005b1c80
        ;   XREF to: 005b1d74 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b1d74()
    ADD ESP,0x8                         ; 005b1c85
    TEST ESI,ESI                        ; 005b1c88
    JNZ 0x005b1d68                      ; 005b1c8a
        ;   XREF to: 005b1d68 (CONDITIONAL_JUMP)  ; LAB_005b1d68
    TEST EAX,EAX                        ; 005b1c90
    JG 0x005b1d4d                       ; 005b1c92
        ;   XREF to: 005b1d4d (CONDITIONAL_JUMP)  ; LAB_005b1d4d
    NEG EAX                             ; 005b1c98
    MOV ESI,EAX                         ; 005b1c9a
    INC EAX                             ; 005b1c9c
    MOV dword ptr [ESP + 0x4],EAX       ; 005b1c9d
    MOV EAX,ESI                         ; 005b1ca1
    SHL EAX,0x2                         ; 005b1ca3
    MOV dword ptr [ESP],EAX             ; 005b1ca6
    LEA EBP,[EAX + 0x8]                 ; 005b1ca9
    MOV EAX,dword ptr [ESP + 0x4]       ; 005b1cac
    MOV EDI,dword ptr [0x02d25920]      ; 005b1cb0 | DAT_02d25920
    ADD EAX,EBP                         ; 005b1cb6
    TEST EDI,EDI                        ; 005b1cb8
    JNZ 0x005b1d07                      ; 005b1cba
        ;   XREF to: 005b1d07 (CONDITIONAL_JUMP)  ; LAB_005b1d07
    PUSH EAX                            ; 005b1cbc
    CALL crt_unknown.c_FUN_005a3650     ; 005b1cbd
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    MOV EDI,EAX                         ; 005b1cc2
    ADD ESP,0x4                         ; 005b1cc4
    MOV EBX,EAX                         ; 005b1cc7
    TEST EAX,EAX                        ; 005b1cc9
    JNZ 0x005b1cda                      ; 005b1ccb
        ;   XREF to: 005b1cda (CONDITIONAL_JUMP)  ; LAB_005b1cda
    MOV EAX,0xffffffff                  ; 005b1ccd
    ADD ESP,0x8                         ; 005b1cd2
    POP EBP                             ; 005b1cd5
    POP EDI                             ; 005b1cd6
    POP ESI                             ; 005b1cd7
    POP EBX                             ; 005b1cd8
    RET                                 ; 005b1cd9
    MOV ECX,dword ptr [ESP]             ; 005b1cda
        ;   Label: LAB_005b1cda
    PUSH ECX                            ; 005b1cdd
    MOV EAX,[0x02d25928]                ; 005b1cde | DAT_02d25928
    PUSH EAX                            ; 005b1ce3
    PUSH EDI                            ; 005b1ce4
    CALL crt_unknown.c_FUN_005afd80     ; 005b1ce5
        ;   XREF to: 005afd80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005afd80()
    ADD ESP,0xc                         ; 005b1cea
    MOV EDX,dword ptr [ESP + 0x4]       ; 005b1ced
    PUSH EDX                            ; 005b1cf1
    PUSH 0x0                            ; 005b1cf2
    ADD EDI,EBP                         ; 005b1cf4
    PUSH EDI                            ; 005b1cf6
    MOV dword ptr [0x02d25920],EDI      ; 005b1cf7 | DAT_02d25920
    CALL crt_memory.c_memset_FUN_005a28f0 ; 005b1cfd
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005b1d02
    JMP 0x005b1d3d                      ; 005b1d05
        ;   XREF to: 005b1d3d (UNCONDITIONAL_JUMP)  ; LAB_005b1d3d
    PUSH EAX                            ; 005b1d07
        ;   Label: LAB_005b1d07
    PUSH EBX                            ; 005b1d08
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 005b1d09
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 005b1d0e
    MOV EBX,EAX                         ; 005b1d11
    TEST EAX,EAX                        ; 005b1d13
    JNZ 0x005b1d24                      ; 005b1d15
        ;   XREF to: 005b1d24 (CONDITIONAL_JUMP)  ; LAB_005b1d24
    MOV EAX,0xffffffff                  ; 005b1d17
    ADD ESP,0x8                         ; 005b1d1c
    POP EBP                             ; 005b1d1f
    POP EDI                             ; 005b1d20
    POP ESI                             ; 005b1d21
    POP EBX                             ; 005b1d22
    RET                                 ; 005b1d23
    PUSH ESI                            ; 005b1d24
        ;   Label: LAB_005b1d24
    MOV EDX,dword ptr [0x02d25920]      ; 005b1d25 | DAT_02d25920
    PUSH EDX                            ; 005b1d2b
    ADD EBP,EAX                         ; 005b1d2c
    PUSH EBP                            ; 005b1d2e
    CALL crt_string.c_memmove_FUN_005a54c0 ; 005b1d2f
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005b1d34
    MOV dword ptr [0x02d25920],EBP      ; 005b1d37 | DAT_02d25920
    MOV dword ptr [EBX + ESI*0x4 + 0x4],0x0 ; 005b1d3d
        ;   Label: LAB_005b1d3d
    MOV dword ptr [0x02d25928],EBX      ; 005b1d45 | DAT_02d25928
    JMP 0x005b1d50                      ; 005b1d4b
        ;   XREF to: 005b1d50 (UNCONDITIONAL_JUMP)  ; LAB_005b1d50
    LEA ESI,[EAX + -0x1]                ; 005b1d4d
        ;   Label: LAB_005b1d4d
    LEA EAX,[ESI*0x4 + 0x0]             ; 005b1d50
        ;   Label: LAB_005b1d50
    ADD EBX,EAX                         ; 005b1d57
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005b1d59
    MOV dword ptr [EBX],EAX             ; 005b1d5d
    MOV EAX,[0x02d25920]                ; 005b1d5f | DAT_02d25920
    MOV byte ptr [ESI + EAX*0x1],0x0    ; 005b1d64
    XOR EAX,EAX                         ; 005b1d68
        ;   Label: LAB_005b1d68
    ADD ESP,0x8                         ; 005b1d6a
        ;   Label: LAB_005b1d6a
    POP EBP                             ; 005b1d6d
    POP EDI                             ; 005b1d6e
    POP ESI                             ; 005b1d6f
    POP EBX                             ; 005b1d70
    RET                                 ; 005b1d71

