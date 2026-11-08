; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004066d0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_005fba28
;   undefined4 DAT_005fba38
;   undefined4 DAT_0060b02c
;   undefined4 DAT_0060b030
;   undefined4 DAT_00730418
;   undefined4 DAT_0073041c
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   FUN_00403920
;   FUN_004039d0
;   FUN_0043a840
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004066d0
        ;   Label: FUN_004066d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004066d1
    ADD EAX,0x8                         ; 004066d5
    MOV EBP,dword ptr [ESP + 0x8]       ; 004066d8
    PUSH EAX                            ; 004066dc
    ADD EBP,0x18                        ; 004066dd
    CALL FUN_00403920                   ; 004066e0
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 004066e5
    TEST EAX,EAX                        ; 004066e8
    JZ 0x00406863                       ; 004066ea
        ;   XREF to: 00406863 (CONDITIONAL_JUMP)  ; LAB_00406863
    CMP dword ptr [0x01c6e2a0],0x0      ; 004066f0 | DAT_01c6e2a0
    JNZ 0x004067dd                      ; 004066f7
        ;   XREF to: 004067dd (CONDITIONAL_JUMP)  ; LAB_004067dd
    CMP dword ptr [0x005fba20],0x20     ; 004066fd | DAT_005fba20
    JNZ 0x004067ce                      ; 00406704
        ;   XREF to: 004067ce (CONDITIONAL_JUMP)  ; LAB_004067ce
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 0040670a | DAT_01c6b5cc
    PUSH EDI                            ; 00406714
        ;   Label: LAB_00406714
    PUSH ESI                            ; 00406715
    PUSH EBX                            ; 00406716
    MOV EBX,dword ptr [ESP + 0x14]      ; 00406717
    MOV ECX,0xd3                        ; 0040671b
    PUSH EBX                            ; 00406720
    MOV dword ptr [0x01c6e2b4],ECX      ; 00406721 | DAT_01c6e2b4
    CALL FUN_004039d0                   ; 00406727
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004039d0()
    MOV ESI,dword ptr [0x005fba38]      ; 0040672c | DAT_005fba38
    ADD ESP,0x4                         ; 00406732
    CMP ESI,0xff                        ; 00406735
    JL 0x00406804                       ; 0040673b
        ;   XREF to: 00406804 (CONDITIONAL_JUMP)  ; LAB_00406804
    MOV EDI,0x1                         ; 00406741
        ;   Label: LAB_00406741
    MOV ECX,EBP                         ; 00406746
    XOR EBX,EBX                         ; 00406748
    XOR ESI,ESI                         ; 0040674a
    MOV dword ptr [0x01c6e2b8],EDI      ; 0040674c | DAT_01c6e2b8
    XOR EDI,EDI                         ; 00406752
    MOV EAX,dword ptr [ESP + 0x14]      ; 00406754
        ;   Label: LAB_00406754
    MOV EAX,dword ptr [EAX + 0x4]       ; 00406758
    LEA EAX,[EAX + EAX*0x2]             ; 0040675b
    CMP EBX,EAX                         ; 0040675e
    JGE 0x00406852                      ; 00406760
        ;   XREF to: 00406852 (CONDITIONAL_JUMP)  ; LAB_00406852
    MOV EAX,dword ptr [ECX]             ; 00406766
    MOV dword ptr [ESI + 0x730418],EAX  ; 00406768 | DAT_00730418 | DAT_0073041c
    MOV EBP,dword ptr [0x005fba28]      ; 0040676e | DAT_005fba28
    MOV EAX,dword ptr [ECX + 0x4]       ; 00406774
    MOV EDX,dword ptr [ECX + 0x8]       ; 00406777
    CMP EBP,0x40                        ; 0040677a
    JG 0x00406817                       ; 0040677d
        ;   XREF to: 00406817 (CONDITIONAL_JUMP)  ; LAB_00406817
    CMP EAX,0x40000                     ; 00406783
    JGE 0x0040678f                      ; 00406788
        ;   XREF to: 0040678f (CONDITIONAL_JUMP)  ; LAB_0040678f
    MOV EAX,0x40000                     ; 0040678a
    CMP EDX,0x40000                     ; 0040678f
        ;   Label: LAB_0040678f
    JGE 0x0040679c                      ; 00406795
        ;   XREF to: 0040679c (CONDITIONAL_JUMP)  ; LAB_0040679c
    MOV EDX,0x40000                     ; 00406797
    CMP EAX,0xfbffff                    ; 0040679c
        ;   Label: LAB_0040679c
    JLE 0x004067a8                      ; 004067a1
        ;   XREF to: 004067a8 (CONDITIONAL_JUMP)  ; LAB_004067a8
    MOV EAX,0xfbffff                    ; 004067a3
    CMP EDX,0xfbffff                    ; 004067a8
        ;   Label: LAB_004067a8
    JG 0x00406810                       ; 004067ae
        ;   XREF to: 00406810 (CONDITIONAL_JUMP)  ; LAB_00406810
    IMUL EBP,dword ptr [ECX],0x30       ; 004067b0
        ;   Label: LAB_004067b0
    MOV dword ptr [EBP + 0x60b02c],EAX  ; 004067b3 | DAT_0060b02c
    IMUL EAX,dword ptr [ECX],0x30       ; 004067b9
    ADD ESI,0x4                         ; 004067bc
    INC EDI                             ; 004067bf
    ADD EBX,0x3                         ; 004067c0
    ADD ECX,0xc                         ; 004067c3
    MOV dword ptr [EAX + 0x60b030],EDX  ; 004067c6 | DAT_0060b030
    JMP 0x00406754                      ; 004067cc
        ;   XREF to: 00406754 (UNCONDITIONAL_JUMP)  ; LAB_00406754
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 004067ce | DAT_01c6b5cc
        ;   Label: LAB_004067ce
    JMP 0x00406714                      ; 004067d8
        ;   XREF to: 00406714 (UNCONDITIONAL_JUMP)  ; LAB_00406714
    CMP dword ptr [0x005fba20],0x20     ; 004067dd | DAT_005fba20
        ;   Label: LAB_004067dd
    JNZ 0x004067f5                      ; 004067e4
        ;   XREF to: 004067f5 (CONDITIONAL_JUMP)  ; LAB_004067f5
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 004067e6 | DAT_01c6b5cc | LAB_00560f31
    JMP 0x00406714                      ; 004067f0
        ;   XREF to: 00406714 (UNCONDITIONAL_JUMP)  ; LAB_00406714
    MOV dword ptr [0x01c6b5cc],0x561713 ; 004067f5 | DAT_01c6b5cc | LAB_00561713
        ;   Label: LAB_004067f5
    JMP 0x00406714                      ; 004067ff
        ;   XREF to: 00406714 (UNCONDITIONAL_JUMP)  ; LAB_00406714
    OR byte ptr [0x01c6e2b4],0x20       ; 00406804 | DAT_01c6e2b4
        ;   Label: LAB_00406804
    JMP 0x00406741                      ; 0040680b
        ;   XREF to: 00406741 (UNCONDITIONAL_JUMP)  ; LAB_00406741
    MOV EDX,0xfbffff                    ; 00406810
        ;   Label: LAB_00406810
    JMP 0x004067b0                      ; 00406815
        ;   XREF to: 004067b0 (UNCONDITIONAL_JUMP)  ; LAB_004067b0
    CMP EAX,0x10000                     ; 00406817
        ;   Label: LAB_00406817
    JGE 0x00406823                      ; 0040681c
        ;   XREF to: 00406823 (CONDITIONAL_JUMP)  ; LAB_00406823
    MOV EAX,0x10000                     ; 0040681e
    CMP EDX,0x10000                     ; 00406823
        ;   Label: LAB_00406823
    JGE 0x00406830                      ; 00406829
        ;   XREF to: 00406830 (CONDITIONAL_JUMP)  ; LAB_00406830
    MOV EDX,0x10000                     ; 0040682b
    CMP EAX,0xfeffff                    ; 00406830
        ;   Label: LAB_00406830
    JLE 0x0040683c                      ; 00406835
        ;   XREF to: 0040683c (CONDITIONAL_JUMP)  ; LAB_0040683c
    MOV EAX,0xfeffff                    ; 00406837
    CMP EDX,0xfeffff                    ; 0040683c
        ;   Label: LAB_0040683c
    JLE 0x004067b0                      ; 00406842
        ;   XREF to: 004067b0 (CONDITIONAL_JUMP)  ; LAB_004067b0
    MOV EDX,0xfeffff                    ; 00406848
    JMP 0x004067b0                      ; 0040684d
        ;   XREF to: 004067b0 (UNCONDITIONAL_JUMP)  ; LAB_004067b0
    PUSH 0x730418                       ; 00406852 | DAT_00730418
        ;   Label: LAB_00406852
    PUSH EDI                            ; 00406857
    CALL FUN_0043a840                   ; 00406858
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0043a840()
    ADD ESP,0x8                         ; 0040685d
    POP EBX                             ; 00406860
    POP ESI                             ; 00406861
    POP EDI                             ; 00406862
    MOV EDX,dword ptr [ESP + 0x8]       ; 00406863
        ;   Label: LAB_00406863
    MOV EDX,dword ptr [EDX + 0x4]       ; 00406867
    LEA EAX,[EDX*0x4 + 0x0]             ; 0040686a
    SUB EAX,EDX                         ; 00406871
    LEA EDX,[EAX*0x4 + 0x0]             ; 00406873
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040687a
    ADD EAX,0x18                        ; 0040687e
    ADD EAX,EDX                         ; 00406881
    POP EBP                             ; 00406883
    RET                                 ; 00406884

