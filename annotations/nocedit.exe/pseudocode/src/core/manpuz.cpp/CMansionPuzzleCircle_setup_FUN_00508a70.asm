; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_setup_FUN_00508a70(CMansionPuzzleCircle *this_ptr)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; Local Variables:
; CMatrix3x4f      Stack[-0x1dc]:48  local_1dc
; CMatrix3x4f      Stack[-0x1ac]:48  local_1ac
; CMatrix3x4f      Stack[-0x17c]:48  local_17c
; CVector3f        Stack[-0x14c]:12  local_14c
; CVector3f        Stack[-0x140]:12  local_140
; CVector3f        Stack[-0x134]:12  local_134
; CVector3f        Stack[-0x128]:12  local_128
; CMatrix3x4f      Stack[-0x11c]:48  local_11c
; CMatrix3x3f      Stack[-0xec]:36  local_ec
; float            Stack[-0xc4]:4  local_c4
; float            Stack[-0xc0]:4  local_c0
; float            Stack[-0xbc]:4  local_bc
; float            Stack[-0xb8]:4  local_b8
; float            Stack[-0xb4]:4  local_b4
; float            Stack[-0xb0]:4  local_b0
; float            Stack[-0xac]:4  local_ac
; float            Stack[-0xa8]:4  local_a8
; float            Stack[-0xa4]:4  local_a4
; float            Stack[-0xa0]:4  local_a0
; float            Stack[-0x9c]:4  local_9c
; float            Stack[-0x98]:4  local_98
; CVector3f        Stack[-0x94]:12  local_94
; CVector3f        Stack[-0x88]:12  local_88
; CVector3f        Stack[-0x7c]:12  local_7c
; CVector3f        Stack[-0x70]:12  local_70
; CVector3f        Stack[-0x64]:12  local_64
; CVector3f        Stack[-0x58]:12  local_58
; CVector3f        Stack[-0x4c]:12  local_4c
; int              Stack[-0x38]:4  local_38
; SGem *           Stack[-0x34]:4  local_34
; float *          Stack[-0x30]:4  local_30
; float *          Stack[-0x2c]:4  local_2c
; CVector3f *      Stack[-0x28]:4  local_28
; SGem *           Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   double DOUBLE_006356d5 = 0.5
;   double DOUBLE_006356dd = 2
;   double DOUBLE_006356e5 = 0.75
;   double DOUBLE_006356ed = 0.25
;   float FLOAT_006356f5 = -4
;   WatcomTypeInfo g_CVectorTypeInfo
;   float FLOAT_00660d8c = 0.5235988
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
;   core_manpuz.cpp_CMansionPuzzleCircle_getPanelColor_FUN_0050a420
;   core_manpuz.cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_00509b20
;   core_manpuz.cpp_CMansionPuzzleCircle_updateReflectorPosition_FUN_0050af80
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_getTranslation_FUN_005f6110
;   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;   crt_memory.c___arrinit_FUN_005fe667
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00508a70
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_setup_FUN_00508a70
    PUSH ESI                            ; 00508a71
    PUSH EDI                            ; 00508a72
    PUSH EBP                            ; 00508a73
    MOV EBP,ESP                         ; 00508a74
    SUB ESP,0x1cc                       ; 00508a76
    SUB EBP,0x7e                        ; 00508a7c
    MOV EDX,dword ptr [EBP + 0x92]      ; 00508a7f
    PUSH EDX                            ; 00508a85
    MOV EBX,dword ptr [EBP + 0x92]      ; 00508a86
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 00508a8c
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00508a91
    ADD EBX,0x158                       ; 00508a94
    PUSH EBX                            ; 00508a9a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 00508a9b
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EBP + 0x92]      ; 00508aa0
    ADD ESP,0x4                         ; 00508aa6
    ADD EAX,0x2d4                       ; 00508aa9
    PUSH EAX                            ; 00508aae
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 00508aaf
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EBP + 0x92]      ; 00508ab4
    ADD ESP,0x4                         ; 00508aba
    ADD EAX,0x450                       ; 00508abd
    PUSH EAX                            ; 00508ac2
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 00508ac3
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EBP + 0x92]      ; 00508ac8
    ADD ESP,0x4                         ; 00508ace
    ADD EAX,0x14c0                      ; 00508ad1
    PUSH EAX                            ; 00508ad6
    MOV ECX,dword ptr [0x006703ec]      ; 00508ad7 | g_CDemonRendererPtr2
    PUSH ECX                            ; 00508add | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 00508ade
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00508ae3
    PUSH EBX                            ; 00508ae6
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00508ae7
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    LEA EBX,[EAX + 0x5678]              ; 00508aec
    MOV EAX,dword ptr [EBX]             ; 00508af2
    MOV dword ptr [EBP + -0x36],EAX     ; 00508af4
    LEA EAX,[EBX + 0x4]                 ; 00508af7
    MOV EAX,dword ptr [EAX]             ; 00508afa
    MOV dword ptr [EBP + -0x32],EAX     ; 00508afc
    LEA EAX,[EBX + 0x8]                 ; 00508aff
    MOV EAX,dword ptr [EAX]             ; 00508b02
    MOV dword ptr [EBP + -0x2e],EAX     ; 00508b04
    MOV EAX,dword ptr [EBX + 0xc]       ; 00508b07
    ADD EBX,0xc                         ; 00508b0a
    MOV dword ptr [EBP + -0x2a],EAX     ; 00508b0d
    LEA EAX,[EBX + 0x4]                 ; 00508b10
    MOV EAX,dword ptr [EAX]             ; 00508b13
    MOV dword ptr [EBP + -0x26],EAX     ; 00508b15
    LEA EAX,[EBX + 0x8]                 ; 00508b18
    MOV EAX,dword ptr [EAX]             ; 00508b1b
    MOV dword ptr [EBP + -0x22],EAX     ; 00508b1d
    MOV dword ptr [EBP + 0x76],EAX      ; 00508b20
    MOV EAX,dword ptr [EBP + 0x92]      ; 00508b23
    MOV dword ptr [EAX + 0x150c],0x414239c1 ; 00508b29
    FLD float ptr [EAX + 0x150c]        ; 00508b33
    FADD float ptr [EBP + 0x76]         ; 00508b39
    FLD float ptr [0x00660d8c]          ; 00508b3c | FLOAT_00660d8c
    FMUL double ptr [0x006356d5]        ; 00508b42 | DOUBLE_006356d5
    FCOS                                ; 00508b48
    FDIVP                               ; 00508b4a
    MOV EAX,dword ptr [EBP + 0x92]      ; 00508b4c
    FLD float ptr [EAX + 0x5e8]         ; 00508b52
    FMUL ST0                            ; 00508b58
    FLD float ptr [EAX + 0x5e4]         ; 00508b5a
    FMUL ST0                            ; 00508b60
    FADDP                               ; 00508b62
    FLD float ptr [EAX + 0x5ec]         ; 00508b64
    FMUL ST0                            ; 00508b6a
    FXCH ST2                            ; 00508b6c
    FSTP float ptr [EAX + 0x1508]       ; 00508b6e
    FLD float ptr [EBP + -0x26]         ; 00508b74
    FSUB float ptr [EBP + -0x32]        ; 00508b77
    FXCH ST2                            ; 00508b7a
    FADDP                               ; 00508b7c
    FXCH                                ; 00508b7e
    FSTP float ptr [EAX + 0x1510]       ; 00508b80
    FSQRT                               ; 00508b86
    ADD ESP,0x4                         ; 00508b88
    FLDZ                                ; 00508b8b
    FCOMPP                              ; 00508b8d
    FNSTSW AX                           ; 00508b8f
    SAHF                                ; 00508b91
    JZ 0x00509062                       ; 00508b92
        ;   XREF to: 00509062 (CONDITIONAL_JUMP)  ; LAB_00509062
    MOV EAX,dword ptr [EBP + 0x92]      ; 00508b98
        ;   Label: LAB_00508b98
    FLD float ptr [EAX + 0x5d0]         ; 00508b9e
    FMUL ST0                            ; 00508ba4
    FLD float ptr [EAX + 0x5cc]         ; 00508ba6
    FMUL ST0                            ; 00508bac
    FADDP                               ; 00508bae
    FLD float ptr [EAX + 0x5d4]         ; 00508bb0
    FMUL ST0                            ; 00508bb6
    FADDP                               ; 00508bb8
    FSQRT                               ; 00508bba
    FLDZ                                ; 00508bbc
    FCOMPP                              ; 00508bbe
    FNSTSW AX                           ; 00508bc0
    SAHF                                ; 00508bc2
    JNZ 0x00508be9                      ; 00508bc3
        ;   XREF to: 00508be9 (CONDITIONAL_JUMP)  ; LAB_00508be9
    MOV EAX,dword ptr [EBP + 0x92]      ; 00508bc5
    MOV dword ptr [EAX + 0x5d0],0x40400000 ; 00508bcb
    MOV dword ptr [EAX + 0x5d4],0xbdcccccd ; 00508bd5
    MOV dword ptr [EAX + 0x5cc],0x0     ; 00508bdf
    MOV EAX,dword ptr [EBP + 0x92]      ; 00508be9
        ;   Label: LAB_00508be9
    ADD EAX,0x5d8                       ; 00508bef
    PUSH EAX                            ; 00508bf4
    MOV EAX,dword ptr [EBP + 0x92]      ; 00508bf5
    ADD EAX,0x5cc                       ; 00508bfb
    PUSH EAX                            ; 00508c00
    LEA EAX,[EBP + 0xffffff12]          ; 00508c01
    PUSH EAX                            ; 00508c07
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 00508c08
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV EAX,dword ptr [EBP + 0x92]      ; 00508c0d
    ADD ESP,0xc                         ; 00508c13
    ADD EAX,0x2d4                       ; 00508c16
    PUSH EAX                            ; 00508c1b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00508c1c
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    LEA EBX,[EAX + 0x5678]              ; 00508c21
    MOV EAX,dword ptr [EBX]             ; 00508c27
    MOV dword ptr [EBP + -0x1e],EAX     ; 00508c29
    LEA EAX,[EBX + 0x4]                 ; 00508c2c
    MOV EAX,dword ptr [EAX]             ; 00508c2f
    MOV dword ptr [EBP + -0x1a],EAX     ; 00508c31
    LEA EAX,[EBX + 0x8]                 ; 00508c34
    MOV EAX,dword ptr [EAX]             ; 00508c37
    MOV dword ptr [EBP + -0x16],EAX     ; 00508c39
    MOV EAX,dword ptr [EBX + 0xc]       ; 00508c3c
    ADD EBX,0xc                         ; 00508c3f
    MOV dword ptr [EBP + -0x12],EAX     ; 00508c42
    LEA EAX,[EBX + 0x4]                 ; 00508c45
    MOV EAX,dword ptr [EAX]             ; 00508c48
    MOV dword ptr [EBP + -0xe],EAX      ; 00508c4a
    LEA EAX,[EBX + 0x8]                 ; 00508c4d
    MOV EAX,dword ptr [EAX]             ; 00508c50
    MOV dword ptr [EBP + -0xa],EAX      ; 00508c52
    MOV EAX,dword ptr [EBP + 0x92]      ; 00508c55
    ADD EAX,0xaa0                       ; 00508c5b
    MOV dword ptr [EBP + 0x5a],EAX      ; 00508c60
    MOV EAX,dword ptr [EBP + 0x92]      ; 00508c63
    ADD EAX,0xac4                       ; 00508c69
    MOV dword ptr [EBP + 0x66],EAX      ; 00508c6e
    MOV EAX,dword ptr [EBP + 0x92]      ; 00508c71
    ADD EAX,0xaa4                       ; 00508c77
    ADD ESP,0x4                         ; 00508c7c
    MOV dword ptr [EBP + 0x62],EAX      ; 00508c7f
    MOV EAX,dword ptr [EBP + 0x92]      ; 00508c82
    XOR EBX,EBX                         ; 00508c88
    ADD EAX,0xaa8                       ; 00508c8a
    MOV dword ptr [EBP + 0x56],EBX      ; 00508c8f
    MOV dword ptr [EBP + 0x5e],EAX      ; 00508c92
    MOV ESI,dword ptr [EBP + 0x56]      ; 00508c95
        ;   Label: LAB_00508c95
    PUSH ESI                            ; 00508c98
    MOV EDI,dword ptr [EBP + 0x92]      ; 00508c99
    PUSH EDI                            ; 00508c9f
    CALL core_manpuz.cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_00509b20 ; 00508ca0
        ;   XREF to: 00509b20 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_00509b20(CMansionPuzzleCircle * this_ptr, int panel_index)
    MOV EDI,ESI                         ; 00508ca5
    IMUL EAX,ESI,0xb8                   ; 00508ca7
    MOV EBX,dword ptr [EBP + 0x5a]      ; 00508cad
    ADD ESP,0x8                         ; 00508cb0
    MOV ECX,dword ptr [EBP + 0x5e]      ; 00508cb3
    ADD EBX,EAX                         ; 00508cb6
    PUSH ECX                            ; 00508cb8
    MOV dword ptr [EBP + 0x6a],EBX      ; 00508cb9
    MOV EBX,dword ptr [EBP + 0x62]      ; 00508cbc
    PUSH EBX                            ; 00508cbf
    MOV ESI,dword ptr [EBP + 0x6a]      ; 00508cc0
    PUSH ESI                            ; 00508cc3
    PUSH EDI                            ; 00508cc4
    MOV EAX,dword ptr [EBP + 0x92]      ; 00508cc5
    PUSH EAX                            ; 00508ccb
    CALL core_manpuz.cpp_CMansionPuzzleCircle_getPanelColor_FUN_0050a420 ; 00508ccc
        ;   XREF to: 0050a420 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_getPanelColor_FUN_0050a420(CMansionPuzzleCircle * this_ptr, int panel_index, float * out_r, float * out_g, ...)
    MOV EAX,ESI                         ; 00508cd1
    MOV dword ptr [ESI + 0x14],0x0      ; 00508cd3
    MOV EDX,dword ptr [EAX + 0x14]      ; 00508cda
    MOV dword ptr [ESI + 0x10],EDX      ; 00508cdd
    FLD float ptr [EAX + 0x10]          ; 00508ce0
    MOV dword ptr [ESI + 0x20],0x0      ; 00508ce3
    FSTP float ptr [ESI + 0xc]          ; 00508cea
    MOV EDX,dword ptr [EAX + 0x20]      ; 00508ced
    MOV dword ptr [ESI + 0x1c],EDX      ; 00508cf0
    FLD float ptr [EAX + 0x1c]          ; 00508cf3
    MOV EAX,EDI                         ; 00508cf6
    MOV dword ptr [EBP + 0x7a],EAX      ; 00508cf8
    FILD dword ptr [EBP + 0x7a]         ; 00508cfb
    FMUL float ptr [0x00660d8c]         ; 00508cfe | FLOAT_00660d8c
    MOV dword ptr [ESI + 0xac],0x0      ; 00508d04
    ADD ESP,0x14                        ; 00508d0e
    MOV dword ptr [ESI + 0xb0],0x0      ; 00508d11
    XOR EDX,EDX                         ; 00508d1b
    FXCH                                ; 00508d1d
    FSTP float ptr [ESI + 0x18]         ; 00508d1f
    MOV dword ptr [ESI + 0xb4],0x0      ; 00508d22
    LEA EAX,[EBP + -0x6]                ; 00508d2c
    MOV dword ptr [EBP + -0x6],EDX      ; 00508d2f
    PUSH EAX                            ; 00508d32
    LEA EAX,[EBP + -0x5e]               ; 00508d33
    MOV dword ptr [EBP + 0x2],EDX       ; 00508d36
    PUSH EAX                            ; 00508d39
    FSTP float ptr [EBP + -0x2]         ; 00508d3a
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 00508d3d
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00508d42
    LEA EAX,[EBP + -0x6]                ; 00508d45
    PUSH EAX                            ; 00508d48
    MOV EAX,dword ptr [EBP + 0x92]      ; 00508d49
    MOV EAX,dword ptr [EAX + 0x150c]    ; 00508d4f
    MOV dword ptr [EBP + 0xe],EAX       ; 00508d55
    LEA EAX,[EBP + 0x6]                 ; 00508d58
    PUSH EAX                            ; 00508d5b
    LEA EAX,[EBP + 0x12]                ; 00508d5c
    PUSH EAX                            ; 00508d5f
    LEA EAX,[EBP + -0x5e]               ; 00508d60
    XOR EBX,EBX                         ; 00508d63
    PUSH EAX                            ; 00508d65
    MOV dword ptr [EBP + 0x6],EBX       ; 00508d66
    MOV dword ptr [EBP + 0xa],EBX       ; 00508d69
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 00508d6c
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00508d71
    PUSH EAX                            ; 00508d74
    LEA EAX,[EBP + 0xfffffee2]          ; 00508d75
    PUSH EAX                            ; 00508d7b
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 00508d7c
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00508d81
    LEA EAX,[EBP + 0xfffffee2]          ; 00508d84
    PUSH EAX                            ; 00508d8a
    LEA EAX,[EBP + 0xffffff12]          ; 00508d8b
    PUSH EAX                            ; 00508d91
    LEA ESI,[EBP + 0xfffffeb2]          ; 00508d92
    LEA EDI,[EBP + 0xffffff72]          ; 00508d98
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 00508d9e
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 00508da3
    ADD ESP,0x8                         ; 00508da8
    LEA EAX,[EBP + 0x42]                ; 00508dab
    LEA ESI,[EBP + 0xfffffeb2]          ; 00508dae
    PUSH EAX                            ; 00508db4
    LEA EAX,[EBP + 0xffffff72]          ; 00508db5
    MOVSD.REP ES:EDI,ESI                ; 00508dbb
    PUSH EAX                            ; 00508dbd
    MOV EDI,dword ptr [EBP + 0x66]      ; 00508dbe
    CALL core_xform.cpp_getTranslation_FUN_005f6110 ; 00508dc1
        ;   XREF to: 005f6110 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_getTranslation_FUN_005f6110(CMatrix3x4f * matrix_in, CVector3f * vector_out)
    ADD ESP,0x8                         ; 00508dc6
    CMP EAX,EDI                         ; 00508dc9
    JZ 0x00508ddd                       ; 00508dcb
        ;   XREF to: 00508ddd (CONDITIONAL_JUMP)  ; LAB_00508ddd
    MOV EDX,dword ptr [EAX]             ; 00508dcd
    MOV dword ptr [EDI],EDX             ; 00508dcf
    MOV EDX,dword ptr [EAX + 0x4]       ; 00508dd1
    MOV dword ptr [EDI + 0x4],EDX       ; 00508dd4
    MOV EDX,dword ptr [EAX + 0x8]       ; 00508dd7
    MOV dword ptr [EDI + 0x8],EDX       ; 00508dda
    LEA EAX,[EBP + 0x2a]                ; 00508ddd
        ;   Label: LAB_00508ddd
    PUSH EAX                            ; 00508de0
    LEA EAX,[EBP + 0xffffff72]          ; 00508de1
    MOV EBX,dword ptr [EBP + 0x6a]      ; 00508de7
    PUSH EAX                            ; 00508dea
    ADD EBX,0x30                        ; 00508deb
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 00508dee
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x4f * matrix_in, CVector3f * euler_out)
    ADD ESP,0x8                         ; 00508df3
    CMP EBX,EAX                         ; 00508df6
    JNZ 0x00509093                      ; 00508df8
        ;   XREF to: 00509093 (CONDITIONAL_JUMP)  ; LAB_00509093
    PUSH 0x6598c0                       ; 00508dfe | g_CVectorTypeInfo
        ;   Label: LAB_00508dfe
    PUSH 0x4                            ; 00508e03
    LEA EAX,[EBP + 0xffffff42]          ; 00508e05
    PUSH EAX                            ; 00508e0b
    LEA EBX,[EBP + 0xffffff42]          ; 00508e0c
    XOR ESI,ESI                         ; 00508e12
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 00508e14
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00508e19
    XOR EAX,EAX                         ; 00508e1c
        ;   Label: LAB_00508e1c
    MOV dword ptr [EBP + 0x22],EAX      ; 00508e1e
    TEST SI,0x1                         ; 00508e21
    JZ 0x005090a8                       ; 00508e26
        ;   XREF to: 005090a8 (CONDITIONAL_JUMP)  ; LAB_005090a8
    MOV EAX,dword ptr [EBP + -0x12]     ; 00508e2c
    MOV dword ptr [EBP + 0x6e],EAX      ; 00508e2f
        ;   Label: LAB_00508e2f
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00508e32
    MOV dword ptr [EBP + 0x1e],EAX      ; 00508e35
    TEST SI,0x2                         ; 00508e38
    JZ 0x005090b0                       ; 00508e3d
        ;   XREF to: 005090b0 (CONDITIONAL_JUMP)  ; LAB_005090b0
    MOV EAX,dword ptr [EBP + -0xa]      ; 00508e43
    MOV dword ptr [EBP + 0x72],EAX      ; 00508e46
        ;   Label: LAB_00508e46
    MOV EAX,dword ptr [EBP + 0x72]      ; 00508e49
    MOV dword ptr [EBP + 0x26],EAX      ; 00508e4c
    LEA EAX,[EBP + 0xffffff72]          ; 00508e4f
    PUSH EAX                            ; 00508e55
    LEA EAX,[EBP + 0x1e]                ; 00508e56
    PUSH EAX                            ; 00508e59
    LEA EAX,[EBP + 0x36]                ; 00508e5a
    PUSH EAX                            ; 00508e5d
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00508e5e
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 00508e63
    CMP EBX,EAX                         ; 00508e66
    JZ 0x00508e7a                       ; 00508e68
        ;   XREF to: 00508e7a (CONDITIONAL_JUMP)  ; LAB_00508e7a
    MOV EDX,dword ptr [EAX]             ; 00508e6a
    MOV dword ptr [EBX],EDX             ; 00508e6c
    MOV EDX,dword ptr [EAX + 0x4]       ; 00508e6e
    MOV dword ptr [EBX + 0x4],EDX       ; 00508e71
    MOV EDX,dword ptr [EAX + 0x8]       ; 00508e74
    MOV dword ptr [EBX + 0x8],EDX       ; 00508e77
    INC ESI                             ; 00508e7a
        ;   Label: LAB_00508e7a
    ADD EBX,0xc                         ; 00508e7b
    CMP ESI,0x4                         ; 00508e7e
    JL 0x00508e1c                       ; 00508e81
        ;   XREF to: 00508e1c (CONDITIONAL_JUMP)  ; LAB_00508e1c
    LEA EAX,[EBP + 0xffffff42]          ; 00508e83
    PUSH EAX                            ; 00508e89
    LEA EAX,[EBP + 0xffffff4e]          ; 00508e8a
    PUSH EAX                            ; 00508e90
    LEA EAX,[EBP + 0xffffff5a]          ; 00508e91
    PUSH EAX                            ; 00508e97
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00508e98
    ADD EAX,0x3c                        ; 00508e9b
    PUSH EAX                            ; 00508e9e
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 00508e9f
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00508ea4
    LEA EAX,[EBP + 0xffffff4e]          ; 00508ea7
    PUSH EAX                            ; 00508ead
    LEA EAX,[EBP + 0xffffff66]          ; 00508eae
    MOV EBX,dword ptr [EBP + 0x5e]      ; 00508eb4
    PUSH EAX                            ; 00508eb7
    LEA EAX,[EBP + 0xffffff5a]          ; 00508eb8
    MOV ESI,dword ptr [EBP + 0x56]      ; 00508ebe
    PUSH EAX                            ; 00508ec1
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00508ec2
    ADD EBX,0xb8                        ; 00508ec5
    ADD EAX,0x74                        ; 00508ecb
    INC ESI                             ; 00508ece
    PUSH EAX                            ; 00508ecf
    MOV dword ptr [EBP + 0x5e],EBX      ; 00508ed0
    MOV dword ptr [EBP + 0x56],ESI      ; 00508ed3
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 00508ed6
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    MOV EDX,dword ptr [EBP + 0x66]      ; 00508edb
    MOV ECX,dword ptr [EBP + 0x62]      ; 00508ede
    ADD ESP,0x10                        ; 00508ee1
    ADD EDX,0xb8                        ; 00508ee4
    ADD ECX,0xb8                        ; 00508eea
    MOV dword ptr [EBP + 0x66],EDX      ; 00508ef0
    MOV dword ptr [EBP + 0x62],ECX      ; 00508ef3
    CMP ESI,0xc                         ; 00508ef6
    JL 0x00508c95                       ; 00508ef9
        ;   XREF to: 00508c95 (CONDITIONAL_JUMP)  ; LAB_00508c95
    MOV EAX,dword ptr [EBP + 0x92]      ; 00508eff
    FLD float ptr [EAX + 0x150c]        ; 00508f05
    FLD float ptr [0x00660d8c]          ; 00508f0b | FLOAT_00660d8c
    FLD ST0                             ; 00508f11
    FCOS                                ; 00508f13
    FXCH                                ; 00508f15
    FSIN                                ; 00508f17
    MOV EAX,dword ptr [EBP + 0x92]      ; 00508f19
    FXCH                                ; 00508f1f
    FMULP ST2                           ; 00508f21
    FLD float ptr [EAX + 0x5d0]         ; 00508f23
    FMUL double ptr [0x006356e5]        ; 00508f29 | DOUBLE_006356e5
    FXCH ST2                            ; 00508f2f
    FLD double ptr [0x006356d5]         ; 00508f31 | DOUBLE_006356d5
    FXCH                                ; 00508f37
    FMUL ST1                            ; 00508f39
    FLD float ptr [EAX + 0x150c]        ; 00508f3b
    LEA EBX,[EAX + 0x1340]              ; 00508f41
    FMULP ST3                           ; 00508f47
    ADD EAX,0x134c                      ; 00508f49
    FXCH ST2                            ; 00508f4e
    FMULP                               ; 00508f50
    FLD float ptr [EAX + 0xfffff29c]    ; 00508f52
    FMUL double ptr [0x006356ed]        ; 00508f58 | DOUBLE_006356ed
    FXCH ST2                            ; 00508f5e
    FSTP float ptr [EAX + 0x8]          ; 00508f60
    FXCH                                ; 00508f63
    FADDP ST2,ST0                       ; 00508f65
    FSTP float ptr [EAX]                ; 00508f67
    FSTP float ptr [EAX + 0x4]          ; 00508f69
    CMP EBX,EAX                         ; 00508f6c
    JNZ 0x005090b8                      ; 00508f6e
        ;   XREF to: 005090b8 (CONDITIONAL_JUMP)  ; LAB_005090b8
    MOV EAX,dword ptr [EBP + 0x92]      ; 00508f74
        ;   Label: LAB_00508f74
    ADD EAX,0x1368                      ; 00508f7a
    MOV dword ptr [EAX],0xbda4de71      ; 00508f7f
    MOV dword ptr [EAX + 0x8],0x0       ; 00508f85
    FLD float ptr [EAX + -0x24]         ; 00508f8c
    MOV dword ptr [EAX + 0x4],0xbfc529dc ; 00508f8f
    FADD float ptr [0x006356f5]         ; 00508f96 | FLOAT_006356f5
    PUSH EAX                            ; 00508f9c
    FSTP float ptr [EAX + -0x24]        ; 00508f9d
    MOV EAX,dword ptr [EBP + 0x92]      ; 00508fa0
    ADD EAX,0x1374                      ; 00508fa6
    PUSH EAX                            ; 00508fab
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 00508fac
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV EAX,dword ptr [EBP + 0x92]      ; 00508fb1
    ADD ESP,0x8                         ; 00508fb7
    FLD float ptr [EAX + 0x1344]        ; 00508fba
    FLD float ptr [EAX + 0x1340]        ; 00508fc0
    FLD float ptr [EAX + 0x1348]        ; 00508fc6
    FLD float ptr [EAX + 0x1350]        ; 00508fcc
    FLD float ptr [EAX + 0x134c]        ; 00508fd2
    FLD float ptr [EAX + 0x1354]        ; 00508fd8
    FLD float ptr [EAX + 0x1368]        ; 00508fde
    FXCH ST6                            ; 00508fe4
    FSTP float ptr [EAX + 0x13a4]       ; 00508fe6
    FLD float ptr [EAX + 0x1370]        ; 00508fec
    FXCH ST5                            ; 00508ff2
    FCHS                                ; 00508ff4
    FXCH ST4                            ; 00508ff6
    FSTP float ptr [EAX + 0x13a8]       ; 00508ff8
    FLD float ptr [EAX + 0x136c]        ; 00508ffe
    FXCH ST2                            ; 00509004
    FCHS                                ; 00509006
    ADD EAX,0x13c8                      ; 00509008
    FXCH ST2                            ; 0050900d
    FCHS                                ; 0050900f
    FXCH ST3                            ; 00509011
    FSTP float ptr [EAX + -0x18]        ; 00509013
    FSTP float ptr [EAX + -0x14]        ; 00509016
    FXCH ST4                            ; 00509019
    FSTP float ptr [EAX]                ; 0050901b
    FXCH ST2                            ; 0050901d
    FSTP float ptr [EAX + 0x8]          ; 0050901f
    FSTP float ptr [EAX + -0x28]        ; 00509022
    FXCH                                ; 00509025
    FSTP float ptr [EAX + -0x1c]        ; 00509027
    FSTP float ptr [EAX + 0x4]          ; 0050902a
    PUSH EAX                            ; 0050902d
    MOV EAX,dword ptr [EBP + 0x92]      ; 0050902e
    ADD EAX,0x13d4                      ; 00509034
    PUSH EAX                            ; 00509039
    XOR EBX,EBX                         ; 0050903a
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 0050903c
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00509041
    PUSH EBX                            ; 00509044
        ;   Label: LAB_00509044
    MOV EAX,dword ptr [EBP + 0x92]      ; 00509045
    PUSH EAX                            ; 0050904b
    CALL core_manpuz.cpp_CMansionPuzzleCircle_updateReflectorPosition_FUN_0050af80 ; 0050904c
        ;   XREF to: 0050af80 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_updateReflectorPosition_FUN_0050af80(CMansionPuzzleCircle * this_ptr, int reflector_index)
    INC EBX                             ; 00509051
    ADD ESP,0x8                         ; 00509052
    CMP EBX,0x2                         ; 00509055
    JL 0x00509044                       ; 00509058
        ;   XREF to: 00509044 (CONDITIONAL_JUMP)  ; LAB_00509044
    LEA ESP,[EBP + 0x7e]                ; 0050905a
    POP EBP                             ; 0050905d
    POP EDI                             ; 0050905e
    POP ESI                             ; 0050905f
    POP EBX                             ; 00509060
    RET                                 ; 00509061
    MOV EAX,dword ptr [EBP + 0x92]      ; 00509062
        ;   Label: LAB_00509062
    FLD float ptr [EAX + 0x1510]        ; 00509068
    MOV dword ptr [EAX + 0x5e4],0x0     ; 0050906e
    FADD double ptr [0x006356dd]        ; 00509078 | DOUBLE_006356dd
    MOV dword ptr [EAX + 0x5ec],0xbf8ccccd ; 0050907e
    FSTP float ptr [EAX + 0x5e8]        ; 00509088
    JMP 0x00508b98                      ; 0050908e
        ;   XREF to: 00508b98 (UNCONDITIONAL_JUMP)  ; LAB_00508b98
    MOV EDX,dword ptr [EAX]             ; 00509093
        ;   Label: LAB_00509093
    MOV dword ptr [EBX],EDX             ; 00509095
    MOV EDX,dword ptr [EAX + 0x4]       ; 00509097
    MOV dword ptr [EBX + 0x4],EDX       ; 0050909a
    MOV EDX,dword ptr [EAX + 0x8]       ; 0050909d
    MOV dword ptr [EBX + 0x8],EDX       ; 005090a0
    JMP 0x00508dfe                      ; 005090a3
        ;   XREF to: 00508dfe (UNCONDITIONAL_JUMP)  ; LAB_00508dfe
    MOV EAX,dword ptr [EBP + -0x1e]     ; 005090a8
        ;   Label: LAB_005090a8
    JMP 0x00508e2f                      ; 005090ab
        ;   XREF to: 00508e2f (UNCONDITIONAL_JUMP)  ; LAB_00508e2f
    MOV EAX,dword ptr [EBP + -0x16]     ; 005090b0
        ;   Label: LAB_005090b0
    JMP 0x00508e46                      ; 005090b3
        ;   XREF to: 00508e46 (UNCONDITIONAL_JUMP)  ; LAB_00508e46
    MOV EDX,dword ptr [EAX]             ; 005090b8
        ;   Label: LAB_005090b8
    MOV dword ptr [EBX],EDX             ; 005090ba
    MOV EDX,dword ptr [EAX + 0x4]       ; 005090bc
    MOV dword ptr [EBX + 0x4],EDX       ; 005090bf
    MOV EDX,dword ptr [EAX + 0x8]       ; 005090c2
    MOV dword ptr [EBX + 0x8],EDX       ; 005090c5
    JMP 0x00508f74                      ; 005090c8
        ;   XREF to: 00508f74 (UNCONDITIONAL_JUMP)  ; LAB_00508f74

