; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CQuaternion4f * __cdecl core_xform_cpp_FUN_005855f0(CMatrix3x4f *matrix_out,CQuaternion4f *quat_in)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix_out
; CQuaternion4f *  Stack[0x8]:4   quat_in
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[5]:
;   core_skeleton.cpp_FUN_0054d9c0 at 0054daa5
;   core_skeleton.cpp_FUN_0054dd10 at 0054dd88
;   core_skeleton.cpp_FUN_0054fcc0 at 0054fd35
;   core_xform.cpp_lerpMatrix3x4_FUN_005854a0 at 00585589
;   core_xform.cpp_quaternionToMatrix3x4_FUN_00585740 at 00585751
;
; Referenced Globals:
;   undefined4 DAT_005d818f
;
; *****************************************************************************

section .text

    SUB ESP,0x34                        ; 005855f0
        ;   Label: core_xform.cpp_FUN_005855f0
    MOV EDX,dword ptr [ESP + 0x38]      ; 005855f3
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005855f7
    FLD float ptr [EAX + 0x4]           ; 005855fb
    FMUL ST0                            ; 005855fe
    FLD float ptr [EAX]                 ; 00585600
    FMUL ST0                            ; 00585602
    FADDP                               ; 00585604
    FLD float ptr [EAX + 0x8]           ; 00585606
    FMUL ST0                            ; 00585609
    FADDP                               ; 0058560b
    FLD float ptr [EAX + 0xc]           ; 0058560d
    FMUL ST0                            ; 00585610
    FADDP                               ; 00585612
    FLD float ptr [EAX + 0x4]           ; 00585614
    FXCH                                ; 00585617
    FDIVR float ptr [0x005d818f]        ; 00585619 | DAT_005d818f
    FXCH                                ; 0058561f
    FMUL ST1                            ; 00585621
    FLD float ptr [EAX + 0x8]           ; 00585623
    FMUL ST2                            ; 00585626
    FLD float ptr [EAX + 0xc]           ; 00585628
    FMULP ST3                           ; 0058562b
    FLD float ptr [EAX]                 ; 0058562d
    FMUL ST2                            ; 0058562f
    FLD float ptr [EAX]                 ; 00585631
    FXCH ST2                            ; 00585633
    FSTP float ptr [ESP + 0x8]          ; 00585635
    FXCH                                ; 00585639
    FMUL float ptr [ESP + 0x8]          ; 0058563b
    FLD float ptr [EAX]                 ; 0058563f
    FXCH ST4                            ; 00585641
    FSTP float ptr [ESP + 0xc]          ; 00585643
    FXCH ST3                            ; 00585647
    FMUL float ptr [ESP + 0xc]          ; 00585649
    FLD float ptr [EAX + 0x4]           ; 0058564d
    FMULP ST3                           ; 00585650
    FLD float ptr [EAX + 0x4]           ; 00585652
    FMUL float ptr [ESP + 0x8]          ; 00585655
    FLD float ptr [EAX + 0x4]           ; 00585659
    FMUL float ptr [ESP + 0xc]          ; 0058565c
    FLD float ptr [EAX + 0x8]           ; 00585660
    FMUL float ptr [ESP + 0x8]          ; 00585663
    FXCH ST4                            ; 00585667
    FSTP float ptr [ESP + 0x10]         ; 00585669
    FLD float ptr [EAX + 0x8]           ; 0058566d
    FMUL float ptr [ESP + 0xc]          ; 00585670
    FXCH ST5                            ; 00585674
    FSTP float ptr [ESP + 0x1c]         ; 00585676
    FLD float ptr [EAX + 0xc]           ; 0058567a
    FMUL float ptr [ESP + 0xc]          ; 0058567d
    FXCH                                ; 00585681
    FSTP float ptr [ESP + 0x24]         ; 00585683
    FXCH ST3                            ; 00585687
    FST float ptr [ESP + 0x28]          ; 00585689
    FXCH                                ; 0058568d
    FST float ptr [ESP + 0x20]          ; 0058568f
    FXCH ST5                            ; 00585693
    FSTP float ptr [ESP + 0x14]         ; 00585695
    FLD float ptr [ESP + 0x24]          ; 00585699
    FXCH ST2                            ; 0058569d
    FSTP float ptr [ESP + 0x18]         ; 0058569f
    FLD float ptr [ESP + 0x1c]          ; 005856a3
    FXCH ST4                            ; 005856a7
    FST float ptr [ESP + 0x2c]          ; 005856a9
    FLD float ptr [ESP + 0x24]          ; 005856ad
    FXCH ST4                            ; 005856b1
    FSTP float ptr [ESP + 0x30]         ; 005856b3
    FXCH                                ; 005856b7
    FADD float ptr [ESP + 0x30]         ; 005856b9
    FXCH ST5                            ; 005856bd
    FADD float ptr [ESP + 0x18]         ; 005856bf
    FXCH ST2                            ; 005856c3
    FSUB float ptr [ESP + 0x14]         ; 005856c5
    FLD1                                ; 005856c9
    FXCH ST3                            ; 005856cb
    FSTP float ptr [EDX + 0x10]         ; 005856cd
    FLD float ptr [ESP + 0x1c]          ; 005856d0
    FXCH                                ; 005856d4
    FSTP float ptr [EDX + 0x20]         ; 005856d6
    FLD float ptr [ESP + 0x20]          ; 005856d9
    FSUB float ptr [ESP + 0x18]         ; 005856dd
    FXCH ST5                            ; 005856e1
    FADD float ptr [ESP + 0x30]         ; 005856e3
    FXCH ST2                            ; 005856e7
    FADD float ptr [ESP + 0x10]         ; 005856e9
    FXCH ST4                            ; 005856ed
    FADD float ptr [ESP + 0x14]         ; 005856ef
    FXCH ST5                            ; 005856f3
    FSTP float ptr [EDX + 0x4]          ; 005856f5
    FLD1                                ; 005856f8
    FXCH ST4                            ; 005856fa
    FSTP float ptr [EDX + 0x24]         ; 005856fc
    FLD float ptr [ESP + 0x2c]          ; 005856ff
    FSUB float ptr [ESP + 0x10]         ; 00585703
    FXCH                                ; 00585707
    FADD float ptr [ESP + 0x28]         ; 00585709
    FXCH ST5                            ; 0058570d
    FSTP float ptr [EDX + 0x8]          ; 0058570f
    FLD1                                ; 00585712
    FXCH                                ; 00585714
    FSTP float ptr [EDX + 0x18]         ; 00585716
    FXCH ST2                            ; 00585719
    FSUBRP ST5,ST0                      ; 0058571b
    FSUBP ST2,ST0                       ; 0058571d
    FSUBRP ST2,ST0                      ; 0058571f
    FXCH ST2                            ; 00585721
    FSTP float ptr [EDX]                ; 00585723
    FXCH                                ; 00585725
    FSTP float ptr [EDX + 0x14]         ; 00585727
    FSTP float ptr [EDX + 0x28]         ; 0058572a
    ADD ESP,0x34                        ; 0058572d
    RET                                 ; 00585730

