; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004314f0(int param_1,int param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005d5a67
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01ccf624
;
; Called Functions:
;   FUN_00408b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004314f0
        ;   Label: FUN_004314f0
    PUSH ESI                            ; 004314f1
    PUSH EDI                            ; 004314f2
    PUSH EBP                            ; 004314f3
    MOV EBP,ESP                         ; 004314f4
    SUB ESP,0x60                        ; 004314f6
    MOV ESI,dword ptr [EBP + 0x14]      ; 004314f9
    MOV EBX,dword ptr [EBP + 0x18]      ; 004314fc
    TEST EBX,EBX                        ; 004314ff
    JNZ 0x0043150e                      ; 00431501
        ;   XREF to: 0043150e (CONDITIONAL_JUMP)  ; LAB_0043150e
    XOR ESI,ESI                         ; 00431503
        ;   Label: LAB_00431503
    MOV EAX,ESI                         ; 00431505
    MOV ESP,EBP                         ; 00431507
    POP EBP                             ; 00431509
    POP EDI                             ; 0043150a
    POP ESI                             ; 0043150b
    POP EBX                             ; 0043150c
    RET                                 ; 0043150d
    LEA EDX,[EBP + -0x60]               ; 0043150e
        ;   Label: LAB_0043150e
    PUSH EDX                            ; 00431511
    MOV EAX,dword ptr [ESI + 0x154]     ; 00431512
    PUSH ESI                            ; 00431518
    CALL dword ptr [EAX + 0x114]        ; 00431519
    ADD ESP,0x8                         ; 0043151f
    TEST EAX,EAX                        ; 00431522
    JZ 0x00431503                       ; 00431524
        ;   XREF to: 00431503 (CONDITIONAL_JUMP)  ; LAB_00431503
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00431526
    PUSH EDX                            ; 00431529
    PUSH EBX                            ; 0043152a
    LEA ESI,[EBP + -0x30]               ; 0043152b
    LEA EDI,[EBP + -0x3c]               ; 0043152e
    CALL FUN_00408b40                   ; 00431531
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    FLD float ptr [EBP + -0x60]         ; 00431536
    LEA ESI,[EBP + -0x30]               ; 00431539
    FLD float ptr [EBP + -0x5c]         ; 0043153c
    MOVSD ES:EDI,ESI                    ; 0043153f
    MOVSD ES:EDI,ESI                    ; 00431540
    MOVSD ES:EDI,ESI                    ; 00431541
    FLD float ptr [EBP + -0x58]         ; 00431542
    LEA EDI,[EBP + -0x18]               ; 00431545
    LEA ESI,[EBP + -0x24]               ; 00431548
    FXCH ST2                            ; 0043154b
    FSUB float ptr [EBP + -0x3c]        ; 0043154d
    FXCH                                ; 00431550
    FSUB float ptr [EBP + -0x38]        ; 00431552
    FXCH ST2                            ; 00431555
    FSUB float ptr [EBP + -0x34]        ; 00431557
    FXCH                                ; 0043155a
    FSTP float ptr [EBP + -0x24]        ; 0043155c
    FXCH                                ; 0043155f
    FSTP float ptr [EBP + -0x20]        ; 00431561
    FSTP float ptr [EBP + -0x1c]        ; 00431564
    MOVSD ES:EDI,ESI                    ; 00431567
    MOVSD ES:EDI,ESI                    ; 00431568
    MOVSD ES:EDI,ESI                    ; 00431569
    FLD float ptr [EBP + -0x18]         ; 0043156a
    FMUL ST0                            ; 0043156d
    FLD float ptr [EBP + -0x10]         ; 0043156f
    FMUL ST0                            ; 00431572
    MOV EAX,[0x0061d95c]                ; 00431574 | DAT_0061d95c
    FADDP                               ; 00431579
    FLD float ptr [EAX + 0x294]         ; 0043157b | DAT_01ccf624
    FXCH                                ; 00431581
    FSQRT                               ; 00431583
    FXCH                                ; 00431585
    FMUL double ptr [0x005d5a67]        ; 00431587 | DAT_005d5a67
    XOR ECX,ECX                         ; 0043158d
    ADD ESP,0x8                         ; 0043158f
    MOV dword ptr [EBP + -0x14],ECX     ; 00431592
    FSTP float ptr [EBP + -0x8]         ; 00431595
    FST float ptr [EBP + -0xc]          ; 00431598
    FCOMP float ptr [EBP + -0x8]        ; 0043159b
    FNSTSW AX                           ; 0043159e
    SAHF                                ; 004315a0
    JBE 0x004315ca                      ; 004315a1
        ;   XREF to: 004315ca (CONDITIONAL_JUMP)  ; LAB_004315ca
    FLD float ptr [EBP + -0x8]          ; 004315a3
    FDIV float ptr [EBP + -0xc]         ; 004315a6
    FLD float ptr [EBP + -0x18]         ; 004315a9
    FXCH                                ; 004315ac
    FSTP float ptr [EBP + -0x4]         ; 004315ae
    FMUL float ptr [EBP + -0x4]         ; 004315b1
    FLDZ                                ; 004315b4
    FMUL float ptr [EBP + -0x4]         ; 004315b6
    FLD float ptr [EBP + -0x10]         ; 004315b9
    FMUL float ptr [EBP + -0x4]         ; 004315bc
    FXCH ST2                            ; 004315bf
    FSTP float ptr [EBP + -0x18]        ; 004315c1
    FSTP float ptr [EBP + -0x14]        ; 004315c4
    FSTP float ptr [EBP + -0x10]        ; 004315c7
    LEA EAX,[EBX + 0x30]                ; 004315ca
        ;   Label: LAB_004315ca
    LEA EDI,[EBP + -0x54]               ; 004315cd
    LEA ESI,[EBX + 0x20]                ; 004315d0
    MOV EDX,dword ptr [EBX + 0x154]     ; 004315d3
    PUSH EAX                            ; 004315d9
    FLD float ptr [ESI + 0x4]           ; 004315da
    FLD float ptr [ESI + 0x8]           ; 004315dd
    FLD float ptr [ESI]                 ; 004315e0
    LEA EAX,[EBP + -0x54]               ; 004315e2
    LEA ESI,[EBP + -0x48]               ; 004315e5
    FADD float ptr [EBP + -0x18]        ; 004315e8
    FXCH ST2                            ; 004315eb
    FADD float ptr [EBP + -0x14]        ; 004315ed
    FXCH                                ; 004315f0
    FADD float ptr [EBP + -0x10]        ; 004315f2
    PUSH EAX                            ; 004315f5
    FXCH ST2                            ; 004315f6
    FSTP float ptr [EBP + -0x48]        ; 004315f8
    FSTP float ptr [EBP + -0x44]        ; 004315fb
    FSTP float ptr [EBP + -0x40]        ; 004315fe
    PUSH EBX                            ; 00431601
    MOVSD ES:EDI,ESI                    ; 00431602
    MOVSD ES:EDI,ESI                    ; 00431603
    MOVSD ES:EDI,ESI                    ; 00431604
    CALL dword ptr [EDX + 0x68]         ; 00431605
    MOV ESI,0x1                         ; 00431608
    ADD ESP,0xc                         ; 0043160d
    MOV EAX,ESI                         ; 00431610
    MOV ESP,EBP                         ; 00431612
    POP EBP                             ; 00431614
    POP EDI                             ; 00431615
    POP ESI                             ; 00431616
    POP EBX                             ; 00431617
    RET                                 ; 00431618

