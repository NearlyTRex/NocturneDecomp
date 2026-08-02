; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_string_c_parseFloatString_FUN_0056f690(char *str,void *result,char **endptr)
;
; Parameters:
; char *           Stack[0x4]:4   str
; void *           Stack[0x8]:4   result
; char * *         Stack[0xc]:4   endptr
;
; XREF[1]:
;   crt_string.c_strtod_main_FUN_0056f852 at 0056f867
;
; Called Functions:
;   crt_unknown.c_FUN_0056a320
;   crt_unknown.c_FUN_00571b2c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0056f690
        ;   Label: crt_string.c_parseFloatString_FUN_0056f690
    MOV EBP,ESP                         ; 0056f691
    PUSH EBX                            ; 0056f693
    PUSH ESI                            ; 0056f694
    PUSH EDI                            ; 0056f695
    SUB ESP,0x30                        ; 0056f696
    MOV EAX,dword ptr [EBP + 0x8]       ; 0056f699
    MOV dword ptr [EBP + -0x1c],EAX     ; 0056f69c
    MOV DL,byte ptr [EAX]               ; 0056f69f
        ;   Label: LAB_0056f69f
    CMP DL,0x20                         ; 0056f6a1
    JZ 0x0056f6b0                       ; 0056f6a4
        ;   XREF to: 0056f6b0 (CONDITIONAL_JUMP)  ; LAB_0056f6b0
    CMP DL,0x9                          ; 0056f6a6
    JC 0x0056f6b3                       ; 0056f6a9
        ;   XREF to: 0056f6b3 (CONDITIONAL_JUMP)  ; LAB_0056f6b3
    CMP DL,0xd                          ; 0056f6ab
    JA 0x0056f6b3                       ; 0056f6ae
        ;   XREF to: 0056f6b3 (CONDITIONAL_JUMP)  ; LAB_0056f6b3
    INC EAX                             ; 0056f6b0
        ;   Label: LAB_0056f6b0
    JMP 0x0056f69f                      ; 0056f6b1
        ;   XREF to: 0056f69f (UNCONDITIONAL_JUMP)  ; LAB_0056f69f
    XOR DH,DH                           ; 0056f6b3
        ;   Label: LAB_0056f6b3
    LEA EBX,[EAX + 0x1]                 ; 0056f6b5
    MOV byte ptr [EBP + -0x10],DH       ; 0056f6b8
    CMP DL,0x2b                         ; 0056f6bb
    JNZ 0x0056f6c4                      ; 0056f6be
        ;   XREF to: 0056f6c4 (CONDITIONAL_JUMP)  ; LAB_0056f6c4
    MOV EAX,EBX                         ; 0056f6c0
    JMP 0x0056f6d0                      ; 0056f6c2
        ;   XREF to: 0056f6d0 (UNCONDITIONAL_JUMP)  ; LAB_0056f6d0
    CMP DL,0x2d                         ; 0056f6c4
        ;   Label: LAB_0056f6c4
    JNZ 0x0056f6d0                      ; 0056f6c7
        ;   XREF to: 0056f6d0 (CONDITIONAL_JUMP)  ; LAB_0056f6d0
    MOV CL,0x1                          ; 0056f6c9
    MOV EAX,EBX                         ; 0056f6cb
    MOV byte ptr [EBP + -0x10],CL       ; 0056f6cd
    MOV DH,0x30                         ; 0056f6d0
        ;   Label: LAB_0056f6d0
    XOR EBX,EBX                         ; 0056f6d2
    XOR EDI,EDI                         ; 0056f6d4
    MOV DL,byte ptr [EAX]               ; 0056f6d6
        ;   Label: LAB_0056f6d6
    INC EAX                             ; 0056f6d8
    CMP DL,0x2e                         ; 0056f6d9
    JNZ 0x0056f6f0                      ; 0056f6dc
        ;   XREF to: 0056f6f0 (CONDITIONAL_JUMP)  ; LAB_0056f6f0
    MOV CL,byte ptr [EBP + -0x10]       ; 0056f6de
    TEST CL,0x8                         ; 0056f6e1
    JNZ 0x0056f718                      ; 0056f6e4
        ;   XREF to: 0056f718 (CONDITIONAL_JUMP)  ; LAB_0056f718
    MOV CH,CL                           ; 0056f6e6
    OR CH,0x8                           ; 0056f6e8
    MOV byte ptr [EBP + -0x10],CH       ; 0056f6eb
    JMP 0x0056f6d6                      ; 0056f6ee
        ;   XREF to: 0056f6d6 (UNCONDITIONAL_JUMP)  ; LAB_0056f6d6
    CMP DL,0x30                         ; 0056f6f0
        ;   Label: LAB_0056f6f0
    JC 0x0056f718                       ; 0056f6f3
        ;   XREF to: 0056f718 (CONDITIONAL_JUMP)  ; LAB_0056f718
    CMP DL,0x39                         ; 0056f6f5
    JA 0x0056f718                       ; 0056f6f8
        ;   XREF to: 0056f718 (CONDITIONAL_JUMP)  ; LAB_0056f718
    TEST byte ptr [EBP + -0x10],0x8     ; 0056f6fa
    JZ 0x0056f701                       ; 0056f6fe
        ;   XREF to: 0056f701 (CONDITIONAL_JUMP)  ; LAB_0056f701
    INC EDI                             ; 0056f700
    OR DH,DL                            ; 0056f701
        ;   Label: LAB_0056f701
    CMP DH,0x30                         ; 0056f703
    JZ 0x0056f712                       ; 0056f706
        ;   XREF to: 0056f712 (CONDITIONAL_JUMP)  ; LAB_0056f712
    CMP EBX,0x13                        ; 0056f708
    JGE 0x0056f711                      ; 0056f70b
        ;   XREF to: 0056f711 (CONDITIONAL_JUMP)  ; LAB_0056f711
    MOV byte ptr [EBX + EBP*0x1 + -0x3c],DL ; 0056f70d
    INC EBX                             ; 0056f711
        ;   Label: LAB_0056f711
    OR byte ptr [EBP + -0x10],0x4       ; 0056f712
        ;   Label: LAB_0056f712
    JMP 0x0056f6d6                      ; 0056f716
        ;   XREF to: 0056f6d6 (UNCONDITIONAL_JUMP)  ; LAB_0056f6d6
    MOV DH,byte ptr [EBP + -0x10]       ; 0056f718
        ;   Label: LAB_0056f718
    XOR ESI,ESI                         ; 0056f71b
    TEST DH,0x4                         ; 0056f71d
    JZ 0x0056f7a2                       ; 0056f720
        ;   XREF to: 0056f7a2 (CONDITIONAL_JUMP)  ; LAB_0056f7a2
    CMP DL,0x65                         ; 0056f726
    JZ 0x0056f734                       ; 0056f729
        ;   XREF to: 0056f734 (CONDITIONAL_JUMP)  ; LAB_0056f734
    CMP DL,0x45                         ; 0056f72b
    JNZ 0x0056f79e                      ; 0056f72e
        ;   XREF to: 0056f79e (CONDITIONAL_JUMP)  ; LAB_0056f79e
    LEA EDX,[EAX + -0x1]                ; 0056f734
        ;   Label: LAB_0056f734
    MOV CL,byte ptr [EAX]               ; 0056f737
    MOV dword ptr [EBP + -0x18],EDX     ; 0056f739
    LEA EDX,[EAX + 0x1]                 ; 0056f73c
    CMP CL,0x2b                         ; 0056f73f
    JNZ 0x0056f748                      ; 0056f742
        ;   XREF to: 0056f748 (CONDITIONAL_JUMP)  ; LAB_0056f748
    MOV EAX,EDX                         ; 0056f744
    JMP 0x0056f758                      ; 0056f746
        ;   XREF to: 0056f758 (UNCONDITIONAL_JUMP)  ; LAB_0056f758
    CMP CL,0x2d                         ; 0056f748
        ;   Label: LAB_0056f748
    JNZ 0x0056f758                      ; 0056f74b
        ;   XREF to: 0056f758 (CONDITIONAL_JUMP)  ; LAB_0056f758
    MOV CL,byte ptr [EBP + -0x10]       ; 0056f74d
    OR CL,0x2                           ; 0056f750
    MOV EAX,EDX                         ; 0056f753
    MOV byte ptr [EBP + -0x10],CL       ; 0056f755
    AND byte ptr [EBP + -0x10],0xfb     ; 0056f758
        ;   Label: LAB_0056f758
    MOV DL,byte ptr [EAX]               ; 0056f75c
        ;   Label: LAB_0056f75c
    CMP DL,0x30                         ; 0056f75e
    JC 0x0056f78b                       ; 0056f761
        ;   XREF to: 0056f78b (CONDITIONAL_JUMP)  ; LAB_0056f78b
    CMP DL,0x39                         ; 0056f763
    JA 0x0056f78b                       ; 0056f766
        ;   XREF to: 0056f78b (CONDITIONAL_JUMP)  ; LAB_0056f78b
    CMP ESI,0x3e8                       ; 0056f768
    JGE 0x0056f77f                      ; 0056f76e
        ;   XREF to: 0056f77f (CONDITIONAL_JUMP)  ; LAB_0056f77f
    IMUL ESI,ESI,0xa                    ; 0056f770
    MOV dword ptr [EBP + -0x14],ESI     ; 0056f773
    MOVZX ESI,DL                        ; 0056f776
    ADD ESI,dword ptr [EBP + -0x14]     ; 0056f779
    SUB ESI,0x30                        ; 0056f77c
    MOV DL,byte ptr [EBP + -0x10]       ; 0056f77f
        ;   Label: LAB_0056f77f
    OR DL,0x4                           ; 0056f782
    INC EAX                             ; 0056f785
    MOV byte ptr [EBP + -0x10],DL       ; 0056f786
    JMP 0x0056f75c                      ; 0056f789
        ;   XREF to: 0056f75c (UNCONDITIONAL_JUMP)  ; LAB_0056f75c
    TEST byte ptr [EBP + -0x10],0x2     ; 0056f78b
        ;   Label: LAB_0056f78b
    JZ 0x0056f793                       ; 0056f78f
        ;   XREF to: 0056f793 (CONDITIONAL_JUMP)  ; LAB_0056f793
    NEG ESI                             ; 0056f791
    TEST byte ptr [EBP + -0x10],0x4     ; 0056f793
        ;   Label: LAB_0056f793
    JNZ 0x0056f79f                      ; 0056f797
        ;   XREF to: 0056f79f (CONDITIONAL_JUMP)  ; LAB_0056f79f
    MOV EAX,dword ptr [EBP + -0x18]     ; 0056f799
    JMP 0x0056f79f                      ; 0056f79c
        ;   XREF to: 0056f79f (UNCONDITIONAL_JUMP)  ; LAB_0056f79f
    DEC EAX                             ; 0056f79e
        ;   Label: LAB_0056f79e
    MOV dword ptr [EBP + -0x1c],EAX     ; 0056f79f
        ;   Label: LAB_0056f79f
    MOV ECX,dword ptr [EBP + 0x10]      ; 0056f7a2
        ;   Label: LAB_0056f7a2
    TEST ECX,ECX                        ; 0056f7a5
    JZ 0x0056f7ae                       ; 0056f7a7
        ;   XREF to: 0056f7ae (CONDITIONAL_JUMP)  ; LAB_0056f7ae
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0056f7a9
    MOV dword ptr [ECX],EAX             ; 0056f7ac
    SUB ESI,EDI                         ; 0056f7ae
        ;   Label: LAB_0056f7ae
    CMP EBX,0x13                        ; 0056f7b0
    JLE 0x0056f7bf                      ; 0056f7b3
        ;   XREF to: 0056f7bf (CONDITIONAL_JUMP)  ; LAB_0056f7bf
    SUB EBX,0x13                        ; 0056f7b5
    ADD ESI,EBX                         ; 0056f7b8
    MOV EBX,0x13                        ; 0056f7ba
    TEST EBX,EBX                        ; 0056f7bf
        ;   Label: LAB_0056f7bf
    JLE 0x0056f7ce                      ; 0056f7c1
        ;   XREF to: 0056f7ce (CONDITIONAL_JUMP)  ; LAB_0056f7ce
    CMP byte ptr [EBX + EBP*0x1 + -0x3d],0x30 ; 0056f7c3
    JNZ 0x0056f7ce                      ; 0056f7c8
        ;   XREF to: 0056f7ce (CONDITIONAL_JUMP)  ; LAB_0056f7ce
    INC ESI                             ; 0056f7ca
    DEC EBX                             ; 0056f7cb
    JMP 0x0056f7bf                      ; 0056f7cc
        ;   XREF to: 0056f7bf (UNCONDITIONAL_JUMP)  ; LAB_0056f7bf
    TEST EBX,EBX                        ; 0056f7ce
        ;   Label: LAB_0056f7ce
    JNZ 0x0056f7e4                      ; 0056f7d0
        ;   XREF to: 0056f7e4 (CONDITIONAL_JUMP)  ; LAB_0056f7e4
    MOV EAX,dword ptr [EBP + 0xc]       ; 0056f7d2
    MOV word ptr [EAX + 0x8],0x0        ; 0056f7d5
    MOV dword ptr [EAX + 0x4],EBX       ; 0056f7db
    MOV dword ptr [EAX],EBX             ; 0056f7de
    XOR EAX,EAX                         ; 0056f7e0
    JMP 0x0056f84a                      ; 0056f7e2
        ;   XREF to: 0056f84a (UNCONDITIONAL_JUMP)  ; LAB_0056f84a
    XOR AL,AL                           ; 0056f7e4
        ;   Label: LAB_0056f7e4
    LEA EDX,[EBP + -0x28]               ; 0056f7e6
    MOV byte ptr [EBX + EBP*0x1 + -0x3c],AL ; 0056f7e9
    LEA EAX,[EBP + -0x3c]               ; 0056f7ed
    CALL crt_unknown.c_FUN_00571b2c     ; 0056f7f0
        ;   XREF to: 00571b2c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00571b2c()
    TEST ESI,ESI                        ; 0056f7f5
    JZ 0x0056f806                       ; 0056f7f7
        ;   XREF to: 0056f806 (CONDITIONAL_JUMP)  ; LAB_0056f806
    PUSH ESI                            ; 0056f7f9
    LEA EAX,[EBP + -0x28]               ; 0056f7fa
    PUSH EAX                            ; 0056f7fd
    CALL crt_unknown.c_FUN_0056a320     ; 0056f7fe
        ;   XREF to: 0056a320 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056a320()
    ADD ESP,0x8                         ; 0056f803
    TEST byte ptr [EBP + -0x10],0x1     ; 0056f806
        ;   Label: LAB_0056f806
    JZ 0x0056f810                       ; 0056f80a
        ;   XREF to: 0056f810 (CONDITIONAL_JUMP)  ; LAB_0056f810
    OR byte ptr [EBP + -0x1f],0x80      ; 0056f80c
    MOV EDX,dword ptr [EBP + 0xc]       ; 0056f810
        ;   Label: LAB_0056f810
    MOV EAX,dword ptr [EBP + -0x20]     ; 0056f813
    MOV word ptr [EDX + 0x8],AX         ; 0056f816
    MOV EAX,dword ptr [EBP + -0x24]     ; 0056f81a
    MOV dword ptr [EDX + 0x4],EAX       ; 0056f81d
    MOV EAX,dword ptr [EBP + -0x28]     ; 0056f820
    MOV dword ptr [EDX],EAX             ; 0056f823
    LEA EAX,[ESI + EBX*0x1 + -0x1]      ; 0056f825
    CMP EAX,0x134                       ; 0056f829
    JLE 0x0056f837                      ; 0056f82e
        ;   XREF to: 0056f837 (CONDITIONAL_JUMP)  ; LAB_0056f837
    MOV EAX,0x3                         ; 0056f830
    JMP 0x0056f84a                      ; 0056f835
        ;   XREF to: 0056f84a (UNCONDITIONAL_JUMP)  ; LAB_0056f84a
    CMP EAX,0xfffffecc                  ; 0056f837
        ;   Label: LAB_0056f837
    JGE 0x0056f845                      ; 0056f83c
        ;   XREF to: 0056f845 (CONDITIONAL_JUMP)  ; LAB_0056f845
    MOV EAX,0x2                         ; 0056f83e
    JMP 0x0056f84a                      ; 0056f843
        ;   XREF to: 0056f84a (UNCONDITIONAL_JUMP)  ; LAB_0056f84a
    MOV EAX,0x1                         ; 0056f845
        ;   Label: LAB_0056f845
    LEA ESP,[EBP + -0xc]                ; 0056f84a
        ;   Label: LAB_0056f84a
    POP EDI                             ; 0056f84d
    POP ESI                             ; 0056f84e
    POP EBX                             ; 0056f84f
    POP EBP                             ; 0056f850
    RET                                 ; 0056f851

