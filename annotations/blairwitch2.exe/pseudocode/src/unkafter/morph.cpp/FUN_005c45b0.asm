; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_morph_cpp_FUN_005c45b0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061f281
;   undefined4 DAT_026807e0
;   undefined4 DAT_026807e4
;   undefined4 DAT_026810a0
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   crt_unknown.c_FUN_005b86a0
;   unkafter_2d.cpp_FUN_005c59e0
;   unkafter_morph.cpp_FUN_005c45a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c45b0
        ;   Label: unkafter_morph.cpp_FUN_005c45b0
    PUSH ESI                            ; 005c45b1
    PUSH EDI                            ; 005c45b2
    PUSH EBP                            ; 005c45b3
    MOV EDI,dword ptr [0x026807e4]      ; 005c45b4 | DAT_026807e4
    TEST EDI,EDI                        ; 005c45ba
    JNZ 0x005c468e                      ; 005c45bc
        ;   XREF to: 005c468e (CONDITIONAL_JUMP)  ; LAB_005c468e
    MOV EBP,dword ptr [0x0061f281]      ; 005c45c2 | DAT_0061f281
    XOR ESI,ESI                         ; 005c45c8
    MOV DL,byte ptr [EBP]               ; 005c45ca
    MOV EAX,EBP                         ; 005c45cd
    TEST DL,DL                          ; 005c45cf
    JZ 0x005c45e9                       ; 005c45d1
        ;   XREF to: 005c45e9 (CONDITIONAL_JUMP)  ; LAB_005c45e9
    MOV DH,byte ptr [EAX]               ; 005c45d3
        ;   Label: LAB_005c45d3
    LEA EBX,[EAX + 0x1]                 ; 005c45d5
    TEST DH,DH                          ; 005c45d8
    JZ 0x005c45e0                       ; 005c45da
        ;   XREF to: 005c45e0 (CONDITIONAL_JUMP)  ; LAB_005c45e0
    MOV EAX,EBX                         ; 005c45dc
    JMP 0x005c45d3                      ; 005c45de
        ;   XREF to: 005c45d3 (UNCONDITIONAL_JUMP)  ; LAB_005c45d3
    INC ESI                             ; 005c45e0
        ;   Label: LAB_005c45e0
    MOV DH,byte ptr [EBX]               ; 005c45e1
    MOV EAX,EBX                         ; 005c45e3
    TEST DH,DH                          ; 005c45e5
    JNZ 0x005c45d3                      ; 005c45e7
        ;   XREF to: 005c45d3 (CONDITIONAL_JUMP)  ; LAB_005c45d3
    MOV dword ptr [0x026807e4],EDI      ; 005c45e9 | DAT_026807e4
        ;   Label: LAB_005c45e9
    SUB EAX,EBP                         ; 005c45ef
    JNZ 0x005c45f8                      ; 005c45f1
        ;   XREF to: 005c45f8 (CONDITIONAL_JUMP)  ; LAB_005c45f8
    MOV EAX,0x1                         ; 005c45f3
    PUSH EAX                            ; 005c45f8
        ;   Label: LAB_005c45f8
    CALL unkafter_morph.cpp_FUN_005c45a0 ; 005c45f9
        ;   XREF to: 005c45a0 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c45a0()
    MOV EBX,EAX                         ; 005c45fe
    ADD ESP,0x4                         ; 005c4600
    TEST EAX,EAX                        ; 005c4603
    JZ 0x005c4689                       ; 005c4605
        ;   XREF to: 005c4689 (CONDITIONAL_JUMP)  ; LAB_005c4689
    MOV [0x026810a0],EAX                ; 005c460b | DAT_026810a0
    LEA EAX,[ESI*0x4 + 0x0]             ; 005c4610
    ADD EAX,0x4                         ; 005c4617
    ADD ESI,EAX                         ; 005c461a
    PUSH ESI                            ; 005c461c
    CALL unkafter_morph.cpp_FUN_005c45a0 ; 005c461d
        ;   XREF to: 005c45a0 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c45a0()
    ADD ESP,0x4                         ; 005c4622
    TEST EAX,EAX                        ; 005c4625
    JZ 0x005c4680                       ; 005c4627
        ;   XREF to: 005c4680 (CONDITIONAL_JUMP)  ; LAB_005c4680
    MOV EDI,EAX                         ; 005c4629
    MOV DL,byte ptr [EBP]               ; 005c462b
    XOR ESI,ESI                         ; 005c462e
    XOR ECX,ECX                         ; 005c4630
    MOV EAX,EBP                         ; 005c4632
    TEST DL,DL                          ; 005c4634
    JZ 0x005c4652                       ; 005c4636
        ;   XREF to: 005c4652 (CONDITIONAL_JUMP)  ; LAB_005c4652
    MOV EDX,EDI                         ; 005c4638
        ;   Label: LAB_005c4638
    MOV dword ptr [ECX + EDX*0x1],EBX   ; 005c463a
    INC EBX                             ; 005c463d
        ;   Label: LAB_005c463d
    MOV DL,byte ptr [EAX]               ; 005c463e
    INC EAX                             ; 005c4640
    MOV byte ptr [EBX + -0x1],DL        ; 005c4641
    TEST DL,DL                          ; 005c4644
    JNZ 0x005c463d                      ; 005c4646
        ;   XREF to: 005c463d (CONDITIONAL_JUMP)  ; LAB_005c463d
    ADD ECX,0x4                         ; 005c4648
    MOV DL,byte ptr [EAX]               ; 005c464b
    INC ESI                             ; 005c464d
    TEST DL,DL                          ; 005c464e
    JNZ 0x005c4638                      ; 005c4650
        ;   XREF to: 005c4638 (CONDITIONAL_JUMP)  ; LAB_005c4638
    MOV EAX,EDI                         ; 005c4652
        ;   Label: LAB_005c4652
    PUSH ESI                            ; 005c4654
    MOV dword ptr [ECX + EAX*0x1],0x0   ; 005c4655
    ADD ECX,0x4                         ; 005c465c
    PUSH 0x0                            ; 005c465f
    LEA EAX,[EDI + ECX*0x1]             ; 005c4661
    PUSH EAX                            ; 005c4664
    MOV [0x026807e0],EAX                ; 005c4665 | DAT_026807e0
    MOV dword ptr [0x026807e4],EDI      ; 005c466a | DAT_026807e4
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005c4670
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV EDI,dword ptr [0x026807e4]      ; 005c4675 | DAT_026807e4
    ADD ESP,0xc                         ; 005c467b
    JMP 0x005c4689                      ; 005c467e
        ;   XREF to: 005c4689 (UNCONDITIONAL_JUMP)  ; LAB_005c4689
    PUSH EBX                            ; 005c4680
        ;   Label: LAB_005c4680
    CALL crt_unknown.c_FUN_005b86a0     ; 005c4681
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 005c4686
    CALL unkafter_2d.cpp_FUN_005c59e0   ; 005c4689
        ;   XREF to: 005c59e0 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005c59e0()
        ;   Label: LAB_005c4689
    MOV EDI,dword ptr [0x026807e4]      ; 005c468e | DAT_026807e4
        ;   Label: LAB_005c468e
    POP EBP                             ; 005c4694
    POP EDI                             ; 005c4695
    POP ESI                             ; 005c4696
    POP EBX                             ; 005c4697
    RET                                 ; 005c4698

