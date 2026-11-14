; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dirmat_cpp_CMatrix3x3f_invert_FUN_0045f4d0(CMatrix3x3f *this_ptr)
;
; Parameters:
; CMatrix3x3f *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045f4d0
        ;   Label: core_dirmat.cpp_CMatrix3x3f_invert_FUN_0045f4d0
    PUSH ESI                            ; 0045f4d1
    PUSH EBP                            ; 0045f4d2
    MOV EBP,ESP                         ; 0045f4d3
    SUB ESP,0x28                        ; 0045f4d5
    AND ESP,0xfffffff8                  ; 0045f4d8
    MOV EBX,dword ptr [EBP + 0x10]      ; 0045f4db
    FLD float ptr [EBX + 0xc]           ; 0045f4de
    FMUL float ptr [EBX + 0x20]         ; 0045f4e1
    FLD float ptr [EBX + 0x14]          ; 0045f4e4
    FMUL float ptr [EBX + 0x18]         ; 0045f4e7
    FSUBP                               ; 0045f4ea
    FMUL float ptr [EBX + 0x4]          ; 0045f4ec
    FLD float ptr [EBX + 0x10]          ; 0045f4ef
    FMUL float ptr [EBX + 0x20]         ; 0045f4f2
    FLD float ptr [EBX + 0x14]          ; 0045f4f5
    FMUL float ptr [EBX + 0x1c]         ; 0045f4f8
    FSUBP                               ; 0045f4fb
    FMUL float ptr [EBX]                ; 0045f4fd
    FSUBRP                              ; 0045f4ff
    FLD float ptr [EBX + 0xc]           ; 0045f501
    FMUL float ptr [EBX + 0x1c]         ; 0045f504
    FLD float ptr [EBX + 0x10]          ; 0045f507
    FMUL float ptr [EBX + 0x18]         ; 0045f50a
    FSUBP                               ; 0045f50d
    FMUL float ptr [EBX + 0x8]          ; 0045f50f
    FADDP                               ; 0045f512
    FSTP float ptr [ESP]                ; 0045f514
    TEST dword ptr [ESP],0x7fffffff     ; 0045f517
    JZ 0x0045f65b                       ; 0045f51e
        ;   XREF to: 0045f65b (CONDITIONAL_JUMP)  ; LAB_0045f65b
    FLD float ptr [EBX + 0x10]          ; 0045f524
        ;   Label: LAB_0045f524
    FMUL float ptr [EBX + 0x20]         ; 0045f527
    FLD float ptr [EBX + 0xc]           ; 0045f52a
    FMUL float ptr [EBX + 0x20]         ; 0045f52d
    FLD float ptr [EBX + 0xc]           ; 0045f530
    FMUL float ptr [EBX + 0x1c]         ; 0045f533
    FLD float ptr [EBX + 0x4]           ; 0045f536
    FMUL float ptr [EBX + 0x20]         ; 0045f539
    FLD float ptr [EBX + 0x8]           ; 0045f53c
    FMUL float ptr [EBX + 0x18]         ; 0045f53f
    FLD float ptr [EBX + 0x14]          ; 0045f542
    FMUL float ptr [EBX + 0x1c]         ; 0045f545
    FLD float ptr [EBX + 0x14]          ; 0045f548
    FXCH                                ; 0045f54b
    FSUBP ST6,ST0                       ; 0045f54d
    FMUL float ptr [EBX + 0x18]         ; 0045f54f
    FXCH ST5                            ; 0045f552
    FSTP float ptr [ESP + 0x10]         ; 0045f554
    FLD float ptr [EBX + 0x10]          ; 0045f558
    FMUL float ptr [EBX + 0x18]         ; 0045f55b
    FXCH ST5                            ; 0045f55e
    FSUBP ST4,ST0                       ; 0045f560
    FLD float ptr [ESP]                 ; 0045f562
    FXCH ST4                            ; 0045f565
    FCHS                                ; 0045f567
    FSTP float ptr [ESP + 0x1c]         ; 0045f569
    FLD float ptr [EBX + 0x4]           ; 0045f56d
    FLD1                                ; 0045f570
    FXCH                                ; 0045f572
    FMUL float ptr [EBX + 0x18]         ; 0045f574
    FXCH                                ; 0045f577
    FDIVRP ST5,ST0                      ; 0045f579
    FXCH ST5                            ; 0045f57b
    FSUBP ST3,ST0                       ; 0045f57d
    FXCH ST2                            ; 0045f57f
    FSTP float ptr [ESP + 0xc]          ; 0045f581
    FLD float ptr [EBX + 0x8]           ; 0045f585
    FMUL float ptr [EBX + 0x1c]         ; 0045f588
    FLD float ptr [EBX + 0x4]           ; 0045f58b
    FXCH                                ; 0045f58e
    FSUBP ST2,ST0                       ; 0045f590
    FMUL float ptr [EBX + 0x14]         ; 0045f592
    FXCH                                ; 0045f595
    FCHS                                ; 0045f597
    FSTP float ptr [ESP + 0x18]         ; 0045f599
    FLD float ptr [EBX]                 ; 0045f59d
    FMUL float ptr [EBX + 0x20]         ; 0045f59f
    FLD float ptr [EBX + 0x4]           ; 0045f5a2
    FMUL float ptr [EBX + 0xc]          ; 0045f5a5
    FXCH                                ; 0045f5a8
    FSUBRP ST3,ST0                      ; 0045f5aa
    FLD float ptr [EBX + 0x8]           ; 0045f5ac
    FMUL float ptr [EBX + 0x10]         ; 0045f5af
    FLD float ptr [EBX]                 ; 0045f5b2
    FMUL float ptr [EBX + 0x1c]         ; 0045f5b4
    FXCH                                ; 0045f5b7
    FSUBP ST3,ST0                       ; 0045f5b9
    FXCH ST2                            ; 0045f5bb
    FSTP float ptr [ESP + 0x4]          ; 0045f5bd
    FLD float ptr [EBX]                 ; 0045f5c1
    FMUL float ptr [EBX + 0x10]         ; 0045f5c3
    FLD float ptr [EBX + 0x8]           ; 0045f5c6
    FMUL float ptr [EBX + 0xc]          ; 0045f5c9
    FXCH                                ; 0045f5cc
    FSUBRP ST2,ST0                      ; 0045f5ce
    FXCH                                ; 0045f5d0
    FSTP float ptr [ESP + 0x14]         ; 0045f5d2
    FLD float ptr [EBX]                 ; 0045f5d6
    FMUL float ptr [EBX + 0x14]         ; 0045f5d8
    FLD float ptr [ESP + 0x10]          ; 0045f5db
    FXCH ST5                            ; 0045f5df
    FSTP float ptr [ESP]                ; 0045f5e1
    FXCH ST4                            ; 0045f5e4
    FMUL float ptr [ESP]                ; 0045f5e6
    FXCH ST2                            ; 0045f5e9
    FSUBRP ST5,ST0                      ; 0045f5eb
    FLD float ptr [ESP + 0x18]          ; 0045f5ed
    FMUL float ptr [ESP]                ; 0045f5f1
    FXCH ST4                            ; 0045f5f4
    FSUBRP                              ; 0045f5f6
    FXCH ST4                            ; 0045f5f8
    FCHS                                ; 0045f5fa
    FSTP float ptr [ESP + 0x24]         ; 0045f5fc
    FLD float ptr [ESP + 0x4]           ; 0045f600
    FMUL float ptr [ESP]                ; 0045f604
    FXCH ST4                            ; 0045f607
    FCHS                                ; 0045f609
    FLD float ptr [ESP + 0x1c]          ; 0045f60b
    FMUL float ptr [ESP]                ; 0045f60f
    FXCH ST3                            ; 0045f612
    FMUL float ptr [ESP]                ; 0045f614
    FXCH                                ; 0045f617
    FMUL float ptr [ESP]                ; 0045f619
    FLD float ptr [ESP + 0xc]           ; 0045f61c
    FMUL float ptr [ESP]                ; 0045f620
    FXCH ST3                            ; 0045f623
    FSTP float ptr [EBX]                ; 0045f625
    FLD float ptr [ESP + 0x24]          ; 0045f627
    FMUL float ptr [ESP]                ; 0045f62b
    FXCH ST5                            ; 0045f62e
    FSTP float ptr [EBX + 0x4]          ; 0045f630
    FLD float ptr [ESP + 0x14]          ; 0045f633
    FMUL float ptr [ESP]                ; 0045f637
    FXCH ST6                            ; 0045f63a
    FSTP float ptr [EBX + 0x8]          ; 0045f63c
    FXCH ST3                            ; 0045f63f
    FSTP float ptr [EBX + 0xc]          ; 0045f641
    FSTP float ptr [EBX + 0x10]         ; 0045f644
    FXCH                                ; 0045f647
    FSTP float ptr [EBX + 0x14]         ; 0045f649
    FSTP float ptr [EBX + 0x18]         ; 0045f64c
    FSTP float ptr [EBX + 0x1c]         ; 0045f64f
    FSTP float ptr [EBX + 0x20]         ; 0045f652
    MOV ESP,EBP                         ; 0045f655
    POP EBP                             ; 0045f657
    POP ESI                             ; 0045f658
    POP EBX                             ; 0045f659
    RET                                 ; 0045f65a
    MOV ECX,0x5d8a28                    ; 0045f65b
        ;   Label: LAB_0045f65b
    MOV ESI,0x6c                        ; 0045f660
    PUSH 0x5d8a3b                       ; 0045f665
    MOV dword ptr [0x01d1d400],ECX      ; 0045f66a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0045f670 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0045f676
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0045f67b
    JMP 0x0045f524                      ; 0045f67e
        ;   XREF to: 0045f524 (UNCONDITIONAL_JUMP)  ; LAB_0045f524

