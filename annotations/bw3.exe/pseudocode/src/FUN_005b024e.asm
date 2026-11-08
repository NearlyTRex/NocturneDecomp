; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double FUN_005b024e(void)
;
;
; XREF[1]:
;   FUN_005aeba0 at 005aebdb
;
; Referenced Globals:
;   undefined4 DAT_006075c1
;   undefined4 DAT_00607b5c
;
; Called Functions:
;   FUN_005aab44
;   FUN_005b1960
;
; *****************************************************************************

section .text

    OR EBX,EBX                          ; 005b024e
        ;   Label: FUN_005b024e
    JNZ 0x005b025d                      ; 005b0250
        ;   XREF to: 005b025d (CONDITIONAL_JUMP)  ; LAB_005b025d
    ADD ECX,ECX                         ; 005b0252
    JNZ 0x005b025b                      ; 005b0254
        ;   XREF to: 005b025b (CONDITIONAL_JUMP)  ; LAB_005b025b
    JMP 0x005b0e4f                      ; 005b0256
        ;   XREF to: 005b0e4f (UNCONDITIONAL_JUMP)  ; LAB_005b0e4f
    RCR ECX,0x1                         ; 005b025b
        ;   Label: LAB_005b025b
    OR EAX,EAX                          ; 005b025d
        ;   Label: LAB_005b025d
    JNZ 0x005b0268                      ; 005b025f
        ;   XREF to: 005b0268 (CONDITIONAL_JUMP)  ; LAB_005b0268
    ADD EDX,EDX                         ; 005b0261
    JNZ 0x005b0266                      ; 005b0263
        ;   XREF to: 005b0266 (CONDITIONAL_JUMP)  ; LAB_005b0266
    RET                                 ; 005b0265
    RCR EDX,0x1                         ; 005b0266
        ;   Label: LAB_005b0266
    CMP byte ptr [0x006075c1],0x0       ; 005b0268 | DAT_006075c1
        ;   Label: LAB_005b0268
    JZ 0x005b02a1                       ; 005b026f
        ;   XREF to: 005b02a1 (CONDITIONAL_JUMP)  ; LAB_005b02a1
    PUSH EDX                            ; 005b0271
    PUSH EAX                            ; 005b0272
    FLD double ptr [ESP]                ; 005b0273
    PUSH ECX                            ; 005b0276
    PUSH EBX                            ; 005b0277
    TEST byte ptr [0x00607b5c],0x1      ; 005b0278 | DAT_00607b5c
    JZ 0x005b0288                       ; 005b027f
        ;   XREF to: 005b0288 (CONDITIONAL_JUMP)  ; LAB_005b0288
    CALL FUN_005aab44                   ; 005b0281
        ;   XREF to: 005aab44 (UNCONDITIONAL_CALL)  ; undefined FUN_005aab44()
    JMP 0x005b028e                      ; 005b0286
        ;   XREF to: 005b028e (UNCONDITIONAL_JUMP)  ; LAB_005b028e
    FDIV double ptr [ESP]               ; 005b0288
        ;   Label: LAB_005b0288
    ADD ESP,0x8                         ; 005b028b
    FSTP double ptr [ESP]               ; 005b028e
        ;   Label: LAB_005b028e
    WAIT                                ; 005b0291
    POP EAX                             ; 005b0292
    POP EDX                             ; 005b0293
    CMP EDX,0x80000000                  ; 005b0294
    JNZ 0x005b02a0                      ; 005b029a
        ;   XREF to: 005b02a0 (CONDITIONAL_JUMP)  ; LAB_005b02a0
    SUB EDX,EDX                         ; 005b029c
    MOV EAX,EDX                         ; 005b029e
    RET                                 ; 005b02a0
        ;   Label: LAB_005b02a0
    PUSH EBP                            ; 005b02a1
        ;   Label: LAB_005b02a1
    MOV EBP,ESP                         ; 005b02a2
    PUSH EDI                            ; 005b02a4
    PUSH ESI                            ; 005b02a5
    MOV EDI,EDX                         ; 005b02a6
    MOV ESI,ECX                         ; 005b02a8
    SAR EDI,0x14                        ; 005b02aa
    SAR ECX,0x14                        ; 005b02ad
    AND EDI,0x800007ff                  ; 005b02b0
    AND ECX,0x800007ff                  ; 005b02b6
    ROL EDI,0x10                        ; 005b02bc
    ROL ECX,0x10                        ; 005b02bf
    ADD DI,CX                           ; 005b02c2
    ROL EDI,0x10                        ; 005b02c5
    ROL ECX,0x10                        ; 005b02c8
    AND EDX,0xfffff                     ; 005b02cb
    AND ESI,0xfffff                     ; 005b02d1
    OR DI,DI                            ; 005b02d7
    JZ 0x005b02e4                       ; 005b02da
        ;   XREF to: 005b02e4 (CONDITIONAL_JUMP)  ; LAB_005b02e4
    OR EDX,0x100000                     ; 005b02dc
    JMP 0x005b02f2                      ; 005b02e2
        ;   XREF to: 005b02f2 (UNCONDITIONAL_JUMP)  ; LAB_005b02f2
    ADD EAX,EAX                         ; 005b02e4
        ;   Label: LAB_005b02e4
    ADC EDX,EDX                         ; 005b02e6
    DEC DI                              ; 005b02e8
    TEST EDX,0x100000                   ; 005b02ea
    JZ 0x005b02e4                       ; 005b02f0
        ;   XREF to: 005b02e4 (CONDITIONAL_JUMP)  ; LAB_005b02e4
    OR CX,CX                            ; 005b02f2
        ;   Label: LAB_005b02f2
    JZ 0x005b02ff                       ; 005b02f5
        ;   XREF to: 005b02ff (CONDITIONAL_JUMP)  ; LAB_005b02ff
    OR ESI,0x100000                     ; 005b02f7
    JMP 0x005b030d                      ; 005b02fd
        ;   XREF to: 005b030d (UNCONDITIONAL_JUMP)  ; LAB_005b030d
    ADD EBX,EBX                         ; 005b02ff
        ;   Label: LAB_005b02ff
    ADC ESI,ESI                         ; 005b0301
    DEC CX                              ; 005b0303
    TEST ESI,0x100000                   ; 005b0305
    JZ 0x005b02ff                       ; 005b030b
        ;   XREF to: 005b02ff (CONDITIONAL_JUMP)  ; LAB_005b02ff
    SUB DI,CX                           ; 005b030d
        ;   Label: LAB_005b030d
    ADD DI,0x3ff                        ; 005b0310
    JS 0x005b0328                       ; 005b0315
        ;   XREF to: 005b0328 (CONDITIONAL_JUMP)  ; LAB_005b0328
    CMP DI,0x7ff                        ; 005b0317
    JC 0x005b0328                       ; 005b031c
        ;   XREF to: 005b0328 (CONDITIONAL_JUMP)  ; LAB_005b0328
    MOV EAX,ECX                         ; 005b031e
    POP ESI                             ; 005b0320
    POP EDI                             ; 005b0321
    POP EBP                             ; 005b0322
    JMP 0x005b0e5b                      ; 005b0323
        ;   XREF to: 005b0e5b (UNCONDITIONAL_JUMP)  ; LAB_005b0e5b
    CMP DI,-0x34                        ; 005b0328
        ;   Label: LAB_005b0328
    JGE 0x005b0336                      ; 005b032c
        ;   XREF to: 005b0336 (CONDITIONAL_JUMP)  ; LAB_005b0336
    POP ESI                             ; 005b032e
    POP EDI                             ; 005b032f
    POP EBP                             ; 005b0330
    JMP 0x005b0e3e                      ; 005b0331
        ;   XREF to: 005b0e3e (UNCONDITIONAL_JUMP)  ; LAB_005b0e3e
    PUSH EDI                            ; 005b0336
        ;   Label: LAB_005b0336
    MOV CL,0xb                          ; 005b0337
    SHLD EDX,EAX,CL                     ; 005b0339
    SHLD EAX,EBP,CL                     ; 005b033c
    AND EAX,0xfffff800                  ; 005b033f
    SHLD ESI,EBX,CL                     ; 005b0344
    SHLD EBX,EBP,CL                     ; 005b0347
    AND EBX,0xfffff800                  ; 005b034a
    PUSH ESI                            ; 005b0350
    PUSH EBX                            ; 005b0351
    MOV ECX,ESI                         ; 005b0352
    MOV EDI,EDX                         ; 005b0354
    MOV ESI,EAX                         ; 005b0356
    SUB EAX,EAX                         ; 005b0358
    CMP ECX,EDX                         ; 005b035a
    JA 0x005b0361                       ; 005b035c
        ;   XREF to: 005b0361 (CONDITIONAL_JUMP)  ; LAB_005b0361
    SUB EDX,ECX                         ; 005b035e
    INC EAX                             ; 005b0360
    PUSH EAX                            ; 005b0361
        ;   Label: LAB_005b0361
    MOV EAX,ESI                         ; 005b0362
    DIV ECX                             ; 005b0364
    PUSH EAX                            ; 005b0366
    XCHG EAX,EBX                        ; 005b0367
    MUL EBX                             ; 005b0368
    XCHG EAX,ECX                        ; 005b036a
    XCHG EBX,EDX                        ; 005b036b
    MUL EDX                             ; 005b036d
    ADD EAX,EBX                         ; 005b036f
    ADC EDX,0x0                         ; 005b0371
    MOV EBX,dword ptr [EBP + -0x14]     ; 005b0374
    TEST byte ptr [EBP + -0x18],0x1     ; 005b0377
    JZ 0x005b0382                       ; 005b037b
        ;   XREF to: 005b0382 (CONDITIONAL_JUMP)  ; LAB_005b0382
    ADD EAX,EBX                         ; 005b037d
    ADC EDX,dword ptr [EBP + -0x10]     ; 005b037f
    NEG ECX                             ; 005b0382
        ;   Label: LAB_005b0382
    SBB ESI,EAX                         ; 005b0384
    SBB EDI,EDX                         ; 005b0386
    JZ 0x005b039c                       ; 005b0388
        ;   XREF to: 005b039c (CONDITIONAL_JUMP)  ; LAB_005b039c
    SUB dword ptr [EBP + -0x1c],0x1     ; 005b038a
        ;   Label: LAB_005b038a
    SBB dword ptr [EBP + -0x18],0x0     ; 005b038e
    ADD ECX,EBX                         ; 005b0392
    ADC ESI,dword ptr [EBP + -0x10]     ; 005b0394
    ADC EDI,0x0                         ; 005b0397
    JNZ 0x005b038a                      ; 005b039a
        ;   XREF to: 005b038a (CONDITIONAL_JUMP)  ; LAB_005b038a
    MOV EDI,ESI                         ; 005b039c
        ;   Label: LAB_005b039c
    MOV ESI,ECX                         ; 005b039e
    MOV ECX,dword ptr [EBP + -0x10]     ; 005b03a0
    CMP ECX,EDI                         ; 005b03a3
    JA 0x005b03b1                       ; 005b03a5
        ;   XREF to: 005b03b1 (CONDITIONAL_JUMP)  ; LAB_005b03b1
    SUB EDI,ECX                         ; 005b03a7
    ADD dword ptr [EBP + -0x1c],0x1     ; 005b03a9
    ADC dword ptr [EBP + -0x18],0x0     ; 005b03ad
    MOV EDX,EDI                         ; 005b03b1
        ;   Label: LAB_005b03b1
    MOV EAX,ESI                         ; 005b03b3
    DIV ECX                             ; 005b03b5
    PUSH EAX                            ; 005b03b7
    OR EAX,EAX                          ; 005b03b8
    JZ 0x005b03e8                       ; 005b03ba
        ;   XREF to: 005b03e8 (CONDITIONAL_JUMP)  ; LAB_005b03e8
    XCHG EAX,EBX                        ; 005b03bc
    MUL EBX                             ; 005b03bd
    XCHG EAX,ECX                        ; 005b03bf
    XCHG EBX,EDX                        ; 005b03c0
    MUL EDX                             ; 005b03c2
    ADD EAX,EBX                         ; 005b03c4
    ADC EDX,0x0                         ; 005b03c6
    NEG ECX                             ; 005b03c9
    SBB ESI,EAX                         ; 005b03cb
    SBB EDI,EDX                         ; 005b03cd
    JZ 0x005b03e8                       ; 005b03cf
        ;   XREF to: 005b03e8 (CONDITIONAL_JUMP)  ; LAB_005b03e8
    SUB dword ptr [EBP + -0x20],0x1     ; 005b03d1
        ;   Label: LAB_005b03d1
    SBB dword ptr [EBP + -0x1c],0x0     ; 005b03d5
    SBB dword ptr [EBP + -0x18],0x0     ; 005b03d9
    ADD ECX,dword ptr [EBP + -0x14]     ; 005b03dd
    ADC ESI,dword ptr [EBP + -0x10]     ; 005b03e0
    ADC EDI,0x0                         ; 005b03e3
    JNZ 0x005b03d1                      ; 005b03e6
        ;   XREF to: 005b03d1 (CONDITIONAL_JUMP)  ; LAB_005b03d1
    POP EAX                             ; 005b03e8
        ;   Label: LAB_005b03e8
    POP EDX                             ; 005b03e9
    POP EBX                             ; 005b03ea
    ADD ESP,0x8                         ; 005b03eb
    POP EDI                             ; 005b03ee
    DEC DI                              ; 005b03ef
    SHR EBX,0x1                         ; 005b03f1
    JNC 0x005b03fa                      ; 005b03f3
        ;   XREF to: 005b03fa (CONDITIONAL_JUMP)  ; LAB_005b03fa
    RCR EDX,0x1                         ; 005b03f5
    RCR EAX,0x1                         ; 005b03f7
    INC EDI                             ; 005b03f9
    SUB ESI,ESI                         ; 005b03fa
        ;   Label: LAB_005b03fa
    MOV CL,0xb                          ; 005b03fc
    SHRD EAX,EDX,CL                     ; 005b03fe
    RCR ESI,0x1                         ; 005b0401
    SHRD EDX,ESI,CL                     ; 005b0403
    OR EDX,0xfff00000                   ; 005b0406
    ADD ESI,ESI                         ; 005b040c
    ADC EAX,0x0                         ; 005b040e
    ADC EDX,0x0                         ; 005b0411
    ADC EDI,0x0                         ; 005b0414
    OR DI,DI                            ; 005b0417
    JG 0x005b0439                       ; 005b041a
        ;   XREF to: 005b0439 (CONDITIONAL_JUMP)  ; LAB_005b0439
    JNZ 0x005b0422                      ; 005b041c
        ;   XREF to: 005b0422 (CONDITIONAL_JUMP)  ; LAB_005b0422
    MOV CL,0x1                          ; 005b041e
    JMP 0x005b0428                      ; 005b0420
        ;   XREF to: 005b0428 (UNCONDITIONAL_JUMP)  ; LAB_005b0428
    NEG DI                              ; 005b0422
        ;   Label: LAB_005b0422
    MOV CX,DI                           ; 005b0425
    AND EDX,0x1fffff                    ; 005b0428
        ;   Label: LAB_005b0428
    SUB EBX,EBX                         ; 005b042e
    SHRD EAX,EDX,CL                     ; 005b0430
    SHRD EDX,EBX,CL                     ; 005b0433
    SUB DI,DI                           ; 005b0436
    AND EDX,0xfffff                     ; 005b0439
        ;   Label: LAB_005b0439
    MOV ESI,EDI                         ; 005b043f
    ROR EDI,0xb                         ; 005b0441
    ADD ESI,ESI                         ; 005b0444
    RCR EDI,0x1                         ; 005b0446
    AND EDI,0xfff00000                  ; 005b0448
    OR EDX,EDI                          ; 005b044e
    POP ESI                             ; 005b0450
    POP EDI                             ; 005b0451
    POP EBP                             ; 005b0452
    RET                                 ; 005b0453
    MOV EAX,0x83                        ; 005b0e4f
        ;   Label: LAB_005b0e4f
    CALL FUN_005b1960                   ; 005b0e54
        ;   XREF to: 005b1960 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1960()
    JMP 0x005b0e6c                      ; 005b0e59
        ;   XREF to: 005b0e6c (UNCONDITIONAL_JUMP)  ; LAB_005b0e6c

