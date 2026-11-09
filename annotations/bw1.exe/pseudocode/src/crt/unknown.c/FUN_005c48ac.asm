; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c48ac(void)
;
; Parameters:
; undefined2       Stack[0x0]:2   local_res0
; Local Variables:
; undefined2       Stack[-0x4]:2  local_4
;
; XREF[1]:
;   crt_unknown.c_FUN_005c4558 at 005c4865
;
; Called Functions:
;   crt_unknown.c_FUN_005c49f7
;   crt_unknown.c_FUN_005c4c08
;
; *****************************************************************************

section .text

    POP EDX                             ; 005c48ac
        ;   Label: crt_unknown.c_FUN_005c48ac
    POP ECX                             ; 005c48ad
    MOV AL,0x0                          ; 005c48ae
    MOV byte ptr [EBX],AL               ; 005c48b0
    MOV EAX,dword ptr [EBP + -0x24]     ; 005c48b2
    MOV dword ptr [EBP + -0x1c],EBX     ; 005c48b5
    ADD EAX,0x8                         ; 005c48b8
    XOR EDI,EDI                         ; 005c48bb
    MOV dword ptr [EBP + -0x24],EAX     ; 005c48bd
    JMP 0x005c47cf                      ; 005c48c0
        ;   XREF to: 005c47cf (UNCONDITIONAL_JUMP)  ; LAB_005c47cf
    MOV EDX,dword ptr [EBP + -0x20]     ; 005c48c5
        ;   Label: LAB_005c48c5
    MOV EDI,dword ptr [EBP + -0x24]     ; 005c48c8
    ADD EDX,0x7                         ; 005c48cb
    LEA EAX,[EBP + 0xffffff6d]          ; 005c48ce
    MOV dword ptr [EBP + -0x20],EDX     ; 005c48d4
        ;   Label: LAB_005c48d4
    CMP byte ptr [EAX],0x30             ; 005c48d7
    JNZ 0x005c48e4                      ; 005c48da
        ;   XREF to: 005c48e4 (CONDITIONAL_JUMP)  ; LAB_005c48e4
    MOV EDX,dword ptr [EBP + -0x20]     ; 005c48dc
    DEC EDI                             ; 005c48df
    DEC EDX                             ; 005c48e0
    INC EAX                             ; 005c48e1
    JMP 0x005c48d4                      ; 005c48e2
        ;   XREF to: 005c48d4 (UNCONDITIONAL_JUMP)  ; LAB_005c48d4
    MOV BL,byte ptr [ESI + 0x8]         ; 005c48e4
        ;   Label: LAB_005c48e4
    MOV EDX,dword ptr [ESI]             ; 005c48e7
    TEST BL,0x2                         ; 005c48e9
    JZ 0x005c4900                       ; 005c48ec
        ;   XREF to: 005c4900 (CONDITIONAL_JUMP)  ; LAB_005c4900
    MOV ECX,dword ptr [EBP + -0x20]     ; 005c48ee
    MOV EBX,dword ptr [ESI + 0x4]       ; 005c48f1
    ADD ECX,EBX                         ; 005c48f4
    MOV dword ptr [EBP + -0x20],ECX     ; 005c48f6
    LEA EBX,[ECX + 0x1]                 ; 005c48f9
    ADD EDX,EBX                         ; 005c48fc
    JMP 0x005c491d                      ; 005c48fe
        ;   XREF to: 005c491d (UNCONDITIONAL_JUMP)  ; LAB_005c491d
    TEST BL,0x1                         ; 005c4900
        ;   Label: LAB_005c4900
    JZ 0x005c491d                       ; 005c4903
        ;   XREF to: 005c491d (CONDITIONAL_JUMP)  ; LAB_005c491d
    MOV EBX,dword ptr [ESI + 0x4]       ; 005c4905
    TEST EBX,EBX                        ; 005c4908
    JLE 0x005c490f                      ; 005c490a
        ;   XREF to: 005c490f (CONDITIONAL_JUMP)  ; LAB_005c490f
    INC EDX                             ; 005c490c
    JMP 0x005c4911                      ; 005c490d
        ;   XREF to: 005c4911 (UNCONDITIONAL_JUMP)  ; LAB_005c4911
    ADD EDX,EBX                         ; 005c490f
        ;   Label: LAB_005c490f
    MOV EBX,dword ptr [EBP + -0x20]     ; 005c4911
        ;   Label: LAB_005c4911
    MOV ECX,dword ptr [ESI + 0x4]       ; 005c4914
    INC EBX                             ; 005c4917
    SUB EBX,ECX                         ; 005c4918
    MOV dword ptr [EBP + -0x20],EBX     ; 005c491a
    TEST EDX,EDX                        ; 005c491d
        ;   Label: LAB_005c491d
    JL 0x005c4989                       ; 005c491f
        ;   XREF to: 005c4989 (CONDITIONAL_JUMP)  ; LAB_005c4989
    CMP EDX,EDI                         ; 005c4925
    JLE 0x005c492b                      ; 005c4927
        ;   XREF to: 005c492b (CONDITIONAL_JUMP)  ; LAB_005c492b
    MOV EDX,EDI                         ; 005c4929
    MOV CL,byte ptr [ESI + 0x8]         ; 005c492b
        ;   Label: LAB_005c492b
    MOV EBX,0xf                         ; 005c492e
    TEST CL,0x20                        ; 005c4933
    JZ 0x005c493d                       ; 005c4936
        ;   XREF to: 005c493d (CONDITIONAL_JUMP)  ; LAB_005c493d
    MOV EBX,0x14                        ; 005c4938
    TEST byte ptr [ESI + 0x8],0x40      ; 005c493d
        ;   Label: LAB_005c493d
    JZ 0x005c4945                       ; 005c4941
        ;   XREF to: 005c4945 (CONDITIONAL_JUMP)  ; LAB_005c4945
    ADD EBX,EBX                         ; 005c4943
    CMP EDX,EBX                         ; 005c4945
        ;   Label: LAB_005c4945
    JLE 0x005c494c                      ; 005c4947
        ;   XREF to: 005c494c (CONDITIONAL_JUMP)  ; LAB_005c494c
    LEA EDX,[EBX + 0x1]                 ; 005c4949
    MOV byte ptr [EBP + -0x10],0x30     ; 005c494c
        ;   Label: LAB_005c494c
    CMP EDI,EDX                         ; 005c4950
    JLE 0x005c495e                      ; 005c4952
        ;   XREF to: 005c495e (CONDITIONAL_JUMP)  ; LAB_005c495e
    CMP byte ptr [EDX + EAX*0x1],0x35   ; 005c4954
    JC 0x005c495e                       ; 005c4958
        ;   XREF to: 005c495e (CONDITIONAL_JUMP)  ; LAB_005c495e
    MOV byte ptr [EBP + -0x10],0x39     ; 005c495a
    MOV CH,byte ptr [EBP + -0x10]       ; 005c495e
        ;   Label: LAB_005c495e
    MOV EBX,EDX                         ; 005c4961
    LEA EDI,[EDX + EAX*0x1]             ; 005c4963
    DEC EDI                             ; 005c4966
        ;   Label: LAB_005c4966
    MOV CL,byte ptr [EDI]               ; 005c4967
    DEC EBX                             ; 005c4969
    CMP CL,CH                           ; 005c496a
    JNZ 0x005c4971                      ; 005c496c
        ;   XREF to: 005c4971 (CONDITIONAL_JUMP)  ; LAB_005c4971
    DEC EDX                             ; 005c496e
    JMP 0x005c4966                      ; 005c496f
        ;   XREF to: 005c4966 (UNCONDITIONAL_JUMP)  ; LAB_005c4966
    CMP CH,0x39                         ; 005c4971
        ;   Label: LAB_005c4971
    JNZ 0x005c497c                      ; 005c4974
        ;   XREF to: 005c497c (CONDITIONAL_JUMP)  ; LAB_005c497c
    MOV CH,CL                           ; 005c4976
    INC CH                              ; 005c4978
    MOV byte ptr [EDI],CH               ; 005c497a
    TEST EBX,EBX                        ; 005c497c
        ;   Label: LAB_005c497c
    JGE 0x005c4989                      ; 005c497e
        ;   XREF to: 005c4989 (CONDITIONAL_JUMP)  ; LAB_005c4989
    MOV EBX,dword ptr [EBP + -0x20]     ; 005c4980
    DEC EAX                             ; 005c4983
    INC EBX                             ; 005c4984
    INC EDX                             ; 005c4985
    MOV dword ptr [EBP + -0x20],EBX     ; 005c4986
    TEST EDX,EDX                        ; 005c4989
        ;   Label: LAB_005c4989
    JG 0x005c49a8                       ; 005c498b
        ;   XREF to: 005c49a8 (CONDITIONAL_JUMP)  ; LAB_005c49a8
    MOV EDX,0x1                         ; 005c498d
    XOR ECX,ECX                         ; 005c4992
    MOV AL,0x30                         ; 005c4994
    MOV dword ptr [EBP + -0x20],ECX     ; 005c4996
    MOV byte ptr [EBP + 0xffffff6c],AL  ; 005c4999
    LEA EAX,[EBP + 0xffffff6c]          ; 005c499f
    MOV dword ptr [ESI + 0x14],ECX      ; 005c49a5
    MOV BL,byte ptr [ESI + 0x8]         ; 005c49a8
        ;   Label: LAB_005c49a8
    TEST BL,0x2                         ; 005c49ab
    JNZ 0x005c49c7                      ; 005c49ae
        ;   XREF to: 005c49c7 (CONDITIONAL_JUMP)  ; LAB_005c49c7
    TEST BL,0x4                         ; 005c49b0
    JZ 0x005c49d9                       ; 005c49b3
        ;   XREF to: 005c49d9 (CONDITIONAL_JUMP)  ; LAB_005c49d9
    MOV EDI,dword ptr [EBP + -0x20]     ; 005c49b5
    CMP EDI,-0x4                        ; 005c49b8
    JL 0x005c49c1                       ; 005c49bb
        ;   XREF to: 005c49c1 (CONDITIONAL_JUMP)  ; LAB_005c49c1
    CMP EDI,dword ptr [ESI]             ; 005c49bd
    JL 0x005c49c7                       ; 005c49bf
        ;   XREF to: 005c49c7 (CONDITIONAL_JUMP)  ; LAB_005c49c7
    TEST byte ptr [ESI + 0x8],0x8       ; 005c49c1
        ;   Label: LAB_005c49c1
    JZ 0x005c49d9                       ; 005c49c5
        ;   XREF to: 005c49d9 (CONDITIONAL_JUMP)  ; LAB_005c49d9
    MOV ECX,dword ptr [EBP + 0x10]      ; 005c49c7
        ;   Label: LAB_005c49c7
    PUSH ECX                            ; 005c49ca
    MOV EDI,dword ptr [EBP + -0x20]     ; 005c49cb
    PUSH EDI                            ; 005c49ce
    PUSH EDX                            ; 005c49cf
    PUSH EAX                            ; 005c49d0
    PUSH ESI                            ; 005c49d1
    CALL crt_unknown.c_FUN_005c49f7     ; 005c49d2
        ;   XREF to: 005c49f7 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c49f7()
    JMP 0x005c49e9                      ; 005c49d7
        ;   XREF to: 005c49e9 (UNCONDITIONAL_JUMP)  ; LAB_005c49e9
    MOV EDI,dword ptr [EBP + 0x10]      ; 005c49d9
        ;   Label: LAB_005c49d9
    PUSH EDI                            ; 005c49dc
    MOV EBX,dword ptr [EBP + -0x20]     ; 005c49dd
    PUSH EBX                            ; 005c49e0
    PUSH EDX                            ; 005c49e1
    PUSH EAX                            ; 005c49e2
    PUSH ESI                            ; 005c49e3
    CALL crt_unknown.c_FUN_005c4c08     ; 005c49e4
        ;   XREF to: 005c4c08 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c4c08()
    ADD ESP,0x14                        ; 005c49e9
        ;   Label: LAB_005c49e9
    XOR EAX,EAX                         ; 005c49ec
        ;   Label: LAB_005c49ec
    MOV AX,word ptr [EBP + -0x14]       ; 005c49ee
    JMP 0x005c44e6                      ; 005c49f2
        ;   XREF to: 005c44e6 (UNCONDITIONAL_JUMP)  ; LAB_005c44e6

