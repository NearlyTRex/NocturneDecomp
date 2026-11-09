; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_trash_cpp_FUN_0059ad40(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00612560
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_actor.cpp_FUN_00408b00
;   core_box.cpp_FUN_004207b0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_matrix.c_pop_FUN_004839a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059ad40
        ;   Label: core_trash.cpp_FUN_0059ad40
    PUSH ESI                            ; 0059ad41
    PUSH EDI                            ; 0059ad42
    PUSH EBP                            ; 0059ad43
    SUB ESP,0x54                        ; 0059ad44
    MOV EBX,dword ptr [ESP + 0x68]      ; 0059ad47
    PUSH EBX                            ; 0059ad4b
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 0059ad4c
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0059ad51
    PUSH 0x0                            ; 0059ad54
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059ad56
    PUSH EBX                            ; 0059ad5c
    LEA ESI,[ESP + 0x8]                 ; 0059ad5d
    LEA EDI,[ESP + 0x20]                ; 0059ad61
    CALL dword ptr [EAX + 0x1c]         ; 0059ad65
    MOV ECX,0x6                         ; 0059ad68
    ADD ESP,0x4                         ; 0059ad6d
    LEA EAX,[ESP + 0x1c]                ; 0059ad70
    LEA ESI,[ESP + 0x4]                 ; 0059ad74
    PUSH EAX                            ; 0059ad78
    MOVSD.REP ES:EDI,ESI                ; 0059ad79
    CALL core_box.cpp_FUN_004207b0      ; 0059ad7b
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 0059ad80
    MOV EBP,EAX                         ; 0059ad83
    TEST EAX,EAX                        ; 0059ad85
    JNZ 0x0059ad9c                      ; 0059ad87
        ;   XREF to: 0059ad9c (CONDITIONAL_JUMP)  ; LAB_0059ad9c
    PUSH EBX                            ; 0059ad89
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 0059ad8a
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0059ad8f
    MOV EAX,EBP                         ; 0059ad92
    ADD ESP,0x54                        ; 0059ad94
    POP EBP                             ; 0059ad97
    POP EDI                             ; 0059ad98
    POP ESI                             ; 0059ad99
    POP EBX                             ; 0059ad9a
    RET                                 ; 0059ad9b
    MOV EAX,dword ptr [EBX + 0x310]     ; 0059ad9c
        ;   Label: LAB_0059ad9c
    MOV dword ptr [ESP + 0x34],EAX      ; 0059ada2
    LEA EAX,[ESP + 0x30]                ; 0059ada6
    LEA ESI,[ESP + 0x3c]                ; 0059adaa
    PUSH EAX                            ; 0059adae
    LEA EDI,[ESP + 0x4c]                ; 0059adaf
    XOR EDX,EDX                         ; 0059adb3
    PUSH EBX                            ; 0059adb5
    MOV dword ptr [ESP + 0x38],EDX      ; 0059adb6
    MOV dword ptr [ESP + 0x40],EDX      ; 0059adba
    CALL core_actor.cpp_FUN_00408b00    ; 0059adbe
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    ADD ESP,0x8                         ; 0059adc3
    LEA EAX,[ESP + 0x48]                ; 0059adc6
    LEA ESI,[ESP + 0x3c]                ; 0059adca
    PUSH EAX                            ; 0059adce
    MOVSD ES:EDI,ESI                    ; 0059adcf
    MOVSD ES:EDI,ESI                    ; 0059add0
    MOVSD ES:EDI,ESI                    ; 0059add1
    PUSH 0x2c8af28                      ; 0059add2
    MOV ESI,dword ptr [0x00612560]      ; 0059add7 | DAT_00612560
    PUSH ESI                            ; 0059addd
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 0059adde
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0059ade3
    PUSH -0x1                           ; 0059ade6
    LEA EAX,[EBX + 0x158]               ; 0059ade8
    PUSH 0x0                            ; 0059adee
    PUSH EAX                            ; 0059adf0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 0059adf1
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0059adf6
    MOV EDI,dword ptr [0x00612560]      ; 0059adf9 | DAT_00612560
    PUSH EDI                            ; 0059adff
    CALL engine_matrix.c_pop_FUN_004839a0 ; 0059ae00
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 0059ae05
    PUSH EBX                            ; 0059ae08
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 0059ae09
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0059ae0e
    MOV EAX,EBP                         ; 0059ae11
    ADD ESP,0x54                        ; 0059ae13
    POP EBP                             ; 0059ae16
    POP EDI                             ; 0059ae17
    POP ESI                             ; 0059ae18
    POP EBX                             ; 0059ae19
    RET                                 ; 0059ae1a

