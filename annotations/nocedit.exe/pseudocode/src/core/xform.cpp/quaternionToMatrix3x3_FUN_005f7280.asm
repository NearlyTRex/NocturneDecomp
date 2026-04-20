; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CQuaternion4f * __cdecl core_xform_cpp_quaternionToMatrix3x3_FUN_005f7280(CMatrix3x4f *matrix_out,CQuaternion4f *quat_in)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix_out
; CQuaternion4f *  Stack[0x8]:4   quat_in
;
; XREF[7]:
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40 at 0059fba8
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820 at 0059f8f5
;   core_skeleton.cpp_computeBoneWorldMatrices_FUN_005a1950 at 005a19c3
;   core_xform.cpp_lerpMatrix3x4_FUN_005f7140 at 005f721c
;   core_xform.cpp_quaternionToEulerAnglesZYX_FUN_005f7af0 at 005f7b02
;   core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0 at 005f7ad2
;   core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0 at 005f73f1
;
; Referenced Globals:
;   double g_QuaternionToMatrixScaleFactor = 2
;
; *****************************************************************************

section .text

    SUB ESP,0x88                        ; 005f7280
        ;   Label: core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280
    MOV EDX,dword ptr [ESP + 0x8c]      ; 005f7286
    MOV EAX,dword ptr [ESP + 0x90]      ; 005f728d
    FLD float ptr [EAX + 0x4]           ; 005f7294
    FMUL ST0                            ; 005f7297
    FLD float ptr [EAX]                 ; 005f7299
    FMUL ST0                            ; 005f729b
    FADDP                               ; 005f729d
    FLD float ptr [EAX + 0x8]           ; 005f729f
    FMUL ST0                            ; 005f72a2
    FADDP                               ; 005f72a4
    FLD float ptr [EAX + 0xc]           ; 005f72a6
    FMUL ST0                            ; 005f72a9
    FLD float ptr [EAX + 0x4]           ; 005f72ab
    FXCH                                ; 005f72ae
    FADDP ST2,ST0                       ; 005f72b0
    FLD ST0                             ; 005f72b2
    FXCH ST2                            ; 005f72b4
    FDIVR double ptr [0x006583dd]       ; 005f72b6 | g_QuaternionToMatrixScaleFactor
    FXCH ST2                            ; 005f72bc
    FMUL ST2                            ; 005f72be
    FLD float ptr [EAX + 0x8]           ; 005f72c0
    FST double ptr [ESP + 0x70]         ; 005f72c3
    FMUL ST3                            ; 005f72c7
    FLD float ptr [EAX + 0xc]           ; 005f72c9
    FST double ptr [ESP + 0x78]         ; 005f72cc
    FMULP ST4                           ; 005f72d0
    FLD float ptr [EAX]                 ; 005f72d2
    FLD ST0                             ; 005f72d4
    FMUL ST3                            ; 005f72d6
    FLD ST1                             ; 005f72d8
    FXCH ST3                            ; 005f72da
    FSTP double ptr [ESP + 0x18]        ; 005f72dc
    FXCH ST2                            ; 005f72e0
    FMUL double ptr [ESP + 0x18]        ; 005f72e2
    FXCH ST5                            ; 005f72e6
    FSTP double ptr [ESP + 0x20]        ; 005f72e8
    FMUL double ptr [ESP + 0x20]        ; 005f72ec
    FLD ST3                             ; 005f72f0
    FMULP ST3                           ; 005f72f2
    FLD ST3                             ; 005f72f4
    FMUL double ptr [ESP + 0x18]        ; 005f72f6
    FXCH ST4                            ; 005f72fa
    FMUL double ptr [ESP + 0x20]        ; 005f72fc
    FLD double ptr [ESP + 0x70]         ; 005f7300
    FMUL double ptr [ESP + 0x18]        ; 005f7304
    FXCH ST6                            ; 005f7308
    FSTP double ptr [ESP + 0x30]        ; 005f730a
    FLD double ptr [ESP + 0x70]         ; 005f730e
    FMUL double ptr [ESP + 0x20]        ; 005f7312
    FXCH ST2                            ; 005f7316
    FSTP double ptr [ESP + 0x38]        ; 005f7318
    FLD double ptr [ESP + 0x78]         ; 005f731c
    FMUL double ptr [ESP + 0x20]        ; 005f7320
    FXCH ST5                            ; 005f7324
    FSTP double ptr [ESP + 0x48]        ; 005f7326
    FXCH ST5                            ; 005f732a
    FST double ptr [ESP + 0x58]         ; 005f732c
    FXCH ST2                            ; 005f7330
    FSTP double ptr [ESP + 0x28]        ; 005f7332
    FLD double ptr [ESP + 0x48]         ; 005f7336
    FXCH ST5                            ; 005f733a
    FST double ptr [ESP + 0x50]         ; 005f733c
    FXCH ST3                            ; 005f7340
    FSTP double ptr [ESP + 0x40]        ; 005f7342
    FLD double ptr [ESP + 0x48]         ; 005f7346
    FLD double ptr [ESP + 0x40]         ; 005f734a
    FXCH ST2                            ; 005f734e
    FST double ptr [ESP + 0x60]         ; 005f7350
    FXCH ST5                            ; 005f7354
    FSTP double ptr [ESP + 0x68]        ; 005f7356
    FXCH ST2                            ; 005f735a
    FADD double ptr [ESP + 0x68]        ; 005f735c
    FXCH ST5                            ; 005f7360
    FADD double ptr [ESP + 0x38]        ; 005f7362
    FXCH ST3                            ; 005f7366
    FSUB double ptr [ESP + 0x30]        ; 005f7368
    FXCH ST2                            ; 005f736c
    FSUB double ptr [ESP + 0x38]        ; 005f736e
    FXCH                                ; 005f7372
    FADD double ptr [ESP + 0x68]        ; 005f7374
    FXCH ST4                            ; 005f7378
    FADD double ptr [ESP + 0x28]        ; 005f737a
    FLD1                                ; 005f737e
    FXCH ST4                            ; 005f7380
    FSTP float ptr [EDX + 0x10]         ; 005f7382
    FLD double ptr [ESP + 0x50]         ; 005f7385
    FADD double ptr [ESP + 0x30]        ; 005f7389
    FXCH ST3                            ; 005f738d
    FSTP float ptr [EDX + 0x20]         ; 005f738f
    FLD double ptr [ESP + 0x60]         ; 005f7392
    FSUB double ptr [ESP + 0x28]        ; 005f7396
    FXCH ST2                            ; 005f739a
    FSTP float ptr [EDX + 0x4]          ; 005f739c
    FLD1                                ; 005f739f
    FXCH                                ; 005f73a1
    FSTP float ptr [EDX + 0x24]         ; 005f73a3
    FLD double ptr [ESP + 0x40]         ; 005f73a6
    FADD double ptr [ESP + 0x58]        ; 005f73aa
    FXCH ST3                            ; 005f73ae
    FSTP float ptr [EDX + 0x8]          ; 005f73b0
    FLD1                                ; 005f73b3
    FXCH ST2                            ; 005f73b5
    FSTP float ptr [EDX + 0x18]         ; 005f73b7
    FXCH ST3                            ; 005f73ba
    FSUBRP ST5,ST0                      ; 005f73bc
    FXCH ST2                            ; 005f73be
    FSUBRP ST3,ST0                      ; 005f73c0
    FSUBP                               ; 005f73c2
    FXCH ST2                            ; 005f73c4
    FSTP float ptr [EDX]                ; 005f73c6
    FSTP float ptr [EDX + 0x14]         ; 005f73c8
    FSTP float ptr [EDX + 0x28]         ; 005f73cb
    ADD ESP,0x88                        ; 005f73ce
    RET                                 ; 005f73d4

