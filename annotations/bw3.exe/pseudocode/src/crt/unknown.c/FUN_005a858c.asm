; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte * crt_unknown_c_FUN_005a858c(byte *param_1,int param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a82c0 at 005a8351
;
; Referenced Globals:
;   undefined4 DAT_006074b8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a858c
        ;   Label: crt_unknown.c_FUN_005a858c
    PUSH ESI                            ; 005a858d
    PUSH EDI                            ; 005a858e
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a858f
    MOV EDI,dword ptr [ESP + 0x14]      ; 005a8593
    MOV AH,byte ptr [EDI + 0x10]        ; 005a8597
    OR AH,0x1                           ; 005a859a
    MOV dword ptr [EDI + 0xc],0xffffffff ; 005a859d
    MOV BL,AH                           ; 005a85a4
    MOV byte ptr [EDI + 0x10],AH        ; 005a85a6
    AND BL,0x3                          ; 005a85a9
    MOV byte ptr [EDI + 0x10],BL        ; 005a85ac
    CMP byte ptr [EDX],0x2a             ; 005a85af
    JNZ 0x005a85be                      ; 005a85b2
        ;   XREF to: 005a85be (CONDITIONAL_JUMP)  ; LAB_005a85be
    MOV CL,byte ptr [EDI + 0x10]        ; 005a85b4
    AND CL,0xfe                         ; 005a85b7
    INC EDX                             ; 005a85ba
    MOV byte ptr [EDI + 0x10],CL        ; 005a85bb
    XOR EBX,EBX                         ; 005a85be
        ;   Label: LAB_005a85be
    MOV BL,byte ptr [EDX]               ; 005a85c0
    MOV AL,BL                           ; 005a85c2
    INC AL                              ; 005a85c4
    AND EAX,0xff                        ; 005a85c6
    TEST byte ptr [EAX + 0x6074b8],0x20 ; 005a85cb | DAT_006074b8
    JZ 0x005a85f9                       ; 005a85d2
        ;   XREF to: 005a85f9 (CONDITIONAL_JUMP)  ; LAB_005a85f9
    XOR EAX,EAX                         ; 005a85d4
    IMUL EAX,EAX,0xa                    ; 005a85d6
        ;   Label: LAB_005a85d6
    SUB EBX,0x30                        ; 005a85d9
    ADD EAX,EBX                         ; 005a85dc
    XOR EBX,EBX                         ; 005a85de
    MOV BL,byte ptr [EDX + 0x1]         ; 005a85e0
    MOV CL,BL                           ; 005a85e3
    INC CL                              ; 005a85e5
    MOVZX ESI,CL                        ; 005a85e7
    MOV CL,byte ptr [ESI + 0x6074b8]    ; 005a85ea | DAT_006074b8
    INC EDX                             ; 005a85f0
    TEST CL,0x20                        ; 005a85f1
    JNZ 0x005a85d6                      ; 005a85f4
        ;   XREF to: 005a85d6 (CONDITIONAL_JUMP)  ; LAB_005a85d6
    MOV dword ptr [EDI + 0xc],EAX       ; 005a85f6
    MOV CH,byte ptr [EDX]               ; 005a85f9
        ;   Label: LAB_005a85f9
    LEA EAX,[EDX + 0x1]                 ; 005a85fb
    CMP CH,0x4e                         ; 005a85fe
    JNZ 0x005a8610                      ; 005a8601
        ;   XREF to: 005a8610 (CONDITIONAL_JUMP)  ; LAB_005a8610
    MOV CL,byte ptr [EDI + 0x10]        ; 005a8603
    OR CL,0x8                           ; 005a8606
    MOV EDX,EAX                         ; 005a8609
    MOV byte ptr [EDI + 0x10],CL        ; 005a860b
    JMP 0x005a8620                      ; 005a860e
        ;   XREF to: 005a8620 (UNCONDITIONAL_JUMP)  ; LAB_005a8620
    CMP CH,0x46                         ; 005a8610
        ;   Label: LAB_005a8610
    JNZ 0x005a8620                      ; 005a8613
        ;   XREF to: 005a8620 (CONDITIONAL_JUMP)  ; LAB_005a8620
    MOV BH,byte ptr [EDI + 0x10]        ; 005a8615
    OR BH,0x4                           ; 005a8618
    MOV EDX,EAX                         ; 005a861b
    MOV byte ptr [EDI + 0x10],BH        ; 005a861d
    MOV AL,byte ptr [EDX]               ; 005a8620
        ;   Label: LAB_005a8620
    LEA EBX,[EDX + 0x1]                 ; 005a8622
    CMP AL,0x68                         ; 005a8625
    JC 0x005a8637                       ; 005a8627
        ;   XREF to: 005a8637 (CONDITIONAL_JUMP)  ; LAB_005a8637
    JBE 0x005a8643                      ; 005a8629
        ;   XREF to: 005a8643 (CONDITIONAL_JUMP)  ; LAB_005a8643
    CMP AL,0x6c                         ; 005a862b
    JC 0x005a8680                       ; 005a862d
        ;   XREF to: 005a8680 (CONDITIONAL_JUMP)  ; LAB_005a8680
    JBE 0x005a864f                      ; 005a862f
        ;   XREF to: 005a864f (CONDITIONAL_JUMP)  ; LAB_005a864f
    CMP AL,0x77                         ; 005a8631
    JZ 0x005a864f                       ; 005a8633
        ;   XREF to: 005a864f (CONDITIONAL_JUMP)  ; LAB_005a864f
    JMP 0x005a8680                      ; 005a8635
        ;   XREF to: 005a8680 (UNCONDITIONAL_JUMP)  ; LAB_005a8680
    CMP AL,0x49                         ; 005a8637
        ;   Label: LAB_005a8637
    JC 0x005a8680                       ; 005a8639
        ;   XREF to: 005a8680 (CONDITIONAL_JUMP)  ; LAB_005a8680
    JBE 0x005a8668                      ; 005a863b
        ;   XREF to: 005a8668 (CONDITIONAL_JUMP)  ; LAB_005a8668
    CMP AL,0x4c                         ; 005a863d
    JZ 0x005a865b                       ; 005a863f
        ;   XREF to: 005a865b (CONDITIONAL_JUMP)  ; LAB_005a865b
    JMP 0x005a8680                      ; 005a8641
        ;   XREF to: 005a8680 (UNCONDITIONAL_JUMP)  ; LAB_005a8680
    MOV AL,byte ptr [EDI + 0x10]        ; 005a8643
        ;   Label: LAB_005a8643
    OR AL,0x10                          ; 005a8646
    MOV EDX,EBX                         ; 005a8648
    MOV byte ptr [EDI + 0x10],AL        ; 005a864a
    JMP 0x005a8680                      ; 005a864d
        ;   XREF to: 005a8680 (UNCONDITIONAL_JUMP)  ; LAB_005a8680
    MOV CH,byte ptr [EDI + 0x10]        ; 005a864f
        ;   Label: LAB_005a864f
    OR CH,0x20                          ; 005a8652
    INC EDX                             ; 005a8655
    MOV byte ptr [EDI + 0x10],CH        ; 005a8656
    JMP 0x005a8680                      ; 005a8659
        ;   XREF to: 005a8680 (UNCONDITIONAL_JUMP)  ; LAB_005a8680
    MOV AH,byte ptr [EDI + 0x10]        ; 005a865b
        ;   Label: LAB_005a865b
    OR AH,0x40                          ; 005a865e
    MOV EDX,EBX                         ; 005a8661
    MOV byte ptr [EDI + 0x10],AH        ; 005a8663
    JMP 0x005a8680                      ; 005a8666
        ;   XREF to: 005a8680 (UNCONDITIONAL_JUMP)  ; LAB_005a8680
    CMP byte ptr [EDX + 0x1],0x36       ; 005a8668
        ;   Label: LAB_005a8668
    JNZ 0x005a8680                      ; 005a866c
        ;   XREF to: 005a8680 (CONDITIONAL_JUMP)  ; LAB_005a8680
    CMP byte ptr [EDX + 0x2],0x34       ; 005a866e
    JNZ 0x005a8680                      ; 005a8672
        ;   XREF to: 005a8680 (CONDITIONAL_JUMP)  ; LAB_005a8680
    MOV CL,byte ptr [EDI + 0x10]        ; 005a8674
    OR CL,0x40                          ; 005a8677
    ADD EDX,0x3                         ; 005a867a
    MOV byte ptr [EDI + 0x10],CL        ; 005a867d
    MOV EAX,EDX                         ; 005a8680
        ;   Label: LAB_005a8680
    POP EDI                             ; 005a8682
    POP ESI                             ; 005a8683
    POP EBX                             ; 005a8684
    RET                                 ; 005a8685

