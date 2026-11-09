; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_trap_cpp_FUN_005764a0(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_FUN_00408a80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005764a0
        ;   Label: core_trap.cpp_FUN_005764a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005764a1
    PUSH EBX                            ; 005764a5
    CALL core_actor.cpp_FUN_00408a80    ; 005764a6
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408a80(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005764ab
    LEA EAX,[EBX + 0x2b4]               ; 005764ae
    PUSH EAX                            ; 005764b4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 005764b5
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005764ba
    MOV dword ptr [EBX + 0x430],0x0     ; 005764bd
    POP EBX                             ; 005764c7
    RET                                 ; 005764c8

