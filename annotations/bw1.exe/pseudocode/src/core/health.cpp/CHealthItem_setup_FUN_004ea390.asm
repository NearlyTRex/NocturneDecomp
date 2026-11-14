; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_health_cpp_CHealthItem_setup_FUN_004ea390(CHealthItem *this_ptr)
;
; Parameters:
; CHealthItem *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408850
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ea390
        ;   Label: core_health.cpp_CHealthItem_setup_FUN_004ea390
    ADD EAX,0x158                       ; 004ea394
    PUSH EAX                            ; 004ea399
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 004ea39a
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004ea39f
    MOV EDX,dword ptr [ESP + 0x4]       ; 004ea3a2
    PUSH EDX                            ; 004ea3a6
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408850 ; 004ea3a7
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408850(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ea3ac
    NOP                                 ; 004ea3af

