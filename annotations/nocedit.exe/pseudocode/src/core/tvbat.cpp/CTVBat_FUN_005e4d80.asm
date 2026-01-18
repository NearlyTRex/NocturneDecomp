; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_tvbat.cpp_CTVBat_FUN_005e4d80(CTVBat * this_ptr)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   double DOUBLE_006569e2 = 0.00555555555555555
;   double DOUBLE_006569ea = 3.14159265350000
;   float FLOAT_006569f2 = 0.005555556
;   undefined4 DAT_00664cb0
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonRenderer g_CDemonRendererInstance
;   CDemonMission g_CDemonMissionInstance
;   undefined4 DAT_02f33744
;   undefined4 DAT_02f33768
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e4d80
        ;   Label: core_tvbat.cpp_CTVBat_FUN_005e4d80
    PUSH ESI                            ; 005e4d81
    PUSH EDI                            ; 005e4d82
    PUSH EBP                            ; 005e4d83
    MOV EBP,ESP                         ; 005e4d84
    SUB ESP,0x68                        ; 005e4d86
    AND ESP,0xfffffff8                  ; 005e4d89
    MOV ESI,dword ptr [EBP + 0x14]      ; 005e4d8c
    CMP dword ptr [ESI + 0xc078],0x3    ; 005e4d8f
    JNZ 0x005e4da1                      ; 005e4d96
        ;   XREF to: 005e4da1 (CONDITIONAL_JUMP)  ; LAB_005e4da1
    XOR EAX,EAX                         ; 005e4d98
    MOV ESP,EBP                         ; 005e4d9a
    POP EBP                             ; 005e4d9c
    POP EDI                             ; 005e4d9d
    POP ESI                             ; 005e4d9e
    POP EBX                             ; 005e4d9f
    RET                                 ; 005e4da0
    PUSH ESI                            ; 005e4da1
        ;   Label: LAB_005e4da1
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 005e4da2
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 005e4da7
    MOV EDX,ESP                         ; 005e4daa
    PUSH EDX                            ; 005e4dac
    MOV EAX,dword ptr [ESI + 0x154]     ; 005e4dad
    PUSH ESI                            ; 005e4db3
    CALL dword ptr [EAX + 0x14]         ; 005e4db4
    ADD ESP,0x8                         ; 005e4db7
    PUSH EAX                            ; 005e4dba
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 005e4dbb
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 005e4dc0
    MOV dword ptr [ESP + 0x60],EAX      ; 005e4dc3
    TEST EAX,EAX                        ; 005e4dc7
    JZ 0x005e4de2                       ; 005e4dc9
        ;   XREF to: 005e4de2 (CONDITIONAL_JUMP)  ; LAB_005e4de2
    PUSH -0x1                           ; 005e4dcb
    LEA EAX,[ESI + 0xbec0]              ; 005e4dcd
    PUSH dword ptr [ESI + 0xbebc]       ; 005e4dd3
    PUSH EAX                            ; 005e4dd9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 005e4dda
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 005e4ddf
    PUSH ESI                            ; 005e4de2
        ;   Label: LAB_005e4de2
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 005e4de3
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    MOV EAX,[0x0067d550]                ; 005e4de8 | g_CDemonMissionInstance | g_CDemonMissionPtr
    MOV ECX,dword ptr [EAX + 0x4]       ; 005e4ded | DAT_02f33744
    ADD ESP,0x4                         ; 005e4df0
    TEST ECX,ECX                        ; 005e4df3
    JZ 0x005e5040                       ; 005e4df5
        ;   XREF to: 005e5040 (CONDITIONAL_JUMP)  ; LAB_005e5040
    MOV EBX,dword ptr [0x006703ec]      ; 005e4dfb | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EBX                            ; 005e4e01 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 005e4e02
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005e4e07
    TEST EAX,EAX                        ; 005e4e0a
    JNZ 0x005e5040                      ; 005e4e0c
        ;   XREF to: 005e5040 (CONDITIONAL_JUMP)  ; LAB_005e5040
    MOV EAX,[0x0067d550]                ; 005e4e12 | g_CDemonMissionPtr
    MOV EDI,dword ptr [EAX + 0x28]      ; 005e4e17 | DAT_02f33768
    CMP ESI,EDI                         ; 005e4e1a
    JNZ 0x005e5040                      ; 005e4e1c
        ;   XREF to: 005e5040 (CONDITIONAL_JUMP)  ; LAB_005e5040
    LEA EAX,[EDI + 0xc044]              ; 005e4e22
    PUSH EAX                            ; 005e4e28
    MOV EAX,[0x006703ec]                ; 005e4e29 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 005e4e2e | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 005e4e2f
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 005e4e34
    PUSH 0x1                            ; 005e4e37
    MOV EDX,dword ptr [0x006703ec]      ; 005e4e39 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 005e4e3f | g_CDemonRendererInstance
    XOR EDI,EDI                         ; 005e4e40
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960 ; 005e4e42
        ;   XREF to: 0048c960 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(CDemonRenderer * this_ptr, int color)
    ADD ESP,0x8                         ; 005e4e47
    MOV dword ptr [ESP + 0x64],EDI      ; 005e4e4a
        ;   Label: LAB_005e4e4a
    FILD dword ptr [ESP + 0x64]         ; 005e4e4e
    FMUL double ptr [0x006569e2]        ; 005e4e52 | DOUBLE_006569e2
    FMUL double ptr [0x006569ea]        ; 005e4e58 | DOUBLE_006569ea
    FLD float ptr [ESI + 0xc050]        ; 005e4e5e
    FXCH                                ; 005e4e64
    FST float ptr [ESP + 0x5c]          ; 005e4e66
    FLD ST0                             ; 005e4e6a
    FSIN                                ; 005e4e6c
    FXCH                                ; 005e4e6e
    FCOS                                ; 005e4e70
    FXCH                                ; 005e4e72
    FMULP ST2                           ; 005e4e74
    FXCH                                ; 005e4e76
    FSTP float ptr [ESP + 0x18]         ; 005e4e78
    FLD float ptr [ESI + 0xc054]        ; 005e4e7c
    FCHS                                ; 005e4e82
    FSTP float ptr [ESP + 0x1c]         ; 005e4e84
    FMUL float ptr [ESI + 0xc050]       ; 005e4e88
    LEA EBX,[ESP + 0x30]                ; 005e4e8e
    MOV EDX,dword ptr [0x006703ec]      ; 005e4e92 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    LEA EAX,[ESP + 0x18]                ; 005e4e98
    FSTP float ptr [ESP + 0x20]         ; 005e4e9c
    FLD float ptr [EAX]                 ; 005e4ea0
    FMUL float ptr [0x00664cb0]         ; 005e4ea2 | DAT_00664cb0
    FISTP dword ptr [EBX]               ; 005e4ea8
    FLD float ptr [EAX + 0x4]           ; 005e4eaa
    FMUL float ptr [0x00664cb0]         ; 005e4ead | DAT_00664cb0
    FISTP dword ptr [EBX + 0x4]         ; 005e4eb3
    FLD float ptr [EAX + 0x8]           ; 005e4eb6
    FMUL float ptr [0x00664cb0]         ; 005e4eb9 | DAT_00664cb0
    FISTP dword ptr [EBX + 0x8]         ; 005e4ebf
    LEA EAX,[ESP + 0x30]                ; 005e4ec2
    PUSH EAX                            ; 005e4ec6
    MOV EAX,dword ptr [EDX]             ; 005e4ec7 | g_CDemonRendererInstance
    PUSH EAX                            ; 005e4ec9
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005e4eca
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005e4ecf
    MOV EAX,dword ptr [ESI + 0xc054]    ; 005e4ed2
    LEA EBX,[ESP + 0x48]                ; 005e4ed8
    MOV dword ptr [ESP + 0x1c],EAX      ; 005e4edc
    LEA EAX,[ESP + 0x18]                ; 005e4ee0
    MOV EDX,dword ptr [0x006703ec]      ; 005e4ee4 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 005e4eea
    FMUL float ptr [0x00664cb0]         ; 005e4eec | DAT_00664cb0
    FISTP dword ptr [EBX]               ; 005e4ef2
    FLD float ptr [EAX + 0x4]           ; 005e4ef4
    FMUL float ptr [0x00664cb0]         ; 005e4ef7 | DAT_00664cb0
    FISTP dword ptr [EBX + 0x4]         ; 005e4efd
    FLD float ptr [EAX + 0x8]           ; 005e4f00
    FMUL float ptr [0x00664cb0]         ; 005e4f03 | DAT_00664cb0
    FISTP dword ptr [EBX + 0x8]         ; 005e4f09
    LEA EAX,[ESP + 0x48]                ; 005e4f0c
    PUSH EAX                            ; 005e4f10
    MOV EAX,dword ptr [EDX]             ; 005e4f11 | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 005e4f13
    PUSH EAX                            ; 005e4f16
    ADD EDI,0xc                         ; 005e4f17
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005e4f1a
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005e4f1f
    MOV dword ptr [ESP + 0x64],EDI      ; 005e4f22
    FILD dword ptr [ESP + 0x64]         ; 005e4f26
    FMUL float ptr [0x006569f2]         ; 005e4f2a | FLOAT_006569f2
    FMUL double ptr [0x006569ea]        ; 005e4f30 | DOUBLE_006569ea
    FLD float ptr [ESI + 0xc050]        ; 005e4f36
    FXCH                                ; 005e4f3c
    FST float ptr [ESP + 0x5c]          ; 005e4f3e
    FLD ST0                             ; 005e4f42
    FSIN                                ; 005e4f44
    FXCH                                ; 005e4f46
    FCOS                                ; 005e4f48
    FXCH                                ; 005e4f4a
    FMULP ST2                           ; 005e4f4c
    FXCH                                ; 005e4f4e
    FSTP float ptr [ESP + 0x18]         ; 005e4f50
    FLD float ptr [ESI + 0xc054]        ; 005e4f54
    FCHS                                ; 005e4f5a
    FSTP float ptr [ESP + 0x1c]         ; 005e4f5c
    FMUL float ptr [ESI + 0xc050]       ; 005e4f60
    FSTP float ptr [ESP + 0x20]         ; 005e4f66
    LEA EBX,[ESP + 0x24]                ; 005e4f6a
    LEA EAX,[ESP + 0x18]                ; 005e4f6e
    MOV EDX,dword ptr [0x006703ec]      ; 005e4f72 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 005e4f78
    FMUL float ptr [0x00664cb0]         ; 005e4f7a | DAT_00664cb0
    FISTP dword ptr [EBX]               ; 005e4f80
    FLD float ptr [EAX + 0x4]           ; 005e4f82
    FMUL float ptr [0x00664cb0]         ; 005e4f85 | DAT_00664cb0
    FISTP dword ptr [EBX + 0x4]         ; 005e4f8b
    FLD float ptr [EAX + 0x8]           ; 005e4f8e
    FMUL float ptr [0x00664cb0]         ; 005e4f91 | DAT_00664cb0
    FISTP dword ptr [EBX + 0x8]         ; 005e4f97
    LEA EAX,[ESP + 0x24]                ; 005e4f9a
    PUSH EAX                            ; 005e4f9e
    MOV EAX,dword ptr [EDX]             ; 005e4f9f | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 005e4fa1
    PUSH EAX                            ; 005e4fa4
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005e4fa5
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005e4faa
    MOV EAX,dword ptr [ESI + 0xc054]    ; 005e4fad
    LEA EBX,[ESP + 0x3c]                ; 005e4fb3
    MOV dword ptr [ESP + 0x1c],EAX      ; 005e4fb7
    LEA EAX,[ESP + 0x18]                ; 005e4fbb
    MOV EDX,dword ptr [0x006703ec]      ; 005e4fbf | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 005e4fc5
    FMUL float ptr [0x00664cb0]         ; 005e4fc7 | DAT_00664cb0
    FISTP dword ptr [EBX]               ; 005e4fcd
    FLD float ptr [EAX + 0x4]           ; 005e4fcf
    FMUL float ptr [0x00664cb0]         ; 005e4fd2 | DAT_00664cb0
    FISTP dword ptr [EBX + 0x4]         ; 005e4fd8
    FLD float ptr [EAX + 0x8]           ; 005e4fdb
    FMUL float ptr [0x00664cb0]         ; 005e4fde | DAT_00664cb0
    FISTP dword ptr [EBX + 0x8]         ; 005e4fe4
    LEA EAX,[ESP + 0x3c]                ; 005e4fe7
    PUSH EAX                            ; 005e4feb
    MOV EAX,dword ptr [EDX]             ; 005e4fec | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 005e4fee
    PUSH EAX                            ; 005e4ff3
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005e4ff4
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005e4ff9
    PUSH 0x1                            ; 005e4ffc
    PUSH 0x0                            ; 005e4ffe
    MOV ECX,dword ptr [0x006703ec]      ; 005e5000 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 005e5006 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 ; 005e5007
        ;   XREF to: 0048caf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 005e500c
    PUSH 0x3                            ; 005e500f
    PUSH 0x2                            ; 005e5011
    MOV EBX,dword ptr [0x006703ec]      ; 005e5013 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EBX                            ; 005e5019 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 ; 005e501a
        ;   XREF to: 0048caf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 005e501f
    PUSH 0x2                            ; 005e5022
    PUSH 0x0                            ; 005e5024
    MOV EAX,[0x006703ec]                ; 005e5026 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 005e502b | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 ; 005e502c
        ;   XREF to: 0048caf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 005e5031
    CMP EDI,0x168                       ; 005e5034
    JLE 0x005e4e4a                      ; 005e503a
        ;   XREF to: 005e4e4a (CONDITIONAL_JUMP)  ; LAB_005e4e4a
    MOV EAX,dword ptr [ESP + 0x60]      ; 005e5040
        ;   Label: LAB_005e5040
    MOV ESP,EBP                         ; 005e5044
    POP EBP                             ; 005e5046
    POP EDI                             ; 005e5047
    POP ESI                             ; 005e5048
    POP EBX                             ; 005e5049
    RET                                 ; 005e504a

