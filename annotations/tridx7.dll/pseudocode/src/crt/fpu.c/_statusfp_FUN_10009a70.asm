; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_fpu_c__statusfp_FUN_10009a70(void)
;
;
; *****************************************************************************

section .text

    MOV CX,word ptr [ESP + 0x4]         ; 10009a70
        ;   Label: crt_fpu.c__statusfp_FUN_10009a70
    XOR EAX,EAX                         ; 10009a75
    TEST CL,0x1                         ; 10009a77
    JZ 0x10009a81                       ; 10009a7a
        ;   XREF to: 10009a81 (CONDITIONAL_JUMP)  ; LAB_10009a81
    MOV EAX,0x10                        ; 10009a7c
    TEST CL,0x4                         ; 10009a81
        ;   Label: LAB_10009a81
    JZ 0x10009a89                       ; 10009a84
        ;   XREF to: 10009a89 (CONDITIONAL_JUMP)  ; LAB_10009a89
    OR EAX,0x8                          ; 10009a86
    TEST CL,0x8                         ; 10009a89
        ;   Label: LAB_10009a89
    JZ 0x10009a91                       ; 10009a8c
        ;   XREF to: 10009a91 (CONDITIONAL_JUMP)  ; LAB_10009a91
    OR EAX,0x4                          ; 10009a8e
    TEST CL,0x10                        ; 10009a91
        ;   Label: LAB_10009a91
    JZ 0x10009a99                       ; 10009a94
        ;   XREF to: 10009a99 (CONDITIONAL_JUMP)  ; LAB_10009a99
    OR EAX,0x2                          ; 10009a96
    TEST CL,0x20                        ; 10009a99
        ;   Label: LAB_10009a99
    JZ 0x10009aa1                       ; 10009a9c
        ;   XREF to: 10009aa1 (CONDITIONAL_JUMP)  ; LAB_10009aa1
    OR EAX,0x1                          ; 10009a9e
    TEST CL,0x2                         ; 10009aa1
        ;   Label: LAB_10009aa1
    JZ 0x10009aab                       ; 10009aa4
        ;   XREF to: 10009aab (CONDITIONAL_JUMP)  ; LAB_10009aab
    OR EAX,0x80000                      ; 10009aa6
    RET                                 ; 10009aab
        ;   Label: LAB_10009aab

