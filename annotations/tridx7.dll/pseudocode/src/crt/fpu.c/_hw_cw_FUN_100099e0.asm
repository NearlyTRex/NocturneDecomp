; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_fpu_c__hw_cw_FUN_100099e0(uint control_word)
;
; Parameters:
; uint             Stack[0x4]:4   control_word
;
; XREF[1]:
;   crt_fpu.c__control87_FUN_10009890 at 100098b7
;
; *****************************************************************************

section .text

    XOR AX,AX                           ; 100099e0
        ;   Label: crt_fpu.c__hw_cw_FUN_100099e0
    MOV EDX,dword ptr [ESP + 0x4]       ; 100099e3
    TEST DL,0x10                        ; 100099e7
    JZ 0x100099f0                       ; 100099ea
        ;   XREF to: 100099f0 (CONDITIONAL_JUMP)  ; LAB_100099f0
    MOV AX,0x1                          ; 100099ec
    TEST DL,0x8                         ; 100099f0
        ;   Label: LAB_100099f0
    JZ 0x100099f7                       ; 100099f3
        ;   XREF to: 100099f7 (CONDITIONAL_JUMP)  ; LAB_100099f7
    OR AL,0x4                           ; 100099f5
    TEST DL,0x4                         ; 100099f7
        ;   Label: LAB_100099f7
    JZ 0x100099fe                       ; 100099fa
        ;   XREF to: 100099fe (CONDITIONAL_JUMP)  ; LAB_100099fe
    OR AL,0x8                           ; 100099fc
    TEST DL,0x2                         ; 100099fe
        ;   Label: LAB_100099fe
    JZ 0x10009a05                       ; 10009a01
        ;   XREF to: 10009a05 (CONDITIONAL_JUMP)  ; LAB_10009a05
    OR AL,0x10                          ; 10009a03
    TEST DL,0x1                         ; 10009a05
        ;   Label: LAB_10009a05
    JZ 0x10009a0c                       ; 10009a08
        ;   XREF to: 10009a0c (CONDITIONAL_JUMP)  ; LAB_10009a0c
    OR AL,0x20                          ; 10009a0a
    TEST EDX,0x80000                    ; 10009a0c
        ;   Label: LAB_10009a0c
    JZ 0x10009a16                       ; 10009a12
        ;   XREF to: 10009a16 (CONDITIONAL_JUMP)  ; LAB_10009a16
    OR AL,0x2                           ; 10009a14
    MOV ECX,EDX                         ; 10009a16
        ;   Label: LAB_10009a16
    AND ECX,0x300                       ; 10009a18
    CMP ECX,0x100                       ; 10009a1e
    JZ 0x10009a38                       ; 10009a24
        ;   XREF to: 10009a38 (CONDITIONAL_JUMP)  ; LAB_10009a38
    CMP ECX,0x200                       ; 10009a26
    JZ 0x10009a3d                       ; 10009a2c
        ;   XREF to: 10009a3d (CONDITIONAL_JUMP)  ; LAB_10009a3d
    CMP ECX,0x300                       ; 10009a2e
    JZ 0x10009a42                       ; 10009a34
        ;   XREF to: 10009a42 (CONDITIONAL_JUMP)  ; LAB_10009a42
    JMP 0x10009a45                      ; 10009a36
        ;   XREF to: 10009a45 (UNCONDITIONAL_JUMP)  ; LAB_10009a45
    OR AH,0x4                           ; 10009a38
        ;   Label: LAB_10009a38
    JMP 0x10009a45                      ; 10009a3b
        ;   XREF to: 10009a45 (UNCONDITIONAL_JUMP)  ; LAB_10009a45
    OR AH,0x8                           ; 10009a3d
        ;   Label: LAB_10009a3d
    JMP 0x10009a45                      ; 10009a40
        ;   XREF to: 10009a45 (UNCONDITIONAL_JUMP)  ; LAB_10009a45
    OR AH,0xc                           ; 10009a42
        ;   Label: LAB_10009a42
    MOV ECX,EDX                         ; 10009a45
        ;   Label: LAB_10009a45
    AND ECX,0x30000                     ; 10009a47
    JZ 0x10009a59                       ; 10009a4d
        ;   XREF to: 10009a59 (CONDITIONAL_JUMP)  ; LAB_10009a59
    CMP ECX,0x10000                     ; 10009a4f
    JZ 0x10009a5e                       ; 10009a55
        ;   XREF to: 10009a5e (CONDITIONAL_JUMP)  ; LAB_10009a5e
    JMP 0x10009a61                      ; 10009a57
        ;   XREF to: 10009a61 (UNCONDITIONAL_JUMP)  ; LAB_10009a61
    OR AH,0x3                           ; 10009a59
        ;   Label: LAB_10009a59
    JMP 0x10009a61                      ; 10009a5c
        ;   XREF to: 10009a61 (UNCONDITIONAL_JUMP)  ; LAB_10009a61
    OR AH,0x2                           ; 10009a5e
        ;   Label: LAB_10009a5e
    TEST EDX,0x40000                    ; 10009a61
        ;   Label: LAB_10009a61
    JZ 0x10009a6c                       ; 10009a67
        ;   XREF to: 10009a6c (CONDITIONAL_JUMP)  ; LAB_10009a6c
    OR AH,0x10                          ; 10009a69
    RET                                 ; 10009a6c
        ;   Label: LAB_10009a6c

