; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004066b0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_0061b4a8
;   undefined4 DAT_0061b4b8
;   undefined4 DAT_0062902c
;   undefined4 DAT_00629030
;   undefined4 DAT_00713a98
;   undefined4 DAT_00713a9c
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   FUN_00403920
;   FUN_004039d0
;   FUN_0043cbf0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004066b0
        ;   Label: FUN_004066b0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004066b1
    ADD EAX,0x8                         ; 004066b5
    MOV EBP,dword ptr [ESP + 0x8]       ; 004066b8
    PUSH EAX                            ; 004066bc
    ADD EBP,0x18                        ; 004066bd
    CALL FUN_00403920                   ; 004066c0
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 004066c5
    TEST EAX,EAX                        ; 004066c8
    JZ 0x00406843                       ; 004066ca
        ;   XREF to: 00406843 (CONDITIONAL_JUMP)  ; LAB_00406843
    CMP dword ptr [0x01c51d00],0x0      ; 004066d0 | DAT_01c51d00
    JNZ 0x004067bd                      ; 004066d7
        ;   XREF to: 004067bd (CONDITIONAL_JUMP)  ; LAB_004067bd
    CMP dword ptr [0x0061b4a0],0x20     ; 004066dd | DAT_0061b4a0
    JNZ 0x004067ae                      ; 004066e4
        ;   XREF to: 004067ae (CONDITIONAL_JUMP)  ; LAB_004067ae
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 004066ea | DAT_01c4f02c
    PUSH EDI                            ; 004066f4
        ;   Label: LAB_004066f4
    PUSH ESI                            ; 004066f5
    PUSH EBX                            ; 004066f6
    MOV EBX,dword ptr [ESP + 0x14]      ; 004066f7
    MOV ECX,0xd3                        ; 004066fb
    PUSH EBX                            ; 00406700
    MOV dword ptr [0x01c51d14],ECX      ; 00406701 | DAT_01c51d14
    CALL FUN_004039d0                   ; 00406707
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004039d0()
    MOV ESI,dword ptr [0x0061b4b8]      ; 0040670c | DAT_0061b4b8
    ADD ESP,0x4                         ; 00406712
    CMP ESI,0xff                        ; 00406715
    JL 0x004067e4                       ; 0040671b
        ;   XREF to: 004067e4 (CONDITIONAL_JUMP)  ; LAB_004067e4
    MOV EDI,0x1                         ; 00406721
        ;   Label: LAB_00406721
    MOV ECX,EBP                         ; 00406726
    XOR EBX,EBX                         ; 00406728
    XOR ESI,ESI                         ; 0040672a
    MOV dword ptr [0x01c51d18],EDI      ; 0040672c | DAT_01c51d18
    XOR EDI,EDI                         ; 00406732
    MOV EAX,dword ptr [ESP + 0x14]      ; 00406734
        ;   Label: LAB_00406734
    MOV EAX,dword ptr [EAX + 0x4]       ; 00406738
    LEA EAX,[EAX + EAX*0x2]             ; 0040673b
    CMP EBX,EAX                         ; 0040673e
    JGE 0x00406832                      ; 00406740
        ;   XREF to: 00406832 (CONDITIONAL_JUMP)  ; LAB_00406832
    MOV EAX,dword ptr [ECX]             ; 00406746
    MOV dword ptr [ESI + 0x713a98],EAX  ; 00406748 | DAT_00713a98 | DAT_00713a9c
    MOV EBP,dword ptr [0x0061b4a8]      ; 0040674e | DAT_0061b4a8
    MOV EAX,dword ptr [ECX + 0x4]       ; 00406754
    MOV EDX,dword ptr [ECX + 0x8]       ; 00406757
    CMP EBP,0x40                        ; 0040675a
    JG 0x004067f7                       ; 0040675d
        ;   XREF to: 004067f7 (CONDITIONAL_JUMP)  ; LAB_004067f7
    CMP EAX,0x40000                     ; 00406763
    JGE 0x0040676f                      ; 00406768
        ;   XREF to: 0040676f (CONDITIONAL_JUMP)  ; LAB_0040676f
    MOV EAX,0x40000                     ; 0040676a
    CMP EDX,0x40000                     ; 0040676f
        ;   Label: LAB_0040676f
    JGE 0x0040677c                      ; 00406775
        ;   XREF to: 0040677c (CONDITIONAL_JUMP)  ; LAB_0040677c
    MOV EDX,0x40000                     ; 00406777
    CMP EAX,0xfbffff                    ; 0040677c
        ;   Label: LAB_0040677c
    JLE 0x00406788                      ; 00406781
        ;   XREF to: 00406788 (CONDITIONAL_JUMP)  ; LAB_00406788
    MOV EAX,0xfbffff                    ; 00406783
    CMP EDX,0xfbffff                    ; 00406788
        ;   Label: LAB_00406788
    JG 0x004067f0                       ; 0040678e
        ;   XREF to: 004067f0 (CONDITIONAL_JUMP)  ; LAB_004067f0
    IMUL EBP,dword ptr [ECX],0x30       ; 00406790
        ;   Label: LAB_00406790
    MOV dword ptr [EBP + 0x62902c],EAX  ; 00406793 | DAT_0062902c
    IMUL EAX,dword ptr [ECX],0x30       ; 00406799
    ADD ESI,0x4                         ; 0040679c
    INC EDI                             ; 0040679f
    ADD EBX,0x3                         ; 004067a0
    ADD ECX,0xc                         ; 004067a3
    MOV dword ptr [EAX + 0x629030],EDX  ; 004067a6 | DAT_00629030
    JMP 0x00406734                      ; 004067ac
        ;   XREF to: 00406734 (UNCONDITIONAL_JUMP)  ; LAB_00406734
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 004067ae | DAT_01c4f02c
        ;   Label: LAB_004067ae
    JMP 0x004066f4                      ; 004067b8
        ;   XREF to: 004066f4 (UNCONDITIONAL_JUMP)  ; LAB_004066f4
    CMP dword ptr [0x0061b4a0],0x20     ; 004067bd | DAT_0061b4a0
        ;   Label: LAB_004067bd
    JNZ 0x004067d5                      ; 004067c4
        ;   XREF to: 004067d5 (CONDITIONAL_JUMP)  ; LAB_004067d5
    MOV dword ptr [0x01c4f02c],0x57de01 ; 004067c6 | DAT_01c4f02c | LAB_0057de01
    JMP 0x004066f4                      ; 004067d0
        ;   XREF to: 004066f4 (UNCONDITIONAL_JUMP)  ; LAB_004066f4
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 004067d5 | DAT_01c4f02c | LAB_0057e5e3
        ;   Label: LAB_004067d5
    JMP 0x004066f4                      ; 004067df
        ;   XREF to: 004066f4 (UNCONDITIONAL_JUMP)  ; LAB_004066f4
    OR byte ptr [0x01c51d14],0x20       ; 004067e4 | DAT_01c51d14
        ;   Label: LAB_004067e4
    JMP 0x00406721                      ; 004067eb
        ;   XREF to: 00406721 (UNCONDITIONAL_JUMP)  ; LAB_00406721
    MOV EDX,0xfbffff                    ; 004067f0
        ;   Label: LAB_004067f0
    JMP 0x00406790                      ; 004067f5
        ;   XREF to: 00406790 (UNCONDITIONAL_JUMP)  ; LAB_00406790
    CMP EAX,0x10000                     ; 004067f7
        ;   Label: LAB_004067f7
    JGE 0x00406803                      ; 004067fc
        ;   XREF to: 00406803 (CONDITIONAL_JUMP)  ; LAB_00406803
    MOV EAX,0x10000                     ; 004067fe
    CMP EDX,0x10000                     ; 00406803
        ;   Label: LAB_00406803
    JGE 0x00406810                      ; 00406809
        ;   XREF to: 00406810 (CONDITIONAL_JUMP)  ; LAB_00406810
    MOV EDX,0x10000                     ; 0040680b
    CMP EAX,0xfeffff                    ; 00406810
        ;   Label: LAB_00406810
    JLE 0x0040681c                      ; 00406815
        ;   XREF to: 0040681c (CONDITIONAL_JUMP)  ; LAB_0040681c
    MOV EAX,0xfeffff                    ; 00406817
    CMP EDX,0xfeffff                    ; 0040681c
        ;   Label: LAB_0040681c
    JLE 0x00406790                      ; 00406822
        ;   XREF to: 00406790 (CONDITIONAL_JUMP)  ; LAB_00406790
    MOV EDX,0xfeffff                    ; 00406828
    JMP 0x00406790                      ; 0040682d
        ;   XREF to: 00406790 (UNCONDITIONAL_JUMP)  ; LAB_00406790
    PUSH 0x713a98                       ; 00406832 | DAT_00713a98
        ;   Label: LAB_00406832
    PUSH EDI                            ; 00406837
    CALL FUN_0043cbf0                   ; 00406838
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043cbf0()
    ADD ESP,0x8                         ; 0040683d
    POP EBX                             ; 00406840
    POP ESI                             ; 00406841
    POP EDI                             ; 00406842
    MOV EDX,dword ptr [ESP + 0x8]       ; 00406843
        ;   Label: LAB_00406843
    MOV EDX,dword ptr [EDX + 0x4]       ; 00406847
    LEA EAX,[EDX*0x4 + 0x0]             ; 0040684a
    SUB EAX,EDX                         ; 00406851
    LEA EDX,[EAX*0x4 + 0x0]             ; 00406853
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040685a
    ADD EAX,0x18                        ; 0040685e
    ADD EAX,EDX                         ; 00406861
    POP EBP                             ; 00406863
    RET                                 ; 00406864

