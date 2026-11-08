; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0044e6e0(int param_1,int param_2)
;
;
; XREF[6]:
;   FUN_0044e720 at 0044e73c
;   FUN_0044f020 at 0044f0c2
;   FUN_004accb0 at 004acd29
;   FUN_0057e550 at 0057e595
;   FUN_005b63b0 at 005b63da
;   FUN_005b6560 at 005b6575
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0044e6e0
        ;   Label: FUN_0044e6e0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044e6e4
    MOV EDX,dword ptr [ECX + 0x100]     ; 0044e6e8
    CMP EAX,EDX                         ; 0044e6ee
    JL 0x0044e6f5                       ; 0044e6f0
        ;   XREF to: 0044e6f5 (CONDITIONAL_JUMP)  ; LAB_0044e6f5
    LEA EAX,[EDX + -0x1]                ; 0044e6f2
    TEST EAX,EAX                        ; 0044e6f5
        ;   Label: LAB_0044e6f5
    JL 0x0044e71b                       ; 0044e6f7
        ;   XREF to: 0044e71b (CONDITIONAL_JUMP)  ; LAB_0044e71b
    MOV EDX,dword ptr [ECX + 0x104]     ; 0044e6f9
        ;   Label: LAB_0044e6f9
    IMUL EDX,EAX                        ; 0044e6ff
    LEA EAX,[EDX*0x4 + 0x0]             ; 0044e702
    SUB EAX,EDX                         ; 0044e709
    LEA EDX,[EAX*0x4 + 0x0]             ; 0044e70b
    MOV EAX,dword ptr [ECX + 0x10c]     ; 0044e712
    ADD EAX,EDX                         ; 0044e718
    RET                                 ; 0044e71a
    XOR EAX,EAX                         ; 0044e71b
        ;   Label: LAB_0044e71b
    JMP 0x0044e6f9                      ; 0044e71d
        ;   XREF to: 0044e6f9 (UNCONDITIONAL_JUMP)  ; LAB_0044e6f9

