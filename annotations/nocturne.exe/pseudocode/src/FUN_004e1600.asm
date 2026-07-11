; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e1600(int param_1)
;
;
; XREF[2]:
;   FUN_004e11c0 at 004e1427
;   FUN_004e16b0 at 004e1722
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1600
        ;   Label: FUN_004e1600
    PUSH ESI                            ; 004e1601
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e1602
    LEA EDX,[EAX + 0x4]                 ; 004e1606
    LEA ECX,[EAX + 0x18]                ; 004e1609
    MOV dword ptr [EAX + 0x20],0x1      ; 004e160c
    MOV ESI,dword ptr [ECX]             ; 004e1613
    MOV EBX,dword ptr [EDX]             ; 004e1615
    MOV dword ptr [EDX],ESI             ; 004e1617
    MOV dword ptr [ECX],EBX             ; 004e1619
    LEA ECX,[EAX + 0x8]                 ; 004e161b
    LEA EDX,[EAX + 0x1c]                ; 004e161e
    MOV EBX,dword ptr [ECX]             ; 004e1621
    MOV ESI,dword ptr [EDX]             ; 004e1623
    MOV dword ptr [ECX],ESI             ; 004e1625
    MOV dword ptr [EDX],EBX             ; 004e1627
    MOV EDX,dword ptr [EAX + 0xc]       ; 004e1629
    CMP EDX,0x5                         ; 004e162c
    JZ 0x004e1643                       ; 004e162f
        ;   XREF to: 004e1643 (CONDITIONAL_JUMP)  ; LAB_004e1643
    CMP EDX,0x4                         ; 004e1631
    JZ 0x004e164c                       ; 004e1634
        ;   XREF to: 004e164c (CONDITIONAL_JUMP)  ; LAB_004e164c
    FLD float ptr [EAX + 0x14]          ; 004e1636
        ;   Label: LAB_004e1636
    FLD1                                ; 004e1639
    FSUBRP                              ; 004e163b
    FSTP float ptr [EAX + 0x14]         ; 004e163d
    POP ESI                             ; 004e1640
    POP EBX                             ; 004e1641
    RET                                 ; 004e1642
    MOV dword ptr [EAX + 0xc],0x4       ; 004e1643
        ;   Label: LAB_004e1643
    JMP 0x004e1636                      ; 004e164a
        ;   XREF to: 004e1636 (UNCONDITIONAL_JUMP)  ; LAB_004e1636
    MOV dword ptr [EAX + 0xc],0x5       ; 004e164c
        ;   Label: LAB_004e164c
    FLD float ptr [EAX + 0x14]          ; 004e1653
    FLD1                                ; 004e1656
    FSUBRP                              ; 004e1658
    FSTP float ptr [EAX + 0x14]         ; 004e165a
    POP ESI                             ; 004e165d
    POP EBX                             ; 004e165e
    RET                                 ; 004e165f

