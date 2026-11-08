; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c13dc(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005c1168 at 005c117e
;
; Referenced Globals:
;   undefined4 DAT_0061f4e4
;   undefined4 DAT_0061f508
;   undefined4 DAT_0061f50c
;   undefined4 DAT_0061f510
;   undefined4 DAT_0061f52c
;   undefined1 DAT_0061f5ad
;   undefined4 DAT_0061f638
;   undefined4 DAT_0061f63c
;   undefined4 DAT_0061f640
;
; Called Functions:
;   FUN_005c11b8
;   FUN_005c12d4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c13dc
        ;   Label: FUN_005c13dc
    PUSH ESI                            ; 005c13dd
    PUSH EDI                            ; 005c13de
    PUSH EBP                            ; 005c13df
    SUB ESP,0x4                         ; 005c13e0
    MOV ESI,dword ptr [0x0061f640]      ; 005c13e3 | DAT_0061f640
    PUSH 0x61f638                       ; 005c13e9 | DAT_0061f638
    PUSH 0x61f52c                       ; 005c13ee | DAT_0061f52c
    MOV EBX,dword ptr [ESP + 0x20]      ; 005c13f3
    XOR EDX,EDX                         ; 005c13f7
    PUSH EBX                            ; 005c13f9
    MOV dword ptr [0x0061f63c],EDX      ; 005c13fa | DAT_0061f63c
    CALL FUN_005c11b8                   ; 005c1400
        ;   XREF to: 005c11b8 (UNCONDITIONAL_CALL)  ; undefined FUN_005c11b8()
    MOV EDX,EAX                         ; 005c1405
    MOV AH,byte ptr [EAX]               ; 005c1407
    ADD ESP,0xc                         ; 005c1409
    TEST AH,AH                          ; 005c140c
    JNZ 0x005c1421                      ; 005c140e
        ;   XREF to: 005c1421 (CONDITIONAL_JUMP)  ; LAB_005c1421
    MOV ESI,dword ptr [0x0061f640]      ; 005c1410 | DAT_0061f640
    MOV byte ptr [0x0061f5ad],AH        ; 005c1416 | DAT_0061f5ad
    JMP 0x005c14ed                      ; 005c141c
        ;   XREF to: 005c14ed (UNCONDITIONAL_JUMP)  ; LAB_005c14ed
    MOV EAX,[0x0061f638]                ; 005c1421 | DAT_0061f638
        ;   Label: LAB_005c1421
    SUB EAX,0xe10                       ; 005c1426
    MOV dword ptr [ESP],EAX             ; 005c142b
    MOV EAX,ESP                         ; 005c142e
    PUSH EAX                            ; 005c1430
    PUSH 0x61f5ad                       ; 005c1431 | DAT_0061f5ad
    MOV ECX,0x1                         ; 005c1436
    PUSH EDX                            ; 005c143b
    MOV dword ptr [0x0061f63c],ECX      ; 005c143c | DAT_0061f63c
    CALL FUN_005c11b8                   ; 005c1442
        ;   XREF to: 005c11b8 (UNCONDITIONAL_CALL)  ; undefined FUN_005c11b8()
    ADD ESP,0xc                         ; 005c1447
    MOV EBX,dword ptr [0x0061f638]      ; 005c144a | DAT_0061f638
    MOV ESI,dword ptr [ESP]             ; 005c1450
    SUB EBX,ESI                         ; 005c1453
    MOV ESI,EBX                         ; 005c1455
    MOV dword ptr [0x0061f640],EBX      ; 005c1457 | DAT_0061f640
    MOV BL,byte ptr [EAX]               ; 005c145d
    MOV EDX,EAX                         ; 005c145f
    CMP BL,0x2c                         ; 005c1461
    JNZ 0x005c1477                      ; 005c1464
        ;   XREF to: 005c1477 (CONDITIONAL_JUMP)  ; LAB_005c1477
    PUSH 0x61f4e4                       ; 005c1466 | DAT_0061f4e4
    INC EAX                             ; 005c146b
    PUSH EAX                            ; 005c146c
    CALL FUN_005c12d4                   ; 005c146d
        ;   XREF to: 005c12d4 (UNCONDITIONAL_CALL)  ; undefined FUN_005c12d4()
    ADD ESP,0x8                         ; 005c1472
    MOV EDX,EAX                         ; 005c1475
    MOV BH,byte ptr [EDX]               ; 005c1477
        ;   Label: LAB_005c1477
    MOV ESI,dword ptr [0x0061f640]      ; 005c1479 | DAT_0061f640
    CMP BH,0x2c                         ; 005c147f
    JNZ 0x005c14ed                      ; 005c1482
        ;   XREF to: 005c14ed (CONDITIONAL_JUMP)  ; LAB_005c14ed
    PUSH 0x61f508                       ; 005c1484 | DAT_0061f508
    INC EDX                             ; 005c1489
    PUSH EDX                            ; 005c148a
    CALL FUN_005c12d4                   ; 005c148b
        ;   XREF to: 005c12d4 (UNCONDITIONAL_CALL)  ; undefined FUN_005c12d4()
    MOV ESI,dword ptr [0x0061f640]      ; 005c1490 | DAT_0061f640
    MOV EBX,0xe10                       ; 005c1496
    MOV EDX,ESI                         ; 005c149b
    MOV EAX,ESI                         ; 005c149d
    SAR EDX,0x1f                        ; 005c149f
    IDIV EBX                            ; 005c14a2
    MOV EDI,dword ptr [0x0061f510]      ; 005c14a4 | DAT_0061f510
    MOV EBX,0x3c                        ; 005c14aa
    MOV EDX,ESI                         ; 005c14af
    SUB EDI,EAX                         ; 005c14b1
    MOV EAX,ESI                         ; 005c14b3
    SAR EDX,0x1f                        ; 005c14b5
    IDIV EBX                            ; 005c14b8
    MOV EDX,EAX                         ; 005c14ba
    SAR EDX,0x1f                        ; 005c14bc
    IDIV EBX                            ; 005c14bf
    MOV EBP,dword ptr [0x0061f50c]      ; 005c14c1 | DAT_0061f50c
    SUB EBP,EDX                         ; 005c14c7
    MOV EDX,ESI                         ; 005c14c9
    MOV EAX,ESI                         ; 005c14cb
    SAR EDX,0x1f                        ; 005c14cd
    IDIV EBX                            ; 005c14d0
    ADD ESP,0x8                         ; 005c14d2
    MOV EAX,[0x0061f508]                ; 005c14d5 | DAT_0061f508
    MOV dword ptr [0x0061f510],EDI      ; 005c14da | DAT_0061f510
    SUB EAX,EDX                         ; 005c14e0
    MOV dword ptr [0x0061f50c],EBP      ; 005c14e2 | DAT_0061f50c
    MOV [0x0061f508],EAX                ; 005c14e8 | DAT_0061f508
    MOV dword ptr [0x0061f640],ESI      ; 005c14ed | DAT_0061f640
        ;   Label: LAB_005c14ed
    ADD ESP,0x4                         ; 005c14f3
    POP EBP                             ; 005c14f6
    POP EDI                             ; 005c14f7
    POP ESI                             ; 005c14f8
    POP EBX                             ; 005c14f9
    RET                                 ; 005c14fa

