; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00537520(int param_1)
;
;
; XREF[2]:
;   FUN_004b7f90 at 004b8633
;   FUN_004f70a0 at 004f71ee
;
; Referenced Globals:
;   undefined4 DAT_0203a414
;   undefined4 DAT_0203a418
;
; Called Functions:
;   FUN_00448f30
;   FUN_0045c470
;   FUN_00542b50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537520
        ;   Label: FUN_00537520
    PUSH ESI                            ; 00537521
    PUSH EDI                            ; 00537522
    PUSH EBP                            ; 00537523
    MOV EDI,dword ptr [ESP + 0x14]      ; 00537524
    MOV EDX,dword ptr [0x0203a414]      ; 00537528 | DAT_0203a414
    XOR ESI,ESI                         ; 0053752e
    TEST EDX,EDX                        ; 00537530
    JLE 0x00537556                      ; 00537532
        ;   XREF to: 00537556 (CONDITIONAL_JUMP)  ; LAB_00537556
    XOR EBX,EBX                         ; 00537534
    MOV EAX,dword ptr [EBX + 0x203a418] ; 00537536 | DAT_0203a418
        ;   Label: LAB_00537536
    TEST EAX,EAX                        ; 0053753c
    JNZ 0x005375a7                      ; 0053753e
        ;   XREF to: 005375a7 (CONDITIONAL_JUMP)  ; LAB_005375a7
    MOV EBP,dword ptr [0x0203a414]      ; 00537540 | DAT_0203a414
        ;   Label: LAB_00537540
    ADD EBX,0x4                         ; 00537546
    XOR ECX,ECX                         ; 00537549
    INC ESI                             ; 0053754b
    MOV dword ptr [EBX + 0x203a414],ECX ; 0053754c | DAT_0203a418
    CMP ESI,EBP                         ; 00537552
    JL 0x00537536                       ; 00537554
        ;   XREF to: 00537536 (CONDITIONAL_JUMP)  ; LAB_00537536
    MOV EDX,dword ptr [EDI + 0x19a2c]   ; 00537556
        ;   Label: LAB_00537556
    XOR EAX,EAX                         ; 0053755c
    XOR ESI,ESI                         ; 0053755e
    MOV [0x0203a414],EAX                ; 00537560 | DAT_0203a414
    TEST EDX,EDX                        ; 00537565
    JLE 0x00537590                      ; 00537567
        ;   XREF to: 00537590 (CONDITIONAL_JUMP)  ; LAB_00537590
    LEA EBX,[EDI + 0x19a30]             ; 00537569
    PUSH EBX                            ; 0053756f
        ;   Label: LAB_0053756f
    CALL FUN_00542b50                   ; 00537570
        ;   XREF to: 00542b50 (UNCONDITIONAL_CALL)  ; undefined FUN_00542b50()
    INC ESI                             ; 00537575
    ADD ESP,0x4                         ; 00537576
    MOV ECX,dword ptr [EDI + 0x19a2c]   ; 00537579
    ADD EBX,0x1898                      ; 0053757f
    CMP ESI,ECX                         ; 00537585
    JL 0x0053756f                       ; 00537587
        ;   XREF to: 0053756f (CONDITIONAL_JUMP)  ; LAB_0053756f
    LEA EAX,[EAX]                       ; 00537589
    NOP                                 ; 0053758f
    CALL FUN_0045c470                   ; 00537590
        ;   XREF to: 0045c470 (UNCONDITIONAL_CALL)  ; undefined FUN_0045c470()
        ;   Label: LAB_00537590
    PUSH 0x2038f4c                      ; 00537595
    CALL FUN_00448f30                   ; 0053759a
        ;   XREF to: 00448f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00448f30()
    ADD ESP,0x4                         ; 0053759f
    POP EBP                             ; 005375a2
    POP EDI                             ; 005375a3
    POP ESI                             ; 005375a4
    POP EBX                             ; 005375a5
    RET                                 ; 005375a6
    PUSH 0x2                            ; 005375a7
        ;   Label: LAB_005375a7
    MOV EDX,dword ptr [EAX + 0x3c]      ; 005375a9
    PUSH EAX                            ; 005375ac
    CALL dword ptr [EDX]                ; 005375ad
    ADD ESP,0x8                         ; 005375af
    JMP 0x00537540                      ; 005375b2
        ;   XREF to: 00537540 (UNCONDITIONAL_JUMP)  ; LAB_00537540

