; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004ca5a0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005e0bc0
;   undefined4 DAT_005f2afc
;   undefined4 DAT_00603b28
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c6e24c
;   undefined4 DAT_01ed78c8
;
; Called Functions:
;   FUN_004087f0
;   FUN_00408830
;   FUN_0041daf0
;   FUN_0046c800
;   FUN_0046d4c0
;   FUN_0046d540
;   FUN_0046e5e0
;   FUN_00538ad0
;   FUN_00538dd0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004ca5a0
        ;   Label: FUN_004ca5a0
    PUSH EDI                            ; 004ca5a1
    PUSH EBP                            ; 004ca5a2
    SUB ESP,0x34                        ; 004ca5a3
    MOV EBP,dword ptr [ESP + 0x44]      ; 004ca5a6
    CMP dword ptr [EBP + 0x3a0],0x0     ; 004ca5aa
    JNZ 0x004ca5d2                      ; 004ca5b1
        ;   XREF to: 004ca5d2 (CONDITIONAL_JUMP)  ; LAB_004ca5d2
    CMP dword ptr [EBP + 0xfc],0x0      ; 004ca5b3
    JNZ 0x004ca5d2                      ; 004ca5ba
        ;   XREF to: 004ca5d2 (CONDITIONAL_JUMP)  ; LAB_004ca5d2
    CMP dword ptr [EBP + 0x1ac],0xfde8  ; 004ca5bc
    JL 0x004ca5d2                       ; 004ca5c6
        ;   XREF to: 004ca5d2 (CONDITIONAL_JUMP)  ; LAB_004ca5d2
    MOV ESI,dword ptr [EBP + 0x1b0]     ; 004ca5c8
    TEST ESI,ESI                        ; 004ca5ce
    JZ 0x004ca5db                       ; 004ca5d0
        ;   XREF to: 004ca5db (CONDITIONAL_JUMP)  ; LAB_004ca5db
    XOR EAX,EAX                         ; 004ca5d2
        ;   Label: LAB_004ca5d2
    ADD ESP,0x34                        ; 004ca5d4
    POP EBP                             ; 004ca5d7
    POP EDI                             ; 004ca5d8
    POP ESI                             ; 004ca5d9
    RET                                 ; 004ca5da
    MOV EDI,dword ptr [0x005f2afc]      ; 004ca5db | DAT_005f2afc
        ;   Label: LAB_004ca5db
    PUSH EDI                            ; 004ca5e1 | DAT_01bdd7e4
    CALL FUN_0046d540                   ; 004ca5e2
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d540()
    ADD ESP,0x4                         ; 004ca5e7
    TEST EAX,EAX                        ; 004ca5ea
    JNZ 0x004ca5d2                      ; 004ca5ec
        ;   XREF to: 004ca5d2 (CONDITIONAL_JUMP)  ; LAB_004ca5d2
    PUSH EBX                            ; 004ca5ee
    PUSH EBP                            ; 004ca5ef
    CALL FUN_004087f0                   ; 004ca5f0
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 004ca5f5
    PUSH ESI                            ; 004ca5f8
    MOV EAX,dword ptr [EBP + 0x154]     ; 004ca5f9
    PUSH EBP                            ; 004ca5ff
    LEA ESI,[ESP + 0x24]                ; 004ca600
    LEA EDI,[ESP + 0xc]                 ; 004ca604
    CALL dword ptr [EAX + 0x1c]         ; 004ca608
    MOV ECX,0x6                         ; 004ca60b
    ADD ESP,0x4                         ; 004ca610
    LEA EAX,[ESP + 0x8]                 ; 004ca613
    LEA ESI,[ESP + 0x20]                ; 004ca617
    PUSH EAX                            ; 004ca61b
    MOVSD.REP ES:EDI,ESI                ; 004ca61c
    CALL FUN_0041daf0                   ; 004ca61e
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041daf0()
    ADD ESP,0x8                         ; 004ca623
    MOV dword ptr [ESP + 0x34],EAX      ; 004ca626
    LEA EAX,[EBP + 0x164]               ; 004ca62a
    PUSH EAX                            ; 004ca630
    MOV EAX,[0x005f2afc]                ; 004ca631 | DAT_005f2afc
    PUSH EAX                            ; 004ca636 | DAT_01bdd7e4
    XOR ESI,ESI                         ; 004ca637
    CALL FUN_0046e5e0                   ; 004ca639
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e5e0()
    LEA ECX,[EBP + 0x3bc]               ; 004ca63e
    ADD ESP,0x8                         ; 004ca644
    LEA EDI,[EBP + 0x4e8]               ; 004ca647
    MOV EBX,dword ptr [EBP + 0xb64]     ; 004ca64d
    MOV EDX,EDI                         ; 004ca653
    TEST EBX,EBX                        ; 004ca655
    JLE 0x004ca690                      ; 004ca657
        ;   XREF to: 004ca690 (CONDITIONAL_JUMP)  ; LAB_004ca690
    MOV EBX,EDX                         ; 004ca659
        ;   Label: LAB_004ca659
    MOV EAX,ECX                         ; 004ca65b
    FLD float ptr [EAX]                 ; 004ca65d
    FMUL float ptr [0x005e0bc0]         ; 004ca65f | DAT_005e0bc0
    FISTP dword ptr [EBX]               ; 004ca665
    FLD float ptr [EAX + 0x4]           ; 004ca667
    FMUL float ptr [0x005e0bc0]         ; 004ca66a | DAT_005e0bc0
    FISTP dword ptr [EBX + 0x4]         ; 004ca670
    FLD float ptr [EAX + 0x8]           ; 004ca673
    FMUL float ptr [0x005e0bc0]         ; 004ca676 | DAT_005e0bc0
    FISTP dword ptr [EBX + 0x8]         ; 004ca67c
    INC ESI                             ; 004ca67f
    ADD ECX,0xc                         ; 004ca680
    MOV EAX,dword ptr [EBP + 0xb64]     ; 004ca683
    ADD EDX,0xc                         ; 004ca689
    CMP ESI,EAX                         ; 004ca68c
    JL 0x004ca659                       ; 004ca68e
        ;   XREF to: 004ca659 (CONDITIONAL_JUMP)  ; LAB_004ca659
    PUSH EDI                            ; 004ca690
        ;   Label: LAB_004ca690
    MOV EDX,dword ptr [EBP + 0xb64]     ; 004ca691
    PUSH EDX                            ; 004ca697
    MOV ECX,dword ptr [0x00603b28]      ; 004ca698 | DAT_00603b28
    PUSH ECX                            ; 004ca69e | DAT_01ed78c8
    CALL FUN_00538ad0                   ; 004ca69f
        ;   XREF to: 00538ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_00538ad0()
    MOV EAX,0xffff                      ; 004ca6a4
    MOV EBX,dword ptr [0x01c6e24c]      ; 004ca6a9 | DAT_01c6e24c
    ADD ESP,0xc                         ; 004ca6af
    MOV EDX,dword ptr [EBP + 0x1ac]     ; 004ca6b2
    SUB EAX,EBX                         ; 004ca6b8
    IMUL EDX                            ; 004ca6ba
    SHRD EAX,EDX,0x10                   ; 004ca6bc
    PUSH EAX                            ; 004ca6c0
    MOV ESI,dword ptr [0x005f2afc]      ; 004ca6c1 | DAT_005f2afc
    PUSH ESI                            ; 004ca6c7 | DAT_01bdd7e4
    CALL FUN_0046d4c0                   ; 004ca6c8
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4c0()
    ADD ESP,0x8                         ; 004ca6cd
    PUSH 0x0                            ; 004ca6d0
    PUSH 0x4                            ; 004ca6d2
    PUSH EDI                            ; 004ca6d4
    LEA EDI,[EBP + 0x6dc]               ; 004ca6d5
    PUSH EDI                            ; 004ca6db
    MOV EAX,dword ptr [EBP + 0xb68]     ; 004ca6dc
    PUSH EAX                            ; 004ca6e2
    MOV EDX,dword ptr [EBP + 0xb64]     ; 004ca6e3
    PUSH EDX                            ; 004ca6e9
    MOV ECX,dword ptr [0x00603b28]      ; 004ca6ea | DAT_00603b28
    PUSH ECX                            ; 004ca6f0 | DAT_01ed78c8
    XOR ESI,ESI                         ; 004ca6f1
    CALL FUN_00538dd0                   ; 004ca6f3
        ;   XREF to: 00538dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00538dd0()
    MOV EBX,dword ptr [EBP + 0xb68]     ; 004ca6f8
    ADD ESP,0x1c                        ; 004ca6fe
    TEST EBX,EBX                        ; 004ca701
    JLE 0x004ca750                      ; 004ca703
        ;   XREF to: 004ca750 (CONDITIONAL_JUMP)  ; LAB_004ca750
    MOV EBX,EBP                         ; 004ca705
    MOV EAX,[0x005f2afc]                ; 004ca707 | DAT_005f2afc
        ;   Label: LAB_004ca707
    MOV dword ptr [EBX + 0x6e4],0x0     ; 004ca70c
    PUSH EDI                            ; 004ca716
    MOV dword ptr [EBX + 0x6e8],0x0     ; 004ca717
    INC ESI                             ; 004ca721
    MOV dword ptr [EBX + 0x6ec],0x0     ; 004ca722
    PUSH EAX                            ; 004ca72c | DAT_01bdd7e4
    MOV dword ptr [EBX + 0x6f0],0x0     ; 004ca72d
    ADD EBX,0x48                        ; 004ca737
    CALL FUN_0046c800                   ; 004ca73a
        ;   XREF to: 0046c800 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c800()
    ADD EDI,0x48                        ; 004ca73f
    MOV EDX,dword ptr [EBP + 0xb68]     ; 004ca742
    ADD ESP,0x8                         ; 004ca748
    CMP ESI,EDX                         ; 004ca74b
    JL 0x004ca707                       ; 004ca74d
        ;   XREF to: 004ca707 (CONDITIONAL_JUMP)  ; LAB_004ca707
    NOP                                 ; 004ca74f
    PUSH EBP                            ; 004ca750
        ;   Label: LAB_004ca750
    CALL FUN_00408830                   ; 004ca751
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 004ca756
    MOV EAX,dword ptr [ESP + 0x34]      ; 004ca759
    POP EBX                             ; 004ca75d
    ADD ESP,0x34                        ; 004ca75e
    POP EBP                             ; 004ca761
    POP EDI                             ; 004ca762
    POP ESI                             ; 004ca763
    RET                                 ; 004ca764

