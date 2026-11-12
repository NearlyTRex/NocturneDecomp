; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double crt_fstream_cpp_FUN_0057264c(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_00570630 at 00570688
;
; Referenced Globals:
;   undefined4 DAT_005c1795
;
; *****************************************************************************

section .text

    XOR ECX,0x80000000                  ; 0057264c
        ;   Label: crt_fstream.cpp_FUN_0057264c
    OR EBX,EBX                          ; 00572652
    JNZ 0x0057265c                      ; 00572654
        ;   XREF to: 0057265c (CONDITIONAL_JUMP)  ; LAB_0057265c
    ADD ECX,ECX                         ; 00572656
    JZ 0x00572668                       ; 00572658
        ;   XREF to: 00572668 (CONDITIONAL_JUMP)  ; LAB_00572668
    RCR ECX,0x1                         ; 0057265a
    OR EAX,EAX                          ; 0057265c
        ;   Label: LAB_0057265c
    JNZ 0x0057266b                      ; 0057265e
        ;   XREF to: 0057266b (CONDITIONAL_JUMP)  ; LAB_0057266b
    ADD EDX,EDX                         ; 00572660
    JNZ 0x00572669                      ; 00572662
        ;   XREF to: 00572669 (CONDITIONAL_JUMP)  ; LAB_00572669
    MOV EDX,ECX                         ; 00572664
    MOV EAX,EBX                         ; 00572666
    RET                                 ; 00572668
        ;   Label: LAB_00572668
    RCR EDX,0x1                         ; 00572669
        ;   Label: LAB_00572669
    CMP byte ptr [0x005c1795],0x0       ; 0057266b | DAT_005c1795
        ;   Label: LAB_0057266b
    JZ 0x00572695                       ; 00572672
        ;   XREF to: 00572695 (CONDITIONAL_JUMP)  ; LAB_00572695
    PUSH EDX                            ; 00572674
    PUSH EAX                            ; 00572675
    FLD double ptr [ESP]                ; 00572676
    PUSH ECX                            ; 00572679
    PUSH EBX                            ; 0057267a
    FADD double ptr [ESP]               ; 0057267b
    FSTP double ptr [ESP + 0x8]         ; 0057267e
        ;   Label: LAB_0057267e
    ADD ESP,0x8                         ; 00572682
    WAIT                                ; 00572685
    POP EAX                             ; 00572686
    POP EDX                             ; 00572687
    CMP EDX,0x80000000                  ; 00572688
    JNZ 0x00572694                      ; 0057268e
        ;   XREF to: 00572694 (CONDITIONAL_JUMP)  ; LAB_00572694
    SUB EDX,EDX                         ; 00572690
    MOV EAX,EDX                         ; 00572692
    RET                                 ; 00572694
        ;   Label: LAB_00572694
    PUSH EBP                            ; 00572695
        ;   Label: LAB_00572695
    PUSH EDI                            ; 00572696
    PUSH ESI                            ; 00572697
    MOV EDI,EDX                         ; 00572698
    MOV ESI,ECX                         ; 0057269a
    SAR EDI,0x14                        ; 0057269c
    SAR ECX,0x14                        ; 0057269f
    AND EDI,0x800007ff                  ; 005726a2
    AND ECX,0x800007ff                  ; 005726a8
    MOV EBP,ECX                         ; 005726ae
    ROL EDI,0x10                        ; 005726b0
    ROL ECX,0x10                        ; 005726b3
    ADD CX,DI                           ; 005726b6
    ROL EDI,0x10                        ; 005726b9
    ROL ECX,0x10                        ; 005726bc
    AND EDX,0xfffff                     ; 005726bf
    AND ESI,0xfffff                     ; 005726c5
    OR DI,DI                            ; 005726cb
    JZ 0x005726d6                       ; 005726ce
        ;   XREF to: 005726d6 (CONDITIONAL_JUMP)  ; LAB_005726d6
    OR EDX,0x100000                     ; 005726d0
    OR CX,CX                            ; 005726d6
        ;   Label: LAB_005726d6
    JZ 0x005726e1                       ; 005726d9
        ;   XREF to: 005726e1 (CONDITIONAL_JUMP)  ; LAB_005726e1
    OR ESI,0x100000                     ; 005726db
    ADD EAX,EAX                         ; 005726e1
        ;   Label: LAB_005726e1
    ADC EDX,EDX                         ; 005726e3
    ADD EBX,EBX                         ; 005726e5
    ADC ESI,ESI                         ; 005726e7
    SUB CX,DI                           ; 005726e9
    JZ 0x0057271d                       ; 005726ec
        ;   XREF to: 0057271d (CONDITIONAL_JUMP)  ; LAB_0057271d
    JNC 0x005726f8                      ; 005726ee
        ;   XREF to: 005726f8 (CONDITIONAL_JUMP)  ; LAB_005726f8
    MOV EBP,EDI                         ; 005726f0
    NEG CX                              ; 005726f2
    XCHG EAX,EBX                        ; 005726f5
    XCHG EDX,ESI                        ; 005726f6
    CMP CX,0x36                         ; 005726f8
        ;   Label: LAB_005726f8
    JBE 0x0057271d                      ; 005726fc
        ;   XREF to: 0057271d (CONDITIONAL_JUMP)  ; LAB_0057271d
    MOV EDX,ESI                         ; 005726fe
    MOV EAX,EBX                         ; 00572700
    ADD EBP,EBP                         ; 00572702
    RCR EDX,0x1                         ; 00572704
    RCR EAX,0x1                         ; 00572706
    AND EDX,0x800fffff                  ; 00572708
    ROR EBP,0xd                         ; 0057270e
    AND EBP,0x7ff00000                  ; 00572711
    OR EDX,EBP                          ; 00572717
    POP ESI                             ; 00572719
    POP EDI                             ; 0057271a
    POP EBP                             ; 0057271b
    RET                                 ; 0057271c
    OR ECX,ECX                          ; 0057271d
        ;   Label: LAB_0057271d
    JNS 0x0057272e                      ; 0057271f
        ;   XREF to: 0057272e (CONDITIONAL_JUMP)  ; LAB_0057272e
    NEG ESI                             ; 00572721
    NEG EBX                             ; 00572723
    SBB ESI,0x0                         ; 00572725
    XOR EBP,0x80000000                  ; 00572728
    SUB EDI,EDI                         ; 0057272e
        ;   Label: LAB_0057272e
    CMP CL,0x0                          ; 00572730
    JZ 0x00572758                       ; 00572733
        ;   XREF to: 00572758 (CONDITIONAL_JUMP)  ; LAB_00572758
    PUSH EBX                            ; 00572735
    SUB EBX,EBX                         ; 00572736
    CMP CL,0x20                         ; 00572738
    JC 0x0057274a                       ; 0057273b
        ;   XREF to: 0057274a (CONDITIONAL_JUMP)  ; LAB_0057274a
    OR EAX,EAX                          ; 0057273d
    SETNZ BL                            ; 0057273f
    MOV EDI,EBX                         ; 00572742
    SUB EBX,EBX                         ; 00572744
    MOV EAX,EDX                         ; 00572746
    SUB EDX,EDX                         ; 00572748
    SHRD EBX,EAX,CL                     ; 0057274a
        ;   Label: LAB_0057274a
    OR EDI,EBX                          ; 0057274d
    SUB EBX,EBX                         ; 0057274f
    SHRD EAX,EDX,CL                     ; 00572751
    SHRD EDX,EBX,CL                     ; 00572754
    POP EBX                             ; 00572757
    ADD EAX,EBX                         ; 00572758
        ;   Label: LAB_00572758
    ADC EDX,ESI                         ; 0057275a
    JNS 0x00572781                      ; 0057275c
        ;   XREF to: 00572781 (CONDITIONAL_JUMP)  ; LAB_00572781
    CMP CL,0x35                         ; 0057275e
    JC 0x00572774                       ; 00572761
        ;   XREF to: 00572774 (CONDITIONAL_JUMP)  ; LAB_00572774
    TEST EDI,0x7fffffff                 ; 00572763
    SETNZ BL                            ; 00572769
    SHR EBX,0x1                         ; 0057276c
    ADC EAX,0x0                         ; 0057276e
    ADC EDX,0x0                         ; 00572771
    NEG EDX                             ; 00572774
        ;   Label: LAB_00572774
    NEG EAX                             ; 00572776
    SBB EDX,0x0                         ; 00572778
    XOR EBP,0x80000000                  ; 0057277b
    MOV EBX,EAX                         ; 00572781
        ;   Label: LAB_00572781
    OR EBX,EDX                          ; 00572783
    JZ 0x005727f1                       ; 00572785
        ;   XREF to: 005727f1 (CONDITIONAL_JUMP)  ; LAB_005727f1
    OR BP,BP                            ; 00572787
    JZ 0x005727f5                       ; 0057278a
        ;   XREF to: 005727f5 (CONDITIONAL_JUMP)  ; LAB_005727f5
    TEST EDX,0x7fe00000                 ; 0057278c
        ;   Label: LAB_0057278c
    JNZ 0x0057279e                      ; 00572792
        ;   XREF to: 0057279e (CONDITIONAL_JUMP)  ; LAB_0057279e
    DEC BP                              ; 00572794
    JZ 0x005727f5                       ; 00572796
        ;   XREF to: 005727f5 (CONDITIONAL_JUMP)  ; LAB_005727f5
    ADD EAX,EAX                         ; 00572798
    ADC EDX,EDX                         ; 0057279a
    JMP 0x0057278c                      ; 0057279c
        ;   XREF to: 0057278c (UNCONDITIONAL_JUMP)  ; LAB_0057278c
    TEST EDX,0x400000                   ; 0057279e
        ;   Label: LAB_0057279e
    JZ 0x005727b6                       ; 005727a4
        ;   XREF to: 005727b6 (CONDITIONAL_JUMP)  ; LAB_005727b6
    SHR EDX,0x1                         ; 005727a6
    RCR EAX,0x1                         ; 005727a8
    ADC EDI,0x0                         ; 005727aa
    INC BP                              ; 005727ad
    CMP BP,0x7ff                        ; 005727af
    JZ 0x005727ff                       ; 005727b4
        ;   XREF to: 005727ff (CONDITIONAL_JUMP)  ; LAB_005727ff
    SHR EDX,0x1                         ; 005727b6
        ;   Label: LAB_005727b6
    RCR EAX,0x1                         ; 005727b8
    JNC 0x005727e0                      ; 005727ba
        ;   XREF to: 005727e0 (CONDITIONAL_JUMP)  ; LAB_005727e0
    OR EDI,EDI                          ; 005727bc
    SETNZ BL                            ; 005727be
    OR EBX,EAX                          ; 005727c1
    SHR EBX,0x1                         ; 005727c3
    ADC EAX,0x0                         ; 005727c5
    ADC EDX,0x0                         ; 005727c8
    TEST EDX,0x200000                   ; 005727cb
    JZ 0x005727e0                       ; 005727d1
        ;   XREF to: 005727e0 (CONDITIONAL_JUMP)  ; LAB_005727e0
    SHR EDX,0x1                         ; 005727d3
    RCR EAX,0x1                         ; 005727d5
    INC BP                              ; 005727d7
    CMP BP,0x7ff                        ; 005727d9
    JZ 0x005727ff                       ; 005727de
        ;   XREF to: 005727ff (CONDITIONAL_JUMP)  ; LAB_005727ff
    AND EDX,0xfffff                     ; 005727e0
        ;   Label: LAB_005727e0
    MOV ECX,EBP                         ; 005727e6
    SHL EBP,0x15                        ; 005727e8
    ADD ECX,ECX                         ; 005727eb
    RCR EBP,0x1                         ; 005727ed
    OR EDX,EBP                          ; 005727ef
    POP ESI                             ; 005727f1
        ;   Label: LAB_005727f1
    POP EDI                             ; 005727f2
    POP EBP                             ; 005727f3
    RET                                 ; 005727f4
    ADD EBP,EBP                         ; 005727f5
        ;   Label: LAB_005727f5
    RCR EDX,0x1                         ; 005727f7
    RCR EAX,0x1                         ; 005727f9
    POP ESI                             ; 005727fb
    POP EDI                             ; 005727fc
    POP EBP                             ; 005727fd
    RET                                 ; 005727fe
    MOV EAX,EBP                         ; 005727ff
        ;   Label: LAB_005727ff
    POP ESI                             ; 00572801
    POP EDI                             ; 00572802
    POP EBP                             ; 00572803
    JMP 0x00573607                      ; 00572804
        ;   XREF to: 00573607 (UNCONDITIONAL_JUMP)  ; LAB_00573607

