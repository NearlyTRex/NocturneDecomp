; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_trash_cpp_FUN_0056dd30(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_actor.cpp_FUN_00408b40
;   core_box.cpp_FUN_0041daf0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_matrix.c_pop_FUN_0046d080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056dd30
        ;   Label: core_trash.cpp_FUN_0056dd30
    PUSH ESI                            ; 0056dd31
    PUSH EDI                            ; 0056dd32
    PUSH EBP                            ; 0056dd33
    SUB ESP,0x54                        ; 0056dd34
    MOV EBX,dword ptr [ESP + 0x68]      ; 0056dd37
    PUSH EBX                            ; 0056dd3b
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 0056dd3c
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0056dd41
    PUSH 0x0                            ; 0056dd44
    MOV EAX,dword ptr [EBX + 0x154]     ; 0056dd46
    PUSH EBX                            ; 0056dd4c
    LEA ESI,[ESP + 0x8]                 ; 0056dd4d
    LEA EDI,[ESP + 0x20]                ; 0056dd51
    CALL dword ptr [EAX + 0x1c]         ; 0056dd55
    MOV ECX,0x6                         ; 0056dd58
    ADD ESP,0x4                         ; 0056dd5d
    LEA EAX,[ESP + 0x1c]                ; 0056dd60
    LEA ESI,[ESP + 0x4]                 ; 0056dd64
    PUSH EAX                            ; 0056dd68
    MOVSD.REP ES:EDI,ESI                ; 0056dd69
    CALL core_box.cpp_FUN_0041daf0      ; 0056dd6b
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 0056dd70
    MOV EBP,EAX                         ; 0056dd73
    TEST EAX,EAX                        ; 0056dd75
    JNZ 0x0056dd8c                      ; 0056dd77
        ;   XREF to: 0056dd8c (CONDITIONAL_JUMP)  ; LAB_0056dd8c
    PUSH EBX                            ; 0056dd79
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 0056dd7a
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0056dd7f
    MOV EAX,EBP                         ; 0056dd82
    ADD ESP,0x54                        ; 0056dd84
    POP EBP                             ; 0056dd87
    POP EDI                             ; 0056dd88
    POP ESI                             ; 0056dd89
    POP EBX                             ; 0056dd8a
    RET                                 ; 0056dd8b
    MOV EAX,dword ptr [EBX + 0x310]     ; 0056dd8c
        ;   Label: LAB_0056dd8c
    MOV dword ptr [ESP + 0x34],EAX      ; 0056dd92
    LEA EAX,[ESP + 0x30]                ; 0056dd96
    LEA ESI,[ESP + 0x3c]                ; 0056dd9a
    PUSH EAX                            ; 0056dd9e
    LEA EDI,[ESP + 0x4c]                ; 0056dd9f
    XOR EDX,EDX                         ; 0056dda3
    PUSH EBX                            ; 0056dda5
    MOV dword ptr [ESP + 0x38],EDX      ; 0056dda6
    MOV dword ptr [ESP + 0x40],EDX      ; 0056ddaa
    CALL core_actor.cpp_FUN_00408b40    ; 0056ddae
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0056ddb3
    LEA EAX,[ESP + 0x48]                ; 0056ddb6
    LEA ESI,[ESP + 0x3c]                ; 0056ddba
    PUSH EAX                            ; 0056ddbe
    MOVSD ES:EDI,ESI                    ; 0056ddbf
    MOVSD ES:EDI,ESI                    ; 0056ddc0
    MOVSD ES:EDI,ESI                    ; 0056ddc1
    PUSH 0x2cfd900                      ; 0056ddc2
    MOV ESI,dword ptr [0x005f2afc]      ; 0056ddc7 | DAT_005f2afc
    PUSH ESI                            ; 0056ddcd
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 0056ddce
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0056ddd3
    PUSH -0x1                           ; 0056ddd6
    LEA EAX,[EBX + 0x158]               ; 0056ddd8
    PUSH 0x0                            ; 0056ddde
    PUSH EAX                            ; 0056dde0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 0056dde1
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0056dde6
    MOV EDI,dword ptr [0x005f2afc]      ; 0056dde9 | DAT_005f2afc
    PUSH EDI                            ; 0056ddef
    CALL engine_matrix.c_pop_FUN_0046d080 ; 0056ddf0
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 0056ddf5
    PUSH EBX                            ; 0056ddf8
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 0056ddf9
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0056ddfe
    MOV EAX,EBP                         ; 0056de01
    ADD ESP,0x54                        ; 0056de03
    POP EBP                             ; 0056de06
    POP EDI                             ; 0056de07
    POP ESI                             ; 0056de08
    POP EBX                             ; 0056de09
    RET                                 ; 0056de0a

