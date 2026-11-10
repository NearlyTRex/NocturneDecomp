; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_litecone_cpp_CLightCone_renderTransparent_FUN_00502e80(CLightCone *this_ptr)
;
; Parameters:
; CLightCone *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00612560
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_dlight.cpp_renderConeLightGeometry_FUN_00465890
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502e80
        ;   Label: core_litecone.cpp_CLightCone_renderTransparent_FUN_00502e80
    SUB ESP,0x30                        ; 00502e81
    MOV EBX,dword ptr [ESP + 0x38]      ; 00502e84
    CMP dword ptr [EBX + 0x160],0x0     ; 00502e88
    JNZ 0x00502e98                      ; 00502e8f
        ;   XREF to: 00502e98 (CONDITIONAL_JUMP)  ; LAB_00502e98
    XOR EAX,EAX                         ; 00502e91
        ;   Label: LAB_00502e91
    ADD ESP,0x30                        ; 00502e93
    POP EBX                             ; 00502e96
    RET                                 ; 00502e97
    MOV ECX,dword ptr [0x00612560]      ; 00502e98 | DAT_00612560
        ;   Label: LAB_00502e98
    PUSH ECX                            ; 00502e9e
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 00502e9f
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00502ea4
    TEST EAX,EAX                        ; 00502ea7
    JNZ 0x00502e91                      ; 00502ea9
        ;   XREF to: 00502e91 (CONDITIONAL_JUMP)  ; LAB_00502e91
    PUSH EDI                            ; 00502eab
    PUSH ESI                            ; 00502eac
    PUSH EBX                            ; 00502ead
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 00502eae
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00502eb3
    PUSH 0x0                            ; 00502eb6
    MOV EAX,dword ptr [EBX + 0x154]     ; 00502eb8
    PUSH EBX                            ; 00502ebe
    LEA ESI,[ESP + 0x10]                ; 00502ebf
    LEA EDI,[ESP + 0x28]                ; 00502ec3
    CALL dword ptr [EAX + 0x1c]         ; 00502ec7
    MOV ECX,0x6                         ; 00502eca
    ADD ESP,0x4                         ; 00502ecf
    LEA EAX,[ESP + 0x24]                ; 00502ed2
    LEA ESI,[ESP + 0xc]                 ; 00502ed6
    PUSH EAX                            ; 00502eda
    MOVSD.REP ES:EDI,ESI                ; 00502edb
    CALL core_box.cpp_FUN_004207b0      ; 00502edd
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 00502ee2
    PUSH EBX                            ; 00502ee5
    MOV ESI,EAX                         ; 00502ee6
    MOV EDI,EAX                         ; 00502ee8
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 00502eea
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00502eef
    TEST ESI,ESI                        ; 00502ef2
    JZ 0x00502f12                       ; 00502ef4
        ;   XREF to: 00502f12 (CONDITIONAL_JUMP)  ; LAB_00502f12
    PUSH dword ptr [EBX + 0x15c]        ; 00502ef6
    LEA EAX,[EBX + 0x30]                ; 00502efc
    PUSH dword ptr [EBX + 0x158]        ; 00502eff
    PUSH EAX                            ; 00502f05
    ADD EBX,0x20                        ; 00502f06
    PUSH EBX                            ; 00502f09
    CALL core_dlight.cpp_renderConeLightGeometry_FUN_00465890 ; 00502f0a
        ;   XREF to: 00465890 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_renderConeLightGeometry_FUN_00465890(CVector3f * position, CVector3f * rotation, float fov, float falloff)
    ADD ESP,0x10                        ; 00502f0f
    MOV EAX,EDI                         ; 00502f12
        ;   Label: LAB_00502f12
    POP ESI                             ; 00502f14
    POP EDI                             ; 00502f15
    ADD ESP,0x30                        ; 00502f16
    POP EBX                             ; 00502f19
    RET                                 ; 00502f1a

