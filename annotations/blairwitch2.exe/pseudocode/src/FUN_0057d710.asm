; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; longlong FUN_0057d710(uint param_1,int param_2,uint param_3)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057d710
        ;   Label: FUN_0057d710
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057d714
    MOV ECX,dword ptr [ESP + 0xc]       ; 0057d718
    CMP dword ptr [EDX + 0x4],0x0       ; 0057d71c
    JZ 0x0057d698                       ; 0057d720
        ;   XREF to: 0057d698 (CONDITIONAL_JUMP)  ; LAB_0057d698
    CMP ECX,0x1                         ; 0057d726
    JNC 0x0057d74d                      ; 0057d729
        ;   XREF to: 0057d74d (CONDITIONAL_JUMP)  ; LAB_0057d74d
    TEST ECX,ECX                        ; 0057d72b
    JNZ 0x0057d740                      ; 0057d72d
        ;   XREF to: 0057d740 (CONDITIONAL_JUMP)  ; LAB_0057d740
    TEST EAX,EAX                        ; 0057d72f
        ;   Label: LAB_0057d72f
    JL 0x0057d740                       ; 0057d731
        ;   XREF to: 0057d740 (CONDITIONAL_JUMP)  ; LAB_0057d740
    CMP EAX,dword ptr [EDX + 0x8]       ; 0057d733
    JLE 0x0057d757                      ; 0057d736
        ;   XREF to: 0057d757 (CONDITIONAL_JUMP)  ; LAB_0057d757
    LEA EAX,[EAX]                       ; 0057d738
    MOV EDX,EDX                         ; 0057d73e
    XOR EAX,EAX                         ; 0057d740
        ;   Label: LAB_0057d740
    RET                                 ; 0057d742
    ADD EAX,dword ptr [EDX + 0xc]       ; 0057d743
        ;   Label: LAB_0057d743
    JMP 0x0057d72f                      ; 0057d746
        ;   XREF to: 0057d72f (UNCONDITIONAL_JUMP)  ; LAB_0057d72f
    ADD EAX,dword ptr [EDX + 0x8]       ; 0057d748
        ;   Label: LAB_0057d748
    JMP 0x0057d72f                      ; 0057d74b
        ;   XREF to: 0057d72f (UNCONDITIONAL_JUMP)  ; LAB_0057d72f
    JBE 0x0057d743                      ; 0057d74d
        ;   XREF to: 0057d743 (CONDITIONAL_JUMP)  ; LAB_0057d743
        ;   Label: LAB_0057d74d
    CMP ECX,0x2                         ; 0057d74f
    JZ 0x0057d748                       ; 0057d752
        ;   XREF to: 0057d748 (CONDITIONAL_JUMP)  ; LAB_0057d748
    XOR EAX,EAX                         ; 0057d754
    RET                                 ; 0057d756
    MOV dword ptr [EDX + 0xc],EAX       ; 0057d757
        ;   Label: LAB_0057d757
    MOV EAX,0x1                         ; 0057d75a
    RET                                 ; 0057d75f

