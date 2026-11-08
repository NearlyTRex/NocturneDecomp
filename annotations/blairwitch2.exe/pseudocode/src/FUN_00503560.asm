; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00503560(int param_1)
;
;
; XREF[2]:
;   FUN_005030c0 at 00503388
;   FUN_00503620 at 00503692
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503560
        ;   Label: FUN_00503560
    PUSH ESI                            ; 00503561
    MOV EAX,dword ptr [ESP + 0xc]       ; 00503562
    LEA EDX,[EAX + 0x4]                 ; 00503566
    LEA ECX,[EAX + 0x18]                ; 00503569
    MOV dword ptr [EAX + 0x20],0x1      ; 0050356c
    MOV ESI,dword ptr [ECX]             ; 00503573
    MOV EBX,dword ptr [EDX]             ; 00503575
    MOV dword ptr [EDX],ESI             ; 00503577
    MOV dword ptr [ECX],EBX             ; 00503579
    LEA ECX,[EAX + 0x8]                 ; 0050357b
    LEA EDX,[EAX + 0x1c]                ; 0050357e
    MOV EBX,dword ptr [ECX]             ; 00503581
    MOV ESI,dword ptr [EDX]             ; 00503583
    MOV dword ptr [ECX],ESI             ; 00503585
    MOV dword ptr [EDX],EBX             ; 00503587
    MOV EDX,dword ptr [EAX + 0xc]       ; 00503589
    CMP EDX,0x5                         ; 0050358c
    JZ 0x005035a3                       ; 0050358f
        ;   XREF to: 005035a3 (CONDITIONAL_JUMP)  ; LAB_005035a3
    CMP EDX,0x4                         ; 00503591
    JZ 0x005035ac                       ; 00503594
        ;   XREF to: 005035ac (CONDITIONAL_JUMP)  ; LAB_005035ac
    FLD float ptr [EAX + 0x14]          ; 00503596
        ;   Label: LAB_00503596
    FLD1                                ; 00503599
    FSUBRP                              ; 0050359b
    FSTP float ptr [EAX + 0x14]         ; 0050359d
    POP ESI                             ; 005035a0
    POP EBX                             ; 005035a1
    RET                                 ; 005035a2
    MOV dword ptr [EAX + 0xc],0x4       ; 005035a3
        ;   Label: LAB_005035a3
    JMP 0x00503596                      ; 005035aa
        ;   XREF to: 00503596 (UNCONDITIONAL_JUMP)  ; LAB_00503596
    MOV dword ptr [EAX + 0xc],0x5       ; 005035ac
        ;   Label: LAB_005035ac
    FLD float ptr [EAX + 0x14]          ; 005035b3
    FLD1                                ; 005035b6
    FSUBRP                              ; 005035b8
    FSTP float ptr [EAX + 0x14]         ; 005035ba
    POP ESI                             ; 005035bd
    POP EBX                             ; 005035be
    RET                                 ; 005035bf

