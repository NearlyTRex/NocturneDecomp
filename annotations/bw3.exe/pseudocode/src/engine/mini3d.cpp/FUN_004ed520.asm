; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004ed520(float *param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d76cfc
;   undefined4 DAT_01d76d00
;   undefined4 DAT_01d7977c
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ed520
        ;   Label: engine_mini3d.cpp_FUN_004ed520
    PUSH ESI                            ; 004ed521
    PUSH EBP                            ; 004ed522
    SUB ESP,0xc                         ; 004ed523
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004ed526
    MOV ESI,dword ptr [ESP + 0x20]      ; 004ed52a
    MOV EDX,dword ptr [0x01d76d00]      ; 004ed52e | DAT_01d76d00
    INC EDX                             ; 004ed534
    MOV dword ptr [0x01d76d00],EDX      ; 004ed535 | DAT_01d76d00
    CMP EDX,0x9                         ; 004ed53b
    JG 0x004ed6ee                       ; 004ed53e
        ;   XREF to: 004ed6ee (CONDITIONAL_JUMP)  ; LAB_004ed6ee
    MOV EAX,[0x01d76d00]                ; 004ed544 | DAT_01d76d00
        ;   Label: LAB_004ed544
    SHL EAX,0x2                         ; 004ed549
    MOV EDX,EAX                         ; 004ed54c
    SHL EAX,0x4                         ; 004ed54e
    SUB EAX,EDX                         ; 004ed551
    MOV EDX,0x1d76d04                   ; 004ed553
    ADD EDX,EAX                         ; 004ed558
    MOV EAX,[0x01d76cfc]                ; 004ed55a | DAT_01d76cfc
    FLD float ptr [EAX + 0x28]          ; 004ed55f
    FSUB float ptr [ESI + 0x4]          ; 004ed562
    FLD ST0                             ; 004ed565
    FMUL float ptr [EBX + 0xc]          ; 004ed567
    FLD float ptr [EAX + 0x24]          ; 004ed56a
    FSUB float ptr [ESI]                ; 004ed56d
    FLD ST0                             ; 004ed56f
    FMUL float ptr [EBX]                ; 004ed571
    FLD float ptr [EAX + 0x2c]          ; 004ed573
    FXCH                                ; 004ed576
    FADDP ST3,ST0                       ; 004ed578
    FSUB float ptr [ESI + 0x8]          ; 004ed57a
    FLD ST0                             ; 004ed57d
    FMUL float ptr [EBX + 0x18]         ; 004ed57f
    FADDP ST3,ST0                       ; 004ed582
    FLD ST1                             ; 004ed584
    FXCH ST3                            ; 004ed586
    FSTP float ptr [EDX + 0x24]         ; 004ed588
    FXCH ST2                            ; 004ed58b
    FMUL float ptr [EBX + 0x4]          ; 004ed58d
    FLD ST3                             ; 004ed590
    FMUL float ptr [EBX + 0x10]         ; 004ed592
    FADDP                               ; 004ed595
    FLD ST2                             ; 004ed597
    FMUL float ptr [EBX + 0x1c]         ; 004ed599
    FADDP                               ; 004ed59c
    FSTP float ptr [EDX + 0x28]         ; 004ed59e
    FMUL float ptr [EBX + 0x8]          ; 004ed5a1
    FXCH ST2                            ; 004ed5a4
    FMUL float ptr [EBX + 0x14]         ; 004ed5a6
    FADDP ST2,ST0                       ; 004ed5a9
    FMUL float ptr [EBX + 0x20]         ; 004ed5ab
    FADDP                               ; 004ed5ae
    FSTP float ptr [EDX + 0x2c]         ; 004ed5b0
    FLD float ptr [EAX + 0x34]          ; 004ed5b3
    FMUL float ptr [EBX + 0xc]          ; 004ed5b6
    FLD float ptr [EAX + 0x30]          ; 004ed5b9
    FMUL float ptr [EBX]                ; 004ed5bc
    FADDP                               ; 004ed5be
    FLD float ptr [EAX + 0x38]          ; 004ed5c0
    FMUL float ptr [EBX + 0x18]         ; 004ed5c3
    FADDP                               ; 004ed5c6
    FSTP float ptr [EDX + 0x30]         ; 004ed5c8
    FLD float ptr [EAX + 0x30]          ; 004ed5cb
    FMUL float ptr [EBX + 0x4]          ; 004ed5ce
    FLD float ptr [EAX + 0x34]          ; 004ed5d1
    FMUL float ptr [EBX + 0x10]         ; 004ed5d4
    FADDP                               ; 004ed5d7
    FLD float ptr [EAX + 0x38]          ; 004ed5d9
    FMUL float ptr [EBX + 0x1c]         ; 004ed5dc
    FADDP                               ; 004ed5df
    FSTP float ptr [EDX + 0x34]         ; 004ed5e1
    FLD float ptr [EAX + 0x30]          ; 004ed5e4
    FMUL float ptr [EBX + 0x8]          ; 004ed5e7
    FLD float ptr [EAX + 0x34]          ; 004ed5ea
    FMUL float ptr [EBX + 0x14]         ; 004ed5ed
    FADDP                               ; 004ed5f0
    FLD float ptr [EAX + 0x38]          ; 004ed5f2
    FMUL float ptr [EBX + 0x20]         ; 004ed5f5
    FADDP                               ; 004ed5f8
    FSTP float ptr [EDX + 0x38]         ; 004ed5fa
    FLD float ptr [EBX + 0xc]           ; 004ed5fd
    FMUL float ptr [EAX + 0xc]          ; 004ed600
    FLD float ptr [EBX]                 ; 004ed603
    FMUL float ptr [EAX]                ; 004ed605
    FADDP                               ; 004ed607
    FLD float ptr [EBX + 0x18]          ; 004ed609
    FMUL float ptr [EAX + 0x18]         ; 004ed60c
    FADDP                               ; 004ed60f
    FSTP float ptr [EDX]                ; 004ed611
    FLD float ptr [EBX + 0xc]           ; 004ed613
    FMUL float ptr [EAX + 0x10]         ; 004ed616
    FLD float ptr [EBX]                 ; 004ed619
    FMUL float ptr [EAX + 0x4]          ; 004ed61b
    FADDP                               ; 004ed61e
    FLD float ptr [EBX + 0x18]          ; 004ed620
    FMUL float ptr [EAX + 0x1c]         ; 004ed623
    FADDP                               ; 004ed626
    FSTP float ptr [EDX + 0x4]          ; 004ed628
    FLD float ptr [EBX + 0xc]           ; 004ed62b
    FMUL float ptr [EAX + 0x14]         ; 004ed62e
    FLD float ptr [EBX]                 ; 004ed631
    FMUL float ptr [EAX + 0x8]          ; 004ed633
    FADDP                               ; 004ed636
    FLD float ptr [EBX + 0x18]          ; 004ed638
    FMUL float ptr [EAX + 0x20]         ; 004ed63b
    FADDP                               ; 004ed63e
    FSTP float ptr [EDX + 0x8]          ; 004ed640
    FLD float ptr [EBX + 0x10]          ; 004ed643
    FMUL float ptr [EAX + 0xc]          ; 004ed646
    FLD float ptr [EBX + 0x4]           ; 004ed649
    FMUL float ptr [EAX]                ; 004ed64c
    FADDP                               ; 004ed64e
    FLD float ptr [EBX + 0x1c]          ; 004ed650
    FMUL float ptr [EAX + 0x18]         ; 004ed653
    FADDP                               ; 004ed656
    FSTP float ptr [EDX + 0xc]          ; 004ed658
    FLD float ptr [EBX + 0x4]           ; 004ed65b
    FMUL float ptr [EAX + 0x4]          ; 004ed65e
    FLD float ptr [EBX + 0x10]          ; 004ed661
    FMUL float ptr [EAX + 0x10]         ; 004ed664
    FADDP                               ; 004ed667
    FLD float ptr [EBX + 0x1c]          ; 004ed669
    FMUL float ptr [EAX + 0x1c]         ; 004ed66c
    FADDP                               ; 004ed66f
    FSTP float ptr [EDX + 0x10]         ; 004ed671
    FLD float ptr [EBX + 0x4]           ; 004ed674
    FMUL float ptr [EAX + 0x8]          ; 004ed677
    FLD float ptr [EBX + 0x10]          ; 004ed67a
    FMUL float ptr [EAX + 0x14]         ; 004ed67d
    FADDP                               ; 004ed680
    FLD float ptr [EBX + 0x1c]          ; 004ed682
    FMUL float ptr [EAX + 0x20]         ; 004ed685
    FADDP                               ; 004ed688
    FSTP float ptr [EDX + 0x14]         ; 004ed68a
    FLD float ptr [EBX + 0x14]          ; 004ed68d
    FMUL float ptr [EAX + 0xc]          ; 004ed690
    FLD float ptr [EBX + 0x8]           ; 004ed693
    FMUL float ptr [EAX]                ; 004ed696
    FADDP                               ; 004ed698
    FLD float ptr [EBX + 0x20]          ; 004ed69a
    FMUL float ptr [EAX + 0x18]         ; 004ed69d
    FADDP                               ; 004ed6a0
    FSTP float ptr [EDX + 0x18]         ; 004ed6a2
    FLD float ptr [EBX + 0x8]           ; 004ed6a5
    FMUL float ptr [EAX + 0x4]          ; 004ed6a8
    FLD float ptr [EBX + 0x14]          ; 004ed6ab
    FMUL float ptr [EAX + 0x10]         ; 004ed6ae
    FADDP                               ; 004ed6b1
    FLD float ptr [EBX + 0x20]          ; 004ed6b3
    FMUL float ptr [EAX + 0x1c]         ; 004ed6b6
    FADDP                               ; 004ed6b9
    FSTP float ptr [EDX + 0x1c]         ; 004ed6bb
    FLD float ptr [EBX + 0x8]           ; 004ed6be
    FMUL float ptr [EAX + 0x8]          ; 004ed6c1
    FLD float ptr [EBX + 0x14]          ; 004ed6c4
    FMUL float ptr [EAX + 0x14]         ; 004ed6c7
    FADDP                               ; 004ed6ca
    FLD float ptr [EBX + 0x20]          ; 004ed6cc
    FMUL float ptr [EAX + 0x20]         ; 004ed6cf
    MOV dword ptr [0x01d76cfc],EDX      ; 004ed6d2 | DAT_01d76cfc
    MOV EAX,0x1                         ; 004ed6d8
    FADDP                               ; 004ed6dd
    MOV [0x01d7977c],EAX                ; 004ed6df | DAT_01d7977c
    FSTP float ptr [EDX + 0x20]         ; 004ed6e4
    ADD ESP,0xc                         ; 004ed6e7
    POP EBP                             ; 004ed6ea
    POP ESI                             ; 004ed6eb
    POP EBX                             ; 004ed6ec
    RET                                 ; 004ed6ed
    PUSH EDI                            ; 004ed6ee
        ;   Label: LAB_004ed6ee
    MOV EDI,0x5c7e9f                    ; 004ed6ef
    MOV EBP,0x447                       ; 004ed6f4
    PUSH 0x5c7eb4                       ; 004ed6f9
    MOV dword ptr [0x01d71de0],EDI      ; 004ed6fe | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 004ed704 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004ed70a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004ed70f
    POP EDI                             ; 004ed712
    JMP 0x004ed544                      ; 004ed713
        ;   XREF to: 004ed544 (UNCONDITIONAL_JUMP)  ; LAB_004ed544

