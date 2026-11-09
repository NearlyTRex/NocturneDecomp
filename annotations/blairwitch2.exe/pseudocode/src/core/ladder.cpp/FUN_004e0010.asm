; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ladder_cpp_FUN_004e0010(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_FUN_00408a80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e0010
        ;   Label: core_ladder.cpp_FUN_004e0010
    PUSH EDX                            ; 004e0014
    CALL core_actor.cpp_FUN_00408a80    ; 004e0015
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408a80(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e001a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e001d
    ADD EAX,0x2b4                       ; 004e0021
    PUSH EAX                            ; 004e0026
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 004e0027
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e002c
    RET                                 ; 004e002f

