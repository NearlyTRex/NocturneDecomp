; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte * crt_unknown_c_FUN_00569468(undefined4 param_1,int *param_2,int param_3)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_00569040 at 005690c0
;
; Called Functions:
;   crt_unknown.c_FUN_005695cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569468
        ;   Label: crt_unknown.c_FUN_00569468
    PUSH ESI                            ; 00569469
    PUSH EDI                            ; 0056946a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0056946b
    MOV ESI,dword ptr [ESP + 0x14]      ; 0056946f
    MOV EBX,dword ptr [ESP + 0x18]      ; 00569473
    PUSH EBX                            ; 00569477
    PUSH EAX                            ; 00569478
    MOV byte ptr [EBX + 0x16],0x20      ; 00569479
    CALL crt_unknown.c_FUN_005695cc     ; 0056947d
        ;   XREF to: 005695cc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005695cc()
    MOV dword ptr [EBX + 0x4],0x0       ; 00569482
    MOV CL,byte ptr [EAX]               ; 00569489
    ADD ESP,0x8                         ; 0056948b
    CMP CL,0x2a                         ; 0056948e
    JNZ 0x005694b7                      ; 00569491
        ;   XREF to: 005694b7 (CONDITIONAL_JUMP)  ; LAB_005694b7
    MOV EDX,dword ptr [ESI]             ; 00569493
    ADD EDX,0x4                         ; 00569495
    MOV dword ptr [ESI],EDX             ; 00569498
    MOV EDX,dword ptr [EDX + -0x4]      ; 0056949a
    MOV dword ptr [EBX + 0x4],EDX       ; 0056949d
    TEST EDX,EDX                        ; 005694a0
    JGE 0x005694b4                      ; 005694a2
        ;   XREF to: 005694b4 (CONDITIONAL_JUMP)  ; LAB_005694b4
    MOV EDI,EDX                         ; 005694a4
    MOV CH,byte ptr [EBX + 0x1e]        ; 005694a6
    NEG EDI                             ; 005694a9
    OR CH,0x8                           ; 005694ab
    MOV dword ptr [EBX + 0x4],EDI       ; 005694ae
    MOV byte ptr [EBX + 0x1e],CH        ; 005694b1
    INC EAX                             ; 005694b4
        ;   Label: LAB_005694b4
    JMP 0x005694d6                      ; 005694b5
        ;   XREF to: 005694d6 (UNCONDITIONAL_JUMP)  ; LAB_005694d6
    MOV DL,byte ptr [EAX]               ; 005694b7
        ;   Label: LAB_005694b7
    CMP DL,0x30                         ; 005694b9
    JC 0x005694d6                       ; 005694bc
        ;   XREF to: 005694d6 (CONDITIONAL_JUMP)  ; LAB_005694d6
    CMP DL,0x39                         ; 005694be
    JA 0x005694d6                       ; 005694c1
        ;   XREF to: 005694d6 (CONDITIONAL_JUMP)  ; LAB_005694d6
    IMUL ECX,dword ptr [EBX + 0x4],0xa  ; 005694c3
    XOR EDX,EDX                         ; 005694c7
    MOV DL,byte ptr [EAX]               ; 005694c9
    SUB EDX,0x30                        ; 005694cb
    ADD ECX,EDX                         ; 005694ce
    INC EAX                             ; 005694d0
    MOV dword ptr [EBX + 0x4],ECX       ; 005694d1
    JMP 0x005694b7                      ; 005694d4
        ;   XREF to: 005694b7 (UNCONDITIONAL_JUMP)  ; LAB_005694b7
    MOV dword ptr [EBX + 0x8],0xffffffff ; 005694d6
        ;   Label: LAB_005694d6
    CMP byte ptr [EAX],0x2e             ; 005694dd
    JNZ 0x00569536                      ; 005694e0
        ;   XREF to: 00569536 (CONDITIONAL_JUMP)  ; LAB_00569536
    MOV dword ptr [EBX + 0x8],0x0       ; 005694e2
    MOV CH,byte ptr [EAX + 0x1]         ; 005694e9
    INC EAX                             ; 005694ec
    CMP CH,0x2a                         ; 005694ed
    JNZ 0x0056950d                      ; 005694f0
        ;   XREF to: 0056950d (CONDITIONAL_JUMP)  ; LAB_0056950d
    MOV EDX,dword ptr [ESI]             ; 005694f2
    ADD EDX,0x4                         ; 005694f4
    MOV dword ptr [ESI],EDX             ; 005694f7
    MOV EDX,dword ptr [EDX + -0x4]      ; 005694f9
    MOV dword ptr [EBX + 0x8],EDX       ; 005694fc
    TEST EDX,EDX                        ; 005694ff
    JGE 0x0056950a                      ; 00569501
        ;   XREF to: 0056950a (CONDITIONAL_JUMP)  ; LAB_0056950a
    MOV dword ptr [EBX + 0x8],0xffffffff ; 00569503
    INC EAX                             ; 0056950a
        ;   Label: LAB_0056950a
    JMP 0x0056952c                      ; 0056950b
        ;   XREF to: 0056952c (UNCONDITIONAL_JUMP)  ; LAB_0056952c
    MOV DL,byte ptr [EAX]               ; 0056950d
        ;   Label: LAB_0056950d
    CMP DL,0x30                         ; 0056950f
    JC 0x0056952c                       ; 00569512
        ;   XREF to: 0056952c (CONDITIONAL_JUMP)  ; LAB_0056952c
    CMP DL,0x39                         ; 00569514
    JA 0x0056952c                       ; 00569517
        ;   XREF to: 0056952c (CONDITIONAL_JUMP)  ; LAB_0056952c
    IMUL ECX,dword ptr [EBX + 0x8],0xa  ; 00569519
    XOR EDX,EDX                         ; 0056951d
    MOV DL,byte ptr [EAX]               ; 0056951f
    SUB EDX,0x30                        ; 00569521
    ADD ECX,EDX                         ; 00569524
    INC EAX                             ; 00569526
    MOV dword ptr [EBX + 0x8],ECX       ; 00569527
    JMP 0x0056950d                      ; 0056952a
        ;   XREF to: 0056950d (UNCONDITIONAL_JUMP)  ; LAB_0056950d
    CMP dword ptr [EBX + 0x8],-0x1      ; 0056952c
        ;   Label: LAB_0056952c
    JZ 0x00569536                       ; 00569530
        ;   XREF to: 00569536 (CONDITIONAL_JUMP)  ; LAB_00569536
    MOV byte ptr [EBX + 0x16],0x20      ; 00569532
    MOV DL,byte ptr [EAX]               ; 00569536
        ;   Label: LAB_00569536
    LEA ECX,[EAX + 0x1]                 ; 00569538
    CMP DL,0x4e                         ; 0056953b
    JC 0x0056955f                       ; 0056953e
        ;   XREF to: 0056955f (CONDITIONAL_JUMP)  ; LAB_0056955f
    JBE 0x005695c1                      ; 00569540
        ;   XREF to: 005695c1 (CONDITIONAL_JUMP)  ; LAB_005695c1
    CMP DL,0x6c                         ; 00569546
    JC 0x00569556                       ; 00569549
        ;   XREF to: 00569556 (CONDITIONAL_JUMP)  ; LAB_00569556
    JBE 0x00569578                      ; 0056954b
        ;   XREF to: 00569578 (CONDITIONAL_JUMP)  ; LAB_00569578
    CMP DL,0x77                         ; 0056954d
    JZ 0x00569578                       ; 00569550
        ;   XREF to: 00569578 (CONDITIONAL_JUMP)  ; LAB_00569578
    POP EDI                             ; 00569552
    POP ESI                             ; 00569553
    POP EBX                             ; 00569554
    RET                                 ; 00569555
    CMP DL,0x68                         ; 00569556
        ;   Label: LAB_00569556
    JZ 0x00569586                       ; 00569559
        ;   XREF to: 00569586 (CONDITIONAL_JUMP)  ; LAB_00569586
    POP EDI                             ; 0056955b
    POP ESI                             ; 0056955c
    POP EBX                             ; 0056955d
    RET                                 ; 0056955e
    CMP DL,0x49                         ; 0056955f
        ;   Label: LAB_0056955f
    JC 0x0056956f                       ; 00569562
        ;   XREF to: 0056956f (CONDITIONAL_JUMP)  ; LAB_0056956f
    JBE 0x0056958c                      ; 00569564
        ;   XREF to: 0056958c (CONDITIONAL_JUMP)  ; LAB_0056958c
    CMP DL,0x4c                         ; 00569566
    JZ 0x005695a8                       ; 00569569
        ;   XREF to: 005695a8 (CONDITIONAL_JUMP)  ; LAB_005695a8
    POP EDI                             ; 0056956b
    POP ESI                             ; 0056956c
    POP EBX                             ; 0056956d
    RET                                 ; 0056956e
    CMP DL,0x46                         ; 0056956f
        ;   Label: LAB_0056956f
    JZ 0x005695b7                       ; 00569572
        ;   XREF to: 005695b7 (CONDITIONAL_JUMP)  ; LAB_005695b7
    POP EDI                             ; 00569574
    POP ESI                             ; 00569575
    POP EBX                             ; 00569576
    RET                                 ; 00569577
    MOV CL,byte ptr [EBX + 0x1e]        ; 00569578
        ;   Label: LAB_00569578
    OR CL,0x20                          ; 0056957b
    INC EAX                             ; 0056957e
    MOV byte ptr [EBX + 0x1e],CL        ; 0056957f
    POP EDI                             ; 00569582
    POP ESI                             ; 00569583
    POP EBX                             ; 00569584
    RET                                 ; 00569585
    OR byte ptr [EBX + 0x1e],0x10       ; 00569586
        ;   Label: LAB_00569586
    JMP 0x005695c5                      ; 0056958a
        ;   XREF to: 005695c5 (UNCONDITIONAL_JUMP)  ; LAB_005695c5
    CMP byte ptr [EAX + 0x1],0x36       ; 0056958c
        ;   Label: LAB_0056958c
    JNZ 0x005695c7                      ; 00569590
        ;   XREF to: 005695c7 (CONDITIONAL_JUMP)  ; LAB_005695c7
    CMP byte ptr [EAX + 0x2],0x34       ; 00569592
    JNZ 0x005695c7                      ; 00569596
        ;   XREF to: 005695c7 (CONDITIONAL_JUMP)  ; LAB_005695c7
    MOV CH,byte ptr [EBX + 0x1f]        ; 00569598
    OR CH,0x1                           ; 0056959b
    ADD EAX,0x3                         ; 0056959e
    MOV byte ptr [EBX + 0x1f],CH        ; 005695a1
    POP EDI                             ; 005695a4
    POP ESI                             ; 005695a5
    POP EBX                             ; 005695a6
    RET                                 ; 005695a7
    MOV DL,byte ptr [EBX + 0x1f]        ; 005695a8
        ;   Label: LAB_005695a8
    OR DL,0x1                           ; 005695ab
    MOV EAX,ECX                         ; 005695ae
    MOV byte ptr [EBX + 0x1f],DL        ; 005695b0
    POP EDI                             ; 005695b3
    POP ESI                             ; 005695b4
    POP EBX                             ; 005695b5
    RET                                 ; 005695b6
    OR byte ptr [EBX + 0x1e],0x80       ; 005695b7
        ;   Label: LAB_005695b7
    MOV EAX,ECX                         ; 005695bb
    POP EDI                             ; 005695bd
    POP ESI                             ; 005695be
    POP EBX                             ; 005695bf
    RET                                 ; 005695c0
    OR byte ptr [EBX + 0x1e],0x40       ; 005695c1
        ;   Label: LAB_005695c1
    MOV EAX,ECX                         ; 005695c5
        ;   Label: LAB_005695c5
    POP EDI                             ; 005695c7
        ;   Label: LAB_005695c7
    POP ESI                             ; 005695c8
    POP EBX                             ; 005695c9
    RET                                 ; 005695ca

