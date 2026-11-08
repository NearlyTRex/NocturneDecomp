; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0058c330(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0058c5a0 at 0058c5ae
;
; Referenced Globals:
;   undefined1* switchdataD_0058c314 = 0058c36d
;   TerminatedCString s_limb_wav_005d88f7
;   undefined4 DAT_005d8907
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_01d21320
;   undefined4 DAT_01d21510
;
; Called Functions:
;   FUN_0040cf40
;   FUN_00414550
;   FUN_004157c0
;   FUN_00430520
;   FUN_00430590
;   FUN_00434810
;   FUN_005a35cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058c330
        ;   Label: FUN_0058c330
    PUSH ESI                            ; 0058c331
    PUSH EDI                            ; 0058c332
    PUSH EBP                            ; 0058c333
    SUB ESP,0xc                         ; 0058c334
    MOV EBX,dword ptr [ESP + 0x20]      ; 0058c337
    MOV ESI,dword ptr [ESP + 0x24]      ; 0058c33b
    FLD float ptr [ESI + 0x2c]          ; 0058c33f
    FLDZ                                ; 0058c342
    FCOMPP                              ; 0058c344
    FNSTSW AX                           ; 0058c346
    SAHF                                ; 0058c348
    JNC 0x0058c375                      ; 0058c349
        ;   XREF to: 0058c375 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 0058c34b
    JNZ 0x0058c375                      ; 0058c34e
        ;   XREF to: 0058c375 (CONDITIONAL_JUMP)  ; default
    CALL FUN_005a35cc                   ; 0058c350
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; undefined FUN_005a35cc()
    MOV EDX,EAX                         ; 0058c355
    MOV EDI,0x6                         ; 0058c357
    SAR EDX,0x1f                        ; 0058c35c
    IDIV EDI                            ; 0058c35f
    CMP EDX,0x5                         ; 0058c361
    JA 0x0058c375                       ; 0058c364
        ;   XREF to: 0058c375 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x58c314]  ; 0058c366 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xd114]    ; 0058c36d
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 0058c373
        ;   Label: LAB_0058c373
    MOV ECX,dword ptr [EBX + 0xd114]    ; 0058c375
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 0058c37b
    CMP EAX,ECX                         ; 0058c37d
    JNZ 0x0058c429                      ; 0058c37f
        ;   XREF to: 0058c429 (CONDITIONAL_JUMP)  ; LAB_0058c429
    MOV EAX,dword ptr [ESI + 0x2c]      ; 0058c385
        ;   Label: LAB_0058c385
    MOV EBP,dword ptr [EBX + 0xd12c]    ; 0058c388
    MOV dword ptr [ESP + 0x8],EAX       ; 0058c38e
    CMP EBP,dword ptr [ESI]             ; 0058c392
    JNZ 0x0058c39e                      ; 0058c394
        ;   XREF to: 0058c39e (CONDITIONAL_JUMP)  ; LAB_0058c39e
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 0058c396
    MOV EDX,dword ptr [EBX + 0xd128]    ; 0058c39e
        ;   Label: LAB_0058c39e
    CMP EDX,dword ptr [ESI]             ; 0058c3a4
    JNZ 0x0058c3b0                      ; 0058c3a6
        ;   XREF to: 0058c3b0 (CONDITIONAL_JUMP)  ; LAB_0058c3b0
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 0058c3a8
    MOV EAX,[0x005fe9dc]                ; 0058c3b0 | DAT_005fe9dc
        ;   Label: LAB_0058c3b0
    CMP dword ptr [EAX + 0x204],0x0     ; 0058c3b5 | DAT_01d21510
    JZ 0x0058c3c6                       ; 0058c3bc
        ;   XREF to: 0058c3c6 (CONDITIONAL_JUMP)  ; LAB_0058c3c6
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 0058c3be
    MOV EAX,[0x005fe9dc]                ; 0058c3c6 | DAT_005fe9dc
        ;   Label: LAB_0058c3c6
    MOV EDX,dword ptr [EAX + 0x14]      ; 0058c3cb | DAT_01d21320
    TEST EDX,EDX                        ; 0058c3ce
    JNZ 0x0058c3d6                      ; 0058c3d0
        ;   XREF to: 0058c3d6 (CONDITIONAL_JUMP)  ; LAB_0058c3d6
    MOV dword ptr [ESP + 0x8],EDX       ; 0058c3d2
    PUSH dword ptr [ESP + 0x8]          ; 0058c3d6
        ;   Label: LAB_0058c3d6
    CALL FUN_0040cf40                   ; 0058c3da
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf40()
    ADD ESP,0x4                         ; 0058c3df
    TEST EAX,EAX                        ; 0058c3e2
    JNZ 0x0058c46d                      ; 0058c3e4
        ;   XREF to: 0058c46d (CONDITIONAL_JUMP)  ; LAB_0058c46d
    ADD ESP,0xc                         ; 0058c3ea
        ;   Label: LAB_0058c3ea
    POP EBP                             ; 0058c3ed
    POP EDI                             ; 0058c3ee
    POP ESI                             ; 0058c3ef
    POP EBX                             ; 0058c3f0
    RET                                 ; 0058c3f1
    MOV EAX,dword ptr [EBX + 0xd118]    ; 0058c3f2
        ;   Label: caseD_1
    JMP 0x0058c373                      ; 0058c3f8
        ;   XREF to: 0058c373 (UNCONDITIONAL_JUMP)  ; LAB_0058c373
    MOV EAX,dword ptr [EBX + 0xd11c]    ; 0058c3fd
        ;   Label: caseD_2
    JMP 0x0058c373                      ; 0058c403
        ;   XREF to: 0058c373 (UNCONDITIONAL_JUMP)  ; LAB_0058c373
    MOV EAX,dword ptr [EBX + 0xd120]    ; 0058c408
        ;   Label: caseD_3
    JMP 0x0058c373                      ; 0058c40e
        ;   XREF to: 0058c373 (UNCONDITIONAL_JUMP)  ; LAB_0058c373
    MOV EAX,dword ptr [EBX + 0xd12c]    ; 0058c413
        ;   Label: caseD_4
    JMP 0x0058c373                      ; 0058c419
        ;   XREF to: 0058c373 (UNCONDITIONAL_JUMP)  ; LAB_0058c373
    MOV EAX,dword ptr [EBX + 0xd128]    ; 0058c41e
        ;   Label: caseD_5
    JMP 0x0058c373                      ; 0058c424
        ;   XREF to: 0058c373 (UNCONDITIONAL_JUMP)  ; LAB_0058c373
    CMP EAX,dword ptr [EBX + 0xd118]    ; 0058c429
        ;   Label: LAB_0058c429
    JZ 0x0058c385                       ; 0058c42f
        ;   XREF to: 0058c385 (CONDITIONAL_JUMP)  ; LAB_0058c385
    CMP EAX,dword ptr [EBX + 0xd11c]    ; 0058c435
    JZ 0x0058c385                       ; 0058c43b
        ;   XREF to: 0058c385 (CONDITIONAL_JUMP)  ; LAB_0058c385
    CMP EAX,dword ptr [EBX + 0xd120]    ; 0058c441
    JZ 0x0058c385                       ; 0058c447
        ;   XREF to: 0058c385 (CONDITIONAL_JUMP)  ; LAB_0058c385
    CMP EAX,dword ptr [EBX + 0xd128]    ; 0058c44d
    JZ 0x0058c385                       ; 0058c453
        ;   XREF to: 0058c385 (CONDITIONAL_JUMP)  ; LAB_0058c385
    CMP EAX,dword ptr [EBX + 0xd12c]    ; 0058c459
    JZ 0x0058c385                       ; 0058c45f
        ;   XREF to: 0058c385 (CONDITIONAL_JUMP)  ; LAB_0058c385
    ADD ESP,0xc                         ; 0058c465
    POP EBP                             ; 0058c468
    POP EDI                             ; 0058c469
    POP ESI                             ; 0058c46a
    POP EBX                             ; 0058c46b
    RET                                 ; 0058c46c
    PUSH 0x0                            ; 0058c46d
        ;   Label: LAB_0058c46d
    PUSH 0x0                            ; 0058c46f
    PUSH 0x0                            ; 0058c471
    PUSH EBX                            ; 0058c473
    LEA EAX,[ESI + 0xc]                 ; 0058c474
    PUSH EAX                            ; 0058c477
    LEA EAX,[EBX + 0x30]                ; 0058c478
    PUSH EAX                            ; 0058c47b
    LEA EAX,[EBX + 0x20]                ; 0058c47c
    PUSH EAX                            ; 0058c47f
    CALL FUN_00414550                   ; 0058c480
        ;   XREF to: 00414550 (UNCONDITIONAL_CALL)  ; undefined FUN_00414550()
    ADD ESP,0x1c                        ; 0058c485
    MOV EDI,EAX                         ; 0058c488
    PUSH 0x1                            ; 0058c48a
    MOV EBP,EAX                         ; 0058c48c
    MOV EAX,dword ptr [ESI]             ; 0058c48e
    PUSH EAX                            ; 0058c490
    PUSH EDI                            ; 0058c491
    PUSH EBX                            ; 0058c492
    CALL FUN_00430590                   ; 0058c493
        ;   XREF to: 00430590 (UNCONDITIONAL_CALL)  ; undefined FUN_00430590()
    MOV EAX,dword ptr [ESI]             ; 0058c498
    MOV EDX,dword ptr [EBX + 0xd114]    ; 0058c49a
    ADD ESP,0x10                        ; 0058c4a0
    CMP EAX,EDX                         ; 0058c4a3
    JNZ 0x0058c4ba                      ; 0058c4a5
        ;   XREF to: 0058c4ba (CONDITIONAL_JUMP)  ; LAB_0058c4ba
    PUSH 0x1                            ; 0058c4a7
    MOV ECX,dword ptr [EBX + 0xd118]    ; 0058c4a9
    PUSH ECX                            ; 0058c4af
    PUSH EDI                            ; 0058c4b0
    PUSH EBX                            ; 0058c4b1
    CALL FUN_00430590                   ; 0058c4b2
        ;   XREF to: 00430590 (UNCONDITIONAL_CALL)  ; undefined FUN_00430590()
    ADD ESP,0x10                        ; 0058c4b7
    MOV EDI,dword ptr [EBX + 0xd11c]    ; 0058c4ba
        ;   Label: LAB_0058c4ba
    CMP EDI,dword ptr [ESI]             ; 0058c4c0
    JNZ 0x0058c4d7                      ; 0058c4c2
        ;   XREF to: 0058c4d7 (CONDITIONAL_JUMP)  ; LAB_0058c4d7
    PUSH 0x1                            ; 0058c4c4
    MOV EAX,dword ptr [EBX + 0xd120]    ; 0058c4c6
    PUSH EAX                            ; 0058c4cc
    PUSH EBP                            ; 0058c4cd
    PUSH EBX                            ; 0058c4ce
    CALL FUN_00430590                   ; 0058c4cf
        ;   XREF to: 00430590 (UNCONDITIONAL_CALL)  ; undefined FUN_00430590()
    ADD ESP,0x10                        ; 0058c4d4
    MOV EDX,dword ptr [EBX + 0xd128]    ; 0058c4d7
        ;   Label: LAB_0058c4d7
    CMP EDX,dword ptr [ESI]             ; 0058c4dd
    JNZ 0x0058c543                      ; 0058c4df
        ;   XREF to: 0058c543 (CONDITIONAL_JUMP)  ; LAB_0058c543
    PUSH 0x1                            ; 0058c4e1
    LEA EDI,[ESI + 0xc]                 ; 0058c4e3
    PUSH EDI                            ; 0058c4e6
    MOV ECX,dword ptr [EBX + 0xd11c]    ; 0058c4e7
    PUSH ECX                            ; 0058c4ed
    PUSH EBX                            ; 0058c4ee
    CALL FUN_00430520                   ; 0058c4ef
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; undefined FUN_00430520()
    ADD ESP,0x10                        ; 0058c4f4
    PUSH 0x1                            ; 0058c4f7
    PUSH EDI                            ; 0058c4f9
    MOV EAX,dword ptr [EBX + 0xd120]    ; 0058c4fa
    PUSH EAX                            ; 0058c500
    PUSH EBX                            ; 0058c501
    CALL FUN_00430520                   ; 0058c502
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; undefined FUN_00430520()
    ADD ESP,0x10                        ; 0058c507
    PUSH 0x1                            ; 0058c50a
    PUSH EDI                            ; 0058c50c
    MOV EDX,dword ptr [EBX + 0xd114]    ; 0058c50d
    PUSH EDX                            ; 0058c513
    PUSH EBX                            ; 0058c514
    CALL FUN_00430520                   ; 0058c515
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; undefined FUN_00430520()
    ADD ESP,0x10                        ; 0058c51a
    PUSH 0x1                            ; 0058c51d
    PUSH EDI                            ; 0058c51f
    MOV ECX,dword ptr [EBX + 0xd118]    ; 0058c520
    PUSH ECX                            ; 0058c526
    PUSH EBX                            ; 0058c527
    CALL FUN_00430520                   ; 0058c528
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; undefined FUN_00430520()
    ADD ESP,0x10                        ; 0058c52d
    PUSH 0x1                            ; 0058c530
    PUSH EDI                            ; 0058c532
    MOV EDI,dword ptr [EBX + 0xd12c]    ; 0058c533
    PUSH EDI                            ; 0058c539
    PUSH EBX                            ; 0058c53a
    CALL FUN_00430520                   ; 0058c53b
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; undefined FUN_00430520()
    ADD ESP,0x10                        ; 0058c540
    PUSH 0x5d88f7                       ; 0058c543 | = "limb?.wav"
        ;   Label: LAB_0058c543
    PUSH EBX                            ; 0058c548
    CALL FUN_00434810                   ; 0058c549
        ;   XREF to: 00434810 (UNCONDITIONAL_CALL)  ; undefined FUN_00434810()
    ADD ESP,0x8                         ; 0058c54e
    PUSH EBP                            ; 0058c551
    CALL FUN_004157c0                   ; 0058c552
        ;   XREF to: 004157c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004157c0()
    MOV EAX,dword ptr [EBX + 0xd12c]    ; 0058c557
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0058c55d
    ADD ESP,0x4                         ; 0058c564
    TEST EBP,EBP                        ; 0058c567
    JZ 0x0058c597                       ; 0058c569
        ;   XREF to: 0058c597 (CONDITIONAL_JUMP)  ; LAB_0058c597
    FLD float ptr [ESI + 0x8]           ; 0058c56b
        ;   Label: LAB_0058c56b
    FLD ST0                             ; 0058c56e
    FMUL double ptr [0x005d8907]        ; 0058c570 | DAT_005d8907
    FSTP ST1                            ; 0058c576
    FSTP float ptr [ESI + 0x8]          ; 0058c578
    CMP dword ptr [EBX + 0xd124],0x0    ; 0058c57b
    JGE 0x0058c3ea                      ; 0058c582
        ;   XREF to: 0058c3ea (CONDITIONAL_JUMP)  ; LAB_0058c3ea
    MOV dword ptr [ESI + 0x4],0x4479c000 ; 0058c588
    ADD ESP,0xc                         ; 0058c58f
    POP EBP                             ; 0058c592
    POP EDI                             ; 0058c593
    POP ESI                             ; 0058c594
    POP EBX                             ; 0058c595
    RET                                 ; 0058c596
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 0058c597
        ;   Label: LAB_0058c597
    JMP 0x0058c56b                      ; 0058c59e
        ;   XREF to: 0058c56b (UNCONDITIONAL_JUMP)  ; LAB_0058c56b

