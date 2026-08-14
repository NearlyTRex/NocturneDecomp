; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_weapon_cpp_CWeapon_renderOpaque_FUN_005ee030(CWeapon *this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_baron.cpp_CBaronWeapon_renderOpaque_FUN_00413de0 at 00413de5
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ee030
        ;   Label: core_weapon.cpp_CWeapon_renderOpaque_FUN_005ee030
    PUSH ESI                            ; 005ee031
    SUB ESP,0x18                        ; 005ee032
    MOV EBX,dword ptr [ESP + 0x24]      ; 005ee035
    PUSH EBX                            ; 005ee039
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 005ee03a
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005ee03f
    MOV EAX,ESP                         ; 005ee042
    PUSH EAX                            ; 005ee044
    MOV ESI,dword ptr [EBX + 0x154]     ; 005ee045
    PUSH EBX                            ; 005ee04b
    CALL dword ptr [ESI + 0x14]         ; 005ee04c
    ADD ESP,0x8                         ; 005ee04f
    PUSH EAX                            ; 005ee052
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 005ee053
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 005ee058
    MOV ESI,EAX                         ; 005ee05b
    TEST EAX,EAX                        ; 005ee05d
    JZ 0x005ee074                       ; 005ee05f
        ;   XREF to: 005ee074 (CONDITIONAL_JUMP)  ; LAB_005ee074
    PUSH -0x1                           ; 005ee061
    LEA EAX,[EBX + 0x158]               ; 005ee063
    PUSH 0x0                            ; 005ee069
    PUSH EAX                            ; 005ee06b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 005ee06c
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 005ee071
    PUSH EBX                            ; 005ee074
        ;   Label: LAB_005ee074
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 005ee075
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005ee07a
    MOV EDX,dword ptr [0x006703ec]      ; 005ee07d | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 005ee083 | g_CDemonRendererInstance
    MOV dword ptr [EBX + 0x574],0x0     ; 005ee084
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 005ee08e
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005ee093
    TEST EAX,EAX                        ; 005ee096
    JNZ 0x005ee09e                      ; 005ee098
        ;   XREF to: 005ee09e (CONDITIONAL_JUMP)  ; LAB_005ee09e
    TEST ESI,ESI                        ; 005ee09a
    JNZ 0x005ee0a6                      ; 005ee09c
        ;   XREF to: 005ee0a6 (CONDITIONAL_JUMP)  ; LAB_005ee0a6
    MOV EAX,ESI                         ; 005ee09e
        ;   Label: LAB_005ee09e
    ADD ESP,0x18                        ; 005ee0a0
    POP ESI                             ; 005ee0a3
    POP EBX                             ; 005ee0a4
    RET                                 ; 005ee0a5
    MOV dword ptr [EBX + 0x574],0x1     ; 005ee0a6
        ;   Label: LAB_005ee0a6
    MOV EAX,ESI                         ; 005ee0b0
    ADD ESP,0x18                        ; 005ee0b2
    POP ESI                             ; 005ee0b5
    POP EBX                             ; 005ee0b6
    RET                                 ; 005ee0b7

