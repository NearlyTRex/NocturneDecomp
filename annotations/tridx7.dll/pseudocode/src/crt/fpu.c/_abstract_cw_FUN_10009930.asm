; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_fpu_c__abstract_cw_FUN_10009930(ushort control_word)
;
; Parameters:
; ushort           Stack[0x4]:2   control_word
;
; XREF[1]:
;   crt_fpu.c__control87_FUN_10009890 at 1000989e
;
; *****************************************************************************

section .text

    MOV DX,word ptr [ESP + 0x4]         ; 10009930
        ;   Label: crt_fpu.c__abstract_cw_FUN_10009930
    XOR EAX,EAX                         ; 10009935
    TEST DL,0x1                         ; 10009937
    JZ 0x10009941                       ; 1000993a
        ;   XREF to: 10009941 (CONDITIONAL_JUMP)  ; LAB_10009941
    MOV EAX,0x10                        ; 1000993c
    TEST DL,0x4                         ; 10009941
        ;   Label: LAB_10009941
    JZ 0x10009949                       ; 10009944
        ;   XREF to: 10009949 (CONDITIONAL_JUMP)  ; LAB_10009949
    OR EAX,0x8                          ; 10009946
    TEST DL,0x8                         ; 10009949
        ;   Label: LAB_10009949
    JZ 0x10009951                       ; 1000994c
        ;   XREF to: 10009951 (CONDITIONAL_JUMP)  ; LAB_10009951
    OR EAX,0x4                          ; 1000994e
    TEST DL,0x10                        ; 10009951
        ;   Label: LAB_10009951
    JZ 0x10009959                       ; 10009954
        ;   XREF to: 10009959 (CONDITIONAL_JUMP)  ; LAB_10009959
    OR EAX,0x2                          ; 10009956
    TEST DL,0x20                        ; 10009959
        ;   Label: LAB_10009959
    JZ 0x10009961                       ; 1000995c
        ;   XREF to: 10009961 (CONDITIONAL_JUMP)  ; LAB_10009961
    OR EAX,0x1                          ; 1000995e
    TEST DL,0x2                         ; 10009961
        ;   Label: LAB_10009961
    JZ 0x1000996b                       ; 10009964
        ;   XREF to: 1000996b (CONDITIONAL_JUMP)  ; LAB_1000996b
    OR EAX,0x80000                      ; 10009966
    XOR ECX,ECX                         ; 1000996b
        ;   Label: LAB_1000996b
    MOV CX,DX                           ; 1000996d
    AND ECX,0xc00                       ; 10009970
    CMP ECX,0x400                       ; 10009976
    JZ 0x10009990                       ; 1000997c
        ;   XREF to: 10009990 (CONDITIONAL_JUMP)  ; LAB_10009990
    CMP ECX,0x800                       ; 1000997e
    JZ 0x10009997                       ; 10009984
        ;   XREF to: 10009997 (CONDITIONAL_JUMP)  ; LAB_10009997
    CMP ECX,0xc00                       ; 10009986
    JZ 0x1000999e                       ; 1000998c
        ;   XREF to: 1000999e (CONDITIONAL_JUMP)  ; LAB_1000999e
    JMP 0x100099a3                      ; 1000998e
        ;   XREF to: 100099a3 (UNCONDITIONAL_JUMP)  ; LAB_100099a3
    OR EAX,0x100                        ; 10009990
        ;   Label: LAB_10009990
    JMP 0x100099a3                      ; 10009995
        ;   XREF to: 100099a3 (UNCONDITIONAL_JUMP)  ; LAB_100099a3
    OR EAX,0x200                        ; 10009997
        ;   Label: LAB_10009997
    JMP 0x100099a3                      ; 1000999c
        ;   XREF to: 100099a3 (UNCONDITIONAL_JUMP)  ; LAB_100099a3
    OR EAX,0x300                        ; 1000999e
        ;   Label: LAB_1000999e
    XOR ECX,ECX                         ; 100099a3
        ;   Label: LAB_100099a3
    MOV CX,DX                           ; 100099a5
    AND ECX,0x300                       ; 100099a8
    JZ 0x100099ba                       ; 100099ae
        ;   XREF to: 100099ba (CONDITIONAL_JUMP)  ; LAB_100099ba
    CMP ECX,0x200                       ; 100099b0
    JZ 0x100099c1                       ; 100099b6
        ;   XREF to: 100099c1 (CONDITIONAL_JUMP)  ; LAB_100099c1
    JMP 0x100099c6                      ; 100099b8
        ;   XREF to: 100099c6 (UNCONDITIONAL_JUMP)  ; LAB_100099c6
    OR EAX,0x20000                      ; 100099ba
        ;   Label: LAB_100099ba
    JMP 0x100099c6                      ; 100099bf
        ;   XREF to: 100099c6 (UNCONDITIONAL_JUMP)  ; LAB_100099c6
    OR EAX,0x10000                      ; 100099c1
        ;   Label: LAB_100099c1
    TEST DH,0x10                        ; 100099c6
        ;   Label: LAB_100099c6
    JZ 0x100099d0                       ; 100099c9
        ;   XREF to: 100099d0 (CONDITIONAL_JUMP)  ; LAB_100099d0
    OR EAX,0x40000                      ; 100099cb
    RET                                 ; 100099d0
        ;   Label: LAB_100099d0

