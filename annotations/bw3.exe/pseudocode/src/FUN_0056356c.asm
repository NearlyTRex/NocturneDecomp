; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056356c(uint *param_1,int *param_2)
;
;
; XREF[15]:
;   FUN_0042a280 at 0042a403
;   FUN_004512f0 at 0045132f
;   FUN_00496f60 at 00496fa2
;   FUN_004980b0 at 0049811e
;   FUN_00498b40 at 00498b99
;   FUN_0049d980 at 0049d9f0
;   FUN_0049f520 at 0049f9cc
;   FUN_004a09f0 at 004a0a41
;   FUN_004a0cd0 at 004a0d16
;   FUN_004a1040 at 004a1086
;   ... and 5 more
;
; Referenced Globals:
;   undefined4 DAT_00604d68
;   undefined4 DAT_00604d6c
;   undefined4 DAT_00604d70
;   undefined4 DAT_00604d78
;   undefined4 DAT_00604d7c
;   undefined4 DAT_00604d80
;   undefined4 DAT_01c6b598
;   undefined4 DAT_01c6b59c
;   undefined4 DAT_01c6b5a0
;   undefined4 DAT_01c6b5a4
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2d8
;   undefined4 DAT_01c6e2dc
;   undefined4 DAT_01c6e2e0
;   undefined4 DAT_01c6e2fc
;   ... and 8 more
;
; *****************************************************************************

section .text

    TEST dword ptr [0x01c6e2a0],0xffffffff ; 0056356c | DAT_01c6e2a0
        ;   Label: FUN_0056356c
    JZ 0x005636ba                       ; 00563576
        ;   XREF to: 005636ba (CONDITIONAL_JUMP)  ; LAB_005636ba
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056357c
    MOV EAX,dword ptr [EBX]             ; 00563580
    MOV ECX,dword ptr [EBX + 0x4]       ; 00563582
    MOV EDX,dword ptr [EBX + 0x8]       ; 00563585
    SUB EAX,dword ptr [0x01c6e2d8]      ; 00563588 | DAT_01c6e2d8
    SUB ECX,dword ptr [0x01c6e2dc]      ; 0056358e | DAT_01c6e2dc
    SUB EDX,dword ptr [0x01c6e2e0]      ; 00563594 | DAT_01c6e2e0
    MOVD MM0,EAX                        ; 0056359a
    MOVD MM1,ECX                        ; 0056359d
    MOVD MM2,EDX                        ; 005635a0
    IMUL dword ptr [0x01c6e2fc]         ; 005635a3 | DAT_01c6e2fc
    MOV EBX,EAX                         ; 005635a9
    MOV ECX,EDX                         ; 005635ab
    MOVD EAX,MM1                        ; 005635ad
    IMUL dword ptr [0x01c6e308]         ; 005635b0 | DAT_01c6e308
    ADD EBX,EAX                         ; 005635b6
    ADC ECX,EDX                         ; 005635b8
    MOVD EAX,MM2                        ; 005635ba
    IMUL dword ptr [0x01c6e314]         ; 005635bd | DAT_01c6e314
    ADD EAX,EBX                         ; 005635c3
    ADC EDX,ECX                         ; 005635c5
    SHRD EAX,EDX,0x10                   ; 005635c7
    MOVD MM4,EAX                        ; 005635cb
    MOVD EAX,MM0                        ; 005635ce
    IMUL dword ptr [0x01c6e300]         ; 005635d1 | DAT_01c6e300
    MOV EBX,EAX                         ; 005635d7
    MOV ECX,EDX                         ; 005635d9
    MOVD EAX,MM1                        ; 005635db
    IMUL dword ptr [0x01c6e30c]         ; 005635de | DAT_01c6e30c
    ADD EBX,EAX                         ; 005635e4
    ADC ECX,EDX                         ; 005635e6
    MOVD EAX,MM2                        ; 005635e8
    IMUL dword ptr [0x01c6e318]         ; 005635eb | DAT_01c6e318
    ADD EAX,EBX                         ; 005635f1
    ADC EDX,ECX                         ; 005635f3
    SHRD EAX,EDX,0x10                   ; 005635f5
    MOVD MM5,EAX                        ; 005635f9
    MOVD EAX,MM0                        ; 005635fc
    IMUL dword ptr [0x01c6e304]         ; 005635ff | DAT_01c6e304
    MOV EBX,EAX                         ; 00563605
    MOV ECX,EDX                         ; 00563607
    MOVD EAX,MM1                        ; 00563609
    IMUL dword ptr [0x01c6e310]         ; 0056360c | DAT_01c6e310
    ADD EBX,EAX                         ; 00563612
    ADC ECX,EDX                         ; 00563614
    MOVD EAX,MM2                        ; 00563616
    IMUL dword ptr [0x01c6e31c]         ; 00563619 | DAT_01c6e31c
    ADD EAX,EBX                         ; 0056361f
    ADC EDX,ECX                         ; 00563621
    SHRD EAX,EDX,0x10                   ; 00563623
    MOVD MM6,EAX                        ; 00563627
    NEG EAX                             ; 0056362a
    MOV EDX,EAX                         ; 0056362c
    XOR EAX,EAX                         ; 0056362e
    MOVD EBX,MM4                        ; 00563630
    MOVD ECX,MM6                        ; 00563633
    CMP EBX,ECX                         ; 00563636
    JLE 0x0056363f                      ; 00563638
        ;   XREF to: 0056363f (CONDITIONAL_JUMP)  ; LAB_0056363f
    OR EAX,0x80000001                   ; 0056363a
    CMP EBX,EDX                         ; 0056363f
        ;   Label: LAB_0056363f
    JGE 0x00563648                      ; 00563641
        ;   XREF to: 00563648 (CONDITIONAL_JUMP)  ; LAB_00563648
    OR EAX,0x80000002                   ; 00563643
    MOVD EBX,MM5                        ; 00563648
        ;   Label: LAB_00563648
    CMP EBX,ECX                         ; 0056364b
    JLE 0x00563654                      ; 0056364d
        ;   XREF to: 00563654 (CONDITIONAL_JUMP)  ; LAB_00563654
    OR EAX,0x80000004                   ; 0056364f
    CMP EBX,EDX                         ; 00563654
        ;   Label: LAB_00563654
    JGE 0x0056365d                      ; 00563656
        ;   XREF to: 0056365d (CONDITIONAL_JUMP)  ; LAB_0056365d
    OR EAX,0x80000008                   ; 00563658
    CMP ECX,0x0                         ; 0056365d
        ;   Label: LAB_0056365d
    JG 0x00563667                       ; 00563660
        ;   XREF to: 00563667 (CONDITIONAL_JUMP)  ; LAB_00563667
    OR EAX,0x80000010                   ; 00563662
    MOV EBX,dword ptr [ESP + 0x4]       ; 00563667
        ;   Label: LAB_00563667
    MOVD dword ptr [EBX],MM4            ; 0056366b
    MOVD dword ptr [EBX + 0x4],MM5      ; 0056366e
    MOVD dword ptr [EBX + 0x8],MM6      ; 00563672
    TEST EAX,0xffffffff                 ; 00563676
    JNZ 0x005636b4                      ; 0056367b
        ;   XREF to: 005636b4 (CONDITIONAL_JUMP)  ; LAB_005636b4
    MOV EAX,0x7fffffff                  ; 0056367d
    XOR EDX,EDX                         ; 00563682
    IDIV ECX                            ; 00563684
    MOV dword ptr [EBX + 0xc],EAX       ; 00563686
    MOVD EAX,MM4                        ; 00563689
    IMUL dword ptr [0x01c6b598]         ; 0056368c | DAT_01c6b598
    IDIV ECX                            ; 00563692
    ADD EAX,dword ptr [0x01c6b5a0]      ; 00563694 | DAT_01c6b5a0
    MOV dword ptr [EBX + 0x10],EAX      ; 0056369a
    MOVD EAX,MM5                        ; 0056369d
    IMUL dword ptr [0x01c6b59c]         ; 005636a0 | DAT_01c6b59c
    IDIV ECX                            ; 005636a6
    ADD EAX,dword ptr [0x01c6b5a4]      ; 005636a8 | DAT_01c6b5a4
    MOV dword ptr [EBX + 0x14],EAX      ; 005636ae
    EMMS                                ; 005636b1
    RET                                 ; 005636b3
    MOV dword ptr [EBX + 0x10],EAX      ; 005636b4
        ;   Label: LAB_005636b4
    EMMS                                ; 005636b7
    RET                                 ; 005636b9
    PUSH ESI                            ; 005636ba
        ;   Label: LAB_005636ba
    PUSH EDI                            ; 005636bb
    MOV ESI,dword ptr [ESP + 0x10]      ; 005636bc
    MOV EDI,dword ptr [ESP + 0xc]       ; 005636c0
    MOV EAX,dword ptr [ESI]             ; 005636c4
    MOV EBX,dword ptr [ESI + 0x4]       ; 005636c6
    MOV ECX,dword ptr [ESI + 0x8]       ; 005636c9
    SUB EAX,dword ptr [0x01c6e2d8]      ; 005636cc | DAT_01c6e2d8
    SUB EBX,dword ptr [0x01c6e2dc]      ; 005636d2 | DAT_01c6e2dc
    SUB ECX,dword ptr [0x01c6e2e0]      ; 005636d8 | DAT_01c6e2e0
    MOV [0x00604d68],EAX                ; 005636de | DAT_00604d68
    MOV dword ptr [0x00604d6c],EBX      ; 005636e3 | DAT_00604d6c
    MOV dword ptr [0x00604d70],ECX      ; 005636e9 | DAT_00604d70
    IMUL dword ptr [0x01c6e2fc]         ; 005636ef | DAT_01c6e2fc
    MOV EBX,EAX                         ; 005636f5
    MOV ECX,EDX                         ; 005636f7
    MOV EAX,[0x00604d6c]                ; 005636f9 | DAT_00604d6c
    IMUL dword ptr [0x01c6e308]         ; 005636fe | DAT_01c6e308
    ADD EBX,EAX                         ; 00563704
    ADC ECX,EDX                         ; 00563706
    MOV EAX,[0x00604d70]                ; 00563708 | DAT_00604d70
    IMUL dword ptr [0x01c6e314]         ; 0056370d | DAT_01c6e314
    ADD EAX,EBX                         ; 00563713
    ADC EDX,ECX                         ; 00563715
    SHRD EAX,EDX,0x10                   ; 00563717
    MOV [0x00604d78],EAX                ; 0056371b | DAT_00604d78
    MOV EAX,[0x00604d68]                ; 00563720 | DAT_00604d68
    IMUL dword ptr [0x01c6e300]         ; 00563725 | DAT_01c6e300
    MOV EBX,EAX                         ; 0056372b
    MOV ECX,EDX                         ; 0056372d
    MOV EAX,[0x00604d6c]                ; 0056372f | DAT_00604d6c
    IMUL dword ptr [0x01c6e30c]         ; 00563734 | DAT_01c6e30c
    ADD EBX,EAX                         ; 0056373a
    ADC ECX,EDX                         ; 0056373c
    MOV EAX,[0x00604d70]                ; 0056373e | DAT_00604d70
    IMUL dword ptr [0x01c6e318]         ; 00563743 | DAT_01c6e318
    ADD EAX,EBX                         ; 00563749
    ADC EDX,ECX                         ; 0056374b
    SHRD EAX,EDX,0x10                   ; 0056374d
    MOV [0x00604d7c],EAX                ; 00563751 | DAT_00604d7c
    MOV EAX,[0x00604d68]                ; 00563756 | DAT_00604d68
    IMUL dword ptr [0x01c6e304]         ; 0056375b | DAT_01c6e304
    MOV EBX,EAX                         ; 00563761
    MOV ECX,EDX                         ; 00563763
    MOV EAX,[0x00604d6c]                ; 00563765 | DAT_00604d6c
    IMUL dword ptr [0x01c6e310]         ; 0056376a | DAT_01c6e310
    ADD EBX,EAX                         ; 00563770
    ADC ECX,EDX                         ; 00563772
    MOV EAX,[0x00604d70]                ; 00563774 | DAT_00604d70
    IMUL dword ptr [0x01c6e31c]         ; 00563779 | DAT_01c6e31c
    ADD EAX,EBX                         ; 0056377f
    ADC EDX,ECX                         ; 00563781
    SHRD EAX,EDX,0x10                   ; 00563783
    MOV [0x00604d80],EAX                ; 00563787 | DAT_00604d80
    NEG EAX                             ; 0056378c
    MOV EDX,EAX                         ; 0056378e
    XOR EAX,EAX                         ; 00563790
    MOV EBX,dword ptr [0x00604d78]      ; 00563792 | DAT_00604d78
    MOV ECX,dword ptr [0x00604d80]      ; 00563798 | DAT_00604d80
    CMP EBX,ECX                         ; 0056379e
    JLE 0x005637a7                      ; 005637a0
        ;   XREF to: 005637a7 (CONDITIONAL_JUMP)  ; LAB_005637a7
    OR EAX,0x80000001                   ; 005637a2
    CMP EBX,EDX                         ; 005637a7
        ;   Label: LAB_005637a7
    JGE 0x005637b0                      ; 005637a9
        ;   XREF to: 005637b0 (CONDITIONAL_JUMP)  ; LAB_005637b0
    OR EAX,0x80000002                   ; 005637ab
    MOV EBX,dword ptr [0x00604d7c]      ; 005637b0 | DAT_00604d7c
        ;   Label: LAB_005637b0
    CMP EBX,ECX                         ; 005637b6
    JLE 0x005637bf                      ; 005637b8
        ;   XREF to: 005637bf (CONDITIONAL_JUMP)  ; LAB_005637bf
    OR EAX,0x80000004                   ; 005637ba
    CMP EBX,EDX                         ; 005637bf
        ;   Label: LAB_005637bf
    JGE 0x005637c8                      ; 005637c1
        ;   XREF to: 005637c8 (CONDITIONAL_JUMP)  ; LAB_005637c8
    OR EAX,0x80000008                   ; 005637c3
    CMP ECX,0x0                         ; 005637c8
        ;   Label: LAB_005637c8
    JG 0x005637d2                       ; 005637cb
        ;   XREF to: 005637d2 (CONDITIONAL_JUMP)  ; LAB_005637d2
    OR EAX,0x80000010                   ; 005637cd
    TEST EAX,0xffffffff                 ; 005637d2
        ;   Label: LAB_005637d2
    JNZ 0x00563821                      ; 005637d7
        ;   XREF to: 00563821 (CONDITIONAL_JUMP)  ; LAB_00563821
    MOV EAX,[0x00604d78]                ; 005637d9 | DAT_00604d78
    MOV dword ptr [EDI],EAX             ; 005637de
    MOV dword ptr [EDI + 0x4],EBX       ; 005637e0
    MOV dword ptr [EDI + 0x8],ECX       ; 005637e3
    MOV EAX,0x7fffffff                  ; 005637e6
    XOR EDX,EDX                         ; 005637eb
    IDIV ECX                            ; 005637ed
    MOV dword ptr [EDI + 0xc],EAX       ; 005637ef
    MOV EAX,[0x00604d78]                ; 005637f2 | DAT_00604d78
    IMUL dword ptr [0x01c6b598]         ; 005637f7 | DAT_01c6b598
    IDIV ECX                            ; 005637fd
    ADD EAX,dword ptr [0x01c6b5a0]      ; 005637ff | DAT_01c6b5a0
    MOV dword ptr [EDI + 0x10],EAX      ; 00563805
    MOV EAX,[0x00604d7c]                ; 00563808 | DAT_00604d7c
    IMUL dword ptr [0x01c6b59c]         ; 0056380d | DAT_01c6b59c
    IDIV ECX                            ; 00563813
    ADD EAX,dword ptr [0x01c6b5a4]      ; 00563815 | DAT_01c6b5a4
    MOV dword ptr [EDI + 0x14],EAX      ; 0056381b
    POP EDI                             ; 0056381e
    POP ESI                             ; 0056381f
    RET                                 ; 00563820
    MOV EDX,dword ptr [0x00604d78]      ; 00563821 | DAT_00604d78
        ;   Label: LAB_00563821
    MOV dword ptr [EDI],EDX             ; 00563827
    MOV dword ptr [EDI + 0x4],EBX       ; 00563829
    MOV dword ptr [EDI + 0x8],ECX       ; 0056382c
    MOV dword ptr [EDI + 0x10],EAX      ; 0056382f
    POP EDI                             ; 00563832
    POP ESI                             ; 00563833
    RET                                 ; 00563834

