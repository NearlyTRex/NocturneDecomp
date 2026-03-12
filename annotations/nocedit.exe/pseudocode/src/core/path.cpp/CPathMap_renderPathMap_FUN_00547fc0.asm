; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_CPathMap_renderPathMap_FUN_00547fc0(CPathMap *this_ptr,int depth,int red,int green,int fog)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   depth
; int              Stack[0xc]:4   red
; int              Stack[0x10]:4   green
; int              Stack[0x14]:4   fog
; Local Variables:
; int[1010]        Stack[-0x1040]:4040  aiStackY_1040
; CVector3i        Stack[-0x70]:12  local_70
; CVector3f        Stack[-0x64]:12  local_64
; int              Stack[-0x58]:4  local_58
; int[4]           Stack[-0x54]:16  local_54
; int              Stack[-0x44]:4  local_44
; float            Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; float            Stack[-0x38]:4  local_38
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_path.cpp_renderAllPathMaps_FUN_005485f0 at 0054866a
;   core_path.cpp_renderPathMapsAtPosition_FUN_00548680 at 0054873b
;   core_waypoint.cpp_CWaypoint_renderOpaque_FUN_005ebf70 at 005ec138
;
; Referenced Globals:
;   float FLOAT_0063ea38 = 256
;   double DOUBLE_0063ea40 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   SMRGLTextureBasic SMRGLTextureBasic_00680bb0
;   undefined4 DAT_00800000
;   CDemonRenderer g_CDemonRendererInstance
;   SMRGLPrimitiveQuad SMRGLPrimitiveQuad_030d4fd0
;   undefined4 SMRGLPrimitiveQuad_030d4fd0.base.base.count
;   undefined4 SMRGLPrimitiveQuad_030d4fd0.base.surface_normal.A
;   undefined4 SMRGLPrimitiveQuad_030d4fd0.base.surface_normal.B
;   undefined4 SMRGLPrimitiveQuad_030d4fd0.base.surface_normal.C
;   undefined4 SMRGLPrimitiveQuad_030d4fd0.base.surface_normal.D
;   undefined4 SMRGLPrimitiveQuad_030d4fd0.vertices[0].vertex_index
;   undefined4 SMRGLPrimitiveQuad_030d4fd0.vertices[0].texture_u
;   undefined4 SMRGLPrimitiveQuad_030d4fd0.vertices[0].texture_v
;   ... and 15 more
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547fc0
        ;   Label: core_path.cpp_CPathMap_renderPathMap_FUN_00547fc0
    PUSH ESI                            ; 00547fc1
    PUSH EDI                            ; 00547fc2
    PUSH EBP                            ; 00547fc3
    MOV EBP,ESP                         ; 00547fc4
    SUB ESP,0x60                        ; 00547fc6
    AND ESP,0xfffffff8                  ; 00547fc9
    MOV EDX,dword ptr [0x006703ec]      ; 00547fcc | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 00547fd2 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 00547fd3
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00547fd8
    TEST EAX,EAX                        ; 00547fdb
    JZ 0x00547fe6                       ; 00547fdd
        ;   XREF to: 00547fe6 (CONDITIONAL_JUMP)  ; LAB_00547fe6
    MOV ESP,EBP                         ; 00547fdf
    POP EBP                             ; 00547fe1
    POP EDI                             ; 00547fe2
    POP ESI                             ; 00547fe3
    POP EBX                             ; 00547fe4
    RET                                 ; 00547fe5
    MOV EAX,dword ptr [EBP + 0x14]      ; 00547fe6
        ;   Label: LAB_00547fe6
    FILD dword ptr [EAX + 0x24]         ; 00547fe9
    FMUL float ptr [0x03277d48]         ; 00547fec | g_CDemonRaytraceInstance.adjusted_size.x
    XOR ECX,ECX                         ; 00547ff2
    FADD float ptr [0x03277d24]         ; 00547ff4 | g_CDemonRaytraceInstance.bbox_min.x
    MOV dword ptr [ESP + 0x10],ECX      ; 00547ffa
    FSTP float ptr [ESP + 0xc]          ; 00547ffe
    FILD dword ptr [EAX + 0x2c]         ; 00548002
    FMUL float ptr [0x03277d50]         ; 00548005 | g_CDemonRaytraceInstance.adjusted_size.z
    LEA EAX,[ESP + 0xc]                 ; 0054800b
    MOV EBX,dword ptr [0x006703ec]      ; 0054800f | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 00548015
    FADD float ptr [0x03277d2c]         ; 00548016 | g_CDemonRaytraceInstance.bbox_min.z
    PUSH EBX                            ; 0054801c | g_CDemonRendererInstance
    FSTP float ptr [ESP + 0x1c]         ; 0054801d
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 00548021
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00548026
    PUSH 0x680bb0                       ; 00548029 | SMRGLTextureBasic_00680bb0
    MOV ESI,dword ptr [0x006703ec]      ; 0054802e | g_CDemonRendererPtr2
    PUSH ESI                            ; 00548034 | g_CDemonRendererInstance
    MOV EDI,0x4                         ; 00548035
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 0054803a
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV EDX,0x1                         ; 0054803f
    MOV ESI,0x2                         ; 00548044
    ADD ESP,0x8                         ; 00548049
    MOV dword ptr [0x030d4fd4],EDI      ; 0054804c | SMRGLPrimitiveQuad_030d4fd0.base.base.count
    XOR EAX,EAX                         ; 00548052
    MOV EDI,0x800000                    ; 00548054 | DAT_00800000
    MOV [0x030d4fd8],EAX                ; 00548059 | SMRGLPrimitiveQuad_030d4fd0.base.surface_normal.A
    MOV [0x030d4fdc],EAX                ; 0054805e | SMRGLPrimitiveQuad_030d4fd0.base.surface_normal.B
    MOV [0x030d4fe0],EAX                ; 00548063 | SMRGLPrimitiveQuad_030d4fd0.base.surface_normal.C
    MOV [0x030d4fe4],EAX                ; 00548068 | SMRGLPrimitiveQuad_030d4fd0.base.surface_normal.D
    MOV [0x030d4fe8],EAX                ; 0054806d | SMRGLPrimitiveQuad_030d4fd0.vertices[0].vertex_index
    MOV dword ptr [0x030d4ff4],EDX      ; 00548072 | SMRGLPrimitiveQuad_030d4fd0.vertices[1].vertex_index
    MOV dword ptr [0x030d5000],ESI      ; 00548078 | SMRGLPrimitiveQuad_030d4fd0.vertices[2].vertex_index
    PUSH EAX                            ; 0054807e
    MOV EDX,0x3                         ; 0054807f
    MOV ESI,dword ptr [0x006703ec]      ; 00548084 | g_CDemonRendererPtr2
    MOV dword ptr [0x030d4fec],EDI      ; 0054808a | SMRGLPrimitiveQuad_030d4fd0.vertices[0].texture_u
    MOV dword ptr [0x030d4ff0],EDI      ; 00548090 | SMRGLPrimitiveQuad_030d4fd0.vertices[0].texture_v
    MOV dword ptr [0x030d4ff8],EDI      ; 00548096 | SMRGLPrimitiveQuad_030d4fd0.vertices[1].texture_u
    MOV dword ptr [0x030d4ffc],EDI      ; 0054809c | SMRGLPrimitiveQuad_030d4fd0.vertices[1].texture_v
    MOV dword ptr [0x030d5004],EDI      ; 005480a2 | SMRGLPrimitiveQuad_030d4fd0.vertices[2].texture_u
    MOV dword ptr [0x030d5008],EDI      ; 005480a8 | SMRGLPrimitiveQuad_030d4fd0.vertices[2].texture_v
    MOV dword ptr [0x030d5010],EDI      ; 005480ae | SMRGLPrimitiveQuad_030d4fd0.vertices[3].texture_u
    PUSH ESI                            ; 005480b4 | g_CDemonRendererInstance
    MOV dword ptr [0x030d5014],EDI      ; 005480b5 | SMRGLPrimitiveQuad_030d4fd0.vertices[3].texture_v
    MOV dword ptr [0x030d500c],EDX      ; 005480bb | SMRGLPrimitiveQuad_030d4fd0.vertices[3].vertex_index
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0 ; 005480c1
        ;   XREF to: 0048c9f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 005480c6
    MOV EAX,dword ptr [EBP + 0x18]      ; 005480c9
    SHL EAX,0x8                         ; 005480cc
    MOV dword ptr [ESP + 0x50],EAX      ; 005480cf
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005480d3
    SHL EAX,0x8                         ; 005480d6
    MOV dword ptr [ESP + 0x48],EAX      ; 005480d9
    MOV EAX,dword ptr [EBP + 0x20]      ; 005480dd
    SHL EAX,0x8                         ; 005480e0
    XOR EDI,EDI                         ; 005480e3
    MOV dword ptr [ESP + 0x4c],EAX      ; 005480e5
    MOV EAX,dword ptr [EBP + 0x24]      ; 005480e9
    MOV dword ptr [ESP + 0x18],EDI      ; 005480ec
    SHL EAX,0x8                         ; 005480f0
    MOV dword ptr [ESP + 0x44],EDI      ; 005480f3
    MOV dword ptr [ESP + 0x54],EAX      ; 005480f7
    MOV EAX,dword ptr [ESP + 0x44]      ; 005480fb
        ;   Label: LAB_005480fb
    MOV ECX,dword ptr [EBP + 0x14]      ; 005480ff
    XOR EDX,EDX                         ; 00548102
    ADD EAX,ECX                         ; 00548104
    MOV dword ptr [ESP + 0x20],EDX      ; 00548106
    MOV dword ptr [ESP + 0x58],EAX      ; 0054810a
    MOV EAX,dword ptr [ESP + 0x58]      ; 0054810e
        ;   Label: LAB_0054810e
    MOV EBX,dword ptr [EAX + 0x9c70]    ; 00548112
    CMP EBX,0xfffffc19                  ; 00548118
    JGE 0x0054816d                      ; 0054811e
        ;   XREF to: 0054816d (CONDITIONAL_JUMP)  ; LAB_0054816d
    MOV EAX,dword ptr [ESP + 0x20]      ; 00548120
        ;   Label: LAB_00548120
    MOV EDI,dword ptr [ESP + 0x58]      ; 00548124
    INC EAX                             ; 00548128
    ADD EDI,0x190                       ; 00548129
    MOV dword ptr [ESP + 0x20],EAX      ; 0054812f
    MOV dword ptr [ESP + 0x58],EDI      ; 00548133
    CMP EAX,0x64                        ; 00548137
    JL 0x0054810e                       ; 0054813a
        ;   XREF to: 0054810e (CONDITIONAL_JUMP)  ; LAB_0054810e
    MOV EBX,dword ptr [ESP + 0x18]      ; 0054813c
    MOV ECX,dword ptr [ESP + 0x44]      ; 00548140
    INC EBX                             ; 00548144
    ADD ECX,0x4                         ; 00548145
    MOV dword ptr [ESP + 0x18],EBX      ; 00548148
    MOV dword ptr [ESP + 0x44],ECX      ; 0054814c
    CMP EBX,0x64                        ; 00548150
    JL 0x005480fb                       ; 00548153
        ;   XREF to: 005480fb (CONDITIONAL_JUMP)  ; LAB_005480fb
    PUSH 0x1                            ; 00548155
    MOV EDI,dword ptr [0x006703ec]      ; 00548157 | g_CDemonRendererPtr2
    PUSH EDI                            ; 0054815d | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0 ; 0054815e
        ;   XREF to: 0048c9f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00548163
    MOV ESP,EBP                         ; 00548166
    POP EBP                             ; 00548168
    POP EDI                             ; 00548169
    POP ESI                             ; 0054816a
    POP EBX                             ; 0054816b
    RET                                 ; 0054816c
    CMP EBX,0x3e7                       ; 0054816d
        ;   Label: LAB_0054816d
    JG 0x00548120                       ; 00548173
        ;   XREF to: 00548120 (CONDITIONAL_JUMP)  ; LAB_00548120
    FLD float ptr [0x0063ea38]          ; 00548175 | FLOAT_0063ea38
    FLD float ptr [0x03277d48]          ; 0054817b | g_CDemonRaytraceInstance.adjusted_size.x
    FMUL ST1                            ; 00548181
    FLD float ptr [0x03277d4c]          ; 00548183 | g_CDemonRaytraceInstance.adjusted_size.y
    FMUL ST2                            ; 00548189
    FLD float ptr [0x03277d50]          ; 0054818b | g_CDemonRaytraceInstance.adjusted_size.z
    FMULP ST3                           ; 00548191
    FLD float ptr [0x03277d28]          ; 00548193 | g_CDemonRaytraceInstance.bbox_min.y
    LEA EDI,[ESP + 0x24]                ; 00548199
    MOV EAX,dword ptr [EAX + 0x30]      ; 0054819d
    LEA ESI,[ESP + 0x18]                ; 005481a0
    MOV dword ptr [ESP + 0x1c],EAX      ; 005481a4
    FLD double ptr [0x0063ea40]         ; 005481a8 | DOUBLE_0063ea40
    FXCH                                ; 005481ae
    FMUL ST1                            ; 005481b0
    MOVSD ES:EDI,ESI                    ; 005481b2
    MOVSD ES:EDI,ESI                    ; 005481b3
    MOVSD ES:EDI,ESI                    ; 005481b4
    MOV EAX,dword ptr [ESP + 0x24]      ; 005481b5
    MOV dword ptr [ESP + 0x5c],EAX      ; 005481b9
    FXCH ST3                            ; 005481bd
    FSTP float ptr [ESP + 0x30]         ; 005481bf
    FILD dword ptr [ESP + 0x5c]         ; 005481c3
    MOV EAX,dword ptr [ESP + 0x28]      ; 005481c7
    FMUL float ptr [ESP + 0x30]         ; 005481cb
    MOV dword ptr [ESP + 0x5c],EAX      ; 005481cf
    FXCH ST2                            ; 005481d3
    FSTP float ptr [ESP + 0x34]         ; 005481d5
    FILD dword ptr [ESP + 0x5c]         ; 005481d9
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005481dd
    FMUL float ptr [ESP + 0x34]         ; 005481e1
    MOV dword ptr [ESP + 0x5c],EAX      ; 005481e5
    FXCH ST4                            ; 005481e9
    FSTP float ptr [ESP + 0x38]         ; 005481eb
    FILD dword ptr [ESP + 0x5c]         ; 005481ef
    FMUL float ptr [ESP + 0x38]         ; 005481f3
    MOV EDX,dword ptr [0x006703ec]      ; 005481f7 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FXCH ST2                            ; 005481fd
    CALL crt_math.c_round_FUN_005fe6b0  ; 005481ff
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP]               ; 00548204
    MOV EAX,ESP                         ; 00548207
    FXCH ST2                            ; 00548209
    FADDP ST3,ST0                       ; 0054820b
    PUSH EAX                            ; 0054820d
    CALL crt_math.c_round_FUN_005fe6b0  ; 0054820e
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 00548213
    FADDP                               ; 00548215
    FXCH                                ; 00548217
    FISTP dword ptr [ESP + 0xc]         ; 00548219
    CALL crt_math.c_round_FUN_005fe6b0  ; 0054821d
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x8]         ; 00548222
    MOV EAX,dword ptr [EDX]             ; 00548226 | g_CDemonRendererInstance
    PUSH EAX                            ; 00548228
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00548229
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0054822e
    MOV EAX,dword ptr [ESP]             ; 00548231
    MOV dword ptr [ESP + 0x5c],EAX      ; 00548234
    MOV EDX,dword ptr [0x006703ec]      ; 00548238 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FILD dword ptr [ESP + 0x5c]         ; 0054823e
    MOV EAX,ESP                         ; 00548242
    FLD ST0                             ; 00548244
    FADD float ptr [ESP + 0x30]         ; 00548246
    PUSH EAX                            ; 0054824a
    FSTP ST1                            ; 0054824b
    CALL crt_math.c_round_FUN_005fe6b0  ; 0054824d
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x4]         ; 00548252
    MOV EAX,dword ptr [EDX]             ; 00548256 | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 00548258
    PUSH EAX                            ; 0054825b
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0054825c
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00548261
    MOV EAX,dword ptr [ESP + 0x8]       ; 00548264
    MOV dword ptr [ESP + 0x5c],EAX      ; 00548268
    MOV EDX,dword ptr [0x006703ec]      ; 0054826c | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FILD dword ptr [ESP + 0x5c]         ; 00548272
    MOV EAX,ESP                         ; 00548276
    FLD ST0                             ; 00548278
    FADD float ptr [ESP + 0x38]         ; 0054827a
    PUSH EAX                            ; 0054827e
    FSTP ST1                            ; 0054827f
    CALL crt_math.c_round_FUN_005fe6b0  ; 00548281
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0xc]         ; 00548286
    MOV EAX,dword ptr [EDX]             ; 0054828a | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 0054828c
    PUSH EAX                            ; 0054828f
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00548290
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00548295
    MOV EAX,dword ptr [ESP]             ; 00548298
    MOV dword ptr [ESP + 0x5c],EAX      ; 0054829b
    MOV EDX,ESP                         ; 0054829f
    FILD dword ptr [ESP + 0x5c]         ; 005482a1
    FLD ST0                             ; 005482a5
    FSUB float ptr [ESP + 0x30]         ; 005482a7
    MOV EAX,[0x006703ec]                ; 005482ab | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FSTP ST1                            ; 005482b0
    CALL crt_math.c_round_FUN_005fe6b0  ; 005482b2
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP]               ; 005482b7
    MOV EAX,dword ptr [EAX]             ; 005482ba | g_CDemonRendererInstance
    PUSH EDX                            ; 005482bc
    ADD EAX,0x90                        ; 005482bd
    PUSH EAX                            ; 005482c2
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 005482c3
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005482c8
    MOV EAX,[0x006703ec]                ; 005482cb | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV EDX,dword ptr [EAX]             ; 005482d0 | g_CDemonRendererInstance
    MOV ECX,dword ptr [ESP + 0x50]      ; 005482d2
    MOV dword ptr [EDX + 0x20],ECX      ; 005482d6
    MOV EDX,dword ptr [EAX]             ; 005482d9 | g_CDemonRendererInstance
    MOV ECX,dword ptr [ESP + 0x48]      ; 005482db
    MOV dword ptr [EDX + 0x24],ECX      ; 005482df
    MOV EDX,dword ptr [EAX]             ; 005482e2 | g_CDemonRendererInstance
    MOV ECX,dword ptr [ESP + 0x4c]      ; 005482e4
    MOV dword ptr [EDX + 0x28],ECX      ; 005482e8
    MOV EDX,dword ptr [EAX]             ; 005482eb | g_CDemonRendererInstance
    MOV ECX,dword ptr [ESP + 0x54]      ; 005482ed
    MOV dword ptr [EDX + 0x2c],ECX      ; 005482f1
    MOV EDX,dword ptr [EAX]             ; 005482f4 | g_CDemonRendererInstance
    MOV ECX,dword ptr [ESP + 0x50]      ; 005482f6
    MOV dword ptr [EDX + 0x50],ECX      ; 005482fa
    MOV EDX,dword ptr [EAX]             ; 005482fd | g_CDemonRendererInstance
    MOV ECX,dword ptr [ESP + 0x48]      ; 005482ff
    MOV dword ptr [EDX + 0x54],ECX      ; 00548303
    MOV EDX,dword ptr [EAX]             ; 00548306 | g_CDemonRendererInstance
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00548308
    MOV dword ptr [EDX + 0x58],ECX      ; 0054830c
    MOV EDX,dword ptr [EAX]             ; 0054830f | g_CDemonRendererInstance
    MOV ECX,dword ptr [ESP + 0x54]      ; 00548311
    MOV dword ptr [EDX + 0x5c],ECX      ; 00548315
    MOV EDX,dword ptr [EAX]             ; 00548318 | g_CDemonRendererInstance
    MOV ECX,dword ptr [ESP + 0x50]      ; 0054831a
    MOV dword ptr [EDX + 0x80],ECX      ; 0054831e
    MOV EDX,dword ptr [EAX]             ; 00548324 | g_CDemonRendererInstance
    MOV ECX,dword ptr [ESP + 0x48]      ; 00548326
    MOV dword ptr [EDX + 0x84],ECX      ; 0054832a
    MOV EDX,dword ptr [EAX]             ; 00548330 | g_CDemonRendererInstance
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00548332
    MOV dword ptr [EDX + 0x88],ECX      ; 00548336
    MOV EDX,dword ptr [EAX]             ; 0054833c | g_CDemonRendererInstance
    MOV ECX,dword ptr [ESP + 0x54]      ; 0054833e
    MOV dword ptr [EDX + 0x8c],ECX      ; 00548342
    MOV EDX,dword ptr [EAX]             ; 00548348 | g_CDemonRendererInstance
    MOV ECX,dword ptr [ESP + 0x50]      ; 0054834a
    MOV dword ptr [EDX + 0xb0],ECX      ; 0054834e
    MOV EDX,dword ptr [EAX]             ; 00548354 | g_CDemonRendererInstance
    MOV ECX,dword ptr [ESP + 0x48]      ; 00548356
    MOV dword ptr [EDX + 0xb4],ECX      ; 0054835a
    MOV EDX,dword ptr [EAX]             ; 00548360 | g_CDemonRendererInstance
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00548362
    MOV dword ptr [EDX + 0xb8],ECX      ; 00548366
    PUSH 0x30d4fd0                      ; 0054836c | SMRGLPrimitiveQuad_030d4fd0
    MOV EDX,dword ptr [EAX]             ; 00548371 | g_CDemonRendererInstance
    MOV ECX,dword ptr [ESP + 0x58]      ; 00548373
    PUSH EAX                            ; 00548377 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0xbc],ECX      ; 00548378
    CALL engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0 ; 0054837e
        ;   XREF to: 0048bba0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00548383
    JMP 0x00548120                      ; 00548386
        ;   XREF to: 00548120 (UNCONDITIONAL_JUMP)  ; LAB_00548120

