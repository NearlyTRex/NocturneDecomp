; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_level_cpp_CLevelLoader_update_FUN_00504160(CLevelLoader *this_ptr,char *text,int clear_screen)
;
; Parameters:
; CLevelLoader *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   clear_screen
; Local Variables:
; SMRGLPrimitiveQuadIndex Stack[-0x88]:40  local_88
; CVector3i        Stack[-0x60]:12  local_60
; CVector3i        Stack[-0x54]:12  local_54
; CVector3i        Stack[-0x48]:12  local_48
; CVector3i        Stack[-0x3c]:12  local_3c
; float            Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; CVector3f        Stack[-0x24]:12  local_24
; float            Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
; CBitFont *       Stack[-0x10]:4  local_10
;
; XREF[5]:
;   core_mission.cpp_CDemonMission_load_FUN_00522d90 at 00522dc7
;   core_mission.cpp_CDemonMission_prepareAllActors_FUN_00523cf0 at 00523d21
;   core_mission.cpp_CDemonMission_startMission_FUN_00524760 at 00524801
;   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 at 0056aa32
;   core_set.cpp_CDemonSet_load_FUN_00569410 at 00569d63
;
; Referenced Globals:
;   float FLOAT_006608cc = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   SMRGLTextureBasic g_LoadingMoonGlowTexture
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_LightBufferPool[13][93688]
;   CBitFont* g_ThemeFont
;   CDemonRenderer g_CDemonRendererInstance
;   CKeyFramedModel g_LoadingMoonModel
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.rendering_mode
;   undefined4 g_CDemonSetInstance.light_direction.x
;   undefined4 g_CDemonSetInstance.light_direction.y
;   undefined4 g_CDemonSetInstance.light_direction.z
;   ... and 2 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
;   core_set.cpp_CDemonSet_setFlatColor_FUN_00570ca0
;   engine_2d.c_fillRectColor_FUN_00403170
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_popViewport_FUN_0048c8c0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0048ae10
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
;   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
;   engine_font.cpp_CBitFont_drawText_FUN_004cda80
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
;   engine_matrix.c_interpolatedCos_FUN_0050c600
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00504160
        ;   Label: core_level.cpp_CLevelLoader_update_FUN_00504160
    PUSH EDI                            ; 00504161
    PUSH EBP                            ; 00504162
    SUB ESP,0x7c                        ; 00504163
    MOV ESI,dword ptr [ESP + 0x8c]      ; 00504166
    CMP dword ptr [ESI + 0xc],0x0       ; 0050416d
    JZ 0x005046ee                       ; 00504171
        ;   XREF to: 005046ee (CONDITIONAL_JUMP)  ; LAB_005046ee
    CMP dword ptr [ESP + 0x94],0x0      ; 00504177
    JNZ 0x005046f5                      ; 0050417f
        ;   XREF to: 005046f5 (CONDITIONAL_JUMP)  ; LAB_005046f5
    CMP dword ptr [ESI + 0x110],0x0     ; 00504185
        ;   Label: LAB_00504185
    JZ 0x005041b9                       ; 0050418c
        ;   XREF to: 005041b9 (CONDITIONAL_JUMP)  ; LAB_005041b9
    MOV EDI,dword ptr [ESI + 0x120]     ; 0050418e
    PUSH EDI                            ; 00504194
    MOV EBP,dword ptr [ESI + 0x11c]     ; 00504195
    PUSH EBP                            ; 0050419b
    MOV EAX,dword ptr [ESI + 0x118]     ; 0050419c
    PUSH EAX                            ; 005041a2
    MOV EDX,dword ptr [ESI + 0x114]     ; 005041a3
    PUSH EDX                            ; 005041a9
    MOV ECX,dword ptr [0x006703ec]      ; 005041aa | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 005041b0 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890 ; 005041b1
        ;   XREF to: 0048c890 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890(CDemonRenderer * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 005041b6
    PUSH EBX                            ; 005041b9
        ;   Label: LAB_005041b9
    PUSH 0x3f87558                      ; 005041ba | g_ZeroVector
    MOV EBX,dword ptr [0x006703ec]      ; 005041bf | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EBX                            ; 005041c5 | g_CDemonRendererInstance
    MOV EDI,0x42600000                  ; 005041c6
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150 ; 005041cb
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 005041d0
    MOV EBP,dword ptr [ESI + 0x110]     ; 005041d3
    MOV dword ptr [ESP + 0x74],EDI      ; 005041d9
    TEST EBP,EBP                        ; 005041dd
    JZ 0x005041e9                       ; 005041df
        ;   XREF to: 005041e9 (CONDITIONAL_JUMP)  ; LAB_005041e9
    MOV dword ptr [ESP + 0x74],0x42a80000 ; 005041e1
    MOV EDX,dword ptr [0x006703ec]      ; 005041e9 | g_CDemonRendererInstance | g_CDemonRendererPtr2
        ;   Label: LAB_005041e9
    PUSH dword ptr [ESP + 0x74]         ; 005041ef
    PUSH EDX                            ; 005041f3 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650 ; 005041f4
        ;   XREF to: 0048c650 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(CDemonRenderer * this_ptr, float field_of_view)
    ADD ESP,0x8                         ; 005041f9
    PUSH 0x3f87558                      ; 005041fc | g_ZeroVector
    MOV ECX,dword ptr [0x006703ec]      ; 00504201 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 00504207 | g_CDemonRendererInstance
    MOV EBP,0x42100000                  ; 00504208
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0 ; 0050420d
        ;   XREF to: 0048c1d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00504212
    LEA EAX,[ESP + 0x68]                ; 00504215
    XOR EBX,EBX                         ; 00504219
    PUSH EAX                            ; 0050421b
    MOV EAX,[0x006703ec]                ; 0050421c | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x6c],EBX      ; 00504221
    PUSH EAX                            ; 00504225 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x74],EBX      ; 00504226
    MOV dword ptr [ESP + 0x78],EBP      ; 0050422a
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 0050422e
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    MOV EAX,[0x006810c8]                ; 00504233 | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x15ae70],0x1  ; 00504238 | g_CDemonSetInstance.rendering_mode
    MOV EDX,dword ptr [ESI]             ; 00504242
    SHL EDX,0xf                         ; 00504244
    MOV ECX,dword ptr [ESI + 0x4]       ; 00504247
    MOV EAX,EDX                         ; 0050424a
    SAR EDX,0x1f                        ; 0050424c
    IDIV ECX                            ; 0050424f
    MOV EBX,0x8000                      ; 00504251
    ADD ESP,0x8                         ; 00504256
    SUB EBX,EAX                         ; 00504259
    PUSH EBX                            ; 0050425b
    CALL engine_matrix.c_interpolatedSin_FUN_0050c5c0 ; 0050425c
        ;   XREF to: 0050c5c0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedSin_FUN_0050c5c0(int angle)
    ADD ESP,0x4                         ; 00504261
    MOV EDX,EAX                         ; 00504264
    MOV EAX,0x9088                      ; 00504266
    IMUL EDX                            ; 0050426b
    SHRD EAX,EDX,0x10                   ; 0050426d
    MOV EDX,EAX                         ; 00504271
    MOV EAX,[0x006810c8]                ; 00504273 | g_CDemonSetInstance | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x15ae78],0xffff6f78 ; 00504278 | g_CDemonSetInstance.light_direction.y
    PUSH EBX                            ; 00504282
    MOV dword ptr [EAX + 0x15ae74],EDX  ; 00504283 | g_CDemonSetInstance.light_direction.x
    CALL engine_matrix.c_interpolatedCos_FUN_0050c600 ; 00504289
        ;   XREF to: 0050c600 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedCos_FUN_0050c600(int angle)
    ADD ESP,0x4                         ; 0050428e
    MOV EDX,EAX                         ; 00504291
    MOV EAX,0x9088                      ; 00504293
    IMUL EDX                            ; 00504298
    SHRD EAX,EDX,0x10                   ; 0050429a
    MOV EDX,EAX                         ; 0050429e
    MOV EAX,[0x006810c8]                ; 005042a0 | g_CDemonSetInstance | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x15ae80],0x280 ; 005042a5 | g_CDemonSetInstance.ambient_base_quick
    MOV dword ptr [EAX + 0x15ae7c],EDX  ; 005042af | g_CDemonSetInstance.light_direction.z
    MOV EDX,dword ptr [ESI + 0x12c]     ; 005042b5
    SHL EDX,0x8                         ; 005042bb
    PUSH EDX                            ; 005042be
    MOV EDX,dword ptr [ESI + 0x128]     ; 005042bf
    SHL EDX,0x8                         ; 005042c5
    PUSH EDX                            ; 005042c8
    MOV EDX,dword ptr [ESI + 0x124]     ; 005042c9
    SHL EDX,0x8                         ; 005042cf
    PUSH EDX                            ; 005042d2
    PUSH EAX                            ; 005042d3 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setFlatColor_FUN_00570ca0 ; 005042d4
        ;   XREF to: 00570ca0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setFlatColor_FUN_00570ca0(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 005042d9
    MOV EBX,0x40e80000                  ; 005042dc
    LEA EAX,[ESP + 0x5c]                ; 005042e1
    MOV EDX,dword ptr [0x006703ec]      ; 005042e5 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    XOR EBP,EBP                         ; 005042eb
    MOV dword ptr [ESP + 0x5c],EBX      ; 005042ed
    MOV dword ptr [ESP + 0x60],EBX      ; 005042f1
    LEA EBX,[ESP + 0x2c]                ; 005042f5
    MOV dword ptr [ESP + 0x64],EBP      ; 005042f9
    FLD float ptr [EAX]                 ; 005042fd
    FMUL float ptr [0x006608cc]         ; 005042ff | FLOAT_006608cc
    FISTP dword ptr [EBX]               ; 00504305
    FLD float ptr [EAX + 0x4]           ; 00504307
    FMUL float ptr [0x006608cc]         ; 0050430a | FLOAT_006608cc
    FISTP dword ptr [EBX + 0x4]         ; 00504310
    FLD float ptr [EAX + 0x8]           ; 00504313
    FMUL float ptr [0x006608cc]         ; 00504316 | FLOAT_006608cc
    FISTP dword ptr [EBX + 0x8]         ; 0050431c
    LEA EAX,[ESP + 0x2c]                ; 0050431f
    PUSH EAX                            ; 00504323
    MOV EAX,dword ptr [EDX]             ; 00504324 | g_CDemonRendererInstance
    PUSH EAX                            ; 00504326
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 00504327
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0050432c
    MOV AH,byte ptr [ESP + 0x5f]        ; 0050432f
    XOR AH,0x80                         ; 00504333
    LEA EBX,[ESP + 0x38]                ; 00504336
    MOV byte ptr [ESP + 0x5f],AH        ; 0050433a
    LEA EAX,[ESP + 0x5c]                ; 0050433e
    MOV EDX,dword ptr [0x006703ec]      ; 00504342 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 00504348
    FMUL float ptr [0x006608cc]         ; 0050434a | FLOAT_006608cc
    FISTP dword ptr [EBX]               ; 00504350
    FLD float ptr [EAX + 0x4]           ; 00504352
    FMUL float ptr [0x006608cc]         ; 00504355 | FLOAT_006608cc
    FISTP dword ptr [EBX + 0x4]         ; 0050435b
    FLD float ptr [EAX + 0x8]           ; 0050435e
    FMUL float ptr [0x006608cc]         ; 00504361 | FLOAT_006608cc
    FISTP dword ptr [EBX + 0x8]         ; 00504367
    LEA EAX,[ESP + 0x38]                ; 0050436a
    PUSH EAX                            ; 0050436e
    MOV EAX,dword ptr [EDX]             ; 0050436f | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 00504371
    PUSH EAX                            ; 00504374
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 00504375
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0050437a
    MOV DL,byte ptr [ESP + 0x63]        ; 0050437d
    LEA EBX,[ESP + 0x50]                ; 00504381
    XOR DL,0x80                         ; 00504385
    LEA EAX,[ESP + 0x5c]                ; 00504388
    MOV byte ptr [ESP + 0x63],DL        ; 0050438c
    MOV EDX,dword ptr [0x006703ec]      ; 00504390 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 00504396
    FMUL float ptr [0x006608cc]         ; 00504398 | FLOAT_006608cc
    FISTP dword ptr [EBX]               ; 0050439e
    FLD float ptr [EAX + 0x4]           ; 005043a0
    FMUL float ptr [0x006608cc]         ; 005043a3 | FLOAT_006608cc
    FISTP dword ptr [EBX + 0x4]         ; 005043a9
    FLD float ptr [EAX + 0x8]           ; 005043ac
    FMUL float ptr [0x006608cc]         ; 005043af | FLOAT_006608cc
    FISTP dword ptr [EBX + 0x8]         ; 005043b5
    LEA EAX,[ESP + 0x50]                ; 005043b8
    PUSH EAX                            ; 005043bc
    MOV EAX,dword ptr [EDX]             ; 005043bd | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 005043bf
    PUSH EAX                            ; 005043c2
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 005043c3
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005043c8
    MOV DH,byte ptr [ESP + 0x5f]        ; 005043cb
    LEA EBX,[ESP + 0x44]                ; 005043cf
    XOR DH,0x80                         ; 005043d3
    LEA EAX,[ESP + 0x5c]                ; 005043d6
    MOV byte ptr [ESP + 0x5f],DH        ; 005043da
    MOV EDX,dword ptr [0x006703ec]      ; 005043de | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 005043e4
    FMUL float ptr [0x006608cc]         ; 005043e6 | FLOAT_006608cc
    FISTP dword ptr [EBX]               ; 005043ec
    FLD float ptr [EAX + 0x4]           ; 005043ee
    FMUL float ptr [0x006608cc]         ; 005043f1 | FLOAT_006608cc
    FISTP dword ptr [EBX + 0x4]         ; 005043f7
    FLD float ptr [EAX + 0x8]           ; 005043fa
    FMUL float ptr [0x006608cc]         ; 005043fd | FLOAT_006608cc
    FISTP dword ptr [EBX + 0x8]         ; 00504403
    LEA EAX,[ESP + 0x44]                ; 00504406
    PUSH EAX                            ; 0050440a
    MOV EAX,dword ptr [EDX]             ; 0050440b | g_CDemonRendererInstance
    ADD EAX,0x90                        ; 0050440d
    PUSH EAX                            ; 00504412
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 00504413
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 00504418 | g_CDemonRendererPtr2
    MOV EDX,dword ptr [EAX]             ; 0050441d | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x18],0x1000000 ; 0050441f | g_LightBufferPool[13][93688]
    MOV EDX,dword ptr [EAX]             ; 00504426 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x1c],EBP      ; 00504428
    MOV EDX,dword ptr [EAX]             ; 0050442b | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x48],EBP      ; 0050442d
    MOV EDX,dword ptr [EAX]             ; 00504430 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x4c],EBP      ; 00504432
    MOV EDX,dword ptr [EAX]             ; 00504435 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x78],EBP      ; 00504437
    MOV EDX,dword ptr [EAX]             ; 0050443a | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x7c],0x1000000 ; 0050443c | g_LightBufferPool[13][93688]
    MOV EDX,dword ptr [EAX]             ; 00504443 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0xa8],0x1000000 ; 00504445 | g_LightBufferPool[13][93688]
    MOV EAX,dword ptr [EAX]             ; 0050444f | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0xac],0x1000000 ; 00504451 | g_LightBufferPool[13][93688]
    MOV EDX,dword ptr [ESI]             ; 0050445b
    MOV EAX,EDX                         ; 0050445d
    SHL EAX,0x8                         ; 0050445f
    ADD EAX,EDX                         ; 00504462
    MOV EDX,EAX                         ; 00504464
    SHL EAX,0x8                         ; 00504466
    SUB EAX,EDX                         ; 00504469
    MOV EDX,EAX                         ; 0050446b
    MOV ECX,dword ptr [ESI + 0x4]       ; 0050446d
    SAR EDX,0x1f                        ; 00504470
    IDIV ECX                            ; 00504473
    ADD ESP,0x8                         ; 00504475
    MOV EDX,EAX                         ; 00504478
    CMP EAX,0xffff                      ; 0050447a
    JG 0x00504716                       ; 0050447f
        ;   XREF to: 00504716 (CONDITIONAL_JUMP)  ; LAB_00504716
    MOV EAX,[0x006703ec]                ; 00504485 | g_CDemonRendererPtr2
        ;   Label: LAB_00504485
    MOV ECX,dword ptr [EAX]             ; 0050448a | g_CDemonRendererInstance
    MOV dword ptr [ECX + 0x2c],0x0      ; 0050448c
    MOV ECX,dword ptr [EAX]             ; 00504493 | g_CDemonRendererInstance
    MOV dword ptr [ECX + 0x5c],EDX      ; 00504495
    MOV EDX,dword ptr [EAX]             ; 00504498 | g_CDemonRendererInstance
    MOV dword ptr [EDX + 0x8c],0x0      ; 0050449a
    MOV EAX,dword ptr [EAX]             ; 005044a4 | g_CDemonRendererInstance
    MOV dword ptr [EAX + 0xbc],0x0      ; 005044a6
    XOR EAX,EAX                         ; 005044b0
    MOV EDX,dword ptr [0x006703ec]      ; 005044b2 | g_CDemonRendererInstance | g_CDemonRendererPtr2
        ;   Label: LAB_005044b2
    MOV EBX,dword ptr [ESI + 0x124]     ; 005044b8
    MOV ECX,dword ptr [EDX]             ; 005044be | g_CDemonRendererInstance
    SHL EBX,0x8                         ; 005044c0
    MOV dword ptr [ECX + EAX*0x1 + 0x20],EBX ; 005044c3
    MOV ECX,dword ptr [ESI + 0x128]     ; 005044c7
    MOV EBX,dword ptr [EDX]             ; 005044cd | g_CDemonRendererInstance
    SHL ECX,0x8                         ; 005044cf
    MOV dword ptr [EBX + EAX*0x1 + 0x24],ECX ; 005044d2
    ADD EAX,0x30                        ; 005044d6
    MOV EBX,dword ptr [ESI + 0x12c]     ; 005044d9
    MOV ECX,dword ptr [EDX]             ; 005044df | g_CDemonRendererInstance
    SHL EBX,0x8                         ; 005044e1
    MOV dword ptr [ECX + EAX*0x1 + -0x8],EBX ; 005044e4
    CMP EAX,0xc0                        ; 005044e8
    JNZ 0x005044b2                      ; 005044ed
        ;   XREF to: 005044b2 (CONDITIONAL_JUMP)  ; LAB_005044b2
    MOV EBX,0x4                         ; 005044ef
    XOR EDI,EDI                         ; 005044f4
    MOV EBP,0x2                         ; 005044f6
    MOV dword ptr [ESP + 0x18],EDI      ; 005044fb
    MOV dword ptr [ESP + 0x14],EDI      ; 005044ff
    MOV dword ptr [ESP + 0x10],EDI      ; 00504503
    MOV dword ptr [ESP + 0xc],EDI       ; 00504507
    MOV dword ptr [ESP + 0x1c],EDI      ; 0050450b
    MOV EDI,0x1                         ; 0050450f
    MOV EAX,0x3                         ; 00504514
    PUSH EDI                            ; 00504519
    MOV dword ptr [ESP + 0xc],EBX       ; 0050451a
    MOV dword ptr [ESP + 0x28],EBP      ; 0050451e
    PUSH EDX                            ; 00504522 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x30],EAX      ; 00504523
    MOV dword ptr [ESP + 0x28],EDI      ; 00504527
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 0050452b
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00504530
    PUSH 0x67cf84                       ; 00504533 | g_LoadingMoonGlowTexture
    MOV EDX,dword ptr [0x006703ec]      ; 00504538 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 0050453e | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 0050453f
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00504544
    PUSH 0x327                          ; 00504547
    LEA EAX,[ESP + 0x8]                 ; 0050454c
    PUSH EAX                            ; 00504550
    MOV ECX,dword ptr [0x006703ec]      ; 00504551 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 00504557 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0048ae10 ; 00504558
        ;   XREF to: 0048ae10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0048ae10(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 0050455d
    XOR EBX,EBX                         ; 00504560
    PUSH EBX                            ; 00504562
    MOV EBX,dword ptr [0x006703ec]      ; 00504563 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EBX                            ; 00504569 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 0050456a
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0050456f
    PUSH 0x205                          ; 00504572
    PUSH 0x0                            ; 00504577
    PUSH 0x0                            ; 00504579
    PUSH 0x2dcd980                      ; 0050457b | g_LoadingMoonModel
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850 ; 00504580
        ;   XREF to: 00477850 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850(CKeyFramedModel * this_ptr, int frame_index, CKeyFramedModelInstance * instance, int render_flags)
    MOV EDI,dword ptr [ESI + 0x110]     ; 00504585
    ADD ESP,0x10                        ; 0050458b
    TEST EDI,EDI                        ; 0050458e
    JZ 0x005045a1                       ; 00504590
        ;   XREF to: 005045a1 (CONDITIONAL_JUMP)  ; LAB_005045a1
    MOV EBP,dword ptr [0x006703ec]      ; 00504592 | g_CDemonRendererPtr2
    PUSH EBP                            ; 00504598 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_popViewport_FUN_0048c8c0 ; 00504599
        ;   XREF to: 0048c8c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_popViewport_FUN_0048c8c0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0050459e
    MOV EAX,[0x006810c8]                ; 005045a1 | g_CDemonSetPtr
        ;   Label: LAB_005045a1
    MOV dword ptr [EAX + 0x15ae70],0x0  ; 005045a6 | g_CDemonSetInstance.rendering_mode
    MOV EAX,[0x020a5720]                ; 005045b0 | g_ThemeFont
    MOV EDX,dword ptr [0x00679394]      ; 005045b5 | g_WindowWidth
    MOV dword ptr [ESP + 0x7c],EAX      ; 005045bb
    LEA EAX,[EDX*0x8 + 0x0]             ; 005045bf
    ADD EDX,EAX                         ; 005045c6
    SHL EDX,0x6                         ; 005045c8
    MOV ECX,0x280                       ; 005045cb
    MOV EAX,EDX                         ; 005045d0
    SAR EDX,0x1f                        ; 005045d2
    IDIV ECX                            ; 005045d5
    MOV EDX,dword ptr [0x00679398]      ; 005045d7 | g_WindowHeight
    MOV EDI,EAX                         ; 005045dd
    LEA EAX,[EDX*0x4 + 0x0]             ; 005045df
    SUB EAX,EDX                         ; 005045e6
    LEA EDX,[EAX*0x8 + 0x0]             ; 005045e8
    MOV ECX,0x1e0                       ; 005045ef
    MOV EAX,EDX                         ; 005045f4
    SAR EDX,0x1f                        ; 005045f6
    IDIV ECX                            ; 005045f9
    MOV EDX,dword ptr [0x00679394]      ; 005045fb | g_WindowWidth
    MOV ECX,0x280                       ; 00504601
    SHL EDX,0x5                         ; 00504606
    MOV EBX,EAX                         ; 00504609
    MOV EAX,EDX                         ; 0050460b
    SAR EDX,0x1f                        ; 0050460d
    IDIV ECX                            ; 00504610
    MOV EBP,EAX                         ; 00504612
    MOV EAX,[0x00679398]                ; 00504614 | g_WindowHeight
    SHL EAX,0x6                         ; 00504619
    MOV EDX,EAX                         ; 0050461c
    SHL EAX,0x3                         ; 0050461e
    SUB EAX,EDX                         ; 00504621
    MOV EDX,EAX                         ; 00504623
    MOV ECX,0x1e0                       ; 00504625
    SAR EDX,0x1f                        ; 0050462a
    IDIV ECX                            ; 0050462d
    MOV dword ptr [ESP + 0x78],EAX      ; 0050462f
    MOV EAX,dword ptr [ESI]             ; 00504633
    INC EAX                             ; 00504635
    MOV EDX,dword ptr [ESI + 0x4]       ; 00504636
    MOV dword ptr [ESI],EAX             ; 00504639
    CMP EAX,EDX                         ; 0050463b
    JLE 0x00504641                      ; 0050463d
        ;   XREF to: 00504641 (CONDITIONAL_JUMP)  ; LAB_00504641
    MOV dword ptr [ESI],EDX             ; 0050463f
    MOV ECX,dword ptr [ESI + 0x110]     ; 00504641
        ;   Label: LAB_00504641
    TEST ECX,ECX                        ; 00504647
    JNZ 0x005046e8                      ; 00504649
        ;   XREF to: 005046e8 (CONDITIONAL_JUMP)  ; LAB_005046e8
    MOV EAX,dword ptr [ESP + 0x78]      ; 0050464f
    ADD EAX,EBX                         ; 00504653
    PUSH ECX                            ; 00504655
    INC EAX                             ; 00504656
    PUSH EAX                            ; 00504657
    LEA EAX,[EDI + EBP*0x1 + 0x1]       ; 00504658
    PUSH EAX                            ; 0050465c
    MOV EAX,dword ptr [ESP + 0x84]      ; 0050465d
    DEC EAX                             ; 00504664
    PUSH EAX                            ; 00504665
    LEA EAX,[EBP + -0x1]                ; 00504666
    PUSH EAX                            ; 00504669
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 0050466a
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 0050466f
    MOV ESI,dword ptr [ESP + 0x94]      ; 00504672
    TEST ESI,ESI                        ; 00504679
    JZ 0x005046e8                       ; 0050467b
        ;   XREF to: 005046e8 (CONDITIONAL_JUMP)  ; LAB_005046e8
    MOV EDX,EDI                         ; 0050467d
    MOV EAX,EDI                         ; 0050467f
    SAR EDX,0x1f                        ; 00504681
    SUB EAX,EDX                         ; 00504684
    SAR EAX,0x1                         ; 00504686
    PUSH ESI                            ; 00504688
    ADD EBP,EAX                         ; 00504689
    MOV EAX,dword ptr [ESP + 0x80]      ; 0050468b
    PUSH EAX                            ; 00504692
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 00504693
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    MOV EDX,EAX                         ; 00504698
    SAR EDX,0x1f                        ; 0050469a
    SUB EAX,EDX                         ; 0050469d
    SAR EAX,0x1                         ; 0050469f
    MOV ECX,EBP                         ; 005046a1
    MOV EDX,EBX                         ; 005046a3
    SUB ECX,EAX                         ; 005046a5
    MOV EAX,EBX                         ; 005046a7
    SAR EDX,0x1f                        ; 005046a9
    SUB EAX,EDX                         ; 005046ac
    SAR EAX,0x1                         ; 005046ae
    ADD ESP,0x8                         ; 005046b0
    MOV EDX,dword ptr [ESP + 0x7c]      ; 005046b3
    MOV EBX,dword ptr [ESP + 0x78]      ; 005046b7
    MOV EDX,dword ptr [EDX + 0x316c]    ; 005046bb
    ADD EBX,EAX                         ; 005046c1
    MOV EAX,EDX                         ; 005046c3
    SAR EDX,0x1f                        ; 005046c5
    SUB EAX,EDX                         ; 005046c8
    SAR EAX,0x1                         ; 005046ca
    PUSH -0x1                           ; 005046cc
    PUSH 0xf8                           ; 005046ce
    SUB EBX,EAX                         ; 005046d3
    PUSH EBX                            ; 005046d5
    PUSH ECX                            ; 005046d6
    PUSH ESI                            ; 005046d7
    MOV ECX,dword ptr [ESP + 0x90]      ; 005046d8
    PUSH ECX                            ; 005046df
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 005046e0
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 005046e5
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 005046e8
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   Label: LAB_005046e8
    POP EBX                             ; 005046ed
    ADD ESP,0x7c                        ; 005046ee
        ;   Label: LAB_005046ee
    POP EBP                             ; 005046f1
    POP EDI                             ; 005046f2
    POP ESI                             ; 005046f3
    RET                                 ; 005046f4
    MOV EAX,[0x00679398]                ; 005046f5 | g_WindowHeight
        ;   Label: LAB_005046f5
    PUSH 0x0                            ; 005046fa
    DEC EAX                             ; 005046fc
    PUSH EAX                            ; 005046fd
    MOV EAX,[0x00679394]                ; 005046fe | g_WindowWidth
    DEC EAX                             ; 00504703
    PUSH EAX                            ; 00504704
    PUSH 0x0                            ; 00504705
    PUSH 0x0                            ; 00504707
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 00504709
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 0050470e
    JMP 0x00504185                      ; 00504711
        ;   XREF to: 00504185 (UNCONDITIONAL_JUMP)  ; LAB_00504185
    MOV EDX,0xffff                      ; 00504716
        ;   Label: LAB_00504716
    JMP 0x00504485                      ; 0050471b
        ;   XREF to: 00504485 (UNCONDITIONAL_JUMP)  ; LAB_00504485

