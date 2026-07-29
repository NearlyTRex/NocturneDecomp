; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_processCoronaScanline_FUN_00445310(int row,int x_start,int x_end,SCorona *corona)
;
; Parameters:
; int              Stack[0x4]:4   row
; int              Stack[0x8]:4   x_start
; int              Stack[0xc]:4   x_end
; SCorona *        Stack[0x10]:4   corona
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined1       Stack[-0x14]:1  local_14
;
; Referenced Globals:
;   undefined4 DAT_012b0660
;   undefined4 DAT_014b8458
;   undefined4 DAT_014b845c
;   undefined4 DAT_014b8460
;   undefined4 DAT_014b8464
;   undefined4 DAT_014b8468
;   undefined4 DAT_01bd4260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00445310
        ;   Label: core_dcamera.cpp_processCoronaScanline_FUN_00445310
    PUSH ESI                            ; 00445311
    PUSH EDI                            ; 00445312
    PUSH EBP                            ; 00445313
    SUB ESP,0x2c                        ; 00445314
    MOV EAX,dword ptr [ESP + 0x40]      ; 00445317
    SHL EAX,0x8                         ; 0044531b
    MOV EDX,EAX                         ; 0044531e
    SHL EAX,0x4                         ; 00445320
    MOV ECX,0x7f7378                    ; 00445323
    SUB EAX,EDX                         ; 00445328
    MOV EDX,dword ptr [ESP + 0x44]      ; 0044532a
    ADD ECX,EAX                         ; 0044532e
    LEA EAX,[EDX*0x4 + 0x0]             ; 00445330
    SUB EAX,EDX                         ; 00445337
    SHL EAX,0x2                         ; 00445339
    MOV EDX,dword ptr [ESP + 0x40]      ; 0044533c
    ADD ECX,EAX                         ; 00445340
    LEA EAX,[EDX*0x4 + 0x0]             ; 00445342
    ADD EAX,EDX                         ; 00445349
    MOV EDX,0x146ba10                   ; 0044534b
    SHL EAX,0x8                         ; 00445350
    ADD EDX,EAX                         ; 00445353
    MOV EAX,dword ptr [ESP + 0x44]      ; 00445355
    MOV dword ptr [ESP + 0x18],ECX      ; 00445359
    SHL EAX,0x2                         ; 0044535d
    MOV CL,byte ptr [0x012b0660]        ; 00445360 | DAT_012b0660
    ADD EDX,EAX                         ; 00445366
    MOV EAX,dword ptr [ESP + 0x40]      ; 00445368
    MOV dword ptr [ESP + 0x10],EDX      ; 0044536c
    MOV EDX,dword ptr [ESP + 0x44]      ; 00445370
    SHL EAX,CL                          ; 00445374
    SHL EDX,CL                          ; 00445376
    MOV EAX,dword ptr [EAX*0x4 + 0x1bd4260] ; 00445378 | DAT_01bd4260
    SHL EDX,0x2                         ; 0044537f
    ADD EAX,EDX                         ; 00445382
    MOV EDX,dword ptr [ESP + 0x40]      ; 00445384
    MOV dword ptr [ESP + 0x14],EAX      ; 00445388
    LEA EAX,[EDX*0x4 + 0x0]             ; 0044538c
    ADD EAX,EDX                         ; 00445393
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00445395
    SHL EAX,0x6                         ; 00445399
    ADD EDX,0x784                       ; 0044539c
    ADD EAX,EDX                         ; 004453a2
    MOV EDX,dword ptr [ESP + 0x44]      ; 004453a4
    ADD EDX,EAX                         ; 004453a8
    MOV EAX,dword ptr [ESP + 0x44]      ; 004453aa
    MOV dword ptr [ESP + 0xc],EDX       ; 004453ae
    CMP EAX,dword ptr [ESP + 0x48]      ; 004453b2
    JGE 0x004454e4                      ; 004453b6
        ;   XREF to: 004454e4 (CONDITIONAL_JUMP)  ; LAB_004454e4
    XOR AH,AH                           ; 004453bc
        ;   Label: LAB_004453bc
    MOV EDX,dword ptr [ESP + 0x10]      ; 004453be
    MOV byte ptr [ESP + 0x28],AH        ; 004453c2
    MOV EAX,dword ptr [ESP + 0x14]      ; 004453c6
    MOV ECX,dword ptr [EDX]             ; 004453ca
    CMP ECX,dword ptr [EAX]             ; 004453cc
    JBE 0x0044548e                      ; 004453ce
        ;   XREF to: 0044548e (CONDITIONAL_JUMP)  ; LAB_0044548e
    MOV EAX,dword ptr [ESP + 0x18]      ; 004453d4
    MOV EDX,dword ptr [0x014b8458]      ; 004453d8 | DAT_014b8458
    MOV EAX,dword ptr [EAX]             ; 004453de
    SUB EAX,dword ptr [EDX]             ; 004453e0
    CDQ                                 ; 004453e2
    XOR EAX,EDX                         ; 004453e3
    SUB EAX,EDX                         ; 004453e5
    MOV EDX,dword ptr [0x014b8458]      ; 004453e7 | DAT_014b8458
    MOV ESI,dword ptr [EDX + 0xc]       ; 004453ed
    MOV ECX,EAX                         ; 004453f0
    CMP EAX,ESI                         ; 004453f2
    JGE 0x0044548e                      ; 004453f4
        ;   XREF to: 0044548e (CONDITIONAL_JUMP)  ; LAB_0044548e
    MOV EAX,dword ptr [ESP + 0x18]      ; 004453fa
    MOV EDI,dword ptr [EDX + 0x4]       ; 004453fe
    MOV EAX,dword ptr [EAX + 0x4]       ; 00445401
    SUB EAX,EDI                         ; 00445404
    CDQ                                 ; 00445406
    XOR EAX,EDX                         ; 00445407
    SUB EAX,EDX                         ; 00445409
    MOV EDX,dword ptr [0x014b8458]      ; 0044540b | DAT_014b8458
    MOV EBP,dword ptr [EDX + 0xc]       ; 00445411
    MOV EBX,EAX                         ; 00445414
    CMP EAX,EBP                         ; 00445416
    JGE 0x0044548e                      ; 00445418
        ;   XREF to: 0044548e (CONDITIONAL_JUMP)  ; LAB_0044548e
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044541a
    MOV ESI,dword ptr [EDX + 0x8]       ; 0044541e
    MOV EAX,dword ptr [EAX + 0x8]       ; 00445421
    SUB EAX,ESI                         ; 00445424
    CDQ                                 ; 00445426
    XOR EAX,EDX                         ; 00445427
    SUB EAX,EDX                         ; 00445429
    MOV EDX,dword ptr [0x014b8458]      ; 0044542b | DAT_014b8458
    CMP EAX,dword ptr [EDX + 0xc]       ; 00445431
    JGE 0x0044548e                      ; 00445434
        ;   XREF to: 0044548e (CONDITIONAL_JUMP)  ; LAB_0044548e
    IMUL EBX,EBX                        ; 00445436
    IMUL ECX,ECX                        ; 00445439
    IMUL EAX,EAX                        ; 0044543c
    ADD ECX,EBX                         ; 0044543f
    ADD ECX,EAX                         ; 00445441
    MOV EBP,dword ptr [EDX + 0x10]      ; 00445443
    MOV dword ptr [ESP + 0x8],ECX       ; 00445446
    CMP ECX,EBP                         ; 0044544a
    JGE 0x0044548e                      ; 0044544c
        ;   XREF to: 0044548e (CONDITIONAL_JUMP)  ; LAB_0044548e
    MOV ESI,dword ptr [ESP + 0x40]      ; 0044544e
    MOV ECX,dword ptr [ESP + 0x14]      ; 00445452
    MOV EBX,dword ptr [ESP + 0x44]      ; 00445456
    MOV EAX,[0x014b845c]                ; 0044545a | DAT_014b845c
    MOV ECX,dword ptr [ECX]             ; 0044545f
    TEST EAX,EAX                        ; 00445461
    JNZ 0x00445571                      ; 00445463
        ;   XREF to: 00445571 (CONDITIONAL_JUMP)  ; LAB_00445571
    MOV EAX,[0x014b8458]                ; 00445469 | DAT_014b8458
        ;   Label: LAB_00445469
    MOV ECX,dword ptr [ESP + 0x8]       ; 0044546e
    MOV EDX,dword ptr [EAX + 0x10]      ; 00445472
    SUB EDX,ECX                         ; 00445475
    SAR EDX,0x10                        ; 00445477
    IMUL EDX,EDX,0x3f                   ; 0044547a
    MOV ECX,dword ptr [EAX + 0x10]      ; 0044547d
    SAR ECX,0x10                        ; 00445480
    MOV EAX,EDX                         ; 00445483
    SAR EDX,0x1f                        ; 00445485
    IDIV ECX                            ; 00445488
    MOV byte ptr [ESP + 0x28],AL        ; 0044548a
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044548e
        ;   Label: LAB_0044548e
    MOV EDI,dword ptr [ESP + 0x10]      ; 00445492
    MOV EBP,dword ptr [ESP + 0x18]      ; 00445496
    MOV AL,byte ptr [ESP + 0x28]        ; 0044549a
    MOV ESI,dword ptr [ESP + 0x14]      ; 0044549e
    MOV CL,byte ptr [0x012b0660]        ; 004454a2 | DAT_012b0660
    LEA EBX,[EDX + 0x1]                 ; 004454a8
    ADD EDI,0x4                         ; 004454ab
    ADD EBP,0xc                         ; 004454ae
    MOV byte ptr [EDX],AL               ; 004454b1
    MOV EAX,0x1                         ; 004454b3
    MOV EDX,dword ptr [ESP + 0x48]      ; 004454b8
    SHL EAX,CL                          ; 004454bc
    MOV dword ptr [ESP + 0xc],EBX       ; 004454be
    SHL EAX,0x2                         ; 004454c2
    MOV dword ptr [ESP + 0x10],EDI      ; 004454c5
    ADD ESI,EAX                         ; 004454c9
    MOV EAX,dword ptr [ESP + 0x44]      ; 004454cb
    MOV dword ptr [ESP + 0x18],EBP      ; 004454cf
    INC EAX                             ; 004454d3
    MOV dword ptr [ESP + 0x14],ESI      ; 004454d4
    MOV dword ptr [ESP + 0x44],EAX      ; 004454d8
    CMP EAX,EDX                         ; 004454dc
    JL 0x004453bc                       ; 004454de
        ;   XREF to: 004453bc (CONDITIONAL_JUMP)  ; LAB_004453bc
    MOV EDX,dword ptr [ESP + 0x40]      ; 004454e4
        ;   Label: LAB_004454e4
    MOV ECX,dword ptr [ESP + 0x4c]      ; 004454e8
    SHL EDX,0x2                         ; 004454ec
    MOV EBX,dword ptr [ESP + 0x40]      ; 004454ef
    ADD EDX,ECX                         ; 004454f3
    LEA ECX,[EBX*0x4 + 0x0]             ; 004454f5
    ADD ECX,EBX                         ; 004454fc
    MOV EBX,dword ptr [ESP + 0x4c]      ; 004454fe
    SHL ECX,0x6                         ; 00445502
    ADD EBX,0x784                       ; 00445505
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044550b
    ADD ECX,EBX                         ; 0044550e
    MOV EDX,dword ptr [EDX + 0x3c4]     ; 00445510
    ADD ECX,EAX                         ; 00445516
    CMP EAX,EDX                         ; 00445518
    JGE 0x00445525                      ; 0044551a
        ;   XREF to: 00445525 (CONDITIONAL_JUMP)  ; LAB_00445525
    CMP byte ptr [ECX],0x0              ; 0044551c
        ;   Label: LAB_0044551c
    JZ 0x00445634                       ; 0044551f
        ;   XREF to: 00445634 (CONDITIONAL_JUMP)  ; LAB_00445634
    MOV EBX,dword ptr [ESP + 0x40]      ; 00445525
        ;   Label: LAB_00445525
    LEA ECX,[EBX*0x4 + 0x0]             ; 00445529
    ADD ECX,EBX                         ; 00445530
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00445532
    SHL ECX,0x6                         ; 00445536
    ADD EBX,0x784                       ; 00445539
    ADD ECX,EBX                         ; 0044553f
    ADD ECX,EDX                         ; 00445541
    DEC ECX                             ; 00445543
    CMP EDX,EAX                         ; 00445544
    JLE 0x00445553                      ; 00445546
        ;   XREF to: 00445553 (CONDITIONAL_JUMP)  ; LAB_00445553
    CMP byte ptr [ECX],0x0              ; 00445548
        ;   Label: LAB_00445548
    JNZ 0x00445553                      ; 0044554b
        ;   XREF to: 00445553 (CONDITIONAL_JUMP)  ; LAB_00445553
    DEC EDX                             ; 0044554d
    DEC ECX                             ; 0044554e
    CMP EDX,EAX                         ; 0044554f
    JG 0x00445548                       ; 00445551
        ;   XREF to: 00445548 (CONDITIONAL_JUMP)  ; LAB_00445548
    MOV ECX,dword ptr [ESP + 0x40]      ; 00445553
        ;   Label: LAB_00445553
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00445557
    SHL ECX,0x2                         ; 0044555b
    ADD ECX,EBX                         ; 0044555e
    MOV dword ptr [ECX + 0x4],EAX       ; 00445560
    MOV dword ptr [ECX + 0x3c4],EDX     ; 00445563
    ADD ESP,0x2c                        ; 00445569
    POP EBP                             ; 0044556c
    POP EDI                             ; 0044556d
    POP ESI                             ; 0044556e
    POP EBX                             ; 0044556f
    RET                                 ; 00445570
    MOV EBP,dword ptr [0x014b8460]      ; 00445571 | DAT_014b8460
        ;   Label: LAB_00445571
    MOV EAX,[0x014b8464]                ; 00445577 | DAT_014b8464
    MOV EDI,dword ptr [0x014b8468]      ; 0044557c | DAT_014b8468
    XOR EDX,EDX                         ; 00445582
    MOV dword ptr [ESP],EAX             ; 00445584
    MOV dword ptr [ESP + 0x4],EDX       ; 00445587
    TEST ECX,ECX                        ; 0044558b
    JZ 0x00445601                       ; 0044558d
        ;   XREF to: 00445601 (CONDITIONAL_JUMP)  ; LAB_00445601
    MOV EAX,0x7fffffff                  ; 0044558f
    MOV EDX,EAX                         ; 00445594
    SAR EDX,0x1f                        ; 00445596
    IDIV ECX                            ; 00445599
    MOV ECX,EAX                         ; 0044559b
    MOV EAX,EBP                         ; 0044559d
        ;   Label: LAB_0044559d
    SUB EAX,EBX                         ; 0044559f
    SHL EAX,0x4                         ; 004455a1
    MOV dword ptr [ESP + 0x20],EAX      ; 004455a4
    MOV EAX,dword ptr [ESP]             ; 004455a8
    SUB EAX,ESI                         ; 004455ab
    MOV EDX,EDI                         ; 004455ad
    SHL EAX,0x4                         ; 004455af
    SUB EDX,ECX                         ; 004455b2
    MOV dword ptr [ESP + 0x24],EAX      ; 004455b4
    MOV EAX,EDX                         ; 004455b8
    SAR EDX,0x1f                        ; 004455ba
    SHL EDX,0x4                         ; 004455bd
    SBB EAX,EDX                         ; 004455c0
    SAR EAX,0x4                         ; 004455c2
    SHL EBX,0x8                         ; 004455c5
    MOV dword ptr [ESP + 0x1c],EAX      ; 004455c8
    MOV EDX,ESI                         ; 004455cc
    MOV EAX,0x10                        ; 004455ce
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004455d3
    SHL EDX,0x8                         ; 004455d7
    MOV ESI,EDX                         ; 004455da
        ;   Label: LAB_004455da
    SAR ESI,0x8                         ; 004455dc
    IMUL EDI,ESI,0x500                  ; 004455df
    MOV ESI,EBX                         ; 004455e5
    SAR ESI,0x8                         ; 004455e7
    MOV ESI,dword ptr [EDI + ESI*0x4 + 0xac2af8] ; 004455ea
    LEA EDI,[ECX + -0x80]               ; 004455f1
    CMP ESI,EDI                         ; 004455f4
    JGE 0x00445608                      ; 004455f6
        ;   XREF to: 00445608 (CONDITIONAL_JUMP)  ; LAB_00445608
    TEST EAX,EAX                        ; 004455f8
    JNZ 0x00445624                      ; 004455fa
        ;   XREF to: 00445624 (CONDITIONAL_JUMP)  ; LAB_00445624
    JMP 0x00445469                      ; 004455fc
        ;   XREF to: 00445469 (UNCONDITIONAL_JUMP)  ; LAB_00445469
    MOV ECX,0x7fffffff                  ; 00445601
        ;   Label: LAB_00445601
    JMP 0x0044559d                      ; 00445606
        ;   XREF to: 0044559d (UNCONDITIONAL_JUMP)  ; LAB_0044559d
    MOV ESI,dword ptr [ESP + 0x20]      ; 00445608
        ;   Label: LAB_00445608
    MOV EDI,dword ptr [ESP + 0x24]      ; 0044560c
    DEC EAX                             ; 00445610
    ADD ECX,EBP                         ; 00445611
    ADD EBX,ESI                         ; 00445613
    ADD EDX,EDI                         ; 00445615
    TEST EAX,EAX                        ; 00445617
    JG 0x004455da                       ; 00445619
        ;   XREF to: 004455da (CONDITIONAL_JUMP)  ; LAB_004455da
    TEST EAX,EAX                        ; 0044561b
    JNZ 0x00445624                      ; 0044561d
        ;   XREF to: 00445624 (CONDITIONAL_JUMP)  ; LAB_00445624
    JMP 0x00445469                      ; 0044561f
        ;   XREF to: 00445469 (UNCONDITIONAL_JUMP)  ; LAB_00445469
    CMP dword ptr [ESP + 0x4],0x0       ; 00445624
        ;   Label: LAB_00445624
    JNZ 0x00445469                      ; 00445629
        ;   XREF to: 00445469 (CONDITIONAL_JUMP)  ; LAB_00445469
    JMP 0x0044548e                      ; 0044562f
        ;   XREF to: 0044548e (UNCONDITIONAL_JUMP)  ; LAB_0044548e
    INC EAX                             ; 00445634
        ;   Label: LAB_00445634
    INC ECX                             ; 00445635
    CMP EAX,EDX                         ; 00445636
    JL 0x0044551c                       ; 00445638
        ;   XREF to: 0044551c (CONDITIONAL_JUMP)  ; LAB_0044551c
    JMP 0x00445525                      ; 0044563e
        ;   XREF to: 00445525 (UNCONDITIONAL_JUMP)  ; LAB_00445525

