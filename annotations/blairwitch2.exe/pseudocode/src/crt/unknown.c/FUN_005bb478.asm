; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte * crt_unknown_c_FUN_005bb478(undefined4 param_1,int *param_2,int param_3)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005bb050 at 005bb0d0
;
; Called Functions:
;   crt_unknown.c_FUN_005bb5dc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bb478
        ;   Label: crt_unknown.c_FUN_005bb478
    PUSH ESI                            ; 005bb479
    PUSH EDI                            ; 005bb47a
    MOV EAX,dword ptr [ESP + 0x10]      ; 005bb47b
    MOV ESI,dword ptr [ESP + 0x14]      ; 005bb47f
    MOV EBX,dword ptr [ESP + 0x18]      ; 005bb483
    PUSH EBX                            ; 005bb487
    PUSH EAX                            ; 005bb488
    MOV byte ptr [EBX + 0x16],0x20      ; 005bb489
    CALL crt_unknown.c_FUN_005bb5dc     ; 005bb48d
        ;   XREF to: 005bb5dc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bb5dc()
    MOV dword ptr [EBX + 0x4],0x0       ; 005bb492
    MOV CL,byte ptr [EAX]               ; 005bb499
    ADD ESP,0x8                         ; 005bb49b
    CMP CL,0x2a                         ; 005bb49e
    JNZ 0x005bb4c7                      ; 005bb4a1
        ;   XREF to: 005bb4c7 (CONDITIONAL_JUMP)  ; LAB_005bb4c7
    MOV EDX,dword ptr [ESI]             ; 005bb4a3
    ADD EDX,0x4                         ; 005bb4a5
    MOV dword ptr [ESI],EDX             ; 005bb4a8
    MOV EDX,dword ptr [EDX + -0x4]      ; 005bb4aa
    MOV dword ptr [EBX + 0x4],EDX       ; 005bb4ad
    TEST EDX,EDX                        ; 005bb4b0
    JGE 0x005bb4c4                      ; 005bb4b2
        ;   XREF to: 005bb4c4 (CONDITIONAL_JUMP)  ; LAB_005bb4c4
    MOV EDI,EDX                         ; 005bb4b4
    MOV CH,byte ptr [EBX + 0x1e]        ; 005bb4b6
    NEG EDI                             ; 005bb4b9
    OR CH,0x8                           ; 005bb4bb
    MOV dword ptr [EBX + 0x4],EDI       ; 005bb4be
    MOV byte ptr [EBX + 0x1e],CH        ; 005bb4c1
    INC EAX                             ; 005bb4c4
        ;   Label: LAB_005bb4c4
    JMP 0x005bb4e6                      ; 005bb4c5
        ;   XREF to: 005bb4e6 (UNCONDITIONAL_JUMP)  ; LAB_005bb4e6
    MOV DL,byte ptr [EAX]               ; 005bb4c7
        ;   Label: LAB_005bb4c7
    CMP DL,0x30                         ; 005bb4c9
    JC 0x005bb4e6                       ; 005bb4cc
        ;   XREF to: 005bb4e6 (CONDITIONAL_JUMP)  ; LAB_005bb4e6
    CMP DL,0x39                         ; 005bb4ce
    JA 0x005bb4e6                       ; 005bb4d1
        ;   XREF to: 005bb4e6 (CONDITIONAL_JUMP)  ; LAB_005bb4e6
    IMUL ECX,dword ptr [EBX + 0x4],0xa  ; 005bb4d3
    XOR EDX,EDX                         ; 005bb4d7
    MOV DL,byte ptr [EAX]               ; 005bb4d9
    SUB EDX,0x30                        ; 005bb4db
    ADD ECX,EDX                         ; 005bb4de
    INC EAX                             ; 005bb4e0
    MOV dword ptr [EBX + 0x4],ECX       ; 005bb4e1
    JMP 0x005bb4c7                      ; 005bb4e4
        ;   XREF to: 005bb4c7 (UNCONDITIONAL_JUMP)  ; LAB_005bb4c7
    MOV dword ptr [EBX + 0x8],0xffffffff ; 005bb4e6
        ;   Label: LAB_005bb4e6
    CMP byte ptr [EAX],0x2e             ; 005bb4ed
    JNZ 0x005bb546                      ; 005bb4f0
        ;   XREF to: 005bb546 (CONDITIONAL_JUMP)  ; LAB_005bb546
    MOV dword ptr [EBX + 0x8],0x0       ; 005bb4f2
    MOV CH,byte ptr [EAX + 0x1]         ; 005bb4f9
    INC EAX                             ; 005bb4fc
    CMP CH,0x2a                         ; 005bb4fd
    JNZ 0x005bb51d                      ; 005bb500
        ;   XREF to: 005bb51d (CONDITIONAL_JUMP)  ; LAB_005bb51d
    MOV EDX,dword ptr [ESI]             ; 005bb502
    ADD EDX,0x4                         ; 005bb504
    MOV dword ptr [ESI],EDX             ; 005bb507
    MOV EDX,dword ptr [EDX + -0x4]      ; 005bb509
    MOV dword ptr [EBX + 0x8],EDX       ; 005bb50c
    TEST EDX,EDX                        ; 005bb50f
    JGE 0x005bb51a                      ; 005bb511
        ;   XREF to: 005bb51a (CONDITIONAL_JUMP)  ; LAB_005bb51a
    MOV dword ptr [EBX + 0x8],0xffffffff ; 005bb513
    INC EAX                             ; 005bb51a
        ;   Label: LAB_005bb51a
    JMP 0x005bb53c                      ; 005bb51b
        ;   XREF to: 005bb53c (UNCONDITIONAL_JUMP)  ; LAB_005bb53c
    MOV DL,byte ptr [EAX]               ; 005bb51d
        ;   Label: LAB_005bb51d
    CMP DL,0x30                         ; 005bb51f
    JC 0x005bb53c                       ; 005bb522
        ;   XREF to: 005bb53c (CONDITIONAL_JUMP)  ; LAB_005bb53c
    CMP DL,0x39                         ; 005bb524
    JA 0x005bb53c                       ; 005bb527
        ;   XREF to: 005bb53c (CONDITIONAL_JUMP)  ; LAB_005bb53c
    IMUL ECX,dword ptr [EBX + 0x8],0xa  ; 005bb529
    XOR EDX,EDX                         ; 005bb52d
    MOV DL,byte ptr [EAX]               ; 005bb52f
    SUB EDX,0x30                        ; 005bb531
    ADD ECX,EDX                         ; 005bb534
    INC EAX                             ; 005bb536
    MOV dword ptr [EBX + 0x8],ECX       ; 005bb537
    JMP 0x005bb51d                      ; 005bb53a
        ;   XREF to: 005bb51d (UNCONDITIONAL_JUMP)  ; LAB_005bb51d
    CMP dword ptr [EBX + 0x8],-0x1      ; 005bb53c
        ;   Label: LAB_005bb53c
    JZ 0x005bb546                       ; 005bb540
        ;   XREF to: 005bb546 (CONDITIONAL_JUMP)  ; LAB_005bb546
    MOV byte ptr [EBX + 0x16],0x20      ; 005bb542
    MOV DL,byte ptr [EAX]               ; 005bb546
        ;   Label: LAB_005bb546
    LEA ECX,[EAX + 0x1]                 ; 005bb548
    CMP DL,0x4e                         ; 005bb54b
    JC 0x005bb56f                       ; 005bb54e
        ;   XREF to: 005bb56f (CONDITIONAL_JUMP)  ; LAB_005bb56f
    JBE 0x005bb5d1                      ; 005bb550
        ;   XREF to: 005bb5d1 (CONDITIONAL_JUMP)  ; LAB_005bb5d1
    CMP DL,0x6c                         ; 005bb556
    JC 0x005bb566                       ; 005bb559
        ;   XREF to: 005bb566 (CONDITIONAL_JUMP)  ; LAB_005bb566
    JBE 0x005bb588                      ; 005bb55b
        ;   XREF to: 005bb588 (CONDITIONAL_JUMP)  ; LAB_005bb588
    CMP DL,0x77                         ; 005bb55d
    JZ 0x005bb588                       ; 005bb560
        ;   XREF to: 005bb588 (CONDITIONAL_JUMP)  ; LAB_005bb588
    POP EDI                             ; 005bb562
    POP ESI                             ; 005bb563
    POP EBX                             ; 005bb564
    RET                                 ; 005bb565
    CMP DL,0x68                         ; 005bb566
        ;   Label: LAB_005bb566
    JZ 0x005bb596                       ; 005bb569
        ;   XREF to: 005bb596 (CONDITIONAL_JUMP)  ; LAB_005bb596
    POP EDI                             ; 005bb56b
    POP ESI                             ; 005bb56c
    POP EBX                             ; 005bb56d
    RET                                 ; 005bb56e
    CMP DL,0x49                         ; 005bb56f
        ;   Label: LAB_005bb56f
    JC 0x005bb57f                       ; 005bb572
        ;   XREF to: 005bb57f (CONDITIONAL_JUMP)  ; LAB_005bb57f
    JBE 0x005bb59c                      ; 005bb574
        ;   XREF to: 005bb59c (CONDITIONAL_JUMP)  ; LAB_005bb59c
    CMP DL,0x4c                         ; 005bb576
    JZ 0x005bb5b8                       ; 005bb579
        ;   XREF to: 005bb5b8 (CONDITIONAL_JUMP)  ; LAB_005bb5b8
    POP EDI                             ; 005bb57b
    POP ESI                             ; 005bb57c
    POP EBX                             ; 005bb57d
    RET                                 ; 005bb57e
    CMP DL,0x46                         ; 005bb57f
        ;   Label: LAB_005bb57f
    JZ 0x005bb5c7                       ; 005bb582
        ;   XREF to: 005bb5c7 (CONDITIONAL_JUMP)  ; LAB_005bb5c7
    POP EDI                             ; 005bb584
    POP ESI                             ; 005bb585
    POP EBX                             ; 005bb586
    RET                                 ; 005bb587
    MOV CL,byte ptr [EBX + 0x1e]        ; 005bb588
        ;   Label: LAB_005bb588
    OR CL,0x20                          ; 005bb58b
    INC EAX                             ; 005bb58e
    MOV byte ptr [EBX + 0x1e],CL        ; 005bb58f
    POP EDI                             ; 005bb592
    POP ESI                             ; 005bb593
    POP EBX                             ; 005bb594
    RET                                 ; 005bb595
    OR byte ptr [EBX + 0x1e],0x10       ; 005bb596
        ;   Label: LAB_005bb596
    JMP 0x005bb5d5                      ; 005bb59a
        ;   XREF to: 005bb5d5 (UNCONDITIONAL_JUMP)  ; LAB_005bb5d5
    CMP byte ptr [EAX + 0x1],0x36       ; 005bb59c
        ;   Label: LAB_005bb59c
    JNZ 0x005bb5d7                      ; 005bb5a0
        ;   XREF to: 005bb5d7 (CONDITIONAL_JUMP)  ; LAB_005bb5d7
    CMP byte ptr [EAX + 0x2],0x34       ; 005bb5a2
    JNZ 0x005bb5d7                      ; 005bb5a6
        ;   XREF to: 005bb5d7 (CONDITIONAL_JUMP)  ; LAB_005bb5d7
    MOV CH,byte ptr [EBX + 0x1f]        ; 005bb5a8
    OR CH,0x1                           ; 005bb5ab
    ADD EAX,0x3                         ; 005bb5ae
    MOV byte ptr [EBX + 0x1f],CH        ; 005bb5b1
    POP EDI                             ; 005bb5b4
    POP ESI                             ; 005bb5b5
    POP EBX                             ; 005bb5b6
    RET                                 ; 005bb5b7
    MOV DL,byte ptr [EBX + 0x1f]        ; 005bb5b8
        ;   Label: LAB_005bb5b8
    OR DL,0x1                           ; 005bb5bb
    MOV EAX,ECX                         ; 005bb5be
    MOV byte ptr [EBX + 0x1f],DL        ; 005bb5c0
    POP EDI                             ; 005bb5c3
    POP ESI                             ; 005bb5c4
    POP EBX                             ; 005bb5c5
    RET                                 ; 005bb5c6
    OR byte ptr [EBX + 0x1e],0x80       ; 005bb5c7
        ;   Label: LAB_005bb5c7
    MOV EAX,ECX                         ; 005bb5cb
    POP EDI                             ; 005bb5cd
    POP ESI                             ; 005bb5ce
    POP EBX                             ; 005bb5cf
    RET                                 ; 005bb5d0
    OR byte ptr [EBX + 0x1e],0x40       ; 005bb5d1
        ;   Label: LAB_005bb5d1
    MOV EAX,ECX                         ; 005bb5d5
        ;   Label: LAB_005bb5d5
    POP EDI                             ; 005bb5d7
        ;   Label: LAB_005bb5d7
    POP ESI                             ; 005bb5d8
    POP EBX                             ; 005bb5d9
    RET                                 ; 005bb5da

