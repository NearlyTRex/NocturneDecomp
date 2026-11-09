; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dcube_cpp_FUN_00452490(SIntersectXZCylinder *cylinder)
;
; Parameters:
; SIntersectXZCylinder * Stack[0x4]:4   cylinder
; Local Variables:
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_dcube.cpp_intersectTriangleWithXZCylinder_FUN_00452810 at 00452ac6
;   core_dcube.cpp_intersectXZCylinderWithHeight_FUN_00452770 at 00452799
;
; Referenced Globals:
;   undefined4 DAT_005ba10a
;   undefined4 DAT_005ba10e
;   undefined4 DAT_005ba112
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00452490
        ;   Label: core_dcube.cpp_FUN_00452490
    PUSH EBP                            ; 00452491
    MOV EBP,ESP                         ; 00452492
    SUB ESP,0x58                        ; 00452494
    AND ESP,0xfffffff8                  ; 00452497
    MOV EDX,dword ptr [EBP + 0xc]       ; 0045249a
    FLD float ptr [EDX + 0x44]          ; 0045249d
    FLD float ptr [EDX + 0x48]          ; 004524a0
    FSUB float ptr [EDX + 0x40]         ; 004524a3
    FXCH                                ; 004524a6
    FSUB float ptr [EDX + 0x3c]         ; 004524a8
    FXCH                                ; 004524ab
    FST float ptr [ESP + 0x1c]          ; 004524ad
    FCHS                                ; 004524b1
    FST float ptr [ESP + 0x50]          ; 004524b3
    FMUL float ptr [ESP + 0x50]         ; 004524b7
    FXCH                                ; 004524bb
    FST float ptr [ESP + 0x20]          ; 004524bd
    FMUL float ptr [ESP + 0x20]         ; 004524c1
    FADDP                               ; 004524c5
    FLDZ                                ; 004524c7
    FXCH                                ; 004524c9
    FSTP double ptr [ESP + 0x10]        ; 004524cb
    FCOMP double ptr [ESP + 0x10]       ; 004524cf
    FNSTSW AX                           ; 004524d3
    SAHF                                ; 004524d5
    JNC 0x004526f0                      ; 004524d6
        ;   XREF to: 004526f0 (CONDITIONAL_JUMP)  ; LAB_004526f0
    FLD double ptr [ESP + 0x10]         ; 004524dc
    FSQRT                               ; 004524e0
    FLD float ptr [ESP + 0x50]          ; 004524e2
    FLD1                                ; 004524e6
    FDIVRP ST2,ST0                      ; 004524e8
    FMUL ST1                            ; 004524ea
    FLD float ptr [EDX + 0x10]          ; 004524ec
    FSUB float ptr [EDX + 0x3c]         ; 004524ef
    FXCH                                ; 004524f2
    FSTP float ptr [ESP + 0x50]         ; 004524f4
    FMUL float ptr [ESP + 0x50]         ; 004524f8
    FLD float ptr [ESP + 0x20]          ; 004524fc
    FMULP ST2                           ; 00452500
    FLD float ptr [EDX + 0x14]          ; 00452502
    FSUB float ptr [EDX + 0x40]         ; 00452505
    FXCH ST2                            ; 00452508
    FSTP float ptr [ESP + 0x4c]         ; 0045250a
    FXCH                                ; 0045250e
    FMUL float ptr [ESP + 0x4c]         ; 00452510
    FADDP                               ; 00452514
    FLDZ                                ; 00452516
    FCOMPP                              ; 00452518
    FNSTSW AX                           ; 0045251a
    SAHF                                ; 0045251c
    JC 0x004526f7                       ; 0045251d
        ;   XREF to: 004526f7 (CONDITIONAL_JUMP)  ; LAB_004526f7
    FLD float ptr [EDX + 0x18]          ; 00452523
        ;   Label: LAB_00452523
    FMUL float ptr [ESP + 0x50]         ; 00452526
    FLD float ptr [EDX + 0x1c]          ; 0045252a
    FMUL float ptr [ESP + 0x4c]         ; 0045252d
    FADDP                               ; 00452531
    FST float ptr [ESP + 0x28]          ; 00452533
    FLDZ                                ; 00452537
    FCOMPP                              ; 00452539
    FNSTSW AX                           ; 0045253b
    SAHF                                ; 0045253d
    JNC 0x004526f0                      ; 0045253e
        ;   XREF to: 004526f0 (CONDITIONAL_JUMP)  ; LAB_004526f0
    FLD float ptr [ESP + 0x50]          ; 00452544
    FLD float ptr [EDX + 0x3c]          ; 00452548
    FMUL ST1                            ; 0045254b
    FLD float ptr [EDX + 0x10]          ; 0045254d
    FMULP ST2                           ; 00452550
    FLD float ptr [ESP + 0x4c]          ; 00452552
    FLD float ptr [EDX + 0x40]          ; 00452556
    FMUL ST1                            ; 00452559
    FLD float ptr [EDX + 0x14]          ; 0045255b
    FMULP ST2                           ; 0045255e
    FADDP ST2,ST0                       ; 00452560
    FADDP ST2,ST0                       ; 00452562
    FSTP float ptr [ESP + 0x40]         ; 00452564
    FCOMP float ptr [ESP + 0x40]        ; 00452568
    FNSTSW AX                           ; 0045256c
    SAHF                                ; 0045256e
    JA 0x004526f0                       ; 0045256f
        ;   XREF to: 004526f0 (CONDITIONAL_JUMP)  ; LAB_004526f0
    FLD float ptr [ESP + 0x50]          ; 00452575
    FLD ST0                             ; 00452579
    FMUL float ptr [EDX + 0x20]         ; 0045257b
    FLD float ptr [ESP + 0x4c]          ; 0045257e
    FLD ST0                             ; 00452582
    FMUL float ptr [EDX + 0x20]         ; 00452584
    FXCH ST2                            ; 00452587
    FADD float ptr [EDX + 0x10]         ; 00452589
    FXCH ST2                            ; 0045258c
    FADD float ptr [EDX + 0x14]         ; 0045258e
    FXCH ST2                            ; 00452591
    FST float ptr [ESP + 0x3c]          ; 00452593
    FMULP ST3                           ; 00452597
    FXCH                                ; 00452599
    FST float ptr [ESP + 0x44]          ; 0045259b
    FMULP                               ; 0045259f
    FADDP                               ; 004525a1
    FSUBR float ptr [ESP + 0x40]        ; 004525a3
    FST float ptr [ESP + 0x24]          ; 004525a7
    FCOMP float ptr [ESP + 0x28]        ; 004525ab
    FNSTSW AX                           ; 004525af
    SAHF                                ; 004525b1
    JA 0x004526f0                       ; 004525b2
        ;   XREF to: 004526f0 (CONDITIONAL_JUMP)  ; LAB_004526f0
    FLD float ptr [ESP + 0x24]          ; 004525b8
    FDIV float ptr [ESP + 0x28]         ; 004525bc
    FST float ptr [ESP + 0x24]          ; 004525c0
    FCOMP float ptr [EDX]               ; 004525c4
    FNSTSW AX                           ; 004525c6
    SAHF                                ; 004525c8
    JNC 0x004526f0                      ; 004525c9
        ;   XREF to: 004526f0 (CONDITIONAL_JUMP)  ; LAB_004526f0
    FLD float ptr [ESP + 0x20]          ; 004525cf
    FABS                                ; 004525d3
    FLD float ptr [ESP + 0x1c]          ; 004525d5
    FABS                                ; 004525d9
    FLD float ptr [ESP + 0x24]          ; 004525db
    FLD float ptr [EDX + 0x18]          ; 004525df
    FMUL ST1                            ; 004525e2
    FLD float ptr [EDX + 0x1c]          ; 004525e4
    FMULP ST2                           ; 004525e7
    FADD float ptr [ESP + 0x3c]         ; 004525e9
    FXCH                                ; 004525ed
    FADD float ptr [ESP + 0x44]         ; 004525ef
    FXCH                                ; 004525f3
    FSTP float ptr [EDX + 0x54]         ; 004525f5
    FSTP float ptr [EDX + 0x58]         ; 004525f8
    FCOMPP                              ; 004525fb
    FNSTSW AX                           ; 004525fd
    SAHF                                ; 004525ff
    JNC 0x00452712                      ; 00452600
        ;   XREF to: 00452712 (CONDITIONAL_JUMP)  ; LAB_00452712
    FLD float ptr [EDX + 0x54]          ; 00452606
    FSUB float ptr [EDX + 0x3c]         ; 00452609
    FDIV float ptr [ESP + 0x20]         ; 0045260c
    FSTP float ptr [EDX + 0x50]         ; 00452610
        ;   Label: LAB_00452610
    FLDZ                                ; 00452613
    FLD float ptr [EDX + 0x50]          ; 00452615
    FSTP double ptr [ESP + 0x8]         ; 00452618
    FCOMP double ptr [ESP + 0x8]        ; 0045261c
    FNSTSW AX                           ; 00452620
    SAHF                                ; 00452622
    JBE 0x00452721                      ; 00452623
        ;   XREF to: 00452721 (CONDITIONAL_JUMP)  ; LAB_00452721
    MOV dword ptr [EDX + 0x50],0x0      ; 00452629
    FLD float ptr [EDX + 0x3c]          ; 00452630
    MOV EAX,dword ptr [EDX + 0x40]      ; 00452633
    MOV dword ptr [EDX + 0x58],EAX      ; 00452636
        ;   Label: LAB_00452636
    FSTP float ptr [EDX + 0x54]         ; 00452639
    FLD float ptr [EDX + 0x18]          ; 0045263c
    FMUL ST0                            ; 0045263f
    FLD float ptr [EDX + 0x18]          ; 00452641
    FLD float ptr [EDX + 0x54]          ; 00452644
    FSUB float ptr [EDX + 0x10]         ; 00452647
    FXCH                                ; 0045264a
    FMUL ST1                            ; 0045264c
    FLD float ptr [EDX + 0x1c]          ; 0045264e
    FMUL ST0                            ; 00452651
    FLD ST2                             ; 00452653
    FMULP ST3                           ; 00452655
    FLD float ptr [EDX + 0x58]          ; 00452657
    FSUB float ptr [EDX + 0x14]         ; 0045265a
    FLD float ptr [EDX + 0x1c]          ; 0045265d
    FMUL ST1                            ; 00452660
    FLD ST1                             ; 00452662
    FXCH ST3                            ; 00452664
    FADDP ST6,ST0                       ; 00452666
    FXCH ST2                            ; 00452668
    FMULP                               ; 0045266a
    FXCH ST4                            ; 0045266c
    FST float ptr [ESP + 0x38]          ; 0045266e
    FMUL float ptr [0x005ba10e]         ; 00452672 | DAT_005ba10e
    FXCH ST4                            ; 00452678
    FADDP ST3,ST0                       ; 0045267a
    FADDP                               ; 0045267c
    FLD float ptr [EDX + 0x20]          ; 0045267e
    FMUL ST0                            ; 00452681
    FXCH                                ; 00452683
    FMUL float ptr [0x005ba10a]         ; 00452685 | DAT_005ba10a
    FXCH                                ; 0045268b
    FSUBP ST2,ST0                       ; 0045268d
    FXCH ST2                            ; 0045268f
    FMULP                               ; 00452691
    FXCH                                ; 00452693
    FST float ptr [ESP + 0x48]          ; 00452695
    FMUL float ptr [ESP + 0x48]         ; 00452699
    FSUBRP                              ; 0045269d
    FLDZ                                ; 0045269f
    FXCH                                ; 004526a1
    FSTP float ptr [ESP + 0x18]         ; 004526a3
    FCOMP float ptr [ESP + 0x18]        ; 004526a7
    FNSTSW AX                           ; 004526ab
    SAHF                                ; 004526ad
    JA 0x004526f0                       ; 004526ae
        ;   XREF to: 004526f0 (CONDITIONAL_JUMP)  ; LAB_004526f0
    FLD float ptr [ESP + 0x48]          ; 004526b0
    FCHS                                ; 004526b4
    FLD float ptr [ESP + 0x18]          ; 004526b6
    FSQRT                               ; 004526ba
    FSUBP                               ; 004526bc
    FLD float ptr [ESP + 0x38]          ; 004526be
    FMUL float ptr [0x005ba112]         ; 004526c2 | DAT_005ba112
    FDIVP                               ; 004526c8
    FLDZ                                ; 004526ca
    FXCH                                ; 004526cc
    FST float ptr [EDX + 0x4c]          ; 004526ce
    FSTP double ptr [ESP]               ; 004526d1
    FCOMP double ptr [ESP]              ; 004526d4
    FNSTSW AX                           ; 004526d7
    SAHF                                ; 004526d9
    JA 0x004526f0                       ; 004526da
        ;   XREF to: 004526f0 (CONDITIONAL_JUMP)  ; LAB_004526f0
    FLD1                                ; 004526dc
    FCOMP double ptr [ESP]              ; 004526de
    FNSTSW AX                           ; 004526e1
    SAHF                                ; 004526e3
    JC 0x004526f0                       ; 004526e4
        ;   XREF to: 004526f0 (CONDITIONAL_JUMP)  ; LAB_004526f0
    FLD float ptr [EDX + 0x4c]          ; 004526e6
    FCOMP float ptr [EDX]               ; 004526e9
    FNSTSW AX                           ; 004526eb
    SAHF                                ; 004526ed
    JC 0x00452758                       ; 004526ee
        ;   XREF to: 00452758 (CONDITIONAL_JUMP)  ; LAB_00452758
    XOR EAX,EAX                         ; 004526f0
        ;   Label: LAB_004526f0
    MOV ESP,EBP                         ; 004526f2
    POP EBP                             ; 004526f4
    POP EBX                             ; 004526f5
    RET                                 ; 004526f6
    MOV BL,byte ptr [ESP + 0x4f]        ; 004526f7
        ;   Label: LAB_004526f7
    MOV AH,byte ptr [ESP + 0x53]        ; 004526fb
    XOR BL,0x80                         ; 004526ff
    XOR AH,0x80                         ; 00452702
    MOV byte ptr [ESP + 0x4f],BL        ; 00452705
    MOV byte ptr [ESP + 0x53],AH        ; 00452709
    JMP 0x00452523                      ; 0045270d
        ;   XREF to: 00452523 (UNCONDITIONAL_JUMP)  ; LAB_00452523
    FLD float ptr [EDX + 0x58]          ; 00452712
        ;   Label: LAB_00452712
    FSUB float ptr [EDX + 0x40]         ; 00452715
    FDIV float ptr [ESP + 0x1c]         ; 00452718
    JMP 0x00452610                      ; 0045271c
        ;   XREF to: 00452610 (UNCONDITIONAL_JUMP)  ; LAB_00452610
    FLD1                                ; 00452721
        ;   Label: LAB_00452721
    FCOMP double ptr [ESP + 0x8]        ; 00452723
    FNSTSW AX                           ; 00452727
    SAHF                                ; 00452729
    JNC 0x0045273e                      ; 0045272a
        ;   XREF to: 0045273e (CONDITIONAL_JUMP)  ; LAB_0045273e
    MOV dword ptr [EDX + 0x50],0x3f800000 ; 0045272c
    FLD float ptr [EDX + 0x44]          ; 00452733
    MOV EAX,dword ptr [EDX + 0x48]      ; 00452736
    JMP 0x00452636                      ; 00452739
        ;   XREF to: 00452636 (UNCONDITIONAL_JUMP)  ; LAB_00452636
    FLD float ptr [ESP + 0x24]          ; 0045273e
        ;   Label: LAB_0045273e
    FLDZ                                ; 00452742
    FCOMPP                              ; 00452744
    FNSTSW AX                           ; 00452746
    SAHF                                ; 00452748
    JBE 0x00452751                      ; 00452749
        ;   XREF to: 00452751 (CONDITIONAL_JUMP)  ; LAB_00452751
    XOR ECX,ECX                         ; 0045274b
    MOV dword ptr [ESP + 0x24],ECX      ; 0045274d
    MOV EAX,dword ptr [ESP + 0x24]      ; 00452751
        ;   Label: LAB_00452751
    MOV dword ptr [EDX + 0x4c],EAX      ; 00452755
    MOV EAX,0x1                         ; 00452758
        ;   Label: LAB_00452758
    MOV ESP,EBP                         ; 0045275d
    POP EBP                             ; 0045275f
    POP EBX                             ; 00452760
    RET                                 ; 00452761

