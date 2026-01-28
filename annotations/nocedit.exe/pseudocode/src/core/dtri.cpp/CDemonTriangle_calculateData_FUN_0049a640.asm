; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dtri_cpp_CDemonTriangle_calculateData_FUN_0049a640(CDemonTriangle *triangle)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   triangle
; Local Variables:
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 at 0049a7d5
;   core_dtri.cpp_CDemonTriangle_readDataCSV_FUN_0049a4e0 at 0049a519
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0049a640
        ;   Label: core_dtri.cpp_CDemonTriangle_calculateData_FUN_0049a640
    MOV EBP,ESP                         ; 0049a641
    SUB ESP,0x30                        ; 0049a643
    AND ESP,0xfffffff8                  ; 0049a646
    MOV EDX,dword ptr [EBP + 0x8]       ; 0049a649
    FLD float ptr [EDX + 0x20]          ; 0049a64c
    FLD float ptr [EDX + 0x10]          ; 0049a64f
    FSUB float ptr [EDX + 0x4]          ; 0049a652
    FXCH                                ; 0049a655
    FSUB float ptr [EDX + 0x14]         ; 0049a657
    FLD ST1                             ; 0049a65a
    FXCH                                ; 0049a65c
    FSTP float ptr [ESP + 0x24]         ; 0049a65e
    FMUL float ptr [ESP + 0x24]         ; 0049a662
    FLD float ptr [EDX + 0x18]          ; 0049a666
    FLD float ptr [EDX + 0x14]          ; 0049a669
    FSUB float ptr [EDX + 0x8]          ; 0049a66c
    FXCH                                ; 0049a66f
    FSUB float ptr [EDX + 0xc]          ; 0049a671
    FST float ptr [ESP + 0x1c]          ; 0049a674
    FMUL ST1                            ; 0049a678
    FLD float ptr [EDX + 0x1c]          ; 0049a67a
    FLD float ptr [EDX + 0xc]           ; 0049a67d
    FSUB float ptr [EDX]                ; 0049a680
    FXCH                                ; 0049a682
    FSUB float ptr [EDX + 0x10]         ; 0049a684
    FLD ST1                             ; 0049a687
    FMUL ST1                            ; 0049a689
    FXCH                                ; 0049a68b
    FMULP ST4                           ; 0049a68d
    FXCH                                ; 0049a68f
    FMUL float ptr [ESP + 0x24]         ; 0049a691
    FLD float ptr [ESP + 0x1c]          ; 0049a695
    FMULP ST6                           ; 0049a699
    FXCH ST3                            ; 0049a69b
    FSUBP ST4,ST0                       ; 0049a69d
    FXCH ST2                            ; 0049a69f
    FSUBP                               ; 0049a6a1
    FXCH ST2                            ; 0049a6a3
    FST float ptr [EDX + 0x24]          ; 0049a6a5
    FMUL float ptr [EDX + 0x24]         ; 0049a6a8
    FXCH ST2                            ; 0049a6ab
    FST float ptr [EDX + 0x28]          ; 0049a6ad
    FMUL float ptr [EDX + 0x28]         ; 0049a6b0
    FXCH ST3                            ; 0049a6b3
    FSUBP                               ; 0049a6b5
    FXCH ST2                            ; 0049a6b7
    FADDP                               ; 0049a6b9
    FXCH                                ; 0049a6bb
    FST float ptr [EDX + 0x2c]          ; 0049a6bd
    FMUL float ptr [EDX + 0x2c]         ; 0049a6c0
    FADDP                               ; 0049a6c3
    FSQRT                               ; 0049a6c5
    FSTP float ptr [ESP + 0x2c]         ; 0049a6c7
    TEST dword ptr [ESP + 0x2c],0x7fffffff ; 0049a6cb
    JZ 0x0049a769                       ; 0049a6d3
        ;   XREF to: 0049a769 (CONDITIONAL_JUMP)  ; LAB_0049a769
    FLD float ptr [EDX + 0x24]          ; 0049a6d9
        ;   Label: LAB_0049a6d9
    FCHS                                ; 0049a6dc
    FLD1                                ; 0049a6de
    FDIV float ptr [ESP + 0x2c]         ; 0049a6e0
    FLD float ptr [EDX + 0x28]          ; 0049a6e4
    FCHS                                ; 0049a6e7
    FMUL ST1                            ; 0049a6e9
    FST float ptr [EDX + 0x28]          ; 0049a6eb
    FABS                                ; 0049a6ee
    FXCH ST2                            ; 0049a6f0
    FMUL ST1                            ; 0049a6f2
    FST float ptr [EDX + 0x24]          ; 0049a6f4
    FABS                                ; 0049a6f7
    FLD float ptr [EDX + 0x4]           ; 0049a6f9
    FMUL float ptr [EDX + 0x28]         ; 0049a6fc
    FLD float ptr [EDX]                 ; 0049a6ff
    FMUL float ptr [EDX + 0x24]         ; 0049a701
    FLD float ptr [EDX + 0x2c]          ; 0049a704
    FCHS                                ; 0049a707
    FMULP ST4                           ; 0049a709
    FCHS                                ; 0049a70b
    FSUBRP                              ; 0049a70d
    FXCH ST2                            ; 0049a70f
    FSTP float ptr [EDX + 0x2c]         ; 0049a711
    FLD float ptr [EDX + 0x8]           ; 0049a714
    FMUL float ptr [EDX + 0x2c]         ; 0049a717
    FSUBP ST2,ST0                       ; 0049a71a
    FXCH                                ; 0049a71c
    FSTP float ptr [EDX + 0x30]         ; 0049a71e
    FSTP double ptr [ESP]               ; 0049a721
    FCOMP double ptr [ESP]              ; 0049a724
    FNSTSW AX                           ; 0049a727
    SAHF                                ; 0049a729
    JNC 0x0049a739                      ; 0049a72a
        ;   XREF to: 0049a739 (CONDITIONAL_JUMP)  ; LAB_0049a739
    FLD float ptr [EDX + 0x2c]          ; 0049a72c
    FABS                                ; 0049a72f
    FCOMP double ptr [ESP]              ; 0049a731
    FNSTSW AX                           ; 0049a734
    SAHF                                ; 0049a736
    JC 0x0049a776                       ; 0049a737
        ;   XREF to: 0049a776 (CONDITIONAL_JUMP)  ; LAB_0049a776
    FLD float ptr [EDX + 0x24]          ; 0049a739
        ;   Label: LAB_0049a739
    FABS                                ; 0049a73c
    FLD float ptr [EDX + 0x28]          ; 0049a73e
    FABS                                ; 0049a741
    FSTP double ptr [ESP + 0x8]         ; 0049a743
    FCOMP double ptr [ESP + 0x8]        ; 0049a747
    FNSTSW AX                           ; 0049a74b
    SAHF                                ; 0049a74d
    JNC 0x0049a781                      ; 0049a74e
        ;   XREF to: 0049a781 (CONDITIONAL_JUMP)  ; LAB_0049a781
    FLD float ptr [EDX + 0x2c]          ; 0049a750
    FABS                                ; 0049a753
    FCOMP double ptr [ESP + 0x8]        ; 0049a755
    FNSTSW AX                           ; 0049a759
    SAHF                                ; 0049a75b
    JNC 0x0049a781                      ; 0049a75c
        ;   XREF to: 0049a781 (CONDITIONAL_JUMP)  ; LAB_0049a781
    MOV dword ptr [EDX + 0x34],0x1      ; 0049a75e
    MOV ESP,EBP                         ; 0049a765
    POP EBP                             ; 0049a767
    RET                                 ; 0049a768
    MOV dword ptr [ESP + 0x2c],0x3f800000 ; 0049a769
        ;   Label: LAB_0049a769
    JMP 0x0049a6d9                      ; 0049a771
        ;   XREF to: 0049a6d9 (UNCONDITIONAL_JUMP)  ; LAB_0049a6d9
    MOV dword ptr [EDX + 0x34],0x0      ; 0049a776
        ;   Label: LAB_0049a776
    MOV ESP,EBP                         ; 0049a77d
    POP EBP                             ; 0049a77f
    RET                                 ; 0049a780
    MOV dword ptr [EDX + 0x34],0x2      ; 0049a781
        ;   Label: LAB_0049a781
    MOV ESP,EBP                         ; 0049a788
    POP EBP                             ; 0049a78a
    RET                                 ; 0049a78b

