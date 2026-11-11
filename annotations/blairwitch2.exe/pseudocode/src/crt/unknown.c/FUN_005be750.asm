; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * crt_unknown_c_FUN_005be750(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005b90b0 at 005b90ce
;
; Referenced Globals:
;   undefined4 DAT_0061ef54
;   undefined1 DAT_0061ef60
;   undefined4 DAT_0061ef6e
;   undefined1 DAT_0061ef7a
;   undefined4 DAT_0061f15c
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2b8 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2bc = 005bce04
;   undefined4 DAT_02680160
;   undefined4 DAT_02680164
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005be180
;   crt_memory.c_malloc_FUN_005b8580
;   crt_memory.c_memset_FUN_005b77c0
;   crt_unknown.c_FUN_005bce04
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005be750
        ;   Label: crt_unknown.c_FUN_005be750
    PUSH ESI                            ; 005be751
    PUSH EDI                            ; 005be752
    CALL dword ptr [0x0061f2b8]         ; 005be753 | PTR_crt_unknown.c_FUN_005bce04_0061f2b8
    MOV ESI,dword ptr [0x02680164]      ; 005be759 | DAT_02680164
    TEST ESI,ESI                        ; 005be75f
    JZ 0x005be77c                       ; 005be761
        ;   XREF to: 005be77c (CONDITIONAL_JUMP)  ; LAB_005be77c
    MOV EBX,dword ptr [ESI + 0x4]       ; 005be763
    MOV EDI,dword ptr [EBX + 0xc]       ; 005be766
    MOV EAX,dword ptr [ESI]             ; 005be769
    AND EDI,0x4003                      ; 005be76b
    MOV [0x02680164],EAX                ; 005be771 | DAT_02680164
    OR DI,0x3                           ; 005be776
    JMP 0x005be7c9                      ; 005be77a
        ;   XREF to: 005be7c9 (UNCONDITIONAL_JUMP)  ; LAB_005be7c9
    MOV EBX,0x61ef54                    ; 005be77c | DAT_0061ef54
        ;   Label: LAB_005be77c
    CMP EBX,0x61f15c                    ; 005be781 | DAT_0061f15c
    JNC 0x005be7b1                      ; 005be787
        ;   XREF to: 005be7b1 (CONDITIONAL_JUMP)  ; LAB_005be7b1
    TEST byte ptr [EBX + 0xc],0x3       ; 005be789 | DAT_0061ef60 | DAT_0061ef7a
        ;   Label: LAB_005be789
    JNZ 0x005be7a6                      ; 005be78d
        ;   XREF to: 005be7a6 (CONDITIONAL_JUMP)  ; LAB_005be7a6
    PUSH 0x1d                           ; 005be78f
    CALL crt_memory.c_malloc_FUN_005b8580 ; 005be791
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 005be796
    MOV ESI,EAX                         ; 005be799
    TEST EAX,EAX                        ; 005be79b
    JZ 0x005be7f8                       ; 005be79d
        ;   XREF to: 005be7f8 (CONDITIONAL_JUMP)  ; LAB_005be7f8
    MOV EDI,0x3                         ; 005be79f
    JMP 0x005be7c9                      ; 005be7a4
        ;   XREF to: 005be7c9 (UNCONDITIONAL_JUMP)  ; LAB_005be7c9
    ADD EBX,0x1a                        ; 005be7a6
        ;   Label: LAB_005be7a6
    CMP EBX,0x61f15c                    ; 005be7a9 | DAT_0061f15c
    JC 0x005be789                       ; 005be7af
        ;   XREF to: 005be789 (CONDITIONAL_JUMP)  ; LAB_005be789
    PUSH 0x37                           ; 005be7b1
        ;   Label: LAB_005be7b1
    MOV EDI,0x4003                      ; 005be7b3
    CALL crt_memory.c_malloc_FUN_005b8580 ; 005be7b8
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 005be7bd
    MOV ESI,EAX                         ; 005be7c0
    TEST EAX,EAX                        ; 005be7c2
    JZ 0x005be7f8                       ; 005be7c4
        ;   XREF to: 005be7f8 (CONDITIONAL_JUMP)  ; LAB_005be7f8
    LEA EBX,[EAX + 0x1d]                ; 005be7c6
    PUSH 0x1a                           ; 005be7c9
        ;   Label: LAB_005be7c9
    PUSH 0x0                            ; 005be7cb
    PUSH EBX                            ; 005be7cd | DAT_0061ef6e
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005be7ce
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV dword ptr [EBX + 0xc],EDI       ; 005be7d3
    MOV EAX,[0x02680160]                ; 005be7d6 | DAT_02680160
    MOV dword ptr [ESI + 0x4],EBX       ; 005be7db
    ADD ESP,0xc                         ; 005be7de
    MOV dword ptr [EBX + 0x8],ESI       ; 005be7e1
    MOV dword ptr [0x02680160],ESI      ; 005be7e4 | DAT_02680160
    MOV dword ptr [ESI],EAX             ; 005be7ea
    CALL dword ptr [0x0061f2bc]         ; 005be7ec | PTR_crt_unknown.c_FUN_005bce04_0061f2bc
    MOV EAX,EBX                         ; 005be7f2
    POP EDI                             ; 005be7f4
    POP ESI                             ; 005be7f5
    POP EBX                             ; 005be7f6
    RET                                 ; 005be7f7
    PUSH 0x5                            ; 005be7f8
        ;   Label: LAB_005be7f8
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005be7fa
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    ADD ESP,0x4                         ; 005be7ff
    CALL dword ptr [0x0061f2bc]         ; 005be802 | PTR_crt_unknown.c_FUN_005bce04_0061f2bc
    XOR EAX,EAX                         ; 005be808
    POP EDI                             ; 005be80a
    POP ESI                             ; 005be80b
    POP EBX                             ; 005be80c
    RET                                 ; 005be80d

