; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ladder_cpp_CLadder_setup_FUN_004fd3e0(CLadder *this_ptr)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408850
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004fd3e0
        ;   Label: core_ladder.cpp_CLadder_setup_FUN_004fd3e0
    PUSH EDX                            ; 004fd3e4
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408850 ; 004fd3e5
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408850(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004fd3ea
    MOV EAX,dword ptr [ESP + 0x4]       ; 004fd3ed
    ADD EAX,0x158                       ; 004fd3f1
    PUSH EAX                            ; 004fd3f6
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 004fd3f7
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004fd3fc
    RET                                 ; 004fd3ff

