; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_course_cpp_CCourse_preview_FUN_00443bc0(CCourse *this_ptr,CKeyFramedModel *model_ptr)
;
; Parameters:
; CCourse *        Stack[0x4]:4   this_ptr
; CKeyFramedModel * Stack[0x8]:4   model_ptr
; Local Variables:
; CSlew            Stack[-0xcc]:28  local_cc
; CVector3f        Stack[-0xb0]:12  local_b0
; CVector3f        Stack[-0xa4]:12  local_a4
; CVector3f        Stack[-0x98]:12  local_98
; CVector3f        Stack[-0x8c]:12  local_8c
; CVector3f        Stack[-0x80]:12  local_80
; CVector3i        Stack[-0x74]:12  local_74
; CVector3f        Stack[-0x68]:12  local_68
; CVector3i        Stack[-0x5c]:12  local_5c
; CVector3f        Stack[-0x50]:12  local_50
; double           Stack[-0x44]:8  local_44
; double           Stack[-0x3c]:8  local_3c
; int              Stack[-0x34]:4  local_34
; float            Stack[-0x30]:4  local_30
; uint             Stack[-0x2c]:4  local_2c
; uint             Stack[-0x28]:4  local_28
; uint             Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 at 00443332
;
; Referenced Globals:
;   TerminatedCString s_t_7_3f_Pos_7_2f_7_2f_7_2_00619402
;   float FLOAT_0061943b = -100
;   double DOUBLE_00619443 = 20
;   float FLOAT_0061944b = -1
;   float FLOAT_0065c060 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CGame* g_CGamePtr = 02d81a9c
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   int g_ActiveRenderColor
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.delta_time_float
;   CKeys g_CKeysInstance
;   CDemonSet g_CDemonSetInstance
;   ... and 2 more
;
; Called Functions:
;   core_course.cpp_CCourse_evaluate_FUN_00442710
;   core_course.cpp_renderCourseGizmo_FUN_00443760
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
;   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
;   core_game.cpp_CGame_updateDT_FUN_004d7d90
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
;   core_slew.cpp_CSlew_init_FUN_005a2060
;   core_slew.cpp_CSlew_processInput_FUN_005a20b0
;   crt_math.c_floor_FUN_005feb90
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443bc0
        ;   Label: core_course.cpp_CCourse_preview_FUN_00443bc0
    PUSH ESI                            ; 00443bc1
    PUSH EDI                            ; 00443bc2
    PUSH EBP                            ; 00443bc3
    MOV EBP,ESP                         ; 00443bc4
    SUB ESP,0x120                       ; 00443bc6
    SUB EBP,0x7a                        ; 00443bcc
    XOR EDX,EDX                         ; 00443bcf
    MOV EAX,[0x006810c8]                ; 00443bd1 | g_CDemonSetPtr
    MOV dword ptr [EBP + 0x72],EDX      ; 00443bd6
    MOV dword ptr [EAX + 0x15ac80],0x1  ; 00443bd9 | g_CDemonSetInstance.lighting_quality_mode
    LEA EAX,[EBP + -0x42]               ; 00443be3
    MOV dword ptr [EBP + 0x62],EDX      ; 00443be6
    PUSH EAX                            ; 00443be9
    MOV dword ptr [EBP + 0x5e],EDX      ; 00443bea
    MOV dword ptr [EBP + 0x66],EDX      ; 00443bed
    CALL core_slew.cpp_CSlew_init_FUN_005a2060 ; 00443bf0
        ;   XREF to: 005a2060 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_init_FUN_005a2060(CSlew * this_ptr)
    FLD float ptr [EBP + -0x3a]         ; 00443bf5
    MOV EDI,dword ptr [0x0067b654]      ; 00443bf8 | g_CGamePtr
    ADD ESP,0x4                         ; 00443bfe
    FADD float ptr [0x0061943b]         ; 00443c01 | FLOAT_0061943b
    PUSH EDI                            ; 00443c07 | g_CGameInstance
    FSTP float ptr [EBP + -0x3a]        ; 00443c08
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 00443c0b
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * this_ptr)
    ADD ESP,0x4                         ; 00443c10
    XOR EAX,EAX                         ; 00443c13
        ;   Label: LAB_00443c13
    MOV dword ptr [EBP + -0x26],EAX     ; 00443c15
    MOV dword ptr [EBP + -0x22],EAX     ; 00443c18
    MOV dword ptr [EBP + -0x1e],EAX     ; 00443c1b
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00443c1e
    FLD float ptr [EBP + 0x72]          ; 00443c24
    MOV EAX,dword ptr [EAX]             ; 00443c27
    FLDZ                                ; 00443c29
    MOV dword ptr [EBP + 0x76],EAX      ; 00443c2b
    FXCH                                ; 00443c2e
    FSTP double ptr [EBP + 0x4e]        ; 00443c30
    FILD dword ptr [EBP + 0x76]         ; 00443c33
    FSTP float ptr [EBP + 0x6a]         ; 00443c36
    FCOMP double ptr [EBP + 0x4e]       ; 00443c39
    FNSTSW AX                           ; 00443c3c
    SAHF                                ; 00443c3e
    JA 0x00443e62                       ; 00443c3f
        ;   XREF to: 00443e62 (CONDITIONAL_JUMP)  ; LAB_00443e62
    FLD float ptr [EBP + 0x72]          ; 00443c45
    FDIV float ptr [EBP + 0x6a]         ; 00443c48
    SUB ESP,0x8                         ; 00443c4b
    FSTP double ptr [ESP]               ; 00443c4e
    CALL crt_math.c_floor_FUN_005feb90  ; 00443c51
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [EBP + 0x46],EAX      ; 00443c56
    MOV dword ptr [EBP + 0x4a],EDX      ; 00443c59
    FLD double ptr [EBP + 0x46]         ; 00443c5c
    FMUL float ptr [EBP + 0x6a]         ; 00443c5f
    FSUBR double ptr [EBP + 0x4e]       ; 00443c62
    ADD ESP,0x8                         ; 00443c65
    FSTP float ptr [EBP + 0x6e]         ; 00443c68
        ;   Label: LAB_00443c68
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00443c6b
        ;   Label: LAB_00443c6b
    MOV dword ptr [EBP + 0x72],EAX      ; 00443c6e
    LEA EAX,[EBP + -0xe]                ; 00443c71
    PUSH EAX                            ; 00443c74
    LEA EAX,[EBP + 0xa]                 ; 00443c75
    PUSH EAX                            ; 00443c78
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00443c79
    PUSH dword ptr [EBP + 0x6e]         ; 00443c7f
    PUSH EBX                            ; 00443c82
    MOV ESI,dword ptr [EBP + 0x66]      ; 00443c83
    CALL core_course.cpp_CCourse_evaluate_FUN_00442710 ; 00443c86
        ;   XREF to: 00442710 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_evaluate_FUN_00442710(CCourse * this_ptr, float time, CVector3f * out_pos, CVector3f * out_euler)
    ADD ESP,0x10                        ; 00443c8b
    TEST ESI,ESI                        ; 00443c8e
    JZ 0x00443cca                       ; 00443c90
        ;   XREF to: 00443cca (CONDITIONAL_JUMP)  ; LAB_00443cca
    LEA EBX,[EBP + -0x42]               ; 00443c92
    LEA EAX,[EBP + 0xa]                 ; 00443c95
    CMP EBX,EAX                         ; 00443c98
    JZ 0x00443cae                       ; 00443c9a
        ;   XREF to: 00443cae (CONDITIONAL_JUMP)  ; LAB_00443cae
    MOV EAX,dword ptr [EBP + 0xa]       ; 00443c9c
    MOV dword ptr [EBP + -0x42],EAX     ; 00443c9f
    MOV EAX,dword ptr [EBP + 0xe]       ; 00443ca2
    MOV dword ptr [EBP + -0x3e],EAX     ; 00443ca5
    MOV EAX,dword ptr [EBP + 0x12]      ; 00443ca8
    MOV dword ptr [EBP + -0x3a],EAX     ; 00443cab
    LEA EBX,[EBP + -0x36]               ; 00443cae
        ;   Label: LAB_00443cae
    LEA EAX,[EBP + -0xe]                ; 00443cb1
    CMP EBX,EAX                         ; 00443cb4
    JZ 0x00443cca                       ; 00443cb6
        ;   XREF to: 00443cca (CONDITIONAL_JUMP)  ; LAB_00443cca
    MOV EAX,dword ptr [EBP + -0xe]      ; 00443cb8
    MOV dword ptr [EBP + -0x36],EAX     ; 00443cbb
    MOV EAX,dword ptr [EBP + -0xa]      ; 00443cbe
    MOV dword ptr [EBP + -0x32],EAX     ; 00443cc1
    MOV EAX,dword ptr [EBP + -0x6]      ; 00443cc4
    MOV dword ptr [EBP + -0x2e],EAX     ; 00443cc7
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00443cca
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_00443cca
    CALL wincore_windll.cpp_clearZBufferNative_FUN_005b3ed4 ; 00443ccf
        ;   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearZBufferNative_FUN_005b3ed4()
    LEA EAX,[EBP + -0x36]               ; 00443cd4
    PUSH EAX                            ; 00443cd7
    MOV EDI,dword ptr [0x006703ec]      ; 00443cd8 | g_CDemonRendererPtr2
    PUSH EDI                            ; 00443cde | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0 ; 00443cdf
        ;   XREF to: 0048c1d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00443ce4
    LEA EAX,[EBP + -0x42]               ; 00443ce7
    PUSH EAX                            ; 00443cea
    MOV EAX,[0x006703ec]                ; 00443ceb | g_CDemonRendererPtr2
    PUSH EAX                            ; 00443cf0 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150 ; 00443cf1
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    MOV EDX,dword ptr [EBP + 0x5e]      ; 00443cf6
    ADD ESP,0x8                         ; 00443cf9
    TEST EDX,EDX                        ; 00443cfc
    JZ 0x00443ea2                       ; 00443cfe
        ;   XREF to: 00443ea2 (CONDITIONAL_JUMP)  ; LAB_00443ea2
    PUSH 0x0                            ; 00443d04
    MOV EBX,dword ptr [0x006810c8]      ; 00443d06 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH 0x42c80000                     ; 00443d0c
    MOV ECX,0x1                         ; 00443d11
    PUSH EBX                            ; 00443d16 | g_CDemonSetInstance
    MOV dword ptr [0x03277d14],ECX      ; 00443d17 | g_CDemonRaytraceInstance
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 ; 00443d1d
        ;   XREF to: 0056a190 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 00443d22
    LEA EAX,[EBP + -0x26]               ; 00443d25
        ;   Label: LAB_00443d25
    PUSH EAX                            ; 00443d28
    MOV ESI,dword ptr [0x006703ec]      ; 00443d29 | g_CDemonRendererPtr2
    PUSH ESI                            ; 00443d2f | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 00443d30
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00443d35
    LEA EAX,[EBP + -0x1a]               ; 00443d38
    PUSH EAX                            ; 00443d3b
    LEA EAX,[EBP + -0x2]                ; 00443d3c
    PUSH EAX                            ; 00443d3f
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00443d40
    MOV EAX,dword ptr [EAX]             ; 00443d46
    DEC EAX                             ; 00443d48
    MOV EDI,dword ptr [EBP + 0x8e]      ; 00443d49
    MOV dword ptr [EBP + 0x76],EAX      ; 00443d4f
    SUB ESP,0x4                         ; 00443d52
    FILD dword ptr [EBP + 0x76]         ; 00443d55
    FSTP float ptr [ESP]                ; 00443d58
    PUSH EDI                            ; 00443d5b
    CALL core_course.cpp_CCourse_evaluate_FUN_00442710 ; 00443d5c
        ;   XREF to: 00442710 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_evaluate_FUN_00442710(CCourse * this_ptr, float time, CVector3f * out_pos, CVector3f * out_euler)
    MOV EAX,0xfa                        ; 00443d61
    ADD ESP,0x10                        ; 00443d66
    XOR EDX,EDX                         ; 00443d69
    MOV [0x02d02570],EAX                ; 00443d6b | g_ActiveRenderColor
    MOV dword ptr [EBP + 0x56],EDX      ; 00443d70
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00443d73
        ;   Label: LAB_00443d73
    MOV ECX,dword ptr [EBP + 0x56]      ; 00443d79
    CMP ECX,dword ptr [EAX]             ; 00443d7c
    JGE 0x00443edf                      ; 00443d7e
        ;   XREF to: 00443edf (CONDITIONAL_JUMP)  ; LAB_00443edf
    LEA EAX,[EBP + -0x1a]               ; 00443d84
    PUSH EAX                            ; 00443d87
    LEA EAX,[EBP + 0x22]                ; 00443d88
    MOV dword ptr [EBP + 0x76],ECX      ; 00443d8b
    PUSH EAX                            ; 00443d8e
    FILD dword ptr [EBP + 0x76]         ; 00443d8f
    SUB ESP,0x4                         ; 00443d92
    MOV ECX,dword ptr [EBP + 0x8e]      ; 00443d95
    FSTP float ptr [ESP]                ; 00443d9b
    PUSH ECX                            ; 00443d9e
    LEA EBX,[EBP + 0x2e]                ; 00443d9f
    CALL core_course.cpp_CCourse_evaluate_FUN_00442710 ; 00443da2
        ;   XREF to: 00442710 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_evaluate_FUN_00442710(CCourse * this_ptr, float time, CVector3f * out_pos, CVector3f * out_euler)
    ADD ESP,0x10                        ; 00443da7
    LEA EAX,[EBP + -0x2]                ; 00443daa
    MOV EDI,dword ptr [0x006703ec]      ; 00443dad | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 00443db3
    FMUL float ptr [0x0065c060]         ; 00443db5 | FLOAT_0065c060
    FISTP dword ptr [EBX]               ; 00443dbb
    FLD float ptr [EAX + 0x4]           ; 00443dbd
    FMUL float ptr [0x0065c060]         ; 00443dc0 | FLOAT_0065c060
    FISTP dword ptr [EBX + 0x4]         ; 00443dc6
    FLD float ptr [EAX + 0x8]           ; 00443dc9
    FMUL float ptr [0x0065c060]         ; 00443dcc | FLOAT_0065c060
    FISTP dword ptr [EBX + 0x8]         ; 00443dd2
    LEA EAX,[EBP + 0x2e]                ; 00443dd5
    PUSH EAX                            ; 00443dd8
    MOV EAX,dword ptr [EDI]             ; 00443dd9 | g_CDemonRendererInstance
    PUSH EAX                            ; 00443ddb
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00443ddc
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[EBP + 0x16]                ; 00443de1
    ADD ESP,0x8                         ; 00443de4
    LEA EAX,[EBP + 0x22]                ; 00443de7
    MOV EDI,dword ptr [0x006703ec]      ; 00443dea | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 00443df0
    FMUL float ptr [0x0065c060]         ; 00443df2 | FLOAT_0065c060
    FISTP dword ptr [EBX]               ; 00443df8
    FLD float ptr [EAX + 0x4]           ; 00443dfa
    FMUL float ptr [0x0065c060]         ; 00443dfd | FLOAT_0065c060
    FISTP dword ptr [EBX + 0x4]         ; 00443e03
    FLD float ptr [EAX + 0x8]           ; 00443e06
    FMUL float ptr [0x0065c060]         ; 00443e09 | FLOAT_0065c060
    FISTP dword ptr [EBX + 0x8]         ; 00443e0f
    LEA EAX,[EBP + 0x16]                ; 00443e12
    PUSH EAX                            ; 00443e15
    MOV EAX,dword ptr [EDI]             ; 00443e16 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 00443e18
    PUSH EAX                            ; 00443e1b
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00443e1c
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00443e21
    MOV EAX,[0x006703ec]                ; 00443e24 | g_CDemonRendererPtr2
    JMP 0x0060dcf5                      ; 00443e29
        ;   XREF to: 0060dcf5 (UNCONDITIONAL_JUMP)  ; CAVE_cave_005fde92
    MOVSD.REP ES:EDI,ESI                ; 00443e38
        ;   Label: LAB_00443e38
    JMP 0x0060dd4f                      ; 00443e3a
        ;   XREF to: 0060dd4f (UNCONDITIONAL_JUMP)  ; LAB_0060dd4f
    MOVSD.REP ES:EDI,ESI                ; 00443e49
        ;   Label: LAB_00443e49
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00443e4b
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    LEA EAX,[EBP + 0x22]                ; 00443e50
    ADD ESP,0x60                        ; 00443e53
    CMP EBX,EAX                         ; 00443e56
    JNZ 0x00443ec5                      ; 00443e58
        ;   XREF to: 00443ec5 (CONDITIONAL_JUMP)  ; LAB_00443ec5
    INC dword ptr [EBP + 0x56]          ; 00443e5a
    JMP 0x00443d73                      ; 00443e5d
        ;   XREF to: 00443d73 (UNCONDITIONAL_JUMP)  ; LAB_00443d73
    FLD float ptr [EBP + 0x72]          ; 00443e62
        ;   Label: LAB_00443e62
    FCHS                                ; 00443e65
    FDIV float ptr [EBP + 0x6a]         ; 00443e67
    SUB ESP,0x8                         ; 00443e6a
    FSTP double ptr [ESP]               ; 00443e6d
    CALL crt_math.c_floor_FUN_005feb90  ; 00443e70
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [EBP + 0x46],EAX      ; 00443e75
    MOV dword ptr [EBP + 0x4a],EDX      ; 00443e78
    FLD double ptr [EBP + 0x46]         ; 00443e7b
    FMUL float ptr [EBP + 0x6a]         ; 00443e7e
    FADD double ptr [EBP + 0x4e]        ; 00443e81
    ADD ESP,0x8                         ; 00443e84
    FST float ptr [EBP + 0x6e]          ; 00443e87
    FLDZ                                ; 00443e8a
    FCOMPP                              ; 00443e8c
    FNSTSW AX                           ; 00443e8e
    SAHF                                ; 00443e90
    JBE 0x00443c6b                      ; 00443e91
        ;   XREF to: 00443c6b (CONDITIONAL_JUMP)  ; LAB_00443c6b
    FLD float ptr [EBP + 0x6e]          ; 00443e97
    FADD float ptr [EBP + 0x6a]         ; 00443e9a
    JMP 0x00443c68                      ; 00443e9d
        ;   XREF to: 00443c68 (UNCONDITIONAL_JUMP)  ; LAB_00443c68
    MOV EAX,dword ptr [EBP + -0x26]     ; 00443ea2
        ;   Label: LAB_00443ea2
    MOV dword ptr [EBP + 0x3a],EAX      ; 00443ea5
    MOV EAX,dword ptr [EBP + -0x22]     ; 00443ea8
    MOV dword ptr [EBP + 0x3e],EAX      ; 00443eab
    MOV EAX,dword ptr [EBP + -0x1e]     ; 00443eae
    MOV dword ptr [EBP + 0x42],EAX      ; 00443eb1
    LEA EAX,[EBP + 0x3a]                ; 00443eb4
    PUSH EAX                            ; 00443eb7
    CALL core_course.cpp_renderCourseGizmo_FUN_00443760 ; 00443eb8
        ;   XREF to: 00443760 (UNCONDITIONAL_CALL)  ; void core_course.cpp_renderCourseGizmo_FUN_00443760(CVector3f * position)
    ADD ESP,0x4                         ; 00443ebd
    JMP 0x00443d25                      ; 00443ec0
        ;   XREF to: 00443d25 (UNCONDITIONAL_JUMP)  ; LAB_00443d25
    MOV EAX,dword ptr [EBP + 0x22]      ; 00443ec5
        ;   Label: LAB_00443ec5
    MOV dword ptr [EBP + -0x2],EAX      ; 00443ec8
    MOV EAX,dword ptr [EBP + 0x26]      ; 00443ecb
    MOV dword ptr [EBP + 0x2],EAX       ; 00443ece
    MOV EAX,dword ptr [EBP + 0x2a]      ; 00443ed1
    MOV dword ptr [EBP + 0x6],EAX       ; 00443ed4
    INC dword ptr [EBP + 0x56]          ; 00443ed7
    JMP 0x00443d73                      ; 00443eda
        ;   XREF to: 00443d73 (UNCONDITIONAL_JUMP)  ; LAB_00443d73
    MOV EBX,dword ptr [EBP + 0x66]      ; 00443edf
        ;   Label: LAB_00443edf
    TEST EBX,EBX                        ; 00443ee2
    JNZ 0x00443f2f                      ; 00443ee4
        ;   XREF to: 00443f2f (CONDITIONAL_JUMP)  ; LAB_00443f2f
    LEA EAX,[EBP + 0xa]                 ; 00443ee6
    PUSH EAX                            ; 00443ee9
    MOV ESI,dword ptr [0x006703ec]      ; 00443eea | g_CDemonRendererPtr2
    PUSH ESI                            ; 00443ef0 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 00443ef1
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00443ef6
    PUSH EBX                            ; 00443ef9
    LEA EAX,[EBP + -0xe]                ; 00443efa
    PUSH EAX                            ; 00443efd
    MOV EDI,dword ptr [0x006703ec]      ; 00443efe | g_CDemonRendererPtr2
    PUSH EDI                            ; 00443f04 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 00443f05
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 00443f0a
    PUSH -0x1                           ; 00443f0d
    PUSH EBX                            ; 00443f0f
    PUSH EBX                            ; 00443f10
    MOV EAX,dword ptr [EBP + 0x92]      ; 00443f11
    PUSH EAX                            ; 00443f17
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850 ; 00443f18
        ;   XREF to: 00477850 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850(CKeyFramedModel * this_ptr, int frame_index, CKeyFramedModelInstance * instance, int render_flags)
    ADD ESP,0x10                        ; 00443f1d
    MOV EDX,dword ptr [0x006703ec]      ; 00443f20 | g_CDemonRendererPtr2
    PUSH EDX                            ; 00443f26 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 00443f27
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00443f2c
    SUB ESP,0x8                         ; 00443f2f
        ;   Label: LAB_00443f2f
    FLD float ptr [EBP + -0xa]          ; 00443f32
    FSTP double ptr [ESP]               ; 00443f35
    SUB ESP,0x8                         ; 00443f38
    FLD float ptr [EBP + -0x6]          ; 00443f3b
    FSTP double ptr [ESP]               ; 00443f3e
    SUB ESP,0x8                         ; 00443f41
    FLD float ptr [EBP + -0xe]          ; 00443f44
    FSTP double ptr [ESP]               ; 00443f47
    SUB ESP,0x8                         ; 00443f4a
    FLD float ptr [EBP + 0x12]          ; 00443f4d
    FSTP double ptr [ESP]               ; 00443f50
    SUB ESP,0x8                         ; 00443f53
    FLD float ptr [EBP + 0xe]           ; 00443f56
    FSTP double ptr [ESP]               ; 00443f59
    SUB ESP,0x8                         ; 00443f5c
    FLD float ptr [EBP + 0xa]           ; 00443f5f
    FSTP double ptr [ESP]               ; 00443f62
    SUB ESP,0x8                         ; 00443f65
    FLD float ptr [EBP + 0x72]          ; 00443f68
    FSTP double ptr [ESP]               ; 00443f6b
    PUSH 0x619402                       ; 00443f6e | = "t=%7.3f, Pos: %7.2f,%7.2f,%7.2f, PBH:..."
    LEA EAX,[EBP + 0xffffff5a]          ; 00443f73
    PUSH EAX                            ; 00443f79
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00443f7a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x40                        ; 00443f7f
    PUSH 0x0                            ; 00443f82
    PUSH 0x0                            ; 00443f84
    LEA EAX,[EBP + 0xffffff5a]          ; 00443f86
    PUSH EAX                            ; 00443f8c
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00443f8d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00443f92
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00443f95
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV ECX,dword ptr [0x0067b654]      ; 00443f9a | g_CGamePtr
    PUSH ECX                            ; 00443fa0 | g_CGameInstance
    CALL core_game.cpp_CGame_updateDT_FUN_004d7d90 ; 00443fa1
        ;   XREF to: 004d7d90 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateDT_FUN_004d7d90(CGame * this_ptr)
    ADD ESP,0x4                         ; 00443fa6
    MOV EAX,[0x0067b654]                ; 00443fa9 | g_CGamePtr
    PUSH 0x1                            ; 00443fae
    FLD float ptr [EAX + 0x264]         ; 00443fb0 | g_CGameInstance.delta_time_float
    MOV EAX,[0x0067cf44]                ; 00443fb6 | g_CKeysPtr
    PUSH EAX                            ; 00443fbb | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00443fbc | g_CKeysInstance
    FSTP float ptr [EBP + 0x5a]         ; 00443fbe
    CALL dword ptr [EBX + 0x4]          ; 00443fc1
    ADD ESP,0x8                         ; 00443fc4
    TEST EAX,EAX                        ; 00443fc7
    JNZ 0x004440a6                      ; 00443fc9
        ;   XREF to: 004440a6 (CONDITIONAL_JUMP)  ; LAB_004440a6
    PUSH 0x19                           ; 00443fcf
    MOV EAX,[0x0067cf44]                ; 00443fd1 | g_CKeysPtr
    PUSH EAX                            ; 00443fd6 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00443fd7 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 00443fd9
    ADD ESP,0x8                         ; 00443fdc
    TEST EAX,EAX                        ; 00443fdf
    JZ 0x00443ff2                       ; 00443fe1
        ;   XREF to: 00443ff2 (CONDITIONAL_JUMP)  ; LAB_00443ff2
    CMP dword ptr [EBP + 0x62],0x0      ; 00443fe3
    SETZ AL                             ; 00443fe7
    AND EAX,0xff                        ; 00443fea
    MOV dword ptr [EBP + 0x62],EAX      ; 00443fef
    PUSH 0x13                           ; 00443ff2
        ;   Label: LAB_00443ff2
    MOV EAX,[0x0067cf44]                ; 00443ff4 | g_CKeysPtr
    PUSH EAX                            ; 00443ff9 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00443ffa | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 00443ffc
    ADD ESP,0x8                         ; 00443fff
    TEST EAX,EAX                        ; 00444002
    JZ 0x00444015                       ; 00444004
        ;   XREF to: 00444015 (CONDITIONAL_JUMP)  ; LAB_00444015
    CMP dword ptr [EBP + 0x66],0x0      ; 00444006
    SETZ AL                             ; 0044400a
    AND EAX,0xff                        ; 0044400d
    MOV dword ptr [EBP + 0x66],EAX      ; 00444012
    PUSH 0x1f                           ; 00444015
        ;   Label: LAB_00444015
    MOV EAX,[0x0067cf44]                ; 00444017 | g_CKeysPtr
    PUSH EAX                            ; 0044401c | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0044401d | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0044401f
    ADD ESP,0x8                         ; 00444022
    TEST EAX,EAX                        ; 00444025
    JZ 0x00444038                       ; 00444027
        ;   XREF to: 00444038 (CONDITIONAL_JUMP)  ; LAB_00444038
    CMP dword ptr [EBP + 0x5e],0x0      ; 00444029
    SETZ AL                             ; 0044402d
    AND EAX,0xff                        ; 00444030
    MOV dword ptr [EBP + 0x5e],EAX      ; 00444035
    PUSH 0x34                           ; 00444038
        ;   Label: LAB_00444038
    MOV EAX,[0x0067cf44]                ; 0044403a | g_CKeysPtr
    PUSH EAX                            ; 0044403f | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00444040 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 00444042
    ADD ESP,0x8                         ; 00444045
    TEST EAX,EAX                        ; 00444048
    JZ 0x00444054                       ; 0044404a
        ;   XREF to: 00444054 (CONDITIONAL_JUMP)  ; LAB_00444054
    FLD1                                ; 0044404c
    FADD float ptr [EBP + 0x72]         ; 0044404e
    FSTP float ptr [EBP + 0x72]         ; 00444051
    PUSH 0x33                           ; 00444054
        ;   Label: LAB_00444054
    MOV EAX,[0x0067cf44]                ; 00444056 | g_CKeysPtr
    PUSH EAX                            ; 0044405b | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 0044405c | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 0044405e
    ADD ESP,0x8                         ; 00444061
    TEST EAX,EAX                        ; 00444064
    JZ 0x00444074                       ; 00444066
        ;   XREF to: 00444074 (CONDITIONAL_JUMP)  ; LAB_00444074
    FLD float ptr [EBP + 0x72]          ; 00444068
    FADD float ptr [0x0061944b]         ; 0044406b | FLOAT_0061944b
    FSTP float ptr [EBP + 0x72]         ; 00444071
    CMP dword ptr [EBP + 0x66],0x0      ; 00444074
        ;   Label: LAB_00444074
    JZ 0x00444098                       ; 00444078
        ;   XREF to: 00444098 (CONDITIONAL_JUMP)  ; LAB_00444098
    CMP dword ptr [EBP + 0x62],0x0      ; 0044407a
        ;   Label: LAB_0044407a
    JNZ 0x00443c13                      ; 0044407e
        ;   XREF to: 00443c13 (CONDITIONAL_JUMP)  ; LAB_00443c13
    FLD float ptr [EBP + 0x5a]          ; 00444084
    FMUL double ptr [0x00619443]        ; 00444087 | DOUBLE_00619443
    FADD float ptr [EBP + 0x72]         ; 0044408d
    FSTP float ptr [EBP + 0x72]         ; 00444090
    JMP 0x00443c13                      ; 00444093
        ;   XREF to: 00443c13 (UNCONDITIONAL_JUMP)  ; LAB_00443c13
    LEA EAX,[EBP + -0x42]               ; 00444098
        ;   Label: LAB_00444098
    PUSH EAX                            ; 0044409b
    CALL core_slew.cpp_CSlew_processInput_FUN_005a20b0 ; 0044409c
        ;   XREF to: 005a20b0 (UNCONDITIONAL_CALL)  ; void core_slew.cpp_CSlew_processInput_FUN_005a20b0(CSlew * this_ptr)
    ADD ESP,0x4                         ; 004440a1
    JMP 0x0044407a                      ; 004440a4
        ;   XREF to: 0044407a (UNCONDITIONAL_JUMP)  ; LAB_0044407a
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004440a6
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_004440a6
    XOR ESI,ESI                         ; 004440ab
    MOV EAX,[0x006810c8]                ; 004440ad | g_CDemonSetPtr | g_CDemonSetInstance
    MOV dword ptr [0x03277d14],ESI      ; 004440b2 | g_CDemonRaytraceInstance
    MOV dword ptr [EAX + 0x15ac80],0x0  ; 004440b8 | g_CDemonSetInstance.lighting_quality_mode
    LEA ESP,[EBP + 0x7a]                ; 004440c2
    POP EBP                             ; 004440c5
    POP EDI                             ; 004440c6
    POP ESI                             ; 004440c7
    POP EBX                             ; 004440c8
    RET                                 ; 004440c9
    SUB ESP,0x30                        ; 0060dcf5
        ;   Label: CAVE_cave_005fde92
    MOV EAX,dword ptr [EAX]             ; 0060dcf8
    MOV ECX,0xc                         ; 0060dcfa
    MOV EDI,ESP                         ; 0060dcff
    LEA ESI,[EAX + 0x30]                ; 0060dd01
    MOV ECX,dword ptr [ESI]             ; 0060dd04
    MOV dword ptr [EDI],ECX             ; 0060dd06
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060dd08
    MOV dword ptr [EDI + 0x4],ECX       ; 0060dd0b
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060dd0e
    MOV dword ptr [EDI + 0x8],ECX       ; 0060dd11
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060dd14
    MOV dword ptr [EDI + 0xc],ECX       ; 0060dd17
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060dd1a
    MOV dword ptr [EDI + 0x10],ECX      ; 0060dd1d
    MOV ECX,dword ptr [ESI + 0x14]      ; 0060dd20
    MOV dword ptr [EDI + 0x14],ECX      ; 0060dd23
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060dd26
    MOV dword ptr [EDI + 0x18],ECX      ; 0060dd29
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0060dd2c
    MOV dword ptr [EDI + 0x1c],ECX      ; 0060dd2f
    MOV ECX,dword ptr [ESI + 0x20]      ; 0060dd32
    MOV dword ptr [EDI + 0x20],ECX      ; 0060dd35
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060dd38
    MOV dword ptr [EDI + 0x24],ECX      ; 0060dd3b
    MOV ECX,dword ptr [ESI + 0x28]      ; 0060dd3e
    MOV dword ptr [EDI + 0x28],ECX      ; 0060dd41
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060dd44
    MOV dword ptr [EDI + 0x2c],ECX      ; 0060dd47
    JMP 0x00443e38                      ; 0060dd4a
        ;   XREF to: 00443e38 (UNCONDITIONAL_JUMP)  ; LAB_00443e38
    SUB ESP,0x30                        ; 0060dd4f
        ;   Label: LAB_0060dd4f
    MOV ECX,0xc                         ; 0060dd52
    MOV EDI,ESP                         ; 0060dd57
    MOV ESI,EAX                         ; 0060dd59
    LEA EBX,[EBP + -0x2]                ; 0060dd5b
    MOV ECX,dword ptr [ESI]             ; 0060dd5e
    MOV dword ptr [EDI],ECX             ; 0060dd60
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060dd62
    MOV dword ptr [EDI + 0x4],ECX       ; 0060dd65
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060dd68
    MOV dword ptr [EDI + 0x8],ECX       ; 0060dd6b
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060dd6e
    MOV dword ptr [EDI + 0xc],ECX       ; 0060dd71
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060dd74
    MOV dword ptr [EDI + 0x10],ECX      ; 0060dd77
    MOV ECX,dword ptr [ESI + 0x14]      ; 0060dd7a
    MOV dword ptr [EDI + 0x14],ECX      ; 0060dd7d
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060dd80
    MOV dword ptr [EDI + 0x18],ECX      ; 0060dd83
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0060dd86
    MOV dword ptr [EDI + 0x1c],ECX      ; 0060dd89
    MOV ECX,dword ptr [ESI + 0x20]      ; 0060dd8c
    MOV dword ptr [EDI + 0x20],ECX      ; 0060dd8f
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060dd92
    MOV dword ptr [EDI + 0x24],ECX      ; 0060dd95
    MOV ECX,dword ptr [ESI + 0x28]      ; 0060dd98
    MOV dword ptr [EDI + 0x28],ECX      ; 0060dd9b
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060dd9e
    MOV dword ptr [EDI + 0x2c],ECX      ; 0060dda1
    JMP 0x00443e49                      ; 0060dda4
        ;   XREF to: 00443e49 (UNCONDITIONAL_JUMP)  ; LAB_00443e49

