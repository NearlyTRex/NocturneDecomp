; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0052e120(int *param_1)
;
;
; XREF[1]:
;   FUN_004d7e90 at 004d7f01
;
; Referenced Globals:
;   undefined4 DAT_005ebdf8
;   undefined4 DAT_005ebe00
;   undefined4 DAT_005ebe08
;   undefined4 DAT_005ebe10
;   undefined4 DAT_0061abc0
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061f2a4
;   undefined4 DAT_0061f650
;   undefined4 DAT_00622580
;   undefined4 DAT_00622584
;   undefined4 DAT_006260e8
;   undefined4 DAT_01c4f020
;   undefined4 DAT_01d51d9c
;   undefined4 DAT_01d51da0
;   ... and 4 more
;
; Called Functions:
;   FUN_00401fe0
;   FUN_00402f30
;   FUN_004032b0
;   FUN_0040cb80
;   FUN_004942e0
;   FUN_00494400
;   FUN_00496150
;   FUN_0051a3f0
;   FUN_0051bdc0
;   FUN_0051c0a0
;   FUN_0052cab0
;   FUN_0052cf90
;   FUN_0052d360
;   FUN_0052ea10
;   FUN_0052ebd0
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052e120
        ;   Label: FUN_0052e120
    PUSH ESI                            ; 0052e121
    PUSH EDI                            ; 0052e122
    PUSH EBP                            ; 0052e123
    MOV EBP,ESP                         ; 0052e124
    SUB ESP,0x124                       ; 0052e126
    AND ESP,0xfffffff8                  ; 0052e12c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052e12f
    CMP dword ptr [EAX],0x0             ; 0052e132
    JZ 0x0052e484                       ; 0052e135
        ;   XREF to: 0052e484 (CONDITIONAL_JUMP)  ; LAB_0052e484
    MOV EAX,[0x006260e8]                ; 0052e13b | DAT_006260e8
    MOV dword ptr [ESP + 0x108],EAX     ; 0052e140
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052e147
    MOV EAX,dword ptr [EAX + 0x11c]     ; 0052e14a
    SHL EAX,0x2                         ; 0052e150
    MOV EDX,EAX                         ; 0052e153
    SHL EAX,0x5                         ; 0052e155
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052e158
    SUB EAX,EDX                         ; 0052e15b
    ADD EAX,EBX                         ; 0052e15d
    MOV dword ptr [EAX + 0x5c],0x1      ; 0052e15f
    MOV EAX,dword ptr [EBX + 0x11c]     ; 0052e166
    SHL EAX,0x2                         ; 0052e16c
    MOV EDX,EAX                         ; 0052e16f
    SHL EAX,0x5                         ; 0052e171
    SUB EAX,EDX                         ; 0052e174
    ADD EAX,EBX                         ; 0052e176
    XOR ECX,ECX                         ; 0052e178
    MOV dword ptr [EAX + 0x64],ECX      ; 0052e17a
    MOV dword ptr [0x006260e8],ECX      ; 0052e17d | DAT_006260e8
    MOV EDI,dword ptr [EBX]             ; 0052e183
    MOV dword ptr [EBX + 0x4],0x1       ; 0052e185
    CMP EDI,0x1                         ; 0052e18c
    JZ 0x0052e436                       ; 0052e18f
        ;   XREF to: 0052e436 (CONDITIONAL_JUMP)  ; LAB_0052e436
    PUSH EBX                            ; 0052e195
    CALL FUN_0052fd80                   ; 0052e196
        ;   XREF to: 0052fd80 (UNCONDITIONAL_CALL)  ; undefined FUN_0052fd80()
    ADD ESP,0x4                         ; 0052e19b
        ;   Label: LAB_0052e19b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052e19e
    ADD EAX,0x120                       ; 0052e1a1
    MOV dword ptr [ESP + 0x10c],EAX     ; 0052e1a6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052e1ad
        ;   Label: LAB_0052e1ad
    CMP dword ptr [EAX],0x0             ; 0052e1b0
    JZ 0x0052e44c                       ; 0052e1b3
        ;   XREF to: 0052e44c (CONDITIONAL_JUMP)  ; LAB_0052e44c
    CALL FUN_0057dc40                   ; 0052e1b9
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; undefined FUN_0057dc40()
    MOV EBX,dword ptr [ESP + 0x10c]     ; 0052e1be
    PUSH EBX                            ; 0052e1c5
    PUSH 0x5ebd60                       ; 0052e1c6
    LEA EAX,[ESP + 0x10]                ; 0052e1cb
    PUSH EAX                            ; 0052e1cf
    CALL FUN_005bfb40                   ; 0052e1d0
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0xc                         ; 0052e1d5
    PUSH 0xb                            ; 0052e1d8
    PUSH 0x0                            ; 0052e1da
    LEA EAX,[ESP + 0x10]                ; 0052e1dc
    PUSH EAX                            ; 0052e1e0
    CALL FUN_00401fe0                   ; 0052e1e1
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 0052e1e6
    MOV ESI,dword ptr [0x01d51dac]      ; 0052e1e9 | DAT_01d51dac
    PUSH ESI                            ; 0052e1ef
    PUSH 0x5ebd6c                       ; 0052e1f0
    LEA EAX,[ESP + 0x10]                ; 0052e1f5
    PUSH EAX                            ; 0052e1f9
    CALL FUN_005bfb40                   ; 0052e1fa
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0xc                         ; 0052e1ff
    PUSH 0xb                            ; 0052e202
    PUSH 0x190                          ; 0052e204
    LEA EAX,[ESP + 0x10]                ; 0052e209
    PUSH EAX                            ; 0052e20d
    CALL FUN_00401fe0                   ; 0052e20e
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 0052e213
    PUSH 0x21                           ; 0052e216
    PUSH 0x0                            ; 0052e218
    PUSH 0x5ebd80                       ; 0052e21a
    CALL FUN_00401fe0                   ; 0052e21f
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 0052e224
    PUSH 0x21                           ; 0052e227
    PUSH 0x64                           ; 0052e229
    PUSH 0x5ebd87                       ; 0052e22b
    CALL FUN_00401fe0                   ; 0052e230
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 0052e235
    PUSH 0x21                           ; 0052e238
    PUSH 0xc8                           ; 0052e23a
    PUSH 0x5ebd8a                       ; 0052e23f
    CALL FUN_00401fe0                   ; 0052e244
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 0052e249
    PUSH 0x21                           ; 0052e24c
    PUSH 0x12c                          ; 0052e24e
    PUSH 0x5ebd8f                       ; 0052e253
    CALL FUN_00401fe0                   ; 0052e258
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 0052e25d
    PUSH 0x21                           ; 0052e260
    PUSH 0x190                          ; 0052e262
    PUSH 0x5ebd95                       ; 0052e267
    CALL FUN_00401fe0                   ; 0052e26c
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 0052e271
    PUSH 0x21                           ; 0052e274
    PUSH 0x1f4                          ; 0052e276
    PUSH 0x5ebd9e                       ; 0052e27b
    CALL FUN_00401fe0                   ; 0052e280
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    MOV EAX,[0x0061b498]                ; 0052e285 | DAT_0061b498
    ADD ESP,0xc                         ; 0052e28a
    DEC EAX                             ; 0052e28d
    PUSH EAX                            ; 0052e28e
    PUSH 0x31                           ; 0052e28f
    MOV EDI,0xff                        ; 0052e291
    PUSH 0x0                            ; 0052e296
    MOV dword ptr [0x01c4f020],EDI      ; 0052e298 | DAT_01c4f020
    CALL FUN_00402f30                   ; 0052e29e
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00402f30()
    ADD ESP,0xc                         ; 0052e2a3
    XOR EAX,EAX                         ; 0052e2a6
    MOV EBX,0x37                        ; 0052e2a8
    MOV dword ptr [ESP + 0x118],EAX     ; 0052e2ad
    MOV dword ptr [ESP + 0x114],EAX     ; 0052e2b4
    MOV ESI,dword ptr [0x00622580]      ; 0052e2bb | DAT_00622580
        ;   Label: LAB_0052e2bb
    MOV EAX,dword ptr [ESP + 0x118]     ; 0052e2c1
    CMP EAX,dword ptr [ESI + 0x1c]      ; 0052e2c8
    JGE 0x0052e537                      ; 0052e2cb
        ;   XREF to: 0052e537 (CONDITIONAL_JUMP)  ; LAB_0052e537
    PUSH EBX                            ; 0052e2d1
    MOV EAX,dword ptr [ESP + 0x118]     ; 0052e2d2
    ADD ESI,0x20                        ; 0052e2d9
    PUSH 0x0                            ; 0052e2dc
    ADD EAX,ESI                         ; 0052e2de
    PUSH EAX                            ; 0052e2e0
    MOV dword ptr [ESP + 0x128],EAX     ; 0052e2e1
    CALL FUN_00401fe0                   ; 0052e2e8
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 0052e2ed
    MOV ESI,dword ptr [ESP + 0x11c]     ; 0052e2f0
    MOV EAX,[0x02c8ae4c]                ; 0052e2f7 | DAT_02c8ae4c
    MOV EDX,dword ptr [ESI + 0x1c]      ; 0052e2fc
    ADD ESI,0x1c                        ; 0052e2ff
    CMP EAX,EDX                         ; 0052e302
    JNZ 0x0052e48d                      ; 0052e304
        ;   XREF to: 0052e48d (CONDITIONAL_JUMP)  ; LAB_0052e48d
    MOV ESI,0x5ebdab                    ; 0052e30a
    LEA EDI,[ESP + 0x8]                 ; 0052e30f
    PUSH EDI                            ; 0052e313
    MOV AL,byte ptr [ESI]               ; 0052e314
        ;   Label: LAB_0052e314
    MOV byte ptr [EDI],AL               ; 0052e316
    CMP AL,0x0                          ; 0052e318
    JZ 0x0052e32c                       ; 0052e31a
        ;   XREF to: 0052e32c (CONDITIONAL_JUMP)  ; LAB_0052e32c
    MOV AL,byte ptr [ESI + 0x1]         ; 0052e31c
    ADD ESI,0x2                         ; 0052e31f
    MOV byte ptr [EDI + 0x1],AL         ; 0052e322
    ADD EDI,0x2                         ; 0052e325
    CMP AL,0x0                          ; 0052e328
    JNZ 0x0052e314                      ; 0052e32a
        ;   XREF to: 0052e314 (CONDITIONAL_JUMP)  ; LAB_0052e314
    POP EDI                             ; 0052e32c
        ;   Label: LAB_0052e32c
    PUSH EBX                            ; 0052e32d
        ;   Label: LAB_0052e32d
    PUSH 0x64                           ; 0052e32e
    LEA EAX,[ESP + 0x10]                ; 0052e330
    PUSH EAX                            ; 0052e334
    CALL FUN_00401fe0                   ; 0052e335
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 0052e33a
    MOV EAX,[0x00622580]                ; 0052e33d | DAT_00622580
    MOV EDX,dword ptr [ESP + 0x118]     ; 0052e342
    CMP EDX,dword ptr [EAX + 0x11c]     ; 0052e349
    JNZ 0x0052e4a0                      ; 0052e34f
        ;   XREF to: 0052e4a0 (CONDITIONAL_JUMP)  ; LAB_0052e4a0
    MOV ESI,0x5ebdb3                    ; 0052e355
    LEA EDI,[ESP + 0x8]                 ; 0052e35a
        ;   Label: LAB_0052e35a
    PUSH EDI                            ; 0052e35e
    MOV AL,byte ptr [ESI]               ; 0052e35f
        ;   Label: LAB_0052e35f
    MOV byte ptr [EDI],AL               ; 0052e361
    CMP AL,0x0                          ; 0052e363
    JZ 0x0052e377                       ; 0052e365
        ;   XREF to: 0052e377 (CONDITIONAL_JUMP)  ; LAB_0052e377
    MOV AL,byte ptr [ESI + 0x1]         ; 0052e367
    ADD ESI,0x2                         ; 0052e36a
    MOV byte ptr [EDI + 0x1],AL         ; 0052e36d
    ADD EDI,0x2                         ; 0052e370
    CMP AL,0x0                          ; 0052e373
    JNZ 0x0052e35f                      ; 0052e375
        ;   XREF to: 0052e35f (CONDITIONAL_JUMP)  ; LAB_0052e35f
    POP EDI                             ; 0052e377
        ;   Label: LAB_0052e377
    PUSH EBX                            ; 0052e378
        ;   Label: LAB_0052e378
    PUSH 0xc8                           ; 0052e379
    LEA EAX,[ESP + 0x10]                ; 0052e37e
    PUSH EAX                            ; 0052e382
    CALL FUN_00401fe0                   ; 0052e383
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 0052e388
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0052e38b
    CMP dword ptr [EAX + 0x44],0x0      ; 0052e392
    JZ 0x0052e4f8                       ; 0052e396
        ;   XREF to: 0052e4f8 (CONDITIONAL_JUMP)  ; LAB_0052e4f8
    MOV ESI,0x5ebdc2                    ; 0052e39c
    LEA EDI,[ESP + 0x8]                 ; 0052e3a1
        ;   Label: LAB_0052e3a1
    PUSH EDI                            ; 0052e3a5
    MOV AL,byte ptr [ESI]               ; 0052e3a6
        ;   Label: LAB_0052e3a6
    MOV byte ptr [EDI],AL               ; 0052e3a8
    CMP AL,0x0                          ; 0052e3aa
    JZ 0x0052e3be                       ; 0052e3ac
        ;   XREF to: 0052e3be (CONDITIONAL_JUMP)  ; LAB_0052e3be
    MOV AL,byte ptr [ESI + 0x1]         ; 0052e3ae
    ADD ESI,0x2                         ; 0052e3b1
    MOV byte ptr [EDI + 0x1],AL         ; 0052e3b4
    ADD EDI,0x2                         ; 0052e3b7
    CMP AL,0x0                          ; 0052e3ba
    JNZ 0x0052e3a6                      ; 0052e3bc
        ;   XREF to: 0052e3a6 (CONDITIONAL_JUMP)  ; LAB_0052e3a6
    POP EDI                             ; 0052e3be
        ;   Label: LAB_0052e3be
    PUSH EBX                            ; 0052e3bf
    PUSH 0x12c                          ; 0052e3c0
    LEA EAX,[ESP + 0x10]                ; 0052e3c5
    PUSH EAX                            ; 0052e3c9
    CALL FUN_00401fe0                   ; 0052e3ca
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 0052e3cf
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0052e3d2
    MOV EDX,dword ptr [EAX + 0x14]      ; 0052e3d9
    PUSH EDX                            ; 0052e3dc
    PUSH 0x5ebdd2                       ; 0052e3dd
    LEA EAX,[ESP + 0x10]                ; 0052e3e2
    PUSH EAX                            ; 0052e3e6
    CALL FUN_005bfb40                   ; 0052e3e7
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0xc                         ; 0052e3ec
    PUSH EBX                            ; 0052e3ef
    PUSH 0x190                          ; 0052e3f0
    LEA EAX,[ESP + 0x10]                ; 0052e3f5
    PUSH EAX                            ; 0052e3f9
    CALL FUN_00401fe0                   ; 0052e3fa
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 0052e3ff
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052e402
    CMP dword ptr [EAX],0x1             ; 0052e405
    JZ 0x0052e502                       ; 0052e408
        ;   XREF to: 0052e502 (CONDITIONAL_JUMP)  ; LAB_0052e502
    MOV EDI,dword ptr [ESP + 0x114]     ; 0052e40e
        ;   Label: LAB_0052e40e
    MOV EAX,dword ptr [ESP + 0x118]     ; 0052e415
    ADD EBX,0xb                         ; 0052e41c
    ADD EDI,0x7c                        ; 0052e41f
    INC EAX                             ; 0052e422
    MOV dword ptr [ESP + 0x114],EDI     ; 0052e423
    MOV dword ptr [ESP + 0x118],EAX     ; 0052e42a
    JMP 0x0052e2bb                      ; 0052e431
        ;   XREF to: 0052e2bb (UNCONDITIONAL_JUMP)  ; LAB_0052e2bb
    CALL FUN_005c084c                   ; 0052e436
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; undefined FUN_005c084c()
        ;   Label: LAB_0052e436
    PUSH EBX                            ; 0052e43b
    MOV dword ptr [EBX + 0x174],EAX     ; 0052e43c
    CALL FUN_0052fa80                   ; 0052e442
        ;   XREF to: 0052fa80 (UNCONDITIONAL_CALL)  ; undefined FUN_0052fa80()
    JMP 0x0052e19b                      ; 0052e447
        ;   XREF to: 0052e19b (UNCONDITIONAL_JUMP)  ; LAB_0052e19b
    PUSH 0x5ebd36                       ; 0052e44c
        ;   Label: LAB_0052e44c
    MOV ECX,dword ptr [0x0061abc0]      ; 0052e451 | DAT_0061abc0
    PUSH ECX                            ; 0052e457
    CALL FUN_004942e0                   ; 0052e458
        ;   XREF to: 004942e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004942e0()
    ADD ESP,0x8                         ; 0052e45d
    CALL FUN_004032b0                   ; 0052e460
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
        ;   Label: LAB_0052e460
    PUSH 0x1                            ; 0052e465
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052e467
    PUSH EBX                            ; 0052e46a
    CALL FUN_0052cab0                   ; 0052e46b
        ;   XREF to: 0052cab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052cab0()
    ADD ESP,0x8                         ; 0052e470
    CALL FUN_004032b0                   ; 0052e473
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    MOV EAX,dword ptr [ESP + 0x108]     ; 0052e478
    MOV [0x006260e8],EAX                ; 0052e47f | DAT_006260e8
    XOR EAX,EAX                         ; 0052e484
        ;   Label: LAB_0052e484
    MOV ESP,EBP                         ; 0052e486
    POP EBP                             ; 0052e488
    POP EDI                             ; 0052e489
    POP ESI                             ; 0052e48a
    POP EBX                             ; 0052e48b
    RET                                 ; 0052e48c
    LEA EAX,[ESP + 0x8]                 ; 0052e48d
        ;   Label: LAB_0052e48d
    PUSH EAX                            ; 0052e491
    PUSH ESI                            ; 0052e492
    CALL FUN_0059c590                   ; 0052e493
        ;   XREF to: 0059c590 (UNCONDITIONAL_CALL)  ; undefined FUN_0059c590()
    ADD ESP,0x8                         ; 0052e498
    JMP 0x0052e32d                      ; 0052e49b
        ;   XREF to: 0052e32d (UNCONDITIONAL_JUMP)  ; LAB_0052e32d
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0052e4a0
        ;   Label: LAB_0052e4a0
    FLD float ptr [EAX + 0x28]          ; 0052e4a7
    FLDZ                                ; 0052e4aa
    FCOMPP                              ; 0052e4ac
    FNSTSW AX                           ; 0052e4ae
    SAHF                                ; 0052e4b0
    JA 0x0052e4ee                       ; 0052e4b1
        ;   XREF to: 0052e4ee (CONDITIONAL_JUMP)  ; LAB_0052e4ee
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0052e4b3
    FLD float ptr [EAX + 0x28]          ; 0052e4ba
    FMUL float ptr [0x005ebdf8]         ; 0052e4bd | DAT_005ebdf8
    CALL FUN_005c03a0                   ; 0052e4c3
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x120]       ; 0052e4c8
    MOV ESI,dword ptr [ESP + 0x120]     ; 0052e4cf
    PUSH ESI                            ; 0052e4d6
    PUSH 0x5ebdbb                       ; 0052e4d7
    LEA EAX,[ESP + 0x10]                ; 0052e4dc
    PUSH EAX                            ; 0052e4e0
    CALL FUN_005bfb40                   ; 0052e4e1
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0xc                         ; 0052e4e6
    JMP 0x0052e378                      ; 0052e4e9
        ;   XREF to: 0052e378 (UNCONDITIONAL_JUMP)  ; LAB_0052e378
    MOV ESI,0x5ebdc0                    ; 0052e4ee
        ;   Label: LAB_0052e4ee
    JMP 0x0052e35a                      ; 0052e4f3
        ;   XREF to: 0052e35a (UNCONDITIONAL_JUMP)  ; LAB_0052e35a
    MOV ESI,0x5ebdc8                    ; 0052e4f8
        ;   Label: LAB_0052e4f8
    JMP 0x0052e3a1                      ; 0052e4fd
        ;   XREF to: 0052e3a1 (UNCONDITIONAL_JUMP)  ; LAB_0052e3a1
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0052e502
        ;   Label: LAB_0052e502
    MOV ESI,dword ptr [EAX + 0x34]      ; 0052e509
    PUSH ESI                            ; 0052e50c
    PUSH 0x5ebdd5                       ; 0052e50d
    LEA EAX,[ESP + 0x10]                ; 0052e512
    PUSH EAX                            ; 0052e516
    CALL FUN_005bfb40                   ; 0052e517
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0xc                         ; 0052e51c
    PUSH EBX                            ; 0052e51f
    PUSH 0x1f4                          ; 0052e520
    LEA EAX,[ESP + 0x10]                ; 0052e525
    PUSH EAX                            ; 0052e529
    CALL FUN_00401fe0                   ; 0052e52a
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 0052e52f
    JMP 0x0052e40e                      ; 0052e532
        ;   XREF to: 0052e40e (UNCONDITIONAL_JUMP)  ; LAB_0052e40e
    MOV EDX,dword ptr [0x0061b49c]      ; 0052e537 | DAT_0061b49c
        ;   Label: LAB_0052e537
    ADD EBX,0x2c                        ; 0052e53d
    SUB EDX,EBX                         ; 0052e540
    MOV ESI,0xb                         ; 0052e542
    MOV EAX,EDX                         ; 0052e547
    SAR EDX,0x1f                        ; 0052e549
    IDIV ESI                            ; 0052e54c
    MOV ESI,dword ptr [0x01d51db4]      ; 0052e54e | DAT_01d51db4
    SUB ESI,EAX                         ; 0052e554
    INC ESI                             ; 0052e556
    TEST ESI,ESI                        ; 0052e557
    JL 0x0052e5c0                       ; 0052e559
        ;   XREF to: 0052e5c0 (CONDITIONAL_JUMP)  ; LAB_0052e5c0
    IMUL EDI,ESI,0x120                  ; 0052e55b
        ;   Label: LAB_0052e55b
    LEA EAX,[EDI + 0x20]                ; 0052e561
    ADD EAX,0x1d51db8                   ; 0052e564
    ADD EDI,0xc                         ; 0052e569
    MOV dword ptr [ESP + 0x110],EAX     ; 0052e56c
    ADD EDI,0x1d51db8                   ; 0052e573
    CMP ESI,dword ptr [0x01d51db4]      ; 0052e579 | DAT_01d51db4
        ;   Label: LAB_0052e579
    JGE 0x0052e5c4                      ; 0052e57f
        ;   XREF to: 0052e5c4 (CONDITIONAL_JUMP)  ; LAB_0052e5c4
    PUSH EBX                            ; 0052e581
    PUSH 0x0                            ; 0052e582
    PUSH EDI                            ; 0052e584
    CALL FUN_00401fe0                   ; 0052e585
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 0052e58a
    PUSH EBX                            ; 0052e58d
    PUSH 0x64                           ; 0052e58e
    MOV EAX,dword ptr [ESP + 0x118]     ; 0052e590
    PUSH EAX                            ; 0052e597
    CALL FUN_00401fe0                   ; 0052e598
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 0052e59d
    INC ESI                             ; 0052e5a0
    MOV EDX,dword ptr [ESP + 0x110]     ; 0052e5a1
    ADD EDI,0x120                       ; 0052e5a8
    ADD EDX,0x120                       ; 0052e5ae
    ADD EBX,0xb                         ; 0052e5b4
    MOV dword ptr [ESP + 0x110],EDX     ; 0052e5b7
    JMP 0x0052e579                      ; 0052e5be
        ;   XREF to: 0052e579 (UNCONDITIONAL_JUMP)  ; LAB_0052e579
    XOR ESI,ESI                         ; 0052e5c0
        ;   Label: LAB_0052e5c0
    JMP 0x0052e55b                      ; 0052e5c2
        ;   XREF to: 0052e55b (UNCONDITIONAL_JUMP)  ; LAB_0052e55b
    CALL FUN_005acff0                   ; 0052e5c4
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005acff0()
        ;   Label: LAB_0052e5c4
    MOV ECX,dword ptr [EBP + 0x14]      ; 0052e5c9
    PUSH ECX                            ; 0052e5cc
    CALL FUN_0052d360                   ; 0052e5cd
        ;   XREF to: 0052d360 (UNCONDITIONAL_CALL)  ; undefined FUN_0052d360()
    ADD ESP,0x4                         ; 0052e5d2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052e5d5
    MOV ESI,dword ptr [EAX + 0x1c]      ; 0052e5d8
    XOR EBX,EBX                         ; 0052e5db
    TEST ESI,ESI                        ; 0052e5dd
    JLE 0x0052e5f8                      ; 0052e5df
        ;   XREF to: 0052e5f8 (CONDITIONAL_JUMP)  ; LAB_0052e5f8
    MOV ESI,EAX                         ; 0052e5e1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052e5e3
    MOV dword ptr [ESI + 0x68],0x0      ; 0052e5e6
        ;   Label: LAB_0052e5e6
    INC EBX                             ; 0052e5ed
    MOV ECX,dword ptr [EAX + 0x1c]      ; 0052e5ee
    ADD ESI,0x7c                        ; 0052e5f1
    CMP EBX,ECX                         ; 0052e5f4
    JL 0x0052e5e6                       ; 0052e5f6
        ;   XREF to: 0052e5e6 (CONDITIONAL_JUMP)  ; LAB_0052e5e6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052e5f8
        ;   Label: LAB_0052e5f8
    MOV EBX,dword ptr [EAX]             ; 0052e5fb
    MOV dword ptr [EAX + 0x170],0x0     ; 0052e5fd
    CMP EBX,0x1                         ; 0052e607
    JNZ 0x0052e78b                      ; 0052e60a
        ;   XREF to: 0052e78b (CONDITIONAL_JUMP)  ; LAB_0052e78b
    IMUL EAX,dword ptr [EAX + 0x11c],0x7c ; 0052e610
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052e617
    ADD EDX,EAX                         ; 0052e61a
    MOV EAX,[0x01d51dac]                ; 0052e61c | DAT_01d51dac
    MOV dword ptr [EDX + 0x54],EAX      ; 0052e621
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052e624
    XOR ESI,ESI                         ; 0052e627
    MOV EDI,dword ptr [EDX + 0x1c]      ; 0052e629
    MOV EAX,EBX                         ; 0052e62c
    TEST EDI,EDI                        ; 0052e62e
    JLE 0x0052e6c6                      ; 0052e630
        ;   XREF to: 0052e6c6 (CONDITIONAL_JUMP)  ; LAB_0052e6c6
    MOV EBX,EDX                         ; 0052e636
    CMP dword ptr [EBX + 0x64],0x0      ; 0052e638
        ;   Label: LAB_0052e638
    JZ 0x0052e8b7                       ; 0052e63c
        ;   XREF to: 0052e8b7 (CONDITIONAL_JUMP)  ; LAB_0052e8b7
    MOV EDX,dword ptr [0x01d51dac]      ; 0052e642 | DAT_01d51dac
        ;   Label: LAB_0052e642
    CMP EDX,dword ptr [EBX + 0x54]      ; 0052e648
    JZ 0x0052e6b4                       ; 0052e64b
        ;   XREF to: 0052e6b4 (CONDITIONAL_JUMP)  ; LAB_0052e6b4
    MOV EDX,dword ptr [0x01d51da0]      ; 0052e64d | DAT_01d51da0
    MOV EAX,dword ptr [EBX + 0x58]      ; 0052e653
    SUB EDX,EAX                         ; 0052e656
    MOV dword ptr [ESP + 0x120],EDX     ; 0052e658
    FILD dword ptr [ESP + 0x120]        ; 0052e65f
    FMUL double ptr [0x005ebe00]        ; 0052e666 | DAT_005ebe00
    FST float ptr [ESP + 0x4]           ; 0052e66c
    FLDZ                                ; 0052e670
    FCOMPP                              ; 0052e672
    FNSTSW AX                           ; 0052e674
    SAHF                                ; 0052e676
    JBE 0x0052e67f                      ; 0052e677
        ;   XREF to: 0052e67f (CONDITIONAL_JUMP)  ; LAB_0052e67f
    XOR ECX,ECX                         ; 0052e679
    MOV dword ptr [ESP + 0x4],ECX       ; 0052e67b
    FLD float ptr [ESP + 0x4]           ; 0052e67f
        ;   Label: LAB_0052e67f
    FCOMP double ptr [0x005ebe08]       ; 0052e683 | DAT_005ebe08
    FNSTSW AX                           ; 0052e689
    SAHF                                ; 0052e68b
    JBE 0x0052e696                      ; 0052e68c
        ;   XREF to: 0052e696 (CONDITIONAL_JUMP)  ; LAB_0052e696
    MOV dword ptr [ESP + 0x4],0x41f00000 ; 0052e68e
    FLD float ptr [ESP + 0x4]           ; 0052e696
        ;   Label: LAB_0052e696
    FCOMP double ptr [0x005ebe10]       ; 0052e69a | DAT_005ebe10
    FNSTSW AX                           ; 0052e6a0
    SAHF                                ; 0052e6a2
    JBE 0x0052e6b2                      ; 0052e6a3
        ;   XREF to: 0052e6b2 (CONDITIONAL_JUMP)  ; LAB_0052e6b2
    PUSH ESI                            ; 0052e6a5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052e6a6
    PUSH EAX                            ; 0052e6a9
    CALL FUN_0052fb60                   ; 0052e6aa
        ;   XREF to: 0052fb60 (UNCONDITIONAL_CALL)  ; undefined FUN_0052fb60()
    ADD ESP,0x8                         ; 0052e6af
    XOR EAX,EAX                         ; 0052e6b2
        ;   Label: LAB_0052e6b2
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052e6b4
        ;   Label: LAB_0052e6b4
    INC ESI                             ; 0052e6b7
    MOV ECX,dword ptr [EDX + 0x1c]      ; 0052e6b8
    ADD EBX,0x7c                        ; 0052e6bb
    CMP ESI,ECX                         ; 0052e6be
    JL 0x0052e638                       ; 0052e6c0
        ;   XREF to: 0052e638 (CONDITIONAL_JUMP)  ; LAB_0052e638
    TEST EAX,EAX                        ; 0052e6c6
        ;   Label: LAB_0052e6c6
    JZ 0x0052e78b                       ; 0052e6c8
        ;   XREF to: 0052e78b (CONDITIONAL_JUMP)  ; LAB_0052e78b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052e6ce
    CMP dword ptr [EAX + 0x1c],0x1      ; 0052e6d1
    JLE 0x0052e78b                      ; 0052e6d5
        ;   XREF to: 0052e78b (CONDITIONAL_JUMP)  ; LAB_0052e78b
    MOV dword ptr [EAX + 0x4],0x2       ; 0052e6db
    CALL FUN_004032b0                   ; 0052e6e2
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    PUSH 0x1                            ; 0052e6e7
    MOV ESI,dword ptr [EBP + 0x14]      ; 0052e6e9
    PUSH ESI                            ; 0052e6ec
    CALL FUN_0052cf90                   ; 0052e6ed
        ;   XREF to: 0052cf90 (UNCONDITIONAL_CALL)  ; undefined FUN_0052cf90()
    ADD ESP,0x8                         ; 0052e6f2
    TEST EAX,EAX                        ; 0052e6f5
    JZ 0x0052e781                       ; 0052e6f7
        ;   XREF to: 0052e781 (CONDITIONAL_JUMP)  ; LAB_0052e781
    MOV EDI,dword ptr [ESP + 0x10c]     ; 0052e6fd
    PUSH EDI                            ; 0052e704
    PUSH 0x5ebdd8                       ; 0052e705
    MOV EAX,[0x0061abc0]                ; 0052e70a | DAT_0061abc0
    PUSH EAX                            ; 0052e70f
    CALL FUN_00494400                   ; 0052e710
        ;   XREF to: 00494400 (UNCONDITIONAL_CALL)  ; undefined FUN_00494400()
    ADD ESP,0xc                         ; 0052e715
    MOV EDX,dword ptr [ESI + 0x174]     ; 0052e718
    PUSH EDX                            ; 0052e71e
    CALL FUN_005c0870                   ; 0052e71f
        ;   XREF to: 005c0870 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0870()
    ADD ESP,0x4                         ; 0052e724
    MOV ECX,dword ptr [ESI + 0x174]     ; 0052e727
    PUSH ECX                            ; 0052e72d
    CALL FUN_0040cb80                   ; 0052e72e
        ;   XREF to: 0040cb80 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cb80()
    ADD ESP,0x4                         ; 0052e733
    PUSH 0x0                            ; 0052e736
    PUSH EDI                            ; 0052e738
    MOV ESI,dword ptr [0x0061f650]      ; 0052e739 | DAT_0061f650
    PUSH ESI                            ; 0052e73f
    CALL FUN_0051a3f0                   ; 0052e740
        ;   XREF to: 0051a3f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051a3f0()
    ADD ESP,0xc                         ; 0052e745
    PUSH 0x0                            ; 0052e748
    MOV EDI,dword ptr [0x0061f650]      ; 0052e74a | DAT_0061f650
    PUSH EDI                            ; 0052e750
    CALL FUN_0051c0a0                   ; 0052e751
        ;   XREF to: 0051c0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c0a0()
    ADD ESP,0x8                         ; 0052e756
    TEST EAX,EAX                        ; 0052e759
    JZ 0x0052e781                       ; 0052e75b
        ;   XREF to: 0052e781 (CONDITIONAL_JUMP)  ; LAB_0052e781
    MOV EAX,[0x0061f650]                ; 0052e75d | DAT_0061f650
    PUSH EAX                            ; 0052e762
    CALL FUN_0051bdc0                   ; 0052e763
        ;   XREF to: 0051bdc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051bdc0()
    ADD ESP,0x4                         ; 0052e768
    PUSH 0x2                            ; 0052e76b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052e76d
    PUSH EDX                            ; 0052e770
    CALL FUN_0052cf90                   ; 0052e771
        ;   XREF to: 0052cf90 (UNCONDITIONAL_CALL)  ; undefined FUN_0052cf90()
    ADD ESP,0x8                         ; 0052e776
    TEST EAX,EAX                        ; 0052e779
    JNZ 0x0052e8be                      ; 0052e77b
        ;   XREF to: 0052e8be (CONDITIONAL_JUMP)  ; LAB_0052e8be
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052e781
        ;   Label: LAB_0052e781
    MOV dword ptr [EAX + 0x4],0x1       ; 0052e784
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052e78b
        ;   Label: LAB_0052e78b
    MOV EDX,dword ptr [EAX]             ; 0052e78e
    CMP EDX,0x2                         ; 0052e790
    JNZ 0x0052e79e                      ; 0052e793
        ;   XREF to: 0052e79e (CONDITIONAL_JUMP)  ; LAB_0052e79e
    CMP EDX,dword ptr [EAX + 0x4]       ; 0052e795
    JZ 0x0052e8ca                       ; 0052e798
        ;   XREF to: 0052e8ca (CONDITIONAL_JUMP)  ; LAB_0052e8ca
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052e79e
        ;   Label: LAB_0052e79e
    CMP dword ptr [EAX],0x2             ; 0052e7a1
    JNZ 0x0052e81c                      ; 0052e7a4
        ;   XREF to: 0052e81c (CONDITIONAL_JUMP)  ; LAB_0052e81c
    CMP dword ptr [0x00622584],0x0      ; 0052e7aa | DAT_00622584
    JZ 0x0052e81c                       ; 0052e7b1
        ;   XREF to: 0052e81c (CONDITIONAL_JUMP)  ; LAB_0052e81c
    IMUL EAX,dword ptr [EAX + 0x11c],0x7c ; 0052e7b3
    ADD EAX,dword ptr [EBP + 0x14]      ; 0052e7ba
    MOV EDX,dword ptr [0x01d51da0]      ; 0052e7bd | DAT_01d51da0
    MOV EAX,dword ptr [EAX + 0x60]      ; 0052e7c3
    SUB EDX,EAX                         ; 0052e7c6
    MOV dword ptr [ESP + 0x120],EDX     ; 0052e7c8
    FILD dword ptr [ESP + 0x120]        ; 0052e7cf
    FMUL double ptr [0x005ebe00]        ; 0052e7d6 | DAT_005ebe00
    FST float ptr [ESP]                 ; 0052e7dc
    FLDZ                                ; 0052e7df
    FCOMPP                              ; 0052e7e1
    FNSTSW AX                           ; 0052e7e3
    SAHF                                ; 0052e7e5
    JBE 0x0052e7ed                      ; 0052e7e6
        ;   XREF to: 0052e7ed (CONDITIONAL_JUMP)  ; LAB_0052e7ed
    XOR ECX,ECX                         ; 0052e7e8
    MOV dword ptr [ESP],ECX             ; 0052e7ea
    FLD float ptr [ESP]                 ; 0052e7ed
        ;   Label: LAB_0052e7ed
    FCOMP double ptr [0x005ebe08]       ; 0052e7f0 | DAT_005ebe08
    FNSTSW AX                           ; 0052e7f6
    SAHF                                ; 0052e7f8
    JBE 0x0052e802                      ; 0052e7f9
        ;   XREF to: 0052e802 (CONDITIONAL_JUMP)  ; LAB_0052e802
    MOV dword ptr [ESP],0x41f00000      ; 0052e7fb
    FLD float ptr [ESP]                 ; 0052e802
        ;   Label: LAB_0052e802
    FCOMP double ptr [0x005ebe10]       ; 0052e805 | DAT_005ebe10
    FNSTSW AX                           ; 0052e80b
    SAHF                                ; 0052e80d
    JBE 0x0052e81c                      ; 0052e80e
        ;   XREF to: 0052e81c (CONDITIONAL_JUMP)  ; LAB_0052e81c
    MOV ESI,dword ptr [EBP + 0x14]      ; 0052e810
    PUSH ESI                            ; 0052e813
    CALL FUN_0052fd80                   ; 0052e814
        ;   XREF to: 0052fd80 (UNCONDITIONAL_CALL)  ; undefined FUN_0052fd80()
    ADD ESP,0x4                         ; 0052e819
    PUSH 0x1                            ; 0052e81c
        ;   Label: LAB_0052e81c
    MOV EAX,[0x0061f2a4]                ; 0052e81e | DAT_0061f2a4
    PUSH EAX                            ; 0052e823
    MOV EDX,dword ptr [EAX]             ; 0052e824
    CALL dword ptr [EDX + 0x4]          ; 0052e826
    ADD ESP,0x8                         ; 0052e829
    TEST EAX,EAX                        ; 0052e82c
    JNZ 0x0052e460                      ; 0052e82e
        ;   XREF to: 0052e460 (CONDITIONAL_JUMP)  ; LAB_0052e460
    PUSH 0x1c                           ; 0052e834
    MOV EAX,[0x0061f2a4]                ; 0052e836 | DAT_0061f2a4
    PUSH EAX                            ; 0052e83b
    MOV EDX,dword ptr [EAX]             ; 0052e83c
    CALL dword ptr [EDX + 0x4]          ; 0052e83e
    ADD ESP,0x8                         ; 0052e841
    TEST EAX,EAX                        ; 0052e844
    JZ 0x0052e87a                       ; 0052e846
        ;   XREF to: 0052e87a (CONDITIONAL_JUMP)  ; LAB_0052e87a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052e848
    IMUL EAX,dword ptr [EAX + 0x11c],0x7c ; 0052e84b
    ADD EAX,dword ptr [EBP + 0x14]      ; 0052e852
    CMP dword ptr [EAX + 0x64],0x0      ; 0052e855
    SETZ DL                             ; 0052e859
    AND EDX,0xff                        ; 0052e85c
    MOV dword ptr [EAX + 0x64],EDX      ; 0052e862
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052e865
    CMP dword ptr [EAX],0x1             ; 0052e868
    JNZ 0x0052e9bd                      ; 0052e86b
        ;   XREF to: 0052e9bd (CONDITIONAL_JUMP)  ; LAB_0052e9bd
    PUSH EAX                            ; 0052e871
    CALL FUN_0052fa80                   ; 0052e872
        ;   XREF to: 0052fa80 (UNCONDITIONAL_CALL)  ; undefined FUN_0052fa80()
    ADD ESP,0x4                         ; 0052e877
        ;   Label: LAB_0052e877
    PUSH 0x1f                           ; 0052e87a
        ;   Label: LAB_0052e87a
    MOV EAX,[0x0061f2a4]                ; 0052e87c | DAT_0061f2a4
    PUSH EAX                            ; 0052e881
    MOV EDX,dword ptr [EAX]             ; 0052e882
    CALL dword ptr [EDX + 0x4]          ; 0052e884
    ADD ESP,0x8                         ; 0052e887
    TEST EAX,EAX                        ; 0052e88a
    JNZ 0x0052e9c8                      ; 0052e88c
        ;   XREF to: 0052e9c8 (CONDITIONAL_JUMP)  ; LAB_0052e9c8
    XOR EBX,EBX                         ; 0052e892
        ;   Label: LAB_0052e892
    MOV EAX,[0x00622580]                ; 0052e894 | DAT_00622580
        ;   Label: LAB_0052e894
    CMP EBX,dword ptr [EAX + 0x1c]      ; 0052e899
    JGE 0x0052e1ad                      ; 0052e89c
        ;   XREF to: 0052e1ad (CONDITIONAL_JUMP)  ; LAB_0052e1ad
    PUSH 0x40000000                     ; 0052e8a2
    PUSH EBX                            ; 0052e8a7
    MOV ECX,dword ptr [EBP + 0x14]      ; 0052e8a8
    PUSH ECX                            ; 0052e8ab
    CALL FUN_0052ea10                   ; 0052e8ac
        ;   XREF to: 0052ea10 (UNCONDITIONAL_CALL)  ; undefined FUN_0052ea10()
    INC EBX                             ; 0052e8b1
    ADD ESP,0xc                         ; 0052e8b2
    JMP 0x0052e894                      ; 0052e8b5
        ;   XREF to: 0052e894 (UNCONDITIONAL_JUMP)  ; LAB_0052e894
    XOR EAX,EAX                         ; 0052e8b7
        ;   Label: LAB_0052e8b7
    JMP 0x0052e642                      ; 0052e8b9
        ;   XREF to: 0052e642 (UNCONDITIONAL_JUMP)  ; LAB_0052e642
    MOV EAX,0x1                         ; 0052e8be
        ;   Label: LAB_0052e8be
    MOV ESP,EBP                         ; 0052e8c3
    POP EBP                             ; 0052e8c5
    POP EDI                             ; 0052e8c6
    POP ESI                             ; 0052e8c7
    POP EBX                             ; 0052e8c8
    RET                                 ; 0052e8c9
    LEA EBX,[EAX + 0x120]               ; 0052e8ca
        ;   Label: LAB_0052e8ca
    PUSH EBX                            ; 0052e8d0
    PUSH 0x5ebde3                       ; 0052e8d1
    MOV ECX,dword ptr [0x0061abc0]      ; 0052e8d6 | DAT_0061abc0
    PUSH ECX                            ; 0052e8dc
    CALL FUN_00494400                   ; 0052e8dd
        ;   XREF to: 00494400 (UNCONDITIONAL_CALL)  ; undefined FUN_00494400()
    ADD ESP,0xc                         ; 0052e8e2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052e8e5
    MOV ESI,dword ptr [EAX + 0x174]     ; 0052e8e8
    PUSH ESI                            ; 0052e8ee
    CALL FUN_005c0870                   ; 0052e8ef
        ;   XREF to: 005c0870 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0870()
    ADD ESP,0x4                         ; 0052e8f4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052e8f7
    MOV EDI,dword ptr [EAX + 0x174]     ; 0052e8fa
    PUSH EDI                            ; 0052e900
    CALL FUN_0040cb80                   ; 0052e901
        ;   XREF to: 0040cb80 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cb80()
    ADD ESP,0x4                         ; 0052e906
    PUSH 0x0                            ; 0052e909
    PUSH EBX                            ; 0052e90b
    MOV EAX,[0x0061f650]                ; 0052e90c | DAT_0061f650
    PUSH EAX                            ; 0052e911
    CALL FUN_0051a3f0                   ; 0052e912
        ;   XREF to: 0051a3f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051a3f0()
    ADD ESP,0xc                         ; 0052e917
    PUSH 0x0                            ; 0052e91a
    MOV EDX,dword ptr [0x0061f650]      ; 0052e91c | DAT_0061f650
    PUSH EDX                            ; 0052e922
    CALL FUN_0051c0a0                   ; 0052e923
        ;   XREF to: 0051c0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c0a0()
    ADD ESP,0x8                         ; 0052e928
    TEST EAX,EAX                        ; 0052e92b
    JZ 0x0052e9ae                       ; 0052e92d
        ;   XREF to: 0052e9ae (CONDITIONAL_JUMP)  ; LAB_0052e9ae
    MOV ECX,dword ptr [0x0061f650]      ; 0052e933 | DAT_0061f650
    PUSH ECX                            ; 0052e939
    CALL FUN_0051bdc0                   ; 0052e93a
        ;   XREF to: 0051bdc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051bdc0()
    ADD ESP,0x4                         ; 0052e93f
    PUSH 0x2                            ; 0052e942
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052e944
    PUSH EBX                            ; 0052e947
    CALL FUN_0052cf90                   ; 0052e948
        ;   XREF to: 0052cf90 (UNCONDITIONAL_CALL)  ; undefined FUN_0052cf90()
    ADD ESP,0x8                         ; 0052e94d
    TEST EAX,EAX                        ; 0052e950
    JZ 0x0052e9ae                       ; 0052e952
        ;   XREF to: 0052e9ae (CONDITIONAL_JUMP)  ; LAB_0052e9ae
    CALL FUN_005b2420                   ; 0052e954
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2420()
    MOV EDX,EAX                         ; 0052e959
    MOV EBX,0x12                        ; 0052e95b
    SAR EDX,0x1f                        ; 0052e960
    IDIV EBX                            ; 0052e963
    MOV ESI,dword ptr [0x01d51d9c]      ; 0052e965 | DAT_01d51d9c
    MOV EDX,EAX                         ; 0052e96b
    SUB EAX,ESI                         ; 0052e96d
    MOV dword ptr [0x01d51d9c],EDX      ; 0052e96f | DAT_01d51d9c
    TEST EAX,EAX                        ; 0052e975
    JL 0x0052e9aa                       ; 0052e977
        ;   XREF to: 0052e9aa (CONDITIONAL_JUMP)  ; LAB_0052e9aa
    CMP EAX,0x20000                     ; 0052e979
    JLE 0x0052e985                      ; 0052e97e
        ;   XREF to: 0052e985 (CONDITIONAL_JUMP)  ; LAB_0052e985
    MOV EAX,0x20000                     ; 0052e980
    MOV EDI,dword ptr [0x01d51da0]      ; 0052e985 | DAT_01d51da0
        ;   Label: LAB_0052e985
    ADD EDI,EAX                         ; 0052e98b
    MOV dword ptr [0x01d51da0],EDI      ; 0052e98d | DAT_01d51da0
    LEA EAX,[EDI + 0xffe20000]          ; 0052e993
    MOV [0x01d51db0],EAX                ; 0052e999 | DAT_01d51db0
    MOV EAX,0x1                         ; 0052e99e
    MOV ESP,EBP                         ; 0052e9a3
    POP EBP                             ; 0052e9a5
    POP EDI                             ; 0052e9a6
    POP ESI                             ; 0052e9a7
    POP EBX                             ; 0052e9a8
    RET                                 ; 0052e9a9
    XOR EAX,EAX                         ; 0052e9aa
        ;   Label: LAB_0052e9aa
    JMP 0x0052e985                      ; 0052e9ac
        ;   XREF to: 0052e985 (UNCONDITIONAL_JUMP)  ; LAB_0052e985
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052e9ae
        ;   Label: LAB_0052e9ae
    MOV dword ptr [EAX + 0x4],0x1       ; 0052e9b1
    JMP 0x0052e460                      ; 0052e9b8
        ;   XREF to: 0052e460 (UNCONDITIONAL_JUMP)  ; LAB_0052e460
    PUSH EAX                            ; 0052e9bd
        ;   Label: LAB_0052e9bd
    CALL FUN_0052fd80                   ; 0052e9be
        ;   XREF to: 0052fd80 (UNCONDITIONAL_CALL)  ; undefined FUN_0052fd80()
    JMP 0x0052e877                      ; 0052e9c3
        ;   XREF to: 0052e877 (UNCONDITIONAL_JUMP)  ; LAB_0052e877
    PUSH 0x1                            ; 0052e9c8
        ;   Label: LAB_0052e9c8
    PUSH 0x100                          ; 0052e9ca
    PUSH 0x1d51b20                      ; 0052e9cf
    PUSH 0x5ebdee                       ; 0052e9d4
    MOV EAX,[0x0061abc0]                ; 0052e9d9 | DAT_0061abc0
    PUSH EAX                            ; 0052e9de
    CALL FUN_00496150                   ; 0052e9df
        ;   XREF to: 00496150 (UNCONDITIONAL_CALL)  ; undefined FUN_00496150()
    ADD ESP,0x14                        ; 0052e9e4
    TEST EAX,EAX                        ; 0052e9e7
    JZ 0x0052e892                       ; 0052e9e9
        ;   XREF to: 0052e892 (CONDITIONAL_JUMP)  ; LAB_0052e892
    PUSH -0x1                           ; 0052e9ef
    PUSH 0x1d51b20                      ; 0052e9f1
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052e9f6
    PUSH EDX                            ; 0052e9f9
    CALL FUN_0052ebd0                   ; 0052e9fa
        ;   XREF to: 0052ebd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052ebd0()
    ADD ESP,0xc                         ; 0052e9ff
    JMP 0x0052e892                      ; 0052ea02
        ;   XREF to: 0052e892 (UNCONDITIONAL_JUMP)  ; LAB_0052e892

