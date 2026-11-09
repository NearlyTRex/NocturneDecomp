; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitSpanBasedSprite_FUN_00435310(void *sprite_data,void *span_data,int screen_x,int screen_y,int src_x,int src_y,int width,int height)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; void *           Stack[0x8]:4   span_data
; int              Stack[0xc]:4   screen_x
; int              Stack[0x10]:4   screen_y
; int              Stack[0x14]:4   src_x
; int              Stack[0x18]:4   src_y
; int              Stack[0x1c]:4   width
; int              Stack[0x20]:4   height
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_00434e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435310
        ;   Label: cockpit_ckptutil.c_blitSpanBasedSprite_FUN_00435310
    PUSH ESI                            ; 00435311
    PUSH EDI                            ; 00435312
    PUSH EBP                            ; 00435313
    SUB ESP,0x34                        ; 00435314
    MOV EDI,dword ptr [ESP + 0x54]      ; 00435317
    MOV EDX,dword ptr [0x01c5faec]      ; 0043531b | DAT_01c5faec
    MOV EAX,[0x01c5faf0]                ; 00435321 | DAT_01c5faf0
    SUB EAX,EDX                         ; 00435326
    MOV dword ptr [ESP + 0x10],EAX      ; 00435328
    MOV EAX,[0x005fba18]                ; 0043532c | DAT_005fba18
    MOV EDX,EAX                         ; 00435331
    SAR EDX,0x1f                        ; 00435333
    SUB EAX,EDX                         ; 00435336
    SAR EAX,0x1                         ; 00435338
    MOV EBX,dword ptr [ESP + 0x58]      ; 0043533a
    ADD EBX,EAX                         ; 0043533e
    MOV ECX,dword ptr [ESP + 0x48]      ; 00435340
    LEA ESI,[EBX + 0x1]                 ; 00435344
    TEST ECX,ECX                        ; 00435347
    JNZ 0x00435353                      ; 00435349
        ;   XREF to: 00435353 (CONDITIONAL_JUMP)  ; LAB_00435353
    ADD ESP,0x34                        ; 0043534b
        ;   Label: LAB_0043534b
    POP EBP                             ; 0043534e
    POP EDI                             ; 0043534f
    POP ESI                             ; 00435350
    POP EBX                             ; 00435351
    RET                                 ; 00435352
    MOV EAX,dword ptr [ESP + 0x60]      ; 00435353
        ;   Label: LAB_00435353
    IMUL EAX,EDI                        ; 00435357
    ADD EAX,dword ptr [ESP + 0x50]      ; 0043535a
    LEA EDX,[ECX + EAX*0x1]             ; 0043535e
    MOV EBP,EDI                         ; 00435361
    MOV dword ptr [ESP + 0x48],EDX      ; 00435363
    CALL cockpit_ckptutil.c_FUN_00434e80 ; 00435367
        ;   XREF to: 00434e80 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_00434e80()
    SHL EBP,0x5                         ; 0043536c
    MOV EDX,dword ptr [ESP + 0x64]      ; 0043536f
    MOV dword ptr [ESP + 0x30],EAX      ; 00435373
    MOV EAX,EDX                         ; 00435377
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00435379
    SHL EAX,0x5                         ; 0043537d
    ADD EBP,EDI                         ; 00435380
    ADD EAX,EDX                         ; 00435382
    SHL EBP,0x2                         ; 00435384
    SHL EAX,0x2                         ; 00435387
    ADD ECX,EDI                         ; 0043538a
    MOV dword ptr [ESP],EAX             ; 0043538c
    MOV EAX,[0x005fba20]                ; 0043538f | DAT_005fba20
    SHL ECX,0x2                         ; 00435394
    CMP EAX,0x8                         ; 00435397
    JNZ 0x0043545b                      ; 0043539a
        ;   XREF to: 0043545b (CONDITIONAL_JUMP)  ; LAB_0043545b
    MOV EDX,dword ptr [ESP + 0x50]      ; 004353a0
    MOV EAX,dword ptr [ECX + 0x1c5faec] ; 004353a4
    ADD EDX,EAX                         ; 004353aa
    MOV ECX,dword ptr [ESP + 0x64]      ; 004353ac
    MOV dword ptr [ESP + 0x28],EDX      ; 004353b0
    CMP EDI,ECX                         ; 004353b4
    JGE 0x0043534b                      ; 004353b6
        ;   XREF to: 0043534b (CONDITIONAL_JUMP)  ; LAB_0043534b
    MOV EAX,dword ptr [ESP]             ; 004353b8
    MOV dword ptr [ESP + 0x14],EBP      ; 004353bb
    MOV dword ptr [ESP + 0xc],EAX       ; 004353bf
    MOV EAX,dword ptr [ESP + 0x14]      ; 004353c3
        ;   Label: LAB_004353c3
    XOR EBP,EBP                         ; 004353c7
    XOR EDI,EDI                         ; 004353c9
    MOV dword ptr [ESP + 0x20],EAX      ; 004353cb
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004353cf
        ;   Label: LAB_004353cf
    ADD EAX,dword ptr [ESP + 0x20]      ; 004353d3
    CMP EDI,dword ptr [EAX]             ; 004353d7
    JGE 0x004353f5                      ; 004353d9
        ;   XREF to: 004353f5 (CONDITIONAL_JUMP)  ; LAB_004353f5
    LEA EDX,[EAX + EBP*0x1]             ; 004353db
    MOV EAX,dword ptr [EDX + 0x4]       ; 004353de
    MOV EDX,dword ptr [EDX + 0x44]      ; 004353e1
    ADD EDX,EAX                         ; 004353e4
    DEC EDX                             ; 004353e6
    CMP EAX,EBX                         ; 004353e7
    JGE 0x00435431                      ; 004353e9
        ;   XREF to: 00435431 (CONDITIONAL_JUMP)  ; LAB_00435431
    CMP EDX,EBX                         ; 004353eb
    JGE 0x0043542f                      ; 004353ed
        ;   XREF to: 0043542f (CONDITIONAL_JUMP)  ; LAB_0043542f
    INC EDI                             ; 004353ef
        ;   Label: LAB_004353ef
    ADD EBP,0x4                         ; 004353f0
    JMP 0x004353cf                      ; 004353f3
        ;   XREF to: 004353cf (UNCONDITIONAL_JUMP)  ; LAB_004353cf
    MOV EDI,dword ptr [ESP + 0x14]      ; 004353f5
        ;   Label: LAB_004353f5
    MOV EAX,dword ptr [ESP + 0x10]      ; 004353f9
    MOV EBP,dword ptr [ESP + 0x28]      ; 004353fd
    MOV EDX,dword ptr [ESP + 0x48]      ; 00435401
    MOV ECX,dword ptr [ESP + 0xc]       ; 00435405
    DEC EBX                             ; 00435409
    INC ESI                             ; 0043540a
    ADD EDI,0x84                        ; 0043540b
    ADD EBP,EAX                         ; 00435411
    MOV EAX,dword ptr [ESP + 0x60]      ; 00435413
    MOV dword ptr [ESP + 0x14],EDI      ; 00435417
    ADD EDX,EAX                         ; 0043541b
    MOV dword ptr [ESP + 0x28],EBP      ; 0043541d
    MOV dword ptr [ESP + 0x48],EDX      ; 00435421
    CMP EDI,ECX                         ; 00435425
    JGE 0x0043534b                      ; 00435427
        ;   XREF to: 0043534b (CONDITIONAL_JUMP)  ; LAB_0043534b
    JMP 0x004353c3                      ; 0043542d
        ;   XREF to: 004353c3 (UNCONDITIONAL_JUMP)  ; LAB_004353c3
    MOV EAX,EBX                         ; 0043542f
        ;   Label: LAB_0043542f
    CMP EDX,ESI                         ; 00435431
        ;   Label: LAB_00435431
    JLE 0x0043543b                      ; 00435433
        ;   XREF to: 0043543b (CONDITIONAL_JUMP)  ; LAB_0043543b
    CMP EAX,ESI                         ; 00435435
    JG 0x004353ef                       ; 00435437
        ;   XREF to: 004353ef (CONDITIONAL_JUMP)  ; LAB_004353ef
    MOV EDX,ESI                         ; 00435439
    SUB EDX,EAX                         ; 0043543b
        ;   Label: LAB_0043543b
    INC EDX                             ; 0043543d
    PUSH EDX                            ; 0043543e
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0043543f
    ADD EDX,EAX                         ; 00435443
    PUSH EDX                            ; 00435445
    ADD EAX,dword ptr [ESP + 0x30]      ; 00435446
    PUSH EAX                            ; 0043544a
    CALL dword ptr [ESP + 0x3c]         ; 0043544b
    ADD ESP,0xc                         ; 0043544f
    INC EDI                             ; 00435452
    ADD EBP,0x4                         ; 00435453
    JMP 0x004353cf                      ; 00435456
        ;   XREF to: 004353cf (UNCONDITIONAL_JUMP)  ; LAB_004353cf
    MOV EAX,dword ptr [ESP + 0x50]      ; 0043545b
        ;   Label: LAB_0043545b
    MOV EDX,dword ptr [ECX + 0x1c5faec] ; 0043545f
    ADD EAX,EAX                         ; 00435465
    ADD EDX,EAX                         ; 00435467
    MOV EAX,dword ptr [ESP + 0x10]      ; 00435469
    MOV dword ptr [ESP + 0x2c],EDX      ; 0043546d
    MOV EDX,EAX                         ; 00435471
    SAR EDX,0x1f                        ; 00435473
    SUB EAX,EDX                         ; 00435476
    SAR EAX,0x1                         ; 00435478
    MOV EDX,dword ptr [ESP + 0x64]      ; 0043547a
    MOV dword ptr [ESP + 0x10],EAX      ; 0043547e
    CMP EDI,EDX                         ; 00435482
    JGE 0x0043534b                      ; 00435484
        ;   XREF to: 0043534b (CONDITIONAL_JUMP)  ; LAB_0043534b
    MOV EAX,dword ptr [ESP + 0x58]      ; 0043548a
    ADD EAX,EAX                         ; 0043548e
    MOV dword ptr [ESP + 0x1c],EAX      ; 00435490
    MOV EAX,dword ptr [ESP + 0x10]      ; 00435494
    ADD EAX,EAX                         ; 00435498
    MOV dword ptr [ESP + 0x4],EAX       ; 0043549a
    MOV EAX,dword ptr [ESP]             ; 0043549e
    MOV dword ptr [ESP + 0x18],EBP      ; 004354a1
    MOV dword ptr [ESP + 0x8],EAX       ; 004354a5
    MOV EAX,dword ptr [ESP + 0x18]      ; 004354a9
        ;   Label: LAB_004354a9
    XOR EBP,EBP                         ; 004354ad
    XOR EDI,EDI                         ; 004354af
    MOV dword ptr [ESP + 0x24],EAX      ; 004354b1
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004354b5
        ;   Label: LAB_004354b5
    ADD EAX,dword ptr [ESP + 0x24]      ; 004354b9
    CMP EDI,dword ptr [EAX]             ; 004354bd
    JGE 0x004354db                      ; 004354bf
        ;   XREF to: 004354db (CONDITIONAL_JUMP)  ; LAB_004354db
    LEA EDX,[EAX + EBP*0x1]             ; 004354c1
    MOV EAX,dword ptr [EDX + 0x4]       ; 004354c4
    MOV EDX,dword ptr [EDX + 0x44]      ; 004354c7
    ADD EDX,EAX                         ; 004354ca
    DEC EDX                             ; 004354cc
    CMP EAX,EBX                         ; 004354cd
    JGE 0x00435517                      ; 004354cf
        ;   XREF to: 00435517 (CONDITIONAL_JUMP)  ; LAB_00435517
    CMP EDX,EBX                         ; 004354d1
    JGE 0x00435515                      ; 004354d3
        ;   XREF to: 00435515 (CONDITIONAL_JUMP)  ; LAB_00435515
    INC EDI                             ; 004354d5
        ;   Label: LAB_004354d5
    ADD EBP,0x4                         ; 004354d6
    JMP 0x004354b5                      ; 004354d9
        ;   XREF to: 004354b5 (UNCONDITIONAL_JUMP)  ; LAB_004354b5
    MOV EDI,dword ptr [ESP + 0x18]      ; 004354db
        ;   Label: LAB_004354db
    MOV EAX,dword ptr [ESP + 0x4]       ; 004354df
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004354e3
    MOV EDX,dword ptr [ESP + 0x48]      ; 004354e7
    MOV ECX,dword ptr [ESP + 0x8]       ; 004354eb
    DEC EBX                             ; 004354ef
    INC ESI                             ; 004354f0
    ADD EDI,0x84                        ; 004354f1
    ADD EBP,EAX                         ; 004354f7
    MOV EAX,dword ptr [ESP + 0x60]      ; 004354f9
    MOV dword ptr [ESP + 0x18],EDI      ; 004354fd
    ADD EDX,EAX                         ; 00435501
    MOV dword ptr [ESP + 0x2c],EBP      ; 00435503
    MOV dword ptr [ESP + 0x48],EDX      ; 00435507
    CMP EDI,ECX                         ; 0043550b
    JGE 0x0043534b                      ; 0043550d
        ;   XREF to: 0043534b (CONDITIONAL_JUMP)  ; LAB_0043534b
    JMP 0x004354a9                      ; 00435513
        ;   XREF to: 004354a9 (UNCONDITIONAL_JUMP)  ; LAB_004354a9
    MOV EAX,EBX                         ; 00435515
        ;   Label: LAB_00435515
    CMP EDX,ESI                         ; 00435517
        ;   Label: LAB_00435517
    JLE 0x00435521                      ; 00435519
        ;   XREF to: 00435521 (CONDITIONAL_JUMP)  ; LAB_00435521
    CMP EAX,ESI                         ; 0043551b
    JG 0x004354d5                       ; 0043551d
        ;   XREF to: 004354d5 (CONDITIONAL_JUMP)  ; LAB_004354d5
    MOV EDX,ESI                         ; 0043551f
    SUB EDX,EAX                         ; 00435521
        ;   Label: LAB_00435521
    INC EDX                             ; 00435523
    PUSH EDX                            ; 00435524
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00435525
    ADD EDX,EAX                         ; 00435529
    PUSH EDX                            ; 0043552b
    ADD EAX,EAX                         ; 0043552c
    MOV EDX,dword ptr [ESP + 0x34]      ; 0043552e
    MOV ECX,dword ptr [ESP + 0x24]      ; 00435532
    ADD EAX,EDX                         ; 00435536
    SUB EAX,ECX                         ; 00435538
    PUSH EAX                            ; 0043553a
    CALL dword ptr [ESP + 0x3c]         ; 0043553b
    ADD ESP,0xc                         ; 0043553f
    INC EDI                             ; 00435542
    ADD EBP,0x4                         ; 00435543
    JMP 0x004354b5                      ; 00435546
        ;   XREF to: 004354b5 (UNCONDITIONAL_JUMP)  ; LAB_004354b5

