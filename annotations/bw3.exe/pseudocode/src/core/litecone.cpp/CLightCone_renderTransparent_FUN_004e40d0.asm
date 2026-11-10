; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_litecone_cpp_CLightCone_renderTransparent_FUN_004e40d0(CLightCone *this_ptr)
;
; Parameters:
; CLightCone *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_box.cpp_FUN_0041daf0
;   core_dlight.cpp_renderConeLightGeometry_FUN_0045f5a0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e40d0
        ;   Label: core_litecone.cpp_CLightCone_renderTransparent_FUN_004e40d0
    SUB ESP,0x30                        ; 004e40d1
    MOV EBX,dword ptr [ESP + 0x38]      ; 004e40d4
    CMP dword ptr [EBX + 0x160],0x0     ; 004e40d8
    JNZ 0x004e40e8                      ; 004e40df
        ;   XREF to: 004e40e8 (CONDITIONAL_JUMP)  ; LAB_004e40e8
    XOR EAX,EAX                         ; 004e40e1
        ;   Label: LAB_004e40e1
    ADD ESP,0x30                        ; 004e40e3
    POP EBX                             ; 004e40e6
    RET                                 ; 004e40e7
    MOV ECX,dword ptr [0x005f2afc]      ; 004e40e8 | DAT_005f2afc
        ;   Label: LAB_004e40e8
    PUSH ECX                            ; 004e40ee
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 004e40ef
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004e40f4
    TEST EAX,EAX                        ; 004e40f7
    JNZ 0x004e40e1                      ; 004e40f9
        ;   XREF to: 004e40e1 (CONDITIONAL_JUMP)  ; LAB_004e40e1
    PUSH EDI                            ; 004e40fb
    PUSH ESI                            ; 004e40fc
    PUSH EBX                            ; 004e40fd
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 004e40fe
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e4103
    PUSH 0x0                            ; 004e4106
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e4108
    PUSH EBX                            ; 004e410e
    LEA ESI,[ESP + 0x10]                ; 004e410f
    LEA EDI,[ESP + 0x28]                ; 004e4113
    CALL dword ptr [EAX + 0x1c]         ; 004e4117
    MOV ECX,0x6                         ; 004e411a
    ADD ESP,0x4                         ; 004e411f
    LEA EAX,[ESP + 0x24]                ; 004e4122
    LEA ESI,[ESP + 0xc]                 ; 004e4126
    PUSH EAX                            ; 004e412a
    MOVSD.REP ES:EDI,ESI                ; 004e412b
    CALL core_box.cpp_FUN_0041daf0      ; 004e412d
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 004e4132
    PUSH EBX                            ; 004e4135
    MOV ESI,EAX                         ; 004e4136
    MOV EDI,EAX                         ; 004e4138
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 004e413a
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e413f
    TEST ESI,ESI                        ; 004e4142
    JZ 0x004e4162                       ; 004e4144
        ;   XREF to: 004e4162 (CONDITIONAL_JUMP)  ; LAB_004e4162
    PUSH dword ptr [EBX + 0x15c]        ; 004e4146
    LEA EAX,[EBX + 0x30]                ; 004e414c
    PUSH dword ptr [EBX + 0x158]        ; 004e414f
    PUSH EAX                            ; 004e4155
    ADD EBX,0x20                        ; 004e4156
    PUSH EBX                            ; 004e4159
    CALL core_dlight.cpp_renderConeLightGeometry_FUN_0045f5a0 ; 004e415a
        ;   XREF to: 0045f5a0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_renderConeLightGeometry_FUN_0045f5a0(CVector3f * position, CVector3f * rotation, float fov, float falloff)
    ADD ESP,0x10                        ; 004e415f
    MOV EAX,EDI                         ; 004e4162
        ;   Label: LAB_004e4162
    POP ESI                             ; 004e4164
    POP EDI                             ; 004e4165
    ADD ESP,0x30                        ; 004e4166
    POP EBX                             ; 004e4169
    RET                                 ; 004e416a

