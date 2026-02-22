; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_curtain_cpp_CCurtain_renderMesh_FUN_0044b060(CCurtain *this_ptr)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
; Local Variables:
; CBoundingBox3D   Stack[-0x3c]:24  local_3c
; CBoundingBox3D   Stack[-0x24]:24  local_24
;
; XREF[1]:
;   core_curtain.cpp_CCurtain_renderOpaque_FUN_0044b340 at 0044b354
;
; Referenced Globals:
;   float FLOAT_0065c4c0 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonRenderer g_CDemonRendererInstance
;   int g_RelativeZ
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_box.cpp_CBoundingBox3D_render_FUN_004210b0
;   core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0
;   core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
;   core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0044b060
        ;   Label: core_curtain.cpp_CCurtain_renderMesh_FUN_0044b060
    PUSH EBP                            ; 0044b061
    SUB ESP,0x34                        ; 0044b062
    MOV ESI,dword ptr [ESP + 0x40]      ; 0044b065
    PUSH ESI                            ; 0044b069
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 0044b06a
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 0044b06f
    MOV EAX,ESP                         ; 0044b072
    PUSH EAX                            ; 0044b074
    MOV EDX,dword ptr [ESI + 0x154]     ; 0044b075
    PUSH ESI                            ; 0044b07b
    CALL dword ptr [EDX + 0x14]         ; 0044b07c
    ADD ESP,0x8                         ; 0044b07f
    PUSH EAX                            ; 0044b082
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 0044b083
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 0044b088
    MOV dword ptr [ESP + 0x30],EAX      ; 0044b08b
    TEST EAX,EAX                        ; 0044b08f
    JZ 0x0044b320                       ; 0044b091
        ;   XREF to: 0044b320 (CONDITIONAL_JUMP)  ; LAB_0044b320
    MOV EDX,dword ptr [0x006703ec]      ; 0044b097 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 0044b09d | g_CDemonRendererInstance
    MOV dword ptr [ESI + 0x65b30],0x1   ; 0044b09e
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 0044b0a8
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0044b0ad
    TEST EAX,EAX                        ; 0044b0b0
    JZ 0x0044b0ca                       ; 0044b0b2
        ;   XREF to: 0044b0ca (CONDITIONAL_JUMP)  ; LAB_0044b0ca
    CMP dword ptr [ESI + 0x180],0x0     ; 0044b0b4
    JZ 0x0044b0ca                       ; 0044b0bb
        ;   XREF to: 0044b0ca (CONDITIONAL_JUMP)  ; LAB_0044b0ca
    CMP dword ptr [ESI + 0x65b34],0x0   ; 0044b0bd
    JZ 0x0044b217                       ; 0044b0c4
        ;   XREF to: 0044b217 (CONDITIONAL_JUMP)  ; LAB_0044b217
    PUSH EDI                            ; 0044b0ca
        ;   Label: LAB_0044b0ca
    PUSH EBX                            ; 0044b0cb
    MOV EDI,dword ptr [ESI + 0x17c]     ; 0044b0cc
    PUSH EDI                            ; 0044b0d2
    MOV EBP,dword ptr [0x006703ec]      ; 0044b0d3 | g_CDemonRendererPtr2
    PUSH EBP                            ; 0044b0d9 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60 ; 0044b0da
        ;   XREF to: 0048ca60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0044b0df
    LEA EAX,[ESI + 0x164]               ; 0044b0e2
    PUSH EAX                            ; 0044b0e8
    MOV EAX,[0x006703ec]                ; 0044b0e9 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 0044b0ee | g_CDemonRendererInstance
    XOR EDI,EDI                         ; 0044b0ef
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 0044b0f1
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    LEA EDX,[ESI + 0x208]               ; 0044b0f6
    ADD ESP,0x8                         ; 0044b0fc
    LEA EBP,[ESI + 0x1c734]             ; 0044b0ff
    MOV EBX,dword ptr [ESI + 0x204]     ; 0044b105
    MOV ECX,EBP                         ; 0044b10b
    TEST EBX,EBX                        ; 0044b10d
    JLE 0x0044b150                      ; 0044b10f
        ;   XREF to: 0044b150 (CONDITIONAL_JUMP)  ; LAB_0044b150
    MOV EBX,ECX                         ; 0044b111
        ;   Label: LAB_0044b111
    MOV EAX,EDX                         ; 0044b113
    FLD float ptr [EAX]                 ; 0044b115
    FMUL float ptr [0x0065c4c0]         ; 0044b117 | FLOAT_0065c4c0
    FISTP dword ptr [EBX]               ; 0044b11d
    FLD float ptr [EAX + 0x4]           ; 0044b11f
    FMUL float ptr [0x0065c4c0]         ; 0044b122 | FLOAT_0065c4c0
    FISTP dword ptr [EBX + 0x4]         ; 0044b128
    FLD float ptr [EAX + 0x8]           ; 0044b12b
    FMUL float ptr [0x0065c4c0]         ; 0044b12e | FLOAT_0065c4c0
    FISTP dword ptr [EBX + 0x8]         ; 0044b134
    INC EDI                             ; 0044b137
    ADD EDX,0x74                        ; 0044b138
    MOV EAX,dword ptr [ESI + 0x204]     ; 0044b13b
    ADD ECX,0xc                         ; 0044b141
    CMP EDI,EAX                         ; 0044b144
    JL 0x0044b111                       ; 0044b146
        ;   XREF to: 0044b111 (CONDITIONAL_JUMP)  ; LAB_0044b111
    LEA EAX,[EAX]                       ; 0044b148
    MOV EDX,EDX                         ; 0044b14e
    PUSH EBP                            ; 0044b150
        ;   Label: LAB_0044b150
    MOV EDX,dword ptr [ESI + 0x204]     ; 0044b151
    PUSH EDX                            ; 0044b157
    MOV ECX,dword ptr [0x006810c8]      ; 0044b158 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 0044b15e | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0 ; 0044b15f
        ;   XREF to: 0056e7c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0(CDemonSet * this_ptr, int vertex_count, int * input_vertices)
    ADD ESP,0xc                         ; 0044b164
    PUSH 0x1                            ; 0044b167
    MOV EBX,dword ptr [0x006703ec]      ; 0044b169 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EBX                            ; 0044b16f | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 0044b170
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    MOV EDI,dword ptr [0x02d052c0]      ; 0044b175 | g_RelativeZ
    ADD ESP,0x8                         ; 0044b17b
    XOR EDX,EDX                         ; 0044b17e
    TEST EDI,EDI                        ; 0044b180
    SETL AL                             ; 0044b182
    MOV DL,AL                           ; 0044b185
    TEST EDI,EDI                        ; 0044b187
    SETG AL                             ; 0044b189
    MOVZX EBP,AL                        ; 0044b18c
    CMP dword ptr [ESI + 0x180],0x0     ; 0044b18f
    JZ 0x0044b246                       ; 0044b196
        ;   XREF to: 0044b246 (CONDITIONAL_JUMP)  ; LAB_0044b246
    TEST EDX,EDX                        ; 0044b19c
    JZ 0x0044b272                       ; 0044b19e
        ;   XREF to: 0044b272 (CONDITIONAL_JUMP)  ; LAB_0044b272
    MOV EDX,dword ptr [ESI + 0x1c72c]   ; 0044b1a4
        ;   Label: LAB_0044b1a4
    IMUL EDX,dword ptr [ESI + 0x1c730]  ; 0044b1aa
    PUSH 0x0                            ; 0044b1b1
    PUSH 0x4                            ; 0044b1b3
    LEA EAX,[ESI + 0x1c734]             ; 0044b1b5
    PUSH EAX                            ; 0044b1bb
    LEA EBX,[ESI + 0x1f614]             ; 0044b1bc
    PUSH EBX                            ; 0044b1c2
    LEA EAX,[EDX + EDX*0x1]             ; 0044b1c3
    PUSH EAX                            ; 0044b1c6
    MOV EDI,dword ptr [ESI + 0x204]     ; 0044b1c7
    PUSH EDI                            ; 0044b1cd
    MOV EAX,[0x006810c8]                ; 0044b1ce | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 0044b1d3 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0 ; 0044b1d4
        ;   XREF to: 0056eac0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    MOV EDX,dword ptr [ESI + 0x17c]     ; 0044b1d9
    ADD ESP,0x1c                        ; 0044b1df
    CMP EDX,0xfde8                      ; 0044b1e2
    JG 0x0044b250                       ; 0044b1e8
        ;   XREF to: 0044b250 (CONDITIONAL_JUMP)  ; LAB_0044b250
    XOR EDI,EDI                         ; 0044b1ea
    MOV EAX,dword ptr [ESI + 0x1c730]   ; 0044b1ec
        ;   Label: LAB_0044b1ec
    MOV EDX,dword ptr [ESI + 0x1c72c]   ; 0044b1f2
    IMUL EDX,EAX                        ; 0044b1f8
    ADD EDX,EDX                         ; 0044b1fb
    CMP EDI,EDX                         ; 0044b1fd
    JGE 0x0044b272                      ; 0044b1ff
        ;   XREF to: 0044b272 (CONDITIONAL_JUMP)  ; LAB_0044b272
    PUSH EBX                            ; 0044b201
    MOV EDX,dword ptr [0x006703ec]      ; 0044b202 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 0044b208 | g_CDemonRendererInstance
    INC EDI                             ; 0044b209
    CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0 ; 0044b20a
        ;   XREF to: 0048bdc0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    ADD EBX,0x48                        ; 0044b20f
    ADD ESP,0x8                         ; 0044b212
    JMP 0x0044b1ec                      ; 0044b215
        ;   XREF to: 0044b1ec (UNCONDITIONAL_JUMP)  ; LAB_0044b1ec
    LEA EAX,[ESP + 0x18]                ; 0044b217
        ;   Label: LAB_0044b217
    PUSH EAX                            ; 0044b21b
    MOV EDX,dword ptr [ESI + 0x154]     ; 0044b21c
    PUSH ESI                            ; 0044b222
    CALL dword ptr [EDX + 0x14]         ; 0044b223
    ADD ESP,0x8                         ; 0044b226
    PUSH EAX                            ; 0044b229
    CALL core_box.cpp_CBoundingBox3D_render_FUN_004210b0 ; 0044b22a
        ;   XREF to: 004210b0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_render_FUN_004210b0(CBoundingBox3D * this_ptr, int param1, int param2, int param3)
    ADD ESP,0x4                         ; 0044b22f
    PUSH ESI                            ; 0044b232
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 0044b233
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    MOV EAX,0x1                         ; 0044b238
    ADD ESP,0x4                         ; 0044b23d
    ADD ESP,0x34                        ; 0044b240
    POP EBP                             ; 0044b243
    POP ESI                             ; 0044b244
    RET                                 ; 0044b245
    MOV EBP,0x1                         ; 0044b246
        ;   Label: LAB_0044b246
    JMP 0x0044b1a4                      ; 0044b24b
        ;   XREF to: 0044b1a4 (UNCONDITIONAL_JUMP)  ; LAB_0044b1a4
    MOV EDX,dword ptr [ESI + 0x1c72c]   ; 0044b250
        ;   Label: LAB_0044b250
    IMUL EDX,dword ptr [ESI + 0x1c730]  ; 0044b256
    PUSH -0x1                           ; 0044b25d
    ADD EDX,EDX                         ; 0044b25f
    PUSH EDX                            ; 0044b261
    PUSH EBX                            ; 0044b262
    MOV EBX,dword ptr [0x006810c8]      ; 0044b263 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EBX                            ; 0044b269 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770 ; 0044b26a
        ;   XREF to: 00570770 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
    ADD ESP,0x10                        ; 0044b26f
    TEST EBP,EBP                        ; 0044b272
        ;   Label: LAB_0044b272
    JZ 0x0044b30d                       ; 0044b274
        ;   XREF to: 0044b30d (CONDITIONAL_JUMP)  ; LAB_0044b30d
    MOV EDX,dword ptr [ESI + 0x1c72c]   ; 0044b27a
    IMUL EDX,dword ptr [ESI + 0x1c730]  ; 0044b280
    PUSH 0x0                            ; 0044b287
    PUSH 0x4                            ; 0044b289
    LEA EAX,[ESI + 0x1c734]             ; 0044b28b
    PUSH EAX                            ; 0044b291
    LEA EDI,[ESI + 0x42894]             ; 0044b292
    PUSH EDI                            ; 0044b298
    ADD EDX,EDX                         ; 0044b299
    PUSH EDX                            ; 0044b29b
    MOV EBX,dword ptr [ESI + 0x204]     ; 0044b29c
    PUSH EBX                            ; 0044b2a2
    MOV EBP,dword ptr [0x006810c8]      ; 0044b2a3 | g_CDemonSetPtr
    PUSH EBP                            ; 0044b2a9 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0 ; 0044b2aa
        ;   XREF to: 0056eac0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    MOV EAX,dword ptr [ESI + 0x17c]     ; 0044b2af
    ADD ESP,0x1c                        ; 0044b2b5
    CMP EAX,0xfde8                      ; 0044b2b8
    JG 0x0044b2eb                       ; 0044b2bd
        ;   XREF to: 0044b2eb (CONDITIONAL_JUMP)  ; LAB_0044b2eb
    XOR EBX,EBX                         ; 0044b2bf
    MOV EBP,dword ptr [ESI + 0x1c730]   ; 0044b2c1
        ;   Label: LAB_0044b2c1
    MOV EDX,dword ptr [ESI + 0x1c72c]   ; 0044b2c7
    IMUL EDX,EBP                        ; 0044b2cd
    ADD EDX,EDX                         ; 0044b2d0
    CMP EBX,EDX                         ; 0044b2d2
    JGE 0x0044b30d                      ; 0044b2d4
        ;   XREF to: 0044b30d (CONDITIONAL_JUMP)  ; LAB_0044b30d
    PUSH EDI                            ; 0044b2d6
    MOV EAX,[0x006703ec]                ; 0044b2d7 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 0044b2dc | g_CDemonRendererInstance
    INC EBX                             ; 0044b2dd
    CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0 ; 0044b2de
        ;   XREF to: 0048bdc0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
    ADD EDI,0x48                        ; 0044b2e3
    ADD ESP,0x8                         ; 0044b2e6
    JMP 0x0044b2c1                      ; 0044b2e9
        ;   XREF to: 0044b2c1 (UNCONDITIONAL_JUMP)  ; LAB_0044b2c1
    MOV EDX,dword ptr [ESI + 0x1c72c]   ; 0044b2eb
        ;   Label: LAB_0044b2eb
    IMUL EDX,dword ptr [ESI + 0x1c730]  ; 0044b2f1
    PUSH -0x1                           ; 0044b2f8
    ADD EDX,EDX                         ; 0044b2fa
    PUSH EDX                            ; 0044b2fc
    PUSH EDI                            ; 0044b2fd
    MOV EBX,dword ptr [0x006810c8]      ; 0044b2fe | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EBX                            ; 0044b304 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770 ; 0044b305
        ;   XREF to: 00570770 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
    ADD ESP,0x10                        ; 0044b30a
    PUSH 0x0                            ; 0044b30d
        ;   Label: LAB_0044b30d
    MOV EDX,dword ptr [0x006703ec]      ; 0044b30f | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 0044b315 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00 ; 0044b316
        ;   XREF to: 0048ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0044b31b
    POP EBX                             ; 0044b31e
    POP EDI                             ; 0044b31f
    PUSH ESI                            ; 0044b320
        ;   Label: LAB_0044b320
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 0044b321
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0044b326
    MOV EAX,dword ptr [ESP + 0x30]      ; 0044b329
    ADD ESP,0x34                        ; 0044b32d
    POP EBP                             ; 0044b330
    POP ESI                             ; 0044b331
    RET                                 ; 0044b332

