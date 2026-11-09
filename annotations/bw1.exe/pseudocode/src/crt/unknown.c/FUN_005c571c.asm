; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte * crt_unknown_c_FUN_005c571c(byte *param_1,int param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c5450 at 005c54e1
;
; Referenced Globals:
;   undefined4 DAT_00626114
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c571c
        ;   Label: crt_unknown.c_FUN_005c571c
    PUSH ESI                            ; 005c571d
    PUSH EDI                            ; 005c571e
    MOV EDX,dword ptr [ESP + 0x10]      ; 005c571f
    MOV EDI,dword ptr [ESP + 0x14]      ; 005c5723
    MOV AH,byte ptr [EDI + 0x10]        ; 005c5727
    OR AH,0x1                           ; 005c572a
    MOV dword ptr [EDI + 0xc],0xffffffff ; 005c572d
    MOV BL,AH                           ; 005c5734
    MOV byte ptr [EDI + 0x10],AH        ; 005c5736
    AND BL,0x3                          ; 005c5739
    MOV byte ptr [EDI + 0x10],BL        ; 005c573c
    CMP byte ptr [EDX],0x2a             ; 005c573f
    JNZ 0x005c574e                      ; 005c5742
        ;   XREF to: 005c574e (CONDITIONAL_JUMP)  ; LAB_005c574e
    MOV CL,byte ptr [EDI + 0x10]        ; 005c5744
    AND CL,0xfe                         ; 005c5747
    INC EDX                             ; 005c574a
    MOV byte ptr [EDI + 0x10],CL        ; 005c574b
    XOR EBX,EBX                         ; 005c574e
        ;   Label: LAB_005c574e
    MOV BL,byte ptr [EDX]               ; 005c5750
    MOV AL,BL                           ; 005c5752
    INC AL                              ; 005c5754
    AND EAX,0xff                        ; 005c5756
    TEST byte ptr [EAX + 0x626114],0x20 ; 005c575b | DAT_00626114
    JZ 0x005c5789                       ; 005c5762
        ;   XREF to: 005c5789 (CONDITIONAL_JUMP)  ; LAB_005c5789
    XOR EAX,EAX                         ; 005c5764
    IMUL EAX,EAX,0xa                    ; 005c5766
        ;   Label: LAB_005c5766
    SUB EBX,0x30                        ; 005c5769
    ADD EAX,EBX                         ; 005c576c
    XOR EBX,EBX                         ; 005c576e
    MOV BL,byte ptr [EDX + 0x1]         ; 005c5770
    MOV CL,BL                           ; 005c5773
    INC CL                              ; 005c5775
    MOVZX ESI,CL                        ; 005c5777
    MOV CL,byte ptr [ESI + 0x626114]    ; 005c577a | DAT_00626114
    INC EDX                             ; 005c5780
    TEST CL,0x20                        ; 005c5781
    JNZ 0x005c5766                      ; 005c5784
        ;   XREF to: 005c5766 (CONDITIONAL_JUMP)  ; LAB_005c5766
    MOV dword ptr [EDI + 0xc],EAX       ; 005c5786
    MOV CH,byte ptr [EDX]               ; 005c5789
        ;   Label: LAB_005c5789
    LEA EAX,[EDX + 0x1]                 ; 005c578b
    CMP CH,0x4e                         ; 005c578e
    JNZ 0x005c57a0                      ; 005c5791
        ;   XREF to: 005c57a0 (CONDITIONAL_JUMP)  ; LAB_005c57a0
    MOV CL,byte ptr [EDI + 0x10]        ; 005c5793
    OR CL,0x8                           ; 005c5796
    MOV EDX,EAX                         ; 005c5799
    MOV byte ptr [EDI + 0x10],CL        ; 005c579b
    JMP 0x005c57b0                      ; 005c579e
        ;   XREF to: 005c57b0 (UNCONDITIONAL_JUMP)  ; LAB_005c57b0
    CMP CH,0x46                         ; 005c57a0
        ;   Label: LAB_005c57a0
    JNZ 0x005c57b0                      ; 005c57a3
        ;   XREF to: 005c57b0 (CONDITIONAL_JUMP)  ; LAB_005c57b0
    MOV BH,byte ptr [EDI + 0x10]        ; 005c57a5
    OR BH,0x4                           ; 005c57a8
    MOV EDX,EAX                         ; 005c57ab
    MOV byte ptr [EDI + 0x10],BH        ; 005c57ad
    MOV AL,byte ptr [EDX]               ; 005c57b0
        ;   Label: LAB_005c57b0
    LEA EBX,[EDX + 0x1]                 ; 005c57b2
    CMP AL,0x68                         ; 005c57b5
    JC 0x005c57c7                       ; 005c57b7
        ;   XREF to: 005c57c7 (CONDITIONAL_JUMP)  ; LAB_005c57c7
    JBE 0x005c57d3                      ; 005c57b9
        ;   XREF to: 005c57d3 (CONDITIONAL_JUMP)  ; LAB_005c57d3
    CMP AL,0x6c                         ; 005c57bb
    JC 0x005c5810                       ; 005c57bd
        ;   XREF to: 005c5810 (CONDITIONAL_JUMP)  ; LAB_005c5810
    JBE 0x005c57df                      ; 005c57bf
        ;   XREF to: 005c57df (CONDITIONAL_JUMP)  ; LAB_005c57df
    CMP AL,0x77                         ; 005c57c1
    JZ 0x005c57df                       ; 005c57c3
        ;   XREF to: 005c57df (CONDITIONAL_JUMP)  ; LAB_005c57df
    JMP 0x005c5810                      ; 005c57c5
        ;   XREF to: 005c5810 (UNCONDITIONAL_JUMP)  ; LAB_005c5810
    CMP AL,0x49                         ; 005c57c7
        ;   Label: LAB_005c57c7
    JC 0x005c5810                       ; 005c57c9
        ;   XREF to: 005c5810 (CONDITIONAL_JUMP)  ; LAB_005c5810
    JBE 0x005c57f8                      ; 005c57cb
        ;   XREF to: 005c57f8 (CONDITIONAL_JUMP)  ; LAB_005c57f8
    CMP AL,0x4c                         ; 005c57cd
    JZ 0x005c57eb                       ; 005c57cf
        ;   XREF to: 005c57eb (CONDITIONAL_JUMP)  ; LAB_005c57eb
    JMP 0x005c5810                      ; 005c57d1
        ;   XREF to: 005c5810 (UNCONDITIONAL_JUMP)  ; LAB_005c5810
    MOV AL,byte ptr [EDI + 0x10]        ; 005c57d3
        ;   Label: LAB_005c57d3
    OR AL,0x10                          ; 005c57d6
    MOV EDX,EBX                         ; 005c57d8
    MOV byte ptr [EDI + 0x10],AL        ; 005c57da
    JMP 0x005c5810                      ; 005c57dd
        ;   XREF to: 005c5810 (UNCONDITIONAL_JUMP)  ; LAB_005c5810
    MOV CH,byte ptr [EDI + 0x10]        ; 005c57df
        ;   Label: LAB_005c57df
    OR CH,0x20                          ; 005c57e2
    INC EDX                             ; 005c57e5
    MOV byte ptr [EDI + 0x10],CH        ; 005c57e6
    JMP 0x005c5810                      ; 005c57e9
        ;   XREF to: 005c5810 (UNCONDITIONAL_JUMP)  ; LAB_005c5810
    MOV AH,byte ptr [EDI + 0x10]        ; 005c57eb
        ;   Label: LAB_005c57eb
    OR AH,0x40                          ; 005c57ee
    MOV EDX,EBX                         ; 005c57f1
    MOV byte ptr [EDI + 0x10],AH        ; 005c57f3
    JMP 0x005c5810                      ; 005c57f6
        ;   XREF to: 005c5810 (UNCONDITIONAL_JUMP)  ; LAB_005c5810
    CMP byte ptr [EDX + 0x1],0x36       ; 005c57f8
        ;   Label: LAB_005c57f8
    JNZ 0x005c5810                      ; 005c57fc
        ;   XREF to: 005c5810 (CONDITIONAL_JUMP)  ; LAB_005c5810
    CMP byte ptr [EDX + 0x2],0x34       ; 005c57fe
    JNZ 0x005c5810                      ; 005c5802
        ;   XREF to: 005c5810 (CONDITIONAL_JUMP)  ; LAB_005c5810
    MOV CL,byte ptr [EDI + 0x10]        ; 005c5804
    OR CL,0x40                          ; 005c5807
    ADD EDX,0x3                         ; 005c580a
    MOV byte ptr [EDI + 0x10],CL        ; 005c580d
    MOV EAX,EDX                         ; 005c5810
        ;   Label: LAB_005c5810
    POP EDI                             ; 005c5812
    POP ESI                             ; 005c5813
    POP EBX                             ; 005c5814
    RET                                 ; 005c5815

