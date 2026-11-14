; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_xform_cpp_computeOrthogonalityError_FUN_005b65b0(CMatrix3x4f *matrix)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b65b0
        ;   Label: core_xform.cpp_computeOrthogonalityError_FUN_005b65b0
    PUSH ESI                            ; 005b65b1
    PUSH EDI                            ; 005b65b2
    PUSH EBP                            ; 005b65b3
    MOV EBP,ESP                         ; 005b65b4
    SUB ESP,0x84                        ; 005b65b6
    AND ESP,0xfffffff8                  ; 005b65bc
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b65bf
    FLD float ptr [EAX]                 ; 005b65c2
    FST double ptr [ESP]                ; 005b65c4
    FMUL double ptr [ESP]               ; 005b65c7
    FLD float ptr [EAX + 0x4]           ; 005b65ca
    FST double ptr [ESP + 0x8]          ; 005b65cd
    FMUL double ptr [ESP + 0x8]         ; 005b65d1
    FLD float ptr [EAX + 0x8]           ; 005b65d5
    FXCH                                ; 005b65d8
    FADDP ST2,ST0                       ; 005b65da
    FST double ptr [ESP + 0x10]         ; 005b65dc
    FMUL double ptr [ESP + 0x10]        ; 005b65e0
    FLD float ptr [EAX + 0x10]          ; 005b65e4
    FLD float ptr [EAX + 0x14]          ; 005b65e7
    FLD float ptr [EAX + 0x18]          ; 005b65ea
    FLD float ptr [EAX + 0x20]          ; 005b65ed
    FLD float ptr [EAX + 0x24]          ; 005b65f0
    FXCH ST4                            ; 005b65f3
    FSTP double ptr [ESP + 0x18]        ; 005b65f5
    FXCH ST4                            ; 005b65f9
    FADDP ST5,ST0                       ; 005b65fb
    FLD float ptr [EAX + 0x28]          ; 005b65fd
    FXCH ST5                            ; 005b6600
    FSQRT                               ; 005b6602
    FXCH ST2                            ; 005b6604
    FSTP double ptr [ESP + 0x20]        ; 005b6606
    FLD double ptr [ESP + 0x18]         ; 005b660a
    FMUL ST0                            ; 005b660e
    FLD double ptr [ESP + 0x20]         ; 005b6610
    FMUL ST0                            ; 005b6614
    FADDP                               ; 005b6616
    FXCH                                ; 005b6618
    FST double ptr [ESP + 0x28]         ; 005b661a
    FMUL double ptr [ESP + 0x28]        ; 005b661e
    FADDP                               ; 005b6622
    FSQRT                               ; 005b6624
    FXCH ST3                            ; 005b6626
    FST double ptr [ESP + 0x50]         ; 005b6628
    FMUL double ptr [ESP + 0x50]        ; 005b662c
    FXCH ST2                            ; 005b6630
    FST double ptr [ESP + 0x48]         ; 005b6632
    FMUL double ptr [ESP + 0x48]        ; 005b6636
    FADDP ST2,ST0                       ; 005b663a
    FXCH ST3                            ; 005b663c
    FST double ptr [ESP + 0x58]         ; 005b663e
    FMUL double ptr [ESP + 0x58]        ; 005b6642
    FADDP                               ; 005b6646
    FSQRT                               ; 005b6648
    FLDZ                                ; 005b664a
    FXCH ST3                            ; 005b664c
    FSTP double ptr [ESP + 0x40]        ; 005b664e
    FXCH                                ; 005b6652
    FSTP double ptr [ESP + 0x38]        ; 005b6654
    FSTP double ptr [ESP + 0x30]        ; 005b6658
    FCOMP double ptr [ESP + 0x40]       ; 005b665c
    FNSTSW AX                           ; 005b6660
    SAHF                                ; 005b6662
    JNC 0x005b67af                      ; 005b6663
        ;   XREF to: 005b67af (CONDITIONAL_JUMP)  ; LAB_005b67af
    FLDZ                                ; 005b6669
        ;   Label: LAB_005b6669
    FCOMP double ptr [ESP + 0x38]       ; 005b666b
    FNSTSW AX                           ; 005b666f
    SAHF                                ; 005b6671
    JC 0x005b6683                       ; 005b6672
        ;   XREF to: 005b6683 (CONDITIONAL_JUMP)  ; LAB_005b6683
    XOR EBX,EBX                         ; 005b6674
    MOV ESI,0x3ff00000                  ; 005b6676
    MOV dword ptr [ESP + 0x38],EBX      ; 005b667b
    MOV dword ptr [ESP + 0x3c],ESI      ; 005b667f
    FLDZ                                ; 005b6683
        ;   Label: LAB_005b6683
    FCOMP double ptr [ESP + 0x30]       ; 005b6685
    FNSTSW AX                           ; 005b6689
    SAHF                                ; 005b668b
    JNC 0x005b67c3                      ; 005b668c
        ;   XREF to: 005b67c3 (CONDITIONAL_JUMP)  ; LAB_005b67c3
    FLD1                                ; 005b6692
        ;   Label: LAB_005b6692
    FDIV double ptr [ESP + 0x40]        ; 005b6694
    FLD1                                ; 005b6698
    FDIV double ptr [ESP + 0x38]        ; 005b669a
    FLD double ptr [ESP]                ; 005b669e
    FMUL ST2                            ; 005b66a1
    FLD double ptr [ESP + 0x8]          ; 005b66a3
    FMUL ST3                            ; 005b66a7
    FLD double ptr [ESP + 0x10]         ; 005b66a9
    FMULP ST4                           ; 005b66ad
    FLD double ptr [ESP + 0x18]         ; 005b66af
    FXCH ST3                            ; 005b66b3
    FSTP double ptr [ESP + 0x78]        ; 005b66b5
    FXCH ST2                            ; 005b66b9
    FMUL double ptr [ESP + 0x78]        ; 005b66bb
    FLD double ptr [ESP + 0x20]         ; 005b66bf
    FMUL double ptr [ESP + 0x78]        ; 005b66c3
    FLD double ptr [ESP + 0x28]         ; 005b66c7
    FXCH ST3                            ; 005b66cb
    FSTP double ptr [ESP]               ; 005b66cd
    FLD1                                ; 005b66d0
    FLD double ptr [ESP + 0x50]         ; 005b66d2
    FXCH ST4                            ; 005b66d6
    FMUL double ptr [ESP + 0x78]        ; 005b66d8
    FXCH                                ; 005b66dc
    FDIV double ptr [ESP + 0x30]        ; 005b66de
    FSTP double ptr [ESP + 0x78]        ; 005b66e2
    FXCH ST3                            ; 005b66e6
    FMUL double ptr [ESP + 0x78]        ; 005b66e8
    FXCH ST4                            ; 005b66ec
    FSTP double ptr [ESP + 0x8]         ; 005b66ee
    FLD double ptr [ESP + 0x48]         ; 005b66f2
    FMUL double ptr [ESP + 0x78]        ; 005b66f6
    FXCH ST5                            ; 005b66fa
    FSTP double ptr [ESP + 0x10]        ; 005b66fc
    FLD double ptr [ESP + 0x58]         ; 005b6700
    FMUL double ptr [ESP + 0x78]        ; 005b6704
    FXCH ST2                            ; 005b6708
    FSTP double ptr [ESP + 0x18]        ; 005b670a
    FLD double ptr [ESP]                ; 005b670e
    FMUL double ptr [ESP + 0x18]        ; 005b6711
    FXCH ST4                            ; 005b6715
    FSTP double ptr [ESP + 0x50]        ; 005b6717
    FLD double ptr [ESP]                ; 005b671b
    FMUL double ptr [ESP + 0x50]        ; 005b671e
    FXCH                                ; 005b6722
    FSTP double ptr [ESP + 0x20]        ; 005b6724
    FLD double ptr [ESP + 0x18]         ; 005b6728
    FMUL double ptr [ESP + 0x50]        ; 005b672c
    FXCH ST3                            ; 005b6730
    FSTP double ptr [ESP + 0x28]        ; 005b6732
    FLD double ptr [ESP + 0x8]          ; 005b6736
    FMUL double ptr [ESP + 0x20]        ; 005b673a
    FXCH ST5                            ; 005b673e
    FSTP double ptr [ESP + 0x48]        ; 005b6740
    FLD double ptr [ESP + 0x8]          ; 005b6744
    FMUL double ptr [ESP + 0x48]        ; 005b6748
    FLD double ptr [ESP + 0x20]         ; 005b674c
    FXCH ST6                            ; 005b6750
    FADDP ST5,ST0                       ; 005b6752
    FXCH ST5                            ; 005b6754
    FMUL double ptr [ESP + 0x48]        ; 005b6756
    FLD double ptr [ESP + 0x10]         ; 005b675a
    FMUL double ptr [ESP + 0x28]        ; 005b675e
    FXCH ST6                            ; 005b6762
    FADDP ST2,ST0                       ; 005b6764
    FXCH ST2                            ; 005b6766
    FSTP double ptr [ESP + 0x58]        ; 005b6768
    FLD double ptr [ESP + 0x10]         ; 005b676c
    FMUL double ptr [ESP + 0x58]        ; 005b6770
    FXCH ST5                            ; 005b6774
    FADDP ST4,ST0                       ; 005b6776
    FLD ST3                             ; 005b6778
    FMULP ST4                           ; 005b677a
    FXCH                                ; 005b677c
    FADDP ST2,ST0                       ; 005b677e
    FADDP ST3,ST0                       ; 005b6780
    FLD ST2                             ; 005b6782
    FMULP ST3                           ; 005b6784
    FLD double ptr [ESP + 0x28]         ; 005b6786
    FMUL double ptr [ESP + 0x58]        ; 005b678a
    FXCH ST3                            ; 005b678e
    FADDP ST2,ST0                       ; 005b6790
    FADDP ST2,ST0                       ; 005b6792
    FLD ST1                             ; 005b6794
    FMULP ST2                           ; 005b6796
    FADDP                               ; 005b6798
    FSTP float ptr [ESP + 0x80]         ; 005b679a
    MOV EAX,dword ptr [ESP + 0x80]      ; 005b67a1
    MOV ESP,EBP                         ; 005b67a8
    POP EBP                             ; 005b67aa
    POP EDI                             ; 005b67ab
    POP ESI                             ; 005b67ac
    POP EBX                             ; 005b67ad
    RET                                 ; 005b67ae
    XOR EDX,EDX                         ; 005b67af
        ;   Label: LAB_005b67af
    MOV ECX,0x3ff00000                  ; 005b67b1
    MOV dword ptr [ESP + 0x40],EDX      ; 005b67b6
    MOV dword ptr [ESP + 0x44],ECX      ; 005b67ba
    JMP 0x005b6669                      ; 005b67be
        ;   XREF to: 005b6669 (UNCONDITIONAL_JUMP)  ; LAB_005b6669
    XOR EDI,EDI                         ; 005b67c3
        ;   Label: LAB_005b67c3
    MOV EAX,0x3ff00000                  ; 005b67c5
    MOV dword ptr [ESP + 0x30],EDI      ; 005b67ca
    MOV dword ptr [ESP + 0x34],EAX      ; 005b67ce
    JMP 0x005b6692                      ; 005b67d2
        ;   XREF to: 005b6692 (UNCONDITIONAL_JUMP)  ; LAB_005b6692

