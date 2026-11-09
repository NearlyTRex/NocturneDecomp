; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f8610(float *param_1,uint param_2,int param_3,int *param_4)
;
;
; XREF[1]:
;   engine_mini3d.cpp_FUN_004f8750 at 004f88f9
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_004f85fc = 004f86fa
;   undefined1* PTR_caseD_3_004f8604 = 004f86dc
;   undefined4 DAT_01d0d2bc
;   undefined4 DAT_01d0d2c0
;   undefined4 DAT_01d0d2c4
;   undefined4 DAT_01d0d2c8
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f84d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8610
        ;   Label: engine_mini3d.cpp_FUN_004f8610
    PUSH ESI                            ; 004f8611
    PUSH EDI                            ; 004f8612
    PUSH EBP                            ; 004f8613
    SUB ESP,0x8                         ; 004f8614
    MOV EBX,dword ptr [ESP + 0x28]      ; 004f8617
    MOV ECX,dword ptr [ESP + 0x20]      ; 004f861b
    XOR EDX,EDX                         ; 004f861f
    MOV dword ptr [EBX],0x0             ; 004f8621
    MOV dword ptr [ESP],EDX             ; 004f8627
    TEST ECX,ECX                        ; 004f862a
    JLE 0x004f86f2                      ; 004f862c
        ;   XREF to: 004f86f2 (CONDITIONAL_JUMP)  ; LAB_004f86f2
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004f8632
    MOV ECX,dword ptr [ESP]             ; 004f8636
        ;   Label: LAB_004f8636
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f8639
    INC ECX                             ; 004f863d
    CMP ECX,EAX                         ; 004f863e
    JNZ 0x004f8644                      ; 004f8640
        ;   XREF to: 004f8644 (CONDITIONAL_JUMP)  ; LAB_004f8644
    XOR ECX,EAX                         ; 004f8642
    IMUL ECX,ECX,0x24                   ; 004f8644
        ;   Label: LAB_004f8644
    FLD float ptr [0x01d0d2c0]          ; 004f8647 | DAT_01d0d2c0
    FMUL float ptr [EBP + 0x4]          ; 004f864d
    FLD float ptr [0x01d0d2bc]          ; 004f8650 | DAT_01d0d2bc
    FMUL float ptr [EBP]                ; 004f8656
    FADDP                               ; 004f8659
    FLD float ptr [0x01d0d2c4]          ; 004f865b | DAT_01d0d2c4
    FMUL float ptr [EBP + 0x8]          ; 004f8661
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004f8664
    MOV EDX,EBP                         ; 004f8668
    ADD EDI,ECX                         ; 004f866a
    FADDP                               ; 004f866c
    MOV dword ptr [ESP + 0x4],EDI       ; 004f866e
    FADD float ptr [0x01d0d2c8]         ; 004f8672 | DAT_01d0d2c8
    XOR ECX,ECX                         ; 004f8678
    FLDZ                                ; 004f867a
    FCOMPP                              ; 004f867c
    FNSTSW AX                           ; 004f867e
    SAHF                                ; 004f8680
    JNC 0x004f8688                      ; 004f8681
        ;   XREF to: 004f8688 (CONDITIONAL_JUMP)  ; LAB_004f8688
    MOV ECX,0x1                         ; 004f8683
    MOV EDI,dword ptr [ESP + 0x4]       ; 004f8688
        ;   Label: LAB_004f8688
    FLD float ptr [0x01d0d2c0]          ; 004f868c | DAT_01d0d2c0
    FMUL float ptr [EDI + 0x4]          ; 004f8692
    FLD float ptr [0x01d0d2bc]          ; 004f8695 | DAT_01d0d2bc
    FMUL float ptr [EDI]                ; 004f869b
    FADDP                               ; 004f869d
    FLD float ptr [0x01d0d2c4]          ; 004f869f | DAT_01d0d2c4
    FMUL float ptr [EDI + 0x8]          ; 004f86a5
    FADDP                               ; 004f86a8
    FADD float ptr [0x01d0d2c8]         ; 004f86aa | DAT_01d0d2c8
    FLDZ                                ; 004f86b0
    FCOMPP                              ; 004f86b2
    FNSTSW AX                           ; 004f86b4
    SAHF                                ; 004f86b6
    JNC 0x004f86bc                      ; 004f86b7
        ;   XREF to: 004f86bc (CONDITIONAL_JUMP)  ; LAB_004f86bc
    OR CL,0x2                           ; 004f86b9
    CMP ECX,0x3                         ; 004f86bc
        ;   Label: LAB_004f86bc
    JA 0x004f86dc                       ; 004f86bf
        ;   XREF to: 004f86dc (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4f85f8]  ; 004f86c1 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [EBX],0x24       ; 004f86c8
        ;   Label: caseD_0
    MOV ESI,dword ptr [ESP + 0x24]      ; 004f86cb
    MOV ECX,0x9                         ; 004f86cf
    ADD EDI,ESI                         ; 004f86d4
    MOV ESI,EDX                         ; 004f86d6
    MOVSD.REP ES:EDI,ESI                ; 004f86d8
    INC dword ptr [EBX]                 ; 004f86da
    MOV ESI,dword ptr [ESP]             ; 004f86dc
        ;   Label: caseD_3
    MOV EDI,dword ptr [ESP + 0x20]      ; 004f86df
    INC ESI                             ; 004f86e3
    ADD EBP,0x24                        ; 004f86e4
    MOV dword ptr [ESP],ESI             ; 004f86e7
    CMP ESI,EDI                         ; 004f86ea
    JL 0x004f8636                       ; 004f86ec
        ;   XREF to: 004f8636 (CONDITIONAL_JUMP)  ; LAB_004f8636
    ADD ESP,0x8                         ; 004f86f2
        ;   Label: LAB_004f86f2
    POP EBP                             ; 004f86f5
    POP EDI                             ; 004f86f6
    POP ESI                             ; 004f86f7
    POP EBX                             ; 004f86f8
    RET                                 ; 004f86f9
    IMUL ECX,dword ptr [EBX],0x24       ; 004f86fa
        ;   Label: caseD_1
    ADD ECX,dword ptr [ESP + 0x24]      ; 004f86fd
    PUSH ECX                            ; 004f8701
    PUSH EDX                            ; 004f8702
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f8703
    PUSH EAX                            ; 004f8707
    CALL engine_mini3d.cpp_FUN_004f84d0 ; 004f8708
        ;   XREF to: 004f84d0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f84d0()
    MOV EDX,dword ptr [EBX]             ; 004f870d
    INC EDX                             ; 004f870f
    ADD ESP,0xc                         ; 004f8710
    MOV dword ptr [EBX],EDX             ; 004f8713
    JMP 0x004f86dc                      ; 004f8715
        ;   XREF to: 004f86dc (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [EBX],0x24       ; 004f8717
        ;   Label: caseD_2
    MOV ESI,dword ptr [ESP + 0x24]      ; 004f871a
    MOV ECX,0x9                         ; 004f871e
    ADD EDI,ESI                         ; 004f8723
    MOV ESI,EDX                         ; 004f8725
    MOVSD.REP ES:EDI,ESI                ; 004f8727
    MOV EDI,dword ptr [EBX]             ; 004f8729
    INC EDI                             ; 004f872b
    MOV dword ptr [EBX],EDI             ; 004f872c
    IMUL ECX,EDI,0x24                   ; 004f872e
    ADD ECX,dword ptr [ESP + 0x24]      ; 004f8731
    PUSH ECX                            ; 004f8735
    MOV EDI,dword ptr [ESP + 0x8]       ; 004f8736
    PUSH EDI                            ; 004f873a
    PUSH EDX                            ; 004f873b
    CALL engine_mini3d.cpp_FUN_004f84d0 ; 004f873c
        ;   XREF to: 004f84d0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f84d0()
    MOV EAX,dword ptr [EBX]             ; 004f8741
    INC EAX                             ; 004f8743
    ADD ESP,0xc                         ; 004f8744
    MOV dword ptr [EBX],EAX             ; 004f8747
    JMP 0x004f86dc                      ; 004f8749
        ;   XREF to: 004f86dc (UNCONDITIONAL_JUMP)  ; caseD_3

