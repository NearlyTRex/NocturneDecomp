; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00401710(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
;
;
; XREF[2]:
;   FUN_00409590 at 0040982b
;   FUN_004610a0 at 0046138d
;
; Called Functions:
;   FUN_00401680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401710
        ;   Label: FUN_00401710
    PUSH ESI                            ; 00401711
    PUSH EDI                            ; 00401712
    PUSH EBP                            ; 00401713
    SUB ESP,0x1c                        ; 00401714
    MOV EDI,dword ptr [ESP + 0x30]      ; 00401717
    MOV ESI,dword ptr [ESP + 0x34]      ; 0040171b
    MOV EBP,dword ptr [ESP + 0x38]      ; 0040171f
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00401723
    MOV EBX,dword ptr [ESP + 0x40]      ; 00401727
    MOV EAX,dword ptr [ESP + 0x44]      ; 0040172b
    MOV dword ptr [ESP + 0x8],0x1       ; 0040172f
    CMP ESI,EBX                         ; 00401737
    JLE 0x0040174d                      ; 00401739
        ;   XREF to: 0040174d (CONDITIONAL_JUMP)  ; LAB_0040174d
    MOV EDX,EDI                         ; 0040173b
    MOV EDI,ECX                         ; 0040173d
    MOV ECX,EDX                         ; 0040173f
    MOV EDX,ESI                         ; 00401741
    MOV ESI,EBX                         ; 00401743
    MOV EBX,EDX                         ; 00401745
    MOV EDX,EBP                         ; 00401747
    MOV EBP,EAX                         ; 00401749
    MOV EAX,EDX                         ; 0040174b
    SUB ECX,EDI                         ; 0040174d
        ;   Label: LAB_0040174d
    SUB EBX,ESI                         ; 0040174f
    MOV dword ptr [ESP + 0x18],ECX      ; 00401751
    MOV dword ptr [ESP + 0x14],EBX      ; 00401755
    TEST ECX,ECX                        ; 00401759
    JL 0x004017d7                       ; 0040175b
        ;   XREF to: 004017d7 (CONDITIONAL_JUMP)  ; LAB_004017d7
    MOV ECX,dword ptr [ESP + 0x14]      ; 00401761
        ;   Label: LAB_00401761
    MOV EBX,EBP                         ; 00401765
    MOV EDX,EAX                         ; 00401767
    MOV EAX,dword ptr [ESP + 0x18]      ; 00401769
    SUB EDX,EBP                         ; 0040176d
    CMP EAX,ECX                         ; 0040176f
    JLE 0x004017ed                      ; 00401771
        ;   XREF to: 004017ed (CONDITIONAL_JUMP)  ; LAB_004017ed
    LEA EBP,[ECX + ECX*0x1]             ; 00401777
    SUB EBP,EAX                         ; 0040177a
    LEA ECX,[EAX + 0x1]                 ; 0040177c
    MOV EAX,EDX                         ; 0040177f
    SAR EDX,0x1f                        ; 00401781
    IDIV ECX                            ; 00401784
    MOV ECX,dword ptr [ESP + 0x18]      ; 00401786
    XOR EDX,EDX                         ; 0040178a
    MOV dword ptr [ESP],EAX             ; 0040178c
    MOV dword ptr [ESP + 0x10],EDX      ; 0040178f
    TEST ECX,ECX                        ; 00401793
    JL 0x004017cf                       ; 00401795
        ;   XREF to: 004017cf (CONDITIONAL_JUMP)  ; LAB_004017cf
    PUSH EBX                            ; 00401797
        ;   Label: LAB_00401797
    PUSH ESI                            ; 00401798
    PUSH EDI                            ; 00401799
    CALL FUN_00401680                   ; 0040179a
        ;   XREF to: 00401680 (UNCONDITIONAL_CALL)  ; undefined FUN_00401680()
    ADD ESP,0xc                         ; 0040179f
    TEST EBP,EBP                        ; 004017a2
    JLE 0x004017ad                      ; 004017a4
        ;   XREF to: 004017ad (CONDITIONAL_JUMP)  ; LAB_004017ad
    MOV EAX,dword ptr [ESP + 0x18]      ; 004017a6
    INC ESI                             ; 004017aa
    SUB EBP,EAX                         ; 004017ab
    MOV EDX,dword ptr [ESP + 0x8]       ; 004017ad
        ;   Label: LAB_004017ad
    MOV ECX,dword ptr [ESP + 0x14]      ; 004017b1
    MOV EAX,dword ptr [ESP]             ; 004017b5
    ADD EDI,EDX                         ; 004017b8
    ADD EBP,ECX                         ; 004017ba
    MOV EDX,dword ptr [ESP + 0x10]      ; 004017bc
    ADD EBX,EAX                         ; 004017c0
    INC EDX                             ; 004017c2
    MOV ECX,dword ptr [ESP + 0x18]      ; 004017c3
    MOV dword ptr [ESP + 0x10],EDX      ; 004017c7
    CMP EDX,ECX                         ; 004017cb
    JLE 0x00401797                      ; 004017cd
        ;   XREF to: 00401797 (CONDITIONAL_JUMP)  ; LAB_00401797
    ADD ESP,0x1c                        ; 004017cf
        ;   Label: LAB_004017cf
    POP EBP                             ; 004017d2
    POP EDI                             ; 004017d3
    POP ESI                             ; 004017d4
    POP EBX                             ; 004017d5
    RET                                 ; 004017d6
    MOV EBX,ECX                         ; 004017d7
        ;   Label: LAB_004017d7
    MOV EDX,0xffffffff                  ; 004017d9
    NEG EBX                             ; 004017de
    MOV dword ptr [ESP + 0x8],EDX       ; 004017e0
    MOV dword ptr [ESP + 0x18],EBX      ; 004017e4
    JMP 0x00401761                      ; 004017e8
        ;   XREF to: 00401761 (UNCONDITIONAL_JUMP)  ; LAB_00401761
    LEA EBP,[EAX + EAX*0x1]             ; 004017ed
        ;   Label: LAB_004017ed
    MOV EAX,EDX                         ; 004017f0
    SUB EBP,ECX                         ; 004017f2
    INC ECX                             ; 004017f4
    SAR EDX,0x1f                        ; 004017f5
    IDIV ECX                            ; 004017f8
    MOV ECX,dword ptr [ESP + 0x14]      ; 004017fa
    XOR EDX,EDX                         ; 004017fe
    MOV dword ptr [ESP + 0x4],EAX       ; 00401800
    MOV dword ptr [ESP + 0xc],EDX       ; 00401804
    TEST ECX,ECX                        ; 00401808
    JL 0x004017cf                       ; 0040180a
        ;   XREF to: 004017cf (CONDITIONAL_JUMP)  ; LAB_004017cf
    PUSH EBX                            ; 0040180c
        ;   Label: LAB_0040180c
    PUSH ESI                            ; 0040180d
    PUSH EDI                            ; 0040180e
    CALL FUN_00401680                   ; 0040180f
        ;   XREF to: 00401680 (UNCONDITIONAL_CALL)  ; undefined FUN_00401680()
    ADD ESP,0xc                         ; 00401814
    TEST EBP,EBP                        ; 00401817
    JLE 0x00401827                      ; 00401819
        ;   XREF to: 00401827 (CONDITIONAL_JUMP)  ; LAB_00401827
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040181b
    MOV ECX,dword ptr [ESP + 0x8]       ; 0040181f
    SUB EBP,EAX                         ; 00401823
    ADD EDI,ECX                         ; 00401825
    MOV EAX,dword ptr [ESP + 0x18]      ; 00401827
        ;   Label: LAB_00401827
    MOV EDX,dword ptr [ESP + 0x4]       ; 0040182b
    MOV ECX,dword ptr [ESP + 0xc]       ; 0040182f
    INC ESI                             ; 00401833
    INC ECX                             ; 00401834
    ADD EBP,EAX                         ; 00401835
    ADD EBX,EDX                         ; 00401837
    MOV EDX,dword ptr [ESP + 0x14]      ; 00401839
    MOV dword ptr [ESP + 0xc],ECX       ; 0040183d
    CMP ECX,EDX                         ; 00401841
    JG 0x004017cf                       ; 00401843
        ;   XREF to: 004017cf (CONDITIONAL_JUMP)  ; LAB_004017cf
    JMP 0x0040180c                      ; 00401845
        ;   XREF to: 0040180c (UNCONDITIONAL_JUMP)  ; LAB_0040180c

