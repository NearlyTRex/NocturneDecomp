; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_00474550(int param_1,int *param_2,int param_3,int param_4,int param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_005d1b6f
;
; Called Functions:
;   core_dtrace.cpp_FUN_00474020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00474550
        ;   Label: core_dtrace.cpp_FUN_00474550
    PUSH ESI                            ; 00474551
    PUSH EDI                            ; 00474552
    PUSH EBP                            ; 00474553
    SUB ESP,0x30                        ; 00474554
    MOV ESI,dword ptr [ESP + 0x44]      ; 00474557
    MOV EBP,dword ptr [ESP + 0x48]      ; 0047455b
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0047455f
    MOV dword ptr [ESP + 0x2c],EAX      ; 00474563
    MOV EAX,dword ptr [ESP + 0x50]      ; 00474567
    FILD dword ptr [ESP + 0x2c]         ; 0047456b
    MOV dword ptr [ESP + 0x2c],EAX      ; 0047456f
    FMUL float ptr [ESI + 0x28]         ; 00474573
    FILD dword ptr [ESP + 0x2c]         ; 00474576
    MOV EAX,dword ptr [ESP + 0x54]      ; 0047457a
    FMUL float ptr [ESI + 0x2c]         ; 0047457e
    MOV dword ptr [ESP + 0x2c],EAX      ; 00474581
    XOR EDX,EDX                         ; 00474585
    FILD dword ptr [ESP + 0x2c]         ; 00474587
    FMUL float ptr [ESI + 0x30]         ; 0047458b
    MOV dword ptr [ESP + 0x24],EDX      ; 0047458e
    FXCH ST2                            ; 00474592
    FADD float ptr [ESI + 0x10]         ; 00474594
    MOV dword ptr [ESP + 0x18],EDX      ; 00474597
    FSTP float ptr [ESP]                ; 0047459b
    FADD float ptr [ESI + 0x14]         ; 0047459e
    FXCH                                ; 004745a1
    FADD float ptr [ESI + 0x18]         ; 004745a3
    FXCH                                ; 004745a6
    FSTP float ptr [ESP + 0x4]          ; 004745a8
    FSTP float ptr [ESP + 0x8]          ; 004745ac
    MOV EAX,dword ptr [ESP + 0x18]      ; 004745b0
        ;   Label: LAB_004745b0
    XOR EDI,EDI                         ; 004745b4
    MOV dword ptr [ESP + 0x1c],EAX      ; 004745b6
    MOV dword ptr [ESP + 0x20],EAX      ; 004745ba
    MOV EBX,dword ptr [EBP]             ; 004745be
        ;   Label: LAB_004745be
    TEST EBX,EBX                        ; 004745c1
    JZ 0x00474661                       ; 004745c3
        ;   XREF to: 00474661 (CONDITIONAL_JUMP)  ; LAB_00474661
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004745c9
    LEA EAX,[EBX + EDX*0x1]             ; 004745cd
    CMP byte ptr [EAX],0x0              ; 004745d0
    JZ 0x00474661                       ; 004745d3
        ;   XREF to: 00474661 (CONDITIONAL_JUMP)  ; LAB_00474661
    MOV EAX,dword ptr [ESP + 0x20]      ; 004745d9
    XOR EBX,EBX                         ; 004745dd
    MOV dword ptr [ESP + 0x28],EAX      ; 004745df
    MOV ECX,dword ptr [ESP + 0x28]      ; 004745e3
        ;   Label: LAB_004745e3
    MOV EAX,dword ptr [EBP]             ; 004745e7
    ADD EAX,ECX                         ; 004745ea
    MOV AL,byte ptr [EAX]               ; 004745ec
    XOR EDX,EDX                         ; 004745ee
    AND EAX,0xff                        ; 004745f0
    MOV DL,byte ptr [EBX + 0x613888]    ; 004745f5
    TEST EAX,EDX                        ; 004745fb
    JZ 0x0047465b                       ; 004745fd
        ;   XREF to: 0047465b (CONDITIONAL_JUMP)  ; LAB_0047465b
    MOV dword ptr [ESP + 0x2c],EBX      ; 004745ff
    FILD dword ptr [ESP + 0x2c]         ; 00474603
    FMUL float ptr [ESI + 0x28]         ; 00474607
    FLD float ptr [0x005d1b6f]          ; 0047460a | DAT_005d1b6f
    FXCH                                ; 00474610
    FMUL ST1                            ; 00474612
    MOV dword ptr [ESP + 0x2c],EDI      ; 00474614
    FADD float ptr [ESP]                ; 00474618
    FILD dword ptr [ESP + 0x2c]         ; 0047461b
    FXCH                                ; 0047461f
    FSTP float ptr [ESP + 0xc]          ; 00474621
    FMUL float ptr [ESI + 0x2c]         ; 00474625
    MOV EAX,dword ptr [ESP + 0x24]      ; 00474628
    FMUL ST1                            ; 0047462c
    MOV dword ptr [ESP + 0x2c],EAX      ; 0047462e
    FADD float ptr [ESP + 0x4]          ; 00474632
    FILD dword ptr [ESP + 0x2c]         ; 00474636
    FXCH                                ; 0047463a
    FSTP float ptr [ESP + 0x10]         ; 0047463c
    FMUL float ptr [ESI + 0x30]         ; 00474640
    LEA EAX,[ESP + 0xc]                 ; 00474643
    FMULP                               ; 00474647
    PUSH EAX                            ; 00474649
    FADD float ptr [ESP + 0xc]          ; 0047464a
    PUSH ESI                            ; 0047464e
    FSTP float ptr [ESP + 0x1c]         ; 0047464f
    CALL core_dtrace.cpp_FUN_00474020   ; 00474653
        ;   XREF to: 00474020 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00474020()
    ADD ESP,0x8                         ; 00474658
    INC EBX                             ; 0047465b
        ;   Label: LAB_0047465b
    CMP EBX,0x8                         ; 0047465c
    JL 0x004745e3                       ; 0047465f
        ;   XREF to: 004745e3 (CONDITIONAL_JUMP)  ; LAB_004745e3
    MOV EAX,dword ptr [ESP + 0x20]      ; 00474661
        ;   Label: LAB_00474661
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00474665
    INC EDI                             ; 00474669
    INC EAX                             ; 0047466a
    INC EBX                             ; 0047466b
    MOV dword ptr [ESP + 0x20],EAX      ; 0047466c
    MOV dword ptr [ESP + 0x1c],EBX      ; 00474670
    CMP EDI,0x8                         ; 00474674
    JL 0x004745be                       ; 00474677
        ;   XREF to: 004745be (CONDITIONAL_JUMP)  ; LAB_004745be
    MOV ECX,dword ptr [ESP + 0x24]      ; 0047467d
    MOV EDX,dword ptr [ESP + 0x18]      ; 00474681
    INC ECX                             ; 00474685
    ADD EDX,0x8                         ; 00474686
    MOV dword ptr [ESP + 0x24],ECX      ; 00474689
    MOV dword ptr [ESP + 0x18],EDX      ; 0047468d
    CMP ECX,0x8                         ; 00474691
    JL 0x004745b0                       ; 00474694
        ;   XREF to: 004745b0 (CONDITIONAL_JUMP)  ; LAB_004745b0
    ADD ESP,0x30                        ; 0047469a
    POP EBP                             ; 0047469d
    POP EDI                             ; 0047469e
    POP ESI                             ; 0047469f
    POP EBX                             ; 004746a0
    RET                                 ; 004746a1

