; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ladder_cpp_CLadder_setup_FUN_004c4340(CLadder *this_ptr)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c4340
        ;   Label: core_ladder.cpp_CLadder_setup_FUN_004c4340
    PUSH EDX                            ; 004c4344
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 004c4345
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00409fc0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c434a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c434d
    ADD EAX,0x150                       ; 004c4351
    PUSH EAX                            ; 004c4356
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 004c4357
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c435c
    RET                                 ; 004c435f

