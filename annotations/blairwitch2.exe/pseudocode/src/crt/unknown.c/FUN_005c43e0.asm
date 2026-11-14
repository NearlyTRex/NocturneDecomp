; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c43e0(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   crt_unknown.c_FUN_005c16c8 at 005c1749
;   crt_unknown.c_FUN_005c3fb0 at 005c4015
;   crt_unknown.c_FUN_005c4030 at 005c4050
;
; Referenced Globals:
;   undefined4 DAT_006013f4
;   undefined4 DAT_0060140e
;   undefined4 DAT_0061f638
;   undefined4 DAT_0061f640
;
; Called Functions:
;   crt_unknown.c_FUN_005c1168
;   crt_unknown.c_FUN_005c1500
;   crt_unknown.c_FUN_005c1690
;   crt_unknown.c_FUN_005c1824
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c43e0
        ;   Label: crt_unknown.c_FUN_005c43e0
    PUSH ESI                            ; 005c43e1
    PUSH EDI                            ; 005c43e2
    PUSH EBP                            ; 005c43e3
    SUB ESP,0x4                         ; 005c43e4
    MOV EDI,dword ptr [ESP + 0x18]      ; 005c43e7
    MOV EAX,dword ptr [EDI + 0x10]      ; 005c43eb
    MOV EDX,EAX                         ; 005c43ee
    MOV EBX,0xc                         ; 005c43f0
    SAR EDX,0x1f                        ; 005c43f5
    IDIV EBX                            ; 005c43f8
    MOV EBP,0x6013f4                    ; 005c43fa | DAT_006013f4
    MOV ESI,dword ptr [EDI + 0x14]      ; 005c43ff
    MOV EBX,EDX                         ; 005c4402
    CMP ESI,0xf4fb7ea1                  ; 005c4404
    JGE 0x005c4416                      ; 005c440a
        ;   XREF to: 005c4416 (CONDITIONAL_JUMP)  ; LAB_005c4416
    MOV EAX,0xffffffff                  ; 005c440c
    JMP 0x005c458b                      ; 005c4411
        ;   XREF to: 005c458b (UNCONDITIONAL_JUMP)  ; LAB_005c458b
    MOV EAX,dword ptr [EDI + 0x10]      ; 005c4416
        ;   Label: LAB_005c4416
    MOV EDX,EAX                         ; 005c4419
    MOV ECX,0xc                         ; 005c441b
    SAR EDX,0x1f                        ; 005c4420
    IDIV ECX                            ; 005c4423
    ADD ESI,EAX                         ; 005c4425
    TEST EBX,EBX                        ; 005c4427
    JGE 0x005c4433                      ; 005c4429
        ;   XREF to: 005c4433 (CONDITIONAL_JUMP)  ; LAB_005c4433
    ADD EBX,0xc                         ; 005c442b
        ;   Label: LAB_005c442b
    DEC ESI                             ; 005c442e
    TEST EBX,EBX                        ; 005c442f
    JL 0x005c442b                       ; 005c4431
        ;   XREF to: 005c442b (CONDITIONAL_JUMP)  ; LAB_005c442b
    TEST ESI,ESI                        ; 005c4433
        ;   Label: LAB_005c4433
    JGE 0x005c4444                      ; 005c4435
        ;   XREF to: 005c4444 (CONDITIONAL_JUMP)  ; LAB_005c4444
    MOV EAX,0xffffffff                  ; 005c4437
    ADD ESP,0x4                         ; 005c443c
    POP EBP                             ; 005c443f
    POP EDI                             ; 005c4440
    POP ESI                             ; 005c4441
    POP EBX                             ; 005c4442
    RET                                 ; 005c4443
    LEA EAX,[ESI + 0x76c]               ; 005c4444
        ;   Label: LAB_005c4444
    PUSH EAX                            ; 005c444a
    CALL crt_unknown.c_FUN_005c1690     ; 005c444b
        ;   XREF to: 005c1690 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1690()
    ADD ESP,0x4                         ; 005c4450
    TEST EAX,EAX                        ; 005c4453
    JZ 0x005c445c                       ; 005c4455
        ;   XREF to: 005c445c (CONDITIONAL_JUMP)  ; LAB_005c445c
    MOV EBP,0x60140e                    ; 005c4457 | DAT_0060140e
    LEA EDX,[ESI + 0x3]                 ; 005c445c
        ;   Label: LAB_005c445c
    MOV EAX,EDX                         ; 005c445f
    SAR EDX,0x1f                        ; 005c4461
    SHL EDX,0x2                         ; 005c4464
    SBB EAX,EDX                         ; 005c4467
    SAR EAX,0x2                         ; 005c4469
    MOV ECX,EAX                         ; 005c446c
    LEA EAX,[ESI*0x8 + 0x0]             ; 005c446e
    ADD EAX,ESI                         ; 005c4475
    SHL EAX,0x3                         ; 005c4477
    ADD EAX,ESI                         ; 005c447a
    MOV EDX,EAX                         ; 005c447c
    SHL EAX,0x2                         ; 005c447e
    ADD EAX,EDX                         ; 005c4481
    LEA EDX,[ESI + 0x63]                ; 005c4483
    ADD EAX,ECX                         ; 005c4486
    MOV ECX,0x64                        ; 005c4488
    MOV dword ptr [ESP],EAX             ; 005c448d
    MOV EAX,EDX                         ; 005c4490
    SAR EDX,0x1f                        ; 005c4492
    IDIV ECX                            ; 005c4495
    LEA EDX,[ESI + 0x12b]               ; 005c4497
    MOV ECX,dword ptr [ESP]             ; 005c449d
    MOV ESI,0x190                       ; 005c44a0
    SUB ECX,EAX                         ; 005c44a5
    MOV EAX,EDX                         ; 005c44a7
    SAR EDX,0x1f                        ; 005c44a9
    IDIV ESI                            ; 005c44ac
    ADD ECX,EAX                         ; 005c44ae
    MOVSX EAX,word ptr [EBP + EBX*0x2]  ; 005c44b0 | DAT_0060140e
    MOV EDX,dword ptr [EDI + 0xc]       ; 005c44b5
    ADD EAX,ECX                         ; 005c44b8
    ADD EAX,EDX                         ; 005c44ba
    LEA ESI,[EAX + -0x1]                ; 005c44bc
    MOV EDX,dword ptr [EDI + 0x8]       ; 005c44bf
    MOV EAX,EDX                         ; 005c44c2
    SHL EAX,0x4                         ; 005c44c4
    SUB EAX,EDX                         ; 005c44c7
    SHL EAX,0x2                         ; 005c44c9
    MOV EDX,dword ptr [EDI + 0x4]       ; 005c44cc
    ADD EDX,EAX                         ; 005c44cf
    MOV EAX,EDX                         ; 005c44d1
    SHL EAX,0x4                         ; 005c44d3
    SUB EAX,EDX                         ; 005c44d6
    MOV EBX,dword ptr [EDI]             ; 005c44d8
    SHL EAX,0x2                         ; 005c44da
    ADD EBX,EAX                         ; 005c44dd
    TEST EBX,EBX                        ; 005c44df
    JGE 0x005c44ee                      ; 005c44e1
        ;   XREF to: 005c44ee (CONDITIONAL_JUMP)  ; LAB_005c44ee
    ADD EBX,0x15180                     ; 005c44e3
        ;   Label: LAB_005c44e3
    DEC ESI                             ; 005c44e9
    TEST EBX,EBX                        ; 005c44ea
    JL 0x005c44e3                       ; 005c44ec
        ;   XREF to: 005c44e3 (CONDITIONAL_JUMP)  ; LAB_005c44e3
    PUSH EDI                            ; 005c44ee
        ;   Label: LAB_005c44ee
    PUSH 0x0                            ; 005c44ef
    PUSH EBX                            ; 005c44f1
    PUSH ESI                            ; 005c44f2
    CALL crt_unknown.c_FUN_005c1500     ; 005c44f3
        ;   XREF to: 005c1500 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1500()
    ADD ESP,0x10                        ; 005c44f8
    CALL crt_unknown.c_FUN_005c1168     ; 005c44fb
        ;   XREF to: 005c1168 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1168()
    MOV ECX,dword ptr [0x0061f638]      ; 005c4500 | DAT_0061f638
    MOV EBP,dword ptr [EDI + 0x20]      ; 005c4506
    ADD EBX,ECX                         ; 005c4509
    TEST EBP,EBP                        ; 005c450b
    JGE 0x005c4518                      ; 005c450d
        ;   XREF to: 005c4518 (CONDITIONAL_JUMP)  ; LAB_005c4518
    PUSH EDI                            ; 005c450f
    CALL crt_unknown.c_FUN_005c1824     ; 005c4510
        ;   XREF to: 005c1824 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1824()
    ADD ESP,0x4                         ; 005c4515
    CMP dword ptr [EDI + 0x20],0x0      ; 005c4518
        ;   Label: LAB_005c4518
    JLE 0x005c4524                      ; 005c451c
        ;   XREF to: 005c4524 (CONDITIONAL_JUMP)  ; LAB_005c4524
    SUB EBX,dword ptr [0x0061f640]      ; 005c451e | DAT_0061f640
    TEST EBX,EBX                        ; 005c4524
        ;   Label: LAB_005c4524
    JGE 0x005c4531                      ; 005c4526
        ;   XREF to: 005c4531 (CONDITIONAL_JUMP)  ; LAB_005c4531
    DEC ESI                             ; 005c4528
    ADD EBX,0x15180                     ; 005c4529
    JMP 0x005c4524                      ; 005c452f
        ;   XREF to: 005c4524 (UNCONDITIONAL_JUMP)  ; LAB_005c4524
    CMP ESI,0x63de                      ; 005c4531
        ;   Label: LAB_005c4531
    JGE 0x005c4546                      ; 005c4537
        ;   XREF to: 005c4546 (CONDITIONAL_JUMP)  ; LAB_005c4546
    MOV EAX,0xffffffff                  ; 005c4539
    ADD ESP,0x4                         ; 005c453e
    POP EBP                             ; 005c4541
    POP EDI                             ; 005c4542
    POP ESI                             ; 005c4543
    POP EBX                             ; 005c4544
    RET                                 ; 005c4545
    JNZ 0x005c4569                      ; 005c4546
        ;   XREF to: 005c4569 (CONDITIONAL_JUMP)  ; LAB_005c4569
        ;   Label: LAB_005c4546
    MOV ECX,dword ptr [0x0061f638]      ; 005c4548 | DAT_0061f638
    SUB EBX,0x15180                     ; 005c454e
    TEST ECX,ECX                        ; 005c4554
    JLE 0x005c455c                      ; 005c4556
        ;   XREF to: 005c455c (CONDITIONAL_JUMP)  ; LAB_005c455c
    TEST EBX,EBX                        ; 005c4558
    JGE 0x005c4589                      ; 005c455a
        ;   XREF to: 005c4589 (CONDITIONAL_JUMP)  ; LAB_005c4589
    MOV EAX,0xffffffff                  ; 005c455c
        ;   Label: LAB_005c455c
    ADD ESP,0x4                         ; 005c4561
    POP EBP                             ; 005c4564
    POP EDI                             ; 005c4565
    POP ESI                             ; 005c4566
    POP EBX                             ; 005c4567
    RET                                 ; 005c4568
    LEA EAX,[ESI + 0xffff9c21]          ; 005c4569
        ;   Label: LAB_005c4569
    LEA ESI,[EAX*0x8 + 0x0]             ; 005c456f
    SUB ESI,EAX                         ; 005c4576
    SHL ESI,0x5                         ; 005c4578
    ADD ESI,EAX                         ; 005c457b
    SHL ESI,0x7                         ; 005c457d
    MOV EAX,ESI                         ; 005c4580
    SHL ESI,0x2                         ; 005c4582
    SUB ESI,EAX                         ; 005c4585
    ADD EBX,ESI                         ; 005c4587
    MOV EAX,EBX                         ; 005c4589
        ;   Label: LAB_005c4589
    ADD ESP,0x4                         ; 005c458b
        ;   Label: LAB_005c458b
    POP EBP                             ; 005c458e
    POP EDI                             ; 005c458f
    POP ESI                             ; 005c4590
    POP EBX                             ; 005c4591
    RET                                 ; 005c4592

