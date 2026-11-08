; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00559520(int param_1)
;
; Local Variables:
; undefined1       Stack[-0x29c]:1  local_29c
; undefined1       Stack[-0x29b]:1  local_29b
; undefined        Stack[-0x184]:1  local_184
; undefined1       Stack[-0x183]:1  local_183
;
; XREF[1]:
;   FUN_004d95c0 at 004d975d
;
; Referenced Globals:
;   TerminatedCString s_DeviceName_005d3e35
;   undefined4 DAT_005d3e40
;   TerminatedCString s_Channels_005d3e45
;   undefined4 DAT_005d3e4e
;   TerminatedCString s_AccelEnabled_005d3e51
;   TerminatedCString s_MaxSwLatency_005d3e5e
;   undefined4 DAT_005d3e6b
;   TerminatedCString s_SfxChannel_dEnabled_005d3e70
;   TerminatedCString s_SfxChannel_dVol_005d3e84
;   undefined4 DAT_00604224
;   undefined4 DAT_0060423c
;   undefined4 DAT_00604368
;   undefined4 DAT_0060436c
;
; Called Functions:
;   FUN_004d8c90
;   FUN_004d8d40
;   FUN_00556750
;   FUN_00556d20
;   FUN_00556e30
;   FUN_00558330
;   FUN_00558430
;   FUN_005584c0
;   FUN_005586e0
;   FUN_005591a0
;   FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00559520
        ;   Label: FUN_00559520
    PUSH ESI                            ; 00559521
    PUSH EDI                            ; 00559522
    PUSH EBP                            ; 00559523
    SUB ESP,0x28c                       ; 00559524
    MOV EBP,dword ptr [ESP + 0x2a0]     ; 0055952a
    MOV ECX,0x40                        ; 00559531
    LEA EDI,[ESP + 0x118]               ; 00559536
    MOV ESI,0x604368                    ; 0055953d | DAT_00604368
    MOV EDX,dword ptr [0x0060423c]      ; 00559542 | DAT_0060423c
    MOVSD.REP ES:EDI,ESI                ; 00559548 | DAT_00604368 | DAT_0060436c
    TEST EDX,EDX                        ; 0055954a
    JL 0x0055958c                       ; 0055954c
        ;   XREF to: 0055958c (CONDITIONAL_JUMP)  ; LAB_0055958c
    CALL FUN_00558430                   ; 0055954e
        ;   XREF to: 00558430 (UNCONDITIONAL_CALL)  ; undefined FUN_00558430()
    MOV ECX,dword ptr [0x0060423c]      ; 00559553 | DAT_0060423c
    CMP EAX,ECX                         ; 00559559
    JLE 0x0055958c                      ; 0055955b
        ;   XREF to: 0055958c (CONDITIONAL_JUMP)  ; LAB_0055958c
    MOV EAX,ESP                         ; 0055955d
    PUSH EAX                            ; 0055955f
    PUSH ECX                            ; 00559560
    CALL FUN_005584c0                   ; 00559561
        ;   XREF to: 005584c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005584c0()
    ADD ESP,0x8                         ; 00559566
    MOV ESI,ESP                         ; 00559569
    LEA EDI,[ESP + 0x118]               ; 0055956b
    PUSH EDI                            ; 00559572
    MOV AL,byte ptr [ESI]               ; 00559573
        ;   Label: LAB_00559573
    MOV byte ptr [EDI],AL               ; 00559575
    CMP AL,0x0                          ; 00559577
    JZ 0x0055958b                       ; 00559579
        ;   XREF to: 0055958b (CONDITIONAL_JUMP)  ; LAB_0055958b
    MOV AL,byte ptr [ESI + 0x1]         ; 0055957b
    ADD ESI,0x2                         ; 0055957e
    MOV byte ptr [EDI + 0x1],AL         ; 00559581
    ADD EDI,0x2                         ; 00559584
    CMP AL,0x0                          ; 00559587
    JNZ 0x00559573                      ; 00559589
        ;   XREF to: 00559573 (CONDITIONAL_JUMP)  ; LAB_00559573
    POP EDI                             ; 0055958b
        ;   Label: LAB_0055958b
    LEA EAX,[ESP + 0x118]               ; 0055958c
        ;   Label: LAB_0055958c
    PUSH EAX                            ; 00559593
    PUSH 0x5d3e35                       ; 00559594 | = "DeviceName"
    MOV EBX,dword ptr [EBP + 0x200]     ; 00559599
    PUSH EBP                            ; 0055959f
    CALL dword ptr [EBX + 0x8]          ; 005595a0
    ADD ESP,0xc                         ; 005595a3
    LEA EAX,[ESP + 0x280]               ; 005595a6
    PUSH EAX                            ; 005595ad
    LEA EAX,[ESP + 0x280]               ; 005595ae
    PUSH EAX                            ; 005595b5
    LEA EAX,[ESP + 0x28c]               ; 005595b6
    PUSH EAX                            ; 005595bd
    CALL FUN_00558330                   ; 005595be
        ;   XREF to: 00558330 (UNCONDITIONAL_CALL)  ; undefined FUN_00558330()
    ADD ESP,0xc                         ; 005595c3
    MOV ESI,dword ptr [ESP + 0x284]     ; 005595c6
    PUSH ESI                            ; 005595cd
    PUSH 0x5d3e40                       ; 005595ce | DAT_005d3e40
    PUSH EBP                            ; 005595d3
    CALL FUN_004d8c90                   ; 005595d4
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    ADD ESP,0xc                         ; 005595d9
    MOV EDI,dword ptr [ESP + 0x27c]     ; 005595dc
    PUSH EDI                            ; 005595e3
    PUSH 0x5d3e45                       ; 005595e4 | = "Channels"
    PUSH EBP                            ; 005595e9
    CALL FUN_004d8c90                   ; 005595ea
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    ADD ESP,0xc                         ; 005595ef
    MOV EAX,dword ptr [ESP + 0x280]     ; 005595f2
    PUSH EAX                            ; 005595f9
    PUSH 0x5d3e4e                       ; 005595fa | DAT_005d3e4e
    PUSH EBP                            ; 005595ff
    CALL FUN_004d8c90                   ; 00559600
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    ADD ESP,0xc                         ; 00559605
    CALL FUN_005586e0                   ; 00559608
        ;   XREF to: 005586e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005586e0()
    PUSH EAX                            ; 0055960d
    PUSH 0x5d3e51                       ; 0055960e | = "AccelEnabled"
    PUSH EBP                            ; 00559613
    CALL FUN_004d8c90                   ; 00559614
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    ADD ESP,0xc                         ; 00559619
    CALL FUN_005591a0                   ; 0055961c
        ;   XREF to: 005591a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005591a0()
    MOV dword ptr [ESP + 0x288],EAX     ; 00559621
    FLD float ptr [ESP + 0x288]         ; 00559628
    SUB ESP,0x4                         ; 0055962f
    FSTP float ptr [ESP]                ; 00559632
    PUSH 0x5d3e5e                       ; 00559635 | = "MaxSwLatency"
    PUSH EBP                            ; 0055963a
    CALL FUN_004d8d40                   ; 0055963b
        ;   XREF to: 004d8d40 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8d40()
    ADD ESP,0xc                         ; 00559640
    CALL FUN_00556750                   ; 00559643
        ;   XREF to: 00556750 (UNCONDITIONAL_CALL)  ; undefined FUN_00556750()
    PUSH EAX                            ; 00559648
    PUSH 0x5d3e6b                       ; 00559649 | DAT_005d3e6b
    PUSH EBP                            ; 0055964e
    XOR EBX,EBX                         ; 0055964f
    CALL FUN_004d8c90                   ; 00559651
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    MOV EDX,dword ptr [0x00604224]      ; 00559656 | DAT_00604224
    ADD ESP,0xc                         ; 0055965c
    TEST EDX,EDX                        ; 0055965f
    JLE 0x005596f0                      ; 00559661
        ;   XREF to: 005596f0 (CONDITIONAL_JUMP)  ; LAB_005596f0
    PUSH EBX                            ; 00559667
        ;   Label: LAB_00559667
    PUSH 0x5d3e70                       ; 00559668 | = "SfxChannel%dEnabled"
    LEA EAX,[ESP + 0x220]               ; 0055966d
    PUSH EAX                            ; 00559674
    CALL FUN_005a28c0                   ; 00559675
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0xc                         ; 0055967a
    PUSH EBX                            ; 0055967d
    CALL FUN_00556e30                   ; 0055967e
        ;   XREF to: 00556e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00556e30()
    ADD ESP,0x4                         ; 00559683
    PUSH EAX                            ; 00559686
    LEA EAX,[ESP + 0x21c]               ; 00559687
    PUSH EAX                            ; 0055968e
    PUSH EBP                            ; 0055968f
    CALL FUN_004d8c90                   ; 00559690
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8c90()
    ADD ESP,0xc                         ; 00559695
    PUSH EBX                            ; 00559698
    PUSH 0x5d3e84                       ; 00559699 | = "SfxChannel%dVol"
    LEA EAX,[ESP + 0x220]               ; 0055969e
    PUSH EAX                            ; 005596a5
    CALL FUN_005a28c0                   ; 005596a6
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0xc                         ; 005596ab
    PUSH EBX                            ; 005596ae
    CALL FUN_00556d20                   ; 005596af
        ;   XREF to: 00556d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00556d20()
    MOV dword ptr [ESP + 0x28c],EAX     ; 005596b4
    FLD float ptr [ESP + 0x28c]         ; 005596bb
    ADD ESP,0x4                         ; 005596c2
    SUB ESP,0x4                         ; 005596c5
    LEA EAX,[ESP + 0x21c]               ; 005596c8
    FSTP float ptr [ESP]                ; 005596cf
    PUSH EAX                            ; 005596d2
    PUSH EBP                            ; 005596d3
    INC EBX                             ; 005596d4
    CALL FUN_004d8d40                   ; 005596d5
        ;   XREF to: 004d8d40 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8d40()
    MOV ECX,dword ptr [0x00604224]      ; 005596da | DAT_00604224
    ADD ESP,0xc                         ; 005596e0
    CMP EBX,ECX                         ; 005596e3
    JL 0x00559667                       ; 005596e5
        ;   XREF to: 00559667 (CONDITIONAL_JUMP)  ; LAB_00559667
    LEA EAX,[EAX]                       ; 005596e7
    LEA EDX,[EDX]                       ; 005596ed
    ADD ESP,0x28c                       ; 005596f0
        ;   Label: LAB_005596f0
    POP EBP                             ; 005596f6
    POP EDI                             ; 005596f7
    POP ESI                             ; 005596f8
    POP EBX                             ; 005596f9
    RET                                 ; 005596fa

