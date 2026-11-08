; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a0d00(int param_1,int param_2,uint param_3)
;
;
; XREF[4]:
;   FUN_004d6990 at 004d6c58
;   FUN_0053b250 at 0053b797
;   FUN_0056e830 at 0056ea5d
;   FUN_005702c0 at 00570417
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a0d00
        ;   Label: FUN_005a0d00
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a0d04
    MOV ECX,dword ptr [ESP + 0xc]       ; 005a0d08
    CMP dword ptr [EDX + 0x4],0x0       ; 005a0d0c
    JZ 0x005a0d24                       ; 005a0d10
        ;   XREF to: 005a0d24 (CONDITIONAL_JUMP)  ; LAB_005a0d24
    CMP ECX,0x1                         ; 005a0d12
    JNC 0x005a0d31                      ; 005a0d15
        ;   XREF to: 005a0d31 (CONDITIONAL_JUMP)  ; LAB_005a0d31
    TEST ECX,ECX                        ; 005a0d17
    JNZ 0x005a0d24                      ; 005a0d19
        ;   XREF to: 005a0d24 (CONDITIONAL_JUMP)  ; LAB_005a0d24
    TEST EAX,EAX                        ; 005a0d1b
        ;   Label: LAB_005a0d1b
    JL 0x005a0d24                       ; 005a0d1d
        ;   XREF to: 005a0d24 (CONDITIONAL_JUMP)  ; LAB_005a0d24
    CMP EAX,dword ptr [EDX + 0x8]       ; 005a0d1f
    JLE 0x005a0d3b                      ; 005a0d22
        ;   XREF to: 005a0d3b (CONDITIONAL_JUMP)  ; LAB_005a0d3b
    XOR EAX,EAX                         ; 005a0d24
        ;   Label: LAB_005a0d24
    RET                                 ; 005a0d26
    ADD EAX,dword ptr [EDX + 0x10]      ; 005a0d27
        ;   Label: LAB_005a0d27
    JMP 0x005a0d1b                      ; 005a0d2a
        ;   XREF to: 005a0d1b (UNCONDITIONAL_JUMP)  ; LAB_005a0d1b
    ADD EAX,dword ptr [EDX + 0x8]       ; 005a0d2c
        ;   Label: LAB_005a0d2c
    JMP 0x005a0d1b                      ; 005a0d2f
        ;   XREF to: 005a0d1b (UNCONDITIONAL_JUMP)  ; LAB_005a0d1b
    JBE 0x005a0d27                      ; 005a0d31
        ;   XREF to: 005a0d27 (CONDITIONAL_JUMP)  ; LAB_005a0d27
        ;   Label: LAB_005a0d31
    CMP ECX,0x2                         ; 005a0d33
    JZ 0x005a0d2c                       ; 005a0d36
        ;   XREF to: 005a0d2c (CONDITIONAL_JUMP)  ; LAB_005a0d2c
    XOR EAX,EAX                         ; 005a0d38
    RET                                 ; 005a0d3a
    MOV dword ptr [EDX + 0x10],EAX      ; 005a0d3b
        ;   Label: LAB_005a0d3b
    MOV EAX,0x1                         ; 005a0d3e
    RET                                 ; 005a0d43

