; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200(CDemonRenderer * this_ptr, CMatrix3x3f * transform_matrix, CVector3f * rotation_angles)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CMatrix3x3f *    Stack[0x8]:4   transform_matrix
; CVector3f *      Stack[0xc]:4   rotation_angles
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[5]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 at 0044c639
;   core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80 at 00472b3d
;   core_mirror.cpp_setupMirrorCamera_FUN_00521480 at 005214b5
;   core_setedit.cpp_WriteActBackdrop_FUN_0057ce80 at 0057d05b
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0 at 0048c1ed
;
; Referenced Globals:
;   double g_CameraRotationInvPi = 0.318309886192889
;   double g_CameraRotationFixedPoint = 32768
;   double g_FixedPointMatrixScale = 65536
;   int g_ProjectionScale = 0x10000
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;   int g_CameraRotationPitch
;   int g_CameraRotationYaw
;   int g_CameraRotationRoll
;   CMatrix3x3i g_TransformMatrix
;   undefined4 g_TransformMatrix[0][1]
;   undefined4 g_TransformMatrix[0][2]
;   undefined4 g_TransformMatrix[1][0]
;   ... and 5 more
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
;   crt_math.c_round_FUN_005fe6b0
;   engine_matrix.c_invertTransformMatrix_FUN_0050c640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c200
        ;   Label: engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
    PUSH ESI                            ; 0048c201
    PUSH EDI                            ; 0048c202
    PUSH EBP                            ; 0048c203
    MOV EBP,ESP                         ; 0048c204
    SUB ESP,0xc                         ; 0048c206
    AND ESP,0xfffffff8                  ; 0048c209
    MOV ESI,dword ptr [EBP + 0x14]      ; 0048c20c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0048c20f
    MOV EAX,ESP                         ; 0048c212
    PUSH EAX                            ; 0048c214
    PUSH EBX                            ; 0048c215
    CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160 ; 0048c216 | CVector3f * core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
        ;   XREF to: 00472160 (UNCONDITIONAL_CALL)
    FLD float ptr [EBX]                 ; 0048c21b
    FMUL double ptr [0x0062200d]        ; 0048c21d | double g_FixedPointMatrixScale
    FLD float ptr [EBX + 0x4]           ; 0048c223
    FMUL double ptr [0x0062200d]        ; 0048c226 | double g_FixedPointMatrixScale
    FLD float ptr [EBX + 0x8]           ; 0048c22c
    FMUL double ptr [0x0062200d]        ; 0048c22f | double g_FixedPointMatrixScale
    FLD float ptr [EBX + 0xc]           ; 0048c235
    ADD ESP,0x8                         ; 0048c238
    FMUL double ptr [0x0062200d]        ; 0048c23b | double g_FixedPointMatrixScale
    FLD float ptr [ESP]                 ; 0048c241
    FMUL double ptr [0x00621ffd]        ; 0048c244 | double g_CameraRotationInvPi
    FLD float ptr [ESP + 0x8]           ; 0048c24a
    FMUL double ptr [0x00621ffd]        ; 0048c24e | double g_CameraRotationInvPi
    FLD float ptr [ESP + 0x4]           ; 0048c254
    FMUL double ptr [0x00621ffd]        ; 0048c258 | double g_CameraRotationInvPi
    FXCH ST2                            ; 0048c25e
    FMUL double ptr [0x00622005]        ; 0048c260 | double g_CameraRotationFixedPoint
    FXCH                                ; 0048c266
    FMUL double ptr [0x00622005]        ; 0048c268 | double g_CameraRotationFixedPoint
    FXCH ST2                            ; 0048c26e
    FMUL double ptr [0x00622005]        ; 0048c270 | double g_CameraRotationFixedPoint
    FXCH ST6                            ; 0048c276
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c278 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [0x02d052e8]        ; 0048c27d | CMatrix3x3i g_TransformMatrix
    FLD float ptr [EBX + 0x10]          ; 0048c283
    FMUL double ptr [0x0062200d]        ; 0048c286 | double g_FixedPointMatrixScale
    FXCH ST5                            ; 0048c28c
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c28e | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [0x02d052ec]        ; 0048c293 | g_TransformMatrix[0][1]
    FLD float ptr [EBX + 0x14]          ; 0048c299
    FMUL double ptr [0x0062200d]        ; 0048c29c | double g_FixedPointMatrixScale
    FXCH ST4                            ; 0048c2a2
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c2a4 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [0x02d052f0]        ; 0048c2a9 | g_TransformMatrix[0][2]
    FLD float ptr [EBX + 0x18]          ; 0048c2af
    FMUL double ptr [0x0062200d]        ; 0048c2b2 | double g_FixedPointMatrixScale
    FXCH ST3                            ; 0048c2b8
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c2ba | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [0x02d052f4]        ; 0048c2bf | g_TransformMatrix[1][0]
    FLD float ptr [EBX + 0x1c]          ; 0048c2c5
    FMUL double ptr [0x0062200d]        ; 0048c2c8 | double g_FixedPointMatrixScale
    FXCH ST5                            ; 0048c2ce
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c2d0 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [0x02d052f8]        ; 0048c2d5 | g_TransformMatrix[1][1]
    FLD float ptr [EBX + 0x20]          ; 0048c2db
    FMUL double ptr [0x0062200d]        ; 0048c2de | double g_FixedPointMatrixScale
    MOV EDX,0x10000                     ; 0048c2e4
    MOV EBX,dword ptr [0x006793c0]      ; 0048c2e9 | int g_ProjectionScale
    MOV EAX,EDX                         ; 0048c2ef
    FXCH ST4                            ; 0048c2f1
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c2f3 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FXCH ST3                            ; 0048c2f8
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c2fa | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FXCH ST5                            ; 0048c2ff
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c301 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FXCH ST4                            ; 0048c306
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c308 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FXCH ST3                            ; 0048c30d
    FISTP dword ptr [0x02d052fc]        ; 0048c30f | g_TransformMatrix[1][2]
    FXCH ST4                            ; 0048c315
    FISTP dword ptr [0x02d05300]        ; 0048c317 | g_TransformMatrix[2][0]
    FXCH ST2                            ; 0048c31d
    FISTP dword ptr [0x02d05304]        ; 0048c31f | g_TransformMatrix[2][1]
    FISTP dword ptr [0x02d05308]        ; 0048c325 | g_TransformMatrix[2][2]
    FXCH                                ; 0048c32b
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c32d | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FXCH                                ; 0048c332
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c334 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FXCH ST2                            ; 0048c339
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c33b | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FXCH                                ; 0048c340
    FISTP dword ptr [0x02d052d0]        ; 0048c342 | int g_CameraRotationPitch
    FXCH                                ; 0048c348
    FISTP dword ptr [0x02d052d4]        ; 0048c34a | int g_CameraRotationYaw
    FISTP dword ptr [0x02d052d8]        ; 0048c350 | int g_CameraRotationRoll
    IMUL EDX                            ; 0048c356
    IDIV EBX                            ; 0048c358
    MOV EDX,dword ptr [0x02d02560]      ; 0048c35a | int g_ClipRight
    MOV ECX,dword ptr [0x02d02558]      ; 0048c360 | int g_ClipLeft
    MOV EBX,dword ptr [0x02d02564]      ; 0048c366 | int g_ClipBottom
    MOV EDI,dword ptr [0x02d0255c]      ; 0048c36c | int g_ClipTop
    SUB EDX,ECX                         ; 0048c372
    MOV dword ptr [ESI + 0x24],EAX      ; 0048c374
    INC EDX                             ; 0048c377
    SUB EBX,EDI                         ; 0048c378
    SHL EDX,0x10                        ; 0048c37a
    INC EBX                             ; 0048c37d
    MOV EAX,EDX                         ; 0048c37e
    SAR EDX,0x1f                        ; 0048c380
    IDIV EBX                            ; 0048c383
    MOV EDX,0x10000                     ; 0048c385
    MOV EBX,dword ptr [0x006793c0]      ; 0048c38a | int g_ProjectionScale
    MOV dword ptr [ESI + 0x28],EAX      ; 0048c390
    IMUL EDX                            ; 0048c393
    IDIV EBX                            ; 0048c395
    MOV dword ptr [ESI + 0x28],EAX      ; 0048c397
    MOV EDX,dword ptr [0x02d052e8]      ; 0048c39a | CMatrix3x3i g_TransformMatrix
    MOV EAX,dword ptr [ESI + 0x24]      ; 0048c3a0
    IMUL EDX                            ; 0048c3a3
    SHRD EAX,EDX,0x10                   ; 0048c3a5
    MOV [0x02d052e8],EAX                ; 0048c3a9 | CMatrix3x3i g_TransformMatrix
    MOV EDX,dword ptr [0x02d052f4]      ; 0048c3ae | g_TransformMatrix[1][0]
    MOV EAX,dword ptr [ESI + 0x24]      ; 0048c3b4
    IMUL EDX                            ; 0048c3b7
    SHRD EAX,EDX,0x10                   ; 0048c3b9
    MOV EDX,dword ptr [0x02d05300]      ; 0048c3bd | g_TransformMatrix[2][0]
    MOV [0x02d052f4],EAX                ; 0048c3c3 | g_TransformMatrix[1][0]
    MOV EAX,dword ptr [ESI + 0x24]      ; 0048c3c8
    IMUL EDX                            ; 0048c3cb
    SHRD EAX,EDX,0x10                   ; 0048c3cd
    MOV EDX,dword ptr [0x02d052ec]      ; 0048c3d1 | g_TransformMatrix[0][1]
    MOV [0x02d05300],EAX                ; 0048c3d7 | g_TransformMatrix[2][0]
    MOV EAX,dword ptr [ESI + 0x28]      ; 0048c3dc
    IMUL EDX                            ; 0048c3df
    SHRD EAX,EDX,0x10                   ; 0048c3e1
    MOV EDX,dword ptr [0x02d052f8]      ; 0048c3e5 | g_TransformMatrix[1][1]
    MOV [0x02d052ec],EAX                ; 0048c3eb | g_TransformMatrix[0][1]
    MOV EAX,dword ptr [ESI + 0x28]      ; 0048c3f0
    IMUL EDX                            ; 0048c3f3
    SHRD EAX,EDX,0x10                   ; 0048c3f5
    MOV EDX,dword ptr [0x02d05304]      ; 0048c3f9 | g_TransformMatrix[2][1]
    MOV [0x02d052f8],EAX                ; 0048c3ff | g_TransformMatrix[1][1]
    MOV EAX,dword ptr [ESI + 0x28]      ; 0048c404
    IMUL EDX                            ; 0048c407
    SHRD EAX,EDX,0x10                   ; 0048c409
    MOV [0x02d05304],EAX                ; 0048c40d | g_TransformMatrix[2][1]
    CALL engine_matrix.c_invertTransformMatrix_FUN_0050c640 ; 0048c412 | void engine_matrix.c_invertTransformMatrix_FUN_0050c640()
        ;   XREF to: 0050c640 (UNCONDITIONAL_CALL)
    MOV ESP,EBP                         ; 0048c417
    POP EBP                             ; 0048c419
    POP EDI                             ; 0048c41a
    POP ESI                             ; 0048c41b
    POP EBX                             ; 0048c41c
    RET                                 ; 0048c41d

