; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044f760(int param_1)
;
;
; XREF[2]:
;   FUN_0044de20 at 0044dffa
;   FUN_0044e010 at 0044e572
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_005cfa40
;   TerminatedCString s_CKeyFramedModel_buildCol_005cfa53
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_0265370c
;
; Called Functions:
;   FUN_0044f840
;   FUN_004e4500
;   FUN_005b7fce
;   FUN_005b8df8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044f760
        ;   Label: FUN_0044f760
    PUSH EBP                            ; 0044f761
    MOV EBX,dword ptr [ESP + 0xc]       ; 0044f762
    MOV EDX,dword ptr [EBX + 0x358]     ; 0044f766
    PUSH EDX                            ; 0044f76c
    CALL FUN_005b7fce                   ; 0044f76d
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    MOV dword ptr [EBX + 0x358],0x0     ; 0044f772
    ADD ESP,0x4                         ; 0044f77c
    MOV ECX,dword ptr [EBX + 0x110]     ; 0044f77f
    MOV dword ptr [EBX + 0x354],0x0     ; 0044f785
    CMP ECX,0x1                         ; 0044f78f
    JL 0x0044f83a                       ; 0044f792
        ;   XREF to: 0044f83a (CONDITIONAL_JUMP)  ; LAB_0044f83a
    CMP dword ptr [EBX + 0x100],0x1     ; 0044f798
    JL 0x0044f83a                       ; 0044f79f
        ;   XREF to: 0044f83a (CONDITIONAL_JUMP)  ; LAB_0044f83a
    XOR EAX,EAX                         ; 0044f7a5
    TEST ECX,ECX                        ; 0044f7a7
    JLE 0x0044f7e0                      ; 0044f7a9
        ;   XREF to: 0044f7e0 (CONDITIONAL_JUMP)  ; LAB_0044f7e0
    XOR EDX,EDX                         ; 0044f7ab
    ADD EDX,0x48                        ; 0044f7ad
        ;   Label: LAB_0044f7ad
    MOV ECX,dword ptr [EBX + 0x114]     ; 0044f7b0
    MOV ECX,dword ptr [ECX + EDX*0x1 + -0x44] ; 0044f7b6
    MOV EBP,dword ptr [EBX + 0x354]     ; 0044f7ba
    SUB ECX,0x2                         ; 0044f7c0
    INC EAX                             ; 0044f7c3
    ADD EBP,ECX                         ; 0044f7c4
    MOV ECX,dword ptr [EBX + 0x110]     ; 0044f7c6
    MOV dword ptr [EBX + 0x354],EBP     ; 0044f7cc
    CMP EAX,ECX                         ; 0044f7d2
    JL 0x0044f7ad                       ; 0044f7d4
        ;   XREF to: 0044f7ad (CONDITIONAL_JUMP)  ; LAB_0044f7ad
    LEA EAX,[EAX]                       ; 0044f7d6
    LEA EDX,[EDX]                       ; 0044f7dc
    MOV EAX,dword ptr [EBX + 0x100]     ; 0044f7e0
        ;   Label: LAB_0044f7e0
    IMUL EAX,dword ptr [EBX + 0x354]    ; 0044f7e6
    SHL EAX,0x3                         ; 0044f7ed
    MOV EDX,EAX                         ; 0044f7f0
    SHL EAX,0x3                         ; 0044f7f2
    SUB EAX,EDX                         ; 0044f7f5
    PUSH EAX                            ; 0044f7f7
    CALL FUN_005b8df8                   ; 0044f7f8
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8df8()
    ADD ESP,0x4                         ; 0044f7fd
    MOV dword ptr [EBX + 0x358],EAX     ; 0044f800
    TEST EAX,EAX                        ; 0044f806
    JNZ 0x0044f82c                      ; 0044f808
        ;   XREF to: 0044f82c (CONDITIONAL_JUMP)  ; LAB_0044f82c
    MOV EBP,0x5cfa40                    ; 0044f80a | = "..\\core\\dmodel.cpp"
    MOV EAX,0x470                       ; 0044f80f
    PUSH 0x5cfa53                       ; 0044f814 | = "CKeyFramedModel::buildCollisionTriLis..."
    MOV dword ptr [0x01d046a0],EBP      ; 0044f819 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0044f81f | DAT_01d046a4
    CALL FUN_004e4500                   ; 0044f824
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0044f829
    PUSH 0x265370c                      ; 0044f82c | DAT_0265370c
        ;   Label: LAB_0044f82c
    PUSH EBX                            ; 0044f831
    CALL FUN_0044f840                   ; 0044f832
        ;   XREF to: 0044f840 (UNCONDITIONAL_CALL)  ; undefined FUN_0044f840()
    ADD ESP,0x8                         ; 0044f837
    POP EBP                             ; 0044f83a
        ;   Label: LAB_0044f83a
    POP EBX                             ; 0044f83b
    RET                                 ; 0044f83c

