; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044d600(int param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_0052fad0 at 0052fdd7
;   FUN_0052fea0 at 00530193
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_006141c0
;   undefined4 DAT_01b13888
;   undefined4 DAT_01b1388c
;   undefined4 DAT_01b13890
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c2a390
;   undefined4 DAT_01c35814
;   undefined4 DAT_01c35818
;   undefined4 DAT_01c35820
;   undefined4 DAT_01c35824
;   undefined4 DAT_01c3582c
;   undefined4 DAT_01c35830
;
; Called Functions:
;   FUN_005b77c0
;   FUN_005b849c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d600
        ;   Label: FUN_0044d600
    PUSH ESI                            ; 0044d601
    PUSH EDI                            ; 0044d602
    PUSH EBP                            ; 0044d603
    SUB ESP,0x34                        ; 0044d604
    MOV EBP,dword ptr [ESP + 0x54]      ; 0044d607
    XOR ESI,ESI                         ; 0044d60b
    XOR EBX,EBX                         ; 0044d60d
    MOV dword ptr [0x01b13888],ESI      ; 0044d60f | DAT_01b13888
    CALL FUN_005b849c                   ; 0044d615
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; undefined FUN_005b849c()
        ;   Label: LAB_0044d615
    AND EAX,0x1f                        ; 0044d61a
    ADD EBX,0x4                         ; 0044d61d
    SUB EAX,0x10                        ; 0044d620
    MOV dword ptr [EBX + 0x1b13888],EAX ; 0044d623
    CMP EBX,0x190                       ; 0044d629
    JNZ 0x0044d615                      ; 0044d62f
        ;   XREF to: 0044d615 (CONDITIONAL_JUMP)  ; LAB_0044d615
    MOV EDX,dword ptr [0x006141bc]      ; 0044d631 | DAT_006141bc
    XOR EBX,EBX                         ; 0044d637
    TEST EDX,EDX                        ; 0044d639
    JLE 0x0044d680                      ; 0044d63b
        ;   XREF to: 0044d680 (CONDITIONAL_JUMP)  ; LAB_0044d680
    XOR EDI,EDI                         ; 0044d63d
    MOV EDX,dword ptr [0x006141b8]      ; 0044d63f | DAT_006141b8
        ;   Label: LAB_0044d63f
    MOV ECX,dword ptr [0x006141c0]      ; 0044d645 | DAT_006141c0
    IMUL EDX,ECX                        ; 0044d64b
    MOV EAX,EDX                         ; 0044d64e
    SAR EDX,0x1f                        ; 0044d650
    SHL EDX,0x3                         ; 0044d653
    SBB EAX,EDX                         ; 0044d656
    SAR EAX,0x3                         ; 0044d658
    PUSH EAX                            ; 0044d65b
    PUSH 0x0                            ; 0044d65c
    MOV EAX,dword ptr [EDI + 0x1c2a38c] ; 0044d65e | DAT_01c2a38c | DAT_01c2a390
    PUSH EAX                            ; 0044d664
    ADD EDI,0x4                         ; 0044d665
    INC EBX                             ; 0044d668
    CALL FUN_005b77c0                   ; 0044d669
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    MOV EDX,dword ptr [0x006141bc]      ; 0044d66e | DAT_006141bc
    ADD ESP,0xc                         ; 0044d674
    CMP EBX,EDX                         ; 0044d677
    JL 0x0044d63f                       ; 0044d679
        ;   XREF to: 0044d63f (CONDITIONAL_JUMP)  ; LAB_0044d63f
    LEA EAX,[EAX]                       ; 0044d67b
    MOV ECX,ECX                         ; 0044d67e
    MOV ECX,dword ptr [0x006141c0]      ; 0044d680 | DAT_006141c0
        ;   Label: LAB_0044d680
    MOV ESI,dword ptr [0x01b13888]      ; 0044d686 | DAT_01b13888
    CMP ECX,0x20                        ; 0044d68c
    JNZ 0x0044d833                      ; 0044d68f
        ;   XREF to: 0044d833 (CONDITIONAL_JUMP)  ; LAB_0044d833
    XOR EAX,EAX                         ; 0044d695
    MOV dword ptr [ESP + 0x14],EAX      ; 0044d697
    MOV EAX,dword ptr [ESP + 0x48]      ; 0044d69b
    CMP dword ptr [EAX + 0x1cc4],0x0    ; 0044d69f
    JLE 0x0044d6ee                      ; 0044d6a6
        ;   XREF to: 0044d6ee (CONDITIONAL_JUMP)  ; LAB_0044d6ee
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0044d6a8
    SHL EAX,0x2                         ; 0044d6ac
    MOV dword ptr [ESP + 0xc],EAX       ; 0044d6af
    CMP dword ptr [0x006141bc],0xf0     ; 0044d6b3 | DAT_006141bc
        ;   Label: LAB_0044d6b3
    JLE 0x0044d6fc                      ; 0044d6bd
        ;   XREF to: 0044d6fc (CONDITIONAL_JUMP)  ; LAB_0044d6fc
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044d6bf
    MOV ECX,dword ptr [ESP + 0x50]      ; 0044d6c3
    ADD EAX,EAX                         ; 0044d6c7
    ADD EAX,ECX                         ; 0044d6c9
    TEST EAX,EAX                        ; 0044d6cb
        ;   Label: LAB_0044d6cb
    JL 0x0044d6d7                       ; 0044d6cd
        ;   XREF to: 0044d6d7 (CONDITIONAL_JUMP)  ; LAB_0044d6d7
    CMP EAX,dword ptr [0x006141bc]      ; 0044d6cf | DAT_006141bc
    JL 0x0044d706                       ; 0044d6d5
        ;   XREF to: 0044d706 (CONDITIONAL_JUMP)  ; LAB_0044d706
    MOV EBX,dword ptr [ESP + 0x14]      ; 0044d6d7
        ;   Label: LAB_0044d6d7
    MOV EDX,dword ptr [ESP + 0x48]      ; 0044d6db
    INC EBX                             ; 0044d6df
    MOV EDI,dword ptr [EDX + 0x1cc4]    ; 0044d6e0
    MOV dword ptr [ESP + 0x14],EBX      ; 0044d6e6
    CMP EBX,EDI                         ; 0044d6ea
    JL 0x0044d6b3                       ; 0044d6ec
        ;   XREF to: 0044d6b3 (CONDITIONAL_JUMP)  ; LAB_0044d6b3
    MOV dword ptr [0x01b13888],ESI      ; 0044d6ee | DAT_01b13888
        ;   Label: LAB_0044d6ee
    ADD ESP,0x34                        ; 0044d6f4
    POP EBP                             ; 0044d6f7
    POP EDI                             ; 0044d6f8
    POP ESI                             ; 0044d6f9
    POP EBX                             ; 0044d6fa
    RET                                 ; 0044d6fb
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044d6fc
        ;   Label: LAB_0044d6fc
    ADD EAX,dword ptr [ESP + 0x50]      ; 0044d700
    JMP 0x0044d6cb                      ; 0044d704
        ;   XREF to: 0044d6cb (UNCONDITIONAL_JUMP)  ; LAB_0044d6cb
    MOV EDX,dword ptr [ESP + 0x48]      ; 0044d706
        ;   Label: LAB_0044d706
    MOV EDI,dword ptr [EAX*0x4 + 0x1c2a38c] ; 0044d70a | DAT_01c2a38c
    MOV EAX,dword ptr [ESP + 0xc]       ; 0044d711
    MOV ECX,dword ptr [EDX + 0x1cc0]    ; 0044d715
    ADD EDI,EAX                         ; 0044d71b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044d71d
    IMUL EAX,ECX                        ; 0044d721
    LEA EDX,[EAX + EAX*0x1]             ; 0044d724
    MOV EAX,dword ptr [ESP + 0x48]      ; 0044d727
    MOV EAX,dword ptr [EAX + 0x2f94]    ; 0044d72b
    ADD EAX,EDX                         ; 0044d731
    XOR EBX,EBX                         ; 0044d733
    MOV dword ptr [ESP + 0x2c],EAX      ; 0044d735
    MOV EAX,dword ptr [ESP + 0x48]      ; 0044d739
    MOV dword ptr [ESP + 0x20],EBX      ; 0044d73d
    MOV EDX,dword ptr [EAX + 0x1cc0]    ; 0044d741
    MOV dword ptr [ESP + 0x24],EBX      ; 0044d747
    TEST EDX,EDX                        ; 0044d74b
    JLE 0x0044d6d7                      ; 0044d74d
        ;   XREF to: 0044d6d7 (CONDITIONAL_JUMP)  ; LAB_0044d6d7
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0044d74f
        ;   Label: LAB_0044d74f
    XOR EBX,EBX                         ; 0044d753
    MOV BX,word ptr [EAX]               ; 0044d755
    TEST EBX,EBX                        ; 0044d758
    JZ 0x0044d7e4                       ; 0044d75a
        ;   XREF to: 0044d7e4 (CONDITIONAL_JUMP)  ; LAB_0044d7e4
    SHR EBX,0x6                         ; 0044d760
    MOV EAX,dword ptr [ESI*0x4 + 0x1b1388c] ; 0044d763 | DAT_01b1388c | DAT_01b13890
    INC ESI                             ; 0044d76a
    ADD EBX,EAX                         ; 0044d76b
    CMP ESI,0x64                        ; 0044d76d
    JL 0x0044d774                       ; 0044d770
        ;   XREF to: 0044d774 (CONDITIONAL_JUMP)  ; LAB_0044d774
    XOR ESI,ESI                         ; 0044d772
    CMP EBX,0x7f                        ; 0044d774
        ;   Label: LAB_0044d774
    JBE 0x0044d77e                      ; 0044d777
        ;   XREF to: 0044d77e (CONDITIONAL_JUMP)  ; LAB_0044d77e
    MOV EBX,0x7f                        ; 0044d779
    XOR BL,0x7f                         ; 0044d77e
        ;   Label: LAB_0044d77e
    TEST EBP,EBP                        ; 0044d781
    JLE 0x0044d794                      ; 0044d783
        ;   XREF to: 0044d794 (CONDITIONAL_JUMP)  ; LAB_0044d794
    ADD EBX,EBP                         ; 0044d785
    CMP EBX,0xff                        ; 0044d787
    JBE 0x0044d794                      ; 0044d78d
        ;   XREF to: 0044d794 (CONDITIONAL_JUMP)  ; LAB_0044d794
    MOV EBX,0xff                        ; 0044d78f
    ADD EBX,dword ptr [ESP + 0x20]      ; 0044d794
        ;   Label: LAB_0044d794
    SHR EBX,0x1                         ; 0044d798
    MOV dword ptr [ESP + 0x20],EBX      ; 0044d79a
    LEA EAX,[EBX + EBX*0x1]             ; 0044d79e
    ADD EAX,EBX                         ; 0044d7a1
    MOV ECX,dword ptr [0x006141c0]      ; 0044d7a3 | DAT_006141c0
    SHR EAX,0x2                         ; 0044d7a9
    CMP ECX,0x20                        ; 0044d7ac
    JNZ 0x0044d820                      ; 0044d7af
        ;   XREF to: 0044d820 (CONDITIONAL_JUMP)  ; LAB_0044d820
    MOV CL,byte ptr [0x01c35814]        ; 0044d7b1 | DAT_01c35814
    MOV EDX,EAX                         ; 0044d7b7
    SHL EDX,CL                          ; 0044d7b9
    MOV CL,byte ptr [0x01c35820]        ; 0044d7bb | DAT_01c35820
    SHL EAX,CL                          ; 0044d7c1
    MOV CL,byte ptr [0x01c3582c]        ; 0044d7c3 | DAT_01c3582c
    SHL EBX,CL                          ; 0044d7c9
    OR EAX,EDX                          ; 0044d7cb
    MOV ECX,EBX                         ; 0044d7cd
    OR ECX,EAX                          ; 0044d7cf
    MOV EBX,dword ptr [0x006141b8]      ; 0044d7d1 | DAT_006141b8
        ;   Label: LAB_0044d7d1
    MOV dword ptr [EDI],ECX             ; 0044d7d7
    CMP EBX,0x140                       ; 0044d7d9
    JLE 0x0044d7e4                      ; 0044d7df
        ;   XREF to: 0044d7e4 (CONDITIONAL_JUMP)  ; LAB_0044d7e4
    MOV dword ptr [EDI + 0x4],ECX       ; 0044d7e1
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0044d7e4
        ;   Label: LAB_0044d7e4
    ADD EAX,0x2                         ; 0044d7e8
    MOV EDX,dword ptr [0x006141b8]      ; 0044d7eb | DAT_006141b8
    MOV dword ptr [ESP + 0x2c],EAX      ; 0044d7f1
    CMP EDX,0x140                       ; 0044d7f5
    JLE 0x0044d82e                      ; 0044d7fb
        ;   XREF to: 0044d82e (CONDITIONAL_JUMP)  ; LAB_0044d82e
    ADD EDI,0x8                         ; 0044d7fd
    MOV ECX,dword ptr [ESP + 0x24]      ; 0044d800
        ;   Label: LAB_0044d800
    MOV EDX,dword ptr [ESP + 0x48]      ; 0044d804
    INC ECX                             ; 0044d808
    MOV EBX,dword ptr [EDX + 0x1cc0]    ; 0044d809
    MOV dword ptr [ESP + 0x24],ECX      ; 0044d80f
    CMP ECX,EBX                         ; 0044d813
    JGE 0x0044d6d7                      ; 0044d815
        ;   XREF to: 0044d6d7 (CONDITIONAL_JUMP)  ; LAB_0044d6d7
    JMP 0x0044d74f                      ; 0044d81b
        ;   XREF to: 0044d74f (UNCONDITIONAL_JUMP)  ; LAB_0044d74f
    MOV ECX,EAX                         ; 0044d820
        ;   Label: LAB_0044d820
    SHL EAX,0x8                         ; 0044d822
    SHL ECX,0x10                        ; 0044d825
    OR ECX,EAX                          ; 0044d828
    OR ECX,EBX                          ; 0044d82a
    JMP 0x0044d7d1                      ; 0044d82c
        ;   XREF to: 0044d7d1 (UNCONDITIONAL_JUMP)  ; LAB_0044d7d1
    ADD EDI,0x4                         ; 0044d82e
        ;   Label: LAB_0044d82e
    JMP 0x0044d800                      ; 0044d831
        ;   XREF to: 0044d800 (UNCONDITIONAL_JUMP)  ; LAB_0044d800
    MOV EAX,dword ptr [ESP + 0x48]      ; 0044d833
        ;   Label: LAB_0044d833
    XOR EBX,EBX                         ; 0044d837
    MOV EDI,dword ptr [EAX + 0x1cc4]    ; 0044d839
    MOV dword ptr [ESP + 0x18],EBX      ; 0044d83f
    TEST EDI,EDI                        ; 0044d843
    JLE 0x0044d6ee                      ; 0044d845
        ;   XREF to: 0044d6ee (CONDITIONAL_JUMP)  ; LAB_0044d6ee
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0044d84b
    ADD EAX,EAX                         ; 0044d84f
    MOV dword ptr [ESP + 0x10],EAX      ; 0044d851
    CMP dword ptr [0x006141bc],0xf0     ; 0044d855 | DAT_006141bc
        ;   Label: LAB_0044d855
    JLE 0x0044d896                      ; 0044d85f
        ;   XREF to: 0044d896 (CONDITIONAL_JUMP)  ; LAB_0044d896
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044d861
    MOV ECX,dword ptr [ESP + 0x50]      ; 0044d865
    ADD EAX,EAX                         ; 0044d869
    ADD EAX,ECX                         ; 0044d86b
    TEST EAX,EAX                        ; 0044d86d
        ;   Label: LAB_0044d86d
    JL 0x0044d879                       ; 0044d86f
        ;   XREF to: 0044d879 (CONDITIONAL_JUMP)  ; LAB_0044d879
    CMP EAX,dword ptr [0x006141bc]      ; 0044d871 | DAT_006141bc
    JL 0x0044d8a0                       ; 0044d877
        ;   XREF to: 0044d8a0 (CONDITIONAL_JUMP)  ; LAB_0044d8a0
    MOV ECX,dword ptr [ESP + 0x18]      ; 0044d879
        ;   Label: LAB_0044d879
    MOV EDX,dword ptr [ESP + 0x48]      ; 0044d87d
    INC ECX                             ; 0044d881
    MOV EBX,dword ptr [EDX + 0x1cc4]    ; 0044d882
    MOV dword ptr [ESP + 0x18],ECX      ; 0044d888
    CMP ECX,EBX                         ; 0044d88c
    JGE 0x0044d6ee                      ; 0044d88e
        ;   XREF to: 0044d6ee (CONDITIONAL_JUMP)  ; LAB_0044d6ee
    JMP 0x0044d855                      ; 0044d894
        ;   XREF to: 0044d855 (UNCONDITIONAL_JUMP)  ; LAB_0044d855
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044d896
        ;   Label: LAB_0044d896
    ADD EAX,dword ptr [ESP + 0x50]      ; 0044d89a
    JMP 0x0044d86d                      ; 0044d89e
        ;   XREF to: 0044d86d (UNCONDITIONAL_JUMP)  ; LAB_0044d86d
    MOV EDX,dword ptr [ESP + 0x48]      ; 0044d8a0
        ;   Label: LAB_0044d8a0
    MOV EDI,dword ptr [EAX*0x4 + 0x1c2a38c] ; 0044d8a4 | DAT_01c2a38c
    MOV EAX,dword ptr [ESP + 0x10]      ; 0044d8ab
    MOV ECX,dword ptr [EDX + 0x1cc0]    ; 0044d8af
    ADD EDI,EAX                         ; 0044d8b5
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044d8b7
    IMUL EAX,ECX                        ; 0044d8bb
    MOV EDX,dword ptr [EDX + 0x2f94]    ; 0044d8be
    ADD EAX,EAX                         ; 0044d8c4
    XOR EBX,EBX                         ; 0044d8c6
    ADD EDX,EAX                         ; 0044d8c8
    MOV EAX,dword ptr [ESP + 0x48]      ; 0044d8ca
    MOV dword ptr [ESP + 0x1c],EBX      ; 0044d8ce
    MOV dword ptr [ESP + 0x30],EDX      ; 0044d8d2
    MOV EDX,dword ptr [EAX + 0x1cc0]    ; 0044d8d6
    MOV dword ptr [ESP + 0x28],EBX      ; 0044d8dc
    TEST EDX,EDX                        ; 0044d8e0
    JLE 0x0044d879                      ; 0044d8e2
        ;   XREF to: 0044d879 (CONDITIONAL_JUMP)  ; LAB_0044d879
    MOV EAX,dword ptr [ESP + 0x30]      ; 0044d8e4
        ;   Label: LAB_0044d8e4
    XOR EBX,EBX                         ; 0044d8e8
    MOV BX,word ptr [EAX]               ; 0044d8ea
    TEST EBX,EBX                        ; 0044d8ed
    JZ 0x0044d9ae                       ; 0044d8ef
        ;   XREF to: 0044d9ae (CONDITIONAL_JUMP)  ; LAB_0044d9ae
    SHR EBX,0x6                         ; 0044d8f5
    MOV EAX,dword ptr [ESI*0x4 + 0x1b1388c] ; 0044d8f8 | DAT_01b1388c | DAT_01b13890
    INC ESI                             ; 0044d8ff
    ADD EBX,EAX                         ; 0044d900
    CMP ESI,0x64                        ; 0044d902
    JL 0x0044d909                       ; 0044d905
        ;   XREF to: 0044d909 (CONDITIONAL_JUMP)  ; LAB_0044d909
    XOR ESI,ESI                         ; 0044d907
    CMP EBX,0x7f                        ; 0044d909
        ;   Label: LAB_0044d909
    JBE 0x0044d913                      ; 0044d90c
        ;   XREF to: 0044d913 (CONDITIONAL_JUMP)  ; LAB_0044d913
    MOV EBX,0x7f                        ; 0044d90e
    XOR BL,0x7f                         ; 0044d913
        ;   Label: LAB_0044d913
    TEST EBP,EBP                        ; 0044d916
    JLE 0x0044d929                      ; 0044d918
        ;   XREF to: 0044d929 (CONDITIONAL_JUMP)  ; LAB_0044d929
    ADD EBX,EBP                         ; 0044d91a
    CMP EBX,0xff                        ; 0044d91c
    JBE 0x0044d929                      ; 0044d922
        ;   XREF to: 0044d929 (CONDITIONAL_JUMP)  ; LAB_0044d929
    MOV EBX,0xff                        ; 0044d924
    ADD EBX,dword ptr [ESP + 0x1c]      ; 0044d929
        ;   Label: LAB_0044d929
    SHR EBX,0x1                         ; 0044d92d
    MOV dword ptr [ESP + 0x1c],EBX      ; 0044d92f
    LEA ECX,[EBX + EBX*0x1]             ; 0044d933
    ADD ECX,EBX                         ; 0044d936
    SHR ECX,0x2                         ; 0044d938
    XOR EDX,EDX                         ; 0044d93b
    MOV EAX,ECX                         ; 0044d93d
    DIV dword ptr [0x01c35818]          ; 0044d93f | DAT_01c35818
    MOV dword ptr [ESP],ECX             ; 0044d945
    MOV dword ptr [ESP + 0x4],ECX       ; 0044d948
    MOV dword ptr [ESP],EAX             ; 0044d94c
    XOR EDX,EDX                         ; 0044d94f
    MOV EAX,ECX                         ; 0044d951
    DIV dword ptr [0x01c35824]          ; 0044d953 | DAT_01c35824
    MOV dword ptr [ESP + 0x8],EBX       ; 0044d959
    MOV dword ptr [ESP + 0x4],EAX       ; 0044d95d
    XOR EDX,EDX                         ; 0044d961
    MOV EAX,EBX                         ; 0044d963
    DIV dword ptr [0x01c35830]          ; 0044d965 | DAT_01c35830
    MOV CL,byte ptr [0x01c35814]        ; 0044d96b | DAT_01c35814
    MOV EBX,dword ptr [ESP]             ; 0044d971
    MOV dword ptr [ESP + 0x8],EAX       ; 0044d974
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044d978
    SHL EBX,CL                          ; 0044d97c
    MOV CL,byte ptr [0x01c35820]        ; 0044d97e | DAT_01c35820
    SHL EAX,CL                          ; 0044d984
    MOV CL,byte ptr [0x01c3582c]        ; 0044d986 | DAT_01c3582c
    OR EBX,EAX                          ; 0044d98c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044d98e
    SHL EAX,CL                          ; 0044d992
    OR EAX,EBX                          ; 0044d994
    XOR EBX,EBX                         ; 0044d996
    MOV word ptr [EDI],AX               ; 0044d998
    MOV BX,AX                           ; 0044d99b
    CMP dword ptr [0x006141b8],0x140    ; 0044d99e | DAT_006141b8
    JLE 0x0044d9ae                      ; 0044d9a8
        ;   XREF to: 0044d9ae (CONDITIONAL_JUMP)  ; LAB_0044d9ae
    MOV word ptr [EDI + 0x2],BX         ; 0044d9aa
    MOV EDX,dword ptr [ESP + 0x30]      ; 0044d9ae
        ;   Label: LAB_0044d9ae
    ADD EDX,0x2                         ; 0044d9b2
    MOV ECX,dword ptr [0x006141b8]      ; 0044d9b5 | DAT_006141b8
    MOV dword ptr [ESP + 0x30],EDX      ; 0044d9bb
    CMP ECX,0x140                       ; 0044d9bf
    JLE 0x0044d9ea                      ; 0044d9c5
        ;   XREF to: 0044d9ea (CONDITIONAL_JUMP)  ; LAB_0044d9ea
    ADD EDI,0x4                         ; 0044d9c7
    MOV ECX,dword ptr [ESP + 0x28]      ; 0044d9ca
        ;   Label: LAB_0044d9ca
    MOV EDX,dword ptr [ESP + 0x48]      ; 0044d9ce
    INC ECX                             ; 0044d9d2
    MOV EBX,dword ptr [EDX + 0x1cc0]    ; 0044d9d3
    MOV dword ptr [ESP + 0x28],ECX      ; 0044d9d9
    CMP ECX,EBX                         ; 0044d9dd
    JGE 0x0044d879                      ; 0044d9df
        ;   XREF to: 0044d879 (CONDITIONAL_JUMP)  ; LAB_0044d879
    JMP 0x0044d8e4                      ; 0044d9e5
        ;   XREF to: 0044d8e4 (UNCONDITIONAL_JUMP)  ; LAB_0044d8e4
    ADD EDI,0x2                         ; 0044d9ea
        ;   Label: LAB_0044d9ea
    JMP 0x0044d9ca                      ; 0044d9ed
        ;   XREF to: 0044d9ca (UNCONDITIONAL_JUMP)  ; LAB_0044d9ca

