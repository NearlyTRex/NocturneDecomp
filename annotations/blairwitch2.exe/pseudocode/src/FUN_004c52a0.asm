; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004c52a0(int param_1)
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

    PUSH ESI                            ; 004c52a0
        ;   Label: FUN_004c52a0
    PUSH EDI                            ; 004c52a1
    PUSH EBP                            ; 004c52a2
    SUB ESP,0x34                        ; 004c52a3
    MOV EBP,dword ptr [ESP + 0x44]      ; 004c52a6
    CMP dword ptr [EBP + 0x4cc],0x0     ; 004c52aa
    JNZ 0x004c52d2                      ; 004c52b1
        ;   XREF to: 004c52d2 (CONDITIONAL_JUMP)  ; LAB_004c52d2
    CMP dword ptr [EBP + 0xfc],0x0      ; 004c52b3
    JNZ 0x004c52d2                      ; 004c52ba
        ;   XREF to: 004c52d2 (CONDITIONAL_JUMP)  ; LAB_004c52d2
    CMP dword ptr [EBP + 0x2d8],0xfde8  ; 004c52bc
    JL 0x004c52d2                       ; 004c52c6
        ;   XREF to: 004c52d2 (CONDITIONAL_JUMP)  ; LAB_004c52d2
    MOV ESI,dword ptr [EBP + 0x2dc]     ; 004c52c8
    TEST ESI,ESI                        ; 004c52ce
    JZ 0x004c52db                       ; 004c52d0
        ;   XREF to: 004c52db (CONDITIONAL_JUMP)  ; LAB_004c52db
    XOR EAX,EAX                         ; 004c52d2
        ;   Label: LAB_004c52d2
    ADD ESP,0x34                        ; 004c52d4
    POP EBP                             ; 004c52d7
    POP EDI                             ; 004c52d8
    POP ESI                             ; 004c52d9
    RET                                 ; 004c52da
    MOV EDI,dword ptr [0x0060b280]      ; 004c52db | DAT_0060b280
        ;   Label: LAB_004c52db
    PUSH EDI                            ; 004c52e1 | DAT_01ba5c50
    CALL FUN_0046b960                   ; 004c52e2
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 004c52e7
    TEST EAX,EAX                        ; 004c52ea
    JNZ 0x004c52d2                      ; 004c52ec
        ;   XREF to: 004c52d2 (CONDITIONAL_JUMP)  ; LAB_004c52d2
    PUSH EBX                            ; 004c52ee
    PUSH EBP                            ; 004c52ef
    CALL FUN_004089d0                   ; 004c52f0
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004089d0()
    ADD ESP,0x4                         ; 004c52f5
    PUSH ESI                            ; 004c52f8
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 004c52f9
    PUSH EBP                            ; 004c52ff
    LEA ESI,[ESP + 0x24]                ; 004c5300
    LEA EDI,[ESP + 0xc]                 ; 004c5304
    CALL dword ptr [EAX + 0x24]         ; 004c5308
    MOV ECX,0x6                         ; 004c530b
    ADD ESP,0x4                         ; 004c5310
    LEA EAX,[ESP + 0x8]                 ; 004c5313
    LEA ESI,[ESP + 0x20]                ; 004c5317
    PUSH EAX                            ; 004c531b
    MOVSD.REP ES:EDI,ESI                ; 004c531c
    CALL FUN_0041a840                   ; 004c531e
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a840()
    ADD ESP,0x8                         ; 004c5323
    MOV dword ptr [ESP + 0x34],EAX      ; 004c5326
    LEA EAX,[EBP + 0x2c0]               ; 004c532a
    PUSH EAX                            ; 004c5330
    MOV EAX,[0x0060b280]                ; 004c5331 | DAT_0060b280
    PUSH EAX                            ; 004c5336 | DAT_01ba5c50
    XOR ESI,ESI                         ; 004c5337
    CALL FUN_0046ca00                   ; 004c5339
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ca00()
    LEA ECX,[EBP + 0x4e8]               ; 004c533e
    ADD ESP,0x8                         ; 004c5344
    LEA EDI,[EBP + 0x614]               ; 004c5347
    MOV EBX,dword ptr [EBP + 0xc90]     ; 004c534d
    MOV EDX,EDI                         ; 004c5353
    TEST EBX,EBX                        ; 004c5355
    JLE 0x004c5390                      ; 004c5357
        ;   XREF to: 004c5390 (CONDITIONAL_JUMP)  ; LAB_004c5390
    MOV EBX,EDX                         ; 004c5359
        ;   Label: LAB_004c5359
    MOV EAX,ECX                         ; 004c535b
    FLD float ptr [EAX]                 ; 004c535d
    FMUL float ptr [0x005f7a60]         ; 004c535f | DAT_005f7a60
    FISTP dword ptr [EBX]               ; 004c5365
    FLD float ptr [EAX + 0x4]           ; 004c5367
    FMUL float ptr [0x005f7a60]         ; 004c536a | DAT_005f7a60
    FISTP dword ptr [EBX + 0x4]         ; 004c5370
    FLD float ptr [EAX + 0x8]           ; 004c5373
    FMUL float ptr [0x005f7a60]         ; 004c5376 | DAT_005f7a60
    FISTP dword ptr [EBX + 0x8]         ; 004c537c
    INC ESI                             ; 004c537f
    ADD ECX,0xc                         ; 004c5380
    MOV EAX,dword ptr [EBP + 0xc90]     ; 004c5383
    ADD EDX,0xc                         ; 004c5389
    CMP ESI,EAX                         ; 004c538c
    JL 0x004c5359                       ; 004c538e
        ;   XREF to: 004c5359 (CONDITIONAL_JUMP)  ; LAB_004c5359
    PUSH EDI                            ; 004c5390
        ;   Label: LAB_004c5390
    MOV EDX,dword ptr [EBP + 0xc90]     ; 004c5391
    PUSH EDX                            ; 004c5397
    MOV ECX,dword ptr [0x0061b5a8]      ; 004c5398 | DAT_0061b5a8
    PUSH ECX                            ; 004c539e | DAT_01e661b8
    CALL FUN_00531e90                   ; 004c539f
        ;   XREF to: 00531e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00531e90()
    MOV EAX,0xffff                      ; 004c53a4
    MOV EBX,dword ptr [0x01c38aec]      ; 004c53a9 | DAT_01c38aec
    ADD ESP,0xc                         ; 004c53af
    MOV EDX,dword ptr [EBP + 0x2d8]     ; 004c53b2
    SUB EAX,EBX                         ; 004c53b8
    IMUL EDX                            ; 004c53ba
    SHRD EAX,EDX,0x10                   ; 004c53bc
    PUSH EAX                            ; 004c53c0
    MOV ESI,dword ptr [0x0060b280]      ; 004c53c1 | DAT_0060b280
    PUSH ESI                            ; 004c53c7 | DAT_01ba5c50
    CALL FUN_0046b8e0                   ; 004c53c8
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b8e0()
    ADD ESP,0x8                         ; 004c53cd
    PUSH 0x0                            ; 004c53d0
    PUSH 0x4                            ; 004c53d2
    PUSH EDI                            ; 004c53d4
    LEA EDI,[EBP + 0x808]               ; 004c53d5
    PUSH EDI                            ; 004c53db
    MOV EAX,dword ptr [EBP + 0xc94]     ; 004c53dc
    PUSH EAX                            ; 004c53e2
    MOV EDX,dword ptr [EBP + 0xc90]     ; 004c53e3
    PUSH EDX                            ; 004c53e9
    MOV ECX,dword ptr [0x0061b5a8]      ; 004c53ea | DAT_0061b5a8
    PUSH ECX                            ; 004c53f0 | DAT_01e661b8
    XOR ESI,ESI                         ; 004c53f1
    CALL FUN_00532190                   ; 004c53f3
        ;   XREF to: 00532190 (UNCONDITIONAL_CALL)  ; undefined FUN_00532190()
    MOV EBX,dword ptr [EBP + 0xc94]     ; 004c53f8
    ADD ESP,0x1c                        ; 004c53fe
    TEST EBX,EBX                        ; 004c5401
    JLE 0x004c5450                      ; 004c5403
        ;   XREF to: 004c5450 (CONDITIONAL_JUMP)  ; LAB_004c5450
    MOV EBX,EBP                         ; 004c5405
    MOV EAX,[0x0060b280]                ; 004c5407 | DAT_0060b280
        ;   Label: LAB_004c5407
    MOV dword ptr [EBX + 0x810],0x0     ; 004c540c
    PUSH EDI                            ; 004c5416
    MOV dword ptr [EBX + 0x814],0x0     ; 004c5417
    INC ESI                             ; 004c5421
    MOV dword ptr [EBX + 0x818],0x0     ; 004c5422
    PUSH EAX                            ; 004c542c | DAT_01ba5c50
    MOV dword ptr [EBX + 0x81c],0x0     ; 004c542d
    ADD EBX,0x48                        ; 004c5437
    CALL FUN_0046ac20                   ; 004c543a
        ;   XREF to: 0046ac20 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ac20()
    ADD EDI,0x48                        ; 004c543f
    MOV EDX,dword ptr [EBP + 0xc94]     ; 004c5442
    ADD ESP,0x8                         ; 004c5448
    CMP ESI,EDX                         ; 004c544b
    JL 0x004c5407                       ; 004c544d
        ;   XREF to: 004c5407 (CONDITIONAL_JUMP)  ; LAB_004c5407
    NOP                                 ; 004c544f
    PUSH EBP                            ; 004c5450
        ;   Label: LAB_004c5450
    CALL FUN_00408a10                   ; 004c5451
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 004c5456
    MOV EAX,dword ptr [ESP + 0x34]      ; 004c5459
    POP EBX                             ; 004c545d
    ADD ESP,0x34                        ; 004c545e
    POP EBP                             ; 004c5461
    POP EDI                             ; 004c5462
    POP ESI                             ; 004c5463
    RET                                 ; 004c5464

