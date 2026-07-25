; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_CDemonTriangle_calculateData_FUN_0046c460(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   FUN_0046c300 at 0046c339
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0046c5b0 at 0046c5f5
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0046c460
        ;   Label: core_dtri.cpp_CDemonTriangle_calculateData_FUN_0046c460
    MOV EBP,ESP                         ; 0046c461
    SUB ESP,0x30                        ; 0046c463
    AND ESP,0xfffffff8                  ; 0046c466
    MOV EDX,dword ptr [EBP + 0x8]       ; 0046c469
    FLD float ptr [EDX + 0x20]          ; 0046c46c
    FLD float ptr [EDX + 0x10]          ; 0046c46f
    FSUB float ptr [EDX + 0x4]          ; 0046c472
    FXCH                                ; 0046c475
    FSUB float ptr [EDX + 0x14]         ; 0046c477
    FLD ST1                             ; 0046c47a
    FXCH                                ; 0046c47c
    FSTP float ptr [ESP + 0x24]         ; 0046c47e
    FMUL float ptr [ESP + 0x24]         ; 0046c482
    FLD float ptr [EDX + 0x18]          ; 0046c486
    FLD float ptr [EDX + 0x14]          ; 0046c489
    FSUB float ptr [EDX + 0x8]          ; 0046c48c
    FXCH                                ; 0046c48f
    FSUB float ptr [EDX + 0xc]          ; 0046c491
    FST float ptr [ESP + 0x1c]          ; 0046c494
    FMUL ST1                            ; 0046c498
    FLD float ptr [EDX + 0x1c]          ; 0046c49a
    FLD float ptr [EDX + 0xc]           ; 0046c49d
    FSUB float ptr [EDX]                ; 0046c4a0
    FXCH                                ; 0046c4a2
    FSUB float ptr [EDX + 0x10]         ; 0046c4a4
    FLD ST1                             ; 0046c4a7
    FMUL ST1                            ; 0046c4a9
    FXCH                                ; 0046c4ab
    FMULP ST4                           ; 0046c4ad
    FXCH                                ; 0046c4af
    FMUL float ptr [ESP + 0x24]         ; 0046c4b1
    FLD float ptr [ESP + 0x1c]          ; 0046c4b5
    FMULP ST6                           ; 0046c4b9
    FXCH ST3                            ; 0046c4bb
    FSUBP ST4,ST0                       ; 0046c4bd
    FXCH ST2                            ; 0046c4bf
    FSUBP                               ; 0046c4c1
    FXCH ST2                            ; 0046c4c3
    FST float ptr [EDX + 0x24]          ; 0046c4c5
    FMUL float ptr [EDX + 0x24]         ; 0046c4c8
    FXCH ST2                            ; 0046c4cb
    FST float ptr [EDX + 0x28]          ; 0046c4cd
    FMUL float ptr [EDX + 0x28]         ; 0046c4d0
    FXCH ST3                            ; 0046c4d3
    FSUBP                               ; 0046c4d5
    FXCH ST2                            ; 0046c4d7
    FADDP                               ; 0046c4d9
    FXCH                                ; 0046c4db
    FST float ptr [EDX + 0x2c]          ; 0046c4dd
    FMUL float ptr [EDX + 0x2c]         ; 0046c4e0
    FADDP                               ; 0046c4e3
    FSQRT                               ; 0046c4e5
    FSTP float ptr [ESP + 0x2c]         ; 0046c4e7
    TEST dword ptr [ESP + 0x2c],0x7fffffff ; 0046c4eb
    JZ 0x0046c589                       ; 0046c4f3
        ;   XREF to: 0046c589 (CONDITIONAL_JUMP)  ; LAB_0046c589
    FLD float ptr [EDX + 0x24]          ; 0046c4f9
        ;   Label: LAB_0046c4f9
    FCHS                                ; 0046c4fc
    FLD1                                ; 0046c4fe
    FDIV float ptr [ESP + 0x2c]         ; 0046c500
    FLD float ptr [EDX + 0x28]          ; 0046c504
    FCHS                                ; 0046c507
    FMUL ST1                            ; 0046c509
    FST float ptr [EDX + 0x28]          ; 0046c50b
    FABS                                ; 0046c50e
    FXCH ST2                            ; 0046c510
    FMUL ST1                            ; 0046c512
    FST float ptr [EDX + 0x24]          ; 0046c514
    FABS                                ; 0046c517
    FLD float ptr [EDX + 0x4]           ; 0046c519
    FMUL float ptr [EDX + 0x28]         ; 0046c51c
    FLD float ptr [EDX]                 ; 0046c51f
    FMUL float ptr [EDX + 0x24]         ; 0046c521
    FLD float ptr [EDX + 0x2c]          ; 0046c524
    FCHS                                ; 0046c527
    FMULP ST4                           ; 0046c529
    FCHS                                ; 0046c52b
    FSUBRP                              ; 0046c52d
    FXCH ST2                            ; 0046c52f
    FSTP float ptr [EDX + 0x2c]         ; 0046c531
    FLD float ptr [EDX + 0x8]           ; 0046c534
    FMUL float ptr [EDX + 0x2c]         ; 0046c537
    FSUBP ST2,ST0                       ; 0046c53a
    FXCH                                ; 0046c53c
    FSTP float ptr [EDX + 0x30]         ; 0046c53e
    FSTP double ptr [ESP]               ; 0046c541
    FCOMP double ptr [ESP]              ; 0046c544
    FNSTSW AX                           ; 0046c547
    SAHF                                ; 0046c549
    JNC 0x0046c559                      ; 0046c54a
        ;   XREF to: 0046c559 (CONDITIONAL_JUMP)  ; LAB_0046c559
    FLD float ptr [EDX + 0x2c]          ; 0046c54c
    FABS                                ; 0046c54f
    FCOMP double ptr [ESP]              ; 0046c551
    FNSTSW AX                           ; 0046c554
    SAHF                                ; 0046c556
    JC 0x0046c596                       ; 0046c557
        ;   XREF to: 0046c596 (CONDITIONAL_JUMP)  ; LAB_0046c596
    FLD float ptr [EDX + 0x24]          ; 0046c559
        ;   Label: LAB_0046c559
    FABS                                ; 0046c55c
    FLD float ptr [EDX + 0x28]          ; 0046c55e
    FABS                                ; 0046c561
    FSTP double ptr [ESP + 0x8]         ; 0046c563
    FCOMP double ptr [ESP + 0x8]        ; 0046c567
    FNSTSW AX                           ; 0046c56b
    SAHF                                ; 0046c56d
    JNC 0x0046c5a1                      ; 0046c56e
        ;   XREF to: 0046c5a1 (CONDITIONAL_JUMP)  ; LAB_0046c5a1
    FLD float ptr [EDX + 0x2c]          ; 0046c570
    FABS                                ; 0046c573
    FCOMP double ptr [ESP + 0x8]        ; 0046c575
    FNSTSW AX                           ; 0046c579
    SAHF                                ; 0046c57b
    JNC 0x0046c5a1                      ; 0046c57c
        ;   XREF to: 0046c5a1 (CONDITIONAL_JUMP)  ; LAB_0046c5a1
    MOV dword ptr [EDX + 0x34],0x1      ; 0046c57e
    MOV ESP,EBP                         ; 0046c585
    POP EBP                             ; 0046c587
    RET                                 ; 0046c588
    MOV dword ptr [ESP + 0x2c],0x3f800000 ; 0046c589
        ;   Label: LAB_0046c589
    JMP 0x0046c4f9                      ; 0046c591
        ;   XREF to: 0046c4f9 (UNCONDITIONAL_JUMP)  ; LAB_0046c4f9
    MOV dword ptr [EDX + 0x34],0x0      ; 0046c596
        ;   Label: LAB_0046c596
    MOV ESP,EBP                         ; 0046c59d
    POP EBP                             ; 0046c59f
    RET                                 ; 0046c5a0
    MOV dword ptr [EDX + 0x34],0x2      ; 0046c5a1
        ;   Label: LAB_0046c5a1
    MOV ESP,EBP                         ; 0046c5a8
    POP EBP                             ; 0046c5aa
    RET                                 ; 0046c5ab

