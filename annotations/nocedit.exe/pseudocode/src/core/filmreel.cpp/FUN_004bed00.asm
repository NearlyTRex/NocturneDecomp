; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_filmreel.cpp_FUN_004bed00()
;
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   CVector3f g_ZeroVector
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bed00
        ;   Label: core_filmreel.cpp_FUN_004bed00
    PUSH ESI                            ; 004bed01
    PUSH EBP                            ; 004bed02
    SUB ESP,0x30                        ; 004bed03
    MOV EBX,dword ptr [ESP + 0x40]      ; 004bed06
    PUSH EBX                            ; 004bed0a
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 004bed0b | void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004bed10
    MOV EAX,ESP                         ; 004bed13
    PUSH EAX                            ; 004bed15
    MOV ESI,dword ptr [EBX + 0x154]     ; 004bed16
    PUSH EBX                            ; 004bed1c
    CALL dword ptr [ESI + 0x14]         ; 004bed1d
    ADD ESP,0x8                         ; 004bed20
    PUSH EAX                            ; 004bed23
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 004bed24 | int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004bed29
    MOV ESI,EAX                         ; 004bed2c
    TEST EAX,EAX                        ; 004bed2e
    JNZ 0x004bed44                      ; 004bed30 | LAB_004bed44
        ;   XREF to: 004bed44 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 004bed32
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 004bed33 | void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004bed38
    MOV EAX,ESI                         ; 004bed3b
    ADD ESP,0x30                        ; 004bed3d
    POP EBP                             ; 004bed40
    POP ESI                             ; 004bed41
    POP EBX                             ; 004bed42
    RET                                 ; 004bed43
    PUSH EDI                            ; 004bed44
        ;   Label: LAB_004bed44
    XOR EDX,EDX                         ; 004bed45
    MOV dword ptr [ESP + 0x28],EDX      ; 004bed47
    MOV EAX,dword ptr [EBX + 0x3d8]     ; 004bed4b
    MOV dword ptr [ESP + 0x30],EAX      ; 004bed51
    LEA EAX,[ESP + 0x1c]                ; 004bed55
    MOV dword ptr [ESP + 0x2c],EDX      ; 004bed59
    PUSH EAX                            ; 004bed5d
    MOV dword ptr [ESP + 0x20],EDX      ; 004bed5e
    MOV dword ptr [ESP + 0x28],EDX      ; 004bed62
    PUSH 0x3f87558                      ; 004bed66 | CVector3f g_ZeroVector
    MOV EDX,dword ptr [0x006703ec]      ; 004bed6b | CDemonRenderer * g_CDemonRendererPtr
    MOV EBP,0x40000000                  ; 004bed71
    PUSH EDX                            ; 004bed76 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [ESP + 0x2c],EBP      ; 004bed77
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004bed7b | void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004bed80
    PUSH 0x3f87558                      ; 004bed83 | CVector3f g_ZeroVector
    LEA EAX,[ESP + 0x2c]                ; 004bed88
    PUSH EAX                            ; 004bed8c
    MOV ECX,dword ptr [0x006703ec]      ; 004bed8d | CDemonRenderer * g_CDemonRendererPtr
    PUSH ECX                            ; 004bed93 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004bed94 | void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004bed99
    PUSH -0x1                           ; 004bed9c
    LEA EAX,[EBX + 0x1f4]               ; 004bed9e
    PUSH 0x0                            ; 004beda4
    PUSH EAX                            ; 004beda6
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 004beda7 | void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004bedac
    MOV EDI,dword ptr [0x006703ec]      ; 004bedaf | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDI                            ; 004bedb5 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 004bedb6 | void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)

