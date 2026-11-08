; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a95c0(void)
;
;
; XREF[1]:
;   FUN_005a3780 at 005a384d
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005a95c0
        ;   Label: FUN_005a95c0
    PUSH EDI                            ; 005a95c1
    PUSH EBP                            ; 005a95c2
    MOV ECX,EBX                         ; 005a95c3
    TEST EAX,EAX                        ; 005a95c5
    JZ 0x005a96ea                       ; 005a95c7
        ;   XREF to: 005a96ea (CONDITIONAL_JUMP)  ; LAB_005a96ea
    LEA EBX,[EAX + -0x4]                ; 005a95cd
    TEST byte ptr [EBX],0x1             ; 005a95d0
    JZ 0x005a96ea                       ; 005a95d3
        ;   XREF to: 005a96ea (CONDITIONAL_JUMP)  ; LAB_005a96ea
    MOV EDX,dword ptr [EBX]             ; 005a95d9
    AND DL,0xfe                         ; 005a95db
    LEA EAX,[EBX + EDX*0x1]             ; 005a95de
    MOV ESI,ECX                         ; 005a95e1
    TEST byte ptr [EAX],0x1             ; 005a95e3
    JNZ 0x005a960a                      ; 005a95e6
        ;   XREF to: 005a960a (CONDITIONAL_JUMP)  ; LAB_005a960a
    MOV EDI,dword ptr [EAX]             ; 005a95e8
    ADD EDX,EDI                         ; 005a95ea
    MOV dword ptr [EBX],EDX             ; 005a95ec
    CMP EAX,dword ptr [ECX + 0xc]       ; 005a95ee
    JNZ 0x005a95f6                      ; 005a95f1
        ;   XREF to: 005a95f6 (CONDITIONAL_JUMP)  ; LAB_005a95f6
    MOV dword ptr [ECX + 0xc],EBX       ; 005a95f3
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a95f6
        ;   Label: LAB_005a95f6
    MOV EAX,dword ptr [EAX + 0x8]       ; 005a95f9
    MOV dword ptr [EDX + 0x8],EAX       ; 005a95fc
    MOV dword ptr [EAX + 0x4],EDX       ; 005a95ff
    DEC dword ptr [ESI + 0x1c]          ; 005a9602
    JMP 0x005a969e                      ; 005a9605
        ;   XREF to: 005a969e (UNCONDITIONAL_JUMP)  ; LAB_005a969e
    MOV dword ptr [EBX],EDX             ; 005a960a
        ;   Label: LAB_005a960a
    MOV EAX,dword ptr [ECX + 0xc]       ; 005a960c
    CMP EBX,EAX                         ; 005a960f
    JNC 0x005a9629                      ; 005a9611
        ;   XREF to: 005a9629 (CONDITIONAL_JUMP)  ; LAB_005a9629
    CMP EBX,dword ptr [EAX + 0x4]       ; 005a9613
    JA 0x005a969e                       ; 005a9616
        ;   XREF to: 005a969e (CONDITIONAL_JUMP)  ; LAB_005a969e
    MOV EAX,dword ptr [ECX + 0x28]      ; 005a961c
    CMP EBX,EAX                         ; 005a961f
    JC 0x005a969e                       ; 005a9621
        ;   XREF to: 005a969e (CONDITIONAL_JUMP)  ; LAB_005a969e
    JMP 0x005a9642                      ; 005a9627
        ;   XREF to: 005a9642 (UNCONDITIONAL_JUMP)  ; LAB_005a9642
    MOV EAX,dword ptr [EAX + 0x8]       ; 005a9629
        ;   Label: LAB_005a9629
    CMP EBX,EAX                         ; 005a962c
    JC 0x005a969e                       ; 005a962e
        ;   XREF to: 005a969e (CONDITIONAL_JUMP)  ; LAB_005a969e
    LEA EAX,[ECX + 0x20]                ; 005a9634
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a9637
    CMP EBX,EDX                         ; 005a963a
    JA 0x005a969e                       ; 005a963c
        ;   XREF to: 005a969e (CONDITIONAL_JUMP)  ; LAB_005a969e
    MOV EDI,dword ptr [ESI + 0x1c]      ; 005a9642
        ;   Label: LAB_005a9642
    MOV EAX,dword ptr [ESI + 0x18]      ; 005a9645
    XOR EDX,EDX                         ; 005a9648
    LEA ECX,[EDI + 0x1]                 ; 005a964a
    DIV ECX                             ; 005a964d
    MOV ECX,EAX                         ; 005a964f
    CMP EAX,EDI                         ; 005a9651
    JNC 0x005a967d                      ; 005a9653
        ;   XREF to: 005a967d (CONDITIONAL_JUMP)  ; LAB_005a967d
    MOV EAX,dword ptr [ESI + 0x18]      ; 005a9655
    SUB EAX,EDI                         ; 005a9658
    ADD ECX,ECX                         ; 005a965a
    CMP EAX,EDI                         ; 005a965c
    JA 0x005a9665                       ; 005a965e
        ;   XREF to: 005a9665 (CONDITIONAL_JUMP)  ; LAB_005a9665
    MOV ECX,0xffffffff                  ; 005a9660
    MOV EAX,dword ptr [EBX]             ; 005a9665
        ;   Label: LAB_005a9665
    ADD EAX,EBX                         ; 005a9667
    MOV EDX,dword ptr [EAX]             ; 005a9669
        ;   Label: LAB_005a9669
    TEST DL,0x1                         ; 005a966b
    JZ 0x005a969e                       ; 005a966e
        ;   XREF to: 005a969e (CONDITIONAL_JUMP)  ; LAB_005a969e
    CMP EDX,-0x1                        ; 005a9670
    JZ 0x005a967d                       ; 005a9673
        ;   XREF to: 005a967d (CONDITIONAL_JUMP)  ; LAB_005a967d
    AND DL,0xfe                         ; 005a9675
    ADD EAX,EDX                         ; 005a9678
    DEC ECX                             ; 005a967a
    JNZ 0x005a9669                      ; 005a967b
        ;   XREF to: 005a9669 (CONDITIONAL_JUMP)  ; LAB_005a9669
    MOV EAX,dword ptr [ESI + 0xc]       ; 005a967d
        ;   Label: LAB_005a967d
    CMP EBX,EAX                         ; 005a9680
    JNC 0x005a9687                      ; 005a9682
        ;   XREF to: 005a9687 (CONDITIONAL_JUMP)  ; LAB_005a9687
    MOV EAX,dword ptr [ESI + 0x28]      ; 005a9684
    CMP EBX,EAX                         ; 005a9687
        ;   Label: LAB_005a9687
    JC 0x005a969e                       ; 005a9689
        ;   XREF to: 005a969e (CONDITIONAL_JUMP)  ; LAB_005a969e
    MOV EAX,dword ptr [EAX + 0x8]       ; 005a968b
    CMP EBX,EAX                         ; 005a968e
    JC 0x005a969e                       ; 005a9690
        ;   XREF to: 005a969e (CONDITIONAL_JUMP)  ; LAB_005a969e
    MOV EAX,dword ptr [EAX + 0x8]       ; 005a9692
    CMP EBX,EAX                         ; 005a9695
    JC 0x005a969e                       ; 005a9697
        ;   XREF to: 005a969e (CONDITIONAL_JUMP)  ; LAB_005a969e
    MOV EAX,dword ptr [EAX + 0x8]       ; 005a9699
    JMP 0x005a9687                      ; 005a969c
        ;   XREF to: 005a9687 (UNCONDITIONAL_JUMP)  ; LAB_005a9687
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a969e
        ;   Label: LAB_005a969e
    MOV EDI,dword ptr [EDX]             ; 005a96a1
    ADD EDI,EDX                         ; 005a96a3
    MOV ECX,dword ptr [EBX]             ; 005a96a5
    CMP EDI,EBX                         ; 005a96a7
    JNZ 0x005a96bd                      ; 005a96a9
        ;   XREF to: 005a96bd (CONDITIONAL_JUMP)  ; LAB_005a96bd
    MOV EBP,dword ptr [EDX]             ; 005a96ab
    ADD ECX,EBP                         ; 005a96ad
    MOV dword ptr [EDX],ECX             ; 005a96af
    CMP EBX,dword ptr [ESI + 0xc]       ; 005a96b1
    JNZ 0x005a96b9                      ; 005a96b4
        ;   XREF to: 005a96b9 (CONDITIONAL_JUMP)  ; LAB_005a96b9
    MOV dword ptr [ESI + 0xc],EDX       ; 005a96b6
    MOV EBX,EDX                         ; 005a96b9
        ;   Label: LAB_005a96b9
    JMP 0x005a96cc                      ; 005a96bb
        ;   XREF to: 005a96cc (UNCONDITIONAL_JUMP)  ; LAB_005a96cc
    INC dword ptr [ESI + 0x1c]          ; 005a96bd
        ;   Label: LAB_005a96bd
    MOV dword ptr [EBX + 0x8],EAX       ; 005a96c0
    MOV dword ptr [EBX + 0x4],EDX       ; 005a96c3
    MOV dword ptr [EDX + 0x8],EBX       ; 005a96c6
    MOV dword ptr [EAX + 0x4],EBX       ; 005a96c9
    MOV EDX,dword ptr [ESI + 0x18]      ; 005a96cc
        ;   Label: LAB_005a96cc
    DEC EDX                             ; 005a96cf
    MOV EDI,dword ptr [ESI + 0xc]       ; 005a96d0
    MOV dword ptr [ESI + 0x18],EDX      ; 005a96d3
    CMP EBX,EDI                         ; 005a96d6
    JNC 0x005a96e2                      ; 005a96d8
        ;   XREF to: 005a96e2 (CONDITIONAL_JUMP)  ; LAB_005a96e2
    CMP ECX,dword ptr [ESI + 0x10]      ; 005a96da
    JBE 0x005a96e2                      ; 005a96dd
        ;   XREF to: 005a96e2 (CONDITIONAL_JUMP)  ; LAB_005a96e2
    MOV dword ptr [ESI + 0x10],ECX      ; 005a96df
    CMP ECX,dword ptr [ESI + 0x14]      ; 005a96e2
        ;   Label: LAB_005a96e2
    JBE 0x005a96ea                      ; 005a96e5
        ;   XREF to: 005a96ea (CONDITIONAL_JUMP)  ; LAB_005a96ea
    MOV dword ptr [ESI + 0x14],ECX      ; 005a96e7
    POP EBP                             ; 005a96ea
        ;   Label: LAB_005a96ea
    POP EDI                             ; 005a96eb
    POP ESI                             ; 005a96ec
    RET                                 ; 005a96ed

