; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_goggles_cpp_FUN_004e3b80(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_FUN_00408850
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e3b80
        ;   Label: core_goggles.cpp_FUN_004e3b80
    PUSH EDX                            ; 004e3b84
    CALL core_actor.cpp_FUN_00408850    ; 004e3b85
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408850(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e3b8a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e3b8d
    ADD EAX,0x158                       ; 004e3b91
    PUSH EAX                            ; 004e3b96
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 004e3b97
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e3b9c
    RET                                 ; 004e3b9f

