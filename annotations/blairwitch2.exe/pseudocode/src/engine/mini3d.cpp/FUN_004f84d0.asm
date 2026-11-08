; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f84d0(float *param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_engine_mini3d_cpp_005ddf45
;   TerminatedCString s_Bad_clip_005ddf5a
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d0d2bc
;   undefined4 DAT_01d0d2c0
;   undefined4 DAT_01d0d2c4
;   undefined4 DAT_01d0d2c8
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f84d0
        ;   Label: FUN_004f84d0
    PUSH ESI                            ; 004f84d1
    PUSH EDI                            ; 004f84d2
    PUSH EBP                            ; 004f84d3
    SUB ESP,0x8                         ; 004f84d4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004f84d7
    MOV ESI,dword ptr [ESP + 0x20]      ; 004f84db
    MOV EDI,dword ptr [ESP + 0x24]      ; 004f84df
    FLD float ptr [ESI + 0x4]           ; 004f84e3
    FSUB float ptr [EBX + 0x4]          ; 004f84e6
    FMUL float ptr [0x01d0d2c0]         ; 004f84e9 | DAT_01d0d2c0
    FLD float ptr [ESI]                 ; 004f84ef
    FSUB float ptr [EBX]                ; 004f84f1
    FMUL float ptr [0x01d0d2bc]         ; 004f84f3 | DAT_01d0d2bc
    FADDP                               ; 004f84f9
    FLD float ptr [ESI + 0x8]           ; 004f84fb
    FSUB float ptr [EBX + 0x8]          ; 004f84fe
    FMUL float ptr [0x01d0d2c4]         ; 004f8501 | DAT_01d0d2c4
    FADDP                               ; 004f8507
    FSTP float ptr [ESP + 0x4]          ; 004f8509
    TEST dword ptr [ESP + 0x4],0x7fffffff ; 004f850d
    JZ 0x004f85cd                       ; 004f8515
        ;   XREF to: 004f85cd (CONDITIONAL_JUMP)  ; LAB_004f85cd
    FLD float ptr [0x01d0d2bc]          ; 004f851b | DAT_01d0d2bc
        ;   Label: LAB_004f851b
    FMUL float ptr [EBX]                ; 004f8521
    FADD float ptr [0x01d0d2c8]         ; 004f8523 | DAT_01d0d2c8
    FLD float ptr [0x01d0d2c0]          ; 004f8529 | DAT_01d0d2c0
    FMUL float ptr [EBX + 0x4]          ; 004f852f
    FADDP                               ; 004f8532
    FLD float ptr [0x01d0d2c4]          ; 004f8534 | DAT_01d0d2c4
    FMUL float ptr [EBX + 0x8]          ; 004f853a
    FADDP                               ; 004f853d
    FLD ST0                             ; 004f853f
    FCHS                                ; 004f8541
    FDIV float ptr [ESP + 0x4]          ; 004f8543
    FLD float ptr [ESI]                 ; 004f8547
    FSUB float ptr [EBX]                ; 004f8549
    FXCH                                ; 004f854b
    FSTP ST2                            ; 004f854d
    FMUL ST1                            ; 004f854f
    FADD float ptr [EBX]                ; 004f8551
    FSTP float ptr [EDI]                ; 004f8553
    FLD float ptr [ESI + 0x4]           ; 004f8555
    FSUB float ptr [EBX + 0x4]          ; 004f8558
    FMUL ST1                            ; 004f855b
    FADD float ptr [EBX + 0x4]          ; 004f855d
    FSTP float ptr [EDI + 0x4]          ; 004f8560
    FLD float ptr [ESI + 0x8]           ; 004f8563
    FSUB float ptr [EBX + 0x8]          ; 004f8566
    FMUL ST1                            ; 004f8569
    FADD float ptr [EBX + 0x8]          ; 004f856b
    FSTP float ptr [EDI + 0x8]          ; 004f856e
    FLD float ptr [ESI + 0x1c]          ; 004f8571
    FSUB float ptr [EBX + 0x1c]         ; 004f8574
    FMUL ST1                            ; 004f8577
    FADD float ptr [EBX + 0x1c]         ; 004f8579
    FSTP float ptr [EDI + 0x1c]         ; 004f857c
    FLD float ptr [ESI + 0x20]          ; 004f857f
    FSUB float ptr [EBX + 0x20]         ; 004f8582
    FMUL ST1                            ; 004f8585
    FADD float ptr [EBX + 0x20]         ; 004f8587
    FSTP float ptr [EDI + 0x20]         ; 004f858a
    FLD float ptr [ESI + 0xc]           ; 004f858d
    FSUB float ptr [EBX + 0xc]          ; 004f8590
    FMUL ST1                            ; 004f8593
    FADD float ptr [EBX + 0xc]          ; 004f8595
    FSTP float ptr [EDI + 0xc]          ; 004f8598
    FLD float ptr [ESI + 0x10]          ; 004f859b
    FSUB float ptr [EBX + 0x10]         ; 004f859e
    FMUL ST1                            ; 004f85a1
    FADD float ptr [EBX + 0x10]         ; 004f85a3
    FSTP float ptr [EDI + 0x10]         ; 004f85a6
    FLD float ptr [ESI + 0x14]          ; 004f85a9
    FSUB float ptr [EBX + 0x14]         ; 004f85ac
    FMUL ST1                            ; 004f85af
    FADD float ptr [EBX + 0x14]         ; 004f85b1
    FSTP float ptr [EDI + 0x14]         ; 004f85b4
    FLD float ptr [ESI + 0x18]          ; 004f85b7
    FSUB float ptr [EBX + 0x18]         ; 004f85ba
    FMULP                               ; 004f85bd
    FADD float ptr [EBX + 0x18]         ; 004f85bf
    FSTP float ptr [EDI + 0x18]         ; 004f85c2
    ADD ESP,0x8                         ; 004f85c5
    POP EBP                             ; 004f85c8
    POP EDI                             ; 004f85c9
    POP ESI                             ; 004f85ca
    POP EBX                             ; 004f85cb
    RET                                 ; 004f85cc
    MOV ECX,0x5ddf45                    ; 004f85cd | = "..\\engine\\mini3d.cpp"
        ;   Label: LAB_004f85cd
    MOV EBP,0x1475                      ; 004f85d2
    PUSH 0x5ddf5a                       ; 004f85d7 | = "Bad clip!"
    MOV dword ptr [0x01d046a0],ECX      ; 004f85dc | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 004f85e2 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004f85e8
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004f85ed
    JMP 0x004f851b                      ; 004f85f0
        ;   XREF to: 004f851b (UNCONDITIONAL_JUMP)  ; LAB_004f851b

