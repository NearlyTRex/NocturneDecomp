; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_0046c620(float *param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
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
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[6]:
;   FUN_00453990 at 00453bab
;   FUN_0046d110 at 0046d33e
;   FUN_004c9e50 at 004c9f1c
;   FUN_0051a470 at 0051a5df
;   FUN_00534960 at 005349a6
;   FUN_005520d0 at 00552193
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046c620
        ;   Label: FUN_0046c620
    PUSH EBP                            ; 0046c621
    MOV EBP,ESP                         ; 0046c622
    SUB ESP,0x3c                        ; 0046c624
    AND ESP,0xfffffff8                  ; 0046c627
    MOV EDX,dword ptr [EBP + 0xc]       ; 0046c62a
    MOV EBX,dword ptr [EBP + 0x10]      ; 0046c62d
    MOV ECX,dword ptr [EBP + 0x14]      ; 0046c630
    FLD float ptr [EDX + 0x28]          ; 0046c633
    FMUL float ptr [ECX + 0x4]          ; 0046c636
    FLD float ptr [EDX + 0x24]          ; 0046c639
    FMUL float ptr [ECX]                ; 0046c63c
    FADDP                               ; 0046c63e
    FLD float ptr [EDX + 0x2c]          ; 0046c640
    FMUL float ptr [ECX + 0x8]          ; 0046c643
    FADDP                               ; 0046c646
    FST float ptr [ESP + 0x8]           ; 0046c648
    FLDZ                                ; 0046c64c
    FCOMPP                              ; 0046c64e
    FNSTSW AX                           ; 0046c650
    SAHF                                ; 0046c652
    JNC 0x0046c7a9                      ; 0046c653
        ;   XREF to: 0046c7a9 (CONDITIONAL_JUMP)  ; LAB_0046c7a9
    FLD float ptr [EDX + 0x24]          ; 0046c659
    FMUL float ptr [EBX]                ; 0046c65c
    FADD float ptr [EDX + 0x30]         ; 0046c65e
    FLD float ptr [EDX + 0x28]          ; 0046c661
    FMUL float ptr [EBX + 0x4]          ; 0046c664
    FADDP                               ; 0046c667
    FLD float ptr [EDX + 0x2c]          ; 0046c669
    FMUL float ptr [EBX + 0x8]          ; 0046c66c
    FADDP                               ; 0046c66f
    FCHS                                ; 0046c671
    FST float ptr [ESP + 0xc]           ; 0046c673
    FLDZ                                ; 0046c677
    FCOMPP                              ; 0046c679
    FNSTSW AX                           ; 0046c67b
    SAHF                                ; 0046c67d
    JA 0x0046c7a9                       ; 0046c67e
        ;   XREF to: 0046c7a9 (CONDITIONAL_JUMP)  ; LAB_0046c7a9
    FLD float ptr [ESP + 0xc]           ; 0046c684
    FCOMP float ptr [ESP + 0x8]         ; 0046c688
    FNSTSW AX                           ; 0046c68c
    SAHF                                ; 0046c68e
    JA 0x0046c7a9                       ; 0046c68f
        ;   XREF to: 0046c7a9 (CONDITIONAL_JUMP)  ; LAB_0046c7a9
    FLD float ptr [ESP + 0xc]           ; 0046c695
    FDIV float ptr [ESP + 0x8]          ; 0046c699
    FST float ptr [ESP + 0xc]           ; 0046c69d
    FMUL float ptr [ECX]                ; 0046c6a1
    FADD float ptr [EBX]                ; 0046c6a3
    FLD float ptr [ESP + 0xc]           ; 0046c6a5
    FXCH                                ; 0046c6a9
    FSTP float ptr [ESP + 0x10]         ; 0046c6ab
    FMUL float ptr [ECX + 0x4]          ; 0046c6af
    FADD float ptr [EBX + 0x4]          ; 0046c6b2
    FLD float ptr [ESP + 0xc]           ; 0046c6b5
    FXCH                                ; 0046c6b9
    FSTP float ptr [ESP + 0x14]         ; 0046c6bb
    FMUL float ptr [ECX + 0x8]          ; 0046c6bf
    FADD float ptr [EBX + 0x8]          ; 0046c6c2
    FSTP float ptr [ESP + 0x18]         ; 0046c6c5
    MOV ECX,dword ptr [EDX + 0x34]      ; 0046c6c9
    CMP ECX,0x1                         ; 0046c6cc
    JNC 0x0046c813                      ; 0046c6cf
        ;   XREF to: 0046c813 (CONDITIONAL_JUMP)  ; LAB_0046c813
    TEST ECX,ECX                        ; 0046c6d5
    JNZ 0x0046c72b                      ; 0046c6d7
        ;   XREF to: 0046c72b (CONDITIONAL_JUMP)  ; LAB_0046c72b
    FLD float ptr [ESP + 0x14]          ; 0046c6d9
    FLD float ptr [ESP + 0x18]          ; 0046c6dd
    FLD float ptr [EDX + 0x10]          ; 0046c6e1
    FLD float ptr [EDX + 0x1c]          ; 0046c6e4
    FLD float ptr [EDX + 0x14]          ; 0046c6e7
    FLD float ptr [EDX + 0x20]          ; 0046c6ea
    FXCH ST5                            ; 0046c6ed
    FSUB float ptr [EDX + 0x4]          ; 0046c6ef
    FXCH ST3                            ; 0046c6f2
    FSUB float ptr [EDX + 0x4]          ; 0046c6f4
    FXCH ST2                            ; 0046c6f7
    FSUB float ptr [EDX + 0x4]          ; 0046c6f9
    FXCH ST4                            ; 0046c6fc
        ;   Label: LAB_0046c6fc
    FSUB float ptr [EDX + 0x8]          ; 0046c6fe
    FXCH                                ; 0046c701
    FSUB float ptr [EDX + 0x8]          ; 0046c703
    FXCH ST5                            ; 0046c706
    FSUB float ptr [EDX + 0x8]          ; 0046c708
    FXCH ST2                            ; 0046c70b
        ;   Label: LAB_0046c70b
    FSTP float ptr [ESP + 0x24]         ; 0046c70d
    FXCH ST3                            ; 0046c711
    FSTP float ptr [ESP + 0x20]         ; 0046c713
    FXCH ST2                            ; 0046c717
    FSTP float ptr [ESP + 0x1c]         ; 0046c719
    FXCH ST2                            ; 0046c71d
    FSTP float ptr [ESP + 0x2c]         ; 0046c71f
    FSTP float ptr [ESP + 0x28]         ; 0046c723
    FSTP float ptr [ESP + 0x34]         ; 0046c727
    FLD float ptr [ESP + 0x28]          ; 0046c72b
        ;   Label: LAB_0046c72b
    FLD float ptr [ESP + 0x24]          ; 0046c72f
    FMUL ST1                            ; 0046c733
    FLD float ptr [ESP + 0x20]          ; 0046c735
    FLD float ptr [ESP + 0x2c]          ; 0046c739
    FMUL ST1                            ; 0046c73d
    FSUBP ST2,ST0                       ; 0046c73f
    FLD1                                ; 0046c741
    FDIVRP ST2,ST0                      ; 0046c743
    FLD float ptr [ESP + 0x34]          ; 0046c745
    FMULP ST3                           ; 0046c749
    FMUL float ptr [ESP + 0x1c]         ; 0046c74b
    FSUBP ST2,ST0                       ; 0046c74f
    FSTP float ptr [ESP + 0x38]         ; 0046c751
    FMUL float ptr [ESP + 0x38]         ; 0046c755
    FST float ptr [ESP]                 ; 0046c759
    FLDZ                                ; 0046c75c
    FCOMPP                              ; 0046c75e
    FNSTSW AX                           ; 0046c760
    SAHF                                ; 0046c762
    JA 0x0046c7a9                       ; 0046c763
        ;   XREF to: 0046c7a9 (CONDITIONAL_JUMP)  ; LAB_0046c7a9
    FLD float ptr [ESP + 0x24]          ; 0046c765
    FMUL float ptr [ESP + 0x1c]         ; 0046c769
    FLD float ptr [ESP + 0x2c]          ; 0046c76d
    FMUL float ptr [ESP + 0x34]         ; 0046c771
    FSUBP                               ; 0046c775
    FMUL float ptr [ESP + 0x38]         ; 0046c777
    FST float ptr [ESP + 0x4]           ; 0046c77b
    FLDZ                                ; 0046c77f
    FCOMPP                              ; 0046c781
    FNSTSW AX                           ; 0046c783
    SAHF                                ; 0046c785
    JA 0x0046c7a9                       ; 0046c786
        ;   XREF to: 0046c7a9 (CONDITIONAL_JUMP)  ; LAB_0046c7a9
    FLD float ptr [ESP]                 ; 0046c788
    FADD float ptr [ESP + 0x4]          ; 0046c78b
    FLD1                                ; 0046c78f
    FCOMPP                              ; 0046c791
    FNSTSW AX                           ; 0046c793
    SAHF                                ; 0046c795
    JC 0x0046c7a9                       ; 0046c796
        ;   XREF to: 0046c7a9 (CONDITIONAL_JUMP)  ; LAB_0046c7a9
    MOV EDX,dword ptr [ESP + 0xc]       ; 0046c798
    MOV dword ptr [ESP + 0x30],EDX      ; 0046c79c
    MOV EAX,dword ptr [ESP + 0x30]      ; 0046c7a0
    MOV ESP,EBP                         ; 0046c7a4
    POP EBP                             ; 0046c7a6
    POP EBX                             ; 0046c7a7
    RET                                 ; 0046c7a8
    MOV dword ptr [ESP + 0x30],0xbf800000 ; 0046c7a9
        ;   Label: LAB_0046c7a9
    MOV EAX,dword ptr [ESP + 0x30]      ; 0046c7b1
    MOV ESP,EBP                         ; 0046c7b5
    POP EBP                             ; 0046c7b7
    POP EBX                             ; 0046c7b8
    RET                                 ; 0046c7b9
    FLD float ptr [ESP + 0x10]          ; 0046c7ba
        ;   Label: LAB_0046c7ba
    FLD float ptr [ESP + 0x18]          ; 0046c7be
    FLD float ptr [EDX + 0xc]           ; 0046c7c2
    FLD float ptr [EDX + 0x18]          ; 0046c7c5
    FLD float ptr [EDX + 0x14]          ; 0046c7c8
    FLD float ptr [EDX + 0x20]          ; 0046c7cb
    FXCH ST5                            ; 0046c7ce
    FSUB float ptr [EDX]                ; 0046c7d0
    FXCH ST3                            ; 0046c7d2
    FSUB float ptr [EDX]                ; 0046c7d4
    FXCH ST2                            ; 0046c7d6
    FSUB float ptr [EDX]                ; 0046c7d8
    JMP 0x0046c6fc                      ; 0046c7da
        ;   XREF to: 0046c6fc (UNCONDITIONAL_JUMP)  ; LAB_0046c6fc
    FLD float ptr [ESP + 0x10]          ; 0046c7df
        ;   Label: LAB_0046c7df
    FLD float ptr [ESP + 0x14]          ; 0046c7e3
    FLD float ptr [EDX + 0xc]           ; 0046c7e7
    FLD float ptr [EDX + 0x18]          ; 0046c7ea
    FLD float ptr [EDX + 0x10]          ; 0046c7ed
    FLD float ptr [EDX + 0x1c]          ; 0046c7f0
    FXCH ST5                            ; 0046c7f3
    FSUB float ptr [EDX]                ; 0046c7f5
    FXCH ST3                            ; 0046c7f7
    FSUB float ptr [EDX]                ; 0046c7f9
    FXCH ST2                            ; 0046c7fb
    FSUB float ptr [EDX]                ; 0046c7fd
    FXCH ST4                            ; 0046c7ff
    FSUB float ptr [EDX + 0x4]          ; 0046c801
    FXCH                                ; 0046c804
    FSUB float ptr [EDX + 0x4]          ; 0046c806
    FXCH ST5                            ; 0046c809
    FSUB float ptr [EDX + 0x4]          ; 0046c80b
    JMP 0x0046c70b                      ; 0046c80e
        ;   XREF to: 0046c70b (UNCONDITIONAL_JUMP)  ; LAB_0046c70b
    JBE 0x0046c7ba                      ; 0046c813
        ;   XREF to: 0046c7ba (CONDITIONAL_JUMP)  ; LAB_0046c7ba
        ;   Label: LAB_0046c813
    CMP ECX,0x2                         ; 0046c815
    JZ 0x0046c7df                       ; 0046c818
        ;   XREF to: 0046c7df (CONDITIONAL_JUMP)  ; LAB_0046c7df
    JMP 0x0046c72b                      ; 0046c81a
        ;   XREF to: 0046c72b (UNCONDITIONAL_JUMP)  ; LAB_0046c72b

