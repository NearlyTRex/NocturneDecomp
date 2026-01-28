; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void crt_unknown_c_FUN_00604267(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_unknown.c_FUN_0060411c at 00604242
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00604267
        ;   Label: crt_unknown.c_FUN_00604267
    MOV EBP,ESP                         ; 00604268
    PUSH EBX                            ; 0060426a
    PUSH ESI                            ; 0060426b
    PUSH EDI                            ; 0060426c
    SUB ESP,0x4                         ; 0060426d
    MOV EDX,dword ptr [EBP + 0x8]       ; 00604270
    MOV ECX,dword ptr [EBP + 0x14]      ; 00604273
    MOV EBX,dword ptr [EDX]             ; 00604276
    MOV AH,byte ptr [EDX + 0x8]         ; 00604278
    INC ECX                             ; 0060427b
    MOV dword ptr [EBP + -0x10],EBX     ; 0060427c
    MOV dword ptr [EBP + 0x14],ECX      ; 0060427f
    XOR EBX,EBX                         ; 00604282
    TEST AH,0x4                         ; 00604284
    JZ 0x006042ad                       ; 00604287
        ;   XREF to: 006042ad (CONDITIONAL_JUMP)  ; LAB_006042ad
    MOV ESI,dword ptr [EBP + 0x10]      ; 00604289
    CMP ESI,dword ptr [EBP + -0x10]     ; 0060428c
    JGE 0x00604299                      ; 0060428f
        ;   XREF to: 00604299 (CONDITIONAL_JUMP)  ; LAB_00604299
    TEST AH,0x10                        ; 00604291
    JNZ 0x00604299                      ; 00604294
        ;   XREF to: 00604299 (CONDITIONAL_JUMP)  ; LAB_00604299
    MOV dword ptr [EBP + -0x10],ESI     ; 00604296
    MOV ESI,dword ptr [EBP + 0x14]      ; 00604299
        ;   Label: LAB_00604299
    MOV EAX,dword ptr [EBP + -0x10]     ; 0060429c
    SUB EAX,ESI                         ; 0060429f
    MOV dword ptr [EBP + -0x10],EAX     ; 006042a1
    TEST EAX,EAX                        ; 006042a4
    JGE 0x006042ad                      ; 006042a6
        ;   XREF to: 006042ad (CONDITIONAL_JUMP)  ; LAB_006042ad
    XOR ESI,ESI                         ; 006042a8
    MOV dword ptr [EBP + -0x10],ESI     ; 006042aa
    MOV EDI,dword ptr [EBP + 0x14]      ; 006042ad
        ;   Label: LAB_006042ad
    TEST EDI,EDI                        ; 006042b0
    JG 0x00604355                       ; 006042b2
        ;   XREF to: 00604355 (CONDITIONAL_JUMP)  ; LAB_00604355
    TEST byte ptr [EDX + 0x8],0x8       ; 006042b8
    JNZ 0x006042e1                      ; 006042bc
        ;   XREF to: 006042e1 (CONDITIONAL_JUMP)  ; LAB_006042e1
    MOV ECX,dword ptr [EBP + 0x18]      ; 006042be
    MOV ESI,EBX                         ; 006042c1
    ADD ESI,ECX                         ; 006042c3
    MOV byte ptr [ESI],0x30             ; 006042c5
    MOV ESI,dword ptr [EBP + -0x10]     ; 006042c8
    INC EBX                             ; 006042cb
    TEST ESI,ESI                        ; 006042cc
    JG 0x006042d6                       ; 006042ce
        ;   XREF to: 006042d6 (CONDITIONAL_JUMP)  ; LAB_006042d6
    TEST byte ptr [EDX + 0x8],0x10      ; 006042d0
    JZ 0x006042e1                       ; 006042d4
        ;   XREF to: 006042e1 (CONDITIONAL_JUMP)  ; LAB_006042e1
    MOV EAX,dword ptr [EBP + 0x18]      ; 006042d6
        ;   Label: LAB_006042d6
    MOV EDI,EBX                         ; 006042d9
    ADD EDI,EAX                         ; 006042db
    INC EBX                             ; 006042dd
    MOV byte ptr [EDI],0x2e             ; 006042de
    MOV ESI,dword ptr [EBP + 0x14]      ; 006042e1
        ;   Label: LAB_006042e1
    MOV ECX,dword ptr [EBP + -0x10]     ; 006042e4
    NEG ESI                             ; 006042e7
    MOV dword ptr [EDX + 0x1c],EBX      ; 006042e9
    CMP ESI,ECX                         ; 006042ec
    JLE 0x006042fa                      ; 006042ee
        ;   XREF to: 006042fa (CONDITIONAL_JUMP)  ; LAB_006042fa
    MOV ESI,ECX                         ; 006042f0
    MOV dword ptr [EBP + 0x14],ECX      ; 006042f2
    NEG ESI                             ; 006042f5
    MOV dword ptr [EBP + 0x14],ESI      ; 006042f7
    MOV ESI,dword ptr [EBP + 0x14]      ; 006042fa
        ;   Label: LAB_006042fa
    MOV EAX,dword ptr [EBP + -0x10]     ; 006042fd
    MOV ECX,dword ptr [EBP + 0x10]      ; 00604300
    MOV EDI,ESI                         ; 00604303
    MOV dword ptr [EDX + 0x18],ESI      ; 00604305
    ADD EAX,ESI                         ; 00604308
    MOV dword ptr [EDX + 0x20],ESI      ; 0060430a
    NEG EDI                             ; 0060430d
    MOV dword ptr [EBP + -0x10],EAX     ; 0060430f
    MOV dword ptr [EDX + 0x20],EDI      ; 00604312
    CMP EAX,ECX                         ; 00604315
    JGE 0x0060431c                      ; 00604317
        ;   XREF to: 0060431c (CONDITIONAL_JUMP)  ; LAB_0060431c
    MOV dword ptr [EBP + 0x10],EAX      ; 00604319
    MOV EDI,dword ptr [EBP + 0x18]      ; 0060431c
        ;   Label: LAB_0060431c
    MOV ECX,dword ptr [EBP + 0x10]      ; 0060431f
    MOV ESI,dword ptr [EBP + 0xc]       ; 00604322
    ADD EDI,EBX                         ; 00604325
    PUSH ES                             ; 00604327
    MOV AX,DS                           ; 00604328
    MOV ES,AX                           ; 0060432a
    PUSH EDI                            ; 0060432c
    MOV EAX,ECX                         ; 0060432d
    SHR ECX,0x2                         ; 0060432f
    MOVSD.REP ES:EDI,ESI                ; 00604332
    MOV CL,AL                           ; 00604334
    AND CL,0x3                          ; 00604336
    MOVSB.REP ES:EDI,ESI                ; 00604339
    POP EDI                             ; 0060433b
    POP ES                              ; 0060433c
    MOV ESI,dword ptr [EBP + 0x10]      ; 0060433d
    MOV EDI,dword ptr [EBP + 0x10]      ; 00604340
    ADD EBX,ESI                         ; 00604343
    MOV dword ptr [EDX + 0x24],ESI      ; 00604345
    MOV ESI,dword ptr [EBP + -0x10]     ; 00604348
    SUB ESI,EDI                         ; 0060434b
    MOV dword ptr [EDX + 0x28],ESI      ; 0060434d
        ;   Label: LAB_0060434d
    JMP 0x00604458                      ; 00604350
        ;   XREF to: 00604458 (UNCONDITIONAL_JUMP)  ; LAB_00604458
    MOV ESI,dword ptr [EBP + 0x10]      ; 00604355
        ;   Label: LAB_00604355
    CMP ESI,EDI                         ; 00604358
    JGE 0x006043ba                      ; 0060435a
        ;   XREF to: 006043ba (CONDITIONAL_JUMP)  ; LAB_006043ba
    MOV EDI,dword ptr [EBP + 0x18]      ; 0060435c
    MOV ECX,ESI                         ; 0060435f
    MOV ESI,dword ptr [EBP + 0xc]       ; 00604361
    PUSH ES                             ; 00604364
    MOV AX,DS                           ; 00604365
    MOV ES,AX                           ; 00604367
    PUSH EDI                            ; 00604369
    MOV EAX,ECX                         ; 0060436a
    SHR ECX,0x2                         ; 0060436c
    MOVSD.REP ES:EDI,ESI                ; 0060436f
    MOV CL,AL                           ; 00604371
    AND CL,0x3                          ; 00604373
    MOVSB.REP ES:EDI,ESI                ; 00604376
    POP EDI                             ; 00604378
    POP ES                              ; 00604379
    MOV EAX,dword ptr [EBP + 0x10]      ; 0060437a
    MOV ESI,dword ptr [EBP + 0x14]      ; 0060437d
    MOV dword ptr [EDX + 0x1c],EAX      ; 00604380
    SUB ESI,EAX                         ; 00604383
    MOV CL,byte ptr [EDX + 0x8]         ; 00604385
    MOV dword ptr [EDX + 0x20],ESI      ; 00604388
    MOV ESI,dword ptr [EBP + 0x14]      ; 0060438b
    ADD EBX,EAX                         ; 0060438e
    MOV dword ptr [EDX + 0x18],ESI      ; 00604390
    TEST CL,0x8                         ; 00604393
    JNZ 0x006043b5                      ; 00604396
        ;   XREF to: 006043b5 (CONDITIONAL_JUMP)  ; LAB_006043b5
    CMP dword ptr [EBP + -0x10],0x0     ; 00604398
    JG 0x006043a3                       ; 0060439c
        ;   XREF to: 006043a3 (CONDITIONAL_JUMP)  ; LAB_006043a3
    TEST CL,0x10                        ; 0060439e
    JZ 0x006043b5                       ; 006043a1
        ;   XREF to: 006043b5 (CONDITIONAL_JUMP)  ; LAB_006043b5
    MOV EAX,dword ptr [EBP + 0x18]      ; 006043a3
        ;   Label: LAB_006043a3
    MOV EDI,EBX                         ; 006043a6
    ADD EDI,EAX                         ; 006043a8
    MOV byte ptr [EDI],0x2e             ; 006043aa
    INC EBX                             ; 006043ad
    MOV dword ptr [EDX + 0x24],0x1      ; 006043ae
    MOV ESI,dword ptr [EBP + -0x10]     ; 006043b5
        ;   Label: LAB_006043b5
    JMP 0x0060434d                      ; 006043b8
        ;   XREF to: 0060434d (UNCONDITIONAL_JUMP)  ; LAB_0060434d
    MOV ESI,dword ptr [EBP + 0xc]       ; 006043ba
        ;   Label: LAB_006043ba
    MOV ECX,EDI                         ; 006043bd
    MOV EDI,dword ptr [EBP + 0x18]      ; 006043bf
    PUSH ES                             ; 006043c2
    MOV AX,DS                           ; 006043c3
    MOV ES,AX                           ; 006043c5
    PUSH EDI                            ; 006043c7
    MOV EAX,ECX                         ; 006043c8
    SHR ECX,0x2                         ; 006043ca
    MOVSD.REP ES:EDI,ESI                ; 006043cd
    MOV CL,AL                           ; 006043cf
    AND CL,0x3                          ; 006043d1
    MOVSB.REP ES:EDI,ESI                ; 006043d4
    POP EDI                             ; 006043d6
    POP ES                              ; 006043d7
    MOV ESI,dword ptr [EBP + 0x14]      ; 006043d8
    MOV EDI,dword ptr [EBP + 0x10]      ; 006043db
    MOV CH,byte ptr [EDX + 0x8]         ; 006043de
    ADD EBX,ESI                         ; 006043e1
    SUB EDI,ESI                         ; 006043e3
    MOV dword ptr [EDX + 0x18],ESI      ; 006043e5
    MOV dword ptr [EBP + 0x10],EDI      ; 006043e8
    TEST CH,0x8                         ; 006043eb
    JNZ 0x00604408                      ; 006043ee
        ;   XREF to: 00604408 (CONDITIONAL_JUMP)  ; LAB_00604408
    CMP dword ptr [EBP + -0x10],0x0     ; 006043f0
    JG 0x006043fb                       ; 006043f4
        ;   XREF to: 006043fb (CONDITIONAL_JUMP)  ; LAB_006043fb
    TEST CH,0x10                        ; 006043f6
    JZ 0x00604417                       ; 006043f9
        ;   XREF to: 00604417 (CONDITIONAL_JUMP)  ; LAB_00604417
    MOV ECX,dword ptr [EBP + 0x18]      ; 006043fb
        ;   Label: LAB_006043fb
    MOV EDI,EBX                         ; 006043fe
    ADD EDI,ECX                         ; 00604400
    INC EBX                             ; 00604402
    MOV byte ptr [EDI],0x2e             ; 00604403
    JMP 0x00604417                      ; 00604406
        ;   XREF to: 00604417 (UNCONDITIONAL_JUMP)  ; LAB_00604417
    MOV ESI,dword ptr [EBP + 0x18]      ; 00604408
        ;   Label: LAB_00604408
    CMP byte ptr [ESI],0x30             ; 0060440b
    JNZ 0x00604417                      ; 0060440e
        ;   XREF to: 00604417 (CONDITIONAL_JUMP)  ; LAB_00604417
    MOV dword ptr [EDX + 0x18],0x0      ; 00604410
    MOV ESI,dword ptr [EBP + -0x10]     ; 00604417
        ;   Label: LAB_00604417
    CMP ESI,dword ptr [EBP + 0x10]      ; 0060441a
    JGE 0x00604422                      ; 0060441d
        ;   XREF to: 00604422 (CONDITIONAL_JUMP)  ; LAB_00604422
    MOV dword ptr [EBP + 0x10],ESI      ; 0060441f
    MOV ESI,dword ptr [EBP + 0xc]       ; 00604422
        ;   Label: LAB_00604422
    MOV EAX,dword ptr [EBP + 0x14]      ; 00604425
    MOV EDI,dword ptr [EBP + 0x18]      ; 00604428
    MOV ECX,dword ptr [EBP + 0x10]      ; 0060442b
    ADD ESI,EAX                         ; 0060442e
    ADD EDI,EBX                         ; 00604430
    PUSH ES                             ; 00604432
    MOV AX,DS                           ; 00604433
    MOV ES,AX                           ; 00604435
    PUSH EDI                            ; 00604437
    MOV EAX,ECX                         ; 00604438
    SHR ECX,0x2                         ; 0060443a
    MOVSD.REP ES:EDI,ESI                ; 0060443d
    MOV CL,AL                           ; 0060443f
    AND CL,0x3                          ; 00604441
    MOVSB.REP ES:EDI,ESI                ; 00604444
    POP EDI                             ; 00604446
    POP ES                              ; 00604447
    MOV ECX,dword ptr [EBP + 0x10]      ; 00604448
    MOV ESI,dword ptr [EBP + -0x10]     ; 0060444b
    ADD EBX,ECX                         ; 0060444e
    SUB ESI,ECX                         ; 00604450
    MOV dword ptr [EDX + 0x1c],EBX      ; 00604452
    MOV dword ptr [EDX + 0x20],ESI      ; 00604455
    ADD EBX,dword ptr [EBP + 0x18]      ; 00604458
        ;   Label: LAB_00604458
    MOV byte ptr [EBX],0x0              ; 0060445b
        ;   Label: LAB_0060445b

