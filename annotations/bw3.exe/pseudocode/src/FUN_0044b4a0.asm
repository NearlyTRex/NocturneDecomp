; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0044b4a0(undefined4 param_1,int *param_2,int param_3,int param_4)
;
; Local Variables:
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
; XREF[1]:
;   FUN_0044bb00 at 0044bb24
;
; Referenced Globals:
;   undefined4 DAT_005b9d8e
;   undefined4 DAT_014a02f0
;   undefined4 DAT_014a02f2
;   undefined4 DAT_014a02f4
;   undefined4 DAT_014a02f6
;   undefined4 DAT_014a02f8
;   undefined4 DAT_02d26200
;   undefined4 DAT_02d26204
;   undefined4 DAT_02d26208
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044b4a0
        ;   Label: FUN_0044b4a0
    PUSH ESI                            ; 0044b4a1
    PUSH EDI                            ; 0044b4a2
    PUSH EBP                            ; 0044b4a3
    MOV EBP,ESP                         ; 0044b4a4
    SUB ESP,0x28                        ; 0044b4a6
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044b4a9
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0044b4ac
    CMP dword ptr [ESI + 0x1cd0],0x0    ; 0044b4af
    JNZ 0x0044b69b                      ; 0044b4b6
        ;   XREF to: 0044b69b (CONDITIONAL_JUMP)  ; LAB_0044b69b
    MOV EBX,dword ptr [EAX]             ; 0044b4bc
    MOV EDI,dword ptr [ESI + 0x16c]     ; 0044b4be
    MOV EDX,dword ptr [ESI + 0x170]     ; 0044b4c4
    SUB EBX,EDI                         ; 0044b4ca
    MOV ECX,dword ptr [ESI + 0x174]     ; 0044b4cc
    MOV dword ptr [EBP + -0x28],EBX     ; 0044b4d2
    MOV EBX,dword ptr [EAX + 0x4]       ; 0044b4d5
    MOV EAX,dword ptr [EAX + 0x8]       ; 0044b4d8
    SUB EBX,EDX                         ; 0044b4db
    SUB EAX,ECX                         ; 0044b4dd
    MOV EDX,dword ptr [EBP + -0x28]     ; 0044b4df
    MOV dword ptr [EBP + -0x20],EAX     ; 0044b4e2
    MOV EAX,dword ptr [ESI + 0x180]     ; 0044b4e5
    MOV dword ptr [EBP + -0x24],EBX     ; 0044b4eb
    IMUL EDX                            ; 0044b4ee
    SHRD EAX,EDX,0x10                   ; 0044b4f0
    MOV EDX,dword ptr [EBP + -0x24]     ; 0044b4f4
    MOV EBX,EAX                         ; 0044b4f7
    MOV EAX,dword ptr [ESI + 0x18c]     ; 0044b4f9
    IMUL EDX                            ; 0044b4ff
    SHRD EAX,EDX,0x10                   ; 0044b501
    MOV EDX,dword ptr [EBP + -0x20]     ; 0044b505
    ADD EBX,EAX                         ; 0044b508
    MOV EAX,dword ptr [ESI + 0x198]     ; 0044b50a
    IMUL EDX                            ; 0044b510
    SHRD EAX,EDX,0x10                   ; 0044b512
    ADD EBX,EAX                         ; 0044b516
    MOV dword ptr [0x02d26208],EBX      ; 0044b518 | DAT_02d26208
    TEST EBX,EBX                        ; 0044b51e
    JLE 0x0044b565                      ; 0044b520
        ;   XREF to: 0044b565 (CONDITIONAL_JUMP)  ; LAB_0044b565
    MOV EDX,dword ptr [EBP + -0x28]     ; 0044b522
    MOV EAX,dword ptr [ESI + 0x178]     ; 0044b525
    IMUL EDX                            ; 0044b52b
    SHRD EAX,EDX,0x10                   ; 0044b52d
    MOV EDX,dword ptr [EBP + -0x24]     ; 0044b531
    MOV EBX,EAX                         ; 0044b534
    MOV EAX,dword ptr [ESI + 0x184]     ; 0044b536
    IMUL EDX                            ; 0044b53c
    SHRD EAX,EDX,0x10                   ; 0044b53e
    MOV EDX,dword ptr [EBP + -0x20]     ; 0044b542
    ADD EBX,EAX                         ; 0044b545
    MOV EAX,dword ptr [ESI + 0x190]     ; 0044b547
    IMUL EDX                            ; 0044b54d
    SHRD EAX,EDX,0x10                   ; 0044b54f
    ADD EBX,EAX                         ; 0044b553
    MOV EDI,dword ptr [0x02d26208]      ; 0044b555 | DAT_02d26208
    MOV dword ptr [0x02d26200],EBX      ; 0044b55b | DAT_02d26200
    CMP EBX,EDI                         ; 0044b561
    JL 0x0044b5bf                       ; 0044b563
        ;   XREF to: 0044b5bf (CONDITIONAL_JUMP)  ; LAB_0044b5bf
    MOV EAX,0x14a02f0                   ; 0044b565
        ;   Label: LAB_0044b565
    CMP dword ptr [EAX + 0x8],0x0       ; 0044b56a | DAT_014a02f8 | DAT_02d26208
        ;   Label: LAB_0044b56a
    JLE 0x0044b5b6                      ; 0044b56e
        ;   XREF to: 0044b5b6 (CONDITIONAL_JUMP)  ; LAB_0044b5b6
    MOV EDX,dword ptr [EAX + 0x4]       ; 0044b570 | DAT_014a02f4 | DAT_02d26204
    MOV EBX,dword ptr [ESI + 0x1cc0]    ; 0044b573
    SAR EDX,0x10                        ; 0044b579
    IMUL EBX,EDX                        ; 0044b57c
    MOV EDX,dword ptr [EAX]             ; 0044b57f | DAT_014a02f0 | DAT_02d26200
    SAR EDX,0x10                        ; 0044b581
    ADD EDX,EBX                         ; 0044b584
    MOV EBX,dword ptr [ESI + 0x2f94]    ; 0044b586
    MOV DX,word ptr [EBX + EDX*0x2]     ; 0044b58c
    AND EDX,0xffff                      ; 0044b590
    JZ 0x0044b5b6                       ; 0044b596
        ;   XREF to: 0044b5b6 (CONDITIONAL_JUMP)  ; LAB_0044b5b6
    FILD dword ptr [EAX + 0x8]          ; 0044b598 | DAT_014a02f8 | DAT_02d26208
    FMUL double ptr [0x005b9d8e]        ; 0044b59b | DAT_005b9d8e
    FSTP float ptr [EBP + -0x10]        ; 0044b5a1
    FLD float ptr [EBP + -0x10]         ; 0044b5a4
    FCOMP float ptr [ESI + 0x140]       ; 0044b5a7
    FNSTSW AX                           ; 0044b5ad
    SAHF                                ; 0044b5af
    JC 0x0044b664                       ; 0044b5b0
        ;   XREF to: 0044b664 (CONDITIONAL_JUMP)  ; LAB_0044b664
    XOR EAX,EAX                         ; 0044b5b6
        ;   Label: LAB_0044b5b6
    MOV ESP,EBP                         ; 0044b5b8
    POP EBP                             ; 0044b5ba
    POP EDI                             ; 0044b5bb
    POP ESI                             ; 0044b5bc
    POP EBX                             ; 0044b5bd
    RET                                 ; 0044b5be
    MOV EAX,EDI                         ; 0044b5bf
        ;   Label: LAB_0044b5bf
    NEG EAX                             ; 0044b5c1
    CMP EAX,EBX                         ; 0044b5c3
    JGE 0x0044b565                      ; 0044b5c5
        ;   XREF to: 0044b565 (CONDITIONAL_JUMP)  ; LAB_0044b565
    MOV EDX,dword ptr [EBP + -0x28]     ; 0044b5c7
    MOV EAX,dword ptr [ESI + 0x17c]     ; 0044b5ca
    IMUL EDX                            ; 0044b5d0
    SHRD EAX,EDX,0x10                   ; 0044b5d2
    MOV EDX,dword ptr [EBP + -0x24]     ; 0044b5d6
    MOV EBX,EAX                         ; 0044b5d9
    MOV EAX,dword ptr [ESI + 0x188]     ; 0044b5db
    IMUL EDX                            ; 0044b5e1
    SHRD EAX,EDX,0x10                   ; 0044b5e3
    MOV EDX,dword ptr [EBP + -0x20]     ; 0044b5e7
    ADD EBX,EAX                         ; 0044b5ea
    MOV EAX,dword ptr [ESI + 0x194]     ; 0044b5ec
    IMUL EDX                            ; 0044b5f2
    SHRD EAX,EDX,0x10                   ; 0044b5f4
    ADD EBX,EAX                         ; 0044b5f8
    MOV ECX,dword ptr [0x02d26208]      ; 0044b5fa | DAT_02d26208
    MOV dword ptr [0x02d26204],EBX      ; 0044b600 | DAT_02d26204
    CMP EBX,ECX                         ; 0044b606
    JGE 0x0044b565                      ; 0044b608
        ;   XREF to: 0044b565 (CONDITIONAL_JUMP)  ; LAB_0044b565
    MOV EAX,ECX                         ; 0044b60e
    NEG EAX                             ; 0044b610
    CMP EAX,EBX                         ; 0044b612
    JGE 0x0044b565                      ; 0044b614
        ;   XREF to: 0044b565 (CONDITIONAL_JUMP)  ; LAB_0044b565
    MOV EAX,[0x02d26200]                ; 0044b61a | DAT_02d26200
    MOV EBX,ECX                         ; 0044b61f
    MOV EDX,dword ptr [ESI + 0x1c0]     ; 0044b621
    IMUL EDX                            ; 0044b627
    IDIV EBX                            ; 0044b629
    MOV EDX,dword ptr [ESI + 0x1c8]     ; 0044b62b
    ADD EAX,EDX                         ; 0044b631
    MOV EBX,dword ptr [0x02d26208]      ; 0044b633 | DAT_02d26208
    MOV [0x02d26200],EAX                ; 0044b639 | DAT_02d26200
    MOV EDX,dword ptr [ESI + 0x1c4]     ; 0044b63e
    MOV EAX,[0x02d26204]                ; 0044b644 | DAT_02d26204
    IMUL EDX                            ; 0044b649
    IDIV EBX                            ; 0044b64b
    MOV EDX,dword ptr [ESI + 0x1cc]     ; 0044b64d
    ADD EAX,EDX                         ; 0044b653
    MOV [0x02d26204],EAX                ; 0044b655 | DAT_02d26204
    MOV EAX,0x2d26200                   ; 0044b65a
    JMP 0x0044b56a                      ; 0044b65f
        ;   XREF to: 0044b56a (UNCONDITIONAL_JUMP)  ; LAB_0044b56a
    FLD float ptr [ESI + 0x140]         ; 0044b664
        ;   Label: LAB_0044b664
    FSUB float ptr [EBP + -0x10]        ; 0044b66a
    FDIV float ptr [ESI + 0x140]        ; 0044b66d
    FSTP float ptr [EBP + -0x10]        ; 0044b673
    MOV EAX,dword ptr [EBP + 0x20]      ; 0044b676
    MOV dword ptr [EBP + -0x4],EAX      ; 0044b679
    FILD dword ptr [EBP + -0x4]         ; 0044b67c
    FMUL float ptr [EBP + -0x10]        ; 0044b67f
    FSTP float ptr [EBP + -0x10]        ; 0044b682
    FLD float ptr [EBP + 0xfffffff0]    ; 0044b685
    FISTP dword ptr [EBP + 0x20]        ; 0044b68b
    MOV EAX,dword ptr [EBP + 0x20]      ; 0044b691
    MOV ESP,EBP                         ; 0044b694
    POP EBP                             ; 0044b696
    POP EDI                             ; 0044b697
    POP ESI                             ; 0044b698
    POP EBX                             ; 0044b699
    RET                                 ; 0044b69a
    MOV EBX,dword ptr [EAX]             ; 0044b69b
        ;   Label: LAB_0044b69b
    MOV ECX,dword ptr [ESI + 0x16c]     ; 0044b69d
    MOV EDI,dword ptr [ESI + 0x170]     ; 0044b6a3
    SUB EBX,ECX                         ; 0044b6a9
    MOV EDX,dword ptr [ESI + 0x174]     ; 0044b6ab
    MOV dword ptr [EBP + -0x1c],EBX     ; 0044b6b1
    MOV EBX,dword ptr [EAX + 0x4]       ; 0044b6b4
    MOV EAX,dword ptr [EAX + 0x8]       ; 0044b6b7
    SUB EBX,EDI                         ; 0044b6ba
    SUB EAX,EDX                         ; 0044b6bc
    MOV EDX,dword ptr [EBP + -0x1c]     ; 0044b6be
    MOV dword ptr [EBP + -0x14],EAX     ; 0044b6c1
    MOV EAX,dword ptr [ESI + 0x180]     ; 0044b6c4
    MOV dword ptr [EBP + -0x18],EBX     ; 0044b6ca
    IMUL EDX                            ; 0044b6cd
    SHRD EAX,EDX,0x10                   ; 0044b6cf
    MOV EDX,dword ptr [EBP + -0x18]     ; 0044b6d3
    MOV EBX,EAX                         ; 0044b6d6
    MOV EAX,dword ptr [ESI + 0x18c]     ; 0044b6d8
    IMUL EDX                            ; 0044b6de
    SHRD EAX,EDX,0x10                   ; 0044b6e0
    MOV EDX,dword ptr [EBP + -0x14]     ; 0044b6e4
    ADD EBX,EAX                         ; 0044b6e7
    MOV EAX,dword ptr [ESI + 0x198]     ; 0044b6e9
    IMUL EDX                            ; 0044b6ef
    SHRD EAX,EDX,0x10                   ; 0044b6f1
    ADD EBX,EAX                         ; 0044b6f5
    MOV dword ptr [0x02d26208],EBX      ; 0044b6f7 | DAT_02d26208
    TEST EBX,EBX                        ; 0044b6fd
    JLE 0x0044b74a                      ; 0044b6ff
        ;   XREF to: 0044b74a (CONDITIONAL_JUMP)  ; LAB_0044b74a
    MOV EDX,dword ptr [EBP + -0x1c]     ; 0044b701
    MOV EAX,dword ptr [ESI + 0x178]     ; 0044b704
    IMUL EDX                            ; 0044b70a
    SHRD EAX,EDX,0x10                   ; 0044b70c
    MOV EDX,dword ptr [EBP + -0x18]     ; 0044b710
    MOV EBX,EAX                         ; 0044b713
    MOV EAX,dword ptr [ESI + 0x184]     ; 0044b715
    IMUL EDX                            ; 0044b71b
    SHRD EAX,EDX,0x10                   ; 0044b71d
    MOV EDX,dword ptr [EBP + -0x14]     ; 0044b721
    ADD EBX,EAX                         ; 0044b724
    MOV EAX,dword ptr [ESI + 0x190]     ; 0044b726
    IMUL EDX                            ; 0044b72c
    SHRD EAX,EDX,0x10                   ; 0044b72e
    ADD EBX,EAX                         ; 0044b732
    MOV dword ptr [0x02d26200],EBX      ; 0044b734 | DAT_02d26200
    MOV EAX,EBX                         ; 0044b73a
    MOV EBX,dword ptr [0x02d26208]      ; 0044b73c | DAT_02d26208
    CMP EAX,EBX                         ; 0044b742
    JL 0x0044b9fc                       ; 0044b744
        ;   XREF to: 0044b9fc (CONDITIONAL_JUMP)  ; LAB_0044b9fc
    MOV EAX,0x14a02f0                   ; 0044b74a
        ;   Label: LAB_0044b74a
    MOV EDI,dword ptr [EAX + 0x8]       ; 0044b74f | DAT_014a02f8 | DAT_02d26208
        ;   Label: LAB_0044b74f
    MOV EBX,EAX                         ; 0044b752
    TEST EDI,EDI                        ; 0044b754
    JLE 0x0044b5b6                      ; 0044b756
        ;   XREF to: 0044b5b6 (CONDITIONAL_JUMP)  ; LAB_0044b5b6
    MOV dword ptr [EBP + -0x8],0x1      ; 0044b75c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0044b763 | DAT_014a02f4 | DAT_02d26204
    MOV ECX,dword ptr [ESI + 0x1cc0]    ; 0044b766
    SAR EDX,0x10                        ; 0044b76c
    IMUL ECX,EDX                        ; 0044b76f
    MOV EDX,dword ptr [EAX]             ; 0044b772 | DAT_014a02f0 | DAT_02d26200
    SAR EDX,0x10                        ; 0044b774
    ADD EDX,ECX                         ; 0044b777
    MOV ECX,dword ptr [ESI + 0x2f94]    ; 0044b779
    ADD EDX,EDX                         ; 0044b77f
    ADD EDX,ECX                         ; 0044b781
    XOR EDI,EDI                         ; 0044b783
    MOV DX,word ptr [EDX]               ; 0044b785
    AND EDX,0xffff                      ; 0044b788
    MOV ECX,dword ptr [EAX + 0x8]       ; 0044b78e | DAT_014a02f8
    ADD EDX,0x90                        ; 0044b791
    CMP EDX,ECX                         ; 0044b797
    JG 0x0044baab                       ; 0044b799
        ;   XREF to: 0044baab (CONDITIONAL_JUMP)  ; LAB_0044baab
    INC word ptr [EBX + 0x2]            ; 0044b79f | DAT_014a02f2
        ;   Label: LAB_0044b79f
    MOV EAX,dword ptr [EBX]             ; 0044b7a3 | DAT_014a02f0
    MOV EDX,dword ptr [ESI + 0x1cc0]    ; 0044b7a5
    SAR EAX,0x10                        ; 0044b7ab
    CMP EAX,EDX                         ; 0044b7ae
    JGE 0x0044b82a                      ; 0044b7b0
        ;   XREF to: 0044b82a (CONDITIONAL_JUMP)  ; LAB_0044b82a
    MOV EDX,dword ptr [EBX + 0x4]       ; 0044b7b2 | DAT_014a02f4
    MOV ECX,dword ptr [ESI + 0x1cc0]    ; 0044b7b5
    SAR EDX,0x10                        ; 0044b7bb
    IMUL EDX,ECX                        ; 0044b7be
    ADD EAX,EDX                         ; 0044b7c1
    MOV EDX,dword ptr [ESI + 0x2f94]    ; 0044b7c3
    MOV AX,word ptr [EDX + EAX*0x2]     ; 0044b7c9
    AND EAX,0xffff                      ; 0044b7cd
    MOV EDX,dword ptr [EBX + 0x8]       ; 0044b7d2 | DAT_014a02f8
    ADD EAX,0x90                        ; 0044b7d5
    CMP EAX,EDX                         ; 0044b7da
    JLE 0x0044b827                      ; 0044b7dc
        ;   XREF to: 0044b827 (CONDITIONAL_JUMP)  ; LAB_0044b827
    MOV EAX,dword ptr [EBX]             ; 0044b7de | DAT_014a02f0
    MOV CL,byte ptr [ESI + 0x1cc8]      ; 0044b7e0
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 0044b7e6
    SAR EAX,CL                          ; 0044b7ec
    MOV CL,byte ptr [ESI + 0x1ccc]      ; 0044b7ee
    AND EDX,EAX                         ; 0044b7f4
    MOV EAX,dword ptr [EBX + 0x4]       ; 0044b7f6 | DAT_014a02f4
    SAR EAX,CL                          ; 0044b7f9
    AND EAX,dword ptr [ESI + 0x1c68]    ; 0044b7fb
    MOV CL,byte ptr [ESI + 0x1c60]      ; 0044b801
    SHL EAX,CL                          ; 0044b807
    ADD EDX,EAX                         ; 0044b809
    MOV EAX,dword ptr [ESI + 0x1c54]    ; 0044b80b
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0044b811
    AND EAX,0xff                        ; 0044b814
    SHL EAX,0xa                         ; 0044b819
    MOV EDX,dword ptr [EBP + 0x20]      ; 0044b81c
    IMUL EDX                            ; 0044b81f
    SHRD EAX,EDX,0x10                   ; 0044b821
    ADD EDI,EAX                         ; 0044b825
    INC dword ptr [EBP + -0x8]          ; 0044b827
        ;   Label: LAB_0044b827
    MOV EDX,dword ptr [EBX]             ; 0044b82a | DAT_014a02f0
        ;   Label: LAB_0044b82a
    SUB EDX,0x20000                     ; 0044b82c
    MOV EAX,EDX                         ; 0044b832
    SAR EAX,0x10                        ; 0044b834
    MOV dword ptr [EBX],EDX             ; 0044b837 | DAT_014a02f0
    TEST EAX,EAX                        ; 0044b839
    JLE 0x0044b8bc                      ; 0044b83b
        ;   XREF to: 0044b8bc (CONDITIONAL_JUMP)  ; LAB_0044b8bc
    MOV EDX,dword ptr [EBX + 0x4]       ; 0044b841 | DAT_014a02f4
    MOV ECX,dword ptr [ESI + 0x1cc0]    ; 0044b844
    SAR EDX,0x10                        ; 0044b84a
    IMUL EDX,ECX                        ; 0044b84d
    ADD EAX,EDX                         ; 0044b850
    LEA EDX,[EAX + EAX*0x1]             ; 0044b852
    MOV EAX,dword ptr [ESI + 0x2f94]    ; 0044b855
    MOV AX,word ptr [EDX + EAX*0x1]     ; 0044b85b
    AND EAX,0xffff                      ; 0044b85f
    MOV EDX,dword ptr [EBX + 0x8]       ; 0044b864 | DAT_014a02f8
    ADD EAX,0x90                        ; 0044b867
    CMP EAX,EDX                         ; 0044b86c
    JLE 0x0044b8b9                      ; 0044b86e
        ;   XREF to: 0044b8b9 (CONDITIONAL_JUMP)  ; LAB_0044b8b9
    MOV EAX,dword ptr [EBX]             ; 0044b870 | DAT_014a02f0
    MOV CL,byte ptr [ESI + 0x1cc8]      ; 0044b872
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 0044b878
    SAR EAX,CL                          ; 0044b87e
    MOV CL,byte ptr [ESI + 0x1ccc]      ; 0044b880
    AND EDX,EAX                         ; 0044b886
    MOV EAX,dword ptr [EBX + 0x4]       ; 0044b888 | DAT_014a02f4
    SAR EAX,CL                          ; 0044b88b
    AND EAX,dword ptr [ESI + 0x1c68]    ; 0044b88d
    MOV CL,byte ptr [ESI + 0x1c60]      ; 0044b893
    SHL EAX,CL                          ; 0044b899
    ADD EAX,EDX                         ; 0044b89b
    MOV EDX,dword ptr [ESI + 0x1c54]    ; 0044b89d
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0044b8a3
    AND EAX,0xff                        ; 0044b8a6
    SHL EAX,0xa                         ; 0044b8ab
    MOV EDX,dword ptr [EBP + 0x20]      ; 0044b8ae
    IMUL EDX                            ; 0044b8b1
    SHRD EAX,EDX,0x10                   ; 0044b8b3
    ADD EDI,EAX                         ; 0044b8b7
    INC dword ptr [EBP + -0x8]          ; 0044b8b9
        ;   Label: LAB_0044b8b9
    MOV AX,word ptr [EBX + 0x6]         ; 0044b8bc | DAT_014a02f6
        ;   Label: LAB_0044b8bc
    MOV CX,word ptr [EBX + 0x2]         ; 0044b8c0 | DAT_014a02f2
    INC EAX                             ; 0044b8c4
    INC ECX                             ; 0044b8c5
    MOV word ptr [EBX + 0x6],AX         ; 0044b8c6 | DAT_014a02f6
    MOV word ptr [EBX + 0x2],CX         ; 0044b8ca | DAT_014a02f2
    MOV EAX,dword ptr [EBX + 0x4]       ; 0044b8ce | DAT_014a02f4
    MOV EDX,dword ptr [ESI + 0x1cc4]    ; 0044b8d1
    SAR EAX,0x10                        ; 0044b8d7
    CMP EAX,EDX                         ; 0044b8da
    JGE 0x0044b961                      ; 0044b8dc
        ;   XREF to: 0044b961 (CONDITIONAL_JUMP)  ; LAB_0044b961
    MOV EDX,dword ptr [ESI + 0x1cc0]    ; 0044b8e2
    IMUL EDX,EAX                        ; 0044b8e8
    MOV EAX,dword ptr [EBX]             ; 0044b8eb | DAT_014a02f0
    SAR EAX,0x10                        ; 0044b8ed
    ADD EAX,EDX                         ; 0044b8f0
    MOV EDX,dword ptr [ESI + 0x2f94]    ; 0044b8f2
    MOV AX,word ptr [EDX + EAX*0x2]     ; 0044b8f8
    AND EAX,0xffff                      ; 0044b8fc
    MOV ECX,dword ptr [EBX + 0x8]       ; 0044b901 | DAT_014a02f8
    ADD EAX,0x90                        ; 0044b904
    CMP EAX,ECX                         ; 0044b909
    JLE 0x0044b95e                      ; 0044b90b
        ;   XREF to: 0044b95e (CONDITIONAL_JUMP)  ; LAB_0044b95e
    MOV EAX,dword ptr [EBX]             ; 0044b90d | DAT_014a02f0
    MOV CL,byte ptr [ESI + 0x1cc8]      ; 0044b90f
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 0044b915
    SAR EAX,CL                          ; 0044b91b
    AND EDX,EAX                         ; 0044b91d
    MOV CL,byte ptr [ESI + 0x1ccc]      ; 0044b91f
    MOV dword ptr [EBP + -0xc],EDX      ; 0044b925
    MOV EAX,dword ptr [EBX + 0x4]       ; 0044b928 | DAT_014a02f4
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 0044b92b
    SAR EAX,CL                          ; 0044b931
    MOV CL,byte ptr [ESI + 0x1c60]      ; 0044b933
    AND EAX,EDX                         ; 0044b939
    SHL EAX,CL                          ; 0044b93b
    MOV ECX,dword ptr [EBP + -0xc]      ; 0044b93d
    MOV EDX,dword ptr [ESI + 0x1c54]    ; 0044b940
    ADD EAX,ECX                         ; 0044b946
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0044b948
    AND EAX,0xff                        ; 0044b94b
    SHL EAX,0xa                         ; 0044b950
    MOV EDX,dword ptr [EBP + 0x20]      ; 0044b953
    IMUL EDX                            ; 0044b956
    SHRD EAX,EDX,0x10                   ; 0044b958
    ADD EDI,EAX                         ; 0044b95c
    INC dword ptr [EBP + -0x8]          ; 0044b95e
        ;   Label: LAB_0044b95e
    MOV EDX,dword ptr [EBX + 0x4]       ; 0044b961 | DAT_014a02f4
        ;   Label: LAB_0044b961
    SUB EDX,0x20000                     ; 0044b964
    MOV dword ptr [EBX + 0x4],EDX       ; 0044b96a | DAT_014a02f4
    TEST EDX,EDX                        ; 0044b96d
    JLE 0x0044b9e9                      ; 0044b96f
        ;   XREF to: 0044b9e9 (CONDITIONAL_JUMP)  ; LAB_0044b9e9
    SAR EDX,0x10                        ; 0044b971
    IMUL EDX,dword ptr [ESI + 0x1cc0]   ; 0044b974
    MOV EAX,dword ptr [EBX]             ; 0044b97b | DAT_014a02f0
    SAR EAX,0x10                        ; 0044b97d
    ADD EAX,EDX                         ; 0044b980
    MOV EDX,dword ptr [ESI + 0x2f94]    ; 0044b982
    MOV AX,word ptr [EDX + EAX*0x2]     ; 0044b988
    AND EAX,0xffff                      ; 0044b98c
    MOV EDX,dword ptr [EBX + 0x8]       ; 0044b991 | DAT_014a02f8
    ADD EAX,0x90                        ; 0044b994
    CMP EAX,EDX                         ; 0044b999
    JLE 0x0044b9e6                      ; 0044b99b
        ;   XREF to: 0044b9e6 (CONDITIONAL_JUMP)  ; LAB_0044b9e6
    MOV EAX,dword ptr [EBX]             ; 0044b99d | DAT_014a02f0
    MOV CL,byte ptr [ESI + 0x1cc8]      ; 0044b99f
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 0044b9a5
    SAR EAX,CL                          ; 0044b9ab
    MOV CL,byte ptr [ESI + 0x1ccc]      ; 0044b9ad
    AND EDX,EAX                         ; 0044b9b3
    MOV EAX,dword ptr [EBX + 0x4]       ; 0044b9b5 | DAT_014a02f4
    SAR EAX,CL                          ; 0044b9b8
    AND EAX,dword ptr [ESI + 0x1c68]    ; 0044b9ba
    MOV CL,byte ptr [ESI + 0x1c60]      ; 0044b9c0
    SHL EAX,CL                          ; 0044b9c6
    ADD EDX,EAX                         ; 0044b9c8
    MOV EAX,dword ptr [ESI + 0x1c54]    ; 0044b9ca
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0044b9d0
    AND EAX,0xff                        ; 0044b9d3
    SHL EAX,0xa                         ; 0044b9d8
    MOV EDX,dword ptr [EBP + 0x20]      ; 0044b9db
    IMUL EDX                            ; 0044b9de
    SHRD EAX,EDX,0x10                   ; 0044b9e0
    ADD EDI,EAX                         ; 0044b9e4
    INC dword ptr [EBP + -0x8]          ; 0044b9e6
        ;   Label: LAB_0044b9e6
    MOV ESI,dword ptr [EBP + -0x8]      ; 0044b9e9
        ;   Label: LAB_0044b9e9
    MOV EDX,EDI                         ; 0044b9ec
    MOV EAX,EDI                         ; 0044b9ee
    SAR EDX,0x1f                        ; 0044b9f0
    IDIV ESI                            ; 0044b9f3
    MOV ESP,EBP                         ; 0044b9f5
    POP EBP                             ; 0044b9f7
    POP EDI                             ; 0044b9f8
    POP ESI                             ; 0044b9f9
    POP EBX                             ; 0044b9fa
    RET                                 ; 0044b9fb
    MOV EAX,EBX                         ; 0044b9fc
        ;   Label: LAB_0044b9fc
    MOV EDI,dword ptr [0x02d26200]      ; 0044b9fe | DAT_02d26200
    NEG EAX                             ; 0044ba04
    CMP EAX,EDI                         ; 0044ba06
    JGE 0x0044b74a                      ; 0044ba08
        ;   XREF to: 0044b74a (CONDITIONAL_JUMP)  ; LAB_0044b74a
    MOV EDX,dword ptr [EBP + -0x1c]     ; 0044ba0e
    MOV EAX,dword ptr [ESI + 0x17c]     ; 0044ba11
    IMUL EDX                            ; 0044ba17
    SHRD EAX,EDX,0x10                   ; 0044ba19
    MOV EDX,dword ptr [EBP + -0x18]     ; 0044ba1d
    MOV EBX,EAX                         ; 0044ba20
    MOV EAX,dword ptr [ESI + 0x188]     ; 0044ba22
    IMUL EDX                            ; 0044ba28
    SHRD EAX,EDX,0x10                   ; 0044ba2a
    MOV EDX,dword ptr [EBP + -0x14]     ; 0044ba2e
    ADD EBX,EAX                         ; 0044ba31
    MOV EAX,dword ptr [ESI + 0x194]     ; 0044ba33
    IMUL EDX                            ; 0044ba39
    SHRD EAX,EDX,0x10                   ; 0044ba3b
    ADD EBX,EAX                         ; 0044ba3f
    MOV EDX,dword ptr [0x02d26208]      ; 0044ba41 | DAT_02d26208
    MOV dword ptr [0x02d26204],EBX      ; 0044ba47 | DAT_02d26204
    CMP EBX,EDX                         ; 0044ba4d
    JGE 0x0044b74a                      ; 0044ba4f
        ;   XREF to: 0044b74a (CONDITIONAL_JUMP)  ; LAB_0044b74a
    MOV EAX,EDX                         ; 0044ba55
    NEG EAX                             ; 0044ba57
    CMP EAX,EBX                         ; 0044ba59
    JGE 0x0044b74a                      ; 0044ba5b
        ;   XREF to: 0044b74a (CONDITIONAL_JUMP)  ; LAB_0044b74a
    MOV EAX,[0x02d26200]                ; 0044ba61 | DAT_02d26200
    MOV EBX,EDX                         ; 0044ba66
    MOV EDX,dword ptr [ESI + 0x1c0]     ; 0044ba68
    IMUL EDX                            ; 0044ba6e
    IDIV EBX                            ; 0044ba70
    MOV EDX,dword ptr [ESI + 0x1c8]     ; 0044ba72
    ADD EAX,EDX                         ; 0044ba78
    MOV EBX,dword ptr [0x02d26208]      ; 0044ba7a | DAT_02d26208
    MOV [0x02d26200],EAX                ; 0044ba80 | DAT_02d26200
    MOV EDX,dword ptr [ESI + 0x1c4]     ; 0044ba85
    MOV EAX,[0x02d26204]                ; 0044ba8b | DAT_02d26204
    IMUL EDX                            ; 0044ba90
    IDIV EBX                            ; 0044ba92
    MOV EDX,dword ptr [ESI + 0x1cc]     ; 0044ba94
    ADD EAX,EDX                         ; 0044ba9a
    MOV [0x02d26204],EAX                ; 0044ba9c | DAT_02d26204
    MOV EAX,0x2d26200                   ; 0044baa1
    JMP 0x0044b74f                      ; 0044baa6
        ;   XREF to: 0044b74f (UNCONDITIONAL_JUMP)  ; LAB_0044b74f
    MOV EDI,dword ptr [EAX]             ; 0044baab | DAT_014a02f0
        ;   Label: LAB_0044baab
    MOV CL,byte ptr [ESI + 0x1cc8]      ; 0044baad
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 0044bab3
    MOV EAX,dword ptr [EAX + 0x4]       ; 0044bab9 | DAT_014a02f4
    SAR EDI,CL                          ; 0044babc
    MOV CL,byte ptr [ESI + 0x1ccc]      ; 0044babe
    AND EDX,EDI                         ; 0044bac4
    MOV EDI,dword ptr [ESI + 0x1c68]    ; 0044bac6
    SAR EAX,CL                          ; 0044bacc
    MOV CL,byte ptr [ESI + 0x1c60]      ; 0044bace
    AND EAX,EDI                         ; 0044bad4
    SHL EAX,CL                          ; 0044bad6
    ADD EAX,EDX                         ; 0044bad8
    MOV EDX,dword ptr [ESI + 0x1c54]    ; 0044bada
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0044bae0
    AND EAX,0xff                        ; 0044bae3
    SHL EAX,0xa                         ; 0044bae8
    MOV EDX,dword ptr [EBP + 0x20]      ; 0044baeb
    IMUL EDX                            ; 0044baee
    SHRD EAX,EDX,0x10                   ; 0044baf0
    MOV EDI,EAX                         ; 0044baf4
    JMP 0x0044b79f                      ; 0044baf6
        ;   XREF to: 0044b79f (UNCONDITIONAL_JUMP)  ; LAB_0044b79f

