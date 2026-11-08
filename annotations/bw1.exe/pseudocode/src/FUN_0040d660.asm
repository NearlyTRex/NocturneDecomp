; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_0040d660(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,undefined4 param_8)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_004ba930 at 004ba9d9
;   FUN_004be0f0 at 004be896
;   FUN_004fae10 at 004fb645
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c43550
;
; Called Functions:
;   FUN_0040d910
;   FUN_0057ff73
;   FUN_0058000e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d660
        ;   Label: FUN_0040d660
    PUSH ESI                            ; 0040d661
    PUSH EDI                            ; 0040d662
    PUSH EBP                            ; 0040d663
    SUB ESP,0x1c                        ; 0040d664
    MOV EBP,dword ptr [ESP + 0x30]      ; 0040d667
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0040d66b
    MOV ESI,dword ptr [ESP + 0x40]      ; 0040d66f
    MOV EAX,dword ptr [ESP + 0x44]      ; 0040d673
    MOV EBX,dword ptr [ESP + 0x48]      ; 0040d677
    SUB EAX,EDI                         ; 0040d67b
    MOV EDX,dword ptr [0x0061b498]      ; 0040d67d | DAT_0061b498
    INC EAX                             ; 0040d683
    SUB EBX,ESI                         ; 0040d684
    MOV dword ptr [ESP + 0x10],EAX      ; 0040d686
    MOV EAX,dword ptr [ESP + 0x34]      ; 0040d68a
    INC EBX                             ; 0040d68e
    CMP EAX,EDX                         ; 0040d68f
    JGE 0x0040d7a0                      ; 0040d691
        ;   XREF to: 0040d7a0 (CONDITIONAL_JUMP)  ; LAB_0040d7a0
    MOV EAX,dword ptr [ESP + 0x38]      ; 0040d697
    CMP EAX,dword ptr [0x0061b49c]      ; 0040d69b | DAT_0061b49c
    JGE 0x0040d7a0                      ; 0040d6a1
        ;   XREF to: 0040d7a0 (CONDITIONAL_JUMP)  ; LAB_0040d7a0
    MOV EAX,dword ptr [ESP + 0x34]      ; 0040d6a7
    ADD EAX,dword ptr [ESP + 0x10]      ; 0040d6ab
    TEST EAX,EAX                        ; 0040d6af
    JL 0x0040d7a0                       ; 0040d6b1
        ;   XREF to: 0040d7a0 (CONDITIONAL_JUMP)  ; LAB_0040d7a0
    MOV EDX,dword ptr [ESP + 0x38]      ; 0040d6b7
    ADD EDX,EBX                         ; 0040d6bb
    TEST EDX,EDX                        ; 0040d6bd
    JL 0x0040d7a0                       ; 0040d6bf
        ;   XREF to: 0040d7a0 (CONDITIONAL_JUMP)  ; LAB_0040d7a0
    MOV ECX,dword ptr [ESP + 0x34]      ; 0040d6c5
    TEST ECX,ECX                        ; 0040d6c9
    JL 0x0040d7a8                       ; 0040d6cb
        ;   XREF to: 0040d7a8 (CONDITIONAL_JUMP)  ; LAB_0040d7a8
    MOV EAX,dword ptr [ESP + 0x38]      ; 0040d6d1
        ;   Label: LAB_0040d6d1
    TEST EAX,EAX                        ; 0040d6d5
    JL 0x0040d7b9                       ; 0040d6d7
        ;   XREF to: 0040d7b9 (CONDITIONAL_JUMP)  ; LAB_0040d7b9
    MOV EAX,dword ptr [ESP + 0x34]      ; 0040d6dd
        ;   Label: LAB_0040d6dd
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040d6e1
    MOV ECX,dword ptr [0x0061b498]      ; 0040d6e5 | DAT_0061b498
    ADD EAX,EDX                         ; 0040d6eb
    CMP EAX,ECX                         ; 0040d6ed
    JGE 0x0040d7c8                      ; 0040d6ef
        ;   XREF to: 0040d7c8 (CONDITIONAL_JUMP)  ; LAB_0040d7c8
    MOV EAX,dword ptr [ESP + 0x38]      ; 0040d6f5
        ;   Label: LAB_0040d6f5
    MOV EDX,dword ptr [0x0061b49c]      ; 0040d6f9 | DAT_0061b49c
    ADD EAX,EBX                         ; 0040d6ff
    CMP EAX,EDX                         ; 0040d701
    JL 0x0040d709                       ; 0040d703
        ;   XREF to: 0040d709 (CONDITIONAL_JUMP)  ; LAB_0040d709
    SUB EAX,EDX                         ; 0040d705
    SUB EBX,EAX                         ; 0040d707
    PUSH EBP                            ; 0040d709
        ;   Label: LAB_0040d709
    CALL FUN_0040d910                   ; 0040d70a
        ;   XREF to: 0040d910 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d910()
    IMUL ESI,dword ptr [EBP + 0xc]      ; 0040d70f
    ADD ESP,0x4                         ; 0040d713
    ADD EDI,ESI                         ; 0040d716
    MOV ESI,dword ptr [EBP]             ; 0040d718
    MOV EAX,dword ptr [EBP + 0x4]       ; 0040d71b
    ADD ESI,EDI                         ; 0040d71e
    ADD EDI,EAX                         ; 0040d720
    MOV EAX,dword ptr [ESP + 0x38]      ; 0040d722
    LEA EDX,[EBX*0x4 + 0x0]             ; 0040d726
    SHL EAX,0x2                         ; 0040d72d
    MOV ECX,dword ptr [0x0061b4a0]      ; 0040d730 | DAT_0061b4a0
    ADD EDX,EAX                         ; 0040d736
    CMP ECX,0x20                        ; 0040d738
    JNZ 0x0040d7d7                      ; 0040d73b
        ;   XREF to: 0040d7d7 (CONDITIONAL_JUMP)  ; LAB_0040d7d7
    TEST EBX,EBX                        ; 0040d741
    JLE 0x0040d7a0                      ; 0040d743
        ;   XREF to: 0040d7a0 (CONDITIONAL_JUMP)  ; LAB_0040d7a0
    MOV EBX,dword ptr [ESP + 0x34]      ; 0040d745
    MOV dword ptr [ESP + 0x18],EAX      ; 0040d749
    SHL EBX,0x2                         ; 0040d74d
    MOV dword ptr [ESP + 0x4],EDX       ; 0040d750
    MOV dword ptr [ESP + 0xc],EBX       ; 0040d754
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040d758
        ;   Label: LAB_0040d758
    PUSH EDX                            ; 0040d75c
    MOV ECX,dword ptr [ESP + 0x50]      ; 0040d75d
    PUSH ECX                            ; 0040d761
    MOV EAX,dword ptr [ESP + 0x20]      ; 0040d762
    PUSH EDI                            ; 0040d766
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040d767
    MOV EAX,dword ptr [EAX + 0x1c4354c] ; 0040d76b | DAT_01c4354c | DAT_01c43550
    PUSH ESI                            ; 0040d771
    ADD EAX,EBX                         ; 0040d772
    PUSH EAX                            ; 0040d774
    CALL FUN_0057ff73                   ; 0040d775
        ;   XREF to: 0057ff73 (UNCONDITIONAL_CALL)  ; undefined FUN_0057ff73()
    ADD ESP,0x14                        ; 0040d77a
    MOV EBX,dword ptr [EBP + 0xc]       ; 0040d77d
    MOV EDX,dword ptr [ESP + 0x18]      ; 0040d780
    MOV ECX,dword ptr [ESP + 0x4]       ; 0040d784
    ADD ESI,EBX                         ; 0040d788
    ADD EDX,0x4                         ; 0040d78a
    ADD EDI,EBX                         ; 0040d78d
    MOV dword ptr [ESP + 0x18],EDX      ; 0040d78f
    CMP EDX,ECX                         ; 0040d793
    JL 0x0040d758                       ; 0040d795
        ;   XREF to: 0040d758 (CONDITIONAL_JUMP)  ; LAB_0040d758
    LEA EAX,[EAX]                       ; 0040d797
    LEA EDX,[EDX]                       ; 0040d79d
    ADD ESP,0x1c                        ; 0040d7a0
        ;   Label: LAB_0040d7a0
    POP EBP                             ; 0040d7a3
    POP EDI                             ; 0040d7a4
    POP ESI                             ; 0040d7a5
    POP EBX                             ; 0040d7a6
    RET                                 ; 0040d7a7
    SUB EDI,ECX                         ; 0040d7a8
        ;   Label: LAB_0040d7a8
    XOR ECX,ECX                         ; 0040d7aa
    MOV dword ptr [ESP + 0x10],EAX      ; 0040d7ac
    MOV dword ptr [ESP + 0x34],ECX      ; 0040d7b0
    JMP 0x0040d6d1                      ; 0040d7b4
        ;   XREF to: 0040d6d1 (UNCONDITIONAL_JUMP)  ; LAB_0040d6d1
    ADD EBX,EAX                         ; 0040d7b9
        ;   Label: LAB_0040d7b9
    SUB ESI,EAX                         ; 0040d7bb
    XOR EAX,EAX                         ; 0040d7bd
    MOV dword ptr [ESP + 0x38],EAX      ; 0040d7bf
    JMP 0x0040d6dd                      ; 0040d7c3
        ;   XREF to: 0040d6dd (UNCONDITIONAL_JUMP)  ; LAB_0040d6dd
    SUB EAX,ECX                         ; 0040d7c8
        ;   Label: LAB_0040d7c8
    MOV ECX,EDX                         ; 0040d7ca
    SUB ECX,EAX                         ; 0040d7cc
    MOV dword ptr [ESP + 0x10],ECX      ; 0040d7ce
    JMP 0x0040d6f5                      ; 0040d7d2
        ;   XREF to: 0040d6f5 (UNCONDITIONAL_JUMP)  ; LAB_0040d6f5
    TEST EBX,EBX                        ; 0040d7d7
        ;   Label: LAB_0040d7d7
    JLE 0x0040d7a0                      ; 0040d7d9
        ;   XREF to: 0040d7a0 (CONDITIONAL_JUMP)  ; LAB_0040d7a0
    MOV EBX,dword ptr [ESP + 0x34]      ; 0040d7db
    MOV dword ptr [ESP + 0x14],EAX      ; 0040d7df
    ADD EBX,EBX                         ; 0040d7e3
    MOV dword ptr [ESP + 0x8],EDX       ; 0040d7e5
    MOV dword ptr [ESP],EBX             ; 0040d7e9
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040d7ec
        ;   Label: LAB_0040d7ec
    PUSH EDX                            ; 0040d7f0
    MOV ECX,dword ptr [ESP + 0x50]      ; 0040d7f1
    PUSH ECX                            ; 0040d7f5
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0040d7f6
    PUSH EDI                            ; 0040d7fa
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040d7fb
    MOV EAX,dword ptr [EAX + 0x1c4354c] ; 0040d7ff | DAT_01c4354c | DAT_01c43550
    PUSH ESI                            ; 0040d805
    ADD EAX,EBX                         ; 0040d806
    PUSH EAX                            ; 0040d808
    CALL FUN_0058000e                   ; 0040d809
        ;   XREF to: 0058000e (UNCONDITIONAL_CALL)  ; undefined FUN_0058000e()
    ADD ESP,0x14                        ; 0040d80e
    MOV EBX,dword ptr [EBP + 0xc]       ; 0040d811
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040d814
    MOV ECX,dword ptr [ESP + 0x8]       ; 0040d818
    ADD ESI,EBX                         ; 0040d81c
    ADD EDX,0x4                         ; 0040d81e
    ADD EDI,EBX                         ; 0040d821
    MOV dword ptr [ESP + 0x14],EDX      ; 0040d823
    CMP EDX,ECX                         ; 0040d827
    JL 0x0040d7ec                       ; 0040d829
        ;   XREF to: 0040d7ec (CONDITIONAL_JUMP)  ; LAB_0040d7ec
    ADD ESP,0x1c                        ; 0040d82b
    POP EBP                             ; 0040d82e
    POP EDI                             ; 0040d82f
    POP ESI                             ; 0040d830
    POP EBX                             ; 0040d831
    RET                                 ; 0040d832

