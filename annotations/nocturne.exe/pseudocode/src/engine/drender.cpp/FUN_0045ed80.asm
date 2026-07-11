; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045ed80(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[17]:
;   FUN_0045ee60 at 0045ee99
;   FUN_0045eee0 at 0045ef49
;   FUN_0045ef90 at 0045f03f
;   FUN_0045f090 at 0045f130
;   FUN_0045f190 at 0045f1f2
;   FUN_0045f3c0 at 0045f408
;   FUN_0045f460 at 0045f4ef
;   FUN_0045f5e0 at 0045f64a
;   FUN_0045f790 at 0045f810
;   FUN_0045f9d0 at 0045fa51
;   ... and 7 more
;
; Referenced Globals:
;   string s_..\\engine\\drender.cpp_0057db72
;   string s_CDemonRenderer::clipAndFillPoly_-_0057db88
;   undefined4 DAT_00766c70
;   undefined4 DAT_00766c74
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a1
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_00432cd0
;   FUN_004349a0
;   FUN_00457a00
;   FUN_00458080
;   FUN_004c8440
;   FUN_0055e040
;   FUN_005628c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ed80
        ;   Label: FUN_0045ed80
    PUSH ESI                            ; 0045ed81
    PUSH EDI                            ; 0045ed82
    PUSH EBP                            ; 0045ed83
    MOV EDI,dword ptr [ESP + 0x14]      ; 0045ed84
    MOV EBX,dword ptr [ESP + 0x18]      ; 0045ed88
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0045ed8c
    CMP dword ptr [EDI + 0x8],0x0       ; 0045ed90
    JNZ 0x0045edc3                      ; 0045ed94
        ;   XREF to: 0045edc3 (CONDITIONAL_JUMP)  ; LAB_0045edc3
    CMP dword ptr [EDI + 0x10],0x0      ; 0045ed96
        ;   Label: LAB_0045ed96
    JNZ 0x0045edf1                      ; 0045ed9a
        ;   XREF to: 0045edf1 (CONDITIONAL_JUMP)  ; LAB_0045edf1
    CMP dword ptr [EDI + 0x4],0x0       ; 0045ed9c
    JZ 0x0045edab                       ; 0045eda0
        ;   XREF to: 0045edab (CONDITIONAL_JUMP)  ; LAB_0045edab
    TEST byte ptr [0x01c039a0],0x1      ; 0045eda2 | DAT_01c039a0
    JZ 0x0045edb4                       ; 0045eda9
        ;   XREF to: 0045edb4 (CONDITIONAL_JUMP)  ; LAB_0045edb4
    TEST byte ptr [0x01c039a0],0x5      ; 0045edab | DAT_01c039a0
        ;   Label: LAB_0045edab
    JNZ 0x0045ede8                      ; 0045edb2
        ;   XREF to: 0045ede8 (CONDITIONAL_JUMP)  ; LAB_0045ede8
    PUSH EBX                            ; 0045edb4
        ;   Label: LAB_0045edb4
    PUSH ESI                            ; 0045edb5
    CALL FUN_00458080                   ; 0045edb6
        ;   XREF to: 00458080 (UNCONDITIONAL_CALL)  ; undefined FUN_00458080()
    ADD ESP,0x8                         ; 0045edbb
        ;   Label: LAB_0045edbb
    POP EBP                             ; 0045edbe
        ;   Label: LAB_0045edbe
    POP EDI                             ; 0045edbf
    POP ESI                             ; 0045edc0
    POP EBX                             ; 0045edc1
    RET                                 ; 0045edc2
    MOV ECX,0x57db72                    ; 0045edc3 | = "..\\engine\\drender.cpp"
        ;   Label: LAB_0045edc3
    MOV EBP,0xac                        ; 0045edc8
    PUSH 0x57db88                       ; 0045edcd | = "CDemonRenderer::clipAndFillPoly - Bad..."
    MOV dword ptr [0x01cc4800],ECX      ; 0045edd2 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 0045edd8 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0045edde
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0045ede3
    JMP 0x0045ed96                      ; 0045ede6
        ;   XREF to: 0045ed96 (UNCONDITIONAL_JUMP)  ; LAB_0045ed96
    PUSH EBX                            ; 0045ede8
        ;   Label: LAB_0045ede8
    PUSH ESI                            ; 0045ede9
    CALL FUN_00457a00                   ; 0045edea
        ;   XREF to: 00457a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00457a00()
    JMP 0x0045edbb                      ; 0045edef
        ;   XREF to: 0045edbb (UNCONDITIONAL_JUMP)  ; LAB_0045edbb
    CMP dword ptr [EDI + 0x4],0x0       ; 0045edf1
        ;   Label: LAB_0045edf1
    JZ 0x0045ee00                       ; 0045edf5
        ;   XREF to: 0045ee00 (CONDITIONAL_JUMP)  ; LAB_0045ee00
    TEST byte ptr [0x01c039a0],0x1      ; 0045edf7 | DAT_01c039a0
    JZ 0x0045ee21                       ; 0045edfe
        ;   XREF to: 0045ee21 (CONDITIONAL_JUMP)  ; LAB_0045ee21
    TEST byte ptr [0x01c039a0],0x5      ; 0045ee00 | DAT_01c039a0
        ;   Label: LAB_0045ee00
    JZ 0x0045ee21                       ; 0045ee07
        ;   XREF to: 0045ee21 (CONDITIONAL_JUMP)  ; LAB_0045ee21
    TEST byte ptr [0x01c039a1],0x2      ; 0045ee09 | DAT_01c039a1
    JZ 0x0045ee49                       ; 0045ee10
        ;   XREF to: 0045ee49 (CONDITIONAL_JUMP)  ; LAB_0045ee49
    PUSH ESI                            ; 0045ee12
    PUSH EBX                            ; 0045ee13
    CALL FUN_004349a0                   ; 0045ee14
        ;   XREF to: 004349a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004349a0()
    ADD ESP,0x8                         ; 0045ee19
    POP EBP                             ; 0045ee1c
    POP EDI                             ; 0045ee1d
    POP ESI                             ; 0045ee1e
    POP EBX                             ; 0045ee1f
    RET                                 ; 0045ee20
    PUSH ESI                            ; 0045ee21
        ;   Label: LAB_0045ee21
    PUSH EBX                            ; 0045ee22
    CALL FUN_0055e040                   ; 0045ee23
        ;   XREF to: 0055e040 (UNCONDITIONAL_CALL)  ; undefined FUN_0055e040()
    MOV ECX,dword ptr [0x00766c70]      ; 0045ee28 | DAT_00766c70
    ADD ESP,0x8                         ; 0045ee2e
    CMP ECX,0x2                         ; 0045ee31
    JLE 0x0045edbe                      ; 0045ee34
        ;   XREF to: 0045edbe (CONDITIONAL_JUMP)  ; LAB_0045edbe
    PUSH ECX                            ; 0045ee36
    PUSH 0x766c74                       ; 0045ee37 | DAT_00766c74
    CALL FUN_005628c0                   ; 0045ee3c
        ;   XREF to: 005628c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005628c0()
    ADD ESP,0x8                         ; 0045ee41
    POP EBP                             ; 0045ee44
    POP EDI                             ; 0045ee45
    POP ESI                             ; 0045ee46
    POP EBX                             ; 0045ee47
    RET                                 ; 0045ee48
    PUSH ESI                            ; 0045ee49
        ;   Label: LAB_0045ee49
    PUSH EBX                            ; 0045ee4a
    CALL FUN_00432cd0                   ; 0045ee4b
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00432cd0()
    ADD ESP,0x8                         ; 0045ee50
    POP EBP                             ; 0045ee53
    POP EDI                             ; 0045ee54
    POP ESI                             ; 0045ee55
    POP EBX                             ; 0045ee56
    RET                                 ; 0045ee57

