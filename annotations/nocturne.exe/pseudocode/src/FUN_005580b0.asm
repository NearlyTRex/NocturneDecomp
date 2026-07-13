; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005580b0(int *param_1,undefined4 param_2,LPCSTR param_3,int param_4,int param_5,int param_6 ,int param_7)
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x28]:4  local_28
;
; XREF[1]:
;   FUN_00558060 at 0055809a
;
; Referenced Globals:
;   void* PTR_SetTextColor_005753c8 = 001757c6
;   void* PTR_TextOutA_005753cc = 001757d6
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_005b7624
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01c00624
;   undefined4 DAT_01c0062c
;   undefined4 DAT_01c00630
;   undefined4 DAT_01c00638
;   undefined4 DAT_01c0063c
;   undefined4 DAT_01c00644
;   undefined4 DAT_01c00648
;
; Called Functions:
;   FUN_00491140
;   FUN_005649c0
;   SetTextColor
;   TextOutA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005580b0
        ;   Label: FUN_005580b0
    PUSH ESI                            ; 005580b1
    PUSH EDI                            ; 005580b2
    PUSH EBP                            ; 005580b3
    SUB ESP,0x24                        ; 005580b4
    MOV EBX,dword ptr [ESP + 0x38]      ; 005580b7
    MOV EBP,dword ptr [ESP + 0x40]      ; 005580bb
    MOV ESI,dword ptr [ESP + 0x4c]      ; 005580bf
    CMP ESI,dword ptr [EBX + 0x12c]     ; 005580c3
    JNZ 0x005580db                      ; 005580c9
        ;   XREF to: 005580db (CONDITIONAL_JUMP)  ; LAB_005580db
    MOV ECX,dword ptr [ESP + 0x50]      ; 005580cb
    CMP ECX,dword ptr [EBX + 0x130]     ; 005580cf
    JZ 0x005582bf                       ; 005580d5
        ;   XREF to: 005582bf (CONDITIONAL_JUMP)  ; LAB_005582bf
    MOV EAX,dword ptr [ESP + 0x50]      ; 005580db
        ;   Label: LAB_005580db
    XOR EDI,EDI                         ; 005580df
    MOV dword ptr [EBX + 0x12c],ESI     ; 005580e1
    MOV dword ptr [ESP + 0xc],EDI       ; 005580e7
    MOV dword ptr [EBX + 0x130],EAX     ; 005580eb
    TEST ESI,ESI                        ; 005580f1
    JL 0x005582d9                       ; 005580f3
        ;   XREF to: 005582d9 (CONDITIONAL_JUMP)  ; LAB_005582d9
    MOV EDX,ESI                         ; 005580f9
    LEA EAX,[ESI*0x4 + 0x0]             ; 005580fb
    SUB EAX,ESI                         ; 00558102
    XOR EDX,ESI                         ; 00558104
    XOR ECX,ECX                         ; 00558106
    MOV DL,byte ptr [EAX + 0x1c00649]   ; 00558108
    MOV CL,byte ptr [EAX + 0x1c00648]   ; 0055810e | DAT_01c00648
    SHL EDX,0x8                         ; 00558114
    MOV AL,byte ptr [EAX + 0x1c0064a]   ; 00558117
    OR EDX,ECX                          ; 0055811d
    AND EAX,0xff                        ; 0055811f
    SHL EAX,0x10                        ; 00558124
    OR EDX,EAX                          ; 00558127
        ;   Label: LAB_00558127
    MOV dword ptr [ESP],EDX             ; 00558129
    MOV ECX,dword ptr [ESP + 0x50]      ; 0055812c
        ;   Label: LAB_0055812c
    CMP ECX,-0x1                        ; 00558130
    JZ 0x00558169                       ; 00558133
        ;   XREF to: 00558169 (CONDITIONAL_JUMP)  ; LAB_00558169
    MOV EDX,ECX                         ; 00558135
    LEA EAX,[ECX*0x4 + 0x0]             ; 00558137
    SUB EAX,ECX                         ; 0055813e
    XOR EDX,ECX                         ; 00558140
    MOV DL,byte ptr [EAX + 0x1c00649]   ; 00558142
    XOR ECX,ECX                         ; 00558148
    SHL EDX,0x8                         ; 0055814a
    MOV CL,byte ptr [EAX + 0x1c00648]   ; 0055814d | DAT_01c00648
    MOV AL,byte ptr [EAX + 0x1c0064a]   ; 00558153
    OR EDX,ECX                          ; 00558159
    AND EAX,0xff                        ; 0055815b
    SHL EAX,0x10                        ; 00558160
    OR EDX,EAX                          ; 00558163
    MOV dword ptr [ESP + 0xc],EDX       ; 00558165
    LEA EAX,[EBX + 0x18]                ; 00558169
        ;   Label: LAB_00558169
    MOV ESI,EBP                         ; 0055816c
    MOV EDI,EAX                         ; 0055816e
    PUSH EDI                            ; 00558170
    MOV AL,byte ptr [ESI]               ; 00558171
        ;   Label: LAB_00558171
    MOV byte ptr [EDI],AL               ; 00558173
    CMP AL,0x0                          ; 00558175
    JZ 0x00558189                       ; 00558177
        ;   XREF to: 00558189 (CONDITIONAL_JUMP)  ; LAB_00558189
    MOV AL,byte ptr [ESI + 0x1]         ; 00558179
    ADD ESI,0x2                         ; 0055817c
    MOV byte ptr [EDI + 0x1],AL         ; 0055817f
    ADD EDI,0x2                         ; 00558182
    CMP AL,0x0                          ; 00558185
    JNZ 0x00558171                      ; 00558187
        ;   XREF to: 00558171 (CONDITIONAL_JUMP)  ; LAB_00558171
    POP EDI                             ; 00558189
        ;   Label: LAB_00558189
    PUSH EBP                            ; 0055818a
    MOV EAX,dword ptr [EBX]             ; 0055818b
    PUSH EBX                            ; 0055818d
    CALL dword ptr [EAX + 0x8]          ; 0055818e
    ADD ESP,0x8                         ; 00558191
    MOV dword ptr [EBX + 0x118],EAX     ; 00558194
    PUSH EBP                            ; 0055819a
    MOV EAX,dword ptr [EBX]             ; 0055819b
    PUSH EBX                            ; 0055819d
    CALL dword ptr [EAX + 0xc]          ; 0055819e
    ADD ESP,0x8                         ; 005581a1
    MOV dword ptr [EBX + 0x11c],EAX     ; 005581a4
    SUB ECX,ECX                         ; 005581aa
    DEC ECX                             ; 005581ac
    XOR EAX,EAX                         ; 005581ad
    SCASB.REPNE ES:EDI                  ; 005581af
    NOT ECX                             ; 005581b1
    DEC ECX                             ; 005581b3
    MOV EAX,dword ptr [ESP + 0x50]      ; 005581b4
    MOV ESI,ECX                         ; 005581b8
    MOV EDI,ECX                         ; 005581ba
    CMP EAX,-0x1                        ; 005581bc
    JZ 0x005581e2                       ; 005581bf
        ;   XREF to: 005581e2 (CONDITIONAL_JUMP)  ; LAB_005581e2
    MOV EDX,dword ptr [ESP + 0xc]       ; 005581c1
    PUSH EDX                            ; 005581c5
    MOV ECX,dword ptr [EBX + 0x4]       ; 005581c6
    PUSH ECX                            ; 005581c9
    CALL dword ptr CS:[0x5753c8]        ; 005581ca | PTR_SetTextColor_005753c8
    PUSH ESI                            ; 005581d1
    PUSH EBP                            ; 005581d2
    PUSH 0x1                            ; 005581d3
    PUSH 0x1                            ; 005581d5
    MOV ESI,dword ptr [EBX + 0x4]       ; 005581d7
    PUSH ESI                            ; 005581da
    CALL dword ptr CS:[0x5753cc]        ; 005581db | PTR_TextOutA_005753cc
    MOV EAX,dword ptr [ESP]             ; 005581e2
        ;   Label: LAB_005581e2
    PUSH EAX                            ; 005581e5
    MOV EDX,dword ptr [EBX + 0x4]       ; 005581e6
    PUSH EDX                            ; 005581e9
    CALL dword ptr CS:[0x5753c8]        ; 005581ea | PTR_SetTextColor_005753c8
    PUSH EDI                            ; 005581f1
    PUSH EBP                            ; 005581f2
    PUSH 0x0                            ; 005581f3
    PUSH 0x0                            ; 005581f5
    MOV ECX,dword ptr [EBX + 0x4]       ; 005581f7
    PUSH ECX                            ; 005581fa
    CALL dword ptr CS:[0x5753cc]        ; 005581fb | PTR_TextOutA_005753cc
    MOV ESI,dword ptr [ESP + 0x44]      ; 00558202
        ;   Label: LAB_00558202
    MOV EAX,dword ptr [EBX + 0x120]     ; 00558206
    MOV EDI,dword ptr [0x005b761c]      ; 0055820c | DAT_005b761c
    ADD EAX,ESI                         ; 00558212
    CMP EAX,EDI                         ; 00558214
    JL 0x00558355                       ; 00558216
        ;   XREF to: 00558355 (CONDITIONAL_JUMP)  ; LAB_00558355
    MOV EBP,EDI                         ; 0055821c
    SUB EBP,ESI                         ; 0055821e
    MOV EDX,dword ptr [ESP + 0x48]      ; 00558220
        ;   Label: LAB_00558220
    MOV EAX,dword ptr [EBX + 0x124]     ; 00558224
    MOV ECX,dword ptr [0x005b7620]      ; 0055822a | DAT_005b7620
    ADD EAX,EDX                         ; 00558230
    CMP EAX,ECX                         ; 00558232
    JL 0x00558360                       ; 00558234
        ;   XREF to: 00558360 (CONDITIONAL_JUMP)  ; LAB_00558360
    MOV EAX,ECX                         ; 0055823a
    SUB EAX,EDX                         ; 0055823c
    MOV EDI,dword ptr [EBX + 0x118]     ; 0055823e
        ;   Label: LAB_0055823e
    MOV dword ptr [ESP + 0x10],EAX      ; 00558244
    CMP EBP,EDI                         ; 00558248
    JLE 0x0055824e                      ; 0055824a
        ;   XREF to: 0055824e (CONDITIONAL_JUMP)  ; LAB_0055824e
    MOV EBP,EDI                         ; 0055824c
    MOV EAX,dword ptr [ESP + 0x10]      ; 0055824e
        ;   Label: LAB_0055824e
    MOV EDX,dword ptr [EBX + 0x11c]     ; 00558252
    CMP EAX,EDX                         ; 00558258
    JLE 0x00558260                      ; 0055825a
        ;   XREF to: 00558260 (CONDITIONAL_JUMP)  ; LAB_00558260
    MOV dword ptr [ESP + 0x10],EDX      ; 0055825c
    CMP dword ptr [0x005b7624],0x10     ; 00558260 | DAT_005b7624
        ;   Label: LAB_00558260
    JNZ 0x00558447                      ; 00558267
        ;   XREF to: 00558447 (CONDITIONAL_JUMP)  ; LAB_00558447
    XOR EDI,EDI                         ; 0055826d
    MOV EAX,dword ptr [ESP + 0x10]      ; 0055826f
    MOV dword ptr [ESP + 0x1c],EDI      ; 00558273
    TEST EAX,EAX                        ; 00558277
    JLE 0x005582b7                      ; 00558279
        ;   XREF to: 005582b7 (CONDITIONAL_JUMP)  ; LAB_005582b7
    MOV EAX,dword ptr [ESP + 0x48]      ; 0055827b
    MOV dword ptr [ESP + 0x18],EAX      ; 0055827f
    MOV EAX,dword ptr [ESP + 0x18]      ; 00558283
        ;   Label: LAB_00558283
    ADD EAX,dword ptr [EBX + 0x134]     ; 00558287
    TEST EAX,EAX                        ; 0055828d
    JL 0x0055829d                       ; 0055828f
        ;   XREF to: 0055829d (CONDITIONAL_JUMP)  ; LAB_0055829d
    CMP EAX,dword ptr [0x005b7620]      ; 00558291 | DAT_005b7620
    JL 0x0055836b                       ; 00558297
        ;   XREF to: 0055836b (CONDITIONAL_JUMP)  ; LAB_0055836b
    MOV ECX,dword ptr [ESP + 0x18]      ; 0055829d
        ;   Label: LAB_0055829d
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005582a1
    MOV EDI,dword ptr [ESP + 0x10]      ; 005582a5
    INC ECX                             ; 005582a9
    INC ESI                             ; 005582aa
    MOV dword ptr [ESP + 0x18],ECX      ; 005582ab
    MOV dword ptr [ESP + 0x1c],ESI      ; 005582af
    CMP ESI,EDI                         ; 005582b3
    JL 0x00558283                       ; 005582b5
        ;   XREF to: 00558283 (CONDITIONAL_JUMP)  ; LAB_00558283
    ADD ESP,0x24                        ; 005582b7
        ;   Label: LAB_005582b7
    POP EBP                             ; 005582ba
    POP EDI                             ; 005582bb
    POP ESI                             ; 005582bc
    POP EBX                             ; 005582bd
    RET                                 ; 005582be
    PUSH EBP                            ; 005582bf
        ;   Label: LAB_005582bf
    LEA EAX,[EBX + 0x18]                ; 005582c0
    PUSH EAX                            ; 005582c3
    CALL FUN_005649c0                   ; 005582c4
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005649c0()
    ADD ESP,0x8                         ; 005582c9
    TEST EAX,EAX                        ; 005582cc
    JNZ 0x005580db                      ; 005582ce
        ;   XREF to: 005580db (CONDITIONAL_JUMP)  ; LAB_005580db
    JMP 0x00558202                      ; 005582d4
        ;   XREF to: 00558202 (UNCONDITIONAL_JUMP)  ; LAB_00558202
    CALL FUN_00491140                   ; 005582d9
        ;   XREF to: 00491140 (UNCONDITIONAL_CALL)  ; undefined FUN_00491140()
        ;   Label: LAB_005582d9
    MOV EDX,dword ptr [0x005b7624]      ; 005582de | DAT_005b7624
    MOV dword ptr [ESP],EAX             ; 005582e4
    CMP EDX,0x10                        ; 005582e7
    JNZ 0x0055812c                      ; 005582ea
        ;   XREF to: 0055812c (CONDITIONAL_JUMP)  ; LAB_0055812c
    MOV CL,byte ptr [0x01c00624]        ; 005582f0 | DAT_01c00624
    MOV EDX,EAX                         ; 005582f6
    SHR EDX,CL                          ; 005582f8
    MOV CL,byte ptr [0x01c0062c]        ; 005582fa | DAT_01c0062c
    SHL EDX,CL                          ; 00558300
    AND EDX,0xff                        ; 00558302
    MOV CL,byte ptr [0x01c00630]        ; 00558308 | DAT_01c00630
    MOV ESI,EDX                         ; 0055830e
    MOV EDX,EAX                         ; 00558310
    SHR EDX,CL                          ; 00558312
    MOV CL,byte ptr [0x01c00638]        ; 00558314 | DAT_01c00638
    SHL EDX,CL                          ; 0055831a
    AND EDX,0xff                        ; 0055831c
    MOV CL,byte ptr [0x01c0063c]        ; 00558322 | DAT_01c0063c
    MOV EDI,EDX                         ; 00558328
    SHR EAX,CL                          ; 0055832a
    MOV CL,byte ptr [0x01c00644]        ; 0055832c | DAT_01c00644
    XOR EDX,EDX                         ; 00558332
    SHL EAX,CL                          ; 00558334
    XOR ECX,ECX                         ; 00558336
    MOV DX,SI                           ; 00558338
    MOV CX,DI                           ; 0055833b
    SHL EDX,0x10                        ; 0055833e
    SHL ECX,0x8                         ; 00558341
    AND EAX,0xff                        ; 00558344
    OR EDX,ECX                          ; 00558349
    AND EAX,0xffff                      ; 0055834b
    JMP 0x00558127                      ; 00558350
        ;   XREF to: 00558127 (UNCONDITIONAL_JUMP)  ; LAB_00558127
    MOV EBP,dword ptr [EBX + 0x120]     ; 00558355
        ;   Label: LAB_00558355
    JMP 0x00558220                      ; 0055835b
        ;   XREF to: 00558220 (UNCONDITIONAL_JUMP)  ; LAB_00558220
    MOV EAX,dword ptr [EBX + 0x124]     ; 00558360
        ;   Label: LAB_00558360
    JMP 0x0055823e                      ; 00558366
        ;   XREF to: 0055823e (UNCONDITIONAL_JUMP)  ; LAB_0055823e
    MOV ESI,dword ptr [EAX*0x4 + 0x1bd2fa0] ; 0055836b | DAT_01bd2fa0
        ;   Label: LAB_0055836b
    XOR EAX,EAX                         ; 00558372
    TEST EBP,EBP                        ; 00558374
    JLE 0x0055829d                      ; 00558376
        ;   XREF to: 0055829d (CONDITIONAL_JUMP)  ; LAB_0055829d
    MOV EDX,dword ptr [ESP + 0x44]      ; 0055837c
    ADD EDX,EDX                         ; 00558380
    ADD ESI,EDX                         ; 00558382
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00558384
        ;   Label: LAB_00558384
    IMUL EDX,dword ptr [EBX + 0x120]    ; 00558388
    MOV ECX,dword ptr [EBX + 0x14]      ; 0055838f
    ADD EDX,EAX                         ; 00558392
    MOV DX,word ptr [ECX + EDX*0x2]     ; 00558394
    CMP DX,0x7c1f                       ; 00558398
    JZ 0x00558436                       ; 0055839d
        ;   XREF to: 00558436 (CONDITIONAL_JUMP)  ; LAB_00558436
    XOR ECX,ECX                         ; 005583a3
    MOV CX,DX                           ; 005583a5
    MOV EDI,ECX                         ; 005583a8
    SAR EDI,0xa                         ; 005583aa
    SAR ECX,0x5                         ; 005583ad
    SHL ECX,0x3                         ; 005583b0
    SHL EDI,0x3                         ; 005583b3
    AND ECX,0xff                        ; 005583b6
    AND EDI,0xff                        ; 005583bc
    MOV dword ptr [ESP + 0x20],ECX      ; 005583c2
    MOV dword ptr [ESP + 0x4],EDI       ; 005583c6
    XOR ECX,ECX                         ; 005583ca
    MOV EDI,dword ptr [ESP + 0x4]       ; 005583cc
    MOV CX,DI                           ; 005583d0
    MOV dword ptr [ESP + 0x4],ECX       ; 005583d3
    MOV EDI,dword ptr [ESP + 0x4]       ; 005583d7
    MOV CL,byte ptr [0x01c0062c]        ; 005583db | DAT_01c0062c
    SHR EDI,CL                          ; 005583e1
    MOV CL,byte ptr [0x01c00624]        ; 005583e3 | DAT_01c00624
    SHL EDI,CL                          ; 005583e9
    XOR ECX,ECX                         ; 005583eb
    MOV CX,word ptr [ESP + 0x20]        ; 005583ed
    MOV dword ptr [ESP + 0x4],ECX       ; 005583f2
    MOV dword ptr [ESP + 0x8],EDI       ; 005583f6
    MOV EDI,dword ptr [ESP + 0x4]       ; 005583fa
    MOV CL,byte ptr [0x01c00638]        ; 005583fe | DAT_01c00638
    SHR EDI,CL                          ; 00558404
    MOV CL,byte ptr [0x01c00630]        ; 00558406 | DAT_01c00630
    SHL EDI,CL                          ; 0055840c
    SHL EDX,0x3                         ; 0055840e
    MOV ECX,EDI                         ; 00558411
    MOV EDI,dword ptr [ESP + 0x8]       ; 00558413
    XOR DH,DH                           ; 00558417
    OR EDI,ECX                          ; 00558419
    MOV CL,byte ptr [0x01c00644]        ; 0055841b | DAT_01c00644
    AND EDX,0xffff                      ; 00558421
    SHR EDX,CL                          ; 00558427
    MOV CL,byte ptr [0x01c0063c]        ; 00558429 | DAT_01c0063c
    SHL EDX,CL                          ; 0055842f
    OR EDX,EDI                          ; 00558431
    MOV word ptr [ESI],DX               ; 00558433
    INC EAX                             ; 00558436
        ;   Label: LAB_00558436
    ADD ESI,0x2                         ; 00558437
    CMP EAX,EBP                         ; 0055843a
    JGE 0x0055829d                      ; 0055843c
        ;   XREF to: 0055829d (CONDITIONAL_JUMP)  ; LAB_0055829d
    JMP 0x00558384                      ; 00558442
        ;   XREF to: 00558384 (UNCONDITIONAL_JUMP)  ; LAB_00558384
    MOV ESI,dword ptr [ESP + 0x10]      ; 00558447
        ;   Label: LAB_00558447
    XOR EDI,EDI                         ; 0055844b
    TEST ESI,ESI                        ; 0055844d
    JLE 0x005582b7                      ; 0055844f
        ;   XREF to: 005582b7 (CONDITIONAL_JUMP)  ; LAB_005582b7
    MOV EAX,dword ptr [ESP + 0x48]      ; 00558455
    MOV dword ptr [ESP + 0x14],EAX      ; 00558459
    MOV EAX,dword ptr [ESP + 0x14]      ; 0055845d
        ;   Label: LAB_0055845d
    ADD EAX,dword ptr [EBX + 0x134]     ; 00558461
    TEST EAX,EAX                        ; 00558467
    JL 0x00558473                       ; 00558469
        ;   XREF to: 00558473 (CONDITIONAL_JUMP)  ; LAB_00558473
    CMP EAX,dword ptr [0x005b7620]      ; 0055846b | DAT_005b7620
    JL 0x0055848b                       ; 00558471
        ;   XREF to: 0055848b (CONDITIONAL_JUMP)  ; LAB_0055848b
    MOV EDX,dword ptr [ESP + 0x14]      ; 00558473
        ;   Label: LAB_00558473
    MOV ECX,dword ptr [ESP + 0x10]      ; 00558477
    INC EDX                             ; 0055847b
    INC EDI                             ; 0055847c
    MOV dword ptr [ESP + 0x14],EDX      ; 0055847d
    CMP EDI,ECX                         ; 00558481
    JGE 0x005582b7                      ; 00558483
        ;   XREF to: 005582b7 (CONDITIONAL_JUMP)  ; LAB_005582b7
    JMP 0x0055845d                      ; 00558489
        ;   XREF to: 0055845d (UNCONDITIONAL_JUMP)  ; LAB_0055845d
    MOV EDX,dword ptr [EAX*0x4 + 0x1bd2fa0] ; 0055848b | DAT_01bd2fa0
        ;   Label: LAB_0055848b
    XOR EAX,EAX                         ; 00558492
    TEST EBP,EBP                        ; 00558494
    JLE 0x00558473                      ; 00558496
        ;   XREF to: 00558473 (CONDITIONAL_JUMP)  ; LAB_00558473
    MOV ESI,dword ptr [ESP + 0x44]      ; 00558498
    SHL ESI,0x2                         ; 0055849c
    ADD ESI,EDX                         ; 0055849f
    MOV EDX,dword ptr [EBX + 0x120]     ; 005584a1
        ;   Label: LAB_005584a1
    IMUL EDX,EDI                        ; 005584a7
    ADD EDX,EAX                         ; 005584aa
    LEA ECX,[EDX*0x4 + 0x0]             ; 005584ac
    MOV EDX,dword ptr [EBX + 0x14]      ; 005584b3
    MOV EDX,dword ptr [ECX + EDX*0x1]   ; 005584b6
    CMP EDX,0xff00ff                    ; 005584b9
    JZ 0x005584c3                       ; 005584bf
        ;   XREF to: 005584c3 (CONDITIONAL_JUMP)  ; LAB_005584c3
    MOV dword ptr [ESI],EDX             ; 005584c1
    INC EAX                             ; 005584c3
        ;   Label: LAB_005584c3
    ADD ESI,0x4                         ; 005584c4
    CMP EAX,EBP                         ; 005584c7
    JGE 0x00558473                      ; 005584c9
        ;   XREF to: 00558473 (CONDITIONAL_JUMP)  ; LAB_00558473
    JMP 0x005584a1                      ; 005584cb
        ;   XREF to: 005584a1 (UNCONDITIONAL_JUMP)  ; LAB_005584a1

