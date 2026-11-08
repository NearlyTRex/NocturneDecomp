; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00562660(int param_1)
;
;
; Called Functions:
;   FUN_00408850
;   FUN_0041dac0
;   FUN_004688e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562660
        ;   Label: FUN_00562660
    PUSH ESI                            ; 00562661
    PUSH EDI                            ; 00562662
    SUB ESP,0x60                        ; 00562663
    MOV EBX,dword ptr [ESP + 0x70]      ; 00562666
    LEA EAX,[EBX + 0x158]               ; 0056266a
    PUSH EAX                            ; 00562670
    CALL FUN_004688e0                   ; 00562671
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 00562676
    PUSH EBX                            ; 00562679
    CALL FUN_00408850                   ; 0056267a
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; undefined FUN_00408850()
    ADD ESP,0x4                         ; 0056267f
    MOV EAX,dword ptr [EBX + 0x154]     ; 00562682
    PUSH EBX                            ; 00562688
    LEA ESI,[ESP + 0x1c]                ; 00562689
    LEA EDI,[ESP + 0x4]                 ; 0056268d
    CALL dword ptr [EAX + 0x1c]         ; 00562691
    MOV ECX,0x6                         ; 00562694
    LEA ESI,[ESP + 0x1c]                ; 00562699
    ADD ESP,0x4                         ; 0056269d
    MOVSD.REP ES:EDI,ESI                ; 005626a0
    LEA EAX,[ESP + 0x30]                ; 005626a2
    MOV ESI,ESP                         ; 005626a6
    CMP EAX,ESI                         ; 005626a8
    JNZ 0x00562771                      ; 005626aa
        ;   XREF to: 00562771 (CONDITIONAL_JUMP)  ; LAB_00562771
    LEA EAX,[ESP + 0x3c]                ; 005626b0
        ;   Label: LAB_005626b0
    ADD ESI,0xc                         ; 005626b4
    CMP EAX,ESI                         ; 005626b7
    JZ 0x005626cf                       ; 005626b9
        ;   XREF to: 005626cf (CONDITIONAL_JUMP)  ; LAB_005626cf
    MOV EAX,dword ptr [ESI]             ; 005626bb
    MOV dword ptr [ESP + 0x3c],EAX      ; 005626bd
    MOV EAX,dword ptr [ESI + 0x4]       ; 005626c1
    MOV dword ptr [ESP + 0x40],EAX      ; 005626c4
    MOV EAX,dword ptr [ESI + 0x8]       ; 005626c8
    MOV dword ptr [ESP + 0x44],EAX      ; 005626cb
    FLD float ptr [ESP + 0x3c]          ; 005626cf
        ;   Label: LAB_005626cf
    FLD float ptr [ESP + 0x40]          ; 005626d3
    FLD float ptr [ESP + 0x44]          ; 005626d7
    LEA EDI,[ESP + 0x48]                ; 005626db
    LEA ESI,[ESP + 0x54]                ; 005626df
    FXCH ST2                            ; 005626e3
    FSUB float ptr [ESP + 0x30]         ; 005626e5
    FXCH                                ; 005626e9
    FSUB float ptr [ESP + 0x34]         ; 005626eb
    FXCH ST2                            ; 005626ef
    FSUB float ptr [ESP + 0x38]         ; 005626f1
    FXCH                                ; 005626f5
    FSTP float ptr [ESP + 0x54]         ; 005626f7
    FXCH                                ; 005626fb
    FSTP float ptr [ESP + 0x58]         ; 005626fd
    FSTP float ptr [ESP + 0x5c]         ; 00562701
    MOVSD ES:EDI,ESI                    ; 00562705
    MOVSD ES:EDI,ESI                    ; 00562706
    MOVSD ES:EDI,ESI                    ; 00562707
    LEA EAX,[ESP + 0x48]                ; 00562708
    PUSH dword ptr [EBX + 0x2d8]        ; 0056270c
    PUSH EAX                            ; 00562712
    LEA EAX,[EBX + 0x30]                ; 00562713
    PUSH EAX                            ; 00562716
    LEA ESI,[EBX + 0x20]                ; 00562717
    PUSH ESI                            ; 0056271a
    LEA EAX,[EBX + 0x358]               ; 0056271b
    PUSH EAX                            ; 00562721
    CALL FUN_0041dac0                   ; 00562722
        ;   XREF to: 0041dac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041dac0()
    LEA EAX,[EBX + 0x5b4]               ; 00562727
    ADD ESP,0x14                        ; 0056272d
    CMP EAX,ESI                         ; 00562730
    JZ 0x00562744                       ; 00562732
        ;   XREF to: 00562744 (CONDITIONAL_JUMP)  ; LAB_00562744
    MOV EDX,dword ptr [ESI]             ; 00562734
    MOV dword ptr [EAX],EDX             ; 00562736
    MOV EDX,dword ptr [ESI + 0x4]       ; 00562738
    MOV dword ptr [EAX + 0x4],EDX       ; 0056273b
    MOV EDX,dword ptr [ESI + 0x8]       ; 0056273e
    MOV dword ptr [EAX + 0x8],EDX       ; 00562741
    LEA ESI,[EBX + 0x5c0]               ; 00562744
        ;   Label: LAB_00562744
    LEA EAX,[EBX + 0x30]                ; 0056274a
    CMP ESI,EAX                         ; 0056274d
    JZ 0x00562761                       ; 0056274f
        ;   XREF to: 00562761 (CONDITIONAL_JUMP)  ; LAB_00562761
    MOV EDX,dword ptr [EAX]             ; 00562751
    MOV dword ptr [ESI],EDX             ; 00562753
    MOV EDX,dword ptr [EAX + 0x4]       ; 00562755
    MOV dword ptr [ESI + 0x4],EDX       ; 00562758
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056275b
    MOV dword ptr [ESI + 0x8],EDX       ; 0056275e
    CMP dword ptr [EBX + 0x2d4],0x1     ; 00562761
        ;   Label: LAB_00562761
    JZ 0x0056278d                       ; 00562768
        ;   XREF to: 0056278d (CONDITIONAL_JUMP)  ; LAB_0056278d
    ADD ESP,0x60                        ; 0056276a
    POP EDI                             ; 0056276d
    POP ESI                             ; 0056276e
    POP EBX                             ; 0056276f
    RET                                 ; 00562770
    MOV EAX,dword ptr [ESP]             ; 00562771
        ;   Label: LAB_00562771
    MOV dword ptr [ESP + 0x30],EAX      ; 00562774
    MOV EAX,dword ptr [ESP + 0x4]       ; 00562778
    MOV dword ptr [ESP + 0x34],EAX      ; 0056277c
    MOV EAX,dword ptr [ESP + 0x8]       ; 00562780
    MOV dword ptr [ESP + 0x38],EAX      ; 00562784
    JMP 0x005626b0                      ; 00562788
        ;   XREF to: 005626b0 (UNCONDITIONAL_JUMP)  ; LAB_005626b0
    MOV dword ptr [EBX + 0x5ac],0x0     ; 0056278d
        ;   Label: LAB_0056278d
    ADD ESP,0x60                        ; 00562797
    POP EDI                             ; 0056279a
    POP ESI                             ; 0056279b
    POP EBX                             ; 0056279c
    RET                                 ; 0056279d

