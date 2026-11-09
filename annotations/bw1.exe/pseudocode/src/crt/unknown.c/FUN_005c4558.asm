; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c4558(uint *param_1,int *param_2,undefined1 *param_3)
;
;
; XREF[2]:
;   unkafter_zombie.cpp_FUN_005ca6bf at 005ca771
;   unkafter_zombie.cpp_FUN_005ccccc at 005ccd2d
;
; Called Functions:
;   crt_unknown.c_FUN_005c4867
;   unkafter_zombie.cpp_FUN_005ca7dc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c4558
        ;   Label: crt_unknown.c_FUN_005c4558
    MOV EBP,ESP                         ; 005c4559
    PUSH EBX                            ; 005c455b
    PUSH ESI                            ; 005c455c
    PUSH EDI                            ; 005c455d
    SUB ESP,0x88                        ; 005c455e
    MOV EBX,dword ptr [EBP + 0x8]       ; 005c4564
    MOV ESI,dword ptr [EBP + 0xc]       ; 005c4567
    PUSH 0x0                            ; 005c456a
    FSTCW word ptr [ESP]                ; 005c456c
    POP EAX                             ; 005c4570
    MOV dword ptr [EBP + -0x14],EAX     ; 005c4571
    OR AH,0x3                           ; 005c4574
    AND EAX,0xffff                      ; 005c4577
    PUSH EAX                            ; 005c457c
    FLDCW word ptr [ESP]                ; 005c457d
    POP EAX                             ; 005c4580
    MOV dword ptr [ESI + 0x14],0x0      ; 005c4581
    MOV AX,word ptr [EBX + 0x8]         ; 005c4588
    MOV word ptr [EBP + -0x40],AX       ; 005c458c
    MOV EAX,dword ptr [EBX + 0x4]       ; 005c4590
    MOV dword ptr [EBP + -0x44],EAX     ; 005c4593
    MOV EAX,dword ptr [EBX]             ; 005c4596
    MOV dword ptr [EBP + -0x48],EAX     ; 005c4598
    TEST byte ptr [EBP + -0x3f],0x80    ; 005c459b
    JZ 0x005c45a8                       ; 005c459f
        ;   XREF to: 005c45a8 (CONDITIONAL_JUMP)  ; LAB_005c45a8
    MOV dword ptr [ESI + 0x14],0xffffffff ; 005c45a1
    AND byte ptr [EBP + -0x3f],0x7f     ; 005c45a8
        ;   Label: LAB_005c45a8
    MOV dword ptr [ESI + 0x1c],0x0      ; 005c45ac
    MOV dword ptr [ESI + 0x20],0x0      ; 005c45b3
    LEA EAX,[EBP + -0x48]               ; 005c45ba
    MOV dword ptr [ESI + 0x24],0x0      ; 005c45bd
    PUSH EAX                            ; 005c45c4
    MOV dword ptr [ESI + 0x28],0x0      ; 005c45c5
    XOR EDI,EDI                         ; 005c45cc
    MOV dword ptr [ESI + 0x18],0x0      ; 005c45ce
    CALL unkafter_zombie.cpp_FUN_005ca7dc ; 005c45d5
        ;   XREF to: 005ca7dc (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005ca7dc()
    ADD ESP,0x4                         ; 005c45da
    CMP EAX,0x4                         ; 005c45dd
    JA 0x005c4760                       ; 005c45e0
        ;   XREF to: 005c4760 (CONDITIONAL_JUMP)  ; LAB_005c4760
    JMP dword ptr CS:[EAX*0x4 + 0x5c4544] ; 005c45e6
    TEST byte ptr [ESI + 0x8],0x2       ; 005c4760
        ;   Label: LAB_005c4760
    JZ 0x005c4782                       ; 005c4764
        ;   XREF to: 005c4782 (CONDITIONAL_JUMP)  ; LAB_005c4782
    MOV EDX,dword ptr [EBP + -0x20]     ; 005c4766
    MOV EAX,dword ptr [ESI]             ; 005c4769
    ADD EAX,EDX                         ; 005c476b
    ADD EAX,0xa                         ; 005c476d
    MOV EBX,dword ptr [ESI + 0x4]       ; 005c4770
    MOV dword ptr [EBP + -0x18],EAX     ; 005c4773
    TEST EBX,EBX                        ; 005c4776
    JLE 0x005c478a                      ; 005c4778
        ;   XREF to: 005c478a (CONDITIONAL_JUMP)  ; LAB_005c478a
    LEA ECX,[EAX + EBX*0x1]             ; 005c477a
    MOV dword ptr [EBP + -0x18],ECX     ; 005c477d
    JMP 0x005c478a                      ; 005c4780
        ;   XREF to: 005c478a (UNCONDITIONAL_JUMP)  ; LAB_005c478a
    MOV EAX,dword ptr [ESI]             ; 005c4782
        ;   Label: LAB_005c4782
    ADD EAX,0x7                         ; 005c4784
    MOV dword ptr [EBP + -0x18],EAX     ; 005c4787
    MOV BH,byte ptr [ESI + 0x8]         ; 005c478a
        ;   Label: LAB_005c478a
    MOV EAX,0xf                         ; 005c478d
    TEST BH,0x20                        ; 005c4792
    JZ 0x005c479c                       ; 005c4795
        ;   XREF to: 005c479c (CONDITIONAL_JUMP)  ; LAB_005c479c
    MOV EAX,0x14                        ; 005c4797
    TEST byte ptr [ESI + 0x8],0x40      ; 005c479c
        ;   Label: LAB_005c479c
    JZ 0x005c47a4                       ; 005c47a0
        ;   XREF to: 005c47a4 (CONDITIONAL_JUMP)  ; LAB_005c47a4
    ADD EAX,EAX                         ; 005c47a2
    MOV EDX,dword ptr [EBP + -0x18]     ; 005c47a4
        ;   Label: LAB_005c47a4
    ADD EAX,0x4                         ; 005c47a7
    CMP EAX,EDX                         ; 005c47aa
    JGE 0x005c47b1                      ; 005c47ac
        ;   XREF to: 005c47b1 (CONDITIONAL_JUMP)  ; LAB_005c47b1
    MOV dword ptr [EBP + -0x18],EAX     ; 005c47ae
    MOV CH,0x30                         ; 005c47b1
        ;   Label: LAB_005c47b1
    XOR AL,AL                           ; 005c47b3
    XOR EBX,EBX                         ; 005c47b5
    MOV byte ptr [EBP + 0xffffff6c],CH  ; 005c47b7
    MOV byte ptr [EBP + 0xffffff6d],AL  ; 005c47bd
    LEA EAX,[EBP + 0xffffff6d]          ; 005c47c3
    MOV dword ptr [EBP + -0x24],EBX     ; 005c47c9
    MOV dword ptr [EBP + -0x1c],EAX     ; 005c47cc
    MOV ECX,dword ptr [EBP + -0x18]     ; 005c47cf
        ;   Label: LAB_005c47cf
    TEST ECX,ECX                        ; 005c47d2
    JLE 0x005c48c5                      ; 005c47d4
        ;   XREF to: 005c48c5 (CONDITIONAL_JUMP)  ; LAB_005c48c5
    LEA EAX,[ECX + -0x8]                ; 005c47da
    MOV dword ptr [EBP + -0x18],EAX     ; 005c47dd
    TEST EDI,EDI                        ; 005c47e0
    JNZ 0x005c4859                      ; 005c47e2
        ;   XREF to: 005c4859 (CONDITIONAL_JUMP)  ; LAB_005c4859
    TEST word ptr [EBP + -0x40],0x7fff  ; 005c47e4
    JZ 0x005c48c5                       ; 005c47ea
        ;   XREF to: 005c48c5 (CONDITIONAL_JUMP)  ; LAB_005c48c5
    LEA EAX,[EBP + -0x48]               ; 005c47f0
    FLD extended double ptr [EAX]       ; 005c47f3
    PUSH EAX                            ; 005c47f5
    PUSH EAX                            ; 005c47f6
    FSTCW word ptr [ESP]                ; 005c47f7
    POP EAX                             ; 005c47fb
    PUSH EAX                            ; 005c47fc
    OR AH,0xc                           ; 005c47fd
    PUSH EAX                            ; 005c4800
    FLDCW word ptr [ESP]                ; 005c4801
    POP EAX                             ; 005c4804
    FISTP dword ptr [ESP + 0x4]         ; 005c4805
    FLDCW word ptr [ESP]                ; 005c4809
    POP EAX                             ; 005c480c
    POP EAX                             ; 005c480d
    MOV EDX,dword ptr [EBP + -0x18]     ; 005c480e
    MOV EDI,EAX                         ; 005c4811
    TEST EDX,EDX                        ; 005c4813
    JLE 0x005c4859                      ; 005c4815
        ;   XREF to: 005c4859 (CONDITIONAL_JUMP)  ; LAB_005c4859
    LEA EDX,[EBP + -0x54]               ; 005c4817
    LEA EBX,[EBP + -0x48]               ; 005c481a
    PUSH EAX                            ; 005c481d
    FILD dword ptr [ESP]                ; 005c481e
    POP EAX                             ; 005c4821
    FSTP extended double ptr [EDX]      ; 005c4822
    LEA EDX,[EBP + -0x54]               ; 005c4824
    LEA EAX,[EBP + -0x48]               ; 005c4827
    FLD extended double ptr [EAX]       ; 005c482a
    FLD extended double ptr [EDX]       ; 005c482c
    FSUBP                               ; 005c482e
    FSTP extended double ptr [EBX]      ; 005c4830
    MOV ECX,0x4019                      ; 005c4832
    MOV EBX,0xbebc2000                  ; 005c4837
    LEA EDX,[EBP + -0x54]               ; 005c483c
    LEA EAX,[EBP + -0x48]               ; 005c483f
    MOV word ptr [EBP + -0x4c],CX       ; 005c4842
    MOV dword ptr [EBP + -0x50],EBX     ; 005c4846
    XOR ECX,ECX                         ; 005c4849
    LEA EBX,[EBP + -0x48]               ; 005c484b
    MOV dword ptr [EBP + -0x54],ECX     ; 005c484e
    FLD extended double ptr [EAX]       ; 005c4851
    FLD extended double ptr [EDX]       ; 005c4853
    FMULP                               ; 005c4855
    FSTP extended double ptr [EBX]      ; 005c4857
    MOV EBX,dword ptr [EBP + -0x1c]     ; 005c4859
        ;   Label: LAB_005c4859
    MOV EAX,EDI                         ; 005c485c
    PUSH ECX                            ; 005c485e
    PUSH EDX                            ; 005c485f
    CALL crt_unknown.c_FUN_005c4867     ; 005c4860
        ;   XREF to: 005c4867 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4867()
    JMP 0x005c48ac                      ; 005c4865
        ;   XREF to: 005c48ac (UNCONDITIONAL_JUMP)

