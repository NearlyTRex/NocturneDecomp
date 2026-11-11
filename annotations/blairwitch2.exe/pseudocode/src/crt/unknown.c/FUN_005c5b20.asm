; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c5b20(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c469c at 005c469e
;
; Referenced Globals:
;   undefined4 DAT_026807e0
;   undefined4 DAT_026807e4
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005b8580
;   crt_memory.c_realloc_FUN_005b8ce0
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c5b20
        ;   Label: crt_unknown.c_FUN_005c5b20
    PUSH ESI                            ; 005c5b21
    PUSH EDI                            ; 005c5b22
    MOV EDX,dword ptr [0x026807e4]      ; 005c5b23 | DAT_026807e4
    TEST EDX,EDX                        ; 005c5b29
    JZ 0x005c5bb5                       ; 005c5b2b
        ;   XREF to: 005c5bb5 (CONDITIONAL_JUMP)  ; LAB_005c5bb5
    MOV EBX,EDX                         ; 005c5b31
    JMP 0x005c5b66                      ; 005c5b33
        ;   XREF to: 005c5b66 (UNCONDITIONAL_JUMP)  ; LAB_005c5b66
    MOV ESI,dword ptr [0x026807e0]      ; 005c5b35 | DAT_026807e0
        ;   Label: LAB_005c5b35
    TEST ESI,ESI                        ; 005c5b3b
    JZ 0x005c5b63                       ; 005c5b3d
        ;   XREF to: 005c5b63 (CONDITIONAL_JUMP)  ; LAB_005c5b63
    MOV EDI,dword ptr [0x026807e4]      ; 005c5b3f | DAT_026807e4
    MOV ECX,EBX                         ; 005c5b45
    SUB ECX,EDI                         ; 005c5b47
    MOV EDX,ESI                         ; 005c5b49
    SAR ECX,0x2                         ; 005c5b4b
    CMP byte ptr [ECX + EDX*0x1],0x0    ; 005c5b4e
    JZ 0x005c5b5d                       ; 005c5b52
        ;   XREF to: 005c5b5d (CONDITIONAL_JUMP)  ; LAB_005c5b5d
    PUSH EAX                            ; 005c5b54
    CALL crt_unknown.c_FUN_005b86a0     ; 005c5b55
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 005c5b5a
    MOV dword ptr [EBX],0x0             ; 005c5b5d
        ;   Label: LAB_005c5b5d
    ADD EBX,0x4                         ; 005c5b63
        ;   Label: LAB_005c5b63
    MOV EAX,dword ptr [EBX]             ; 005c5b66
        ;   Label: LAB_005c5b66
    TEST EAX,EAX                        ; 005c5b68
    JNZ 0x005c5b35                      ; 005c5b6a
        ;   XREF to: 005c5b35 (CONDITIONAL_JUMP)  ; LAB_005c5b35
    CMP dword ptr [0x026807e0],0x0      ; 005c5b6c | DAT_026807e0
    JNZ 0x005c5b81                      ; 005c5b73
        ;   XREF to: 005c5b81 (CONDITIONAL_JUMP)  ; LAB_005c5b81
    PUSH 0x5                            ; 005c5b75
    CALL crt_memory.c_malloc_FUN_005b8580 ; 005c5b77
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 005c5b7c
    JMP 0x005c5b92                      ; 005c5b7f
        ;   XREF to: 005c5b92 (UNCONDITIONAL_JUMP)  ; LAB_005c5b92
    PUSH 0x5                            ; 005c5b81
        ;   Label: LAB_005c5b81
    MOV ECX,dword ptr [0x026807e4]      ; 005c5b83 | DAT_026807e4
    PUSH ECX                            ; 005c5b89
    CALL crt_memory.c_realloc_FUN_005b8ce0 ; 005c5b8a
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005b8ce0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 005c5b8f
    TEST EAX,EAX                        ; 005c5b92
        ;   Label: LAB_005c5b92
    JNZ 0x005c5b9f                      ; 005c5b94
        ;   XREF to: 005c5b9f (CONDITIONAL_JUMP)  ; LAB_005c5b9f
    MOV EAX,0xffffffff                  ; 005c5b96
    POP EDI                             ; 005c5b9b
    POP ESI                             ; 005c5b9c
    POP EBX                             ; 005c5b9d
    RET                                 ; 005c5b9e
    MOV [0x026807e4],EAX                ; 005c5b9f | DAT_026807e4
        ;   Label: LAB_005c5b9f
    MOV dword ptr [EAX],0x0             ; 005c5ba4
    ADD EAX,0x4                         ; 005c5baa
    MOV [0x026807e0],EAX                ; 005c5bad | DAT_026807e0
    MOV byte ptr [EAX],0x0              ; 005c5bb2
    XOR EAX,EAX                         ; 005c5bb5
        ;   Label: LAB_005c5bb5
    POP EDI                             ; 005c5bb7
    POP ESI                             ; 005c5bb8
    POP EBX                             ; 005c5bb9
    RET                                 ; 005c5bba

