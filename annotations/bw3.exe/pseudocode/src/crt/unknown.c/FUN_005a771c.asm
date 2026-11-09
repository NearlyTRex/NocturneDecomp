; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a771c(void)
;
; Parameters:
; undefined2       Stack[0x0]:2   local_res0
; Local Variables:
; undefined2       Stack[-0x4]:2  local_4
;
; XREF[1]:
;   crt_unknown.c_FUN_005a73c8 at 005a76d5
;
; Called Functions:
;   crt_unknown.c_FUN_005a7867
;   crt_unknown.c_FUN_005a7a78
;
; *****************************************************************************

section .text

    POP EDX                             ; 005a771c
        ;   Label: crt_unknown.c_FUN_005a771c
    POP ECX                             ; 005a771d
    MOV AL,0x0                          ; 005a771e
    MOV byte ptr [EBX],AL               ; 005a7720
    MOV EAX,dword ptr [EBP + -0x24]     ; 005a7722
    MOV dword ptr [EBP + -0x1c],EBX     ; 005a7725
    ADD EAX,0x8                         ; 005a7728
    XOR EDI,EDI                         ; 005a772b
    MOV dword ptr [EBP + -0x24],EAX     ; 005a772d
    JMP 0x005a763f                      ; 005a7730
        ;   XREF to: 005a763f (UNCONDITIONAL_JUMP)  ; LAB_005a763f
    MOV EDX,dword ptr [EBP + -0x20]     ; 005a7735
        ;   Label: LAB_005a7735
    MOV EDI,dword ptr [EBP + -0x24]     ; 005a7738
    ADD EDX,0x7                         ; 005a773b
    LEA EAX,[EBP + 0xffffff6d]          ; 005a773e
    MOV dword ptr [EBP + -0x20],EDX     ; 005a7744
        ;   Label: LAB_005a7744
    CMP byte ptr [EAX],0x30             ; 005a7747
    JNZ 0x005a7754                      ; 005a774a
        ;   XREF to: 005a7754 (CONDITIONAL_JUMP)  ; LAB_005a7754
    MOV EDX,dword ptr [EBP + -0x20]     ; 005a774c
    DEC EDI                             ; 005a774f
    DEC EDX                             ; 005a7750
    INC EAX                             ; 005a7751
    JMP 0x005a7744                      ; 005a7752
        ;   XREF to: 005a7744 (UNCONDITIONAL_JUMP)  ; LAB_005a7744
    MOV BL,byte ptr [ESI + 0x8]         ; 005a7754
        ;   Label: LAB_005a7754
    MOV EDX,dword ptr [ESI]             ; 005a7757
    TEST BL,0x2                         ; 005a7759
    JZ 0x005a7770                       ; 005a775c
        ;   XREF to: 005a7770 (CONDITIONAL_JUMP)  ; LAB_005a7770
    MOV ECX,dword ptr [EBP + -0x20]     ; 005a775e
    MOV EBX,dword ptr [ESI + 0x4]       ; 005a7761
    ADD ECX,EBX                         ; 005a7764
    MOV dword ptr [EBP + -0x20],ECX     ; 005a7766
    LEA EBX,[ECX + 0x1]                 ; 005a7769
    ADD EDX,EBX                         ; 005a776c
    JMP 0x005a778d                      ; 005a776e
        ;   XREF to: 005a778d (UNCONDITIONAL_JUMP)  ; LAB_005a778d
    TEST BL,0x1                         ; 005a7770
        ;   Label: LAB_005a7770
    JZ 0x005a778d                       ; 005a7773
        ;   XREF to: 005a778d (CONDITIONAL_JUMP)  ; LAB_005a778d
    MOV EBX,dword ptr [ESI + 0x4]       ; 005a7775
    TEST EBX,EBX                        ; 005a7778
    JLE 0x005a777f                      ; 005a777a
        ;   XREF to: 005a777f (CONDITIONAL_JUMP)  ; LAB_005a777f
    INC EDX                             ; 005a777c
    JMP 0x005a7781                      ; 005a777d
        ;   XREF to: 005a7781 (UNCONDITIONAL_JUMP)  ; LAB_005a7781
    ADD EDX,EBX                         ; 005a777f
        ;   Label: LAB_005a777f
    MOV EBX,dword ptr [EBP + -0x20]     ; 005a7781
        ;   Label: LAB_005a7781
    MOV ECX,dword ptr [ESI + 0x4]       ; 005a7784
    INC EBX                             ; 005a7787
    SUB EBX,ECX                         ; 005a7788
    MOV dword ptr [EBP + -0x20],EBX     ; 005a778a
    TEST EDX,EDX                        ; 005a778d
        ;   Label: LAB_005a778d
    JL 0x005a77f9                       ; 005a778f
        ;   XREF to: 005a77f9 (CONDITIONAL_JUMP)  ; LAB_005a77f9
    CMP EDX,EDI                         ; 005a7795
    JLE 0x005a779b                      ; 005a7797
        ;   XREF to: 005a779b (CONDITIONAL_JUMP)  ; LAB_005a779b
    MOV EDX,EDI                         ; 005a7799
    MOV CL,byte ptr [ESI + 0x8]         ; 005a779b
        ;   Label: LAB_005a779b
    MOV EBX,0xf                         ; 005a779e
    TEST CL,0x20                        ; 005a77a3
    JZ 0x005a77ad                       ; 005a77a6
        ;   XREF to: 005a77ad (CONDITIONAL_JUMP)  ; LAB_005a77ad
    MOV EBX,0x14                        ; 005a77a8
    TEST byte ptr [ESI + 0x8],0x40      ; 005a77ad
        ;   Label: LAB_005a77ad
    JZ 0x005a77b5                       ; 005a77b1
        ;   XREF to: 005a77b5 (CONDITIONAL_JUMP)  ; LAB_005a77b5
    ADD EBX,EBX                         ; 005a77b3
    CMP EDX,EBX                         ; 005a77b5
        ;   Label: LAB_005a77b5
    JLE 0x005a77bc                      ; 005a77b7
        ;   XREF to: 005a77bc (CONDITIONAL_JUMP)  ; LAB_005a77bc
    LEA EDX,[EBX + 0x1]                 ; 005a77b9
    MOV byte ptr [EBP + -0x10],0x30     ; 005a77bc
        ;   Label: LAB_005a77bc
    CMP EDI,EDX                         ; 005a77c0
    JLE 0x005a77ce                      ; 005a77c2
        ;   XREF to: 005a77ce (CONDITIONAL_JUMP)  ; LAB_005a77ce
    CMP byte ptr [EDX + EAX*0x1],0x35   ; 005a77c4
    JC 0x005a77ce                       ; 005a77c8
        ;   XREF to: 005a77ce (CONDITIONAL_JUMP)  ; LAB_005a77ce
    MOV byte ptr [EBP + -0x10],0x39     ; 005a77ca
    MOV CH,byte ptr [EBP + -0x10]       ; 005a77ce
        ;   Label: LAB_005a77ce
    MOV EBX,EDX                         ; 005a77d1
    LEA EDI,[EDX + EAX*0x1]             ; 005a77d3
    DEC EDI                             ; 005a77d6
        ;   Label: LAB_005a77d6
    MOV CL,byte ptr [EDI]               ; 005a77d7
    DEC EBX                             ; 005a77d9
    CMP CL,CH                           ; 005a77da
    JNZ 0x005a77e1                      ; 005a77dc
        ;   XREF to: 005a77e1 (CONDITIONAL_JUMP)  ; LAB_005a77e1
    DEC EDX                             ; 005a77de
    JMP 0x005a77d6                      ; 005a77df
        ;   XREF to: 005a77d6 (UNCONDITIONAL_JUMP)  ; LAB_005a77d6
    CMP CH,0x39                         ; 005a77e1
        ;   Label: LAB_005a77e1
    JNZ 0x005a77ec                      ; 005a77e4
        ;   XREF to: 005a77ec (CONDITIONAL_JUMP)  ; LAB_005a77ec
    MOV CH,CL                           ; 005a77e6
    INC CH                              ; 005a77e8
    MOV byte ptr [EDI],CH               ; 005a77ea
    TEST EBX,EBX                        ; 005a77ec
        ;   Label: LAB_005a77ec
    JGE 0x005a77f9                      ; 005a77ee
        ;   XREF to: 005a77f9 (CONDITIONAL_JUMP)  ; LAB_005a77f9
    MOV EBX,dword ptr [EBP + -0x20]     ; 005a77f0
    DEC EAX                             ; 005a77f3
    INC EBX                             ; 005a77f4
    INC EDX                             ; 005a77f5
    MOV dword ptr [EBP + -0x20],EBX     ; 005a77f6
    TEST EDX,EDX                        ; 005a77f9
        ;   Label: LAB_005a77f9
    JG 0x005a7818                       ; 005a77fb
        ;   XREF to: 005a7818 (CONDITIONAL_JUMP)  ; LAB_005a7818
    MOV EDX,0x1                         ; 005a77fd
    XOR ECX,ECX                         ; 005a7802
    MOV AL,0x30                         ; 005a7804
    MOV dword ptr [EBP + -0x20],ECX     ; 005a7806
    MOV byte ptr [EBP + 0xffffff6c],AL  ; 005a7809
    LEA EAX,[EBP + 0xffffff6c]          ; 005a780f
    MOV dword ptr [ESI + 0x14],ECX      ; 005a7815
    MOV BL,byte ptr [ESI + 0x8]         ; 005a7818
        ;   Label: LAB_005a7818
    TEST BL,0x2                         ; 005a781b
    JNZ 0x005a7837                      ; 005a781e
        ;   XREF to: 005a7837 (CONDITIONAL_JUMP)  ; LAB_005a7837
    TEST BL,0x4                         ; 005a7820
    JZ 0x005a7849                       ; 005a7823
        ;   XREF to: 005a7849 (CONDITIONAL_JUMP)  ; LAB_005a7849
    MOV EDI,dword ptr [EBP + -0x20]     ; 005a7825
    CMP EDI,-0x4                        ; 005a7828
    JL 0x005a7831                       ; 005a782b
        ;   XREF to: 005a7831 (CONDITIONAL_JUMP)  ; LAB_005a7831
    CMP EDI,dword ptr [ESI]             ; 005a782d
    JL 0x005a7837                       ; 005a782f
        ;   XREF to: 005a7837 (CONDITIONAL_JUMP)  ; LAB_005a7837
    TEST byte ptr [ESI + 0x8],0x8       ; 005a7831
        ;   Label: LAB_005a7831
    JZ 0x005a7849                       ; 005a7835
        ;   XREF to: 005a7849 (CONDITIONAL_JUMP)  ; LAB_005a7849
    MOV ECX,dword ptr [EBP + 0x10]      ; 005a7837
        ;   Label: LAB_005a7837
    PUSH ECX                            ; 005a783a
    MOV EDI,dword ptr [EBP + -0x20]     ; 005a783b
    PUSH EDI                            ; 005a783e
    PUSH EDX                            ; 005a783f
    PUSH EAX                            ; 005a7840
    PUSH ESI                            ; 005a7841
    CALL crt_unknown.c_FUN_005a7867     ; 005a7842
        ;   XREF to: 005a7867 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a7867()
    JMP 0x005a7859                      ; 005a7847
        ;   XREF to: 005a7859 (UNCONDITIONAL_JUMP)  ; LAB_005a7859
    MOV EDI,dword ptr [EBP + 0x10]      ; 005a7849
        ;   Label: LAB_005a7849
    PUSH EDI                            ; 005a784c
    MOV EBX,dword ptr [EBP + -0x20]     ; 005a784d
    PUSH EBX                            ; 005a7850
    PUSH EDX                            ; 005a7851
    PUSH EAX                            ; 005a7852
    PUSH ESI                            ; 005a7853
    CALL crt_unknown.c_FUN_005a7a78     ; 005a7854
        ;   XREF to: 005a7a78 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a7a78()
    ADD ESP,0x14                        ; 005a7859
        ;   Label: LAB_005a7859
    XOR EAX,EAX                         ; 005a785c
        ;   Label: LAB_005a785c
    MOV AX,word ptr [EBP + -0x14]       ; 005a785e
    JMP 0x005a7356                      ; 005a7862
        ;   XREF to: 005a7356 (UNCONDITIONAL_JUMP)  ; LAB_005a7356

