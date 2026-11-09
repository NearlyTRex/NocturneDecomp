; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte * crt_unknown_c_FUN_005c9478(byte *param_1,byte *param_2,int *param_3)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_unknown.c_FUN_005c969c at 005c96c0
;
; Called Functions:
;   crt_unknown.c_FUN_005c9448
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c9478
        ;   Label: crt_unknown.c_FUN_005c9478
    PUSH ESI                            ; 005c9479
    PUSH EDI                            ; 005c947a
    PUSH EBP                            ; 005c947b
    SUB ESP,0xc                         ; 005c947c
    MOV EBX,dword ptr [ESP + 0x20]      ; 005c947f
    CMP byte ptr [EBX],0x3a             ; 005c9483
    JNZ 0x005c9489                      ; 005c9486
        ;   XREF to: 005c9489 (CONDITIONAL_JUMP)  ; LAB_005c9489
    INC EBX                             ; 005c9488
    MOV ESI,EBX                         ; 005c9489
        ;   Label: LAB_005c9489
    MOV DL,byte ptr [EBX]               ; 005c948b
        ;   Label: LAB_005c948b
    TEST DL,DL                          ; 005c948d
    JZ 0x005c94ad                       ; 005c948f
        ;   XREF to: 005c94ad (CONDITIONAL_JUMP)  ; LAB_005c94ad
    CMP DL,0x2c                         ; 005c9491
    JZ 0x005c94ad                       ; 005c9494
        ;   XREF to: 005c94ad (CONDITIONAL_JUMP)  ; LAB_005c94ad
    CMP DL,0x2d                         ; 005c9496
    JZ 0x005c94ad                       ; 005c9499
        ;   XREF to: 005c94ad (CONDITIONAL_JUMP)  ; LAB_005c94ad
    CMP DL,0x2b                         ; 005c949b
    JZ 0x005c94ad                       ; 005c949e
        ;   XREF to: 005c94ad (CONDITIONAL_JUMP)  ; LAB_005c94ad
    CMP DL,0x30                         ; 005c94a0
    JC 0x005c94aa                       ; 005c94a3
        ;   XREF to: 005c94aa (CONDITIONAL_JUMP)  ; LAB_005c94aa
    CMP DL,0x39                         ; 005c94a5
    JBE 0x005c94ad                      ; 005c94a8
        ;   XREF to: 005c94ad (CONDITIONAL_JUMP)  ; LAB_005c94ad
    INC EBX                             ; 005c94aa
        ;   Label: LAB_005c94aa
    JMP 0x005c948b                      ; 005c94ab
        ;   XREF to: 005c948b (UNCONDITIONAL_JUMP)  ; LAB_005c948b
    MOV EBP,EBX                         ; 005c94ad
        ;   Label: LAB_005c94ad
    SUB EBP,ESI                         ; 005c94af
    CMP EBP,0x80                        ; 005c94b1
    JLE 0x005c94be                      ; 005c94b7
        ;   XREF to: 005c94be (CONDITIONAL_JUMP)  ; LAB_005c94be
    MOV EBP,0x80                        ; 005c94b9
    MOV EDI,dword ptr [ESP + 0x24]      ; 005c94be
        ;   Label: LAB_005c94be
    MOV ECX,EBP                         ; 005c94c2
    PUSH ES                             ; 005c94c4
    MOV AX,DS                           ; 005c94c5
    MOV ES,AX                           ; 005c94c7
    PUSH EDI                            ; 005c94c9
    MOV EAX,ECX                         ; 005c94ca
    SHR ECX,0x2                         ; 005c94cc
    MOVSD.REP ES:EDI,ESI                ; 005c94cf
    MOV CL,AL                           ; 005c94d1
    AND CL,0x3                          ; 005c94d3
    MOVSB.REP ES:EDI,ESI                ; 005c94d6
    POP EDI                             ; 005c94d8
    POP ES                              ; 005c94d9
    ADD EBP,EDI                         ; 005c94da
    LEA EAX,[EBX + 0x1]                 ; 005c94dc
    XOR ESI,ESI                         ; 005c94df
    MOV byte ptr [EBP],0x0              ; 005c94e1
    CMP DL,0x2d                         ; 005c94e5
    JNZ 0x005c94f1                      ; 005c94e8
        ;   XREF to: 005c94f1 (CONDITIONAL_JUMP)  ; LAB_005c94f1
    MOV ESI,0x1                         ; 005c94ea
    JMP 0x005c94f6                      ; 005c94ef
        ;   XREF to: 005c94f6 (UNCONDITIONAL_JUMP)  ; LAB_005c94f6
    CMP DL,0x2b                         ; 005c94f1
        ;   Label: LAB_005c94f1
    JNZ 0x005c94f8                      ; 005c94f4
        ;   XREF to: 005c94f8 (CONDITIONAL_JUMP)  ; LAB_005c94f8
    MOV EBX,EAX                         ; 005c94f6
        ;   Label: LAB_005c94f6
    MOV AL,byte ptr [EBX]               ; 005c94f8
        ;   Label: LAB_005c94f8
    CMP AL,0x30                         ; 005c94fa
    JC 0x005c9589                       ; 005c94fc
        ;   XREF to: 005c9589 (CONDITIONAL_JUMP)  ; LAB_005c9589
    CMP AL,0x39                         ; 005c9502
    JA 0x005c9589                       ; 005c9504
        ;   XREF to: 005c9589 (CONDITIONAL_JUMP)  ; LAB_005c9589
    LEA EAX,[ESP + 0x8]                 ; 005c950a
    XOR EDI,EDI                         ; 005c950e
    PUSH EAX                            ; 005c9510
    MOV dword ptr [ESP + 0x4],EDI       ; 005c9511
    PUSH EBX                            ; 005c9515
    MOV dword ptr [ESP + 0xc],EDI       ; 005c9516
    MOV dword ptr [ESP + 0x10],EDI      ; 005c951a
    CALL crt_unknown.c_FUN_005c9448     ; 005c951e
        ;   XREF to: 005c9448 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9448()
    ADD ESP,0x8                         ; 005c9523
    MOV DL,byte ptr [EAX]               ; 005c9526
    MOV EBX,EAX                         ; 005c9528
    CMP DL,0x3a                         ; 005c952a
    JNZ 0x005c9556                      ; 005c952d
        ;   XREF to: 005c9556 (CONDITIONAL_JUMP)  ; LAB_005c9556
    LEA EBX,[ESP + 0x4]                 ; 005c952f
    PUSH EBX                            ; 005c9533
    INC EAX                             ; 005c9534
    PUSH EAX                            ; 005c9535
    CALL crt_unknown.c_FUN_005c9448     ; 005c9536
        ;   XREF to: 005c9448 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9448()
    ADD ESP,0x8                         ; 005c953b
    MOV DH,byte ptr [EAX]               ; 005c953e
    MOV EBX,EAX                         ; 005c9540
    CMP DH,0x3a                         ; 005c9542
    JNZ 0x005c9556                      ; 005c9545
        ;   XREF to: 005c9556 (CONDITIONAL_JUMP)  ; LAB_005c9556
    MOV EBX,ESP                         ; 005c9547
    PUSH EBX                            ; 005c9549
    INC EAX                             ; 005c954a
    PUSH EAX                            ; 005c954b
    CALL crt_unknown.c_FUN_005c9448     ; 005c954c
        ;   XREF to: 005c9448 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9448()
    ADD ESP,0x8                         ; 005c9551
    MOV EBX,EAX                         ; 005c9554
    MOV EBP,dword ptr [ESP + 0x8]       ; 005c9556
        ;   Label: LAB_005c9556
    MOV EAX,EBP                         ; 005c955a
    SHL EAX,0x4                         ; 005c955c
    SUB EAX,EBP                         ; 005c955f
    MOV EBP,dword ptr [ESP + 0x4]       ; 005c9561
    SHL EAX,0x2                         ; 005c9565
    ADD EBP,EAX                         ; 005c9568
    MOV EAX,EBP                         ; 005c956a
    SHL EAX,0x4                         ; 005c956c
    SUB EAX,EBP                         ; 005c956f
    MOV EBP,dword ptr [ESP]             ; 005c9571
    SHL EAX,0x2                         ; 005c9574
    ADD EBP,EAX                         ; 005c9577
    MOV EAX,dword ptr [ESP + 0x28]      ; 005c9579
    MOV dword ptr [EAX],EBP             ; 005c957d
    TEST ESI,ESI                        ; 005c957f
    JZ 0x005c9589                       ; 005c9581
        ;   XREF to: 005c9589 (CONDITIONAL_JUMP)  ; LAB_005c9589
    MOV EDX,EBP                         ; 005c9583
    NEG EDX                             ; 005c9585
    MOV dword ptr [EAX],EDX             ; 005c9587
    MOV EAX,EBX                         ; 005c9589
        ;   Label: LAB_005c9589
    ADD ESP,0xc                         ; 005c958b
    POP EBP                             ; 005c958e
    POP EDI                             ; 005c958f
    POP ESI                             ; 005c9590
    POP EBX                             ; 005c9591
    RET                                 ; 005c9592

