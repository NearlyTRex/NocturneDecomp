; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00587400(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fdca0
;   undefined4 DAT_0060b280
;   undefined4 DAT_0061b5a8
;
; Called Functions:
;   FUN_004089d0
;   FUN_00408a10
;   FUN_0041a840
;   FUN_00469d00
;   FUN_0046b880
;   FUN_0046b8d0
;   FUN_0046b8e0
;   FUN_0046b960
;   FUN_0046ca00
;   FUN_00531a90
;   FUN_00531e90
;   FUN_00533f40
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00587400
        ;   Label: FUN_00587400
    SUB ESP,0x34                        ; 00587401
    MOV EBP,dword ptr [ESP + 0x3c]      ; 00587404
    MOV EDX,dword ptr [0x0060b280]      ; 00587408 | DAT_0060b280
    PUSH EDX                            ; 0058740e
    CALL FUN_0046b960                   ; 0058740f
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 00587414
    TEST EAX,EAX                        ; 00587417
    JZ 0x00587422                       ; 00587419
        ;   XREF to: 00587422 (CONDITIONAL_JUMP)  ; LAB_00587422
    XOR EAX,EAX                         ; 0058741b
    ADD ESP,0x34                        ; 0058741d
    POP EBP                             ; 00587420
    RET                                 ; 00587421
    PUSH EDI                            ; 00587422
        ;   Label: LAB_00587422
    PUSH ESI                            ; 00587423
    PUSH EBP                            ; 00587424
    CALL FUN_004089d0                   ; 00587425
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004089d0()
    ADD ESP,0x4                         ; 0058742a
    PUSH 0x0                            ; 0058742d
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 0058742f
    PUSH EBP                            ; 00587435
    LEA ESI,[ESP + 0x28]                ; 00587436
    LEA EDI,[ESP + 0x10]                ; 0058743a
    CALL dword ptr [EAX + 0x24]         ; 0058743e
    MOV ECX,0x6                         ; 00587441
    ADD ESP,0x4                         ; 00587446
    LEA EAX,[ESP + 0xc]                 ; 00587449
    LEA ESI,[ESP + 0x24]                ; 0058744d
    PUSH EAX                            ; 00587451
    MOVSD.REP ES:EDI,ESI                ; 00587452
    CALL FUN_0041a840                   ; 00587454
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a840()
    ADD ESP,0x8                         ; 00587459
    MOV dword ptr [ESP + 0x38],EAX      ; 0058745c
    TEST EAX,EAX                        ; 00587460
    JZ 0x00587601                       ; 00587462
        ;   XREF to: 00587601 (CONDITIONAL_JUMP)  ; LAB_00587601
    PUSH EBX                            ; 00587468
    MOV ECX,dword ptr [EBP + 0x2c0]     ; 00587469
    PUSH ECX                            ; 0058746f
    MOV EBX,dword ptr [0x0060b280]      ; 00587470 | DAT_0060b280
    PUSH EBX                            ; 00587476
    CALL FUN_0046b8e0                   ; 00587477
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b8e0()
    ADD ESP,0x8                         ; 0058747c
    PUSH 0x0                            ; 0058747f
    MOV ESI,dword ptr [0x0060b280]      ; 00587481 | DAT_0060b280
    PUSH ESI                            ; 00587487
    CALL FUN_0046b8d0                   ; 00587488
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b8d0()
    MOV EDX,dword ptr [EBP + 0x2b384]   ; 0058748d
    LEA EAX,[EDX*0x4 + 0x0]             ; 00587493
    SUB EAX,EDX                         ; 0058749a
    SHL EAX,0x3                         ; 0058749c
    ADD ESP,0x8                         ; 0058749f
    ADD EAX,0x61e704                    ; 005874a2
    PUSH EAX                            ; 005874a7
    MOV EDI,dword ptr [0x0060b280]      ; 005874a8 | DAT_0060b280
    PUSH EDI                            ; 005874ae
    XOR ESI,ESI                         ; 005874af
    CALL FUN_0046ca00                   ; 005874b1
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ca00()
    MOV EAX,dword ptr [EBP + 0x3f4]     ; 005874b6
    ADD ESP,0x8                         ; 005874bc
    TEST EAX,EAX                        ; 005874bf
    JLE 0x00587510                      ; 005874c1
        ;   XREF to: 00587510 (CONDITIONAL_JUMP)  ; LAB_00587510
    MOV ECX,0x265cc48                   ; 005874c3
    LEA EDX,[EBP + 0x3f8]               ; 005874c8
    MOV EBX,ECX                         ; 005874ce
        ;   Label: LAB_005874ce
    MOV EAX,EDX                         ; 005874d0
    FLD float ptr [EAX]                 ; 005874d2
    FMUL float ptr [0x005fdca0]         ; 005874d4 | DAT_005fdca0
    FISTP dword ptr [EBX]               ; 005874da
    FLD float ptr [EAX + 0x4]           ; 005874dc
    FMUL float ptr [0x005fdca0]         ; 005874df | DAT_005fdca0
    FISTP dword ptr [EBX + 0x4]         ; 005874e5
    FLD float ptr [EAX + 0x8]           ; 005874e8
    FMUL float ptr [0x005fdca0]         ; 005874eb | DAT_005fdca0
    FISTP dword ptr [EBX + 0x8]         ; 005874f1
    INC ESI                             ; 005874f4
    ADD EDX,0x20                        ; 005874f5
    MOV EBX,dword ptr [EBP + 0x3f4]     ; 005874f8
    ADD ECX,0xc                         ; 005874fe
    CMP ESI,EBX                         ; 00587501
    JL 0x005874ce                       ; 00587503
        ;   XREF to: 005874ce (CONDITIONAL_JUMP)  ; LAB_005874ce
    LEA EAX,[EAX]                       ; 00587505
    LEA EDX,[EDX]                       ; 0058750b
    MOV EBX,EBX                         ; 0058750e
    PUSH 0x265cc48                      ; 00587510
        ;   Label: LAB_00587510
    MOV ESI,dword ptr [EBP + 0x3f4]     ; 00587515
    PUSH ESI                            ; 0058751b
    MOV EDI,dword ptr [0x0061b5a8]      ; 0058751c | DAT_0061b5a8
    PUSH EDI                            ; 00587522
    XOR EBX,EBX                         ; 00587523
    CALL FUN_00531e90                   ; 00587525
        ;   XREF to: 00531e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00531e90()
    MOV EAX,dword ptr [EBP + 0x3f4]     ; 0058752a
    ADD ESP,0xc                         ; 00587530
    TEST EAX,EAX                        ; 00587533
    JLE 0x005875c0                      ; 00587535
        ;   XREF to: 005875c0 (CONDITIONAL_JUMP)  ; LAB_005875c0
    LEA ESI,[EBP + 0x404]               ; 0058753b
    XOR EDI,EDI                         ; 00587541
    PUSH EBX                            ; 00587543
        ;   Label: LAB_00587543
    PUSH 0x265370c                      ; 00587544
    PUSH ESI                            ; 00587549
    MOV EDX,dword ptr [0x0061b5a8]      ; 0058754a | DAT_0061b5a8
    PUSH EDX                            ; 00587550
    CALL FUN_00531a90                   ; 00587551
        ;   XREF to: 00531a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00531a90()
    MOV ECX,dword ptr [0x0060b280]      ; 00587556 | DAT_0060b280
    ADD ESP,0x10                        ; 0058755c
    MOV EAX,dword ptr [EBP + 0x3e8]     ; 0058755f
    MOV ECX,dword ptr [ECX]             ; 00587565
    SHL EAX,0x8                         ; 00587567
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x20] ; 0058756a
    IMUL EDX                            ; 0058756e
    SHRD EAX,EDX,0x10                   ; 00587570
    MOV dword ptr [ECX + EDI*0x1 + 0x20],EAX ; 00587574
    MOV EAX,dword ptr [EBP + 0x3ec]     ; 00587578
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x24] ; 0058757e
    SHL EAX,0x8                         ; 00587582
    IMUL EDX                            ; 00587585
    SHRD EAX,EDX,0x10                   ; 00587587
    MOV dword ptr [ECX + EDI*0x1 + 0x24],EAX ; 0058758b
    MOV EAX,dword ptr [EBP + 0x3f0]     ; 0058758f
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x28] ; 00587595
    SHL EAX,0x8                         ; 00587599
    ADD EDI,0x30                        ; 0058759c
    IMUL EDX                            ; 0058759f
    SHRD EAX,EDX,0x10                   ; 005875a1
    MOV dword ptr [ECX + EDI*0x1 + -0x8],EAX ; 005875a5
    INC EBX                             ; 005875a9
    MOV ECX,dword ptr [EBP + 0x3f4]     ; 005875aa
    ADD ESI,0x20                        ; 005875b0
    CMP EBX,ECX                         ; 005875b3
    JL 0x00587543                       ; 005875b5
        ;   XREF to: 00587543 (CONDITIONAL_JUMP)  ; LAB_00587543
    LEA EAX,[EAX]                       ; 005875b7
    LEA EDX,[EDX]                       ; 005875bd
    MOV ESI,dword ptr [EBP + 0x2c0]     ; 005875c0
        ;   Label: LAB_005875c0
    LEA EBX,[EBP + 0x8104]              ; 005875c6
    CMP ESI,0xfde8                      ; 005875cc
    JLE 0x00587615                      ; 005875d2
        ;   XREF to: 00587615 (CONDITIONAL_JUMP)  ; LAB_00587615
    PUSH -0x1                           ; 005875d4
    MOV EAX,dword ptr [EBP + 0x2b390]   ; 005875d6
    PUSH EAX                            ; 005875dc
    PUSH EBX                            ; 005875dd
    MOV EDX,dword ptr [0x0061b5a8]      ; 005875de | DAT_0061b5a8
    PUSH EDX                            ; 005875e4
    CALL FUN_00533f40                   ; 005875e5
        ;   XREF to: 00533f40 (UNCONDITIONAL_CALL)  ; undefined FUN_00533f40()
    ADD ESP,0x10                        ; 005875ea
    LEA EAX,[EAX]                       ; 005875ed
    PUSH 0x0                            ; 005875f0
        ;   Label: LAB_005875f0
    MOV EAX,[0x0060b280]                ; 005875f2 | DAT_0060b280
    PUSH EAX                            ; 005875f7
    CALL FUN_0046b880                   ; 005875f8
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b880()
    ADD ESP,0x8                         ; 005875fd
    POP EBX                             ; 00587600
    PUSH EBP                            ; 00587601
        ;   Label: LAB_00587601
    CALL FUN_00408a10                   ; 00587602
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 00587607
    MOV EAX,dword ptr [ESP + 0x38]      ; 0058760a
    POP ESI                             ; 0058760e
    POP EDI                             ; 0058760f
    ADD ESP,0x34                        ; 00587610
    POP EBP                             ; 00587613
    RET                                 ; 00587614
    MOV EDI,dword ptr [EBP + 0x2b390]   ; 00587615
        ;   Label: LAB_00587615
    XOR ESI,ESI                         ; 0058761b
    TEST EDI,EDI                        ; 0058761d
    JLE 0x005875f0                      ; 0058761f
        ;   XREF to: 005875f0 (CONDITIONAL_JUMP)  ; LAB_005875f0
    PUSH 0x267                          ; 00587621
        ;   Label: LAB_00587621
    PUSH EBX                            ; 00587626
    MOV ECX,dword ptr [0x0060b280]      ; 00587627 | DAT_0060b280
    PUSH ECX                            ; 0058762d
    INC ESI                             ; 0058762e
    CALL FUN_00469d00                   ; 0058762f
        ;   XREF to: 00469d00 (UNCONDITIONAL_CALL)  ; undefined FUN_00469d00()
    ADD EBX,0x48                        ; 00587634
    MOV EDI,dword ptr [EBP + 0x2b390]   ; 00587637
    ADD ESP,0xc                         ; 0058763d
    CMP ESI,EDI                         ; 00587640
    JL 0x00587621                       ; 00587642
        ;   XREF to: 00587621 (CONDITIONAL_JUMP)  ; LAB_00587621
    JMP 0x005875f0                      ; 00587644
        ;   XREF to: 005875f0 (UNCONDITIONAL_JUMP)  ; LAB_005875f0

