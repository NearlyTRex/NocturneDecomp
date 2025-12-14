; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float core_xform.cpp_computeOrthogonalityError_FUN_005f6460(CMatrix3x4f * matrix)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix
; Local Variables:
; undefined8       Stack[-0x98]:8  local_98
; undefined8       Stack[-0x90]:8  local_90
; undefined8       Stack[-0x88]:8  local_88
; undefined8       Stack[-0x80]:8  local_80
; undefined8       Stack[-0x78]:8  local_78
; undefined8       Stack[-0x70]:8  local_70
; undefined8       Stack[-0x68]:8  local_68
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f6460
        ;   Label: core_xform.cpp_computeOrthogonalityError_FUN_005f6460
    PUSH ESI                            ; 005f6461
    PUSH EDI                            ; 005f6462
    PUSH EBP                            ; 005f6463
    MOV EBP,ESP                         ; 005f6464
    SUB ESP,0x84                        ; 005f6466
    AND ESP,0xfffffff8                  ; 005f646c
    MOV EAX,dword ptr [EBP + 0x14]      ; 005f646f
    FLD float ptr [EAX]                 ; 005f6472
    FST double ptr [ESP]                ; 005f6474
    FMUL double ptr [ESP]               ; 005f6477
    FLD float ptr [EAX + 0x4]           ; 005f647a
    FST double ptr [ESP + 0x8]          ; 005f647d
    FMUL double ptr [ESP + 0x8]         ; 005f6481
    FLD float ptr [EAX + 0x8]           ; 005f6485
    FXCH                                ; 005f6488
    FADDP ST2,ST0                       ; 005f648a
    FST double ptr [ESP + 0x10]         ; 005f648c
    FMUL double ptr [ESP + 0x10]        ; 005f6490
    FLD float ptr [EAX + 0x10]          ; 005f6494
    FLD float ptr [EAX + 0x14]          ; 005f6497
    FLD float ptr [EAX + 0x18]          ; 005f649a
    FLD float ptr [EAX + 0x20]          ; 005f649d
    FLD float ptr [EAX + 0x24]          ; 005f64a0
    FXCH ST4                            ; 005f64a3
    FSTP double ptr [ESP + 0x18]        ; 005f64a5
    FXCH ST4                            ; 005f64a9
    FADDP ST5,ST0                       ; 005f64ab
    FLD float ptr [EAX + 0x28]          ; 005f64ad
    FXCH ST5                            ; 005f64b0
    FSQRT                               ; 005f64b2
    FXCH ST2                            ; 005f64b4
    FSTP double ptr [ESP + 0x20]        ; 005f64b6
    FLD double ptr [ESP + 0x18]         ; 005f64ba
    FMUL ST0                            ; 005f64be
    FLD double ptr [ESP + 0x20]         ; 005f64c0
    FMUL ST0                            ; 005f64c4
    FADDP                               ; 005f64c6
    FXCH                                ; 005f64c8
    FST double ptr [ESP + 0x28]         ; 005f64ca
    FMUL double ptr [ESP + 0x28]        ; 005f64ce
    FADDP                               ; 005f64d2
    FSQRT                               ; 005f64d4
    FXCH ST3                            ; 005f64d6
    FST double ptr [ESP + 0x50]         ; 005f64d8
    FMUL double ptr [ESP + 0x50]        ; 005f64dc
    FXCH ST2                            ; 005f64e0
    FST double ptr [ESP + 0x48]         ; 005f64e2
    FMUL double ptr [ESP + 0x48]        ; 005f64e6
    FADDP ST2,ST0                       ; 005f64ea
    FXCH ST3                            ; 005f64ec
    FST double ptr [ESP + 0x58]         ; 005f64ee
    FMUL double ptr [ESP + 0x58]        ; 005f64f2
    FADDP                               ; 005f64f6
    FSQRT                               ; 005f64f8
    FLDZ                                ; 005f64fa
    FXCH ST3                            ; 005f64fc
    FSTP double ptr [ESP + 0x40]        ; 005f64fe
    FXCH                                ; 005f6502
    FSTP double ptr [ESP + 0x38]        ; 005f6504
    FSTP double ptr [ESP + 0x30]        ; 005f6508
    FCOMP double ptr [ESP + 0x40]       ; 005f650c
    FNSTSW AX                           ; 005f6510
    SAHF                                ; 005f6512
    JNC 0x005f665f                      ; 005f6513
        ;   XREF to: 005f665f (CONDITIONAL_JUMP)  ; LAB_005f665f
    FLDZ                                ; 005f6519
        ;   Label: LAB_005f6519
    FCOMP double ptr [ESP + 0x38]       ; 005f651b
    FNSTSW AX                           ; 005f651f
    SAHF                                ; 005f6521
    JC 0x005f6533                       ; 005f6522
        ;   XREF to: 005f6533 (CONDITIONAL_JUMP)  ; LAB_005f6533
    XOR EBX,EBX                         ; 005f6524
    MOV ESI,0x3ff00000                  ; 005f6526
    MOV dword ptr [ESP + 0x38],EBX      ; 005f652b
    MOV dword ptr [ESP + 0x3c],ESI      ; 005f652f
    FLDZ                                ; 005f6533
        ;   Label: LAB_005f6533
    FCOMP double ptr [ESP + 0x30]       ; 005f6535
    FNSTSW AX                           ; 005f6539
    SAHF                                ; 005f653b
    JNC 0x005f6673                      ; 005f653c
        ;   XREF to: 005f6673 (CONDITIONAL_JUMP)  ; LAB_005f6673
    FLD1                                ; 005f6542
        ;   Label: LAB_005f6542
    FDIV double ptr [ESP + 0x40]        ; 005f6544
    FLD1                                ; 005f6548
    FDIV double ptr [ESP + 0x38]        ; 005f654a
    FLD double ptr [ESP]                ; 005f654e
    FMUL ST2                            ; 005f6551
    FLD double ptr [ESP + 0x8]          ; 005f6553
    FMUL ST3                            ; 005f6557
    FLD double ptr [ESP + 0x10]         ; 005f6559
    FMULP ST4                           ; 005f655d
    FLD double ptr [ESP + 0x18]         ; 005f655f
    FXCH ST3                            ; 005f6563
    FSTP double ptr [ESP + 0x78]        ; 005f6565
    FXCH ST2                            ; 005f6569
    FMUL double ptr [ESP + 0x78]        ; 005f656b
    FLD double ptr [ESP + 0x20]         ; 005f656f
    FMUL double ptr [ESP + 0x78]        ; 005f6573
    FLD double ptr [ESP + 0x28]         ; 005f6577
    FXCH ST3                            ; 005f657b
    FSTP double ptr [ESP]               ; 005f657d
    FLD1                                ; 005f6580
    FLD double ptr [ESP + 0x50]         ; 005f6582
    FXCH ST4                            ; 005f6586
    FMUL double ptr [ESP + 0x78]        ; 005f6588
    FXCH                                ; 005f658c
    FDIV double ptr [ESP + 0x30]        ; 005f658e
    FSTP double ptr [ESP + 0x78]        ; 005f6592
    FXCH ST3                            ; 005f6596
    FMUL double ptr [ESP + 0x78]        ; 005f6598
    FXCH ST4                            ; 005f659c
    FSTP double ptr [ESP + 0x8]         ; 005f659e
    FLD double ptr [ESP + 0x48]         ; 005f65a2
    FMUL double ptr [ESP + 0x78]        ; 005f65a6
    FXCH ST5                            ; 005f65aa
    FSTP double ptr [ESP + 0x10]        ; 005f65ac
    FLD double ptr [ESP + 0x58]         ; 005f65b0
    FMUL double ptr [ESP + 0x78]        ; 005f65b4
    FXCH ST2                            ; 005f65b8
    FSTP double ptr [ESP + 0x18]        ; 005f65ba
    FLD double ptr [ESP]                ; 005f65be
    FMUL double ptr [ESP + 0x18]        ; 005f65c1
    FXCH ST4                            ; 005f65c5
    FSTP double ptr [ESP + 0x50]        ; 005f65c7
    FLD double ptr [ESP]                ; 005f65cb
    FMUL double ptr [ESP + 0x50]        ; 005f65ce
    FXCH                                ; 005f65d2
    FSTP double ptr [ESP + 0x20]        ; 005f65d4
    FLD double ptr [ESP + 0x18]         ; 005f65d8
    FMUL double ptr [ESP + 0x50]        ; 005f65dc
    FXCH ST3                            ; 005f65e0
    FSTP double ptr [ESP + 0x28]        ; 005f65e2
    FLD double ptr [ESP + 0x8]          ; 005f65e6
    FMUL double ptr [ESP + 0x20]        ; 005f65ea
    FXCH ST5                            ; 005f65ee
    FSTP double ptr [ESP + 0x48]        ; 005f65f0
    FLD double ptr [ESP + 0x8]          ; 005f65f4
    FMUL double ptr [ESP + 0x48]        ; 005f65f8
    FLD double ptr [ESP + 0x20]         ; 005f65fc
    FXCH ST6                            ; 005f6600
    FADDP ST5,ST0                       ; 005f6602
    FXCH ST5                            ; 005f6604
    FMUL double ptr [ESP + 0x48]        ; 005f6606
    FLD double ptr [ESP + 0x10]         ; 005f660a
    FMUL double ptr [ESP + 0x28]        ; 005f660e
    FXCH ST6                            ; 005f6612
    FADDP ST2,ST0                       ; 005f6614
    FXCH ST2                            ; 005f6616
    FSTP double ptr [ESP + 0x58]        ; 005f6618
    FLD double ptr [ESP + 0x10]         ; 005f661c
    FMUL double ptr [ESP + 0x58]        ; 005f6620
    FXCH ST5                            ; 005f6624
    FADDP ST4,ST0                       ; 005f6626
    FLD ST3                             ; 005f6628
    FMULP ST4                           ; 005f662a
    FXCH                                ; 005f662c
    FADDP ST2,ST0                       ; 005f662e
    FADDP ST3,ST0                       ; 005f6630
    FLD ST2                             ; 005f6632
    FMULP ST3                           ; 005f6634
    FLD double ptr [ESP + 0x28]         ; 005f6636
    FMUL double ptr [ESP + 0x58]        ; 005f663a
    FXCH ST3                            ; 005f663e
    FADDP ST2,ST0                       ; 005f6640
    FADDP ST2,ST0                       ; 005f6642
    FLD ST1                             ; 005f6644
    FMULP ST2                           ; 005f6646
    FADDP                               ; 005f6648
    FSTP float ptr [ESP + 0x80]         ; 005f664a
    MOV EAX,dword ptr [ESP + 0x80]      ; 005f6651
    MOV ESP,EBP                         ; 005f6658
    POP EBP                             ; 005f665a
    POP EDI                             ; 005f665b
    POP ESI                             ; 005f665c
    POP EBX                             ; 005f665d
    RET                                 ; 005f665e
    XOR EDX,EDX                         ; 005f665f
        ;   Label: LAB_005f665f
    MOV ECX,0x3ff00000                  ; 005f6661
    MOV dword ptr [ESP + 0x40],EDX      ; 005f6666
    MOV dword ptr [ESP + 0x44],ECX      ; 005f666a
    JMP 0x005f6519                      ; 005f666e
        ;   XREF to: 005f6519 (UNCONDITIONAL_JUMP)  ; LAB_005f6519
    XOR EDI,EDI                         ; 005f6673
        ;   Label: LAB_005f6673
    MOV EAX,0x3ff00000                  ; 005f6675
    MOV dword ptr [ESP + 0x30],EDI      ; 005f667a
    MOV dword ptr [ESP + 0x34],EAX      ; 005f667e
    JMP 0x005f6542                      ; 005f6682
        ;   XREF to: 005f6542 (UNCONDITIONAL_JUMP)  ; LAB_005f6542

