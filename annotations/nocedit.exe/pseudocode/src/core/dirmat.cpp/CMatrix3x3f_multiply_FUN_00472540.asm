; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMatrix3x3f * core_dirmat.cpp_CMatrix3x3f_multiply_FUN_00472540(CMatrix3x3f * this_ptr, CMatrix3x3f * matrix_a, CMatrix3x3f * matrix_b)
;
; Parameters:
; CMatrix3x3f *    Stack[0x4]:4   this_ptr
; CMatrix3x3f *    Stack[0x8]:4   matrix_a
; CMatrix3x3f *    Stack[0xc]:4   matrix_b
; Local Variables:
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
; *****************************************************************************

section .text

    PUSH EBX                            ; 00472540
        ;   Label: core_dirmat.cpp_CMatrix3x3f_multiply_FUN_00472540
    PUSH EDI                            ; 00472541
    SUB ESP,0x28                        ; 00472542
    MOV EDX,dword ptr [ESP + 0x34]      ; 00472545
    MOV EAX,dword ptr [ESP + 0x38]      ; 00472549
    MOV EBX,ESI                         ; 0047254d
    FLD float ptr [EDX + 0x4]           ; 0047254f
    FMUL float ptr [EAX + 0xc]          ; 00472552
    FLD float ptr [EDX + 0x4]           ; 00472555
    FMUL float ptr [EAX + 0x10]         ; 00472558
    FLD float ptr [EDX + 0x4]           ; 0047255b
    FMUL float ptr [EAX + 0x14]         ; 0047255e
    FLD float ptr [EDX + 0x10]          ; 00472561
    FMUL float ptr [EAX + 0xc]          ; 00472564
    FLD float ptr [EDX + 0xc]           ; 00472567
    FMUL float ptr [EAX + 0x4]          ; 0047256a
    FLD float ptr [EDX]                 ; 0047256d
    FMUL float ptr [EAX]                ; 0047256f
    FLD float ptr [EDX]                 ; 00472571
    FMUL float ptr [EAX + 0x4]          ; 00472573
    FXCH                                ; 00472576
    FADDP ST6,ST0                       ; 00472578
    FADDP ST4,ST0                       ; 0047257a
    FLD float ptr [EDX + 0x8]           ; 0047257c
    FMUL float ptr [EAX + 0x18]         ; 0047257f
    FLD float ptr [EDX + 0x8]           ; 00472582
    FMUL float ptr [EAX + 0x1c]         ; 00472585
    FXCH                                ; 00472588
    FADDP ST6,ST0                       ; 0047258a
    FLD float ptr [EDX]                 ; 0047258c
    FXCH                                ; 0047258e
    FADDP ST5,ST0                       ; 00472590
    FMUL float ptr [EAX + 0x8]          ; 00472592
    FXCH ST4                            ; 00472595
    FSTP float ptr [ESP + 0x4]          ; 00472597
    FLD float ptr [EDX + 0xc]           ; 0047259b
    FXCH ST4                            ; 0047259e
    FADDP ST3,ST0                       ; 004725a0
    FXCH ST3                            ; 004725a2
    FMUL float ptr [EAX + 0x8]          ; 004725a4
    FLD float ptr [EDX + 0x8]           ; 004725a7
    FMUL float ptr [EAX + 0x20]         ; 004725aa
    FLD float ptr [EDX + 0xc]           ; 004725ad
    FXCH                                ; 004725b0
    FADDP ST4,ST0                       ; 004725b2
    FMUL float ptr [EAX]                ; 004725b4
    FXCH ST3                            ; 004725b6
    FSTP float ptr [ESP + 0x8]          ; 004725b8
    FLD float ptr [EDX + 0x1c]          ; 004725bc
    FXCH ST3                            ; 004725bf
    FADDP ST2,ST0                       ; 004725c1
    FXCH ST2                            ; 004725c3
    FMUL float ptr [EAX + 0xc]          ; 004725c5
    FLD float ptr [EDX + 0x14]          ; 004725c8
    FMUL float ptr [EAX + 0x18]         ; 004725cb
    FLD float ptr [EDX + 0x10]          ; 004725ce
    FXCH                                ; 004725d1
    FADDP ST3,ST0                       ; 004725d3
    FMUL float ptr [EAX + 0x10]         ; 004725d5
    FXCH ST2                            ; 004725d8
    FSTP float ptr [ESP + 0xc]          ; 004725da
    FLD float ptr [EDX + 0x18]          ; 004725de
    FXCH ST2                            ; 004725e1
    FADDP ST4,ST0                       ; 004725e3
    FXCH                                ; 004725e5
    FMUL float ptr [EAX + 0x4]          ; 004725e7
    FLD float ptr [EDX + 0x14]          ; 004725ea
    FMUL float ptr [EAX + 0x1c]         ; 004725ed
    FLD float ptr [EDX + 0x10]          ; 004725f0
    FXCH                                ; 004725f3
    FADDP ST5,ST0                       ; 004725f5
    FMUL float ptr [EAX + 0x14]         ; 004725f7
    FXCH ST4                            ; 004725fa
    FSTP float ptr [ESP + 0x10]         ; 004725fc
    FLD float ptr [EDX + 0x18]          ; 00472600
    FXCH ST4                            ; 00472603
    FADDP ST3,ST0                       ; 00472605
    FXCH ST3                            ; 00472607
    FMUL float ptr [EAX + 0x8]          ; 00472609
    FLD float ptr [EDX + 0x14]          ; 0047260c
    FMUL float ptr [EAX + 0x20]         ; 0047260f
    FLD float ptr [EDX + 0x18]          ; 00472612
    FMUL float ptr [EAX]                ; 00472615
    FXCH                                ; 00472617
    FADDP ST4,ST0                       ; 00472619
    FLD float ptr [EDX + 0x1c]          ; 0047261b
    FXCH                                ; 0047261e
    FADDP ST3,ST0                       ; 00472620
    FMUL float ptr [EAX + 0x10]         ; 00472622
    FLD float ptr [EDX + 0x20]          ; 00472625
    FMUL float ptr [EAX + 0x18]         ; 00472628
    FXCH                                ; 0047262b
    FADDP ST5,ST0                       ; 0047262d
    FLD float ptr [EDX + 0x1c]          ; 0047262f
    FMUL float ptr [EAX + 0x14]         ; 00472632
    FADDP ST2,ST0                       ; 00472635
    FADDP ST2,ST0                       ; 00472637
    FLD float ptr [EDX + 0x20]          ; 00472639
    FMUL float ptr [EAX + 0x1c]         ; 0047263c
    FLD float ptr [EDX + 0x20]          ; 0047263f
    FMUL float ptr [EAX + 0x20]         ; 00472642
    MOV ECX,0xa                         ; 00472645
    MOV EDI,ESI                         ; 0047264a
    MOV ESI,ESP                         ; 0047264c
    FXCH                                ; 0047264e
    FADDP ST5,ST0                       ; 00472650
    FADDP                               ; 00472652
    FXCH ST2                            ; 00472654
    FSTP float ptr [ESP + 0x14]         ; 00472656
    FSTP float ptr [ESP + 0x18]         ; 0047265a
    FXCH                                ; 0047265e
    FSTP float ptr [ESP + 0x1c]         ; 00472660
    FSTP float ptr [ESP + 0x20]         ; 00472664
    FSTP float ptr [ESP]                ; 00472668
    MOVSD.REP ES:EDI,ESI                ; 0047266b
    MOV EAX,EBX                         ; 0047266d
    ADD ESP,0x28                        ; 0047266f
    POP EDI                             ; 00472672
    POP EBX                             ; 00472673
    RET                                 ; 00472674

