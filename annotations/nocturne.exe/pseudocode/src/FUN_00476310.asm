; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00476310(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
;
;
; XREF[1]:
;   FUN_00476580 at 00476681
;
; Referenced Globals:
;   undefined4 DAT_01c00c70
;
; Called Functions:
;   FUN_00403bd0
;   FUN_00403ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476310
        ;   Label: FUN_00476310
    PUSH ESI                            ; 00476311
    PUSH EDI                            ; 00476312
    PUSH EBP                            ; 00476313
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00476314
    MOV ECX,dword ptr [ESP + 0x20]      ; 00476318
    MOV ESI,dword ptr [ESP + 0x24]      ; 0047631c
    MOV EDI,dword ptr [ESP + 0x28]      ; 00476320
    XOR EDX,EDX                         ; 00476324
    MOV dword ptr [0x01c00c70],EDX      ; 00476326 | DAT_01c00c70
    TEST EDI,EDI                        ; 0047632c
    JNZ 0x00476395                      ; 0047632e
        ;   XREF to: 00476395 (CONDITIONAL_JUMP)  ; LAB_00476395
    MOV EDX,dword ptr [ESP + 0x14]      ; 00476330
        ;   Label: LAB_00476330
    ADD EDX,EBP                         ; 00476334
    DEC EDX                             ; 00476336
    MOV EAX,EDX                         ; 00476337
    SAR EDX,0x1f                        ; 00476339
    SUB EAX,EDX                         ; 0047633c
    SAR EAX,0x1                         ; 0047633e
    MOV EBP,dword ptr [ESP + 0x18]      ; 00476340
    MOV EDX,ECX                         ; 00476344
    LEA EBX,[EAX + ESI*0x1]             ; 00476346
    SUB EDX,EBP                         ; 00476349
    MOV EBP,0x3                         ; 0047634b
    MOV EAX,EDX                         ; 00476350
    SAR EDX,0x1f                        ; 00476352
    IDIV EBP                            ; 00476355
    LEA EBP,[EBX + EAX*0x1]             ; 00476357
    TEST EDI,EDI                        ; 0047635a
    JNZ 0x004763f2                      ; 0047635c
        ;   XREF to: 004763f2 (CONDITIONAL_JUMP)  ; LAB_004763f2
    MOV EDX,dword ptr [ESP + 0x18]      ; 00476362
    ADD EDX,EAX                         ; 00476366
    INC EDX                             ; 00476368
    ADD ESI,EDX                         ; 00476369
    TEST EAX,EAX                        ; 0047636b
    JLE 0x00476390                      ; 0047636d
        ;   XREF to: 00476390 (CONDITIONAL_JUMP)  ; LAB_00476390
    MOV EDI,EBX                         ; 0047636f
    PUSH EBX                            ; 00476371
        ;   Label: LAB_00476371
    PUSH ESI                            ; 00476372
    PUSH EDI                            ; 00476373
    INC EBX                             ; 00476374
    CALL FUN_00403bd0                   ; 00476375
        ;   XREF to: 00403bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00403bd0()
    INC ESI                             ; 0047637a
    ADD ESP,0xc                         ; 0047637b
    DEC EDI                             ; 0047637e
    CMP EBX,EBP                         ; 0047637f
    JL 0x00476371                       ; 00476381
        ;   XREF to: 00476371 (CONDITIONAL_JUMP)  ; LAB_00476371
    LEA EAX,[EAX]                       ; 00476383
    LEA EDX,[EDX]                       ; 00476389
    NOP                                 ; 0047638f
    POP EBP                             ; 00476390
        ;   Label: LAB_00476390
    POP EDI                             ; 00476391
    POP ESI                             ; 00476392
    POP EBX                             ; 00476393
    RET                                 ; 00476394
    CMP EDI,0x1                         ; 00476395
        ;   Label: LAB_00476395
    JZ 0x00476330                       ; 00476398
        ;   XREF to: 00476330 (CONDITIONAL_JUMP)  ; LAB_00476330
    MOV EDX,dword ptr [ESP + 0x18]      ; 0047639a
    ADD EDX,ECX                         ; 0047639e
    DEC EDX                             ; 004763a0
    MOV EAX,EDX                         ; 004763a1
    SAR EDX,0x1f                        ; 004763a3
    SUB EAX,EDX                         ; 004763a6
    SAR EAX,0x1                         ; 004763a8
    MOV ECX,dword ptr [ESP + 0x14]      ; 004763aa
    MOV EDX,EBP                         ; 004763ae
    LEA EBX,[EAX + ESI*0x1]             ; 004763b0
    SUB EDX,ECX                         ; 004763b3
    MOV ECX,0x3                         ; 004763b5
    MOV EAX,EDX                         ; 004763ba
    SAR EDX,0x1f                        ; 004763bc
    IDIV ECX                            ; 004763bf
    LEA EDX,[EBX + EAX*0x1]             ; 004763c1
    CMP EDI,0x2                         ; 004763c4
    JNZ 0x00476419                      ; 004763c7
        ;   XREF to: 00476419 (CONDITIONAL_JUMP)  ; LAB_00476419
    MOV ECX,dword ptr [ESP + 0x14]      ; 004763c9
    ADD ECX,EAX                         ; 004763cd
    INC ECX                             ; 004763cf
    LEA EDI,[ECX + ESI*0x1]             ; 004763d0
    TEST EAX,EAX                        ; 004763d3
    JLE 0x00476390                      ; 004763d5
        ;   XREF to: 00476390 (CONDITIONAL_JUMP)  ; LAB_00476390
    MOV ESI,EBX                         ; 004763d7
    MOV EBP,EDX                         ; 004763d9
    PUSH EBX                            ; 004763db
        ;   Label: LAB_004763db
    PUSH ESI                            ; 004763dc
    PUSH EDI                            ; 004763dd
    INC EBX                             ; 004763de
    CALL FUN_00403ce0                   ; 004763df
        ;   XREF to: 00403ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_00403ce0()
    DEC ESI                             ; 004763e4
    ADD ESP,0xc                         ; 004763e5
    INC EDI                             ; 004763e8
    CMP EBX,EBP                         ; 004763e9
    JL 0x004763db                       ; 004763eb
        ;   XREF to: 004763db (CONDITIONAL_JUMP)  ; LAB_004763db
    POP EBP                             ; 004763ed
    POP EDI                             ; 004763ee
    POP ESI                             ; 004763ef
    POP EBX                             ; 004763f0
    RET                                 ; 004763f1
    MOV EDX,ECX                         ; 004763f2
        ;   Label: LAB_004763f2
    SUB EDX,EAX                         ; 004763f4
    SUB EDX,0x2                         ; 004763f6
    LEA EDI,[EDX + ESI*0x1]             ; 004763f9
    TEST EAX,EAX                        ; 004763fc
    JLE 0x00476390                      ; 004763fe
        ;   XREF to: 00476390 (CONDITIONAL_JUMP)  ; LAB_00476390
    MOV ESI,EBX                         ; 00476400
    PUSH EBX                            ; 00476402
        ;   Label: LAB_00476402
    PUSH EDI                            ; 00476403
    PUSH ESI                            ; 00476404
    INC EBX                             ; 00476405
    CALL FUN_00403bd0                   ; 00476406
        ;   XREF to: 00403bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00403bd0()
    DEC EDI                             ; 0047640b
    ADD ESP,0xc                         ; 0047640c
    DEC ESI                             ; 0047640f
    CMP EBX,EBP                         ; 00476410
    JL 0x00476402                       ; 00476412
        ;   XREF to: 00476402 (CONDITIONAL_JUMP)  ; LAB_00476402
    POP EBP                             ; 00476414
    POP EDI                             ; 00476415
    POP ESI                             ; 00476416
    POP EBX                             ; 00476417
    RET                                 ; 00476418
    SUB EBP,EAX                         ; 00476419
        ;   Label: LAB_00476419
    SUB EBP,0x2                         ; 0047641b
    LEA EDI,[ESI + EBP*0x1]             ; 0047641e
    TEST EAX,EAX                        ; 00476421
    JLE 0x00476390                      ; 00476423
        ;   XREF to: 00476390 (CONDITIONAL_JUMP)  ; LAB_00476390
    MOV ESI,EBX                         ; 00476429
    MOV EBP,EDX                         ; 0047642b
    PUSH EBX                            ; 0047642d
        ;   Label: LAB_0047642d
    PUSH ESI                            ; 0047642e
    PUSH EDI                            ; 0047642f
    INC EBX                             ; 00476430
    CALL FUN_00403ce0                   ; 00476431
        ;   XREF to: 00403ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_00403ce0()
    DEC ESI                             ; 00476436
    ADD ESP,0xc                         ; 00476437
    DEC EDI                             ; 0047643a
    CMP EBX,EBP                         ; 0047643b
    JL 0x0047642d                       ; 0047643d
        ;   XREF to: 0047642d (CONDITIONAL_JUMP)  ; LAB_0047642d
    POP EBP                             ; 0047643f
    POP EDI                             ; 00476440
    POP ESI                             ; 00476441
    POP EBX                             ; 00476442
    RET                                 ; 00476443

