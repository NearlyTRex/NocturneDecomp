; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_keyactor_cpp_FUN_004df1a0(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_FUN_00408a80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004df1a0
        ;   Label: core_keyactor.cpp_FUN_004df1a0
    ADD EAX,0x2b4                       ; 004df1a4
    PUSH EAX                            ; 004df1a9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 004df1aa
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004df1af
    MOV EDX,dword ptr [ESP + 0x4]       ; 004df1b2
    PUSH EDX                            ; 004df1b6
    CALL core_actor.cpp_FUN_00408a80    ; 004df1b7
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408a80(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004df1bc
    RET                                 ; 004df1bf

