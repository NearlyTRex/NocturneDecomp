; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0044f360(undefined4 param_1,int *param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0044f9c0 at 0044f9e4
;
; Referenced Globals:
;   undefined4 DAT_005d7727
;   undefined4 DAT_01483a40
;   undefined4 DAT_01483a42
;   undefined4 DAT_01483a44
;   undefined4 DAT_01483a46
;   undefined4 DAT_01483a48
;   undefined4 DAT_02c9ffb0
;   undefined4 DAT_02c9ffb4
;   undefined4 DAT_02c9ffb8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044f360
        ;   Label: FUN_0044f360
    PUSH ESI                            ; 0044f361
    PUSH EDI                            ; 0044f362
    PUSH EBP                            ; 0044f363
    MOV EBP,ESP                         ; 0044f364
    SUB ESP,0x28                        ; 0044f366
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044f369
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0044f36c
    CMP dword ptr [ESI + 0x1cd0],0x0    ; 0044f36f
    JNZ 0x0044f55b                      ; 0044f376
        ;   XREF to: 0044f55b (CONDITIONAL_JUMP)  ; LAB_0044f55b
    MOV EBX,dword ptr [EAX]             ; 0044f37c
    MOV EDI,dword ptr [ESI + 0x16c]     ; 0044f37e
    MOV EDX,dword ptr [ESI + 0x170]     ; 0044f384
    SUB EBX,EDI                         ; 0044f38a
    MOV ECX,dword ptr [ESI + 0x174]     ; 0044f38c
    MOV dword ptr [EBP + -0x28],EBX     ; 0044f392
    MOV EBX,dword ptr [EAX + 0x4]       ; 0044f395
    MOV EAX,dword ptr [EAX + 0x8]       ; 0044f398
    SUB EBX,EDX                         ; 0044f39b
    SUB EAX,ECX                         ; 0044f39d
    MOV EDX,dword ptr [EBP + -0x28]     ; 0044f39f
    MOV dword ptr [EBP + -0x20],EAX     ; 0044f3a2
    MOV EAX,dword ptr [ESI + 0x180]     ; 0044f3a5
    MOV dword ptr [EBP + -0x24],EBX     ; 0044f3ab
    IMUL EDX                            ; 0044f3ae
    SHRD EAX,EDX,0x10                   ; 0044f3b0
    MOV EDX,dword ptr [EBP + -0x24]     ; 0044f3b4
    MOV EBX,EAX                         ; 0044f3b7
    MOV EAX,dword ptr [ESI + 0x18c]     ; 0044f3b9
    IMUL EDX                            ; 0044f3bf
    SHRD EAX,EDX,0x10                   ; 0044f3c1
    MOV EDX,dword ptr [EBP + -0x20]     ; 0044f3c5
    ADD EBX,EAX                         ; 0044f3c8
    MOV EAX,dword ptr [ESI + 0x198]     ; 0044f3ca
    IMUL EDX                            ; 0044f3d0
    SHRD EAX,EDX,0x10                   ; 0044f3d2
    ADD EBX,EAX                         ; 0044f3d6
    MOV dword ptr [0x02c9ffb8],EBX      ; 0044f3d8 | DAT_02c9ffb8
    TEST EBX,EBX                        ; 0044f3de
    JLE 0x0044f425                      ; 0044f3e0
        ;   XREF to: 0044f425 (CONDITIONAL_JUMP)  ; LAB_0044f425
    MOV EDX,dword ptr [EBP + -0x28]     ; 0044f3e2
    MOV EAX,dword ptr [ESI + 0x178]     ; 0044f3e5
    IMUL EDX                            ; 0044f3eb
    SHRD EAX,EDX,0x10                   ; 0044f3ed
    MOV EDX,dword ptr [EBP + -0x24]     ; 0044f3f1
    MOV EBX,EAX                         ; 0044f3f4
    MOV EAX,dword ptr [ESI + 0x184]     ; 0044f3f6
    IMUL EDX                            ; 0044f3fc
    SHRD EAX,EDX,0x10                   ; 0044f3fe
    MOV EDX,dword ptr [EBP + -0x20]     ; 0044f402
    ADD EBX,EAX                         ; 0044f405
    MOV EAX,dword ptr [ESI + 0x190]     ; 0044f407
    IMUL EDX                            ; 0044f40d
    SHRD EAX,EDX,0x10                   ; 0044f40f
    ADD EBX,EAX                         ; 0044f413
    MOV EDI,dword ptr [0x02c9ffb8]      ; 0044f415 | DAT_02c9ffb8
    MOV dword ptr [0x02c9ffb0],EBX      ; 0044f41b | DAT_02c9ffb0
    CMP EBX,EDI                         ; 0044f421
    JL 0x0044f47f                       ; 0044f423
        ;   XREF to: 0044f47f (CONDITIONAL_JUMP)  ; LAB_0044f47f
    MOV EAX,0x1483a40                   ; 0044f425
        ;   Label: LAB_0044f425
    CMP dword ptr [EAX + 0x8],0x0       ; 0044f42a | DAT_01483a48 | DAT_02c9ffb8
        ;   Label: LAB_0044f42a
    JLE 0x0044f476                      ; 0044f42e
        ;   XREF to: 0044f476 (CONDITIONAL_JUMP)  ; LAB_0044f476
    MOV EDX,dword ptr [EAX + 0x4]       ; 0044f430 | DAT_01483a44 | DAT_02c9ffb4
    MOV EBX,dword ptr [ESI + 0x1cc0]    ; 0044f433
    SAR EDX,0x10                        ; 0044f439
    IMUL EBX,EDX                        ; 0044f43c
    MOV EDX,dword ptr [EAX]             ; 0044f43f | DAT_01483a40 | DAT_02c9ffb0
    SAR EDX,0x10                        ; 0044f441
    ADD EDX,EBX                         ; 0044f444
    MOV EBX,dword ptr [ESI + 0x2f94]    ; 0044f446
    MOV DX,word ptr [EBX + EDX*0x2]     ; 0044f44c
    AND EDX,0xffff                      ; 0044f450
    JZ 0x0044f476                       ; 0044f456
        ;   XREF to: 0044f476 (CONDITIONAL_JUMP)  ; LAB_0044f476
    FILD dword ptr [EAX + 0x8]          ; 0044f458 | DAT_01483a48 | DAT_02c9ffb8
    FMUL double ptr [0x005d7727]        ; 0044f45b | DAT_005d7727
    FSTP float ptr [EBP + -0x10]        ; 0044f461
    FLD float ptr [EBP + -0x10]         ; 0044f464
    FCOMP float ptr [ESI + 0x140]       ; 0044f467
    FNSTSW AX                           ; 0044f46d
    SAHF                                ; 0044f46f
    JC 0x0044f524                       ; 0044f470
        ;   XREF to: 0044f524 (CONDITIONAL_JUMP)  ; LAB_0044f524
    XOR EAX,EAX                         ; 0044f476
        ;   Label: LAB_0044f476
    MOV ESP,EBP                         ; 0044f478
    POP EBP                             ; 0044f47a
    POP EDI                             ; 0044f47b
    POP ESI                             ; 0044f47c
    POP EBX                             ; 0044f47d
    RET                                 ; 0044f47e
    MOV EAX,EDI                         ; 0044f47f
        ;   Label: LAB_0044f47f
    NEG EAX                             ; 0044f481
    CMP EAX,EBX                         ; 0044f483
    JGE 0x0044f425                      ; 0044f485
        ;   XREF to: 0044f425 (CONDITIONAL_JUMP)  ; LAB_0044f425
    MOV EDX,dword ptr [EBP + -0x28]     ; 0044f487
    MOV EAX,dword ptr [ESI + 0x17c]     ; 0044f48a
    IMUL EDX                            ; 0044f490
    SHRD EAX,EDX,0x10                   ; 0044f492
    MOV EDX,dword ptr [EBP + -0x24]     ; 0044f496
    MOV EBX,EAX                         ; 0044f499
    MOV EAX,dword ptr [ESI + 0x188]     ; 0044f49b
    IMUL EDX                            ; 0044f4a1
    SHRD EAX,EDX,0x10                   ; 0044f4a3
    MOV EDX,dword ptr [EBP + -0x20]     ; 0044f4a7
    ADD EBX,EAX                         ; 0044f4aa
    MOV EAX,dword ptr [ESI + 0x194]     ; 0044f4ac
    IMUL EDX                            ; 0044f4b2
    SHRD EAX,EDX,0x10                   ; 0044f4b4
    ADD EBX,EAX                         ; 0044f4b8
    MOV ECX,dword ptr [0x02c9ffb8]      ; 0044f4ba | DAT_02c9ffb8
    MOV dword ptr [0x02c9ffb4],EBX      ; 0044f4c0 | DAT_02c9ffb4
    CMP EBX,ECX                         ; 0044f4c6
    JGE 0x0044f425                      ; 0044f4c8
        ;   XREF to: 0044f425 (CONDITIONAL_JUMP)  ; LAB_0044f425
    MOV EAX,ECX                         ; 0044f4ce
    NEG EAX                             ; 0044f4d0
    CMP EAX,EBX                         ; 0044f4d2
    JGE 0x0044f425                      ; 0044f4d4
        ;   XREF to: 0044f425 (CONDITIONAL_JUMP)  ; LAB_0044f425
    MOV EAX,[0x02c9ffb0]                ; 0044f4da | DAT_02c9ffb0
    MOV EBX,ECX                         ; 0044f4df
    MOV EDX,dword ptr [ESI + 0x1c0]     ; 0044f4e1
    IMUL EDX                            ; 0044f4e7
    IDIV EBX                            ; 0044f4e9
    MOV EDX,dword ptr [ESI + 0x1c8]     ; 0044f4eb
    ADD EAX,EDX                         ; 0044f4f1
    MOV EBX,dword ptr [0x02c9ffb8]      ; 0044f4f3 | DAT_02c9ffb8
    MOV [0x02c9ffb0],EAX                ; 0044f4f9 | DAT_02c9ffb0
    MOV EDX,dword ptr [ESI + 0x1c4]     ; 0044f4fe
    MOV EAX,[0x02c9ffb4]                ; 0044f504 | DAT_02c9ffb4
    IMUL EDX                            ; 0044f509
    IDIV EBX                            ; 0044f50b
    MOV EDX,dword ptr [ESI + 0x1cc]     ; 0044f50d
    ADD EAX,EDX                         ; 0044f513
    MOV [0x02c9ffb4],EAX                ; 0044f515 | DAT_02c9ffb4
    MOV EAX,0x2c9ffb0                   ; 0044f51a
    JMP 0x0044f42a                      ; 0044f51f
        ;   XREF to: 0044f42a (UNCONDITIONAL_JUMP)  ; LAB_0044f42a
    FLD float ptr [ESI + 0x140]         ; 0044f524
        ;   Label: LAB_0044f524
    FSUB float ptr [EBP + -0x10]        ; 0044f52a
    FDIV float ptr [ESI + 0x140]        ; 0044f52d
    FSTP float ptr [EBP + -0x10]        ; 0044f533
    MOV EAX,dword ptr [EBP + 0x20]      ; 0044f536
    MOV dword ptr [EBP + -0x4],EAX      ; 0044f539
    FILD dword ptr [EBP + -0x4]         ; 0044f53c
    FMUL float ptr [EBP + -0x10]        ; 0044f53f
    FSTP float ptr [EBP + -0x10]        ; 0044f542
    FLD float ptr [EBP + 0xfffffff0]    ; 0044f545
    FISTP dword ptr [EBP + 0x20]        ; 0044f54b
    MOV EAX,dword ptr [EBP + 0x20]      ; 0044f551
    MOV ESP,EBP                         ; 0044f554
    POP EBP                             ; 0044f556
    POP EDI                             ; 0044f557
    POP ESI                             ; 0044f558
    POP EBX                             ; 0044f559
    RET                                 ; 0044f55a
    MOV EBX,dword ptr [EAX]             ; 0044f55b
        ;   Label: LAB_0044f55b
    MOV ECX,dword ptr [ESI + 0x16c]     ; 0044f55d
    MOV EDI,dword ptr [ESI + 0x170]     ; 0044f563
    SUB EBX,ECX                         ; 0044f569
    MOV EDX,dword ptr [ESI + 0x174]     ; 0044f56b
    MOV dword ptr [EBP + -0x1c],EBX     ; 0044f571
    MOV EBX,dword ptr [EAX + 0x4]       ; 0044f574
    MOV EAX,dword ptr [EAX + 0x8]       ; 0044f577
    SUB EBX,EDI                         ; 0044f57a
    SUB EAX,EDX                         ; 0044f57c
    MOV EDX,dword ptr [EBP + -0x1c]     ; 0044f57e
    MOV dword ptr [EBP + -0x14],EAX     ; 0044f581
    MOV EAX,dword ptr [ESI + 0x180]     ; 0044f584
    MOV dword ptr [EBP + -0x18],EBX     ; 0044f58a
    IMUL EDX                            ; 0044f58d
    SHRD EAX,EDX,0x10                   ; 0044f58f
    MOV EDX,dword ptr [EBP + -0x18]     ; 0044f593
    MOV EBX,EAX                         ; 0044f596
    MOV EAX,dword ptr [ESI + 0x18c]     ; 0044f598
    IMUL EDX                            ; 0044f59e
    SHRD EAX,EDX,0x10                   ; 0044f5a0
    MOV EDX,dword ptr [EBP + -0x14]     ; 0044f5a4
    ADD EBX,EAX                         ; 0044f5a7
    MOV EAX,dword ptr [ESI + 0x198]     ; 0044f5a9
    IMUL EDX                            ; 0044f5af
    SHRD EAX,EDX,0x10                   ; 0044f5b1
    ADD EBX,EAX                         ; 0044f5b5
    MOV dword ptr [0x02c9ffb8],EBX      ; 0044f5b7 | DAT_02c9ffb8
    TEST EBX,EBX                        ; 0044f5bd
    JLE 0x0044f60a                      ; 0044f5bf
        ;   XREF to: 0044f60a (CONDITIONAL_JUMP)  ; LAB_0044f60a
    MOV EDX,dword ptr [EBP + -0x1c]     ; 0044f5c1
    MOV EAX,dword ptr [ESI + 0x178]     ; 0044f5c4
    IMUL EDX                            ; 0044f5ca
    SHRD EAX,EDX,0x10                   ; 0044f5cc
    MOV EDX,dword ptr [EBP + -0x18]     ; 0044f5d0
    MOV EBX,EAX                         ; 0044f5d3
    MOV EAX,dword ptr [ESI + 0x184]     ; 0044f5d5
    IMUL EDX                            ; 0044f5db
    SHRD EAX,EDX,0x10                   ; 0044f5dd
    MOV EDX,dword ptr [EBP + -0x14]     ; 0044f5e1
    ADD EBX,EAX                         ; 0044f5e4
    MOV EAX,dword ptr [ESI + 0x190]     ; 0044f5e6
    IMUL EDX                            ; 0044f5ec
    SHRD EAX,EDX,0x10                   ; 0044f5ee
    ADD EBX,EAX                         ; 0044f5f2
    MOV dword ptr [0x02c9ffb0],EBX      ; 0044f5f4 | DAT_02c9ffb0
    MOV EAX,EBX                         ; 0044f5fa
    MOV EBX,dword ptr [0x02c9ffb8]      ; 0044f5fc | DAT_02c9ffb8
    CMP EAX,EBX                         ; 0044f602
    JL 0x0044f8bc                       ; 0044f604
        ;   XREF to: 0044f8bc (CONDITIONAL_JUMP)  ; LAB_0044f8bc
    MOV EAX,0x1483a40                   ; 0044f60a
        ;   Label: LAB_0044f60a
    MOV EDI,dword ptr [EAX + 0x8]       ; 0044f60f | DAT_01483a48 | DAT_02c9ffb8
        ;   Label: LAB_0044f60f
    MOV EBX,EAX                         ; 0044f612
    TEST EDI,EDI                        ; 0044f614
    JLE 0x0044f476                      ; 0044f616
        ;   XREF to: 0044f476 (CONDITIONAL_JUMP)  ; LAB_0044f476
    MOV dword ptr [EBP + -0x8],0x1      ; 0044f61c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0044f623 | DAT_01483a44 | DAT_02c9ffb4
    MOV ECX,dword ptr [ESI + 0x1cc0]    ; 0044f626
    SAR EDX,0x10                        ; 0044f62c
    IMUL ECX,EDX                        ; 0044f62f
    MOV EDX,dword ptr [EAX]             ; 0044f632 | DAT_01483a40 | DAT_02c9ffb0
    SAR EDX,0x10                        ; 0044f634
    ADD EDX,ECX                         ; 0044f637
    MOV ECX,dword ptr [ESI + 0x2f94]    ; 0044f639
    ADD EDX,EDX                         ; 0044f63f
    ADD EDX,ECX                         ; 0044f641
    XOR EDI,EDI                         ; 0044f643
    MOV DX,word ptr [EDX]               ; 0044f645
    AND EDX,0xffff                      ; 0044f648
    MOV ECX,dword ptr [EAX + 0x8]       ; 0044f64e | DAT_01483a48
    ADD EDX,0x90                        ; 0044f651
    CMP EDX,ECX                         ; 0044f657
    JG 0x0044f96b                       ; 0044f659
        ;   XREF to: 0044f96b (CONDITIONAL_JUMP)  ; LAB_0044f96b
    INC word ptr [EBX + 0x2]            ; 0044f65f | DAT_01483a42
        ;   Label: LAB_0044f65f
    MOV EAX,dword ptr [EBX]             ; 0044f663 | DAT_01483a40
    MOV EDX,dword ptr [ESI + 0x1cc0]    ; 0044f665
    SAR EAX,0x10                        ; 0044f66b
    CMP EAX,EDX                         ; 0044f66e
    JGE 0x0044f6ea                      ; 0044f670
        ;   XREF to: 0044f6ea (CONDITIONAL_JUMP)  ; LAB_0044f6ea
    MOV EDX,dword ptr [EBX + 0x4]       ; 0044f672 | DAT_01483a44
    MOV ECX,dword ptr [ESI + 0x1cc0]    ; 0044f675
    SAR EDX,0x10                        ; 0044f67b
    IMUL EDX,ECX                        ; 0044f67e
    ADD EAX,EDX                         ; 0044f681
    MOV EDX,dword ptr [ESI + 0x2f94]    ; 0044f683
    MOV AX,word ptr [EDX + EAX*0x2]     ; 0044f689
    AND EAX,0xffff                      ; 0044f68d
    MOV EDX,dword ptr [EBX + 0x8]       ; 0044f692 | DAT_01483a48
    ADD EAX,0x90                        ; 0044f695
    CMP EAX,EDX                         ; 0044f69a
    JLE 0x0044f6e7                      ; 0044f69c
        ;   XREF to: 0044f6e7 (CONDITIONAL_JUMP)  ; LAB_0044f6e7
    MOV EAX,dword ptr [EBX]             ; 0044f69e | DAT_01483a40
    MOV CL,byte ptr [ESI + 0x1cc8]      ; 0044f6a0
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 0044f6a6
    SAR EAX,CL                          ; 0044f6ac
    MOV CL,byte ptr [ESI + 0x1ccc]      ; 0044f6ae
    AND EDX,EAX                         ; 0044f6b4
    MOV EAX,dword ptr [EBX + 0x4]       ; 0044f6b6 | DAT_01483a44
    SAR EAX,CL                          ; 0044f6b9
    AND EAX,dword ptr [ESI + 0x1c68]    ; 0044f6bb
    MOV CL,byte ptr [ESI + 0x1c60]      ; 0044f6c1
    SHL EAX,CL                          ; 0044f6c7
    ADD EDX,EAX                         ; 0044f6c9
    MOV EAX,dword ptr [ESI + 0x1c54]    ; 0044f6cb
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0044f6d1
    AND EAX,0xff                        ; 0044f6d4
    SHL EAX,0xa                         ; 0044f6d9
    MOV EDX,dword ptr [EBP + 0x20]      ; 0044f6dc
    IMUL EDX                            ; 0044f6df
    SHRD EAX,EDX,0x10                   ; 0044f6e1
    ADD EDI,EAX                         ; 0044f6e5
    INC dword ptr [EBP + -0x8]          ; 0044f6e7
        ;   Label: LAB_0044f6e7
    MOV EDX,dword ptr [EBX]             ; 0044f6ea | DAT_01483a40
        ;   Label: LAB_0044f6ea
    SUB EDX,0x20000                     ; 0044f6ec
    MOV EAX,EDX                         ; 0044f6f2
    SAR EAX,0x10                        ; 0044f6f4
    MOV dword ptr [EBX],EDX             ; 0044f6f7 | DAT_01483a40
    TEST EAX,EAX                        ; 0044f6f9
    JLE 0x0044f77c                      ; 0044f6fb
        ;   XREF to: 0044f77c (CONDITIONAL_JUMP)  ; LAB_0044f77c
    MOV EDX,dword ptr [EBX + 0x4]       ; 0044f701 | DAT_01483a44
    MOV ECX,dword ptr [ESI + 0x1cc0]    ; 0044f704
    SAR EDX,0x10                        ; 0044f70a
    IMUL EDX,ECX                        ; 0044f70d
    ADD EAX,EDX                         ; 0044f710
    LEA EDX,[EAX + EAX*0x1]             ; 0044f712
    MOV EAX,dword ptr [ESI + 0x2f94]    ; 0044f715
    MOV AX,word ptr [EDX + EAX*0x1]     ; 0044f71b
    AND EAX,0xffff                      ; 0044f71f
    MOV EDX,dword ptr [EBX + 0x8]       ; 0044f724 | DAT_01483a48
    ADD EAX,0x90                        ; 0044f727
    CMP EAX,EDX                         ; 0044f72c
    JLE 0x0044f779                      ; 0044f72e
        ;   XREF to: 0044f779 (CONDITIONAL_JUMP)  ; LAB_0044f779
    MOV EAX,dword ptr [EBX]             ; 0044f730 | DAT_01483a40
    MOV CL,byte ptr [ESI + 0x1cc8]      ; 0044f732
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 0044f738
    SAR EAX,CL                          ; 0044f73e
    MOV CL,byte ptr [ESI + 0x1ccc]      ; 0044f740
    AND EDX,EAX                         ; 0044f746
    MOV EAX,dword ptr [EBX + 0x4]       ; 0044f748 | DAT_01483a44
    SAR EAX,CL                          ; 0044f74b
    AND EAX,dword ptr [ESI + 0x1c68]    ; 0044f74d
    MOV CL,byte ptr [ESI + 0x1c60]      ; 0044f753
    SHL EAX,CL                          ; 0044f759
    ADD EAX,EDX                         ; 0044f75b
    MOV EDX,dword ptr [ESI + 0x1c54]    ; 0044f75d
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0044f763
    AND EAX,0xff                        ; 0044f766
    SHL EAX,0xa                         ; 0044f76b
    MOV EDX,dword ptr [EBP + 0x20]      ; 0044f76e
    IMUL EDX                            ; 0044f771
    SHRD EAX,EDX,0x10                   ; 0044f773
    ADD EDI,EAX                         ; 0044f777
    INC dword ptr [EBP + -0x8]          ; 0044f779
        ;   Label: LAB_0044f779
    MOV AX,word ptr [EBX + 0x6]         ; 0044f77c | DAT_01483a46
        ;   Label: LAB_0044f77c
    MOV CX,word ptr [EBX + 0x2]         ; 0044f780 | DAT_01483a42
    INC EAX                             ; 0044f784
    INC ECX                             ; 0044f785
    MOV word ptr [EBX + 0x6],AX         ; 0044f786 | DAT_01483a46
    MOV word ptr [EBX + 0x2],CX         ; 0044f78a | DAT_01483a42
    MOV EAX,dword ptr [EBX + 0x4]       ; 0044f78e | DAT_01483a44
    MOV EDX,dword ptr [ESI + 0x1cc4]    ; 0044f791
    SAR EAX,0x10                        ; 0044f797
    CMP EAX,EDX                         ; 0044f79a
    JGE 0x0044f821                      ; 0044f79c
        ;   XREF to: 0044f821 (CONDITIONAL_JUMP)  ; LAB_0044f821
    MOV EDX,dword ptr [ESI + 0x1cc0]    ; 0044f7a2
    IMUL EDX,EAX                        ; 0044f7a8
    MOV EAX,dword ptr [EBX]             ; 0044f7ab | DAT_01483a40
    SAR EAX,0x10                        ; 0044f7ad
    ADD EAX,EDX                         ; 0044f7b0
    MOV EDX,dword ptr [ESI + 0x2f94]    ; 0044f7b2
    MOV AX,word ptr [EDX + EAX*0x2]     ; 0044f7b8
    AND EAX,0xffff                      ; 0044f7bc
    MOV ECX,dword ptr [EBX + 0x8]       ; 0044f7c1 | DAT_01483a48
    ADD EAX,0x90                        ; 0044f7c4
    CMP EAX,ECX                         ; 0044f7c9
    JLE 0x0044f81e                      ; 0044f7cb
        ;   XREF to: 0044f81e (CONDITIONAL_JUMP)  ; LAB_0044f81e
    MOV EAX,dword ptr [EBX]             ; 0044f7cd | DAT_01483a40
    MOV CL,byte ptr [ESI + 0x1cc8]      ; 0044f7cf
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 0044f7d5
    SAR EAX,CL                          ; 0044f7db
    AND EDX,EAX                         ; 0044f7dd
    MOV CL,byte ptr [ESI + 0x1ccc]      ; 0044f7df
    MOV dword ptr [EBP + -0xc],EDX      ; 0044f7e5
    MOV EAX,dword ptr [EBX + 0x4]       ; 0044f7e8 | DAT_01483a44
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 0044f7eb
    SAR EAX,CL                          ; 0044f7f1
    MOV CL,byte ptr [ESI + 0x1c60]      ; 0044f7f3
    AND EAX,EDX                         ; 0044f7f9
    SHL EAX,CL                          ; 0044f7fb
    MOV ECX,dword ptr [EBP + -0xc]      ; 0044f7fd
    MOV EDX,dword ptr [ESI + 0x1c54]    ; 0044f800
    ADD EAX,ECX                         ; 0044f806
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0044f808
    AND EAX,0xff                        ; 0044f80b
    SHL EAX,0xa                         ; 0044f810
    MOV EDX,dword ptr [EBP + 0x20]      ; 0044f813
    IMUL EDX                            ; 0044f816
    SHRD EAX,EDX,0x10                   ; 0044f818
    ADD EDI,EAX                         ; 0044f81c
    INC dword ptr [EBP + -0x8]          ; 0044f81e
        ;   Label: LAB_0044f81e
    MOV EDX,dword ptr [EBX + 0x4]       ; 0044f821 | DAT_01483a44
        ;   Label: LAB_0044f821
    SUB EDX,0x20000                     ; 0044f824
    MOV dword ptr [EBX + 0x4],EDX       ; 0044f82a | DAT_01483a44
    TEST EDX,EDX                        ; 0044f82d
    JLE 0x0044f8a9                      ; 0044f82f
        ;   XREF to: 0044f8a9 (CONDITIONAL_JUMP)  ; LAB_0044f8a9
    SAR EDX,0x10                        ; 0044f831
    IMUL EDX,dword ptr [ESI + 0x1cc0]   ; 0044f834
    MOV EAX,dword ptr [EBX]             ; 0044f83b | DAT_01483a40
    SAR EAX,0x10                        ; 0044f83d
    ADD EAX,EDX                         ; 0044f840
    MOV EDX,dword ptr [ESI + 0x2f94]    ; 0044f842
    MOV AX,word ptr [EDX + EAX*0x2]     ; 0044f848
    AND EAX,0xffff                      ; 0044f84c
    MOV EDX,dword ptr [EBX + 0x8]       ; 0044f851 | DAT_01483a48
    ADD EAX,0x90                        ; 0044f854
    CMP EAX,EDX                         ; 0044f859
    JLE 0x0044f8a6                      ; 0044f85b
        ;   XREF to: 0044f8a6 (CONDITIONAL_JUMP)  ; LAB_0044f8a6
    MOV EAX,dword ptr [EBX]             ; 0044f85d | DAT_01483a40
    MOV CL,byte ptr [ESI + 0x1cc8]      ; 0044f85f
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 0044f865
    SAR EAX,CL                          ; 0044f86b
    MOV CL,byte ptr [ESI + 0x1ccc]      ; 0044f86d
    AND EDX,EAX                         ; 0044f873
    MOV EAX,dword ptr [EBX + 0x4]       ; 0044f875 | DAT_01483a44
    SAR EAX,CL                          ; 0044f878
    AND EAX,dword ptr [ESI + 0x1c68]    ; 0044f87a
    MOV CL,byte ptr [ESI + 0x1c60]      ; 0044f880
    SHL EAX,CL                          ; 0044f886
    ADD EDX,EAX                         ; 0044f888
    MOV EAX,dword ptr [ESI + 0x1c54]    ; 0044f88a
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0044f890
    AND EAX,0xff                        ; 0044f893
    SHL EAX,0xa                         ; 0044f898
    MOV EDX,dword ptr [EBP + 0x20]      ; 0044f89b
    IMUL EDX                            ; 0044f89e
    SHRD EAX,EDX,0x10                   ; 0044f8a0
    ADD EDI,EAX                         ; 0044f8a4
    INC dword ptr [EBP + -0x8]          ; 0044f8a6
        ;   Label: LAB_0044f8a6
    MOV ESI,dword ptr [EBP + -0x8]      ; 0044f8a9
        ;   Label: LAB_0044f8a9
    MOV EDX,EDI                         ; 0044f8ac
    MOV EAX,EDI                         ; 0044f8ae
    SAR EDX,0x1f                        ; 0044f8b0
    IDIV ESI                            ; 0044f8b3
    MOV ESP,EBP                         ; 0044f8b5
    POP EBP                             ; 0044f8b7
    POP EDI                             ; 0044f8b8
    POP ESI                             ; 0044f8b9
    POP EBX                             ; 0044f8ba
    RET                                 ; 0044f8bb
    MOV EAX,EBX                         ; 0044f8bc
        ;   Label: LAB_0044f8bc
    MOV EDI,dword ptr [0x02c9ffb0]      ; 0044f8be | DAT_02c9ffb0
    NEG EAX                             ; 0044f8c4
    CMP EAX,EDI                         ; 0044f8c6
    JGE 0x0044f60a                      ; 0044f8c8
        ;   XREF to: 0044f60a (CONDITIONAL_JUMP)  ; LAB_0044f60a
    MOV EDX,dword ptr [EBP + -0x1c]     ; 0044f8ce
    MOV EAX,dword ptr [ESI + 0x17c]     ; 0044f8d1
    IMUL EDX                            ; 0044f8d7
    SHRD EAX,EDX,0x10                   ; 0044f8d9
    MOV EDX,dword ptr [EBP + -0x18]     ; 0044f8dd
    MOV EBX,EAX                         ; 0044f8e0
    MOV EAX,dword ptr [ESI + 0x188]     ; 0044f8e2
    IMUL EDX                            ; 0044f8e8
    SHRD EAX,EDX,0x10                   ; 0044f8ea
    MOV EDX,dword ptr [EBP + -0x14]     ; 0044f8ee
    ADD EBX,EAX                         ; 0044f8f1
    MOV EAX,dword ptr [ESI + 0x194]     ; 0044f8f3
    IMUL EDX                            ; 0044f8f9
    SHRD EAX,EDX,0x10                   ; 0044f8fb
    ADD EBX,EAX                         ; 0044f8ff
    MOV EDX,dword ptr [0x02c9ffb8]      ; 0044f901 | DAT_02c9ffb8
    MOV dword ptr [0x02c9ffb4],EBX      ; 0044f907 | DAT_02c9ffb4
    CMP EBX,EDX                         ; 0044f90d
    JGE 0x0044f60a                      ; 0044f90f
        ;   XREF to: 0044f60a (CONDITIONAL_JUMP)  ; LAB_0044f60a
    MOV EAX,EDX                         ; 0044f915
    NEG EAX                             ; 0044f917
    CMP EAX,EBX                         ; 0044f919
    JGE 0x0044f60a                      ; 0044f91b
        ;   XREF to: 0044f60a (CONDITIONAL_JUMP)  ; LAB_0044f60a
    MOV EAX,[0x02c9ffb0]                ; 0044f921 | DAT_02c9ffb0
    MOV EBX,EDX                         ; 0044f926
    MOV EDX,dword ptr [ESI + 0x1c0]     ; 0044f928
    IMUL EDX                            ; 0044f92e
    IDIV EBX                            ; 0044f930
    MOV EDX,dword ptr [ESI + 0x1c8]     ; 0044f932
    ADD EAX,EDX                         ; 0044f938
    MOV EBX,dword ptr [0x02c9ffb8]      ; 0044f93a | DAT_02c9ffb8
    MOV [0x02c9ffb0],EAX                ; 0044f940 | DAT_02c9ffb0
    MOV EDX,dword ptr [ESI + 0x1c4]     ; 0044f945
    MOV EAX,[0x02c9ffb4]                ; 0044f94b | DAT_02c9ffb4
    IMUL EDX                            ; 0044f950
    IDIV EBX                            ; 0044f952
    MOV EDX,dword ptr [ESI + 0x1cc]     ; 0044f954
    ADD EAX,EDX                         ; 0044f95a
    MOV [0x02c9ffb4],EAX                ; 0044f95c | DAT_02c9ffb4
    MOV EAX,0x2c9ffb0                   ; 0044f961
    JMP 0x0044f60f                      ; 0044f966
        ;   XREF to: 0044f60f (UNCONDITIONAL_JUMP)  ; LAB_0044f60f
    MOV EDI,dword ptr [EAX]             ; 0044f96b | DAT_01483a40
        ;   Label: LAB_0044f96b
    MOV CL,byte ptr [ESI + 0x1cc8]      ; 0044f96d
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 0044f973
    MOV EAX,dword ptr [EAX + 0x4]       ; 0044f979 | DAT_01483a44
    SAR EDI,CL                          ; 0044f97c
    MOV CL,byte ptr [ESI + 0x1ccc]      ; 0044f97e
    AND EDX,EDI                         ; 0044f984
    MOV EDI,dword ptr [ESI + 0x1c68]    ; 0044f986
    SAR EAX,CL                          ; 0044f98c
    MOV CL,byte ptr [ESI + 0x1c60]      ; 0044f98e
    AND EAX,EDI                         ; 0044f994
    SHL EAX,CL                          ; 0044f996
    ADD EAX,EDX                         ; 0044f998
    MOV EDX,dword ptr [ESI + 0x1c54]    ; 0044f99a
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0044f9a0
    AND EAX,0xff                        ; 0044f9a3
    SHL EAX,0xa                         ; 0044f9a8
    MOV EDX,dword ptr [EBP + 0x20]      ; 0044f9ab
    IMUL EDX                            ; 0044f9ae
    SHRD EAX,EDX,0x10                   ; 0044f9b0
    MOV EDI,EAX                         ; 0044f9b4
    JMP 0x0044f65f                      ; 0044f9b6
        ;   XREF to: 0044f65f (UNCONDITIONAL_JUMP)  ; LAB_0044f65f

