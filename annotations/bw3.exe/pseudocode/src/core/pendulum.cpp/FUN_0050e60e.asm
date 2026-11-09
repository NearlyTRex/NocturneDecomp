; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_pendulum_cpp_FUN_0050e60e(float param_1,float param_2,float param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005cbaed
;   undefined4 DAT_005cbaf5
;   undefined4 DAT_005cbafd
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0050e60e
        ;   Label: core_pendulum.cpp_FUN_0050e60e
    FLD float ptr [ESP + 0x4]           ; 0050e610
    FADD double ptr [0x005cbaed]        ; 0050e614 | DAT_005cbaed
    FLD float ptr [ESP + 0x8]           ; 0050e61a
    FCOMPP                              ; 0050e61e
    FNSTSW AX                           ; 0050e620
    SAHF                                ; 0050e622
    JC 0x0050e6e1                       ; 0050e623
        ;   XREF to: 0050e6e1 (CONDITIONAL_JUMP)  ; LAB_0050e6e1
    FLD float ptr [ESP + 0x4]           ; 0050e629
        ;   Label: LAB_0050e629
    FADD double ptr [0x005cbaf5]        ; 0050e62d | DAT_005cbaf5
    FLD float ptr [ESP + 0x8]           ; 0050e633
    FCOMPP                              ; 0050e637
    FNSTSW AX                           ; 0050e639
    SAHF                                ; 0050e63b
    JBE 0x0050e64c                      ; 0050e63c
        ;   XREF to: 0050e64c (CONDITIONAL_JUMP)  ; LAB_0050e64c
    FLD float ptr [ESP + 0x8]           ; 0050e63e
    FADD float ptr [0x005cbafd]         ; 0050e642 | DAT_005cbafd
    FSTP float ptr [ESP + 0x8]          ; 0050e648
    FLD float ptr [ESP + 0x8]           ; 0050e64c
        ;   Label: LAB_0050e64c
    FCOMP float ptr [ESP + 0x4]         ; 0050e650
    FNSTSW AX                           ; 0050e654
    SAHF                                ; 0050e656
    JA 0x0050e6f0                       ; 0050e657
        ;   XREF to: 0050e6f0 (CONDITIONAL_JUMP)  ; LAB_0050e6f0
    FLD float ptr [ESP + 0xc]           ; 0050e65d
    FCOMP float ptr [ESP + 0x8]         ; 0050e661
    FNSTSW AX                           ; 0050e665
    SAHF                                ; 0050e667
    JNC 0x0050e674                      ; 0050e668
        ;   XREF to: 0050e674 (CONDITIONAL_JUMP)  ; LAB_0050e674
    FLD1                                ; 0050e66a
    FADD float ptr [ESP + 0xc]          ; 0050e66c
    FSTP float ptr [ESP + 0xc]          ; 0050e670
    FLD float ptr [ESP + 0xc]           ; 0050e674
        ;   Label: LAB_0050e674
    FCOMP float ptr [ESP + 0x8]         ; 0050e678
    FNSTSW AX                           ; 0050e67c
    SAHF                                ; 0050e67e
    JNC 0x0050e68b                      ; 0050e67f
        ;   XREF to: 0050e68b (CONDITIONAL_JUMP)  ; LAB_0050e68b
    FLD1                                ; 0050e681
    FADD float ptr [ESP + 0xc]          ; 0050e683
    FSTP float ptr [ESP + 0xc]          ; 0050e687
    FLD float ptr [ESP + 0x8]           ; 0050e68b
        ;   Label: LAB_0050e68b
    FLD1                                ; 0050e68f
    FADDP                               ; 0050e691
    FLD float ptr [ESP + 0xc]           ; 0050e693
    FCOMPP                              ; 0050e697
    FNSTSW AX                           ; 0050e699
    SAHF                                ; 0050e69b
    JBE 0x0050e6ac                      ; 0050e69c
        ;   XREF to: 0050e6ac (CONDITIONAL_JUMP)  ; LAB_0050e6ac
    FLD float ptr [ESP + 0xc]           ; 0050e69e
    FADD float ptr [0x005cbafd]         ; 0050e6a2 | DAT_005cbafd
    FSTP float ptr [ESP + 0xc]          ; 0050e6a8
    FLD float ptr [ESP + 0x8]           ; 0050e6ac
        ;   Label: LAB_0050e6ac
    FLD1                                ; 0050e6b0
    FADDP                               ; 0050e6b2
    FLD float ptr [ESP + 0xc]           ; 0050e6b4
    FCOMPP                              ; 0050e6b8
    FNSTSW AX                           ; 0050e6ba
    SAHF                                ; 0050e6bc
    JBE 0x0050e6cd                      ; 0050e6bd
        ;   XREF to: 0050e6cd (CONDITIONAL_JUMP)  ; LAB_0050e6cd
    FLD float ptr [ESP + 0xc]           ; 0050e6bf
    FADD float ptr [0x005cbafd]         ; 0050e6c3 | DAT_005cbafd
    FSTP float ptr [ESP + 0xc]          ; 0050e6c9
    FLD float ptr [ESP + 0xc]           ; 0050e6cd
        ;   Label: LAB_0050e6cd
    FCOMP float ptr [ESP + 0x4]         ; 0050e6d1
    FNSTSW AX                           ; 0050e6d5
    SAHF                                ; 0050e6d7
    SETA AL                             ; 0050e6d8
    AND EAX,0xff                        ; 0050e6db
    RET                                 ; 0050e6e0
    FLD1                                ; 0050e6e1
        ;   Label: LAB_0050e6e1
    FADD float ptr [ESP + 0x8]          ; 0050e6e3
    FSTP float ptr [ESP + 0x8]          ; 0050e6e7
    JMP 0x0050e629                      ; 0050e6eb
        ;   XREF to: 0050e629 (UNCONDITIONAL_JUMP)  ; LAB_0050e629
    XOR EAX,EAX                         ; 0050e6f0
        ;   Label: LAB_0050e6f0
    RET                                 ; 0050e6f2

