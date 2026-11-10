; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_backgnd_cpp_CBackgroundActor_renderBackground_FUN_0040ef70(CBackgroundActor *this_ptr,int layer_flag)
;
; Parameters:
; CBackgroundActor * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ef70
        ;   Label: core_backgnd.cpp_CBackgroundActor_renderBackground_FUN_0040ef70
    PUSH ESI                            ; 0040ef71
    SUB ESP,0x30                        ; 0040ef72
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0040ef75
    CMP dword ptr [ESP + 0x40],0x0      ; 0040ef79
    JZ 0x0040efe3                       ; 0040ef7e
        ;   XREF to: 0040efe3 (CONDITIONAL_JUMP)  ; LAB_0040efe3
    CMP dword ptr [EBX + 0x158],0x0     ; 0040ef80
    JZ 0x0040efe9                       ; 0040ef87
        ;   XREF to: 0040efe9 (CONDITIONAL_JUMP)  ; LAB_0040efe9
    PUSH EDI                            ; 0040ef89
        ;   Label: LAB_0040ef89
    PUSH EBX                            ; 0040ef8a
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 0040ef8b
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040ef90
    PUSH 0x0                            ; 0040ef93
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040ef95
    PUSH EBX                            ; 0040ef9b
    LEA ESI,[ESP + 0x24]                ; 0040ef9c
    LEA EDI,[ESP + 0xc]                 ; 0040efa0
    CALL dword ptr [EAX + 0x1c]         ; 0040efa4
    MOV ECX,0x6                         ; 0040efa7
    ADD ESP,0x4                         ; 0040efac
    LEA EAX,[ESP + 0x8]                 ; 0040efaf
    LEA ESI,[ESP + 0x20]                ; 0040efb3
    PUSH EAX                            ; 0040efb7
    MOVSD.REP ES:EDI,ESI                ; 0040efb8
    CALL core_box.cpp_FUN_004207b0      ; 0040efba
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 0040efbf
    TEST EAX,EAX                        ; 0040efc2
    JZ 0x0040efd9                       ; 0040efc4
        ;   XREF to: 0040efd9 (CONDITIONAL_JUMP)  ; LAB_0040efd9
    PUSH -0x1                           ; 0040efc6
    LEA EAX,[EBX + 0x15c]               ; 0040efc8
    PUSH 0x0                            ; 0040efce
    PUSH EAX                            ; 0040efd0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 0040efd1
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0040efd6
    PUSH EBX                            ; 0040efd9
        ;   Label: LAB_0040efd9
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 0040efda
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040efdf
    POP EDI                             ; 0040efe2
    ADD ESP,0x30                        ; 0040efe3
        ;   Label: LAB_0040efe3
    POP ESI                             ; 0040efe6
    POP EBX                             ; 0040efe7
    RET                                 ; 0040efe8
    MOV ESI,dword ptr [0x00612560]      ; 0040efe9 | DAT_00612560
        ;   Label: LAB_0040efe9
    PUSH ESI                            ; 0040efef | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 0040eff0
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0040eff5
    TEST EAX,EAX                        ; 0040eff8
    JNZ 0x0040efe3                      ; 0040effa
        ;   XREF to: 0040efe3 (CONDITIONAL_JUMP)  ; LAB_0040efe3
    JMP 0x0040ef89                      ; 0040effc
        ;   XREF to: 0040ef89 (UNCONDITIONAL_JUMP)  ; LAB_0040ef89

