; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CQuaternion4f * __cdecl core_xform_cpp_quaternionToMatrix3x3_FUN_005938c0(CMatrix3x4f *matrix_out,CQuaternion4f *quat_in)
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
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0 at 00546b58
;   core_skeleton.cpp_FUN_00546790 at 00546875
;   core_skeleton.cpp_computeBoneModelMatrices_FUN_00548a90 at 00548b05
;   core_xform.cpp_lerpMatrix3x4_FUN_00593770 at 00593859
;   core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10 at 00593a21
;
; Referenced Globals:
;   undefined4 DAT_005eed92
;
; *****************************************************************************

section .text

    SUB ESP,0x34                        ; 005938c0
        ;   Label: core_xform.cpp_quaternionToMatrix3x3_FUN_005938c0
    MOV EDX,dword ptr [ESP + 0x38]      ; 005938c3
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005938c7
    FLD float ptr [EAX + 0x4]           ; 005938cb
    FMUL ST0                            ; 005938ce
    FLD float ptr [EAX]                 ; 005938d0
    FMUL ST0                            ; 005938d2
    FADDP                               ; 005938d4
    FLD float ptr [EAX + 0x8]           ; 005938d6
    FMUL ST0                            ; 005938d9
    FADDP                               ; 005938db
    FLD float ptr [EAX + 0xc]           ; 005938dd
    FMUL ST0                            ; 005938e0
    FADDP                               ; 005938e2
    FLD float ptr [EAX + 0x4]           ; 005938e4
    FXCH                                ; 005938e7
    FDIVR float ptr [0x005eed92]        ; 005938e9 | DAT_005eed92
    FXCH                                ; 005938ef
    FMUL ST1                            ; 005938f1
    FLD float ptr [EAX + 0x8]           ; 005938f3
    FMUL ST2                            ; 005938f6
    FLD float ptr [EAX + 0xc]           ; 005938f8
    FMULP ST3                           ; 005938fb
    FLD float ptr [EAX]                 ; 005938fd
    FMUL ST2                            ; 005938ff
    FLD float ptr [EAX]                 ; 00593901
    FXCH ST2                            ; 00593903
    FSTP float ptr [ESP + 0x8]          ; 00593905
    FXCH                                ; 00593909
    FMUL float ptr [ESP + 0x8]          ; 0059390b
    FLD float ptr [EAX]                 ; 0059390f
    FXCH ST4                            ; 00593911
    FSTP float ptr [ESP + 0xc]          ; 00593913
    FXCH ST3                            ; 00593917
    FMUL float ptr [ESP + 0xc]          ; 00593919
    FLD float ptr [EAX + 0x4]           ; 0059391d
    FMULP ST3                           ; 00593920
    FLD float ptr [EAX + 0x4]           ; 00593922
    FMUL float ptr [ESP + 0x8]          ; 00593925
    FLD float ptr [EAX + 0x4]           ; 00593929
    FMUL float ptr [ESP + 0xc]          ; 0059392c
    FLD float ptr [EAX + 0x8]           ; 00593930
    FMUL float ptr [ESP + 0x8]          ; 00593933
    FXCH ST4                            ; 00593937
    FSTP float ptr [ESP + 0x10]         ; 00593939
    FLD float ptr [EAX + 0x8]           ; 0059393d
    FMUL float ptr [ESP + 0xc]          ; 00593940
    FXCH ST5                            ; 00593944
    FSTP float ptr [ESP + 0x1c]         ; 00593946
    FLD float ptr [EAX + 0xc]           ; 0059394a
    FMUL float ptr [ESP + 0xc]          ; 0059394d
    FXCH                                ; 00593951
    FSTP float ptr [ESP + 0x24]         ; 00593953
    FXCH ST3                            ; 00593957
    FST float ptr [ESP + 0x28]          ; 00593959
    FXCH                                ; 0059395d
    FST float ptr [ESP + 0x20]          ; 0059395f
    FXCH ST5                            ; 00593963
    FSTP float ptr [ESP + 0x14]         ; 00593965
    FLD float ptr [ESP + 0x24]          ; 00593969
    FXCH ST2                            ; 0059396d
    FSTP float ptr [ESP + 0x18]         ; 0059396f
    FLD float ptr [ESP + 0x1c]          ; 00593973
    FXCH ST4                            ; 00593977
    FST float ptr [ESP + 0x2c]          ; 00593979
    FLD float ptr [ESP + 0x24]          ; 0059397d
    FXCH ST4                            ; 00593981
    FSTP float ptr [ESP + 0x30]         ; 00593983
    FXCH                                ; 00593987
    FADD float ptr [ESP + 0x30]         ; 00593989
    FXCH ST5                            ; 0059398d
    FADD float ptr [ESP + 0x18]         ; 0059398f
    FXCH ST2                            ; 00593993
    FSUB float ptr [ESP + 0x14]         ; 00593995
    FLD1                                ; 00593999
    FXCH ST3                            ; 0059399b
    FSTP float ptr [EDX + 0x10]         ; 0059399d
    FLD float ptr [ESP + 0x1c]          ; 005939a0
    FXCH                                ; 005939a4
    FSTP float ptr [EDX + 0x20]         ; 005939a6
    FLD float ptr [ESP + 0x20]          ; 005939a9
    FSUB float ptr [ESP + 0x18]         ; 005939ad
    FXCH ST5                            ; 005939b1
    FADD float ptr [ESP + 0x30]         ; 005939b3
    FXCH ST2                            ; 005939b7
    FADD float ptr [ESP + 0x10]         ; 005939b9
    FXCH ST4                            ; 005939bd
    FADD float ptr [ESP + 0x14]         ; 005939bf
    FXCH ST5                            ; 005939c3
    FSTP float ptr [EDX + 0x4]          ; 005939c5
    FLD1                                ; 005939c8
    FXCH ST4                            ; 005939ca
    FSTP float ptr [EDX + 0x24]         ; 005939cc
    FLD float ptr [ESP + 0x2c]          ; 005939cf
    FSUB float ptr [ESP + 0x10]         ; 005939d3
    FXCH                                ; 005939d7
    FADD float ptr [ESP + 0x28]         ; 005939d9
    FXCH ST5                            ; 005939dd
    FSTP float ptr [EDX + 0x8]          ; 005939df
    FLD1                                ; 005939e2
    FXCH                                ; 005939e4
    FSTP float ptr [EDX + 0x18]         ; 005939e6
    FXCH ST2                            ; 005939e9
    FSUBRP ST5,ST0                      ; 005939eb
    FSUBP ST2,ST0                       ; 005939ed
    FSUBRP ST2,ST0                      ; 005939ef
    FXCH ST2                            ; 005939f1
    FSTP float ptr [EDX]                ; 005939f3
    FXCH                                ; 005939f5
    FSTP float ptr [EDX + 0x14]         ; 005939f7
    FSTP float ptr [EDX + 0x28]         ; 005939fa
    ADD ESP,0x34                        ; 005939fd
    RET                                 ; 00593a00

