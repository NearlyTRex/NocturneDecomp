; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_FUN_004837f0(CPickList *this_ptr)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_edittool.cpp_FUN_00482320 at 00482343
;   shape_edittool.cpp_FUN_00482770 at 00482780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004837f0
        ;   Label: shape_edittool.cpp_FUN_004837f0
    PUSH ESI                            ; 004837f1
    PUSH EDI                            ; 004837f2
    PUSH EBP                            ; 004837f3
    MOV EAX,dword ptr [ESP + 0x14]      ; 004837f4
    MOV ECX,dword ptr [EAX]             ; 004837f8
    CMP ECX,dword ptr [EAX + 0x194]     ; 004837fa
    JLE 0x00483837                      ; 00483800
        ;   XREF to: 00483837 (CONDITIONAL_JUMP)  ; LAB_00483837
    CMP dword ptr [EAX + 0x194],0x0     ; 00483802
        ;   Label: LAB_00483802
    JL 0x00483842                       ; 00483809
        ;   XREF to: 00483842 (CONDITIONAL_JUMP)  ; LAB_00483842
    MOV ESI,dword ptr [EAX + 0x198]     ; 0048380b
        ;   Label: LAB_0048380b
    TEST ESI,ESI                        ; 00483811
    JL 0x0048384e                       ; 00483813
        ;   XREF to: 0048384e (CONDITIONAL_JUMP)  ; LAB_0048384e
    MOV EBP,dword ptr [EAX]             ; 00483815
        ;   Label: LAB_00483815
    MOV EDX,dword ptr [EAX + 0x198]     ; 00483817
    CMP EDX,EBP                         ; 0048381d
    JL 0x0048385f                       ; 0048381f
        ;   XREF to: 0048385f (CONDITIONAL_JUMP)  ; LAB_0048385f
    MOV EBX,dword ptr [EAX + 0x198]     ; 00483821
    MOV EDX,dword ptr [EAX + 0x1a0]     ; 00483827
    SUB EBX,EDX                         ; 0048382d
    MOV dword ptr [EAX + 0x198],EBX     ; 0048382f
    JMP 0x00483815                      ; 00483835
        ;   XREF to: 00483815 (UNCONDITIONAL_JUMP)  ; LAB_00483815
    LEA EDX,[ECX + -0x1]                ; 00483837
        ;   Label: LAB_00483837
    MOV dword ptr [EAX + 0x194],EDX     ; 0048383a
    JMP 0x00483802                      ; 00483840
        ;   XREF to: 00483802 (UNCONDITIONAL_JUMP)  ; LAB_00483802
    MOV dword ptr [EAX + 0x194],0x0     ; 00483842
        ;   Label: LAB_00483842
    JMP 0x0048380b                      ; 0048384c
        ;   XREF to: 0048380b (UNCONDITIONAL_JUMP)  ; LAB_0048380b
    MOV EDX,dword ptr [EAX + 0x1a0]     ; 0048384e
        ;   Label: LAB_0048384e
    LEA EDI,[ESI + EDX*0x1]             ; 00483854
    MOV dword ptr [EAX + 0x198],EDI     ; 00483857
    JMP 0x0048380b                      ; 0048385d
        ;   XREF to: 0048380b (UNCONDITIONAL_JUMP)  ; LAB_0048380b
    TEST EDX,EDX                        ; 0048385f
        ;   Label: LAB_0048385f
    JL 0x004838b0                       ; 00483861
        ;   XREF to: 004838b0 (CONDITIONAL_JUMP)  ; LAB_004838b0
    MOV ECX,dword ptr [EAX]             ; 00483863
        ;   Label: LAB_00483863
    CMP ECX,dword ptr [EAX + 0x194]     ; 00483865
    JLE 0x0048390c                      ; 0048386b
        ;   XREF to: 0048390c (CONDITIONAL_JUMP)  ; LAB_0048390c
    XOR ECX,ECX                         ; 00483871
    MOV ESI,dword ptr [EAX + 0x198]     ; 00483873
        ;   Label: LAB_00483873
    CMP ESI,dword ptr [EAX + 0x194]     ; 00483879
    JG 0x004838bc                       ; 0048387f
        ;   XREF to: 004838bc (CONDITIONAL_JUMP)  ; LAB_004838bc
    MOV ESI,dword ptr [EAX + 0x19c]     ; 00483881
        ;   Label: LAB_00483881
    MOV EDX,dword ptr [EAX + 0x198]     ; 00483887
    MOV EDI,dword ptr [EAX + 0x194]     ; 0048388d
    ADD EDX,ESI                         ; 00483893
    CMP EDX,EDI                         ; 00483895
    JG 0x0048390c                       ; 00483897
        ;   XREF to: 0048390c (CONDITIONAL_JUMP)  ; LAB_0048390c
    MOV EBP,dword ptr [EAX + 0x1a8]     ; 0048389d
    CMP EBP,0x1                         ; 004838a3
    JNZ 0x004838f3                      ; 004838a6
        ;   XREF to: 004838f3 (CONDITIONAL_JUMP)  ; LAB_004838f3
    ADD dword ptr [EAX + 0x198],EBP     ; 004838a8
    JMP 0x00483881                      ; 004838ae
        ;   XREF to: 00483881 (UNCONDITIONAL_JUMP)  ; LAB_00483881
    MOV dword ptr [EAX + 0x198],0x0     ; 004838b0
        ;   Label: LAB_004838b0
    JMP 0x00483863                      ; 004838ba
        ;   XREF to: 00483863 (UNCONDITIONAL_JUMP)  ; LAB_00483863
    MOV EDI,dword ptr [EAX + 0x1a8]     ; 004838bc
        ;   Label: LAB_004838bc
    CMP EDI,0x1                         ; 004838c2
    JNZ 0x004838e1                      ; 004838c5
        ;   XREF to: 004838e1 (CONDITIONAL_JUMP)  ; LAB_004838e1
    MOV EDX,ESI                         ; 004838c7
    SUB EDX,EDI                         ; 004838c9
    MOV dword ptr [EAX + 0x198],EDX     ; 004838cb
    CMP ECX,dword ptr [EAX + 0x198]     ; 004838d1
        ;   Label: LAB_004838d1
    JLE 0x00483873                      ; 004838d7
        ;   XREF to: 00483873 (CONDITIONAL_JUMP)  ; LAB_00483873
    MOV dword ptr [EAX + 0x198],ECX     ; 004838d9
    JMP 0x00483873                      ; 004838df
        ;   XREF to: 00483873 (UNCONDITIONAL_JUMP)  ; LAB_00483873
    MOV EBP,ESI                         ; 004838e1
        ;   Label: LAB_004838e1
    MOV EDX,dword ptr [EAX + 0x1a0]     ; 004838e3
    SUB EBP,EDX                         ; 004838e9
    MOV dword ptr [EAX + 0x198],EBP     ; 004838eb
    JMP 0x004838d1                      ; 004838f1
        ;   XREF to: 004838d1 (UNCONDITIONAL_JUMP)  ; LAB_004838d1
    MOV ECX,dword ptr [EAX + 0x198]     ; 004838f3
        ;   Label: LAB_004838f3
    MOV EDX,dword ptr [EAX + 0x1a0]     ; 004838f9
    ADD ECX,EDX                         ; 004838ff
    MOV dword ptr [EAX + 0x198],ECX     ; 00483901
    JMP 0x00483881                      ; 00483907
        ;   XREF to: 00483881 (UNCONDITIONAL_JUMP)  ; LAB_00483881
    CMP dword ptr [EAX + 0x1a8],0x1     ; 0048390c
        ;   Label: LAB_0048390c
    JNZ 0x0048392f                      ; 00483913
        ;   XREF to: 0048392f (CONDITIONAL_JUMP)  ; LAB_0048392f
    MOV EDI,dword ptr [EAX + 0x1a0]     ; 00483915
    MOV EDX,dword ptr [EAX]             ; 0048391b
    MOV EBP,dword ptr [EAX + 0x198]     ; 0048391d
    SUB EDX,EDI                         ; 00483923
    CMP EDX,EBP                         ; 00483925
    JGE 0x0048392f                      ; 00483927
        ;   XREF to: 0048392f (CONDITIONAL_JUMP)  ; LAB_0048392f
    MOV dword ptr [EAX + 0x198],EDX     ; 00483929
    CMP dword ptr [EAX + 0x198],0x0     ; 0048392f
        ;   Label: LAB_0048392f
    JL 0x0048393d                       ; 00483936
        ;   XREF to: 0048393d (CONDITIONAL_JUMP)  ; LAB_0048393d
    POP EBP                             ; 00483938
    POP EDI                             ; 00483939
    POP ESI                             ; 0048393a
    POP EBX                             ; 0048393b
    RET                                 ; 0048393c
    MOV dword ptr [EAX + 0x198],0x0     ; 0048393d
        ;   Label: LAB_0048393d
    POP EBP                             ; 00483947
    POP EDI                             ; 00483948
    POP ESI                             ; 00483949
    POP EBX                             ; 0048394a
    RET                                 ; 0048394b

