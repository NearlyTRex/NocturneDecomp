; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049c750(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
;
;
; XREF[1]:
;   FUN_0049caa0 at 0049cc7f
;
; Referenced Globals:
;   undefined4 DAT_01c3f544
;   undefined4 DAT_01c3f5bc
;   undefined4 DAT_01c4e9f8
;   undefined4 DAT_01c4e9f9
;   undefined4 DAT_01c4e9fa
;   undefined4 DAT_01c4f020
;
; Called Functions:
;   FUN_00402f30
;   FUN_00403040
;   FUN_00517d50
;   FUN_005182e0
;   FUN_00518300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049c750
        ;   Label: FUN_0049c750
    PUSH ESI                            ; 0049c751
    PUSH EDI                            ; 0049c752
    PUSH EBP                            ; 0049c753
    MOV ESI,dword ptr [ESP + 0x24]      ; 0049c754
    MOV EDI,dword ptr [ESP + 0x28]      ; 0049c758
    MOV EDX,dword ptr [0x01c3f544]      ; 0049c75c | DAT_01c3f544
    MOV EBX,dword ptr [0x01c3f5bc]      ; 0049c762 | DAT_01c3f5bc
    TEST EDX,EDX                        ; 0049c768
    JNZ 0x0049c7e0                      ; 0049c76a
        ;   XREF to: 0049c7e0 (CONDITIONAL_JUMP)  ; LAB_0049c7e0
    MOV dword ptr [0x01c4f020],EBX      ; 0049c76c | DAT_01c4f020
    TEST EDI,EDI                        ; 0049c772
        ;   Label: LAB_0049c772
    JNZ 0x0049c81f                      ; 0049c774
        ;   XREF to: 0049c81f (CONDITIONAL_JUMP)  ; LAB_0049c81f
    MOV EDX,dword ptr [ESP + 0x14]      ; 0049c77a
        ;   Label: LAB_0049c77a
    ADD EDX,dword ptr [ESP + 0x1c]      ; 0049c77e
    DEC EDX                             ; 0049c782
    MOV EAX,EDX                         ; 0049c783
    SAR EDX,0x1f                        ; 0049c785
    SUB EAX,EDX                         ; 0049c788
    SAR EAX,0x1                         ; 0049c78a
    MOV ECX,dword ptr [ESP + 0x18]      ; 0049c78c
    MOV EDX,dword ptr [ESP + 0x20]      ; 0049c790
    LEA EBX,[EAX + ESI*0x1]             ; 0049c794
    SUB EDX,ECX                         ; 0049c797
    MOV EBP,0x3                         ; 0049c799
    MOV EAX,EDX                         ; 0049c79e
    SAR EDX,0x1f                        ; 0049c7a0
    IDIV EBP                            ; 0049c7a3
    LEA EBP,[EBX + EAX*0x1]             ; 0049c7a5
    TEST EDI,EDI                        ; 0049c7a8
    JNZ 0x0049c8b4                      ; 0049c7aa
        ;   XREF to: 0049c8b4 (CONDITIONAL_JUMP)  ; LAB_0049c8b4
    LEA EDX,[ECX + EAX*0x1 + 0x1]       ; 0049c7b0
    ADD ESI,EDX                         ; 0049c7b4
    TEST EAX,EAX                        ; 0049c7b6
    JLE 0x0049c7db                      ; 0049c7b8
        ;   XREF to: 0049c7db (CONDITIONAL_JUMP)  ; LAB_0049c7db
    MOV EDI,EBX                         ; 0049c7ba
    CMP dword ptr [0x01c3f544],0x0      ; 0049c7bc | DAT_01c3f544
        ;   Label: LAB_0049c7bc
    JNZ 0x0049c899                      ; 0049c7c3
        ;   XREF to: 0049c899 (CONDITIONAL_JUMP)  ; LAB_0049c899
    PUSH EBX                            ; 0049c7c9
    PUSH ESI                            ; 0049c7ca
    PUSH EDI                            ; 0049c7cb
    CALL FUN_00402f30                   ; 0049c7cc
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00402f30()
    ADD ESP,0xc                         ; 0049c7d1
    DEC EDI                             ; 0049c7d4
    INC EBX                             ; 0049c7d5
    INC ESI                             ; 0049c7d6
    CMP EBX,EBP                         ; 0049c7d7
    JL 0x0049c7bc                       ; 0049c7d9
        ;   XREF to: 0049c7bc (CONDITIONAL_JUMP)  ; LAB_0049c7bc
    POP EBP                             ; 0049c7db
        ;   Label: LAB_0049c7db
    POP EDI                             ; 0049c7dc
    POP ESI                             ; 0049c7dd
    POP EBX                             ; 0049c7de
    RET                                 ; 0049c7df
    AND EBX,0xff                        ; 0049c7e0
        ;   Label: LAB_0049c7e0
    MOV EAX,EBX                         ; 0049c7e6
    SHL EBX,0x2                         ; 0049c7e8
    SUB EBX,EAX                         ; 0049c7eb
    XOR EAX,EAX                         ; 0049c7ed
    MOV AL,byte ptr [EBX + 0x1c4e9f9]   ; 0049c7ef | DAT_01c4e9f9
    MOV EDX,EAX                         ; 0049c7f5
    XOR EAX,EAX                         ; 0049c7f7
    MOV AL,byte ptr [EBX + 0x1c4e9f8]   ; 0049c7f9 | DAT_01c4e9f8
    SHL EDX,0x8                         ; 0049c7ff
    SHL EAX,0x10                        ; 0049c802
    OR EDX,EAX                          ; 0049c805
    XOR EAX,EAX                         ; 0049c807
    MOV AL,byte ptr [EBX + 0x1c4e9fa]   ; 0049c809 | DAT_01c4e9fa
    OR EAX,EDX                          ; 0049c80f
    PUSH EAX                            ; 0049c811
    CALL FUN_00517d50                   ; 0049c812
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00517d50()
    ADD ESP,0x4                         ; 0049c817
    JMP 0x0049c772                      ; 0049c81a
        ;   XREF to: 0049c772 (UNCONDITIONAL_JUMP)  ; LAB_0049c772
    CMP EDI,0x1                         ; 0049c81f
        ;   Label: LAB_0049c81f
    JZ 0x0049c77a                       ; 0049c822
        ;   XREF to: 0049c77a (CONDITIONAL_JUMP)  ; LAB_0049c77a
    MOV EDX,dword ptr [ESP + 0x18]      ; 0049c828
    ADD EDX,dword ptr [ESP + 0x20]      ; 0049c82c
    DEC EDX                             ; 0049c830
    MOV EAX,EDX                         ; 0049c831
    SAR EDX,0x1f                        ; 0049c833
    SUB EAX,EDX                         ; 0049c836
    SAR EAX,0x1                         ; 0049c838
    MOV EBP,dword ptr [ESP + 0x14]      ; 0049c83a
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0049c83e
    LEA EBX,[EAX + ESI*0x1]             ; 0049c842
    SUB EDX,EBP                         ; 0049c845
    MOV EBP,0x3                         ; 0049c847
    MOV EAX,EDX                         ; 0049c84c
    SAR EDX,0x1f                        ; 0049c84e
    IDIV EBP                            ; 0049c851
    LEA EDX,[EBX + EAX*0x1]             ; 0049c853
    CMP EDI,0x2                         ; 0049c856
    JNZ 0x0049c91e                      ; 0049c859
        ;   XREF to: 0049c91e (CONDITIONAL_JUMP)  ; LAB_0049c91e
    MOV EDI,dword ptr [ESP + 0x14]      ; 0049c85f
    ADD EDI,EAX                         ; 0049c863
    INC EDI                             ; 0049c865
    ADD EDI,ESI                         ; 0049c866
    TEST EAX,EAX                        ; 0049c868
    JLE 0x0049c7db                      ; 0049c86a
        ;   XREF to: 0049c7db (CONDITIONAL_JUMP)  ; LAB_0049c7db
    MOV ESI,EBX                         ; 0049c870
    MOV EBP,EDX                         ; 0049c872
    CMP dword ptr [0x01c3f544],0x0      ; 0049c874 | DAT_01c3f544
        ;   Label: LAB_0049c874
    JNZ 0x0049c903                      ; 0049c87b
        ;   XREF to: 0049c903 (CONDITIONAL_JUMP)  ; LAB_0049c903
    PUSH EBX                            ; 0049c881
    PUSH ESI                            ; 0049c882
    PUSH EDI                            ; 0049c883
    CALL FUN_00403040                   ; 0049c884
        ;   XREF to: 00403040 (UNCONDITIONAL_CALL)  ; undefined FUN_00403040()
    ADD ESP,0xc                         ; 0049c889
    INC EDI                             ; 0049c88c
    INC EBX                             ; 0049c88d
    DEC ESI                             ; 0049c88e
    CMP EBX,EBP                         ; 0049c88f
    JGE 0x0049c7db                      ; 0049c891
        ;   XREF to: 0049c7db (CONDITIONAL_JUMP)  ; LAB_0049c7db
    JMP 0x0049c874                      ; 0049c897
        ;   XREF to: 0049c874 (UNCONDITIONAL_JUMP)  ; LAB_0049c874
    PUSH EBX                            ; 0049c899
        ;   Label: LAB_0049c899
    PUSH ESI                            ; 0049c89a
    PUSH EDI                            ; 0049c89b
    CALL FUN_005182e0                   ; 0049c89c
        ;   XREF to: 005182e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005182e0()
    ADD ESP,0xc                         ; 0049c8a1
    DEC EDI                             ; 0049c8a4
    INC EBX                             ; 0049c8a5
    INC ESI                             ; 0049c8a6
    CMP EBX,EBP                         ; 0049c8a7
    JL 0x0049c7bc                       ; 0049c8a9
        ;   XREF to: 0049c7bc (CONDITIONAL_JUMP)  ; LAB_0049c7bc
    POP EBP                             ; 0049c8af
    POP EDI                             ; 0049c8b0
    POP ESI                             ; 0049c8b1
    POP EBX                             ; 0049c8b2
    RET                                 ; 0049c8b3
    MOV EDX,dword ptr [ESP + 0x20]      ; 0049c8b4
        ;   Label: LAB_0049c8b4
    SUB EDX,EAX                         ; 0049c8b8
    SUB EDX,0x2                         ; 0049c8ba
    LEA EDI,[EDX + ESI*0x1]             ; 0049c8bd
    TEST EAX,EAX                        ; 0049c8c0
    JLE 0x0049c7db                      ; 0049c8c2
        ;   XREF to: 0049c7db (CONDITIONAL_JUMP)  ; LAB_0049c7db
    MOV ESI,EBX                         ; 0049c8c8
    CMP dword ptr [0x01c3f544],0x0      ; 0049c8ca | DAT_01c3f544
        ;   Label: LAB_0049c8ca
    JNZ 0x0049c8eb                      ; 0049c8d1
        ;   XREF to: 0049c8eb (CONDITIONAL_JUMP)  ; LAB_0049c8eb
    PUSH EBX                            ; 0049c8d3
    PUSH EDI                            ; 0049c8d4
    PUSH ESI                            ; 0049c8d5
    CALL FUN_00402f30                   ; 0049c8d6
        ;   XREF to: 00402f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00402f30()
    ADD ESP,0xc                         ; 0049c8db
    DEC ESI                             ; 0049c8de
    INC EBX                             ; 0049c8df
    DEC EDI                             ; 0049c8e0
    CMP EBX,EBP                         ; 0049c8e1
    JGE 0x0049c7db                      ; 0049c8e3
        ;   XREF to: 0049c7db (CONDITIONAL_JUMP)  ; LAB_0049c7db
    JMP 0x0049c8ca                      ; 0049c8e9
        ;   XREF to: 0049c8ca (UNCONDITIONAL_JUMP)  ; LAB_0049c8ca
    PUSH EBX                            ; 0049c8eb
        ;   Label: LAB_0049c8eb
    PUSH EDI                            ; 0049c8ec
    PUSH ESI                            ; 0049c8ed
    CALL FUN_005182e0                   ; 0049c8ee
        ;   XREF to: 005182e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005182e0()
    ADD ESP,0xc                         ; 0049c8f3
    DEC ESI                             ; 0049c8f6
    INC EBX                             ; 0049c8f7
    DEC EDI                             ; 0049c8f8
    CMP EBX,EBP                         ; 0049c8f9
    JGE 0x0049c7db                      ; 0049c8fb
        ;   XREF to: 0049c7db (CONDITIONAL_JUMP)  ; LAB_0049c7db
    JMP 0x0049c8ca                      ; 0049c901
        ;   XREF to: 0049c8ca (UNCONDITIONAL_JUMP)  ; LAB_0049c8ca
    PUSH EBX                            ; 0049c903
        ;   Label: LAB_0049c903
    PUSH ESI                            ; 0049c904
    PUSH EDI                            ; 0049c905
    CALL FUN_00518300                   ; 0049c906
        ;   XREF to: 00518300 (UNCONDITIONAL_CALL)  ; undefined FUN_00518300()
    ADD ESP,0xc                         ; 0049c90b
    INC EDI                             ; 0049c90e
    INC EBX                             ; 0049c90f
    DEC ESI                             ; 0049c910
    CMP EBX,EBP                         ; 0049c911
    JGE 0x0049c7db                      ; 0049c913
        ;   XREF to: 0049c7db (CONDITIONAL_JUMP)  ; LAB_0049c7db
    JMP 0x0049c874                      ; 0049c919
        ;   XREF to: 0049c874 (UNCONDITIONAL_JUMP)  ; LAB_0049c874
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0049c91e
        ;   Label: LAB_0049c91e
    SUB EDI,EAX                         ; 0049c922
    SUB EDI,0x2                         ; 0049c924
    ADD EDI,ESI                         ; 0049c927
    TEST EAX,EAX                        ; 0049c929
    JLE 0x0049c7db                      ; 0049c92b
        ;   XREF to: 0049c7db (CONDITIONAL_JUMP)  ; LAB_0049c7db
    MOV ESI,EBX                         ; 0049c931
    MOV EBP,EDX                         ; 0049c933
    CMP dword ptr [0x01c3f544],0x0      ; 0049c935 | DAT_01c3f544
        ;   Label: LAB_0049c935
    JNZ 0x0049c956                      ; 0049c93c
        ;   XREF to: 0049c956 (CONDITIONAL_JUMP)  ; LAB_0049c956
    PUSH EBX                            ; 0049c93e
    PUSH ESI                            ; 0049c93f
    PUSH EDI                            ; 0049c940
    CALL FUN_00403040                   ; 0049c941
        ;   XREF to: 00403040 (UNCONDITIONAL_CALL)  ; undefined FUN_00403040()
    ADD ESP,0xc                         ; 0049c946
    DEC EDI                             ; 0049c949
    INC EBX                             ; 0049c94a
    DEC ESI                             ; 0049c94b
    CMP EBX,EBP                         ; 0049c94c
    JGE 0x0049c7db                      ; 0049c94e
        ;   XREF to: 0049c7db (CONDITIONAL_JUMP)  ; LAB_0049c7db
    JMP 0x0049c935                      ; 0049c954
        ;   XREF to: 0049c935 (UNCONDITIONAL_JUMP)  ; LAB_0049c935
    PUSH EBX                            ; 0049c956
        ;   Label: LAB_0049c956
    PUSH ESI                            ; 0049c957
    PUSH EDI                            ; 0049c958
    CALL FUN_00518300                   ; 0049c959
        ;   XREF to: 00518300 (UNCONDITIONAL_CALL)  ; undefined FUN_00518300()
    ADD ESP,0xc                         ; 0049c95e
    DEC EDI                             ; 0049c961
    INC EBX                             ; 0049c962
    DEC ESI                             ; 0049c963
    CMP EBX,EBP                         ; 0049c964
    JGE 0x0049c7db                      ; 0049c966
        ;   XREF to: 0049c7db (CONDITIONAL_JUMP)  ; LAB_0049c7db
    JMP 0x0049c935                      ; 0049c96c
        ;   XREF to: 0049c935 (UNCONDITIONAL_JUMP)  ; LAB_0049c935

