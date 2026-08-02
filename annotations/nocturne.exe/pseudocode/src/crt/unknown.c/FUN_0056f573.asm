; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 crt_unknown_c_FUN_0056f573(int param_1,int *param_2,int param_3)
;
;
; Called Functions:
;   crt_unknown.c_FUN_0056a388
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0056f573
        ;   Label: crt_unknown.c_FUN_0056f573
    MOV EBP,ESP                         ; 0056f574
    PUSH EBX                            ; 0056f576
    PUSH ESI                            ; 0056f577
    PUSH EDI                            ; 0056f578
    SUB ESP,0x40                        ; 0056f579
    MOV EDI,dword ptr [EBP + 0x8]       ; 0056f57c
    MOV EDX,dword ptr [EBP + 0xc]       ; 0056f57f
    MOV EBX,dword ptr [EBP + 0x10]      ; 0056f582
    XOR EAX,EAX                         ; 0056f585
    MOV AL,byte ptr [EBX + 0x15]        ; 0056f587
    MOV dword ptr [EBP + -0x40],EAX     ; 0056f58a
    AND AL,0x5f                         ; 0056f58d
    MOV ESI,dword ptr [EBX + 0x8]       ; 0056f58f
    AND EAX,0xff                        ; 0056f592
    CMP EAX,0x47                        ; 0056f597
    JNZ 0x0056f5bf                      ; 0056f59a
        ;   XREF to: 0056f5bf (CONDITIONAL_JUMP)  ; LAB_0056f5bf
    TEST ESI,ESI                        ; 0056f59c
    JNZ 0x0056f5a5                      ; 0056f59e
        ;   XREF to: 0056f5a5 (CONDITIONAL_JUMP)  ; LAB_0056f5a5
    MOV ESI,0x1                         ; 0056f5a0
    MOV dword ptr [EBP + -0x44],0x4     ; 0056f5a5
        ;   Label: LAB_0056f5a5
    MOV ECX,dword ptr [EBP + -0x40]     ; 0056f5ac
    MOV EAX,0x1                         ; 0056f5af
    SUB ECX,0x2                         ; 0056f5b4
    MOV dword ptr [EBP + -0x48],EAX     ; 0056f5b7
    MOV dword ptr [EBP + -0x40],ECX     ; 0056f5ba
    JMP 0x0056f5de                      ; 0056f5bd
        ;   XREF to: 0056f5de (UNCONDITIONAL_JUMP)  ; LAB_0056f5de
    CMP EAX,0x45                        ; 0056f5bf
        ;   Label: LAB_0056f5bf
    JNZ 0x0056f5d1                      ; 0056f5c2
        ;   XREF to: 0056f5d1 (CONDITIONAL_JUMP)  ; LAB_0056f5d1
    MOV ECX,0x1                         ; 0056f5c4
    MOV dword ptr [EBP + -0x44],ECX     ; 0056f5c9
    MOV dword ptr [EBP + -0x48],ECX     ; 0056f5cc
    JMP 0x0056f5de                      ; 0056f5cf
        ;   XREF to: 0056f5de (UNCONDITIONAL_JUMP)  ; LAB_0056f5de
    MOV ECX,0x2                         ; 0056f5d1
        ;   Label: LAB_0056f5d1
    XOR EAX,EAX                         ; 0056f5d6
    MOV dword ptr [EBP + -0x44],ECX     ; 0056f5d8
    MOV dword ptr [EBP + -0x48],EAX     ; 0056f5db
    TEST byte ptr [EBX + 0x1e],0x1      ; 0056f5de
        ;   Label: LAB_0056f5de
    JZ 0x0056f5e8                       ; 0056f5e2
        ;   XREF to: 0056f5e8 (CONDITIONAL_JUMP)  ; LAB_0056f5e8
    OR byte ptr [EBP + -0x44],0x10      ; 0056f5e4
    MOV EAX,dword ptr [EDX]             ; 0056f5e8
        ;   Label: LAB_0056f5e8
    ADD EAX,0x8                         ; 0056f5ea
    MOV dword ptr [EDX],EAX             ; 0056f5ed
    MOV EDX,EAX                         ; 0056f5ef
    MOV EAX,dword ptr [EAX + -0x8]      ; 0056f5f1
    MOV dword ptr [EBP + -0x14],EAX     ; 0056f5f4
    MOV EAX,dword ptr [EDX + -0x4]      ; 0056f5f7
    LEA EDX,[EBP + -0x20]               ; 0056f5fa
    MOV dword ptr [EBP + -0x10],EAX     ; 0056f5fd
    LEA EAX,[EBP + -0x14]               ; 0056f600
    FLD double ptr [EAX]                ; 0056f603
    FSTP extended double ptr [EDX]      ; 0056f605
    CMP ESI,-0x1                        ; 0056f607
    JNZ 0x0056f611                      ; 0056f60a
        ;   XREF to: 0056f611 (CONDITIONAL_JUMP)  ; LAB_0056f611
    MOV ESI,0x6                         ; 0056f60c
    LEA EAX,[EDI + 0x1]                 ; 0056f611
        ;   Label: LAB_0056f611
    PUSH EAX                            ; 0056f614
    LEA EAX,[EBP + -0x4c]               ; 0056f615
    PUSH EAX                            ; 0056f618
    LEA EAX,[EBP + -0x20]               ; 0056f619
    XOR EDX,EDX                         ; 0056f61c
    PUSH EAX                            ; 0056f61e
    MOV dword ptr [EBP + -0x4c],ESI     ; 0056f61f
    MOV dword ptr [EBP + -0x3c],EDX     ; 0056f622
    CALL crt_unknown.c_FUN_0056a388     ; 0056f625
        ;   XREF to: 0056a388 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056a388()
    MOV EAX,dword ptr [EBP + -0x30]     ; 0056f62a
    MOV dword ptr [EBX + 0x28],EAX      ; 0056f62d
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0056f630
    MOV dword ptr [EBX + 0x2c],EAX      ; 0056f633
    MOV EAX,dword ptr [EBP + -0x28]     ; 0056f636
    MOV dword ptr [EBX + 0x30],EAX      ; 0056f639
    MOV EAX,dword ptr [EBP + -0x24]     ; 0056f63c
    MOV dword ptr [EBX + 0x34],EAX      ; 0056f63f
    MOV ECX,dword ptr [EBP + -0x38]     ; 0056f642
    ADD ESP,0xc                         ; 0056f645
    TEST ECX,ECX                        ; 0056f648
    JGE 0x0056f65b                      ; 0056f64a
        ;   XREF to: 0056f65b (CONDITIONAL_JUMP)  ; LAB_0056f65b
    MOV EAX,dword ptr [EBX + 0x20]      ; 0056f64c
    LEA EDX,[EAX + 0x1]                 ; 0056f64f
    MOV dword ptr [EBX + 0x20],EDX      ; 0056f652
    MOV byte ptr [EDI + EAX*0x1],0x2d   ; 0056f655
    JMP 0x0056f684                      ; 0056f659
        ;   XREF to: 0056f684 (UNCONDITIONAL_JUMP)  ; LAB_0056f684
    MOV CH,byte ptr [EBX + 0x1e]        ; 0056f65b
        ;   Label: LAB_0056f65b
    TEST CH,0x4                         ; 0056f65e
    JZ 0x0056f672                       ; 0056f661
        ;   XREF to: 0056f672 (CONDITIONAL_JUMP)  ; LAB_0056f672
    MOV EAX,dword ptr [EBX + 0x20]      ; 0056f663
    LEA EDX,[EAX + 0x1]                 ; 0056f666
    MOV dword ptr [EBX + 0x20],EDX      ; 0056f669
    MOV byte ptr [EDI + EAX*0x1],0x2b   ; 0056f66c
    JMP 0x0056f684                      ; 0056f670
        ;   XREF to: 0056f684 (UNCONDITIONAL_JUMP)  ; LAB_0056f684
    TEST CH,0x2                         ; 0056f672
        ;   Label: LAB_0056f672
    JZ 0x0056f684                       ; 0056f675
        ;   XREF to: 0056f684 (CONDITIONAL_JUMP)  ; LAB_0056f684
    MOV EAX,dword ptr [EBX + 0x20]      ; 0056f677
    LEA EDX,[EAX + 0x1]                 ; 0056f67a
    MOV dword ptr [EBX + 0x20],EDX      ; 0056f67d
    MOV byte ptr [EDI + EAX*0x1],0x20   ; 0056f680
    MOV DX,DS                           ; 0056f684
        ;   Label: LAB_0056f684
    MOV EAX,EDI                         ; 0056f686
    LEA ESP,[EBP + -0xc]                ; 0056f688
    POP EDI                             ; 0056f68b
    POP ESI                             ; 0056f68c
    POP EBX                             ; 0056f68d
    POP EBP                             ; 0056f68e
    RET                                 ; 0056f68f

