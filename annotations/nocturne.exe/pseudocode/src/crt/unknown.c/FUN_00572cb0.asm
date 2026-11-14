; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_00572cb0(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0057104c at 0057104e
;
; Referenced Globals:
;   undefined4 DAT_02de54a0
;   undefined4 DAT_02de54a4
;
; Called Functions:
;   crt_memory.c_free_FUN_005638d0
;   crt_memory.c_malloc_FUN_005635b0
;   crt_memory.c_realloc_FUN_00564a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572cb0
        ;   Label: crt_unknown.c_FUN_00572cb0
    PUSH ESI                            ; 00572cb1
    PUSH EDI                            ; 00572cb2
    MOV EDX,dword ptr [0x02de54a4]      ; 00572cb3 | DAT_02de54a4
    TEST EDX,EDX                        ; 00572cb9
    JZ 0x00572d45                       ; 00572cbb
        ;   XREF to: 00572d45 (CONDITIONAL_JUMP)  ; LAB_00572d45
    MOV EBX,EDX                         ; 00572cc1
    JMP 0x00572cf6                      ; 00572cc3
        ;   XREF to: 00572cf6 (UNCONDITIONAL_JUMP)  ; LAB_00572cf6
    MOV ESI,dword ptr [0x02de54a0]      ; 00572cc5 | DAT_02de54a0
        ;   Label: LAB_00572cc5
    TEST ESI,ESI                        ; 00572ccb
    JZ 0x00572cf3                       ; 00572ccd
        ;   XREF to: 00572cf3 (CONDITIONAL_JUMP)  ; LAB_00572cf3
    MOV EDI,dword ptr [0x02de54a4]      ; 00572ccf | DAT_02de54a4
    MOV ECX,EBX                         ; 00572cd5
    SUB ECX,EDI                         ; 00572cd7
    MOV EDX,ESI                         ; 00572cd9
    SAR ECX,0x2                         ; 00572cdb
    CMP byte ptr [ECX + EDX*0x1],0x0    ; 00572cde
    JZ 0x00572ced                       ; 00572ce2
        ;   XREF to: 00572ced (CONDITIONAL_JUMP)  ; LAB_00572ced
    PUSH EAX                            ; 00572ce4
    CALL crt_memory.c_free_FUN_005638d0 ; 00572ce5
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    ADD ESP,0x4                         ; 00572cea
    MOV dword ptr [EBX],0x0             ; 00572ced
        ;   Label: LAB_00572ced
    ADD EBX,0x4                         ; 00572cf3
        ;   Label: LAB_00572cf3
    MOV EAX,dword ptr [EBX]             ; 00572cf6
        ;   Label: LAB_00572cf6
    TEST EAX,EAX                        ; 00572cf8
    JNZ 0x00572cc5                      ; 00572cfa
        ;   XREF to: 00572cc5 (CONDITIONAL_JUMP)  ; LAB_00572cc5
    CMP dword ptr [0x02de54a0],0x0      ; 00572cfc | DAT_02de54a0
    JNZ 0x00572d11                      ; 00572d03
        ;   XREF to: 00572d11 (CONDITIONAL_JUMP)  ; LAB_00572d11
    PUSH 0x5                            ; 00572d05
    CALL crt_memory.c_malloc_FUN_005635b0 ; 00572d07
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 00572d0c
    JMP 0x00572d22                      ; 00572d0f
        ;   XREF to: 00572d22 (UNCONDITIONAL_JUMP)  ; LAB_00572d22
    PUSH 0x5                            ; 00572d11
        ;   Label: LAB_00572d11
    MOV ECX,dword ptr [0x02de54a4]      ; 00572d13 | DAT_02de54a4
    PUSH ECX                            ; 00572d19
    CALL crt_memory.c_realloc_FUN_00564a70 ; 00572d1a
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_00564a70(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 00572d1f
    TEST EAX,EAX                        ; 00572d22
        ;   Label: LAB_00572d22
    JNZ 0x00572d2f                      ; 00572d24
        ;   XREF to: 00572d2f (CONDITIONAL_JUMP)  ; LAB_00572d2f
    MOV EAX,0xffffffff                  ; 00572d26
    POP EDI                             ; 00572d2b
    POP ESI                             ; 00572d2c
    POP EBX                             ; 00572d2d
    RET                                 ; 00572d2e
    MOV [0x02de54a4],EAX                ; 00572d2f | DAT_02de54a4
        ;   Label: LAB_00572d2f
    MOV dword ptr [EAX],0x0             ; 00572d34
    ADD EAX,0x4                         ; 00572d3a
    MOV [0x02de54a0],EAX                ; 00572d3d | DAT_02de54a0
    MOV byte ptr [EAX],0x0              ; 00572d42
    XOR EAX,EAX                         ; 00572d45
        ;   Label: LAB_00572d45
    POP EDI                             ; 00572d47
    POP ESI                             ; 00572d48
    POP EBX                             ; 00572d49
    RET                                 ; 00572d4a

