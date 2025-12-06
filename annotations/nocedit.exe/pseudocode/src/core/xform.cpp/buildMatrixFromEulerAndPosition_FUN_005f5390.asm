; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   output_matrix
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   euler_angles
; Local Variables:
; undefined8       Stack[-0x34]:8  local_34
; undefined8       Stack[-0x2c]:8  local_2c
; undefined8       Stack[-0x24]:8  local_24
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
;
; XREF[17]:
;   core_bodypart.cpp_FUN_0041a630 at 0041a87b
;   core_bugs.cpp_FUN_00425fe0 at 004260e0
;   core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80 at 0042cec0
;   core_cloth.cpp_OrientBoneCheck_FUN_0043a110 at 0043a20a
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047e27f
;   core_fire.cpp_CBulletHole_ctor_FUN_004bf7f0 at 004bf92f
;   core_ladder.cpp_FUN_00502b80 at 00502bcb
;   core_mimic.cpp_FUN_0051f930 at 0051faca
;   core_platfrm.cpp_CPlatform_attachActor_FUN_0054e1e0 at 0054e268
;   core_platfrm.cpp_FUN_0054cc30 at 0054ce41
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f5390
        ;   Label: core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
    SUB ESP,0x38                        ; 005f5391
    MOV EDX,dword ptr [ESP + 0x40]      ; 005f5394
    MOV ECX,dword ptr [ESP + 0x44]      ; 005f5398
    MOV EBX,dword ptr [ESP + 0x48]      ; 005f539c
    FLD float ptr [EBX]                 ; 005f53a0
    FLD ST0                             ; 005f53a2
    FSIN                                ; 005f53a4
    FXCH                                ; 005f53a6
    FCOS                                ; 005f53a8
    FLD float ptr [EBX + 0x8]           ; 005f53aa
    FLD ST0                             ; 005f53ad
    FSIN                                ; 005f53af
    FXCH                                ; 005f53b1
    FCOS                                ; 005f53b3
    FLD float ptr [EBX + 0x4]           ; 005f53b5
    FLD ST0                             ; 005f53b8
    FSIN                                ; 005f53ba
    FXCH                                ; 005f53bc
    FCOS                                ; 005f53be
    FXCH                                ; 005f53c0
    FST double ptr [ESP + 0x20]         ; 005f53c2
    FMUL ST5                            ; 005f53c6
    FLD double ptr [ESP + 0x20]         ; 005f53c8
    FXCH ST5                            ; 005f53cc
    FSTP double ptr [ESP + 0x8]         ; 005f53ce
    FXCH ST4                            ; 005f53d2
    FMUL double ptr [ESP + 0x8]         ; 005f53d4
    FXCH ST3                            ; 005f53d8
    FST double ptr [ESP + 0x10]         ; 005f53da
    FMUL double ptr [ESP + 0x8]         ; 005f53de
    FXCH ST2                            ; 005f53e2
    FST double ptr [ESP + 0x18]         ; 005f53e4
    FMUL double ptr [ESP + 0x8]         ; 005f53e8
    FXCH                                ; 005f53ec
    FST double ptr [ESP + 0x28]         ; 005f53ee
    FMUL ST5                            ; 005f53f2
    FLD ST4                             ; 005f53f4
    FMUL double ptr [ESP + 0x10]        ; 005f53f6
    FXCH ST5                            ; 005f53fa
    FMUL double ptr [ESP + 0x18]        ; 005f53fc
    FXCH ST6                            ; 005f5400
    FCHS                                ; 005f5402
    FSTP float ptr [EDX + 0x24]         ; 005f5404
    FLD ST0                             ; 005f5407
    FMUL double ptr [ESP + 0x10]        ; 005f5409
    FXCH ST4                            ; 005f540d
    FSTP float ptr [EDX + 0x20]         ; 005f540f
    FMUL double ptr [ESP + 0x18]        ; 005f5412
    FXCH ST2                            ; 005f5416
    FSTP float ptr [EDX + 0x4]          ; 005f5418
    FLD double ptr [ESP + 0x28]         ; 005f541b
    FMUL double ptr [ESP + 0x18]        ; 005f541f
    FXCH                                ; 005f5423
    FSTP float ptr [EDX + 0x14]         ; 005f5425
    FLD double ptr [ESP + 0x10]         ; 005f5428
    FMUL double ptr [ESP + 0x20]        ; 005f542c
    FXCH                                ; 005f5430
    FADDP ST4,ST0                       ; 005f5432
    FLD double ptr [ESP + 0x28]         ; 005f5434
    FCHS                                ; 005f5438
    FMUL double ptr [ESP + 0x10]        ; 005f543a
    FLD double ptr [ESP + 0x20]         ; 005f543e
    FCHS                                ; 005f5442
    FMUL double ptr [ESP + 0x18]        ; 005f5444
    FXCH ST2                            ; 005f5448
    FADDP ST3,ST0                       ; 005f544a
    FLD double ptr [ESP + 0x28]         ; 005f544c
    FMUL double ptr [ESP + 0x8]         ; 005f5450
    FSTP float ptr [EDX + 0x28]         ; 005f5454
    FADDP ST5,ST0                       ; 005f5457
    FADDP ST2,ST0                       ; 005f5459
    FXCH ST2                            ; 005f545b
    FSTP float ptr [EDX]                ; 005f545d
    FXCH                                ; 005f545f
    FSTP float ptr [EDX + 0x18]         ; 005f5461
    FXCH                                ; 005f5464
    FSTP float ptr [EDX + 0x10]         ; 005f5466
    FSTP float ptr [EDX + 0x8]          ; 005f5469
    FLD float ptr [ECX + 0x4]           ; 005f546c
    FMUL float ptr [EDX + 0x4]          ; 005f546f
    FLD float ptr [ECX]                 ; 005f5472
    FMUL float ptr [EDX]                ; 005f5474
    FADDP                               ; 005f5476
    FLD float ptr [ECX + 0x8]           ; 005f5478
    FMUL float ptr [EDX + 0x8]          ; 005f547b
    FADDP                               ; 005f547e
    FCHS                                ; 005f5480
    FSTP float ptr [EDX + 0xc]          ; 005f5482
    FLD float ptr [ECX + 0x4]           ; 005f5485
    FMUL float ptr [EDX + 0x14]         ; 005f5488
    FLD float ptr [ECX]                 ; 005f548b
    FMUL float ptr [EDX + 0x10]         ; 005f548d
    FADDP                               ; 005f5490
    FLD float ptr [ECX + 0x8]           ; 005f5492
    FMUL float ptr [EDX + 0x18]         ; 005f5495
    FADDP                               ; 005f5498
    FCHS                                ; 005f549a
    FSTP float ptr [EDX + 0x1c]         ; 005f549c
    FLD float ptr [ECX + 0x4]           ; 005f549f
    FMUL float ptr [EDX + 0x24]         ; 005f54a2
    FLD float ptr [ECX]                 ; 005f54a5
    FMUL float ptr [EDX + 0x20]         ; 005f54a7
    FADDP                               ; 005f54aa
    FLD float ptr [ECX + 0x8]           ; 005f54ac
    FMUL float ptr [EDX + 0x28]         ; 005f54af
    FADDP                               ; 005f54b2
    FCHS                                ; 005f54b4
    FSTP float ptr [EDX + 0x2c]         ; 005f54b6
    ADD ESP,0x38                        ; 005f54b9
    POP EBX                             ; 005f54bc
    RET                                 ; 005f54bd

