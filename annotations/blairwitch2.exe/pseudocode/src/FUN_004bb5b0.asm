; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bb5b0(int param_1)
;
;
; XREF[1]:
;   FUN_004bd570 at 004bd5b8
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004bb5b0
        ;   Label: FUN_004bb5b0
    CMP dword ptr [EDX + 0xb14],0x0     ; 004bb5b4
    JZ 0x004bb61a                       ; 004bb5bb
        ;   XREF to: 004bb61a (CONDITIONAL_JUMP)  ; LAB_004bb61a
    LEA EAX,[EDX + 0xb04]               ; 004bb5bd
    FLD float ptr [EDX + 0x284]         ; 004bb5c3
    FSUBR float ptr [EAX]               ; 004bb5c9
    FSTP float ptr [EAX]                ; 004bb5cb
    FLD float ptr [EDX + 0xb04]         ; 004bb5cd
    FLDZ                                ; 004bb5d3
    FCOMPP                              ; 004bb5d5
    FNSTSW AX                           ; 004bb5d7
    SAHF                                ; 004bb5d9
    JC 0x004bb5f0                       ; 004bb5da
        ;   XREF to: 004bb5f0 (CONDITIONAL_JUMP)  ; LAB_004bb5f0
    MOV dword ptr [EDX + 0xb14],0x0     ; 004bb5dc
    MOV dword ptr [EDX + 0xb04],0x0     ; 004bb5e6
    FLD float ptr [EDX + 0xb04]         ; 004bb5f0
        ;   Label: LAB_004bb5f0
    FDIV float ptr [EDX + 0xb00]        ; 004bb5f6
    FLD1                                ; 004bb5fc
    FSUBRP                              ; 004bb5fe
    FLD float ptr [EDX + 0xafc]         ; 004bb600
    FSUB float ptr [EDX + 0xaf8]        ; 004bb606
    FMULP                               ; 004bb60c
    FADD float ptr [EDX + 0xaf8]        ; 004bb60e
    FSTP float ptr [EDX + 0xaf4]        ; 004bb614
    RET                                 ; 004bb61a
        ;   Label: LAB_004bb61a

