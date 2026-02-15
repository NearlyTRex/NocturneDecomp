; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_dcube_cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460(CDemonCubeTriangle *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)
;
; Parameters:
; CDemonCubeTriangle * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   ray_origin
; CVector3f *      Stack[0xc]:4   ray_direction
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
; XREF[2]:
;   core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0 at 0045792a
;   core_dcube.cpp_triangleCylinderCollision_FUN_00456040 at 00456284
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00455460
        ;   Label: core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460
    PUSH EBP                            ; 00455461
    MOV EBP,ESP                         ; 00455462
    SUB ESP,0x3c                        ; 00455464
    AND ESP,0xfffffff8                  ; 00455467
    MOV EDX,dword ptr [EBP + 0xc]       ; 0045546a
    MOV ECX,dword ptr [EBP + 0x10]      ; 0045546d
    MOV EBX,dword ptr [EBP + 0x14]      ; 00455470
    FLD float ptr [EDX + 0x10]          ; 00455473
    FMUL float ptr [EBX + 0x4]          ; 00455476
    FLD float ptr [EDX + 0xc]           ; 00455479
    FMUL float ptr [EBX]                ; 0045547c
    FADDP                               ; 0045547e
    FLD float ptr [EDX + 0x14]          ; 00455480
    FMUL float ptr [EBX + 0x8]          ; 00455483
    FADDP                               ; 00455486
    FST float ptr [ESP]                 ; 00455488
    FLDZ                                ; 0045548b
    FCOMPP                              ; 0045548d
    FNSTSW AX                           ; 0045548f
    SAHF                                ; 00455491
    JNC 0x004555ee                      ; 00455492
        ;   XREF to: 004555ee (CONDITIONAL_JUMP)  ; LAB_004555ee
    FLD float ptr [EDX + 0xc]           ; 00455498
    FMUL float ptr [ECX]                ; 0045549b
    FADD float ptr [EDX + 0x18]         ; 0045549d
    FLD float ptr [EDX + 0x10]          ; 004554a0
    FMUL float ptr [ECX + 0x4]          ; 004554a3
    FADDP                               ; 004554a6
    FLD float ptr [EDX + 0x14]          ; 004554a8
    FMUL float ptr [ECX + 0x8]          ; 004554ab
    FADDP                               ; 004554ae
    FCHS                                ; 004554b0
    FST float ptr [ESP + 0x8]           ; 004554b2
    FLDZ                                ; 004554b6
    FCOMPP                              ; 004554b8
    FNSTSW AX                           ; 004554ba
    SAHF                                ; 004554bc
    JA 0x004555ee                       ; 004554bd
        ;   XREF to: 004555ee (CONDITIONAL_JUMP)  ; LAB_004555ee
    FLD float ptr [ESP + 0x8]           ; 004554c3
    FCOMP float ptr [ESP]               ; 004554c7
    FNSTSW AX                           ; 004554ca
    SAHF                                ; 004554cc
    JA 0x004555ee                       ; 004554cd
        ;   XREF to: 004555ee (CONDITIONAL_JUMP)  ; LAB_004555ee
    FLD float ptr [ESP + 0x8]           ; 004554d3
    FDIV float ptr [ESP]                ; 004554d7
    FST float ptr [ESP + 0x8]           ; 004554da
    FMUL float ptr [EBX]                ; 004554de
    FADD float ptr [ECX]                ; 004554e0
    FLD float ptr [ESP + 0x8]           ; 004554e2
    FXCH                                ; 004554e6
    FSTP float ptr [ESP + 0x10]         ; 004554e8
    FMUL float ptr [EBX + 0x4]          ; 004554ec
    FADD float ptr [ECX + 0x4]          ; 004554ef
    FLD float ptr [ESP + 0x8]           ; 004554f2
    FXCH                                ; 004554f6
    FSTP float ptr [ESP + 0x14]         ; 004554f8
    FMUL float ptr [EBX + 0x8]          ; 004554fc
    FADD float ptr [ECX + 0x8]          ; 004554ff
    FSTP float ptr [ESP + 0x18]         ; 00455502
    MOV EAX,dword ptr [EDX + 0x1c]      ; 00455506
    CMP EAX,0x1                         ; 00455509
    JNC 0x00455696                      ; 0045550c
        ;   XREF to: 00455696 (CONDITIONAL_JUMP)  ; LAB_00455696
    TEST EAX,EAX                        ; 00455512
    JNZ 0x0045556e                      ; 00455514
        ;   XREF to: 0045556e (CONDITIONAL_JUMP)  ; LAB_0045556e
    FLD float ptr [ESP + 0x14]          ; 00455516
    MOV ECX,dword ptr [EDX + 0x4]       ; 0045551a
    FLD float ptr [ESP + 0x18]          ; 0045551d
    MOV EAX,dword ptr [EDX]             ; 00455521
    FLD float ptr [ECX + 0x4]           ; 00455523
    MOV EDX,dword ptr [EDX + 0x8]       ; 00455526
    FLD float ptr [ECX + 0x8]           ; 00455529
    FLD float ptr [EDX + 0x4]           ; 0045552c
    FLD float ptr [EDX + 0x8]           ; 0045552f
    FXCH ST5                            ; 00455532
    FSUB float ptr [EAX + 0x4]          ; 00455534
    FXCH ST4                            ; 00455537
    FSUB float ptr [EAX + 0x8]          ; 00455539
    FXCH ST4                            ; 0045553c
    FSTP float ptr [ESP + 0x34]         ; 0045553e
    FXCH ST3                            ; 00455542
    FSTP float ptr [ESP + 0x28]         ; 00455544
    FXCH                                ; 00455548
    FSUB float ptr [EAX + 0x4]          ; 0045554a
    FXCH                                ; 0045554d
    FSUB float ptr [EAX + 0x8]          ; 0045554f
    FXCH                                ; 00455552
    FSTP float ptr [ESP + 0x2c]         ; 00455554
    FSTP float ptr [ESP + 0x20]         ; 00455558
    FSUB float ptr [EAX + 0x4]          ; 0045555c
    FXCH                                ; 0045555f
        ;   Label: LAB_0045555f
    FSUB float ptr [EAX + 0x8]          ; 00455561
    FXCH                                ; 00455564
        ;   Label: LAB_00455564
    FSTP float ptr [ESP + 0x30]         ; 00455566
    FSTP float ptr [ESP + 0x24]         ; 0045556a
    FLD float ptr [ESP + 0x24]          ; 0045556e
        ;   Label: LAB_0045556e
    FLD float ptr [ESP + 0x2c]          ; 00455572
    FMUL ST1                            ; 00455576
    FLD float ptr [ESP + 0x30]          ; 00455578
    FLD float ptr [ESP + 0x20]          ; 0045557c
    FMUL ST1                            ; 00455580
    FSUBP ST2,ST0                       ; 00455582
    FLD1                                ; 00455584
    FDIVRP ST2,ST0                      ; 00455586
    FLD float ptr [ESP + 0x34]          ; 00455588
    FMULP ST3                           ; 0045558c
    FMUL float ptr [ESP + 0x28]         ; 0045558e
    FSUBP ST2,ST0                       ; 00455592
    FSTP float ptr [ESP + 0x1c]         ; 00455594
    FMUL float ptr [ESP + 0x1c]         ; 00455598
    FST float ptr [ESP + 0xc]           ; 0045559c
    FLDZ                                ; 004555a0
    FCOMPP                              ; 004555a2
    FNSTSW AX                           ; 004555a4
    SAHF                                ; 004555a6
    JA 0x004555ee                       ; 004555a7
        ;   XREF to: 004555ee (CONDITIONAL_JUMP)  ; LAB_004555ee
    FLD float ptr [ESP + 0x2c]          ; 004555a9
    FMUL float ptr [ESP + 0x28]         ; 004555ad
    FLD float ptr [ESP + 0x20]          ; 004555b1
    FMUL float ptr [ESP + 0x34]         ; 004555b5
    FSUBP                               ; 004555b9
    FMUL float ptr [ESP + 0x1c]         ; 004555bb
    FST float ptr [ESP + 0x4]           ; 004555bf
    FLDZ                                ; 004555c3
    FCOMPP                              ; 004555c5
    FNSTSW AX                           ; 004555c7
    SAHF                                ; 004555c9
    JA 0x004555ee                       ; 004555ca
        ;   XREF to: 004555ee (CONDITIONAL_JUMP)  ; LAB_004555ee
    FLD float ptr [ESP + 0xc]           ; 004555cc
    FADD float ptr [ESP + 0x4]          ; 004555d0
    FLD1                                ; 004555d4
    FCOMPP                              ; 004555d6
    FNSTSW AX                           ; 004555d8
    SAHF                                ; 004555da
    JC 0x004555ee                       ; 004555db
        ;   XREF to: 004555ee (CONDITIONAL_JUMP)  ; LAB_004555ee
    MOV EAX,dword ptr [ESP + 0x8]       ; 004555dd
    MOV dword ptr [ESP + 0x38],EAX      ; 004555e1
    MOV EAX,dword ptr [ESP + 0x38]      ; 004555e5
    MOV ESP,EBP                         ; 004555e9
    POP EBP                             ; 004555eb
    POP EBX                             ; 004555ec
    RET                                 ; 004555ed
    MOV dword ptr [ESP + 0x38],0xbf800000 ; 004555ee
        ;   Label: LAB_004555ee
    MOV EAX,dword ptr [ESP + 0x38]      ; 004555f6
    MOV ESP,EBP                         ; 004555fa
    POP EBP                             ; 004555fc
    POP EBX                             ; 004555fd
    RET                                 ; 004555fe
    FLD float ptr [ESP + 0x10]          ; 004555ff
        ;   Label: LAB_004555ff
    MOV ECX,dword ptr [EDX + 0x4]       ; 00455603
    FLD float ptr [ESP + 0x18]          ; 00455606
    MOV EAX,dword ptr [EDX]             ; 0045560a
    FLD float ptr [ECX]                 ; 0045560c
    MOV EDX,dword ptr [EDX + 0x8]       ; 0045560e
    FLD float ptr [ECX + 0x8]           ; 00455611
    FLD float ptr [EDX]                 ; 00455614
    FLD float ptr [EDX + 0x8]           ; 00455616
    FXCH ST5                            ; 00455619
    FSUB float ptr [EAX]                ; 0045561b
    FXCH ST4                            ; 0045561d
    FSUB float ptr [EAX + 0x8]          ; 0045561f
    FXCH ST4                            ; 00455622
    FSTP float ptr [ESP + 0x34]         ; 00455624
    FXCH ST3                            ; 00455628
    FSTP float ptr [ESP + 0x28]         ; 0045562a
    FXCH                                ; 0045562e
    FSUB float ptr [EAX]                ; 00455630
    FXCH                                ; 00455632
    FSUB float ptr [EAX + 0x8]          ; 00455634
    FXCH                                ; 00455637
    FSTP float ptr [ESP + 0x2c]         ; 00455639
    FSTP float ptr [ESP + 0x20]         ; 0045563d
    FSUB float ptr [EAX]                ; 00455641
    JMP 0x0045555f                      ; 00455643
        ;   XREF to: 0045555f (UNCONDITIONAL_JUMP)  ; LAB_0045555f
    FLD float ptr [ESP + 0x10]          ; 00455648
        ;   Label: LAB_00455648
    MOV ECX,dword ptr [EDX + 0x4]       ; 0045564c
    FLD float ptr [ESP + 0x14]          ; 0045564f
    MOV EAX,dword ptr [EDX]             ; 00455653
    FLD float ptr [ECX]                 ; 00455655
    MOV EDX,dword ptr [EDX + 0x8]       ; 00455657
    FLD float ptr [ECX + 0x4]           ; 0045565a
    FLD float ptr [EDX]                 ; 0045565d
    FLD float ptr [EDX + 0x4]           ; 0045565f
    FXCH ST5                            ; 00455662
    FSUB float ptr [EAX]                ; 00455664
    FXCH ST4                            ; 00455666
    FSUB float ptr [EAX + 0x4]          ; 00455668
    FXCH ST4                            ; 0045566b
    FSTP float ptr [ESP + 0x34]         ; 0045566d
    FXCH ST3                            ; 00455671
    FSTP float ptr [ESP + 0x28]         ; 00455673
    FXCH                                ; 00455677
    FSUB float ptr [EAX]                ; 00455679
    FXCH                                ; 0045567b
    FSUB float ptr [EAX + 0x4]          ; 0045567d
    FXCH                                ; 00455680
    FSTP float ptr [ESP + 0x2c]         ; 00455682
    FSTP float ptr [ESP + 0x20]         ; 00455686
    FSUB float ptr [EAX]                ; 0045568a
    FXCH                                ; 0045568c
    FSUB float ptr [EAX + 0x4]          ; 0045568e
    JMP 0x00455564                      ; 00455691
        ;   XREF to: 00455564 (UNCONDITIONAL_JUMP)  ; LAB_00455564
    JBE 0x004555ff                      ; 00455696
        ;   XREF to: 004555ff (CONDITIONAL_JUMP)  ; LAB_004555ff
        ;   Label: LAB_00455696
    CMP EAX,0x2                         ; 0045569c
    JZ 0x00455648                       ; 0045569f
        ;   XREF to: 00455648 (CONDITIONAL_JUMP)  ; LAB_00455648
    JMP 0x0045556e                      ; 004556a1
        ;   XREF to: 0045556e (UNCONDITIONAL_JUMP)  ; LAB_0045556e

