; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050f440(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,int param_7)
;
;
; XREF[1]:
;   FUN_0050f5c0 at 0050f699
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;
; Called Functions:
;   FUN_00434e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f440
        ;   Label: FUN_0050f440
    PUSH ESI                            ; 0050f441
    PUSH EDI                            ; 0050f442
    PUSH EBP                            ; 0050f443
    SUB ESP,0x1c                        ; 0050f444
    MOV EBP,dword ptr [ESP + 0x44]      ; 0050f447
    MOV EAX,dword ptr [ESP + 0x30]      ; 0050f44b
    CMP dword ptr [EAX + 0x20],0x0      ; 0050f44f
    JZ 0x0050f45b                       ; 0050f453
        ;   XREF to: 0050f45b (CONDITIONAL_JUMP)  ; LAB_0050f45b
    CMP dword ptr [EAX + 0x14],0x0      ; 0050f455
    JNZ 0x0050f463                      ; 0050f459
        ;   XREF to: 0050f463 (CONDITIONAL_JUMP)  ; LAB_0050f463
    ADD ESP,0x1c                        ; 0050f45b
        ;   Label: LAB_0050f45b
    POP EBP                             ; 0050f45e
    POP EDI                             ; 0050f45f
    POP ESI                             ; 0050f460
    POP EBX                             ; 0050f461
    RET                                 ; 0050f462
    MOV EDX,dword ptr [ESP + 0x34]      ; 0050f463
        ;   Label: LAB_0050f463
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0050f467
    MOV ESI,dword ptr [0x005fba20]      ; 0050f46b | DAT_005fba20
    SUB EDX,EBX                         ; 0050f471
    IMUL EDX,ESI                        ; 0050f473
    MOV EAX,EDX                         ; 0050f476
    SAR EDX,0x1f                        ; 0050f478
    SHL EDX,0x3                         ; 0050f47b
    SBB EAX,EDX                         ; 0050f47e
    SAR EAX,0x3                         ; 0050f480
    MOV dword ptr [ESP],EAX             ; 0050f483
    CALL FUN_00434e80                   ; 0050f486
        ;   XREF to: 00434e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00434e80()
    MOV dword ptr [ESP + 0x14],EAX      ; 0050f48b
    MOV EAX,dword ptr [ESP + 0x38]      ; 0050f48f
    SHL EAX,0x2                         ; 0050f493
    MOV dword ptr [ESP + 0x8],EAX       ; 0050f496
    MOV EAX,dword ptr [ESP + 0x40]      ; 0050f49a
    SHL EAX,0x2                         ; 0050f49e
    MOV dword ptr [ESP + 0xc],EAX       ; 0050f4a1
    MOV EAX,dword ptr [ESP + 0x48]      ; 0050f4a5
    SHL EAX,0x2                         ; 0050f4a9
    MOV dword ptr [ESP + 0x4],EAX       ; 0050f4ac
    MOV EDX,dword ptr [ESP + 0x30]      ; 0050f4b0
        ;   Label: LAB_0050f4b0
    MOV EDI,dword ptr [ESP + 0xc]       ; 0050f4b4
    MOV EDX,dword ptr [EDX + 0x20]      ; 0050f4b8
    MOV EAX,dword ptr [ESP + 0x30]      ; 0050f4bb
    ADD EDX,EDI                         ; 0050f4bf
    MOV EAX,dword ptr [EAX + 0x14]      ; 0050f4c1
    MOV EBX,dword ptr [EDX]             ; 0050f4c4
    MOV EDX,dword ptr [EDX + 0x4]       ; 0050f4c6
    ADD EBX,EAX                         ; 0050f4c9
    ADD EDX,EAX                         ; 0050f4cb
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050f4cd
    MOV dword ptr [ESP + 0x18],EDX      ; 0050f4d1
    MOV EDX,dword ptr [ESP]             ; 0050f4d5
    MOV EAX,dword ptr [EAX + 0x1c5faec] ; 0050f4d8
    ADD EDX,EAX                         ; 0050f4de
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050f4e0
    MOV dword ptr [ESP + 0x10],EDX      ; 0050f4e4
    CMP EBX,EAX                         ; 0050f4e8
    JNC 0x0050f4f8                      ; 0050f4ea
        ;   XREF to: 0050f4f8 (CONDITIONAL_JUMP)  ; LAB_0050f4f8
        ;   Label: LAB_0050f4ea
    XOR EAX,EAX                         ; 0050f4ec
    MOV AX,word ptr [EBX]               ; 0050f4ee
    LEA ESI,[EBX + 0x4]                 ; 0050f4f1
    CMP EAX,EBP                         ; 0050f4f4
    JLE 0x0050f51c                      ; 0050f4f6
        ;   XREF to: 0050f51c (CONDITIONAL_JUMP)  ; LAB_0050f51c
    MOV ESI,dword ptr [ESP + 0x8]       ; 0050f4f8
        ;   Label: LAB_0050f4f8
    MOV EBX,dword ptr [ESP + 0xc]       ; 0050f4fc
    MOV EDI,dword ptr [ESP + 0x4]       ; 0050f500
    ADD ESI,0x4                         ; 0050f504
    ADD EBX,0x4                         ; 0050f507
    MOV dword ptr [ESP + 0x8],ESI       ; 0050f50a
    MOV dword ptr [ESP + 0xc],EBX       ; 0050f50e
    CMP EBX,EDI                         ; 0050f512
    JG 0x0050f45b                       ; 0050f514
        ;   XREF to: 0050f45b (CONDITIONAL_JUMP)  ; LAB_0050f45b
    JMP 0x0050f4b0                      ; 0050f51a
        ;   XREF to: 0050f4b0 (UNCONDITIONAL_JUMP)  ; LAB_0050f4b0
    XOR ECX,ECX                         ; 0050f51c
        ;   Label: LAB_0050f51c
    MOV CX,word ptr [EBX + 0x2]         ; 0050f51e
    LEA EDX,[ECX + 0x3]                 ; 0050f522
    LEA EDI,[EAX + ECX*0x1]             ; 0050f525
    AND DL,0xfc                         ; 0050f528
    DEC EDI                             ; 0050f52b
    LEA EBX,[ESI + EDX*0x1]             ; 0050f52c
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0050f52f
    CMP EDI,EDX                         ; 0050f533
    JGE 0x0050f53d                      ; 0050f535
        ;   XREF to: 0050f53d (CONDITIONAL_JUMP)  ; LAB_0050f53d
    CMP EBX,dword ptr [ESP + 0x18]      ; 0050f537
    JMP 0x0050f4ea                      ; 0050f53b
        ;   XREF to: 0050f4ea (UNCONDITIONAL_JUMP)  ; LAB_0050f4ea
    CMP EAX,EDX                         ; 0050f53d
        ;   Label: LAB_0050f53d
    JL 0x0050f56f                       ; 0050f53f
        ;   XREF to: 0050f56f (CONDITIONAL_JUMP)  ; LAB_0050f56f
    MOV EDX,dword ptr [0x005fba20]      ; 0050f541 | DAT_005fba20
        ;   Label: LAB_0050f541
    IMUL EDX,EAX                        ; 0050f547
    MOV EAX,EDX                         ; 0050f54a
    SAR EDX,0x1f                        ; 0050f54c
    SHL EDX,0x3                         ; 0050f54f
    SBB EAX,EDX                         ; 0050f552
    SAR EAX,0x3                         ; 0050f554
    ADD EAX,dword ptr [ESP + 0x10]      ; 0050f557
    CMP EDI,EBP                         ; 0050f55b
    JLE 0x0050f57b                      ; 0050f55d
        ;   XREF to: 0050f57b (CONDITIONAL_JUMP)  ; LAB_0050f57b
    SUB EDI,EBP                         ; 0050f55f
    SUB ECX,EDI                         ; 0050f561
    PUSH ECX                            ; 0050f563
    PUSH ESI                            ; 0050f564
    PUSH EAX                            ; 0050f565
    CALL dword ptr [ESP + 0x20]         ; 0050f566
    ADD ESP,0xc                         ; 0050f56a
    JMP 0x0050f4f8                      ; 0050f56d
        ;   XREF to: 0050f4f8 (UNCONDITIONAL_JUMP)  ; LAB_0050f4f8
    SUB EDX,EAX                         ; 0050f56f
        ;   Label: LAB_0050f56f
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0050f571
    ADD ESI,EDX                         ; 0050f575
    SUB ECX,EDX                         ; 0050f577
    JMP 0x0050f541                      ; 0050f579
        ;   XREF to: 0050f541 (UNCONDITIONAL_JUMP)  ; LAB_0050f541
    PUSH ECX                            ; 0050f57b
        ;   Label: LAB_0050f57b
    PUSH ESI                            ; 0050f57c
    PUSH EAX                            ; 0050f57d
    CALL dword ptr [ESP + 0x20]         ; 0050f57e
    ADD ESP,0xc                         ; 0050f582
    CMP EBX,dword ptr [ESP + 0x18]      ; 0050f585
    JNC 0x0050f4f8                      ; 0050f589
        ;   XREF to: 0050f4f8 (CONDITIONAL_JUMP)  ; LAB_0050f4f8
    XOR EAX,EAX                         ; 0050f58f
    MOV AX,word ptr [EBX]               ; 0050f591
    LEA ESI,[EBX + 0x4]                 ; 0050f594
    CMP EAX,EBP                         ; 0050f597
    JG 0x0050f4f8                       ; 0050f599
        ;   XREF to: 0050f4f8 (CONDITIONAL_JUMP)  ; LAB_0050f4f8
    XOR ECX,ECX                         ; 0050f59f
    MOV CX,word ptr [EBX + 0x2]         ; 0050f5a1
    LEA EBX,[ECX + 0x3]                 ; 0050f5a5
    LEA EDI,[EAX + ECX*0x1]             ; 0050f5a8
    AND BL,0xfc                         ; 0050f5ab
    DEC EDI                             ; 0050f5ae
    ADD EBX,ESI                         ; 0050f5af
    JMP 0x0050f541                      ; 0050f5b1
        ;   XREF to: 0050f541 (UNCONDITIONAL_JUMP)  ; LAB_0050f541

