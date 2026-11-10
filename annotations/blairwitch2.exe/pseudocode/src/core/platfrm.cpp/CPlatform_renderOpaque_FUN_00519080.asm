; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_platfrm_cpp_CPlatform_renderOpaque_FUN_00519080(CPlatform *this_ptr)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_CBoundingBox3D_render_FUN_0041b700
;   core_box.cpp_FUN_0041a840
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00519080
        ;   Label: core_platfrm.cpp_CPlatform_renderOpaque_FUN_00519080
    PUSH ESI                            ; 00519081
    PUSH EDI                            ; 00519082
    PUSH EBP                            ; 00519083
    SUB ESP,0x60                        ; 00519084
    MOV EBX,dword ptr [ESP + 0x74]      ; 00519087
    MOV EDX,dword ptr [0x0060b280]      ; 0051908b | DAT_0060b280
    PUSH EDX                            ; 00519091 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 00519092
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00519097
    TEST EAX,EAX                        ; 0051909a
    JZ 0x005190ab                       ; 0051909c
        ;   XREF to: 005190ab (CONDITIONAL_JUMP)  ; LAB_005190ab
    CMP dword ptr [EBX + 0x674],0x0     ; 0051909e
    JZ 0x0051918a                       ; 005190a5
        ;   XREF to: 0051918a (CONDITIONAL_JUMP)  ; LAB_0051918a
    CMP dword ptr [EBX + 0x61c],0x2     ; 005190ab
        ;   Label: LAB_005190ab
    JG 0x0051918e                       ; 005190b2
        ;   XREF to: 0051918e (CONDITIONAL_JUMP)  ; LAB_0051918e
    CMP dword ptr [EBX + 0x624],0x0     ; 005190b8
        ;   Label: LAB_005190b8
    JZ 0x005190f1                       ; 005190bf
        ;   XREF to: 005190f1 (CONDITIONAL_JUMP)  ; LAB_005190f1
    MOV EAX,dword ptr [EBX + 0x430]     ; 005190c1
    CMP EAX,0x3                         ; 005190c7
    JZ 0x005190f1                       ; 005190ca
        ;   XREF to: 005190f1 (CONDITIONAL_JUMP)  ; LAB_005190f1
    CMP EAX,0x4                         ; 005190cc
    JZ 0x005190f1                       ; 005190cf
        ;   XREF to: 005190f1 (CONDITIONAL_JUMP)  ; LAB_005190f1
    CMP dword ptr [EBX + 0x880],0x0     ; 005190d1
    JZ 0x005190f1                       ; 005190d8
        ;   XREF to: 005190f1 (CONDITIONAL_JUMP)  ; LAB_005190f1
    MOV ESI,dword ptr [0x0060b280]      ; 005190da | DAT_0060b280
    PUSH ESI                            ; 005190e0 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 005190e1
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005190e6
    TEST EAX,EAX                        ; 005190e9
    JZ 0x00519182                       ; 005190eb
        ;   XREF to: 00519182 (CONDITIONAL_JUMP)  ; LAB_00519182
    PUSH EBX                            ; 005190f1
        ;   Label: LAB_005190f1
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 005190f2
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005190f7
    PUSH 0x0                            ; 005190fa
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005190fc
    PUSH EBX                            ; 00519102
    LEA ESI,[ESP + 0x8]                 ; 00519103
    LEA EDI,[ESP + 0x20]                ; 00519107
    CALL dword ptr [EAX + 0x24]         ; 0051910b
    MOV ECX,0x6                         ; 0051910e
    ADD ESP,0x4                         ; 00519113
    LEA EAX,[ESP + 0x1c]                ; 00519116
    LEA ESI,[ESP + 0x4]                 ; 0051911a
    PUSH EAX                            ; 0051911e
    MOVSD.REP ES:EDI,ESI                ; 0051911f
    CALL core_box.cpp_FUN_0041a840      ; 00519121
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 00519126
    MOV EBP,EAX                         ; 00519129
    TEST EAX,EAX                        ; 0051912b
    JZ 0x00519177                       ; 0051912d
        ;   XREF to: 00519177 (CONDITIONAL_JUMP)  ; LAB_00519177
    CMP dword ptr [EBX + 0x668],0x0     ; 0051912f
    JZ 0x005191a7                       ; 00519136
        ;   XREF to: 005191a7 (CONDITIONAL_JUMP)  ; LAB_005191a7
    MOV EAX,[0x0060b280]                ; 00519138 | DAT_0060b280
    PUSH EAX                            ; 0051913d | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 0051913e
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00519143
    TEST EAX,EAX                        ; 00519146
    JZ 0x005191a7                       ; 00519148
        ;   XREF to: 005191a7 (CONDITIONAL_JUMP)  ; LAB_005191a7
    PUSH EBX                            ; 0051914a
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0051914b
    LEA ESI,[ESP + 0x34]                ; 00519151
    LEA EDI,[ESP + 0x4c]                ; 00519155
    CALL dword ptr [EAX + 0x24]         ; 00519159
    MOV ECX,0x6                         ; 0051915c
    ADD ESP,0x4                         ; 00519161
    LEA EAX,[ESP + 0x48]                ; 00519164
    LEA ESI,[ESP + 0x30]                ; 00519168
    PUSH EAX                            ; 0051916c
    MOVSD.REP ES:EDI,ESI                ; 0051916d
    CALL core_box.cpp_CBoundingBox3D_render_FUN_0041b700 ; 0051916f
        ;   XREF to: 0041b700 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_render_FUN_0041b700(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 00519174
    PUSH EBX                            ; 00519177
        ;   Label: LAB_00519177
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 00519178
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0051917d
    MOV EAX,EBP                         ; 00519180
    ADD ESP,0x60                        ; 00519182
        ;   Label: LAB_00519182
    POP EBP                             ; 00519185
    POP EDI                             ; 00519186
    POP ESI                             ; 00519187
    POP EBX                             ; 00519188
    RET                                 ; 00519189
    XOR EAX,EAX                         ; 0051918a
        ;   Label: LAB_0051918a
    JMP 0x00519182                      ; 0051918c
        ;   XREF to: 00519182 (UNCONDITIONAL_JUMP)  ; LAB_00519182
    MOV EDI,dword ptr [0x0060b280]      ; 0051918e | DAT_0060b280
        ;   Label: LAB_0051918e
    PUSH EDI                            ; 00519194 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 00519195
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0051919a
    TEST EAX,EAX                        ; 0051919d
    JNZ 0x005190b8                      ; 0051919f
        ;   XREF to: 005190b8 (CONDITIONAL_JUMP)  ; LAB_005190b8
    JMP 0x00519182                      ; 005191a5
        ;   XREF to: 00519182 (UNCONDITIONAL_JUMP)  ; LAB_00519182
    PUSH -0x1                           ; 005191a7
        ;   Label: LAB_005191a7
    LEA EAX,[EBX + 0x2b4]               ; 005191a9
    PUSH 0x0                            ; 005191af
    PUSH EAX                            ; 005191b1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 005191b2
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 005191b7
    PUSH EBX                            ; 005191ba
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 005191bb
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005191c0
    MOV EAX,EBP                         ; 005191c3
    ADD ESP,0x60                        ; 005191c5
    POP EBP                             ; 005191c8
    POP EDI                             ; 005191c9
    POP ESI                             ; 005191ca
    POP EBX                             ; 005191cb
    RET                                 ; 005191cc

