; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CShell_render_FUN_004c6200(CShell *this_ptr)
;
; Parameters:
; CShell *         Stack[0x4]:4   this_ptr
; Local Variables:
; CVector3i        Stack[-0x1c]:12  local_1c
;
; Referenced Globals:
;   float FLOAT_0065dca8 = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonCamera* g_CurrentSceneCamera
;   CDemonRenderer g_CDemonRendererInstance
;   CDemonSet g_CDemonSetInstance
;   UVector3 g_ZeroVector
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_0056d380
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_special.cpp_transformPoint_FUN_005b5a25
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6200
        ;   Label: core_fire.cpp_CShell_render_FUN_004c6200
    PUSH ESI                            ; 004c6201
    PUSH EDI                            ; 004c6202
    PUSH EBP                            ; 004c6203
    SUB ESP,0xc                         ; 004c6204
    MOV ESI,dword ptr [ESP + 0x20]      ; 004c6207
    FLD float ptr [ESI + 0x18]          ; 004c620b
    FLDZ                                ; 004c620e
    FCOMPP                              ; 004c6210
    FNSTSW AX                           ; 004c6212
    SAHF                                ; 004c6214
    JC 0x004c621f                       ; 004c6215
        ;   XREF to: 004c621f (CONDITIONAL_JUMP)  ; LAB_004c621f
    ADD ESP,0xc                         ; 004c6217
        ;   Label: LAB_004c6217
    POP EBP                             ; 004c621a
    POP EDI                             ; 004c621b
    POP ESI                             ; 004c621c
    POP EBX                             ; 004c621d
    RET                                 ; 004c621e
    MOV EDI,dword ptr [0x006703ec]      ; 004c621f | g_CDemonRendererPtr2
        ;   Label: LAB_004c621f
    MOV EBX,ESP                         ; 004c6225
    MOV EAX,ESI                         ; 004c6227
    MOV EDI,dword ptr [EDI]             ; 004c6229 | g_CDemonRendererInstance
    FLD float ptr [EAX]                 ; 004c622b
    FMUL float ptr [0x0065dca8]         ; 004c622d | FLOAT_0065dca8
    FISTP dword ptr [EBX]               ; 004c6233
    FLD float ptr [EAX + 0x4]           ; 004c6235
    FMUL float ptr [0x0065dca8]         ; 004c6238 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x4]         ; 004c623e
    FLD float ptr [EAX + 0x8]           ; 004c6241
    FMUL float ptr [0x0065dca8]         ; 004c6244 | FLOAT_0065dca8
    FISTP dword ptr [EBX + 0x8]         ; 004c624a
    MOV EAX,ESP                         ; 004c624d
    PUSH EAX                            ; 004c624f
    PUSH EDI                            ; 004c6250
    CALL engine_special.cpp_transformPoint_FUN_005b5a25 ; 004c6251
        ;   XREF to: 005b5a25 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_transformPoint_FUN_005b5a25(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c6256
    PUSH EDI                            ; 004c6259
    MOV EDX,dword ptr [0x006703ec]      ; 004c625a | g_CDemonRendererPtr2
    PUSH EDX                            ; 004c6260 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50 ; 004c6261
        ;   XREF to: 0048dc50 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
    ADD ESP,0x8                         ; 004c6266
    TEST EAX,EAX                        ; 004c6269
    JZ 0x004c6217                       ; 004c626b
        ;   XREF to: 004c6217 (CONDITIONAL_JUMP)  ; LAB_004c6217
    MOV ECX,dword ptr [0x006703ec]      ; 004c626d | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c6273 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 004c6274
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004c6279
    TEST EAX,EAX                        ; 004c627c
    JNZ 0x004c6292                      ; 004c627e
        ;   XREF to: 004c6292 (CONDITIONAL_JUMP)  ; LAB_004c6292
    PUSH 0x0                            ; 004c6280
    MOV EAX,[0x00823a74]                ; 004c6282 | g_CurrentSceneCamera
    PUSH ESI                            ; 004c6287
    MOV EBX,dword ptr [EAX + 0x3c]      ; 004c6288
    PUSH EAX                            ; 004c628b
    CALL dword ptr [EBX + 0x4]          ; 004c628c
    ADD ESP,0xc                         ; 004c628f
    PUSH 0x0                            ; 004c6292
        ;   Label: LAB_004c6292
    PUSH 0x3f87558                      ; 004c6294 | g_ZeroVector
    PUSH 0x3f87558                      ; 004c6299 | g_ZeroVector
    LEA EBX,[ESI + 0x38]                ; 004c629e
    PUSH EBX                            ; 004c62a1
    PUSH ESI                            ; 004c62a2
    MOV EDI,dword ptr [0x006810c8]      ; 004c62a3 | g_CDemonSetPtr
    PUSH EDI                            ; 004c62a9 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_0056d380 ; 004c62aa
        ;   XREF to: 0056d380 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_0056d380(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    ADD ESP,0x18                        ; 004c62af
    PUSH ESI                            ; 004c62b2
    MOV EBP,dword ptr [0x006703ec]      ; 004c62b3 | g_CDemonRendererPtr2
    PUSH EBP                            ; 004c62b9 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004c62ba
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004c62bf
    PUSH 0x0                            ; 004c62c2
    PUSH EBX                            ; 004c62c4
    MOV EAX,[0x006703ec]                ; 004c62c5 | g_CDemonRendererPtr2
    PUSH EAX                            ; 004c62ca | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004c62cb
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 004c62d0
    PUSH -0x1                           ; 004c62d3
    PUSH 0x0                            ; 004c62d5
    PUSH 0x0                            ; 004c62d7
    MOV EDX,dword ptr [ESI + 0x54]      ; 004c62d9
    PUSH EDX                            ; 004c62dc
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850 ; 004c62dd
        ;   XREF to: 00477850 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850(CKeyFramedModel * this_ptr, int frame_index, CKeyFramedModelInstance * instance, int render_flags)
    ADD ESP,0x10                        ; 004c62e2
    MOV ECX,dword ptr [0x006703ec]      ; 004c62e5 | g_CDemonRendererPtr2
    PUSH ECX                            ; 004c62eb | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640 ; 004c62ec
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0048c640(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004c62f1
    ADD ESP,0xc                         ; 004c62f4
    POP EBP                             ; 004c62f7
    POP EDI                             ; 004c62f8
    POP ESI                             ; 004c62f9
    POP EBX                             ; 004c62fa
    RET                                 ; 004c62fb

