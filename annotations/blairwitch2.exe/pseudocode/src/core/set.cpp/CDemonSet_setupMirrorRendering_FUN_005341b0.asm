; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005341b0(CDemonSet *this_ptr,int mirror_index,int enable_flag)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   mirror_index
; int              Stack[0xc]:4   enable_flag
; Local Variables:
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_set.cpp_CDemonSet_renderOpaqueActors_FUN_005301d0 at 00530397
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0 at 0052d26a
;   core_set.cpp_CDemonSet_renderScene_FUN_0052f2a0 at 0052f3d5
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_0052ef80 at 0052f107
;   core_set.cpp_CDemonSet_renderTransparentActors_FUN_00530410 at 005305c0
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_0060b280 = 01ba5c50
;   CDemonCamera* g_CurrentSceneCamera
;   CDemonRenderer g_CDemonRenderer_01ba5c50
;   UVector3 g_UVector3_020935f8
;   undefined4 g_UVector3_020935f8+4
;   undefined4 g_UVector3_020935f8+8
;   CVector3f g_CVector3f_02093604
;   undefined4 g_CVector3f_02093604.y
;   undefined4 g_CVector3f_02093604.z
;   float g_SavedProjectionFactor
;
; Called Functions:
;   core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_004f9990
;   engine_drender.cpp_CDemonRenderer_calculateProjectionFactor_FUN_0046b6f0
;   engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046bc90
;   engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_0046b5e0
;   engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_0046b670
;   engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0046bc70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005341b0
        ;   Label: core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005341b0
    PUSH ESI                            ; 005341b1
    PUSH EDI                            ; 005341b2
    PUSH EBP                            ; 005341b3
    SUB ESP,0x34                        ; 005341b4
    MOV EBX,dword ptr [ESP + 0x4c]      ; 005341b7
    MOV EDX,dword ptr [0x0060b280]      ; 005341bb | g_CDemonRenderer_PTR_0060b280
    PUSH EDX                            ; 005341c1 | g_CDemonRenderer_01ba5c50
    LEA ESI,[ESP + 0x4]                 ; 005341c2
    LEA EDI,[ESP + 0x28]                ; 005341c6
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_0046b5e0 ; 005341ca
        ;   XREF to: 0046b5e0 (UNCONDITIONAL_CALL)  ; CVector3f * engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_0046b5e0(CDemonRenderer * this_ptr, CVector3f * output)
    LEA ESI,[ESP + 0x4]                 ; 005341cf
    ADD ESP,0x4                         ; 005341d3
    LEA EAX,[ESP + 0x24]                ; 005341d6
    MOVSD ES:EDI,ESI                    ; 005341da
    MOVSD ES:EDI,ESI                    ; 005341db
    MOVSD ES:EDI,ESI                    ; 005341dc
    CMP EAX,0x20935f8                   ; 005341dd
    JZ 0x005341ff                       ; 005341e2
        ;   XREF to: 005341ff (CONDITIONAL_JUMP)  ; LAB_005341ff
    MOV EAX,dword ptr [ESP + 0x24]      ; 005341e4
    MOV [0x020935f8],EAX                ; 005341e8 | g_UVector3_020935f8
    MOV EAX,dword ptr [ESP + 0x28]      ; 005341ed
    MOV [0x020935fc],EAX                ; 005341f1 | g_UVector3_020935f8+4
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005341f6
    MOV [0x02093600],EAX                ; 005341fa | g_UVector3_020935f8+8
    MOV ECX,dword ptr [0x0060b280]      ; 005341ff | g_CDemonRenderer_PTR_0060b280
        ;   Label: LAB_005341ff
    PUSH ECX                            ; 00534205 | g_CDemonRenderer_01ba5c50
    LEA ESI,[ESP + 0x10]                ; 00534206
    LEA EDI,[ESP + 0x1c]                ; 0053420a
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_0046b670 ; 0053420e
        ;   XREF to: 0046b670 (UNCONDITIONAL_CALL)  ; CVector3f * engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_0046b670(CDemonRenderer * this_ptr, CVector3f * output)
    LEA ESI,[ESP + 0x10]                ; 00534213
    ADD ESP,0x4                         ; 00534217
    LEA EAX,[ESP + 0x18]                ; 0053421a
    MOVSD ES:EDI,ESI                    ; 0053421e
    MOVSD ES:EDI,ESI                    ; 0053421f
    MOVSD ES:EDI,ESI                    ; 00534220
    CMP EAX,0x2093604                   ; 00534221
    JZ 0x00534243                       ; 00534226
        ;   XREF to: 00534243 (CONDITIONAL_JUMP)  ; LAB_00534243
    MOV EAX,dword ptr [ESP + 0x18]      ; 00534228
    MOV [0x02093604],EAX                ; 0053422c | g_CVector3f_02093604
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00534231
    MOV [0x02093608],EAX                ; 00534235 | g_CVector3f_02093604.y
    MOV EAX,dword ptr [ESP + 0x20]      ; 0053423a
    MOV [0x0209360c],EAX                ; 0053423e | g_CVector3f_02093604.z
    MOV ESI,dword ptr [0x0060b280]      ; 00534243 | g_CDemonRenderer_PTR_0060b280
        ;   Label: LAB_00534243
    PUSH ESI                            ; 00534249 | g_CDemonRenderer_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_calculateProjectionFactor_FUN_0046b6f0 ; 0053424a
        ;   XREF to: 0046b6f0 (UNCONDITIONAL_CALL)  ; float engine_drender.cpp_CDemonRenderer_calculateProjectionFactor_FUN_0046b6f0(CDemonRenderer * this_ptr)
    MOV dword ptr [ESP + 0x34],EAX      ; 0053424f
    LEA ESI,[EBX*0x4 + 0x0]             ; 00534253
    FLD float ptr [ESP + 0x34]          ; 0053425a
    ADD ESP,0x4                         ; 0053425e
    FSTP float ptr [0x02093610]         ; 00534261 | g_SavedProjectionFactor
    MOV EDI,dword ptr [ESP + 0x48]      ; 00534267
    PUSH dword ptr [0x02093610]         ; 0053426b | g_SavedProjectionFactor
    ADD ESI,EDI                         ; 00534271
    PUSH 0x2093604                      ; 00534273 | g_CVector3f_02093604
    MOV EAX,dword ptr [ESI + 0x15accc]  ; 00534278
    PUSH 0x20935f8                      ; 0053427e | g_UVector3_020935f8
    ADD EAX,0x348                       ; 00534283
    PUSH EAX                            ; 00534288
    CALL core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_004f9990 ; 00534289
        ;   XREF to: 004f9990 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_CMirrorReflection_setupMirrorReflection_FUN_004f9990(CMirrorReflection * this_ptr, CVector3f * camera_position, CVector3f * camera_rotation, float projection_scale)
    ADD ESP,0x10                        ; 0053428e
    PUSH 0x1                            ; 00534291
    MOV EBP,dword ptr [0x0060b280]      ; 00534293 | g_CDemonRenderer_PTR_0060b280
    PUSH EBP                            ; 00534299 | g_CDemonRenderer_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046bc90 ; 0053429a
        ;   XREF to: 0046bc90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046bc90(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0053429f
    INC EBX                             ; 005342a2
    MOV EAX,[0x007bda74]                ; 005342a3 | g_CurrentSceneCamera
    PUSH EBX                            ; 005342a8
    MOV EDX,dword ptr [EAX + 0x3c]      ; 005342a9
    PUSH EAX                            ; 005342ac
    CALL dword ptr [EDX + 0x10]         ; 005342ad
    ADD ESP,0x8                         ; 005342b0
    PUSH EBX                            ; 005342b3
    MOV EAX,[0x0060b280]                ; 005342b4 | g_CDemonRenderer_PTR_0060b280
    PUSH EAX                            ; 005342b9 | g_CDemonRenderer_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0046bc70 ; 005342ba
        ;   XREF to: 0046bc70 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0046bc70(CDemonRenderer * this_ptr, int alpha_mask)
    MOV EAX,dword ptr [ESI + 0x15accc]  ; 005342bf
    ADD EAX,0x348                       ; 005342c5
    ADD ESP,0x8                         ; 005342ca
    MOV dword ptr [EDI + 0x161664],EAX  ; 005342cd
    ADD ESP,0x34                        ; 005342d3
    POP EBP                             ; 005342d6
    POP EDI                             ; 005342d7
    POP ESI                             ; 005342d8
    POP EBX                             ; 005342d9
    RET                                 ; 005342da

