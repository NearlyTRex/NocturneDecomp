; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_manpuz.cpp_FUN_00509bf0()
;
;
; XREF[1]:
;   core_manpuz.cpp_FUN_005090d0 at 0050915d
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00509bf0
        ;   Label: core_manpuz.cpp_FUN_00509bf0
    LEA EAX,[EDX*0x4 + 0x0]             ; 00509bf4
    SUB EAX,EDX                         ; 00509bfb
    SHL EAX,0x3                         ; 00509bfd
    ADD EDX,EAX                         ; 00509c00
    MOV EAX,dword ptr [ESP + 0x4]       ; 00509c02
    SHL EDX,0x2                         ; 00509c06
    ADD EAX,0x5f0                       ; 00509c09
    ADD EAX,EDX                         ; 00509c0e
    CMP dword ptr [EAX],0x0             ; 00509c10
    JNZ 0x00509c16                      ; 00509c13
        ;   XREF to: 00509c16 (CONDITIONAL_JUMP)  ; LAB_00509c16
    RET                                 ; 00509c15
    PUSH EBX                            ; 00509c16
        ;   Label: LAB_00509c16
    LEA EDX,[EAX + 0xc]                 ; 00509c17
    PUSH EDX                            ; 00509c1a
    ADD EAX,0x18                        ; 00509c1b
    PUSH EAX                            ; 00509c1e
    MOV ECX,dword ptr [0x006703ec]      ; 00509c1f | g_CDemonRendererPtr
    PUSH ECX                            ; 00509c25 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 00509c26
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 00509c2b
    MOV EAX,dword ptr [ESP + 0x8]       ; 00509c2e
    PUSH -0x1                           ; 00509c32
    ADD EAX,0x158                       ; 00509c34
    PUSH 0x0                            ; 00509c39
    PUSH EAX                            ; 00509c3b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 00509c3c
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00509c41
    MOV EBX,dword ptr [0x006703ec]      ; 00509c44 | g_CDemonRendererPtr
    PUSH EBX                            ; 00509c4a | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 00509c4b
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()

