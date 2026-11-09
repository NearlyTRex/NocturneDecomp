; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ammo_cpp_FUN_0040dc50(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_FUN_00408850
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040dc50
        ;   Label: core_ammo.cpp_FUN_0040dc50
    ADD EAX,0x158                       ; 0040dc54
    PUSH EAX                            ; 0040dc59
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 0040dc5a
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040dc5f
    MOV EDX,dword ptr [ESP + 0x4]       ; 0040dc62
    PUSH EDX                            ; 0040dc66
    CALL core_actor.cpp_FUN_00408850    ; 0040dc67
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408850(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040dc6c
    NOP                                 ; 0040dc6f

