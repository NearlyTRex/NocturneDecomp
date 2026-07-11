; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c1510(int param_1)
;
;
; XREF[1]:
;   FUN_004b48d0 at 004b48fe
;
; Referenced Globals:
;   string s_..\\core\\inv.cpp_00587310
;   string s_CInventory::setupItems_-_we_shou_00587320
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1510
        ;   Label: FUN_004c1510
    PUSH ESI                            ; 004c1511
    PUSH EDI                            ; 004c1512
    PUSH EBP                            ; 004c1513
    MOV EDI,dword ptr [ESP + 0x14]      ; 004c1514
    CMP dword ptr [EDI + 0x450],0x0     ; 004c1518
    JNZ 0x004c1555                      ; 004c151f
        ;   XREF to: 004c1555 (CONDITIONAL_JUMP)  ; LAB_004c1555
    MOV ESI,dword ptr [EDI + 0x8]       ; 004c1521
        ;   Label: LAB_004c1521
    XOR EBX,EBX                         ; 004c1524
    TEST ESI,ESI                        ; 004c1526
    JLE 0x004c1550                      ; 004c1528
        ;   XREF to: 004c1550 (CONDITIONAL_JUMP)  ; LAB_004c1550
    MOV ESI,EDI                         ; 004c152a
    MOV EAX,dword ptr [ESI + 0xc]       ; 004c152c
        ;   Label: LAB_004c152c
    PUSH EAX                            ; 004c152f
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004c1530
    ADD ESI,0x4                         ; 004c1536
    INC EBX                             ; 004c1539
    CALL dword ptr [EDX]                ; 004c153a
    MOV EBP,dword ptr [EDI + 0x8]       ; 004c153c
    ADD ESP,0x4                         ; 004c153f
    CMP EBX,EBP                         ; 004c1542
    JL 0x004c152c                       ; 004c1544
        ;   XREF to: 004c152c (CONDITIONAL_JUMP)  ; LAB_004c152c
    LEA EAX,[EAX]                       ; 004c1546
    LEA EDX,[EDX]                       ; 004c154c
    POP EBP                             ; 004c1550
        ;   Label: LAB_004c1550
    POP EDI                             ; 004c1551
    POP ESI                             ; 004c1552
    POP EBX                             ; 004c1553
    RET                                 ; 004c1554
    MOV ECX,0x587310                    ; 004c1555 | = "..\\core\\inv.cpp"
        ;   Label: LAB_004c1555
    MOV EBX,0x56e                       ; 004c155a
    PUSH 0x587320                       ; 004c155f | = "CInventory::setupItems - we should ow..."
    MOV dword ptr [0x01cc4800],ECX      ; 004c1564 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 004c156a | DAT_01cc4804
    CALL FUN_004c8440                   ; 004c1570
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004c1575
    JMP 0x004c1521                      ; 004c1578
        ;   XREF to: 004c1521 (UNCONDITIONAL_JUMP)  ; LAB_004c1521

