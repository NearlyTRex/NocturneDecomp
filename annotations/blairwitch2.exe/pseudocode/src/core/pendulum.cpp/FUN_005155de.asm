; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_pendulum_cpp_FUN_005155de(float param_1,float param_2,float param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005e1a2a
;   undefined4 DAT_005e1a32
;   undefined4 DAT_005e1a3a
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 005155de
        ;   Label: core_pendulum.cpp_FUN_005155de
    FLD float ptr [ESP + 0x4]           ; 005155e0
    FADD double ptr [0x005e1a2a]        ; 005155e4 | DAT_005e1a2a
    FLD float ptr [ESP + 0x8]           ; 005155ea
    FCOMPP                              ; 005155ee
    FNSTSW AX                           ; 005155f0
    SAHF                                ; 005155f2
    JC 0x005156b1                       ; 005155f3
        ;   XREF to: 005156b1 (CONDITIONAL_JUMP)  ; LAB_005156b1
    FLD float ptr [ESP + 0x4]           ; 005155f9
        ;   Label: LAB_005155f9
    FADD double ptr [0x005e1a32]        ; 005155fd | DAT_005e1a32
    FLD float ptr [ESP + 0x8]           ; 00515603
    FCOMPP                              ; 00515607
    FNSTSW AX                           ; 00515609
    SAHF                                ; 0051560b
    JBE 0x0051561c                      ; 0051560c
        ;   XREF to: 0051561c (CONDITIONAL_JUMP)  ; LAB_0051561c
    FLD float ptr [ESP + 0x8]           ; 0051560e
    FADD float ptr [0x005e1a3a]         ; 00515612 | DAT_005e1a3a
    FSTP float ptr [ESP + 0x8]          ; 00515618
    FLD float ptr [ESP + 0x8]           ; 0051561c
        ;   Label: LAB_0051561c
    FCOMP float ptr [ESP + 0x4]         ; 00515620
    FNSTSW AX                           ; 00515624
    SAHF                                ; 00515626
    JA 0x005156c0                       ; 00515627
        ;   XREF to: 005156c0 (CONDITIONAL_JUMP)  ; LAB_005156c0
    FLD float ptr [ESP + 0xc]           ; 0051562d
    FCOMP float ptr [ESP + 0x8]         ; 00515631
    FNSTSW AX                           ; 00515635
    SAHF                                ; 00515637
    JNC 0x00515644                      ; 00515638
        ;   XREF to: 00515644 (CONDITIONAL_JUMP)  ; LAB_00515644
    FLD1                                ; 0051563a
    FADD float ptr [ESP + 0xc]          ; 0051563c
    FSTP float ptr [ESP + 0xc]          ; 00515640
    FLD float ptr [ESP + 0xc]           ; 00515644
        ;   Label: LAB_00515644
    FCOMP float ptr [ESP + 0x8]         ; 00515648
    FNSTSW AX                           ; 0051564c
    SAHF                                ; 0051564e
    JNC 0x0051565b                      ; 0051564f
        ;   XREF to: 0051565b (CONDITIONAL_JUMP)  ; LAB_0051565b
    FLD1                                ; 00515651
    FADD float ptr [ESP + 0xc]          ; 00515653
    FSTP float ptr [ESP + 0xc]          ; 00515657
    FLD float ptr [ESP + 0x8]           ; 0051565b
        ;   Label: LAB_0051565b
    FLD1                                ; 0051565f
    FADDP                               ; 00515661
    FLD float ptr [ESP + 0xc]           ; 00515663
    FCOMPP                              ; 00515667
    FNSTSW AX                           ; 00515669
    SAHF                                ; 0051566b
    JBE 0x0051567c                      ; 0051566c
        ;   XREF to: 0051567c (CONDITIONAL_JUMP)  ; LAB_0051567c
    FLD float ptr [ESP + 0xc]           ; 0051566e
    FADD float ptr [0x005e1a3a]         ; 00515672 | DAT_005e1a3a
    FSTP float ptr [ESP + 0xc]          ; 00515678
    FLD float ptr [ESP + 0x8]           ; 0051567c
        ;   Label: LAB_0051567c
    FLD1                                ; 00515680
    FADDP                               ; 00515682
    FLD float ptr [ESP + 0xc]           ; 00515684
    FCOMPP                              ; 00515688
    FNSTSW AX                           ; 0051568a
    SAHF                                ; 0051568c
    JBE 0x0051569d                      ; 0051568d
        ;   XREF to: 0051569d (CONDITIONAL_JUMP)  ; LAB_0051569d
    FLD float ptr [ESP + 0xc]           ; 0051568f
    FADD float ptr [0x005e1a3a]         ; 00515693 | DAT_005e1a3a
    FSTP float ptr [ESP + 0xc]          ; 00515699
    FLD float ptr [ESP + 0xc]           ; 0051569d
        ;   Label: LAB_0051569d
    FCOMP float ptr [ESP + 0x4]         ; 005156a1
    FNSTSW AX                           ; 005156a5
    SAHF                                ; 005156a7
    SETA AL                             ; 005156a8
    AND EAX,0xff                        ; 005156ab
    RET                                 ; 005156b0
    FLD1                                ; 005156b1
        ;   Label: LAB_005156b1
    FADD float ptr [ESP + 0x8]          ; 005156b3
    FSTP float ptr [ESP + 0x8]          ; 005156b7
    JMP 0x005155f9                      ; 005156bb
        ;   XREF to: 005155f9 (UNCONDITIONAL_JUMP)  ; LAB_005155f9
    XOR EAX,EAX                         ; 005156c0
        ;   Label: LAB_005156c0
    RET                                 ; 005156c2

