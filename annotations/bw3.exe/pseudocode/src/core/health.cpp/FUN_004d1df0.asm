; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_health_cpp_FUN_004d1df0(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_FUN_00408890
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d1df0
        ;   Label: core_health.cpp_FUN_004d1df0
    ADD EAX,0x158                       ; 004d1df4
    PUSH EAX                            ; 004d1df9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 004d1dfa
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004d1dff
    MOV EDX,dword ptr [ESP + 0x4]       ; 004d1e02
    PUSH EDX                            ; 004d1e06
    CALL core_actor.cpp_FUN_00408890    ; 004d1e07
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408890(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004d1e0c
    RET                                 ; 004d1e0f

