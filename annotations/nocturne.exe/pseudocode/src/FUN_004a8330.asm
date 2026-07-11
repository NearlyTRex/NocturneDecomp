; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a8330(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined1* switchdataD_004a8318 = 004a836d
;   undefined4 DAT_00584a58
;   undefined4 DAT_00584a60
;   undefined4 DAT_00584a68
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c777cc
;
; Called Functions:
;   FUN_0040dea0
;   FUN_00415b30
;   FUN_00416d40
;   FUN_00427e40
;   FUN_00427eb0
;   FUN_0056488c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8330
        ;   Label: FUN_004a8330
    PUSH ESI                            ; 004a8331
    PUSH EDI                            ; 004a8332
    PUSH EBP                            ; 004a8333
    SUB ESP,0xc                         ; 004a8334
    MOV EBX,dword ptr [ESP + 0x20]      ; 004a8337
    MOV ESI,dword ptr [ESP + 0x24]      ; 004a833b
    FLD float ptr [ESI + 0x2c]          ; 004a833f
    FLDZ                                ; 004a8342
    FCOMPP                              ; 004a8344
    FNSTSW AX                           ; 004a8346
    SAHF                                ; 004a8348
    JNC 0x004a8375                      ; 004a8349
        ;   XREF to: 004a8375 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 004a834b
    JNZ 0x004a8375                      ; 004a834e
        ;   XREF to: 004a8375 (CONDITIONAL_JUMP)  ; default
    CALL FUN_0056488c                   ; 004a8350
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; undefined FUN_0056488c()
    MOV EDX,EAX                         ; 004a8355
    MOV EDI,0x6                         ; 004a8357
    SAR EDX,0x1f                        ; 004a835c
    IDIV EDI                            ; 004a835f
    CMP EDX,0x5                         ; 004a8361
    JA 0x004a8375                       ; 004a8364
        ;   XREF to: 004a8375 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4a8318]  ; 004a8366 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xbd24]    ; 004a836d
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 004a8373
        ;   Label: LAB_004a8373
    MOV ECX,dword ptr [EBX + 0xbd24]    ; 004a8375
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 004a837b
    CMP EAX,ECX                         ; 004a837d
    JNZ 0x004a854c                      ; 004a837f
        ;   XREF to: 004a854c (CONDITIONAL_JUMP)  ; LAB_004a854c
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004a8385
        ;   Label: LAB_004a8385
    MOV EBP,dword ptr [EBX + 0xbd4c]    ; 004a8388
    MOV dword ptr [ESP + 0x8],EAX       ; 004a838e
    CMP EBP,dword ptr [ESI]             ; 004a8392
    JNZ 0x004a839e                      ; 004a8394
        ;   XREF to: 004a839e (CONDITIONAL_JUMP)  ; LAB_004a839e
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 004a8396
    MOV EDX,dword ptr [EBX + 0xbd48]    ; 004a839e
        ;   Label: LAB_004a839e
    CMP EDX,dword ptr [ESI]             ; 004a83a4
    JNZ 0x004a83b0                      ; 004a83a6
        ;   XREF to: 004a83b0 (CONDITIONAL_JUMP)  ; LAB_004a83b0
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 004a83a8
    MOV EAX,[0x005b9354]                ; 004a83b0 | DAT_005b9354
        ;   Label: LAB_004a83b0
    CMP dword ptr [EAX + 0x1e0],0x0     ; 004a83b5 | DAT_01c777cc
    JZ 0x004a83c6                       ; 004a83bc
        ;   XREF to: 004a83c6 (CONDITIONAL_JUMP)  ; LAB_004a83c6
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 004a83be
    PUSH dword ptr [ESP + 0x8]          ; 004a83c6
        ;   Label: LAB_004a83c6
    CALL FUN_0040dea0                   ; 004a83ca
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dea0()
    ADD ESP,0x4                         ; 004a83cf
    TEST EAX,EAX                        ; 004a83d2
    JZ 0x004a84e3                       ; 004a83d4
        ;   XREF to: 004a84e3 (CONDITIONAL_JUMP)  ; LAB_004a84e3
    MOV EAX,dword ptr [EBX + 0x2608]    ; 004a83da
    PUSH EAX                            ; 004a83e0
    PUSH 0x0                            ; 004a83e1
    PUSH 0x0                            ; 004a83e3
    PUSH EBX                            ; 004a83e5
    LEA EAX,[ESI + 0xc]                 ; 004a83e6
    PUSH EAX                            ; 004a83e9
    LEA EAX,[EBX + 0x30]                ; 004a83ea
    PUSH EAX                            ; 004a83ed
    LEA EAX,[EBX + 0x20]                ; 004a83ee
    PUSH EAX                            ; 004a83f1
    CALL FUN_00415b30                   ; 004a83f2
        ;   XREF to: 00415b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00415b30()
    ADD ESP,0x1c                        ; 004a83f7
    PUSH 0x1                            ; 004a83fa
    MOV EDX,dword ptr [ESI]             ; 004a83fc
    PUSH EDX                            ; 004a83fe
    PUSH EAX                            ; 004a83ff
    PUSH EBX                            ; 004a8400
    MOV EDI,EAX                         ; 004a8401
    MOV EBP,EAX                         ; 004a8403
    CALL FUN_00427eb0                   ; 004a8405
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00427eb0()
    MOV EAX,dword ptr [ESI]             ; 004a840a
    MOV ECX,dword ptr [EBX + 0xbd24]    ; 004a840c
    ADD ESP,0x10                        ; 004a8412
    CMP EAX,ECX                         ; 004a8415
    JNZ 0x004a842c                      ; 004a8417
        ;   XREF to: 004a842c (CONDITIONAL_JUMP)  ; LAB_004a842c
    PUSH 0x1                            ; 004a8419
    MOV EAX,dword ptr [EBX + 0xbd28]    ; 004a841b
    PUSH EAX                            ; 004a8421
    PUSH EDI                            ; 004a8422
    PUSH EBX                            ; 004a8423
    CALL FUN_00427eb0                   ; 004a8424
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00427eb0()
    ADD ESP,0x10                        ; 004a8429
    MOV EDX,dword ptr [EBX + 0xbd2c]    ; 004a842c
        ;   Label: LAB_004a842c
    CMP EDX,dword ptr [ESI]             ; 004a8432
    JNZ 0x004a8449                      ; 004a8434
        ;   XREF to: 004a8449 (CONDITIONAL_JUMP)  ; LAB_004a8449
    PUSH 0x1                            ; 004a8436
    MOV ECX,dword ptr [EBX + 0xbd30]    ; 004a8438
    PUSH ECX                            ; 004a843e
    PUSH EBP                            ; 004a843f
    PUSH EBX                            ; 004a8440
    CALL FUN_00427eb0                   ; 004a8441
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00427eb0()
    ADD ESP,0x10                        ; 004a8446
    MOV EDI,dword ptr [EBX + 0xbd48]    ; 004a8449
        ;   Label: LAB_004a8449
    CMP EDI,dword ptr [ESI]             ; 004a844f
    JNZ 0x004a84b5                      ; 004a8451
        ;   XREF to: 004a84b5 (CONDITIONAL_JUMP)  ; LAB_004a84b5
    PUSH 0x1                            ; 004a8453
    LEA EDI,[ESI + 0xc]                 ; 004a8455
    PUSH EDI                            ; 004a8458
    MOV EAX,dword ptr [EBX + 0xbd2c]    ; 004a8459
    PUSH EAX                            ; 004a845f
    PUSH EBX                            ; 004a8460
    CALL FUN_00427e40                   ; 004a8461
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00427e40()
    ADD ESP,0x10                        ; 004a8466
    PUSH 0x1                            ; 004a8469
    PUSH EDI                            ; 004a846b
    MOV EDX,dword ptr [EBX + 0xbd30]    ; 004a846c
    PUSH EDX                            ; 004a8472
    PUSH EBX                            ; 004a8473
    CALL FUN_00427e40                   ; 004a8474
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00427e40()
    ADD ESP,0x10                        ; 004a8479
    PUSH 0x1                            ; 004a847c
    PUSH EDI                            ; 004a847e
    MOV ECX,dword ptr [EBX + 0xbd24]    ; 004a847f
    PUSH ECX                            ; 004a8485
    PUSH EBX                            ; 004a8486
    CALL FUN_00427e40                   ; 004a8487
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00427e40()
    ADD ESP,0x10                        ; 004a848c
    PUSH 0x1                            ; 004a848f
    PUSH EDI                            ; 004a8491
    MOV EAX,dword ptr [EBX + 0xbd28]    ; 004a8492
    PUSH EAX                            ; 004a8498
    PUSH EBX                            ; 004a8499
    CALL FUN_00427e40                   ; 004a849a
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00427e40()
    ADD ESP,0x10                        ; 004a849f
    PUSH 0x1                            ; 004a84a2
    PUSH EDI                            ; 004a84a4
    MOV EDX,dword ptr [EBX + 0xbd4c]    ; 004a84a5
    PUSH EDX                            ; 004a84ab
    PUSH EBX                            ; 004a84ac
    CALL FUN_00427e40                   ; 004a84ad
        ;   XREF to: 00427e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00427e40()
    ADD ESP,0x10                        ; 004a84b2
    PUSH EBP                            ; 004a84b5
        ;   Label: LAB_004a84b5
    CALL FUN_00416d40                   ; 004a84b6
        ;   XREF to: 00416d40 (UNCONDITIONAL_CALL)  ; undefined FUN_00416d40()
    MOV EAX,dword ptr [EBX + 0xbd4c]    ; 004a84bb
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2290] ; 004a84c1
    ADD ESP,0x4                         ; 004a84c8
    TEST ECX,ECX                        ; 004a84cb
    JZ 0x004a858d                       ; 004a84cd
        ;   XREF to: 004a858d (CONDITIONAL_JUMP)  ; LAB_004a858d
    FLD float ptr [ESI + 0x8]           ; 004a84d3
        ;   Label: LAB_004a84d3
    FLD ST0                             ; 004a84d6
    FMUL double ptr [0x00584a58]        ; 004a84d8 | DAT_00584a58
    FSTP ST1                            ; 004a84de
    FSTP float ptr [ESI + 0x8]          ; 004a84e0
    MOV EDI,dword ptr [EBX + 0xbd4c]    ; 004a84e3
        ;   Label: LAB_004a84e3
    MOV EAX,dword ptr [ESI]             ; 004a84e9
    CMP EAX,EDI                         ; 004a84eb
    JZ 0x004a8599                       ; 004a84ed
        ;   XREF to: 004a8599 (CONDITIONAL_JUMP)  ; LAB_004a8599
    CMP EAX,dword ptr [EBX + 0xbd44]    ; 004a84f3
    JZ 0x004a8507                       ; 004a84f9
        ;   XREF to: 004a8507 (CONDITIONAL_JUMP)  ; LAB_004a8507
    CMP EAX,dword ptr [EBX + 0xbd48]    ; 004a84fb
    JNZ 0x004a85b1                      ; 004a8501
        ;   XREF to: 004a85b1 (CONDITIONAL_JUMP)  ; LAB_004a85b1
    MOV EAX,dword ptr [ESI + 0x4]       ; 004a8507
        ;   Label: LAB_004a8507
    MOV dword ptr [ESI + 0x4],EAX       ; 004a850a
    ADD ESP,0xc                         ; 004a850d
    POP EBP                             ; 004a8510
    POP EDI                             ; 004a8511
    POP ESI                             ; 004a8512
    POP EBX                             ; 004a8513
    RET                                 ; 004a8514
    MOV EAX,dword ptr [EBX + 0xbd28]    ; 004a8515
        ;   Label: caseD_1
    JMP 0x004a8373                      ; 004a851b
        ;   XREF to: 004a8373 (UNCONDITIONAL_JUMP)  ; LAB_004a8373
    MOV EAX,dword ptr [EBX + 0xbd2c]    ; 004a8520
        ;   Label: caseD_2
    JMP 0x004a8373                      ; 004a8526
        ;   XREF to: 004a8373 (UNCONDITIONAL_JUMP)  ; LAB_004a8373
    MOV EAX,dword ptr [EBX + 0xbd30]    ; 004a852b
        ;   Label: caseD_3
    JMP 0x004a8373                      ; 004a8531
        ;   XREF to: 004a8373 (UNCONDITIONAL_JUMP)  ; LAB_004a8373
    MOV EAX,dword ptr [EBX + 0xbd4c]    ; 004a8536
        ;   Label: caseD_4
    JMP 0x004a8373                      ; 004a853c
        ;   XREF to: 004a8373 (UNCONDITIONAL_JUMP)  ; LAB_004a8373
    MOV EAX,dword ptr [EBX + 0xbd48]    ; 004a8541
        ;   Label: caseD_5
    JMP 0x004a8373                      ; 004a8547
        ;   XREF to: 004a8373 (UNCONDITIONAL_JUMP)  ; LAB_004a8373
    CMP EAX,dword ptr [EBX + 0xbd28]    ; 004a854c
        ;   Label: LAB_004a854c
    JZ 0x004a8385                       ; 004a8552
        ;   XREF to: 004a8385 (CONDITIONAL_JUMP)  ; LAB_004a8385
    CMP EAX,dword ptr [EBX + 0xbd2c]    ; 004a8558
    JZ 0x004a8385                       ; 004a855e
        ;   XREF to: 004a8385 (CONDITIONAL_JUMP)  ; LAB_004a8385
    CMP EAX,dword ptr [EBX + 0xbd30]    ; 004a8564
    JZ 0x004a8385                       ; 004a856a
        ;   XREF to: 004a8385 (CONDITIONAL_JUMP)  ; LAB_004a8385
    CMP EAX,dword ptr [EBX + 0xbd48]    ; 004a8570
    JZ 0x004a8385                       ; 004a8576
        ;   XREF to: 004a8385 (CONDITIONAL_JUMP)  ; LAB_004a8385
    CMP EAX,dword ptr [EBX + 0xbd4c]    ; 004a857c
    JZ 0x004a8385                       ; 004a8582
        ;   XREF to: 004a8385 (CONDITIONAL_JUMP)  ; LAB_004a8385
    JMP 0x004a84e3                      ; 004a8588
        ;   XREF to: 004a84e3 (UNCONDITIONAL_JUMP)  ; LAB_004a84e3
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 004a858d
        ;   Label: LAB_004a858d
    JMP 0x004a84d3                      ; 004a8594
        ;   XREF to: 004a84d3 (UNCONDITIONAL_JUMP)  ; LAB_004a84d3
    FLD float ptr [ESI + 0x4]           ; 004a8599
        ;   Label: LAB_004a8599
    FLD ST0                             ; 004a859c
    FMUL double ptr [0x00584a68]        ; 004a859e | DAT_00584a68
    FSTP ST1                            ; 004a85a4
    FSTP float ptr [ESI + 0x4]          ; 004a85a6
    ADD ESP,0xc                         ; 004a85a9
    POP EBP                             ; 004a85ac
    POP EDI                             ; 004a85ad
    POP ESI                             ; 004a85ae
    POP EBX                             ; 004a85af
    RET                                 ; 004a85b0
    FLD float ptr [ESI + 0x4]           ; 004a85b1
        ;   Label: LAB_004a85b1
    FLD ST0                             ; 004a85b4
    FMUL double ptr [0x00584a60]        ; 004a85b6 | DAT_00584a60
    FSTP ST1                            ; 004a85bc
    FSTP float ptr [ESI + 0x4]          ; 004a85be
    ADD ESP,0xc                         ; 004a85c1
    POP EBP                             ; 004a85c4
    POP EDI                             ; 004a85c5
    POP ESI                             ; 004a85c6
    POP EBX                             ; 004a85c7
    RET                                 ; 004a85c8

