; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00410640(int param_1)
;
;
; XREF[4]:
;   FUN_004104e0 at 004104e5
;   FUN_00410510 at 00410516
;   FUN_00410550 at 00410556
;   FUN_004105b0 at 00410609
;
; Referenced Globals:
;   TerminatedCString s_CBaron_005d3573
;   undefined4 DAT_0061f650
;   undefined4 DAT_00622c18
;   undefined4 DAT_007c3518
;   undefined4 DAT_01d2c900
;   undefined4 DAT_01e82168
;   undefined4 DAT_01fcf2cc
;   undefined4 DAT_01fcf2d0
;
; Called Functions:
;   FUN_0040c2b0
;   FUN_0040c600
;   FUN_0051b160
;   FUN_0051bd60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410640
        ;   Label: FUN_00410640
    PUSH ESI                            ; 00410641
    PUSH EDI                            ; 00410642
    PUSH EBP                            ; 00410643
    MOV EDI,dword ptr [ESP + 0x14]      ; 00410644
    CMP dword ptr [EDI + 0x578],0x0     ; 00410648
    JNZ 0x0041066b                      ; 0041064f
        ;   XREF to: 0041066b (CONDITIONAL_JUMP)  ; LAB_0041066b
    XOR ESI,ESI                         ; 00410651
    XOR EBX,EBX                         ; 00410653
    MOV EAX,[0x00622c18]                ; 00410655 | DAT_00622c18 | DAT_01e82168
        ;   Label: LAB_00410655
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 0041065a | DAT_01fcf2cc
    JL 0x00410670                       ; 00410660
        ;   XREF to: 00410670 (CONDITIONAL_JUMP)  ; LAB_00410670
    CMP dword ptr [EDI + 0x578],0x0     ; 00410662
        ;   Label: LAB_00410662
    JZ 0x00410697                       ; 00410669
        ;   XREF to: 00410697 (CONDITIONAL_JUMP)  ; LAB_00410697
    POP EBP                             ; 0041066b
        ;   Label: LAB_0041066b
    POP EDI                             ; 0041066c
    POP ESI                             ; 0041066d
    POP EBX                             ; 0041066e
    RET                                 ; 0041066f
    MOV EBP,dword ptr [0x007c3518]      ; 00410670 | DAT_007c3518
        ;   Label: LAB_00410670
    PUSH EBP                            ; 00410676
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 00410677 | DAT_01fcf2d0
    PUSH EDX                            ; 0041067e
    CALL FUN_0040c600                   ; 0041067f
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 00410684
    MOV dword ptr [EDI + 0x578],EAX     ; 00410687
    TEST EAX,EAX                        ; 0041068d
    JNZ 0x00410662                      ; 0041068f
        ;   XREF to: 00410662 (CONDITIONAL_JUMP)  ; LAB_00410662
    INC EBX                             ; 00410691
    ADD ESI,0x4                         ; 00410692
    JMP 0x00410655                      ; 00410695
        ;   XREF to: 00410655 (UNCONDITIONAL_JUMP)  ; LAB_00410655
    PUSH 0x5d3573                       ; 00410697 | = "CBaron"
        ;   Label: LAB_00410697
    CALL FUN_0040c2b0                   ; 0041069c
        ;   XREF to: 0040c2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c2b0()
    ADD ESP,0x4                         ; 004106a1
    PUSH EAX                            ; 004106a4
    MOV EBP,dword ptr [0x0061f650]      ; 004106a5 | DAT_0061f650
    PUSH EBP                            ; 004106ab | DAT_01d2c900
    MOV dword ptr [EDI + 0x578],EAX     ; 004106ac
    CALL FUN_0051bd60                   ; 004106b2
        ;   XREF to: 0051bd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0051bd60()
    ADD ESP,0x8                         ; 004106b7
    MOV EAX,dword ptr [EDI + 0x578]     ; 004106ba
    PUSH EAX                            ; 004106c0
    MOV EBX,dword ptr [EAX + 0x154]     ; 004106c1
    CALL dword ptr [EBX]                ; 004106c7
    ADD ESP,0x4                         ; 004106c9
    MOV EAX,dword ptr [EDI + 0x578]     ; 004106cc
    PUSH EAX                            ; 004106d2
    MOV EDX,dword ptr [0x0061f650]      ; 004106d3 | DAT_0061f650
    PUSH EDX                            ; 004106d9 | DAT_01d2c900
    LEA ESI,[EDI + 0x30]                ; 004106da
    CALL FUN_0051b160                   ; 004106dd
        ;   XREF to: 0051b160 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b160()
    ADD ESP,0x8                         ; 004106e2
    ADD EDI,0x20                        ; 004106e5
    PUSH ESI                            ; 004106e8
    MOV EAX,dword ptr [EDI + 0x558]     ; 004106e9
    PUSH EDI                            ; 004106ef
    MOV EBX,dword ptr [EAX + 0x154]     ; 004106f0
    PUSH EAX                            ; 004106f6
    CALL dword ptr [EBX + 0x68]         ; 004106f7
    ADD ESP,0xc                         ; 004106fa
    POP EBP                             ; 004106fd
    POP EDI                             ; 004106fe
    POP ESI                             ; 004106ff
    POP EBX                             ; 00410700
    RET                                 ; 00410701

