; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00588750(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[1]:
;   FUN_0058b3f0 at 0058bb90
;
; Referenced Globals:
;   undefined4 DAT_005d83bf
;   undefined4 DAT_005d83c7
;   undefined4 DAT_005d83cf
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00588750
        ;   Label: FUN_00588750
    MOV EBP,ESP                         ; 00588751
    SUB ESP,0x28                        ; 00588753
    AND ESP,0xfffffff8                  ; 00588756
    MOV EDX,dword ptr [EBP + 0x8]       ; 00588759
    FLD float ptr [EDX]                 ; 0058875c
    FST double ptr [ESP + 0x8]          ; 0058875e
    FCOMP double ptr [0x005d83bf]       ; 00588762 | DAT_005d83bf
    FNSTSW AX                           ; 00588768
    SAHF                                ; 0058876a
    JC 0x00588828                       ; 0058876b
        ;   XREF to: 00588828 (CONDITIONAL_JUMP)  ; LAB_00588828
    FLD float ptr [EDX]                 ; 00588771
        ;   Label: LAB_00588771
    FLD1                                ; 00588773
    FCOMPP                              ; 00588775
    FNSTSW AX                           ; 00588777
    SAHF                                ; 00588779
    JBE 0x005887c2                      ; 0058877a
        ;   XREF to: 005887c2 (CONDITIONAL_JUMP)  ; LAB_005887c2
    FLD float ptr [EDX + 0x4]           ; 0058877c
    FLD1                                ; 0058877f
    FCOMPP                              ; 00588781
    FNSTSW AX                           ; 00588783
    SAHF                                ; 00588785
    JBE 0x005887c2                      ; 00588786
        ;   XREF to: 005887c2 (CONDITIONAL_JUMP)  ; LAB_005887c2
    FLD float ptr [EDX + 0x8]           ; 00588788
    FST double ptr [ESP + 0x20]         ; 0058878b
    FCOMP double ptr [0x005d83bf]       ; 0058878f | DAT_005d83bf
    FNSTSW AX                           ; 00588795
    SAHF                                ; 00588797
    JBE 0x005887c2                      ; 00588798
        ;   XREF to: 005887c2 (CONDITIONAL_JUMP)  ; LAB_005887c2
    FLD double ptr [ESP + 0x20]         ; 0058879a
    FCOMP double ptr [0x005d83cf]       ; 0058879e | DAT_005d83cf
    FNSTSW AX                           ; 005887a4
    SAHF                                ; 005887a6
    JNC 0x005887c2                      ; 005887a7
        ;   XREF to: 005887c2 (CONDITIONAL_JUMP)  ; LAB_005887c2
    FLD float ptr [EDX + 0x8]           ; 005887a9
    FCOMP float ptr [EDX]               ; 005887ac
    FNSTSW AX                           ; 005887ae
    SAHF                                ; 005887b0
    JBE 0x005887c2                      ; 005887b1
        ;   XREF to: 005887c2 (CONDITIONAL_JUMP)  ; LAB_005887c2
    FLD float ptr [EDX + 0x8]           ; 005887b3
    FCOMP float ptr [EDX + 0x4]         ; 005887b6
    FNSTSW AX                           ; 005887b9
    SAHF                                ; 005887bb
    JA 0x00588891                       ; 005887bc
        ;   XREF to: 00588891 (CONDITIONAL_JUMP)  ; LAB_00588891
    FLD float ptr [EDX]                 ; 005887c2
        ;   Label: LAB_005887c2
    FLD1                                ; 005887c4
    FCOMPP                              ; 005887c6
    FNSTSW AX                           ; 005887c8
    SAHF                                ; 005887ca
    JBE 0x0058888b                      ; 005887cb
        ;   XREF to: 0058888b (CONDITIONAL_JUMP)  ; LAB_0058888b
    FLD float ptr [EDX + 0x4]           ; 005887d1
    FLD1                                ; 005887d4
    FCOMPP                              ; 005887d6
    FNSTSW AX                           ; 005887d8
    SAHF                                ; 005887da
    JBE 0x0058888b                      ; 005887db
        ;   XREF to: 0058888b (CONDITIONAL_JUMP)  ; LAB_0058888b
    FLD1                                ; 005887e1
    FLD float ptr [EDX + 0x8]           ; 005887e3
    FSTP double ptr [ESP + 0x10]        ; 005887e6
    FCOMP double ptr [ESP + 0x10]       ; 005887ea
    FNSTSW AX                           ; 005887ee
    SAHF                                ; 005887f0
    JNC 0x0058888b                      ; 005887f1
        ;   XREF to: 0058888b (CONDITIONAL_JUMP)  ; LAB_0058888b
    FLD double ptr [ESP + 0x10]         ; 005887f7
    FCOMP double ptr [0x005d83bf]       ; 005887fb | DAT_005d83bf
    FNSTSW AX                           ; 00588801
    SAHF                                ; 00588803
    JNC 0x0058888b                      ; 00588804
        ;   XREF to: 0058888b (CONDITIONAL_JUMP)  ; LAB_0058888b
    FLD float ptr [EDX + 0x8]           ; 0058880a
    FCOMP float ptr [EDX]               ; 0058880d
    FNSTSW AX                           ; 0058880f
    SAHF                                ; 00588811
    JBE 0x0058888b                      ; 00588812
        ;   XREF to: 0058888b (CONDITIONAL_JUMP)  ; LAB_0058888b
    FLD float ptr [EDX + 0x8]           ; 00588814
    FCOMP float ptr [EDX + 0x4]         ; 00588817
    FNSTSW AX                           ; 0058881a
    SAHF                                ; 0058881c
    JBE 0x0058888b                      ; 0058881d
        ;   XREF to: 0058888b (CONDITIONAL_JUMP)  ; LAB_0058888b
    MOV EAX,0x3                         ; 0058881f
    MOV ESP,EBP                         ; 00588824
    POP EBP                             ; 00588826
    RET                                 ; 00588827
    FLD float ptr [EDX + 0x4]           ; 00588828
        ;   Label: LAB_00588828
    FST double ptr [ESP + 0x18]         ; 0058882b
    FCOMP double ptr [0x005d83bf]       ; 0058882f | DAT_005d83bf
    FNSTSW AX                           ; 00588835
    SAHF                                ; 00588837
    JNC 0x00588771                      ; 00588838
        ;   XREF to: 00588771 (CONDITIONAL_JUMP)  ; LAB_00588771
    FLD float ptr [EDX + 0x8]           ; 0058883e
    FST double ptr [ESP]                ; 00588841
    FCOMP double ptr [0x005d83bf]       ; 00588844 | DAT_005d83bf
    FNSTSW AX                           ; 0058884a
    SAHF                                ; 0058884c
    JNC 0x00588771                      ; 0058884d
        ;   XREF to: 00588771 (CONDITIONAL_JUMP)  ; LAB_00588771
    FLD double ptr [ESP + 0x8]          ; 00588853
    FCOMP double ptr [0x005d83c7]       ; 00588857 | DAT_005d83c7
    FNSTSW AX                           ; 0058885d
    SAHF                                ; 0058885f
    JBE 0x00588771                      ; 00588860
        ;   XREF to: 00588771 (CONDITIONAL_JUMP)  ; LAB_00588771
    FLD double ptr [ESP + 0x18]         ; 00588866
    FCOMP double ptr [0x005d83c7]       ; 0058886a | DAT_005d83c7
    FNSTSW AX                           ; 00588870
    SAHF                                ; 00588872
    JBE 0x00588771                      ; 00588873
        ;   XREF to: 00588771 (CONDITIONAL_JUMP)  ; LAB_00588771
    FLD double ptr [ESP]                ; 00588879
    FCOMP double ptr [0x005d83c7]       ; 0058887c | DAT_005d83c7
    FNSTSW AX                           ; 00588882
    SAHF                                ; 00588884
    JBE 0x00588771                      ; 00588885
        ;   XREF to: 00588771 (CONDITIONAL_JUMP)  ; LAB_00588771
    XOR EAX,EAX                         ; 0058888b
        ;   Label: LAB_0058888b
    MOV ESP,EBP                         ; 0058888d
    POP EBP                             ; 0058888f
    RET                                 ; 00588890
    MOV EAX,0x1                         ; 00588891
        ;   Label: LAB_00588891
    MOV ESP,EBP                         ; 00588896
    POP EBP                             ; 00588898
    RET                                 ; 00588899

