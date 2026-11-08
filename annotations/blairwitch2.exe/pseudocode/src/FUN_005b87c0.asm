; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005b87c0(char *param_1,uint param_2,int param_3,int *param_4)
;
;
; XREF[21]:
;   FUN_0040d5a0 at 0040d626
;   FUN_0043e930 at 0043e9ef
;   FUN_004447b0 at 004447c8
;   FUN_004467a0 at 004467b5
;   FUN_004478d0 at 004479f3
;   FUN_00447c50 at 00447d2f
;   FUN_0044de20 at 0044de39
;   FUN_00461760 at 00461775
;   FUN_004728d0 at 004728fa
;   FUN_004bbf70 at 004bc16a
;   ... and 11 more
;
; Referenced Globals:
;   void* PTR_FUN_0061f2a8 = 005bce04
;   void* PTR_FUN_0061f2ac = 005bce04
;
; Called Functions:
;   FUN_005b8280
;   FUN_005bce04
;   FUN_005be180
;   FUN_005be1d0
;   FUN_005be300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b87c0
        ;   Label: FUN_005b87c0
    PUSH ESI                            ; 005b87c1
    PUSH EDI                            ; 005b87c2
    PUSH EBP                            ; 005b87c3
    SUB ESP,0x4                         ; 005b87c4
    MOV ESI,dword ptr [ESP + 0x20]      ; 005b87c7
    MOV EBX,dword ptr [ESP + 0x24]      ; 005b87cb
    MOV EDX,dword ptr [EBX + 0x10]      ; 005b87cf
    PUSH EDX                            ; 005b87d2
    CALL dword ptr [0x0061f2a8]         ; 005b87d3 | PTR_FUN_0061f2a8
    MOV AH,byte ptr [EBX + 0xc]         ; 005b87d9
    ADD ESP,0x4                         ; 005b87dc
    TEST AH,0x1                         ; 005b87df
    JNZ 0x005b8806                      ; 005b87e2
        ;   XREF to: 005b8806 (CONDITIONAL_JUMP)  ; LAB_005b8806
    PUSH 0x4                            ; 005b87e4
    CALL FUN_005be180                   ; 005b87e6
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; undefined FUN_005be180()
    OR byte ptr [EBX + 0xc],0x20        ; 005b87eb
    ADD ESP,0x4                         ; 005b87ef
    MOV EDX,dword ptr [EBX + 0x10]      ; 005b87f2
    PUSH EDX                            ; 005b87f5
    CALL dword ptr [0x0061f2ac]         ; 005b87f6 | PTR_FUN_0061f2ac
    ADD ESP,0x4                         ; 005b87fc
    XOR EAX,EAX                         ; 005b87ff
    JMP 0x005b89af                      ; 005b8801
        ;   XREF to: 005b89af (UNCONDITIONAL_JUMP)  ; LAB_005b89af
    IMUL ESI,dword ptr [ESP + 0x1c]     ; 005b8806
        ;   Label: LAB_005b8806
    TEST ESI,ESI                        ; 005b880b
    JNZ 0x005b8826                      ; 005b880d
        ;   XREF to: 005b8826 (CONDITIONAL_JUMP)  ; LAB_005b8826
    MOV EAX,dword ptr [EBX + 0x10]      ; 005b880f
    PUSH EAX                            ; 005b8812
    CALL dword ptr [0x0061f2ac]         ; 005b8813 | PTR_FUN_0061f2ac
    ADD ESP,0x4                         ; 005b8819
    MOV EAX,ESI                         ; 005b881c
    ADD ESP,0x4                         ; 005b881e
    POP EBP                             ; 005b8821
    POP EDI                             ; 005b8822
    POP ESI                             ; 005b8823
    POP EBX                             ; 005b8824
    RET                                 ; 005b8825
    MOV EAX,dword ptr [EBX + 0x8]       ; 005b8826
        ;   Label: LAB_005b8826
    CMP dword ptr [EAX + 0x8],0x0       ; 005b8829
    JNZ 0x005b8838                      ; 005b882d
        ;   XREF to: 005b8838 (CONDITIONAL_JUMP)  ; LAB_005b8838
    PUSH EBX                            ; 005b882f
    CALL FUN_005be1d0                   ; 005b8830
        ;   XREF to: 005be1d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005be1d0()
    ADD ESP,0x4                         ; 005b8835
    XOR EBP,EBP                         ; 005b8838
        ;   Label: LAB_005b8838
    MOV DL,byte ptr [EBX + 0xc]         ; 005b883a
    MOV dword ptr [ESP],EBP             ; 005b883d
    TEST DL,0x40                        ; 005b8840
    JZ 0x005b8928                       ; 005b8843
        ;   XREF to: 005b8928 (CONDITIONAL_JUMP)  ; LAB_005b8928
    MOV EBP,ESI                         ; 005b8849
    MOV ECX,dword ptr [EBX + 0x4]       ; 005b884b
        ;   Label: LAB_005b884b
    TEST ECX,ECX                        ; 005b884e
    JZ 0x005b8896                       ; 005b8850
        ;   XREF to: 005b8896 (CONDITIONAL_JUMP)  ; LAB_005b8896
    MOV EDX,ECX                         ; 005b8852
    CMP ECX,EBP                         ; 005b8854
    JBE 0x005b885a                      ; 005b8856
        ;   XREF to: 005b885a (CONDITIONAL_JUMP)  ; LAB_005b885a
    MOV EDX,EBP                         ; 005b8858
    MOV EDI,dword ptr [ESP + 0x18]      ; 005b885a
        ;   Label: LAB_005b885a
    MOV ECX,EDX                         ; 005b885e
    MOV ESI,dword ptr [EBX]             ; 005b8860
    PUSH ES                             ; 005b8862
    MOV AX,DS                           ; 005b8863
    MOV ES,AX                           ; 005b8865
    PUSH EDI                            ; 005b8867
    MOV EAX,ECX                         ; 005b8868
    SHR ECX,0x2                         ; 005b886a
    MOVSD.REP ES:EDI,ESI                ; 005b886d
    MOV CL,AL                           ; 005b886f
    AND CL,0x3                          ; 005b8871
    MOVSB.REP ES:EDI,ESI                ; 005b8874
    POP EDI                             ; 005b8876
    POP ES                              ; 005b8877
    SUB EBP,EDX                         ; 005b8878
    MOV ECX,dword ptr [ESP]             ; 005b887a
    MOV ESI,dword ptr [EBX]             ; 005b887d
    ADD EDI,EDX                         ; 005b887f
    MOV EAX,dword ptr [EBX + 0x4]       ; 005b8881
    MOV dword ptr [ESP + 0x18],EDI      ; 005b8884
    ADD ESI,EDX                         ; 005b8888
    SUB EAX,EDX                         ; 005b888a
    ADD ECX,EDX                         ; 005b888c
    MOV dword ptr [EBX],ESI             ; 005b888e
    MOV dword ptr [ESP],ECX             ; 005b8890
    MOV dword ptr [EBX + 0x4],EAX       ; 005b8893
    TEST EBP,EBP                        ; 005b8896
        ;   Label: LAB_005b8896
    JZ 0x005b8999                       ; 005b8898
        ;   XREF to: 005b8999 (CONDITIONAL_JUMP)  ; LAB_005b8999
    CMP EBP,dword ptr [EBX + 0x14]      ; 005b889e
    JNC 0x005b88a9                      ; 005b88a1
        ;   XREF to: 005b88a9 (CONDITIONAL_JUMP)  ; LAB_005b88a9
    TEST byte ptr [EBX + 0xd],0x4       ; 005b88a3
    JZ 0x005b8912                       ; 005b88a7
        ;   XREF to: 005b8912 (CONDITIONAL_JUMP)  ; LAB_005b8912
    MOV EDX,dword ptr [EBX + 0x8]       ; 005b88a9
        ;   Label: LAB_005b88a9
    MOV EDX,dword ptr [EDX + 0x8]       ; 005b88ac
    MOV dword ptr [EBX],EDX             ; 005b88af
    MOV EAX,EBP                         ; 005b88b1
    MOV DL,byte ptr [EBX + 0xd]         ; 005b88b3
    MOV dword ptr [EBX + 0x4],0x0       ; 005b88b6
    TEST DL,0x4                         ; 005b88bd
    JNZ 0x005b88cf                      ; 005b88c0
        ;   XREF to: 005b88cf (CONDITIONAL_JUMP)  ; LAB_005b88cf
    CMP EBP,0x200                       ; 005b88c2
    JBE 0x005b88cf                      ; 005b88c8
        ;   XREF to: 005b88cf (CONDITIONAL_JUMP)  ; LAB_005b88cf
    XOR AL,AL                           ; 005b88ca
    AND AH,0xfe                         ; 005b88cc
    PUSH EAX                            ; 005b88cf
        ;   Label: LAB_005b88cf
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005b88d0
    PUSH EDI                            ; 005b88d4
    MOV EAX,dword ptr [EBX + 0x10]      ; 005b88d5
    PUSH EAX                            ; 005b88d8
    CALL FUN_005be300                   ; 005b88d9
        ;   XREF to: 005be300 (UNCONDITIONAL_CALL)  ; undefined FUN_005be300()
    ADD ESP,0xc                         ; 005b88de
    CMP EAX,-0x1                        ; 005b88e1
    JNZ 0x005b88ef                      ; 005b88e4
        ;   XREF to: 005b88ef (CONDITIONAL_JUMP)  ; LAB_005b88ef
    OR byte ptr [EBX + 0xc],0x20        ; 005b88e6
    JMP 0x005b8999                      ; 005b88ea
        ;   XREF to: 005b8999 (UNCONDITIONAL_JUMP)  ; LAB_005b8999
    TEST EAX,EAX                        ; 005b88ef
        ;   Label: LAB_005b88ef
    JNZ 0x005b88fc                      ; 005b88f1
        ;   XREF to: 005b88fc (CONDITIONAL_JUMP)  ; LAB_005b88fc
    OR byte ptr [EBX + 0xc],0x10        ; 005b88f3
    JMP 0x005b8999                      ; 005b88f7
        ;   XREF to: 005b8999 (UNCONDITIONAL_JUMP)  ; LAB_005b8999
    MOV ECX,dword ptr [ESP]             ; 005b88fc
        ;   Label: LAB_005b88fc
    LEA EDX,[EDI + EAX*0x1]             ; 005b88ff
    SUB EBP,EAX                         ; 005b8902
    ADD ECX,EAX                         ; 005b8904
    MOV dword ptr [ESP + 0x18],EDX      ; 005b8906
    MOV dword ptr [ESP],ECX             ; 005b890a
    JMP 0x005b884b                      ; 005b890d
        ;   XREF to: 005b884b (UNCONDITIONAL_JUMP)  ; LAB_005b884b
    PUSH EBX                            ; 005b8912
        ;   Label: LAB_005b8912
    CALL FUN_005b8280                   ; 005b8913
        ;   XREF to: 005b8280 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8280()
    ADD ESP,0x4                         ; 005b8918
    TEST EAX,EAX                        ; 005b891b
    JZ 0x005b8999                       ; 005b891d
        ;   XREF to: 005b8999 (CONDITIONAL_JUMP)  ; LAB_005b8999
    JMP 0x005b884b                      ; 005b8923
        ;   XREF to: 005b884b (UNCONDITIONAL_JUMP)  ; LAB_005b884b
    MOV EBP,dword ptr [ESP + 0x18]      ; 005b8928
        ;   Label: LAB_005b8928
    ADD ESI,EBP                         ; 005b892c
    XOR EDI,EDI                         ; 005b892e
    CMP EDI,dword ptr [EBX + 0x4]       ; 005b8930
        ;   Label: LAB_005b8930
    JNZ 0x005b8942                      ; 005b8933
        ;   XREF to: 005b8942 (CONDITIONAL_JUMP)  ; LAB_005b8942
    PUSH EBX                            ; 005b8935
    CALL FUN_005b8280                   ; 005b8936
        ;   XREF to: 005b8280 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8280()
    ADD ESP,0x4                         ; 005b893b
    TEST EAX,EAX                        ; 005b893e
    JZ 0x005b8999                       ; 005b8940
        ;   XREF to: 005b8999 (CONDITIONAL_JUMP)  ; LAB_005b8999
    MOV EDX,dword ptr [EBX + 0x4]       ; 005b8942
        ;   Label: LAB_005b8942
    DEC EDX                             ; 005b8945
    MOV EAX,dword ptr [EBX]             ; 005b8946
    MOV dword ptr [EBX + 0x4],EDX       ; 005b8948
    LEA EDX,[EAX + 0x1]                 ; 005b894b
    MOV dword ptr [EBX],EDX             ; 005b894e
    MOV AL,byte ptr [EAX]               ; 005b8950
    AND EAX,0xff                        ; 005b8952
    CMP EAX,0xd                         ; 005b8957
    JNZ 0x005b897f                      ; 005b895a
        ;   XREF to: 005b897f (CONDITIONAL_JUMP)  ; LAB_005b897f
    CMP EDI,dword ptr [EBX + 0x4]       ; 005b895c
    JNZ 0x005b896e                      ; 005b895f
        ;   XREF to: 005b896e (CONDITIONAL_JUMP)  ; LAB_005b896e
    PUSH EBX                            ; 005b8961
    CALL FUN_005b8280                   ; 005b8962
        ;   XREF to: 005b8280 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8280()
    ADD ESP,0x4                         ; 005b8967
    TEST EAX,EAX                        ; 005b896a
    JZ 0x005b8999                       ; 005b896c
        ;   XREF to: 005b8999 (CONDITIONAL_JUMP)  ; LAB_005b8999
    DEC dword ptr [EBX + 0x4]           ; 005b896e
        ;   Label: LAB_005b896e
    MOV EAX,dword ptr [EBX]             ; 005b8971
    LEA EDX,[EAX + 0x1]                 ; 005b8973
    MOV dword ptr [EBX],EDX             ; 005b8976
    MOV AL,byte ptr [EAX]               ; 005b8978
    AND EAX,0xff                        ; 005b897a
    CMP EAX,0x1a                        ; 005b897f
        ;   Label: LAB_005b897f
    JNZ 0x005b898a                      ; 005b8982
        ;   XREF to: 005b898a (CONDITIONAL_JUMP)  ; LAB_005b898a
    OR byte ptr [EBX + 0xc],0x10        ; 005b8984
    JMP 0x005b8999                      ; 005b8988
        ;   XREF to: 005b8999 (UNCONDITIONAL_JUMP)  ; LAB_005b8999
    MOV EDX,dword ptr [ESP]             ; 005b898a
        ;   Label: LAB_005b898a
    INC EBP                             ; 005b898d
    INC EDX                             ; 005b898e
    MOV byte ptr [EBP + -0x1],AL        ; 005b898f
    MOV dword ptr [ESP],EDX             ; 005b8992
    CMP EBP,ESI                         ; 005b8995
    JNZ 0x005b8930                      ; 005b8997
        ;   XREF to: 005b8930 (CONDITIONAL_JUMP)  ; LAB_005b8930
    MOV ESI,dword ptr [EBX + 0x10]      ; 005b8999
        ;   Label: LAB_005b8999
    PUSH ESI                            ; 005b899c
    CALL dword ptr [0x0061f2ac]         ; 005b899d | PTR_FUN_0061f2ac
    ADD ESP,0x4                         ; 005b89a3
    XOR EDX,EDX                         ; 005b89a6
    MOV EAX,dword ptr [ESP]             ; 005b89a8
    DIV dword ptr [ESP + 0x1c]          ; 005b89ab
    ADD ESP,0x4                         ; 005b89af
        ;   Label: LAB_005b89af
    POP EBP                             ; 005b89b2
    POP EDI                             ; 005b89b3
    POP ESI                             ; 005b89b4
    POP EBX                             ; 005b89b5
    RET                                 ; 005b89b6

