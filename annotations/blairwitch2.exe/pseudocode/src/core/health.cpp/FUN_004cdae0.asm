; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_health_cpp_FUN_004cdae0(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_FUN_00408a80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cdae0
        ;   Label: core_health.cpp_FUN_004cdae0
    ADD EAX,0x2b4                       ; 004cdae4
    PUSH EAX                            ; 004cdae9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 004cdaea
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004cdaef
    MOV EDX,dword ptr [ESP + 0x4]       ; 004cdaf2
    PUSH EDX                            ; 004cdaf6
    CALL core_actor.cpp_FUN_00408a80    ; 004cdaf7
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408a80(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cdafc
    RET                                 ; 004cdaff

