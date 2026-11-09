; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_grave_cpp_FUN_004e6b50(CDemonActor *param_1,int param_2)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6b50
        ;   Label: core_grave.cpp_FUN_004e6b50
    SUB ESP,0x30                        ; 004e6b51
    MOV EBX,dword ptr [ESP + 0x38]      ; 004e6b54
    CMP dword ptr [ESP + 0x3c],0x0      ; 004e6b58
    JZ 0x004e6bdf                       ; 004e6b5d
        ;   XREF to: 004e6bdf (CONDITIONAL_JUMP)  ; LAB_004e6bdf
    CMP dword ptr [EBX + 0x2dc],0x0     ; 004e6b63
    JNZ 0x004e6b7f                      ; 004e6b6a
        ;   XREF to: 004e6b7f (CONDITIONAL_JUMP)  ; LAB_004e6b7f
    CMP dword ptr [EBX + 0x2e0],0x2     ; 004e6b6c
    JNZ 0x004e6bdf                      ; 004e6b73
        ;   XREF to: 004e6bdf (CONDITIONAL_JUMP)  ; LAB_004e6bdf
    MOV dword ptr [EBX + 0x2dc],0x1     ; 004e6b75
    PUSH EDI                            ; 004e6b7f
        ;   Label: LAB_004e6b7f
    PUSH ESI                            ; 004e6b80
    PUSH EBX                            ; 004e6b81
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 004e6b82
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e6b87
    PUSH 0x0                            ; 004e6b8a
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e6b8c
    PUSH EBX                            ; 004e6b92
    LEA ESI,[ESP + 0x10]                ; 004e6b93
    LEA EDI,[ESP + 0x28]                ; 004e6b97
    CALL dword ptr [EAX + 0x1c]         ; 004e6b9b
    MOV ECX,0x6                         ; 004e6b9e
    ADD ESP,0x4                         ; 004e6ba3
    LEA EAX,[ESP + 0x24]                ; 004e6ba6
    LEA ESI,[ESP + 0xc]                 ; 004e6baa
    PUSH EAX                            ; 004e6bae
    MOVSD.REP ES:EDI,ESI                ; 004e6baf
    CALL core_box.cpp_FUN_004207b0      ; 004e6bb1
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 004e6bb6
    TEST EAX,EAX                        ; 004e6bb9
    JZ 0x004e6bd4                       ; 004e6bbb
        ;   XREF to: 004e6bd4 (CONDITIONAL_JUMP)  ; LAB_004e6bd4
    PUSH -0x1                           ; 004e6bbd
    LEA EAX,[EBX + 0x158]               ; 004e6bbf
    PUSH dword ptr [EBX + 0x2d4]        ; 004e6bc5
    PUSH EAX                            ; 004e6bcb
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 004e6bcc
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004e6bd1
    PUSH EBX                            ; 004e6bd4
        ;   Label: LAB_004e6bd4
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 004e6bd5
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e6bda
    POP ESI                             ; 004e6bdd
    POP EDI                             ; 004e6bde
    ADD ESP,0x30                        ; 004e6bdf
        ;   Label: LAB_004e6bdf
    POP EBX                             ; 004e6be2
    RET                                 ; 004e6be3

