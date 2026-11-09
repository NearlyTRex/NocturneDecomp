; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte * crt_unknown_c_FUN_005ac5a8(byte *param_1,byte *param_2,int *param_3)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_unknown.c_FUN_005ac7cc at 005ac7f0
;
; Called Functions:
;   crt_unknown.c_FUN_005ac578
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ac5a8
        ;   Label: crt_unknown.c_FUN_005ac5a8
    PUSH ESI                            ; 005ac5a9
    PUSH EDI                            ; 005ac5aa
    PUSH EBP                            ; 005ac5ab
    SUB ESP,0xc                         ; 005ac5ac
    MOV EBX,dword ptr [ESP + 0x20]      ; 005ac5af
    CMP byte ptr [EBX],0x3a             ; 005ac5b3
    JNZ 0x005ac5b9                      ; 005ac5b6
        ;   XREF to: 005ac5b9 (CONDITIONAL_JUMP)  ; LAB_005ac5b9
    INC EBX                             ; 005ac5b8
    MOV ESI,EBX                         ; 005ac5b9
        ;   Label: LAB_005ac5b9
    MOV DL,byte ptr [EBX]               ; 005ac5bb
        ;   Label: LAB_005ac5bb
    TEST DL,DL                          ; 005ac5bd
    JZ 0x005ac5dd                       ; 005ac5bf
        ;   XREF to: 005ac5dd (CONDITIONAL_JUMP)  ; LAB_005ac5dd
    CMP DL,0x2c                         ; 005ac5c1
    JZ 0x005ac5dd                       ; 005ac5c4
        ;   XREF to: 005ac5dd (CONDITIONAL_JUMP)  ; LAB_005ac5dd
    CMP DL,0x2d                         ; 005ac5c6
    JZ 0x005ac5dd                       ; 005ac5c9
        ;   XREF to: 005ac5dd (CONDITIONAL_JUMP)  ; LAB_005ac5dd
    CMP DL,0x2b                         ; 005ac5cb
    JZ 0x005ac5dd                       ; 005ac5ce
        ;   XREF to: 005ac5dd (CONDITIONAL_JUMP)  ; LAB_005ac5dd
    CMP DL,0x30                         ; 005ac5d0
    JC 0x005ac5da                       ; 005ac5d3
        ;   XREF to: 005ac5da (CONDITIONAL_JUMP)  ; LAB_005ac5da
    CMP DL,0x39                         ; 005ac5d5
    JBE 0x005ac5dd                      ; 005ac5d8
        ;   XREF to: 005ac5dd (CONDITIONAL_JUMP)  ; LAB_005ac5dd
    INC EBX                             ; 005ac5da
        ;   Label: LAB_005ac5da
    JMP 0x005ac5bb                      ; 005ac5db
        ;   XREF to: 005ac5bb (UNCONDITIONAL_JUMP)  ; LAB_005ac5bb
    MOV EBP,EBX                         ; 005ac5dd
        ;   Label: LAB_005ac5dd
    SUB EBP,ESI                         ; 005ac5df
    CMP EBP,0x80                        ; 005ac5e1
    JLE 0x005ac5ee                      ; 005ac5e7
        ;   XREF to: 005ac5ee (CONDITIONAL_JUMP)  ; LAB_005ac5ee
    MOV EBP,0x80                        ; 005ac5e9
    MOV EDI,dword ptr [ESP + 0x24]      ; 005ac5ee
        ;   Label: LAB_005ac5ee
    MOV ECX,EBP                         ; 005ac5f2
    PUSH ES                             ; 005ac5f4
    MOV AX,DS                           ; 005ac5f5
    MOV ES,AX                           ; 005ac5f7
    PUSH EDI                            ; 005ac5f9
    MOV EAX,ECX                         ; 005ac5fa
    SHR ECX,0x2                         ; 005ac5fc
    MOVSD.REP ES:EDI,ESI                ; 005ac5ff
    MOV CL,AL                           ; 005ac601
    AND CL,0x3                          ; 005ac603
    MOVSB.REP ES:EDI,ESI                ; 005ac606
    POP EDI                             ; 005ac608
    POP ES                              ; 005ac609
    ADD EBP,EDI                         ; 005ac60a
    LEA EAX,[EBX + 0x1]                 ; 005ac60c
    XOR ESI,ESI                         ; 005ac60f
    MOV byte ptr [EBP],0x0              ; 005ac611
    CMP DL,0x2d                         ; 005ac615
    JNZ 0x005ac621                      ; 005ac618
        ;   XREF to: 005ac621 (CONDITIONAL_JUMP)  ; LAB_005ac621
    MOV ESI,0x1                         ; 005ac61a
    JMP 0x005ac626                      ; 005ac61f
        ;   XREF to: 005ac626 (UNCONDITIONAL_JUMP)  ; LAB_005ac626
    CMP DL,0x2b                         ; 005ac621
        ;   Label: LAB_005ac621
    JNZ 0x005ac628                      ; 005ac624
        ;   XREF to: 005ac628 (CONDITIONAL_JUMP)  ; LAB_005ac628
    MOV EBX,EAX                         ; 005ac626
        ;   Label: LAB_005ac626
    MOV AL,byte ptr [EBX]               ; 005ac628
        ;   Label: LAB_005ac628
    CMP AL,0x30                         ; 005ac62a
    JC 0x005ac6b9                       ; 005ac62c
        ;   XREF to: 005ac6b9 (CONDITIONAL_JUMP)  ; LAB_005ac6b9
    CMP AL,0x39                         ; 005ac632
    JA 0x005ac6b9                       ; 005ac634
        ;   XREF to: 005ac6b9 (CONDITIONAL_JUMP)  ; LAB_005ac6b9
    LEA EAX,[ESP + 0x8]                 ; 005ac63a
    XOR EDI,EDI                         ; 005ac63e
    PUSH EAX                            ; 005ac640
    MOV dword ptr [ESP + 0x4],EDI       ; 005ac641
    PUSH EBX                            ; 005ac645
    MOV dword ptr [ESP + 0xc],EDI       ; 005ac646
    MOV dword ptr [ESP + 0x10],EDI      ; 005ac64a
    CALL crt_unknown.c_FUN_005ac578     ; 005ac64e
        ;   XREF to: 005ac578 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ac578()
    ADD ESP,0x8                         ; 005ac653
    MOV DL,byte ptr [EAX]               ; 005ac656
    MOV EBX,EAX                         ; 005ac658
    CMP DL,0x3a                         ; 005ac65a
    JNZ 0x005ac686                      ; 005ac65d
        ;   XREF to: 005ac686 (CONDITIONAL_JUMP)  ; LAB_005ac686
    LEA EBX,[ESP + 0x4]                 ; 005ac65f
    PUSH EBX                            ; 005ac663
    INC EAX                             ; 005ac664
    PUSH EAX                            ; 005ac665
    CALL crt_unknown.c_FUN_005ac578     ; 005ac666
        ;   XREF to: 005ac578 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ac578()
    ADD ESP,0x8                         ; 005ac66b
    MOV DH,byte ptr [EAX]               ; 005ac66e
    MOV EBX,EAX                         ; 005ac670
    CMP DH,0x3a                         ; 005ac672
    JNZ 0x005ac686                      ; 005ac675
        ;   XREF to: 005ac686 (CONDITIONAL_JUMP)  ; LAB_005ac686
    MOV EBX,ESP                         ; 005ac677
    PUSH EBX                            ; 005ac679
    INC EAX                             ; 005ac67a
    PUSH EAX                            ; 005ac67b
    CALL crt_unknown.c_FUN_005ac578     ; 005ac67c
        ;   XREF to: 005ac578 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ac578()
    ADD ESP,0x8                         ; 005ac681
    MOV EBX,EAX                         ; 005ac684
    MOV EBP,dword ptr [ESP + 0x8]       ; 005ac686
        ;   Label: LAB_005ac686
    MOV EAX,EBP                         ; 005ac68a
    SHL EAX,0x4                         ; 005ac68c
    SUB EAX,EBP                         ; 005ac68f
    MOV EBP,dword ptr [ESP + 0x4]       ; 005ac691
    SHL EAX,0x2                         ; 005ac695
    ADD EBP,EAX                         ; 005ac698
    MOV EAX,EBP                         ; 005ac69a
    SHL EAX,0x4                         ; 005ac69c
    SUB EAX,EBP                         ; 005ac69f
    MOV EBP,dword ptr [ESP]             ; 005ac6a1
    SHL EAX,0x2                         ; 005ac6a4
    ADD EBP,EAX                         ; 005ac6a7
    MOV EAX,dword ptr [ESP + 0x28]      ; 005ac6a9
    MOV dword ptr [EAX],EBP             ; 005ac6ad
    TEST ESI,ESI                        ; 005ac6af
    JZ 0x005ac6b9                       ; 005ac6b1
        ;   XREF to: 005ac6b9 (CONDITIONAL_JUMP)  ; LAB_005ac6b9
    MOV EDX,EBP                         ; 005ac6b3
    NEG EDX                             ; 005ac6b5
    MOV dword ptr [EAX],EDX             ; 005ac6b7
    MOV EAX,EBX                         ; 005ac6b9
        ;   Label: LAB_005ac6b9
    ADD ESP,0xc                         ; 005ac6bb
    POP EBP                             ; 005ac6be
    POP EDI                             ; 005ac6bf
    POP ESI                             ; 005ac6c0
    POP EBX                             ; 005ac6c1
    RET                                 ; 005ac6c2

