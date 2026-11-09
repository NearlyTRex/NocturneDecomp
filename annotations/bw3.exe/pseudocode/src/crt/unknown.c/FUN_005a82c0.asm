; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005a82c0(int param_1,byte *param_2,undefined4 *param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   crt_unknown.c_FUN_005a31a8 at 005a320c
;   crt_unknown.c_FUN_005a5b60 at 005a5b8e
;
; Referenced Globals:
;   undefined4 DAT_006074b8
;
; Called Functions:
;   crt_unknown.c_FUN_005a82a0
;   crt_unknown.c_FUN_005a82ac
;   crt_unknown.c_FUN_005a858c
;   crt_unknown.c_FUN_005a8688
;   crt_unknown.c_FUN_005a86c4
;   crt_unknown.c_FUN_005a87bc
;   crt_unknown.c_FUN_005a8920
;   crt_unknown.c_FUN_005a89d4
;   crt_unknown.c_FUN_005a8ae8
;   crt_unknown.c_FUN_005a8dec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a82c0
        ;   Label: crt_unknown.c_FUN_005a82c0
    PUSH ESI                            ; 005a82c1
    PUSH EDI                            ; 005a82c2
    PUSH EBP                            ; 005a82c3
    SUB ESP,0x4                         ; 005a82c4
    MOV ESI,dword ptr [ESP + 0x18]      ; 005a82c7
    MOV EAX,dword ptr [ESP + 0x20]      ; 005a82cb
    MOV EAX,dword ptr [EAX]             ; 005a82cf
    MOV dword ptr [ESP],EAX             ; 005a82d1
    MOV AH,byte ptr [ESI + 0x10]        ; 005a82d4
    XOR EBP,EBP                         ; 005a82d7
    AND AH,0xfd                         ; 005a82d9
    XOR EDI,EDI                         ; 005a82dc
    MOV byte ptr [ESI + 0x10],AH        ; 005a82de
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005a82e1
        ;   Label: LAB_005a82e1
    LEA EDX,[EBX + 0x1]                 ; 005a82e5
    MOV dword ptr [ESP + 0x1c],EDX      ; 005a82e8
    MOV BL,byte ptr [EBX]               ; 005a82ec
    AND EBX,0xff                        ; 005a82ee
    JZ 0x005a8570                       ; 005a82f4
        ;   XREF to: 005a8570 (CONDITIONAL_JUMP)  ; LAB_005a8570
    MOV AL,BL                           ; 005a82fa
    INC AL                              ; 005a82fc
    AND EAX,0xff                        ; 005a82fe
    TEST byte ptr [EAX + 0x6074b8],0x2  ; 005a8303 | DAT_006074b8
    JZ 0x005a831c                       ; 005a830a
        ;   XREF to: 005a831c (CONDITIONAL_JUMP)  ; LAB_005a831c
    PUSH ESI                            ; 005a830c
    CALL crt_unknown.c_FUN_005a8688     ; 005a830d
        ;   XREF to: 005a8688 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a8688()
    ADD ESP,0x4                         ; 005a8312
    ADD EDI,EAX                         ; 005a8315
    JMP 0x005a8534                      ; 005a8317
        ;   XREF to: 005a8534 (UNCONDITIONAL_JUMP)  ; LAB_005a8534
    CMP EBX,0x25                        ; 005a831c
        ;   Label: LAB_005a831c
    JZ 0x005a834b                       ; 005a831f
        ;   XREF to: 005a834b (CONDITIONAL_JUMP)  ; LAB_005a834b
    PUSH ESI                            ; 005a8321
    CALL crt_unknown.c_FUN_005a82a0     ; 005a8322
        ;   XREF to: 005a82a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a82a0()
    ADD ESP,0x4                         ; 005a8327
    CMP EAX,EBX                         ; 005a832a
    JZ 0x005a8533                       ; 005a832c
        ;   XREF to: 005a8533 (CONDITIONAL_JUMP)  ; LAB_005a8533
    TEST byte ptr [ESI + 0x10],0x2      ; 005a8332
    JNZ 0x005a8570                      ; 005a8336
        ;   XREF to: 005a8570 (CONDITIONAL_JUMP)  ; LAB_005a8570
    PUSH ESI                            ; 005a833c
    PUSH EAX                            ; 005a833d
    CALL crt_unknown.c_FUN_005a82ac     ; 005a833e
        ;   XREF to: 005a82ac (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a82ac()
    ADD ESP,0x8                         ; 005a8343
    JMP 0x005a8570                      ; 005a8346
        ;   XREF to: 005a8570 (UNCONDITIONAL_JUMP)  ; LAB_005a8570
    PUSH ESI                            ; 005a834b
        ;   Label: LAB_005a834b
    MOV EBX,dword ptr [ESP + 0x20]      ; 005a834c
    PUSH EBX                            ; 005a8350
    CALL crt_unknown.c_FUN_005a858c     ; 005a8351
        ;   XREF to: 005a858c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a858c()
    ADD ESP,0x8                         ; 005a8356
    XOR EBX,EBX                         ; 005a8359
    MOV dword ptr [ESP + 0x1c],EAX      ; 005a835b
    MOV BL,byte ptr [EAX]               ; 005a835f
    TEST EBX,EBX                        ; 005a8361
    JZ 0x005a836a                       ; 005a8363
        ;   XREF to: 005a836a (CONDITIONAL_JUMP)  ; LAB_005a836a
    INC EAX                             ; 005a8365
    MOV dword ptr [ESP + 0x1c],EAX      ; 005a8366
    CMP EBX,0x64                        ; 005a836a
        ;   Label: LAB_005a836a
    JC 0x005a83dd                       ; 005a836d
        ;   XREF to: 005a83dd (CONDITIONAL_JUMP)  ; LAB_005a83dd
    JBE 0x005a8445                      ; 005a836f
        ;   XREF to: 005a8445 (CONDITIONAL_JUMP)  ; LAB_005a8445
    CMP EBX,0x6f                        ; 005a8375
    JC 0x005a83b6                       ; 005a8378
        ;   XREF to: 005a83b6 (CONDITIONAL_JUMP)  ; LAB_005a83b6
    JBE 0x005a8473                      ; 005a837a
        ;   XREF to: 005a8473 (CONDITIONAL_JUMP)  ; LAB_005a8473
    CMP EBX,0x73                        ; 005a8380
    JC 0x005a83a8                       ; 005a8383
        ;   XREF to: 005a83a8 (CONDITIONAL_JUMP)  ; LAB_005a83a8
    JBE 0x005a84be                      ; 005a8385
        ;   XREF to: 005a84be (CONDITIONAL_JUMP)  ; LAB_005a84be
    CMP EBX,0x75                        ; 005a838b
    JC 0x005a8534                       ; 005a838e
        ;   XREF to: 005a8534 (CONDITIONAL_JUMP)  ; LAB_005a8534
    JBE 0x005a8487                      ; 005a8394
        ;   XREF to: 005a8487 (CONDITIONAL_JUMP)  ; LAB_005a8487
    CMP EBX,0x78                        ; 005a839a
    JZ 0x005a849b                       ; 005a839d
        ;   XREF to: 005a849b (CONDITIONAL_JUMP)  ; LAB_005a849b
    JMP 0x005a8534                      ; 005a83a3
        ;   XREF to: 005a8534 (UNCONDITIONAL_JUMP)  ; LAB_005a8534
    CMP EBX,0x70                        ; 005a83a8
        ;   Label: LAB_005a83a8
    JZ 0x005a849b                       ; 005a83ab
        ;   XREF to: 005a849b (CONDITIONAL_JUMP)  ; LAB_005a849b
    JMP 0x005a8534                      ; 005a83b1
        ;   XREF to: 005a8534 (UNCONDITIONAL_JUMP)  ; LAB_005a8534
    CMP EBX,0x69                        ; 005a83b6
        ;   Label: LAB_005a83b6
    JC 0x005a83cf                       ; 005a83b9
        ;   XREF to: 005a83cf (CONDITIONAL_JUMP)  ; LAB_005a83cf
    JBE 0x005a845c                      ; 005a83bb
        ;   XREF to: 005a845c (CONDITIONAL_JUMP)  ; LAB_005a845c
    CMP EBX,0x6e                        ; 005a83c1
    JZ 0x005a8503                       ; 005a83c4
        ;   XREF to: 005a8503 (CONDITIONAL_JUMP)  ; LAB_005a8503
    JMP 0x005a8534                      ; 005a83ca
        ;   XREF to: 005a8534 (UNCONDITIONAL_JUMP)  ; LAB_005a8534
    CMP EBX,0x67                        ; 005a83cf
        ;   Label: LAB_005a83cf
    JBE 0x005a84af                      ; 005a83d2
        ;   XREF to: 005a84af (CONDITIONAL_JUMP)  ; LAB_005a84af
    JMP 0x005a8534                      ; 005a83d8
        ;   XREF to: 005a8534 (UNCONDITIONAL_JUMP)  ; LAB_005a8534
    CMP EBX,0x47                        ; 005a83dd
        ;   Label: LAB_005a83dd
    JC 0x005a841e                       ; 005a83e0
        ;   XREF to: 005a841e (CONDITIONAL_JUMP)  ; LAB_005a841e
    JBE 0x005a84af                      ; 005a83e2
        ;   XREF to: 005a84af (CONDITIONAL_JUMP)  ; LAB_005a84af
    CMP EBX,0x58                        ; 005a83e8
    JC 0x005a8410                       ; 005a83eb
        ;   XREF to: 005a8410 (CONDITIONAL_JUMP)  ; LAB_005a8410
    JBE 0x005a849b                      ; 005a83ed
        ;   XREF to: 005a849b (CONDITIONAL_JUMP)  ; LAB_005a849b
    CMP EBX,0x5b                        ; 005a83f3
    JC 0x005a8534                       ; 005a83f6
        ;   XREF to: 005a8534 (CONDITIONAL_JUMP)  ; LAB_005a8534
    JBE 0x005a84c9                      ; 005a83fc
        ;   XREF to: 005a84c9 (CONDITIONAL_JUMP)  ; LAB_005a84c9
    CMP EBX,0x63                        ; 005a8402
    JZ 0x005a84e2                       ; 005a8405
        ;   XREF to: 005a84e2 (CONDITIONAL_JUMP)  ; LAB_005a84e2
    JMP 0x005a8534                      ; 005a840b
        ;   XREF to: 005a8534 (UNCONDITIONAL_JUMP)  ; LAB_005a8534
    CMP EBX,0x53                        ; 005a8410
        ;   Label: LAB_005a8410
    JZ 0x005a84ba                       ; 005a8413
        ;   XREF to: 005a84ba (CONDITIONAL_JUMP)  ; LAB_005a84ba
    JMP 0x005a8534                      ; 005a8419
        ;   XREF to: 005a8534 (UNCONDITIONAL_JUMP)  ; LAB_005a8534
    CMP EBX,0x43                        ; 005a841e
        ;   Label: LAB_005a841e
    JC 0x005a8437                       ; 005a8421
        ;   XREF to: 005a8437 (CONDITIONAL_JUMP)  ; LAB_005a8437
    JBE 0x005a84de                      ; 005a8423
        ;   XREF to: 005a84de (CONDITIONAL_JUMP)  ; LAB_005a84de
    CMP EBX,0x45                        ; 005a8429
    JZ 0x005a84af                       ; 005a842c
        ;   XREF to: 005a84af (CONDITIONAL_JUMP)  ; LAB_005a84af
    JMP 0x005a8534                      ; 005a8432
        ;   XREF to: 005a8534 (UNCONDITIONAL_JUMP)  ; LAB_005a8534
    CMP EBX,0x25                        ; 005a8437
        ;   Label: LAB_005a8437
    JZ 0x005a8514                       ; 005a843a
        ;   XREF to: 005a8514 (CONDITIONAL_JUMP)  ; LAB_005a8514
    JMP 0x005a8534                      ; 005a8440
        ;   XREF to: 005a8534 (UNCONDITIONAL_JUMP)  ; LAB_005a8534
    PUSH 0x1                            ; 005a8445
        ;   Label: LAB_005a8445
    PUSH 0xa                            ; 005a8447
    LEA EAX,[ESP + 0x8]                 ; 005a8449
    PUSH EAX                            ; 005a844d
    PUSH ESI                            ; 005a844e
    CALL crt_unknown.c_FUN_005a8dec     ; 005a844f
        ;   XREF to: 005a8dec (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a8dec()
    ADD ESP,0x10                        ; 005a8454
    JMP 0x005a84ee                      ; 005a8457
        ;   XREF to: 005a84ee (UNCONDITIONAL_JUMP)  ; LAB_005a84ee
    PUSH 0x1                            ; 005a845c
        ;   Label: LAB_005a845c
    PUSH 0x0                            ; 005a845e
    LEA EAX,[ESP + 0x8]                 ; 005a8460
    PUSH EAX                            ; 005a8464
    PUSH ESI                            ; 005a8465
    CALL crt_unknown.c_FUN_005a8dec     ; 005a8466
        ;   XREF to: 005a8dec (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a8dec()
    ADD ESP,0x10                        ; 005a846b
    JMP 0x005a84ee                      ; 005a846e
        ;   XREF to: 005a84ee (UNCONDITIONAL_JUMP)  ; LAB_005a84ee
    PUSH 0x1                            ; 005a8473
        ;   Label: LAB_005a8473
    PUSH 0x8                            ; 005a8475
    LEA EAX,[ESP + 0x8]                 ; 005a8477
    PUSH EAX                            ; 005a847b
    PUSH ESI                            ; 005a847c
    CALL crt_unknown.c_FUN_005a8dec     ; 005a847d
        ;   XREF to: 005a8dec (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a8dec()
    ADD ESP,0x10                        ; 005a8482
    JMP 0x005a84ee                      ; 005a8485
        ;   XREF to: 005a84ee (UNCONDITIONAL_JUMP)  ; LAB_005a84ee
    PUSH 0x0                            ; 005a8487
        ;   Label: LAB_005a8487
    PUSH 0xa                            ; 005a8489
    LEA EAX,[ESP + 0x8]                 ; 005a848b
    PUSH EAX                            ; 005a848f
    PUSH ESI                            ; 005a8490
    CALL crt_unknown.c_FUN_005a8dec     ; 005a8491
        ;   XREF to: 005a8dec (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a8dec()
    ADD ESP,0x10                        ; 005a8496
    JMP 0x005a84ee                      ; 005a8499
        ;   XREF to: 005a84ee (UNCONDITIONAL_JUMP)  ; LAB_005a84ee
    PUSH 0x1                            ; 005a849b
        ;   Label: LAB_005a849b
    PUSH 0x10                           ; 005a849d
    LEA EAX,[ESP + 0x8]                 ; 005a849f
    PUSH EAX                            ; 005a84a3
    PUSH ESI                            ; 005a84a4
    CALL crt_unknown.c_FUN_005a8dec     ; 005a84a5
        ;   XREF to: 005a8dec (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a8dec()
    ADD ESP,0x10                        ; 005a84aa
    JMP 0x005a84ee                      ; 005a84ad
        ;   XREF to: 005a84ee (UNCONDITIONAL_JUMP)  ; LAB_005a84ee
    MOV EAX,ESP                         ; 005a84af
        ;   Label: LAB_005a84af
    PUSH EAX                            ; 005a84b1
    PUSH ESI                            ; 005a84b2
    CALL crt_unknown.c_FUN_005a8ae8     ; 005a84b3
        ;   XREF to: 005a8ae8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a8ae8()
    JMP 0x005a84eb                      ; 005a84b8
        ;   XREF to: 005a84eb (UNCONDITIONAL_JUMP)  ; LAB_005a84eb
    OR byte ptr [ESI + 0x10],0x20       ; 005a84ba
        ;   Label: LAB_005a84ba
    MOV EAX,ESP                         ; 005a84be
        ;   Label: LAB_005a84be
    PUSH EAX                            ; 005a84c0
    PUSH ESI                            ; 005a84c1
    CALL crt_unknown.c_FUN_005a87bc     ; 005a84c2
        ;   XREF to: 005a87bc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a87bc()
    JMP 0x005a84eb                      ; 005a84c7
        ;   XREF to: 005a84eb (UNCONDITIONAL_JUMP)  ; LAB_005a84eb
    LEA EAX,[ESP + 0x1c]                ; 005a84c9
        ;   Label: LAB_005a84c9
    PUSH EAX                            ; 005a84cd
    LEA EAX,[ESP + 0x4]                 ; 005a84ce
    PUSH EAX                            ; 005a84d2
    PUSH ESI                            ; 005a84d3
    CALL crt_unknown.c_FUN_005a89d4     ; 005a84d4
        ;   XREF to: 005a89d4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a89d4()
    ADD ESP,0xc                         ; 005a84d9
    JMP 0x005a84ee                      ; 005a84dc
        ;   XREF to: 005a84ee (UNCONDITIONAL_JUMP)  ; LAB_005a84ee
    OR byte ptr [ESI + 0x10],0x20       ; 005a84de
        ;   Label: LAB_005a84de
    MOV EAX,ESP                         ; 005a84e2
        ;   Label: LAB_005a84e2
    PUSH EAX                            ; 005a84e4
    PUSH ESI                            ; 005a84e5
    CALL crt_unknown.c_FUN_005a86c4     ; 005a84e6
        ;   XREF to: 005a86c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a86c4()
    ADD ESP,0x8                         ; 005a84eb
        ;   Label: LAB_005a84eb
    MOV EBX,EAX                         ; 005a84ee
        ;   Label: LAB_005a84ee
    TEST EBX,EBX                        ; 005a84f0
    JLE 0x005a8570                      ; 005a84f2
        ;   XREF to: 005a8570 (CONDITIONAL_JUMP)  ; LAB_005a8570
    ADD EDI,EBX                         ; 005a84f8
    TEST byte ptr [ESI + 0x10],0x1      ; 005a84fa
    JZ 0x005a8534                       ; 005a84fe
        ;   XREF to: 005a8534 (CONDITIONAL_JUMP)  ; LAB_005a8534
    INC EBP                             ; 005a8500
    JMP 0x005a8534                      ; 005a8501
        ;   XREF to: 005a8534 (UNCONDITIONAL_JUMP)  ; LAB_005a8534
    PUSH EDI                            ; 005a8503
        ;   Label: LAB_005a8503
    LEA EAX,[ESP + 0x4]                 ; 005a8504
    PUSH EAX                            ; 005a8508
    PUSH ESI                            ; 005a8509
    CALL crt_unknown.c_FUN_005a8920     ; 005a850a
        ;   XREF to: 005a8920 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a8920()
    ADD ESP,0xc                         ; 005a850f
    JMP 0x005a8534                      ; 005a8512
        ;   XREF to: 005a8534 (UNCONDITIONAL_JUMP)  ; LAB_005a8534
    PUSH ESI                            ; 005a8514
        ;   Label: LAB_005a8514
    CALL crt_unknown.c_FUN_005a82a0     ; 005a8515
        ;   XREF to: 005a82a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a82a0()
    ADD ESP,0x4                         ; 005a851a
    CMP EAX,EBX                         ; 005a851d
    JZ 0x005a8533                       ; 005a851f
        ;   XREF to: 005a8533 (CONDITIONAL_JUMP)  ; LAB_005a8533
    TEST byte ptr [ESI + 0x10],0x2      ; 005a8521
    JNZ 0x005a8570                      ; 005a8525
        ;   XREF to: 005a8570 (CONDITIONAL_JUMP)  ; LAB_005a8570
    PUSH ESI                            ; 005a8527
    PUSH EAX                            ; 005a8528
    CALL crt_unknown.c_FUN_005a82ac     ; 005a8529
        ;   XREF to: 005a82ac (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a82ac()
    ADD ESP,0x8                         ; 005a852e
    JMP 0x005a8570                      ; 005a8531
        ;   XREF to: 005a8570 (UNCONDITIONAL_JUMP)  ; LAB_005a8570
    INC EDI                             ; 005a8533
        ;   Label: LAB_005a8533
    TEST byte ptr [ESI + 0x10],0x2      ; 005a8534
        ;   Label: LAB_005a8534
    JZ 0x005a82e1                       ; 005a8538
        ;   XREF to: 005a82e1 (CONDITIONAL_JUMP)  ; LAB_005a82e1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005a853e
    CMP byte ptr [EAX],0x25             ; 005a8542
    JNZ 0x005a8570                      ; 005a8545
        ;   XREF to: 005a8570 (CONDITIONAL_JUMP)  ; LAB_005a8570
    PUSH ESI                            ; 005a8547
    LEA ECX,[EAX + 0x1]                 ; 005a8548
    PUSH ECX                            ; 005a854b
    MOV dword ptr [ESP + 0x24],ECX      ; 005a854c
    CALL crt_unknown.c_FUN_005a858c     ; 005a8550
        ;   XREF to: 005a858c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a858c()
    ADD ESP,0x8                         ; 005a8555
    MOV dword ptr [ESP + 0x1c],EAX      ; 005a8558
    CMP byte ptr [EAX],0x6e             ; 005a855c
    JNZ 0x005a8570                      ; 005a855f
        ;   XREF to: 005a8570 (CONDITIONAL_JUMP)  ; LAB_005a8570
    PUSH EDI                            ; 005a8561
    LEA EAX,[ESP + 0x4]                 ; 005a8562
    PUSH EAX                            ; 005a8566
    PUSH ESI                            ; 005a8567
    CALL crt_unknown.c_FUN_005a8920     ; 005a8568
        ;   XREF to: 005a8920 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a8920()
    ADD ESP,0xc                         ; 005a856d
    TEST EBP,EBP                        ; 005a8570
        ;   Label: LAB_005a8570
    JNZ 0x005a8581                      ; 005a8572
        ;   XREF to: 005a8581 (CONDITIONAL_JUMP)  ; LAB_005a8581
    TEST byte ptr [ESI + 0x10],0x2      ; 005a8574
    JZ 0x005a8581                       ; 005a8578
        ;   XREF to: 005a8581 (CONDITIONAL_JUMP)  ; LAB_005a8581
    MOV EAX,0xffffffff                  ; 005a857a
    JMP 0x005a8583                      ; 005a857f
        ;   XREF to: 005a8583 (UNCONDITIONAL_JUMP)  ; LAB_005a8583
    MOV EAX,EBP                         ; 005a8581
        ;   Label: LAB_005a8581
    ADD ESP,0x4                         ; 005a8583
        ;   Label: LAB_005a8583
    POP EBP                             ; 005a8586
    POP EDI                             ; 005a8587
    POP ESI                             ; 005a8588
    POP EBX                             ; 005a8589
    RET                                 ; 005a858a

