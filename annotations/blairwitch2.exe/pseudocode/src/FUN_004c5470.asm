; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004c5470(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f7a60
;   undefined4 DAT_0060b280
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c38aec
;   undefined4 DAT_01e661b8
;
; Called Functions:
;   FUN_004089d0
;   FUN_00408a10
;   FUN_0041a840
;   FUN_0046ac20
;   FUN_0046b8e0
;   FUN_0046b960
;   FUN_0046ca00
;   FUN_00531e90
;   FUN_00532190
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c5470
        ;   Label: FUN_004c5470
    PUSH ESI                            ; 004c5471
    PUSH EBP                            ; 004c5472
    SUB ESP,0x34                        ; 004c5473
    MOV EBP,dword ptr [ESP + 0x44]      ; 004c5476
    CMP dword ptr [EBP + 0x4cc],0x0     ; 004c547a
    JNZ 0x004c5496                      ; 004c5481
        ;   XREF to: 004c5496 (CONDITIONAL_JUMP)  ; LAB_004c5496
    CMP dword ptr [EBP + 0x2d8],0x0     ; 004c5483
    JZ 0x004c5496                       ; 004c548a
        ;   XREF to: 004c5496 (CONDITIONAL_JUMP)  ; LAB_004c5496
    MOV EBX,dword ptr [EBP + 0x2dc]     ; 004c548c
    TEST EBX,EBX                        ; 004c5492
    JZ 0x004c549f                       ; 004c5494
        ;   XREF to: 004c549f (CONDITIONAL_JUMP)  ; LAB_004c549f
    XOR EAX,EAX                         ; 004c5496
        ;   Label: LAB_004c5496
    ADD ESP,0x34                        ; 004c5498
    POP EBP                             ; 004c549b
    POP ESI                             ; 004c549c
    POP EBX                             ; 004c549d
    RET                                 ; 004c549e
    MOV ESI,dword ptr [0x0060b280]      ; 004c549f | DAT_0060b280
        ;   Label: LAB_004c549f
    PUSH ESI                            ; 004c54a5 | DAT_01ba5c50
    CALL FUN_0046b960                   ; 004c54a6
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 004c54ab
    TEST EAX,EAX                        ; 004c54ae
    JNZ 0x004c5496                      ; 004c54b0
        ;   XREF to: 004c5496 (CONDITIONAL_JUMP)  ; LAB_004c5496
    PUSH EDI                            ; 004c54b2
    PUSH EBP                            ; 004c54b3
    CALL FUN_004089d0                   ; 004c54b4
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004089d0()
    ADD ESP,0x4                         ; 004c54b9
    PUSH EBX                            ; 004c54bc
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 004c54bd
    PUSH EBP                            ; 004c54c3
    LEA ESI,[ESP + 0x24]                ; 004c54c4
    LEA EDI,[ESP + 0xc]                 ; 004c54c8
    CALL dword ptr [EAX + 0x24]         ; 004c54cc
    MOV ECX,0x6                         ; 004c54cf
    ADD ESP,0x4                         ; 004c54d4
    LEA EAX,[ESP + 0x8]                 ; 004c54d7
    LEA ESI,[ESP + 0x20]                ; 004c54db
    PUSH EAX                            ; 004c54df
    MOVSD.REP ES:EDI,ESI                ; 004c54e0
    CALL FUN_0041a840                   ; 004c54e2
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a840()
    ADD ESP,0x8                         ; 004c54e7
    MOV dword ptr [ESP + 0x34],EAX      ; 004c54ea
    LEA EAX,[EBP + 0x2c0]               ; 004c54ee
    PUSH EAX                            ; 004c54f4
    MOV EDI,dword ptr [0x0060b280]      ; 004c54f5 | DAT_0060b280
    PUSH EDI                            ; 004c54fb | DAT_01ba5c50
    XOR ESI,ESI                         ; 004c54fc
    CALL FUN_0046ca00                   ; 004c54fe
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ca00()
    LEA ECX,[EBP + 0x4e8]               ; 004c5503
    ADD ESP,0x8                         ; 004c5509
    LEA EDI,[EBP + 0x614]               ; 004c550c
    MOV EAX,dword ptr [EBP + 0xc90]     ; 004c5512
    MOV EDX,EDI                         ; 004c5518
    TEST EAX,EAX                        ; 004c551a
    JLE 0x004c5560                      ; 004c551c
        ;   XREF to: 004c5560 (CONDITIONAL_JUMP)  ; LAB_004c5560
    MOV EBX,EDX                         ; 004c551e
        ;   Label: LAB_004c551e
    MOV EAX,ECX                         ; 004c5520
    FLD float ptr [EAX]                 ; 004c5522
    FMUL float ptr [0x005f7a60]         ; 004c5524 | DAT_005f7a60
    FISTP dword ptr [EBX]               ; 004c552a
    FLD float ptr [EAX + 0x4]           ; 004c552c
    FMUL float ptr [0x005f7a60]         ; 004c552f | DAT_005f7a60
    FISTP dword ptr [EBX + 0x4]         ; 004c5535
    FLD float ptr [EAX + 0x8]           ; 004c5538
    FMUL float ptr [0x005f7a60]         ; 004c553b | DAT_005f7a60
    FISTP dword ptr [EBX + 0x8]         ; 004c5541
    INC ESI                             ; 004c5544
    ADD ECX,0xc                         ; 004c5545
    MOV EBX,dword ptr [EBP + 0xc90]     ; 004c5548
    ADD EDX,0xc                         ; 004c554e
    CMP ESI,EBX                         ; 004c5551
    JL 0x004c551e                       ; 004c5553
        ;   XREF to: 004c551e (CONDITIONAL_JUMP)  ; LAB_004c551e
    LEA EAX,[EAX]                       ; 004c5555
    LEA EDX,[EDX]                       ; 004c555b
    MOV EBX,EBX                         ; 004c555e
    PUSH EDI                            ; 004c5560
        ;   Label: LAB_004c5560
    MOV ESI,dword ptr [EBP + 0xc90]     ; 004c5561
    PUSH ESI                            ; 004c5567
    MOV EAX,[0x0061b5a8]                ; 004c5568 | DAT_0061b5a8
    PUSH EAX                            ; 004c556d | DAT_01e661b8
    CALL FUN_00531e90                   ; 004c556e
        ;   XREF to: 00531e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00531e90()
    MOV EAX,0xffff                      ; 004c5573
    MOV EDX,dword ptr [0x01c38aec]      ; 004c5578 | DAT_01c38aec
    ADD ESP,0xc                         ; 004c557e
    SUB EAX,EDX                         ; 004c5581
    MOV EDX,dword ptr [EBP + 0x2d8]     ; 004c5583
    IMUL EDX                            ; 004c5589
    SHRD EAX,EDX,0x10                   ; 004c558b
    PUSH EAX                            ; 004c558f
    MOV ECX,dword ptr [0x0060b280]      ; 004c5590 | DAT_0060b280
    PUSH ECX                            ; 004c5596 | DAT_01ba5c50
    CALL FUN_0046b8e0                   ; 004c5597
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b8e0()
    ADD ESP,0x8                         ; 004c559c
    PUSH 0x0                            ; 004c559f
    PUSH 0x4                            ; 004c55a1
    PUSH EDI                            ; 004c55a3
    LEA EDI,[EBP + 0x808]               ; 004c55a4
    PUSH EDI                            ; 004c55aa
    MOV EBX,dword ptr [EBP + 0xc94]     ; 004c55ab
    PUSH EBX                            ; 004c55b1
    MOV ESI,dword ptr [EBP + 0xc90]     ; 004c55b2
    PUSH ESI                            ; 004c55b8
    MOV EAX,[0x0061b5a8]                ; 004c55b9 | DAT_0061b5a8
    PUSH EAX                            ; 004c55be | DAT_01e661b8
    CALL FUN_00532190                   ; 004c55bf
        ;   XREF to: 00532190 (UNCONDITIONAL_CALL)  ; undefined FUN_00532190()
    XOR ESI,ESI                         ; 004c55c4
    MOV EDX,dword ptr [EBP + 0xc94]     ; 004c55c6
    ADD ESP,0x1c                        ; 004c55cc
    TEST EDX,EDX                        ; 004c55cf
    JLE 0x004c5620                      ; 004c55d1
        ;   XREF to: 004c5620 (CONDITIONAL_JUMP)  ; LAB_004c5620
    MOV EBX,EBP                         ; 004c55d3
    MOV ECX,dword ptr [0x0060b280]      ; 004c55d5 | DAT_0060b280
        ;   Label: LAB_004c55d5
    MOV dword ptr [EBX + 0x810],0x0     ; 004c55db
    PUSH EDI                            ; 004c55e5
    MOV dword ptr [EBX + 0x814],0x0     ; 004c55e6
    INC ESI                             ; 004c55f0
    MOV dword ptr [EBX + 0x818],0x0     ; 004c55f1
    PUSH ECX                            ; 004c55fb | DAT_01ba5c50
    MOV dword ptr [EBX + 0x81c],0x0     ; 004c55fc
    ADD EBX,0x48                        ; 004c5606
    CALL FUN_0046ac20                   ; 004c5609
        ;   XREF to: 0046ac20 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ac20()
    ADD EDI,0x48                        ; 004c560e
    MOV EAX,dword ptr [EBP + 0xc94]     ; 004c5611
    ADD ESP,0x8                         ; 004c5617
    CMP ESI,EAX                         ; 004c561a
    JL 0x004c55d5                       ; 004c561c
        ;   XREF to: 004c55d5 (CONDITIONAL_JUMP)  ; LAB_004c55d5
    MOV EAX,EAX                         ; 004c561e
    PUSH EBP                            ; 004c5620
        ;   Label: LAB_004c5620
    CALL FUN_00408a10                   ; 004c5621
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 004c5626
    MOV EAX,dword ptr [ESP + 0x34]      ; 004c5629
    POP EDI                             ; 004c562d
    ADD ESP,0x34                        ; 004c562e
    POP EBP                             ; 004c5631
    POP ESI                             ; 004c5632
    POP EBX                             ; 004c5633
    RET                                 ; 004c5634

