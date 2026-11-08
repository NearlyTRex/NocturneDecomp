; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00442600(byte *param_1,int param_2,uint param_3,int *param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_00443290 at 004432f4
;   FUN_004439b0 at 004439ea
;
; Called Functions:
;   FUN_004427a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442600
        ;   Label: FUN_00442600
    PUSH ESI                            ; 00442601
    PUSH EDI                            ; 00442602
    PUSH EBP                            ; 00442603
    SUB ESP,0x4                         ; 00442604
    MOV EDI,dword ptr [ESP + 0x18]      ; 00442607
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0044260b
    MOV ESI,dword ptr [ESP + 0x24]      ; 0044260f
    PUSH ESI                            ; 00442613
    PUSH EDI                            ; 00442614
    CALL FUN_004427a0                   ; 00442615
        ;   XREF to: 004427a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004427a0()
    ADD ESP,0x8                         ; 0044261a
    TEST EAX,EAX                        ; 0044261d
    JL 0x00442659                       ; 0044261f
        ;   XREF to: 00442659 (CONDITIONAL_JUMP)  ; LAB_00442659
    MOV EDX,dword ptr [EDI]             ; 00442621
    TEST EDX,EDX                        ; 00442623
    JLE 0x00442706                      ; 00442625
        ;   XREF to: 00442706 (CONDITIONAL_JUMP)  ; LAB_00442706
    MOV EAX,0x8                         ; 0044262b
    SUB EAX,EDX                         ; 00442630
    MOV dword ptr [ESP],EAX             ; 00442632
    CMP EBX,EAX                         ; 00442635
    JGE 0x00442692                      ; 00442637
        ;   XREF to: 00442692 (CONDITIONAL_JUMP)  ; LAB_00442692
    MOV EAX,dword ptr [ESP + 0x20]      ; 00442639
    MOV CL,byte ptr [EDI]               ; 0044263d
    MOV EDX,dword ptr [EDI + 0x4]       ; 0044263f
    SHL EAX,CL                          ; 00442642
    MOV ECX,dword ptr [EDI]             ; 00442644
    OR EDX,EAX                          ; 00442646
    ADD ECX,EBX                         ; 00442648
    MOV dword ptr [EDI + 0x4],EDX       ; 0044264a
    XOR EAX,EAX                         ; 0044264d
    MOV dword ptr [EDI],ECX             ; 0044264f
    ADD ESP,0x4                         ; 00442651
        ;   Label: LAB_00442651
    POP EBP                             ; 00442654
    POP EDI                             ; 00442655
    POP ESI                             ; 00442656
    POP EBX                             ; 00442657
    RET                                 ; 00442658
    CMP EAX,-0x1                        ; 00442659
        ;   Label: LAB_00442659
    JNZ 0x0044268b                      ; 0044265c
        ;   XREF to: 0044268b (CONDITIONAL_JUMP)  ; LAB_0044268b
    MOV EAX,dword ptr [EDI]             ; 0044265e
    ADD EAX,EBX                         ; 00442660
    CMP EAX,0x20                        ; 00442662
    JL 0x0044266e                       ; 00442665
        ;   XREF to: 0044266e (CONDITIONAL_JUMP)  ; LAB_0044266e
    MOV EAX,0xffffffff                  ; 00442667
        ;   Label: LAB_00442667
    JMP 0x00442651                      ; 0044266c
        ;   XREF to: 00442651 (UNCONDITIONAL_JUMP)  ; LAB_00442651
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044266e
        ;   Label: LAB_0044266e
    MOV CL,byte ptr [EDI]               ; 00442672
    MOV ESI,dword ptr [EDI + 0x4]       ; 00442674
    MOV EBP,dword ptr [EDI]             ; 00442677
    SHL EAX,CL                          ; 00442679
    ADD EBP,EBX                         ; 0044267b
    OR ESI,EAX                          ; 0044267d
    MOV dword ptr [EDI],EBP             ; 0044267f
    MOV EAX,0xfffffffe                  ; 00442681
    MOV dword ptr [EDI + 0x4],ESI       ; 00442686
    JMP 0x00442651                      ; 00442689
        ;   XREF to: 00442651 (UNCONDITIONAL_JUMP)  ; LAB_00442651
    MOV EAX,0xfffffffd                  ; 0044268b
        ;   Label: LAB_0044268b
    JMP 0x00442651                      ; 00442690
        ;   XREF to: 00442651 (UNCONDITIONAL_JUMP)  ; LAB_00442651
    MOV AL,byte ptr [ESP + 0x20]        ; 00442692
        ;   Label: LAB_00442692
    MOV CL,byte ptr [EDI]               ; 00442696
    SHL AL,CL                           ; 00442698
    MOV AH,byte ptr [EDI + 0x4]         ; 0044269a
    MOV EDX,dword ptr [ESI]             ; 0044269d
    OR AL,AH                            ; 0044269f
    AND EAX,0xff                        ; 004426a1
    PUSH EAX                            ; 004426a6
    PUSH ESI                            ; 004426a7
    CALL dword ptr [EDX + 0x4]          ; 004426a8
    ADD ESP,0x8                         ; 004426ab
    CMP EAX,-0x1                        ; 004426ae
    JNZ 0x004426df                      ; 004426b1
        ;   XREF to: 004426df (CONDITIONAL_JUMP)  ; LAB_004426df
    MOV EAX,dword ptr [EDI]             ; 004426b3
    ADD EAX,EBX                         ; 004426b5
    CMP EAX,0x20                        ; 004426b7
    JGE 0x00442667                      ; 004426ba
        ;   XREF to: 00442667 (CONDITIONAL_JUMP)  ; LAB_00442667
    MOV EAX,dword ptr [ESP + 0x20]      ; 004426bc
    MOV CL,byte ptr [EDI]               ; 004426c0
    MOV ESI,dword ptr [EDI + 0x4]       ; 004426c2
    MOV EBP,dword ptr [EDI]             ; 004426c5
    SHL EAX,CL                          ; 004426c7
    ADD EBP,EBX                         ; 004426c9
    OR ESI,EAX                          ; 004426cb
    MOV dword ptr [EDI],EBP             ; 004426cd
    MOV EAX,0xfffffffe                  ; 004426cf
    MOV dword ptr [EDI + 0x4],ESI       ; 004426d4
    ADD ESP,0x4                         ; 004426d7
    POP EBP                             ; 004426da
    POP EDI                             ; 004426db
    POP ESI                             ; 004426dc
    POP EBX                             ; 004426dd
    RET                                 ; 004426de
    TEST EAX,EAX                        ; 004426df
        ;   Label: LAB_004426df
    JL 0x0044268b                       ; 004426e1
        ;   XREF to: 0044268b (CONDITIONAL_JUMP)  ; LAB_0044268b
    MOV EAX,dword ptr [ESP]             ; 004426e3
    CMP EBX,EAX                         ; 004426e6
    JZ 0x0044273c                       ; 004426e8
        ;   XREF to: 0044273c (CONDITIONAL_JUMP)  ; LAB_0044273c
    MOV CL,byte ptr [ESP]               ; 004426ea
    MOV dword ptr [EDI],0x0             ; 004426ed
    MOV EDX,dword ptr [ESP + 0x20]      ; 004426f3
    MOV dword ptr [EDI + 0x4],0x0       ; 004426f7
    SHR EDX,CL                          ; 004426fe
    SUB EBX,EAX                         ; 00442700
    MOV dword ptr [ESP + 0x20],EDX      ; 00442702
    XOR ECX,ECX                         ; 00442706
        ;   Label: LAB_00442706
    CMP EBX,0x8                         ; 00442708
    JL 0x00442729                       ; 0044270b
        ;   XREF to: 00442729 (CONDITIONAL_JUMP)  ; LAB_00442729
    XOR EAX,EAX                         ; 0044270d
        ;   Label: LAB_0044270d
    MOV AL,byte ptr [ESP + 0x20]        ; 0044270f
    PUSH EAX                            ; 00442713
    MOV EDX,dword ptr [ESI]             ; 00442714
    PUSH ESI                            ; 00442716
    CALL dword ptr [EDX + 0x4]          ; 00442717
    ADD ESP,0x8                         ; 0044271a
    MOV ECX,EAX                         ; 0044271d
    CMP EAX,-0x1                        ; 0044271f
    JNZ 0x00442753                      ; 00442722
        ;   XREF to: 00442753 (CONDITIONAL_JUMP)  ; LAB_00442753
    MOV ECX,0xfffffffe                  ; 00442724
    MOV EAX,dword ptr [ESP + 0x20]      ; 00442729
        ;   Label: LAB_00442729
    MOV dword ptr [EDI],EBX             ; 0044272d
    MOV dword ptr [EDI + 0x4],EAX       ; 0044272f
    MOV EAX,ECX                         ; 00442732
    ADD ESP,0x4                         ; 00442734
    POP EBP                             ; 00442737
    POP EDI                             ; 00442738
    POP ESI                             ; 00442739
    POP EBX                             ; 0044273a
    RET                                 ; 0044273b
    MOV dword ptr [EDI + 0x4],0x0       ; 0044273c
        ;   Label: LAB_0044273c
    MOV dword ptr [EDI],0x0             ; 00442743
    XOR EAX,EAX                         ; 00442749
    ADD ESP,0x4                         ; 0044274b
    POP EBP                             ; 0044274e
    POP EDI                             ; 0044274f
    POP ESI                             ; 00442750
    POP EBX                             ; 00442751
    RET                                 ; 00442752
    TEST EAX,EAX                        ; 00442753
        ;   Label: LAB_00442753
    JL 0x0044277d                       ; 00442755
        ;   XREF to: 0044277d (CONDITIONAL_JUMP)  ; LAB_0044277d
    MOV EAX,dword ptr [ESP + 0x20]      ; 00442757
    SHR EAX,0x8                         ; 0044275b
    SUB EBX,0x8                         ; 0044275e
    MOV dword ptr [ESP + 0x20],EAX      ; 00442761
    CMP EBX,0x8                         ; 00442765
    JGE 0x0044270d                      ; 00442768
        ;   XREF to: 0044270d (CONDITIONAL_JUMP)  ; LAB_0044270d
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044276a
    MOV dword ptr [EDI],EBX             ; 0044276e
    MOV dword ptr [EDI + 0x4],EAX       ; 00442770
    MOV EAX,ECX                         ; 00442773
    ADD ESP,0x4                         ; 00442775
    POP EBP                             ; 00442778
    POP EDI                             ; 00442779
    POP ESI                             ; 0044277a
    POP EBX                             ; 0044277b
    RET                                 ; 0044277c
    MOV ECX,0xfffffffd                  ; 0044277d
        ;   Label: LAB_0044277d
    MOV EAX,dword ptr [ESP + 0x20]      ; 00442782
    MOV dword ptr [EDI],EBX             ; 00442786
    MOV dword ptr [EDI + 0x4],EAX       ; 00442788
    MOV EAX,ECX                         ; 0044278b
    ADD ESP,0x4                         ; 0044278d
    POP EBP                             ; 00442790
    POP EDI                             ; 00442791
    POP ESI                             ; 00442792
    POP EBX                             ; 00442793
    RET                                 ; 00442794

