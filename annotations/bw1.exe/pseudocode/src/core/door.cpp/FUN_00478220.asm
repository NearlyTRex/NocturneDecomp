; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_door_cpp_FUN_00478220(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_box.cpp_FUN_00421670
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478220
        ;   Label: core_door.cpp_FUN_00478220
    PUSH EBP                            ; 00478221
    SUB ESP,0x60                        ; 00478222
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00478225
    CMP dword ptr [EBX + 0x9c8],0x2     ; 00478229
    JLE 0x0047823a                      ; 00478230
        ;   XREF to: 0047823a (CONDITIONAL_JUMP)  ; LAB_0047823a
    XOR EAX,EAX                         ; 00478232
    ADD ESP,0x60                        ; 00478234
    POP EBP                             ; 00478237
    POP EBX                             ; 00478238
    RET                                 ; 00478239
    PUSH EDI                            ; 0047823a
        ;   Label: LAB_0047823a
    PUSH ESI                            ; 0047823b
    PUSH EBX                            ; 0047823c
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 0047823d
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00478242
    PUSH 0x0                            ; 00478245
    MOV EAX,dword ptr [EBX + 0x154]     ; 00478247
    PUSH EBX                            ; 0047824d
    LEA ESI,[ESP + 0x58]                ; 0047824e
    LEA EDI,[ESP + 0x28]                ; 00478252
    CALL dword ptr [EAX + 0x1c]         ; 00478256
    MOV ECX,0x6                         ; 00478259
    ADD ESP,0x4                         ; 0047825e
    LEA EAX,[ESP + 0x24]                ; 00478261
    LEA ESI,[ESP + 0x54]                ; 00478265
    PUSH EAX                            ; 00478269
    MOVSD.REP ES:EDI,ESI                ; 0047826a
    CALL core_box.cpp_FUN_004207b0      ; 0047826c
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 00478271
    MOV EBP,EAX                         ; 00478274
    TEST EAX,EAX                        ; 00478276
    JZ 0x004782c3                       ; 00478278
        ;   XREF to: 004782c3 (CONDITIONAL_JUMP)  ; LAB_004782c3
    CMP dword ptr [EBX + 0x9d4],0x0     ; 0047827a
    JZ 0x004782d6                       ; 00478281
        ;   XREF to: 004782d6 (CONDITIONAL_JUMP)  ; LAB_004782d6
    MOV ESI,dword ptr [0x00612560]      ; 00478283 | DAT_00612560
    PUSH ESI                            ; 00478289 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 0047828a
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0047828f
    TEST EAX,EAX                        ; 00478292
    JZ 0x004782d6                       ; 00478294
        ;   XREF to: 004782d6 (CONDITIONAL_JUMP)  ; LAB_004782d6
    PUSH EBX                            ; 00478296
    MOV EAX,dword ptr [EBX + 0x154]     ; 00478297
    LEA ESI,[ESP + 0xc]                 ; 0047829d
    LEA EDI,[ESP + 0x3c]                ; 004782a1
    CALL dword ptr [EAX + 0x1c]         ; 004782a5
    MOV ECX,0x6                         ; 004782a8
    ADD ESP,0x4                         ; 004782ad
    LEA EAX,[ESP + 0x38]                ; 004782b0
    LEA ESI,[ESP + 0x8]                 ; 004782b4
    PUSH EAX                            ; 004782b8
    MOVSD.REP ES:EDI,ESI                ; 004782b9
    CALL core_box.cpp_FUN_00421670      ; 004782bb
        ;   XREF to: 00421670 (UNCONDITIONAL_CALL)  ; void core_box.cpp_FUN_00421670(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 004782c0
    PUSH EBX                            ; 004782c3
        ;   Label: LAB_004782c3
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 004782c4
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004782c9
    MOV EAX,EBP                         ; 004782cc
    POP ESI                             ; 004782ce
    POP EDI                             ; 004782cf
    ADD ESP,0x60                        ; 004782d0
    POP EBP                             ; 004782d3
    POP EBX                             ; 004782d4
    RET                                 ; 004782d5
    PUSH -0x1                           ; 004782d6
        ;   Label: LAB_004782d6
    LEA EAX,[EBX + 0x158]               ; 004782d8
    PUSH 0x0                            ; 004782de
    PUSH EAX                            ; 004782e0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 004782e1
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004782e6
    PUSH EBX                            ; 004782e9
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 004782ea
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004782ef
    MOV EAX,EBP                         ; 004782f2
    POP ESI                             ; 004782f4
    POP EDI                             ; 004782f5
    ADD ESP,0x60                        ; 004782f6
    POP EBP                             ; 004782f9
    POP EBX                             ; 004782fa
    RET                                 ; 004782fb

