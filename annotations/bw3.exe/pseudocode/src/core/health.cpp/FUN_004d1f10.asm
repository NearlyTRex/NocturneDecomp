; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_health_cpp_FUN_004d1f10(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_box.cpp_FUN_0041daf0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d1f10
        ;   Label: core_health.cpp_FUN_004d1f10
    PUSH ESI                            ; 004d1f11
    PUSH EDI                            ; 004d1f12
    SUB ESP,0x30                        ; 004d1f13
    MOV EBX,dword ptr [ESP + 0x40]      ; 004d1f16
    PUSH EBX                            ; 004d1f1a
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 004d1f1b
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004d1f20
    PUSH 0x0                            ; 004d1f23
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d1f25
    PUSH EBX                            ; 004d1f2b
    LEA ESI,[ESP + 0x8]                 ; 004d1f2c
    LEA EDI,[ESP + 0x20]                ; 004d1f30
    CALL dword ptr [EAX + 0x1c]         ; 004d1f34
    MOV ECX,0x6                         ; 004d1f37
    ADD ESP,0x4                         ; 004d1f3c
    LEA EAX,[ESP + 0x1c]                ; 004d1f3f
    LEA ESI,[ESP + 0x4]                 ; 004d1f43
    PUSH EAX                            ; 004d1f47
    MOVSD.REP ES:EDI,ESI                ; 004d1f48
    CALL core_box.cpp_FUN_0041daf0      ; 004d1f4a
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 004d1f4f
    MOV ESI,EAX                         ; 004d1f52
    TEST EAX,EAX                        ; 004d1f54
    JNZ 0x004d1f6a                      ; 004d1f56
        ;   XREF to: 004d1f6a (CONDITIONAL_JUMP)  ; LAB_004d1f6a
    PUSH EBX                            ; 004d1f58
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 004d1f59
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004d1f5e
    MOV EAX,ESI                         ; 004d1f61
    ADD ESP,0x30                        ; 004d1f63
    POP EDI                             ; 004d1f66
    POP ESI                             ; 004d1f67
    POP EBX                             ; 004d1f68
    RET                                 ; 004d1f69
    PUSH -0x1                           ; 004d1f6a
        ;   Label: LAB_004d1f6a
    LEA EAX,[EBX + 0x158]               ; 004d1f6c
    PUSH dword ptr [EBX + 0x2dc]        ; 004d1f72
    PUSH EAX                            ; 004d1f78
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 004d1f79
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004d1f7e
    PUSH EBX                            ; 004d1f81
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 004d1f82
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004d1f87
    MOV EAX,ESI                         ; 004d1f8a
    ADD ESP,0x30                        ; 004d1f8c
    POP EDI                             ; 004d1f8f
    POP ESI                             ; 004d1f90
    POP EBX                             ; 004d1f91
    RET                                 ; 004d1f92

