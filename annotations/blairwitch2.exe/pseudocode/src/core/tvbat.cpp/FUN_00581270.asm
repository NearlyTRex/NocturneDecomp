; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_tvbat_cpp_FUN_00581270(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00581270
        ;   Label: core_tvbat.cpp_FUN_00581270
    SUB ESP,0x30                        ; 00581271
    MOV EBX,dword ptr [ESP + 0x38]      ; 00581274
    CMP dword ptr [EBX + 0x10cb4],0x3   ; 00581278
    JNZ 0x00581288                      ; 0058127f
        ;   XREF to: 00581288 (CONDITIONAL_JUMP)  ; LAB_00581288
    XOR EAX,EAX                         ; 00581281
    ADD ESP,0x30                        ; 00581283
    POP EBX                             ; 00581286
    RET                                 ; 00581287
    PUSH EDI                            ; 00581288
        ;   Label: LAB_00581288
    PUSH ESI                            ; 00581289
    PUSH EBX                            ; 0058128a
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 0058128b
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00581290
    PUSH 0x0                            ; 00581293
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00581295
    PUSH EBX                            ; 0058129b
    LEA ESI,[ESP + 0x10]                ; 0058129c
    LEA EDI,[ESP + 0x28]                ; 005812a0
    CALL dword ptr [EAX + 0x24]         ; 005812a4
    MOV ECX,0x6                         ; 005812a7
    ADD ESP,0x4                         ; 005812ac
    LEA EAX,[ESP + 0x24]                ; 005812af
    LEA ESI,[ESP + 0xc]                 ; 005812b3
    PUSH EAX                            ; 005812b7
    MOVSD.REP ES:EDI,ESI                ; 005812b8
    CALL core_box.cpp_FUN_0041a840      ; 005812ba
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 005812bf
    MOV ESI,EAX                         ; 005812c2
    TEST EAX,EAX                        ; 005812c4
    JZ 0x005812df                       ; 005812c6
        ;   XREF to: 005812df (CONDITIONAL_JUMP)  ; LAB_005812df
    PUSH -0x1                           ; 005812c8
    LEA EAX,[EBX + 0x10afc]             ; 005812ca
    PUSH dword ptr [EBX + 0x10af8]      ; 005812d0
    PUSH EAX                            ; 005812d6
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 005812d7
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 005812dc
    PUSH EBX                            ; 005812df
        ;   Label: LAB_005812df
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 005812e0
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005812e5
    MOV EAX,ESI                         ; 005812e8
    POP ESI                             ; 005812ea
    POP EDI                             ; 005812eb
    ADD ESP,0x30                        ; 005812ec
    POP EBX                             ; 005812ef
    RET                                 ; 005812f0

