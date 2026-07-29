; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireball_render_FUN_004c0e70(CFireball *this_ptr)
;
; Parameters:
; CFireball *      Stack[0x4]:4   this_ptr
; Local Variables:
; CBoundingBox3D   Stack[-0xe0]:24  local_e0
; CVector3i        Stack[-0xc8]:12  local_c8
; CVector3i        Stack[-0xbc]:12  local_bc
; CVector3f        Stack[-0xb0]:12  local_b0
; float            Stack[-0xa4]:4  local_a4
; float            Stack[-0xa0]:4  local_a0
; float            Stack[-0x9c]:4  local_9c
; CVector3i        Stack[-0x98]:12  local_98
; CVector3i        Stack[-0x8c]:12  local_8c
; CVector3i        Stack[-0x80]:12  local_80
; CVector3i        Stack[-0x74]:12  local_74
; float            Stack[-0x68]:4  local_68
; float            Stack[-0x64]:4  local_64
; float            Stack[-0x60]:4  local_60
; CVector3i        Stack[-0x5c]:12  local_5c
; float            Stack[-0x50]:4  local_50
; float            Stack[-0x4c]:4  local_4c
; CVector3i[2]     Stack[-0x44]:24  local_44
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   double DOUBLE_00629cab = 0.700000000000000
;   float FLOAT_0065dca8 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   SMRGLTextureBasic g_FireEffectSparkTexture
;   SMRGLTextureBasic g_FireEffectGreenSparkTexture
;   SMRGLTextureBasic g_FireEffectRedSparkTexture
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;   undefined4 g_RenderVertexBuffer[0].r
;   undefined4 g_RenderVertexBuffer[0].g
;   undefined4 g_RenderVertexBuffer[0].b
;   undefined4 g_RenderVertexBuffer[0].a
;   undefined4 g_RenderVertexBuffer[1].u
;   undefined4 g_RenderVertexBuffer[1].v
;   ... and 27 more
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_0056d380
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   engine_special.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0e70
        ;   Label: core_fire.cpp_CFireball_render_FUN_004c0e70
    PUSH ESI                            ; 004c0e71
    PUSH EDI                            ; 004c0e72
    PUSH EBP                            ; 004c0e73
    MOV EBP,ESP                         ; 004c0e74
    SUB ESP,0xd4                        ; 004c0e76
    AND ESP,0xfffffff8                  ; 004c0e7c
    MOV ESI,dword ptr [EBP + 0x14]      ; 004c0e7f
    MOV EDX,0x3f000000                  ; 004c0e82
    MOV ECX,dword ptr [ESI + 0x44]      ; 004c0e87
    MOV dword ptr [ESP + 0xc8],EDX      ; 004c0e8a
    TEST ECX,ECX                        ; 004c0e91
    JZ 0x004c0f7c                       ; 004c0e93
        ;   XREF to: 004c0f7c (CONDITIONAL_JUMP)  ; LAB_004c0f7c
    CMP dword ptr [ESI + 0x44],0x2      ; 004c0e99
        ;   Label: LAB_004c0e99
    JNZ 0x004c0eaa                      ; 004c0e9d
        ;   XREF to: 004c0eaa (CONDITIONAL_JUMP)  ; LAB_004c0eaa
    MOV dword ptr [ESP + 0xc8],0x3f2a7efa ; 004c0e9f
    PUSH ESI                            ; 004c0eaa
        ;   Label: LAB_004c0eaa
    MOV EDX,dword ptr [0x006703ec]      ; 004c0eab | g_CDemonRendererPtr2
    PUSH EDX                            ; 004c0eb1 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004c0eb2
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004c0eb7
    PUSH 0x0                            ; 004c0eba
    LEA EAX,[ESI + 0x4c]                ; 004c0ebc
    PUSH EAX                            ; 004c0ebf
    MOV ECX,dword ptr [0x006703ec]      ; 004c0ec0 | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c0ec6 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0 ; 004c0ec7
        ;   XREF to: 0048c4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    MOV EBX,dword ptr [ESI + 0x44]      ; 004c0ecc
    ADD ESP,0xc                         ; 004c0ecf
    TEST EBX,EBX                        ; 004c0ed2
    JNZ 0x004c0f8c                      ; 004c0ed4
        ;   XREF to: 004c0f8c (CONDITIONAL_JUMP)  ; LAB_004c0f8c
    MOV EBX,0x2d12f70                   ; 004c0eda | g_FireEffectFireballModel
    PUSH EBX                            ; 004c0edf | g_FireEffectFireballModel | g_FireEffectFireballSmallModel | g_FireEffectFireballGreenModel
        ;   Label: LAB_004c0edf
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004c0ee0
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x5690]    ; 004c0ee5
    ADD ESP,0x4                         ; 004c0eeb
    MOV EAX,dword ptr [EDX]             ; 004c0eee
    MOV dword ptr [ESP + 0x8],EAX       ; 004c0ef0
    LEA EAX,[EDX + 0x4]                 ; 004c0ef4
    MOV EAX,dword ptr [EAX]             ; 004c0ef7
    MOV dword ptr [ESP + 0xc],EAX       ; 004c0ef9
    LEA EAX,[EDX + 0x8]                 ; 004c0efd
    MOV EAX,dword ptr [EAX]             ; 004c0f00
    MOV dword ptr [ESP + 0x10],EAX      ; 004c0f02
    MOV EAX,dword ptr [EDX + 0xc]       ; 004c0f06
    ADD EDX,0xc                         ; 004c0f09
    MOV dword ptr [ESP + 0x14],EAX      ; 004c0f0c
    LEA EAX,[EDX + 0x4]                 ; 004c0f10
    MOV EAX,dword ptr [EAX]             ; 004c0f13
    MOV dword ptr [ESP + 0x18],EAX      ; 004c0f15
    LEA EAX,[EDX + 0x8]                 ; 004c0f19
    MOV EAX,dword ptr [EAX]             ; 004c0f1c
    MOV dword ptr [ESP + 0x1c],EAX      ; 004c0f1e
    LEA EAX,[ESP + 0x8]                 ; 004c0f22
    PUSH EAX                            ; 004c0f26
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 004c0f27
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 004c0f2c
    MOV EDI,EAX                         ; 004c0f2f
    TEST EAX,EAX                        ; 004c0f31
    JZ 0x004c0f62                       ; 004c0f33
        ;   XREF to: 004c0f62 (CONDITIONAL_JUMP)  ; LAB_004c0f62
    PUSH 0x0                            ; 004c0f35
    LEA EAX,[ESP + 0x18]                ; 004c0f37
    PUSH EAX                            ; 004c0f3b
    LEA EAX,[ESP + 0x10]                ; 004c0f3c
    PUSH EAX                            ; 004c0f40
    PUSH 0x3f87558                      ; 004c0f41 | g_ZeroVector
    PUSH ESI                            ; 004c0f46
    MOV EAX,[0x006810c8]                ; 004c0f47 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EAX                            ; 004c0f4c | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_0056d380 ; 004c0f4d
        ;   XREF to: 0056d380 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_0056d380(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 004c0f52
    PUSH -0x1                           ; 004c0f55
    PUSH 0x0                            ; 004c0f57
    PUSH EBX                            ; 004c0f59 | g_FireEffectFireballModel
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 004c0f5a
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004c0f5f
    MOV EDX,dword ptr [0x006703ec]      ; 004c0f62 | g_CDemonRendererPtr2
        ;   Label: LAB_004c0f62
    PUSH EDX                            ; 004c0f68 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 004c0f69
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004c0f6e
    TEST EDI,EDI                        ; 004c0f71
    JNZ 0x004c0fa5                      ; 004c0f73
        ;   XREF to: 004c0fa5 (CONDITIONAL_JUMP)  ; LAB_004c0fa5
    MOV ESP,EBP                         ; 004c0f75
        ;   Label: LAB_004c0f75
    POP EBP                             ; 004c0f77
    POP EDI                             ; 004c0f78
    POP ESI                             ; 004c0f79
    POP EBX                             ; 004c0f7a
    RET                                 ; 004c0f7b
    MOV dword ptr [ESP + 0xc8],0x40800000 ; 004c0f7c
        ;   Label: LAB_004c0f7c
    JMP 0x004c0e99                      ; 004c0f87
        ;   XREF to: 004c0e99 (UNCONDITIONAL_JUMP)  ; LAB_004c0e99
    CMP EBX,0x1                         ; 004c0f8c
        ;   Label: LAB_004c0f8c
    JNZ 0x004c0f9b                      ; 004c0f8f
        ;   XREF to: 004c0f9b (CONDITIONAL_JUMP)  ; LAB_004c0f9b
    MOV EBX,0x2d130ec                   ; 004c0f91 | g_FireEffectFireballSmallModel
    JMP 0x004c0edf                      ; 004c0f96
        ;   XREF to: 004c0edf (UNCONDITIONAL_JUMP)  ; LAB_004c0edf
    MOV EBX,0x2d13268                   ; 004c0f9b | g_FireEffectFireballGreenModel
        ;   Label: LAB_004c0f9b
    JMP 0x004c0edf                      ; 004c0fa0
        ;   XREF to: 004c0edf (UNCONDITIONAL_JUMP)  ; LAB_004c0edf
    MOV ECX,dword ptr [0x006703ec]      ; 004c0fa5 | g_CDemonRendererPtr2
        ;   Label: LAB_004c0fa5
    PUSH ECX                            ; 004c0fab | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 004c0fac
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004c0fb1
    TEST EAX,EAX                        ; 004c0fb4
    JNZ 0x004c0f75                      ; 004c0fb6
        ;   XREF to: 004c0f75 (CONDITIONAL_JUMP)  ; LAB_004c0f75
    MOV EBX,0x80000                     ; 004c0fb8
    PUSH EAX                            ; 004c0fbd
    MOV EDI,0xf80000                    ; 004c0fbe | g_LightBufferPool[11][183800]
    MOV EDX,dword ptr [0x006703ec]      ; 004c0fc3 | g_CDemonRendererPtr2
    PUSH 0x2d12db4                      ; 004c0fc9 | g_BillboardCameraRight
    MOV dword ptr [0x0068802c],EBX      ; 004c0fce | g_RenderVertexBuffer[0].u
    MOV dword ptr [0x00688030],EDI      ; 004c0fd4 | g_RenderVertexBuffer[0].v
    MOV dword ptr [0x0068805c],EDI      ; 004c0fda | g_RenderVertexBuffer[1].u
    MOV dword ptr [0x00688060],EDI      ; 004c0fe0 | g_RenderVertexBuffer[1].v
    MOV dword ptr [0x0068808c],EDI      ; 004c0fe6 | g_RenderVertexBuffer[2].u
    MOV dword ptr [0x00688090],EBX      ; 004c0fec | g_RenderVertexBuffer[2].v
    MOV dword ptr [0x006880bc],EBX      ; 004c0ff2 | g_RenderVertexBuffer[3].u
    PUSH EDX                            ; 004c0ff8 | g_CDemonRendererInstance
    MOV dword ptr [0x006880c0],EBX      ; 004c0ff9 | g_RenderVertexBuffer[3].v
    LEA EBX,[ESP + 0x80]                ; 004c0fff
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0 ; 004c1006
        ;   XREF to: 0048c4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004c100b
    MOV EDX,dword ptr [0x006703ec]      ; 004c100e | g_CDemonRendererPtr2
    FLD float ptr [ESP + 0xc8]          ; 004c1014
    FCHS                                ; 004c101b
    FSTP float ptr [ESP + 0x98]         ; 004c101d
    MOV EAX,dword ptr [ESP + 0x98]      ; 004c1024
    XOR ECX,ECX                         ; 004c102b
    MOV dword ptr [ESP + 0xc0],EAX      ; 004c102d
    MOV dword ptr [ESP + 0x9c],EAX      ; 004c1034
    LEA EAX,[ESP + 0x98]                ; 004c103b
    MOV dword ptr [ESP + 0xa0],ECX      ; 004c1042
    FLD float ptr [EAX]                 ; 004c1049
    FMUL float ptr [0x0065dca8]         ; 004c104b | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c1051
    FLD float ptr [EAX + 0x4]           ; 004c1053
    FMUL float ptr [0x0065dca8]         ; 004c1056 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c105c
    FLD float ptr [EAX + 0x8]           ; 004c105f
    FMUL float ptr [0x0065dca8]         ; 004c1062 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c1068
    LEA EAX,[ESP + 0x74]                ; 004c106b
    PUSH EAX                            ; 004c106f
    MOV EAX,dword ptr [EDX]             ; 004c1070 | g_CDemonRendererInstance
    PUSH EAX                            ; 004c1072
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 004c1073
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c1078
    XOR EBX,EBX                         ; 004c107b
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004c107d
    MOV dword ptr [ESP + 0xa0],EBX      ; 004c1084
    MOV dword ptr [ESP + 0x98],EAX      ; 004c108b
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004c1092
    LEA EBX,[ESP + 0x50]                ; 004c1099
    MOV dword ptr [ESP + 0x9c],EAX      ; 004c109d
    LEA EAX,[ESP + 0x98]                ; 004c10a4
    MOV EDX,dword ptr [0x006703ec]      ; 004c10ab | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004c10b1
    FMUL float ptr [0x0065dca8]         ; 004c10b3 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c10b9
    FLD float ptr [EAX + 0x4]           ; 004c10bb
    FMUL float ptr [0x0065dca8]         ; 004c10be | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c10c4
    FLD float ptr [EAX + 0x8]           ; 004c10c7
    FMUL float ptr [0x0065dca8]         ; 004c10ca | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c10d0
    LEA EAX,[ESP + 0x50]                ; 004c10d3
    PUSH EAX                            ; 004c10d7
    MOV EAX,dword ptr [EDX]             ; 004c10d8 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 004c10da
    PUSH EAX                            ; 004c10dd
    XOR EDI,EDI                         ; 004c10de
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 004c10e0
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c10e5
    LEA EBX,[ESP + 0x2c]                ; 004c10e8
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004c10ec
    MOV EDX,dword ptr [0x006703ec]      ; 004c10f3 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x98],EAX      ; 004c10f9
    MOV dword ptr [ESP + 0x9c],EAX      ; 004c1100
    LEA EAX,[ESP + 0x98]                ; 004c1107
    MOV dword ptr [ESP + 0xa0],EDI      ; 004c110e
    FLD float ptr [EAX]                 ; 004c1115
    FMUL float ptr [0x0065dca8]         ; 004c1117 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c111d
    FLD float ptr [EAX + 0x4]           ; 004c111f
    FMUL float ptr [0x0065dca8]         ; 004c1122 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c1128
    FLD float ptr [EAX + 0x8]           ; 004c112b
    FMUL float ptr [0x0065dca8]         ; 004c112e | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c1134
    LEA EAX,[ESP + 0x2c]                ; 004c1137
    PUSH EAX                            ; 004c113b
    MOV EAX,dword ptr [EDX]             ; 004c113c | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 004c113e
    PUSH EAX                            ; 004c1141
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 004c1142
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c1147
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004c114a
    LEA EBX,[ESP + 0x5c]                ; 004c1151
    MOV dword ptr [ESP + 0x98],EAX      ; 004c1155
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004c115c
    MOV EDX,dword ptr [0x006703ec]      ; 004c1163 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x9c],EAX      ; 004c1169
    LEA EAX,[ESP + 0x98]                ; 004c1170
    MOV dword ptr [ESP + 0xa0],EDI      ; 004c1177
    FLD float ptr [EAX]                 ; 004c117e
    FMUL float ptr [0x0065dca8]         ; 004c1180 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c1186
    FLD float ptr [EAX + 0x4]           ; 004c1188
    FMUL float ptr [0x0065dca8]         ; 004c118b | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c1191
    FLD float ptr [EAX + 0x8]           ; 004c1194
    FMUL float ptr [0x0065dca8]         ; 004c1197 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c119d
    LEA EAX,[ESP + 0x5c]                ; 004c11a0
    PUSH EAX                            ; 004c11a4
    MOV EAX,dword ptr [EDX]             ; 004c11a5 | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 004c11a7
    PUSH EAX                            ; 004c11ac
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 004c11ad
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EDX,dword ptr [ESI + 0x44]      ; 004c11b2
    ADD ESP,0x8                         ; 004c11b5
    CMP EDX,0x1                         ; 004c11b8
    JNZ 0x004c1661                      ; 004c11bb
        ;   XREF to: 004c1661 (CONDITIONAL_JUMP)  ; LAB_004c1661
    PUSH 0x67a7f4                       ; 004c11c1 | g_FireEffectRedSparkTexture
    MOV EAX,[0x006703ec]                ; 004c11c6 | g_CDemonRendererPtr2
    PUSH EAX                            ; 004c11cb | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 004c11cc
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   Label: LAB_004c11cc
    ADD ESP,0x8                         ; 004c11d1
    MOV EDX,0xffff                      ; 004c11d4
    MOV ECX,dword ptr [0x02d051f4]      ; 004c11d9 | g_PerspectiveReciprocal
    MOV EAX,dword ptr [ESI + 0x38]      ; 004c11df
    SUB EDX,ECX                         ; 004c11e2
    MOV EBX,0xffff                      ; 004c11e4
    IMUL EDX                            ; 004c11e9
    SHRD EAX,EDX,0x10                   ; 004c11eb
    PUSH 0x1                            ; 004c11ef
    MOV [0x00688040],EAX                ; 004c11f1 | g_RenderVertexBuffer[0].a
    MOV [0x00688070],EAX                ; 004c11f6 | g_RenderVertexBuffer[1].a
    MOV [0x006880a0],EAX                ; 004c11fb | g_RenderVertexBuffer[2].a
    MOV [0x006880d0],EAX                ; 004c1200 | g_RenderVertexBuffer[3].a
    MOV dword ptr [0x00688034],EBX      ; 004c1205 | g_RenderVertexBuffer[0].r
    MOV dword ptr [0x00688038],EBX      ; 004c120b | g_RenderVertexBuffer[0].g
    MOV dword ptr [0x0068803c],EBX      ; 004c1211 | g_RenderVertexBuffer[0].b
    MOV dword ptr [0x00688064],EBX      ; 004c1217 | g_RenderVertexBuffer[1].r
    MOV dword ptr [0x00688068],EBX      ; 004c121d | g_RenderVertexBuffer[1].g
    MOV dword ptr [0x0068806c],EBX      ; 004c1223 | g_RenderVertexBuffer[1].b
    MOV dword ptr [0x00688094],EBX      ; 004c1229 | g_RenderVertexBuffer[2].r
    MOV dword ptr [0x00688098],EBX      ; 004c122f | g_RenderVertexBuffer[2].g
    MOV dword ptr [0x0068809c],EBX      ; 004c1235 | g_RenderVertexBuffer[2].b
    MOV EAX,[0x006703ec]                ; 004c123b | g_CDemonRendererPtr2
    MOV dword ptr [0x006880c4],EBX      ; 004c1240 | g_RenderVertexBuffer[3].r
    PUSH EAX                            ; 004c1246 | g_CDemonRendererInstance
    MOV dword ptr [0x006880c8],EBX      ; 004c1247 | g_RenderVertexBuffer[3].g
    MOV dword ptr [0x006880cc],EBX      ; 004c124d | g_RenderVertexBuffer[3].b
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c1253
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c1258
    PUSH 0x2d12dcc                      ; 004c125b | g_BillboardPrimitive
    MOV EDX,dword ptr [0x006703ec]      ; 004c1260 | g_CDemonRendererPtr2
    PUSH EDX                            ; 004c1266 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0 ; 004c1267
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004c126c
    PUSH 0x0                            ; 004c126f
    MOV ECX,dword ptr [0x006703ec]      ; 004c1271 | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c1277 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c1278
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c127d
    MOV EBX,dword ptr [0x006703ec]      ; 004c1280 | g_CDemonRendererPtr2
    PUSH EBX                            ; 004c1286 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 004c1287
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    MOV EDI,dword ptr [ESI + 0x44]      ; 004c128c
    ADD ESP,0x4                         ; 004c128f
    CMP EDI,0x1                         ; 004c1292
    JZ 0x004c0f75                       ; 004c1295
        ;   XREF to: 004c0f75 (CONDITIONAL_JUMP)  ; LAB_004c0f75
    CMP EDI,0x2                         ; 004c129b
    JZ 0x004c0f75                       ; 004c129e
        ;   XREF to: 004c0f75 (CONDITIONAL_JUMP)  ; LAB_004c0f75
    MOV EAX,dword ptr [ESI]             ; 004c12a4
    MOV dword ptr [ESP + 0x38],EAX      ; 004c12a6
    LEA EAX,[ESI + 0x4]                 ; 004c12aa
    MOV EAX,dword ptr [EAX]             ; 004c12ad
    MOV dword ptr [ESP + 0x3c],EAX      ; 004c12af
    LEA EAX,[ESI + 0x8]                 ; 004c12b3
    MOV EAX,dword ptr [EAX]             ; 004c12b6
    LEA EDX,[ESI + 0xc]                 ; 004c12b8
    MOV dword ptr [ESP + 0x40],EAX      ; 004c12bb
    MOV EAX,dword ptr [EDX]             ; 004c12bf
    MOV dword ptr [ESP + 0x80],EAX      ; 004c12c1
    LEA EAX,[EDX + 0x4]                 ; 004c12c8
    MOV EAX,dword ptr [EAX]             ; 004c12cb
    MOV ECX,0x3dcccccd                  ; 004c12cd
    MOV dword ptr [ESP + 0x84],EAX      ; 004c12d2
    LEA EAX,[EDX + 0x8]                 ; 004c12d9
    XOR EDI,EDI                         ; 004c12dc
    MOV dword ptr [ESP + 0x4],ECX       ; 004c12de
    MOV EAX,dword ptr [EAX]             ; 004c12e2
    MOV EDX,0x3f800000                  ; 004c12e4
    MOV dword ptr [ESP + 0x88],EAX      ; 004c12e9
    MOV dword ptr [ESP],EDX             ; 004c12f0
    FLD float ptr [ESP + 0x4]           ; 004c12f3
        ;   Label: LAB_004c12f3
    FLD ST0                             ; 004c12f7
    FLD double ptr [0x00629cab]         ; 004c12f9 | DOUBLE_00629cab
    FXCH                                ; 004c12ff
    FMUL ST1                            ; 004c1301
    FLD float ptr [ESP]                 ; 004c1303
    FMUL ST2                            ; 004c1306
    FLD float ptr [ESP + 0x80]          ; 004c1308
    FXCH ST2                            ; 004c130f
    FSTP ST4                            ; 004c1311
    FXCH ST3                            ; 004c1313
    FSTP float ptr [ESP + 0x4]          ; 004c1315
    FMUL float ptr [ESP + 0x4]          ; 004c1319
    FLD float ptr [ESP + 0x4]           ; 004c131d
    FMUL float ptr [ESI + 0x1c]         ; 004c1321
    FLD float ptr [ESP + 0x88]          ; 004c1324
    FXCH                                ; 004c132b
    FSUBR float ptr [ESP + 0x84]        ; 004c132d
    FXCH                                ; 004c1334
    FMUL float ptr [ESP + 0x4]          ; 004c1336
    FXCH                                ; 004c133a
    FST float ptr [ESP + 0x84]          ; 004c133c
    FMUL float ptr [ESP + 0x4]          ; 004c1343
    FLD float ptr [ESP + 0x38]          ; 004c1347
    FLD float ptr [ESP + 0x3c]          ; 004c134b
    LEA EAX,[ESP + 0x38]                ; 004c134f
    MOV EBX,dword ptr [0x006703ec]      ; 004c1353 | g_CDemonRendererPtr2
    PUSH EAX                            ; 004c1359
    FXCH ST5                            ; 004c135a
    FSTP ST6                            ; 004c135c
    FXCH ST5                            ; 004c135e
    FSTP float ptr [ESP + 0x4]          ; 004c1360
    FLD float ptr [ESP + 0x44]          ; 004c1364
    PUSH EBX                            ; 004c1368 | g_CDemonRendererInstance
    FXCH ST3                            ; 004c1369
    FSTP float ptr [ESP + 0x4c]         ; 004c136b
    FXCH                                ; 004c136f
    FSTP float ptr [ESP + 0x54]         ; 004c1371
    FXCH ST3                            ; 004c1375
    FSUB float ptr [ESP + 0x4c]         ; 004c1377
    FXCH                                ; 004c137b
    FSUB float ptr [ESP + 0x54]         ; 004c137d
    FXCH                                ; 004c1381
    FSTP float ptr [ESP + 0x40]         ; 004c1383
    FXCH ST2                            ; 004c1387
    FSTP float ptr [ESP + 0x50]         ; 004c1389
    FSUB float ptr [ESP + 0x50]         ; 004c138d
    FXCH                                ; 004c1391
    FSTP float ptr [ESP + 0x48]         ; 004c1393
    FSTP float ptr [ESP + 0x44]         ; 004c1397
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004c139b
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004c13a0
    PUSH 0x0                            ; 004c13a3
    PUSH 0x2d12db4                      ; 004c13a5 | g_BillboardCameraRight
    MOV EAX,[0x006703ec]                ; 004c13aa | g_CDemonRendererPtr2
    PUSH EAX                            ; 004c13af | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0 ; 004c13b0
        ;   XREF to: 0048c4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 004c13b5
    FLD float ptr [ESP + 0xc8]          ; 004c13b8
    FCHS                                ; 004c13bf
    FMUL float ptr [ESP]                ; 004c13c1
    LEA EBX,[ESP + 0xa4]                ; 004c13c4
    XOR EDX,EDX                         ; 004c13cb
    FSTP float ptr [ESP + 0x98]         ; 004c13cd
    MOV EAX,dword ptr [ESP + 0x98]      ; 004c13d4
    MOV dword ptr [ESP + 0xa0],EDX      ; 004c13db
    MOV dword ptr [ESP + 0xcc],EAX      ; 004c13e2
    MOV dword ptr [ESP + 0x9c],EAX      ; 004c13e9
    LEA EAX,[ESP + 0x98]                ; 004c13f0
    MOV EDX,dword ptr [0x006703ec]      ; 004c13f7 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004c13fd
    FMUL float ptr [0x0065dca8]         ; 004c13ff | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c1405
    FLD float ptr [EAX + 0x4]           ; 004c1407
    FMUL float ptr [0x0065dca8]         ; 004c140a | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c1410
    FLD float ptr [EAX + 0x8]           ; 004c1413
    FMUL float ptr [0x0065dca8]         ; 004c1416 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c141c
    LEA EAX,[ESP + 0xa4]                ; 004c141f
    PUSH EAX                            ; 004c1426
    MOV EAX,dword ptr [EDX]             ; 004c1427 | g_CDemonRendererInstance
    PUSH EAX                            ; 004c1429
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 004c142a
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c142f
    FLD float ptr [ESP + 0xc8]          ; 004c1432
    FMUL float ptr [ESP]                ; 004c1439
    MOV EDX,dword ptr [0x006703ec]      ; 004c143c | g_CDemonRendererPtr2
    FSTP float ptr [ESP + 0xd0]         ; 004c1442
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004c1449
    XOR ECX,ECX                         ; 004c1450
    MOV dword ptr [ESP + 0x98],EAX      ; 004c1452
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004c1459
    MOV dword ptr [ESP + 0xa0],ECX      ; 004c1460
    MOV dword ptr [ESP + 0x9c],EAX      ; 004c1467
    LEA EBX,[ESP + 0x8c]                ; 004c146e
    LEA EAX,[ESP + 0x98]                ; 004c1475
    FLD float ptr [EAX]                 ; 004c147c
    FMUL float ptr [0x0065dca8]         ; 004c147e | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c1484
    FLD float ptr [EAX + 0x4]           ; 004c1486
    FMUL float ptr [0x0065dca8]         ; 004c1489 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c148f
    FLD float ptr [EAX + 0x8]           ; 004c1492
    FMUL float ptr [0x0065dca8]         ; 004c1495 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c149b
    LEA EAX,[ESP + 0x8c]                ; 004c149e
    PUSH EAX                            ; 004c14a5
    MOV EAX,dword ptr [EDX]             ; 004c14a6 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 004c14a8
    PUSH EAX                            ; 004c14ab
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 004c14ac
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c14b1
    XOR EBX,EBX                         ; 004c14b4
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004c14b6
    MOV dword ptr [ESP + 0xa0],EBX      ; 004c14bd
    LEA EBX,[ESP + 0x68]                ; 004c14c4
    MOV dword ptr [ESP + 0x98],EAX      ; 004c14c8
    MOV dword ptr [ESP + 0x9c],EAX      ; 004c14cf
    LEA EAX,[ESP + 0x98]                ; 004c14d6
    MOV EDX,dword ptr [0x006703ec]      ; 004c14dd | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004c14e3
    FMUL float ptr [0x0065dca8]         ; 004c14e5 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c14eb
    FLD float ptr [EAX + 0x4]           ; 004c14ed
    FMUL float ptr [0x0065dca8]         ; 004c14f0 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c14f6
    FLD float ptr [EAX + 0x8]           ; 004c14f9
    FMUL float ptr [0x0065dca8]         ; 004c14fc | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c1502
    LEA EAX,[ESP + 0x68]                ; 004c1505
    PUSH EAX                            ; 004c1509
    MOV EAX,dword ptr [EDX]             ; 004c150a | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 004c150c
    PUSH EAX                            ; 004c150f
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 004c1510
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c1515
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004c1518
    MOV dword ptr [ESP + 0x98],EAX      ; 004c151f
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004c1526
    MOV dword ptr [ESP + 0x9c],EAX      ; 004c152d
    XOR EAX,EAX                         ; 004c1534
    LEA EBX,[ESP + 0x20]                ; 004c1536
    MOV dword ptr [ESP + 0xa0],EAX      ; 004c153a
    LEA EAX,[ESP + 0x98]                ; 004c1541
    MOV EDX,dword ptr [0x006703ec]      ; 004c1548 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004c154e
    FMUL float ptr [0x0065dca8]         ; 004c1550 | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c1556
    FLD float ptr [EAX + 0x4]           ; 004c1558
    FMUL float ptr [0x0065dca8]         ; 004c155b | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c1561
    FLD float ptr [EAX + 0x8]           ; 004c1564
    FMUL float ptr [0x0065dca8]         ; 004c1567 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c156d
    LEA EAX,[ESP + 0x20]                ; 004c1570
    PUSH EAX                            ; 004c1574
    MOV EAX,dword ptr [EDX]             ; 004c1575 | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 004c1577
    PUSH EAX                            ; 004c157c
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 004c157d
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c1582
    PUSH 0x0                            ; 004c1585
    MOV EAX,[0x00823a74]                ; 004c1587 | g_CurrentSceneCamera
    PUSH ESI                            ; 004c158c
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004c158d
    PUSH EAX                            ; 004c1590
    CALL dword ptr [EDX + 0x4]          ; 004c1591
    MOV EDX,0xffff                      ; 004c1594
    MOV ECX,dword ptr [0x02d051f4]      ; 004c1599 | g_PerspectiveReciprocal
    ADD ESP,0xc                         ; 004c159f
    MOV EAX,dword ptr [ESI + 0x38]      ; 004c15a2
    SUB EDX,ECX                         ; 004c15a5
    MOV EBX,0xffff                      ; 004c15a7
    IMUL EDX                            ; 004c15ac
    SHRD EAX,EDX,0x10                   ; 004c15ae
    PUSH 0x1                            ; 004c15b2
    MOV [0x00688040],EAX                ; 004c15b4 | g_RenderVertexBuffer[0].a
    MOV dword ptr [0x00688034],EBX      ; 004c15b9 | g_RenderVertexBuffer[0].r
    MOV dword ptr [0x00688038],EBX      ; 004c15bf | g_RenderVertexBuffer[0].g
    MOV dword ptr [0x0068803c],EBX      ; 004c15c5 | g_RenderVertexBuffer[0].b
    MOV dword ptr [0x00688064],EBX      ; 004c15cb | g_RenderVertexBuffer[1].r
    MOV dword ptr [0x00688068],EBX      ; 004c15d1 | g_RenderVertexBuffer[1].g
    MOV dword ptr [0x0068806c],EBX      ; 004c15d7 | g_RenderVertexBuffer[1].b
    MOV dword ptr [0x00688094],EBX      ; 004c15dd | g_RenderVertexBuffer[2].r
    MOV dword ptr [0x00688098],EBX      ; 004c15e3 | g_RenderVertexBuffer[2].g
    MOV dword ptr [0x0068809c],EBX      ; 004c15e9 | g_RenderVertexBuffer[2].b
    MOV dword ptr [0x006880c4],EBX      ; 004c15ef | g_RenderVertexBuffer[3].r
    MOV dword ptr [0x006880c8],EBX      ; 004c15f5 | g_RenderVertexBuffer[3].g
    MOV dword ptr [0x006880cc],EBX      ; 004c15fb | g_RenderVertexBuffer[3].b
    MOV EBX,dword ptr [0x006703ec]      ; 004c1601 | g_CDemonRendererPtr2
    MOV [0x00688070],EAX                ; 004c1607 | g_RenderVertexBuffer[1].a
    PUSH EBX                            ; 004c160c | g_CDemonRendererInstance
    MOV [0x006880a0],EAX                ; 004c160d | g_RenderVertexBuffer[2].a
    MOV [0x006880d0],EAX                ; 004c1612 | g_RenderVertexBuffer[3].a
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c1617
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c161c
    PUSH 0x2d12dcc                      ; 004c161f | g_BillboardPrimitive
    MOV EAX,[0x006703ec]                ; 004c1624 | g_CDemonRendererPtr2
    PUSH EAX                            ; 004c1629 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0 ; 004c162a
        ;   XREF to: 0048bad0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0048bad0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004c162f
    PUSH 0x0                            ; 004c1632
    MOV EDX,dword ptr [0x006703ec]      ; 004c1634 | g_CDemonRendererPtr2
    PUSH EDX                            ; 004c163a | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 004c163b
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004c1640
    MOV ECX,dword ptr [0x006703ec]      ; 004c1643 | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c1649 | g_CDemonRendererInstance
    INC EDI                             ; 004c164a
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 004c164b
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004c1650
    CMP EDI,0x3                         ; 004c1653
    JGE 0x004c0f75                      ; 004c1656
        ;   XREF to: 004c0f75 (CONDITIONAL_JUMP)  ; LAB_004c0f75
    JMP 0x004c12f3                      ; 004c165c
        ;   XREF to: 004c12f3 (UNCONDITIONAL_JUMP)  ; LAB_004c12f3
    CMP EDX,0x2                         ; 004c1661
        ;   Label: LAB_004c1661
    JNZ 0x004c1677                      ; 004c1664
        ;   XREF to: 004c1677 (CONDITIONAL_JUMP)  ; LAB_004c1677
    PUSH 0x67a7dc                       ; 004c1666 | g_FireEffectGreenSparkTexture
    MOV EDI,dword ptr [0x006703ec]      ; 004c166b | g_CDemonRendererPtr2
    PUSH EDI                            ; 004c1671 | g_CDemonRendererInstance
    JMP 0x004c11cc                      ; 004c1672
        ;   XREF to: 004c11cc (UNCONDITIONAL_JUMP)  ; LAB_004c11cc
    PUSH 0x67a7ac                       ; 004c1677 | g_FireEffectSparkTexture
        ;   Label: LAB_004c1677
    MOV EBX,dword ptr [0x006703ec]      ; 004c167c | g_CDemonRendererPtr2
    PUSH EBX                            ; 004c1682 | g_CDemonRendererInstance
    JMP 0x004c11cc                      ; 004c1683
        ;   XREF to: 004c11cc (UNCONDITIONAL_JUMP)  ; LAB_004c11cc

