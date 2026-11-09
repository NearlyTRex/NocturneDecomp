; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_health_cpp_FUN_004cde20(CDemonActor *param_1)
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

    PUSH EBX                            ; 004cde20
        ;   Label: core_health.cpp_FUN_004cde20
    PUSH ESI                            ; 004cde21
    PUSH EDI                            ; 004cde22
    SUB ESP,0x30                        ; 004cde23
    MOV EBX,dword ptr [ESP + 0x40]      ; 004cde26
    PUSH EBX                            ; 004cde2a
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 004cde2b
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cde30
    PUSH 0x0                            ; 004cde33
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004cde35
    PUSH EBX                            ; 004cde3b
    LEA ESI,[ESP + 0x8]                 ; 004cde3c
    LEA EDI,[ESP + 0x20]                ; 004cde40
    CALL dword ptr [EAX + 0x24]         ; 004cde44
    MOV ECX,0x6                         ; 004cde47
    ADD ESP,0x4                         ; 004cde4c
    LEA EAX,[ESP + 0x1c]                ; 004cde4f
    LEA ESI,[ESP + 0x4]                 ; 004cde53
    PUSH EAX                            ; 004cde57
    MOVSD.REP ES:EDI,ESI                ; 004cde58
    CALL core_box.cpp_FUN_0041a840      ; 004cde5a
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 004cde5f
    MOV ESI,EAX                         ; 004cde62
    TEST EAX,EAX                        ; 004cde64
    JNZ 0x004cde7a                      ; 004cde66
        ;   XREF to: 004cde7a (CONDITIONAL_JUMP)  ; LAB_004cde7a
    PUSH EBX                            ; 004cde68
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 004cde69
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cde6e
    MOV EAX,ESI                         ; 004cde71
    ADD ESP,0x30                        ; 004cde73
    POP EDI                             ; 004cde76
    POP ESI                             ; 004cde77
    POP EBX                             ; 004cde78
    RET                                 ; 004cde79
    PUSH -0x1                           ; 004cde7a
        ;   Label: LAB_004cde7a
    LEA EAX,[EBX + 0x2b4]               ; 004cde7c
    PUSH 0x0                            ; 004cde82
    PUSH EAX                            ; 004cde84
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 004cde85
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004cde8a
    PUSH EBX                            ; 004cde8d
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 004cde8e
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cde93
    MOV EAX,ESI                         ; 004cde96
    ADD ESP,0x30                        ; 004cde98
    POP EDI                             ; 004cde9b
    POP ESI                             ; 004cde9c
    POP EBX                             ; 004cde9d
    RET                                 ; 004cde9e

