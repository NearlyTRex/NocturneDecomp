; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_goggles_cpp_FUN_004cc710(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_FUN_00408890
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004cc710
        ;   Label: core_goggles.cpp_FUN_004cc710
    PUSH EDX                            ; 004cc714
    CALL core_actor.cpp_FUN_00408890    ; 004cc715
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408890(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cc71a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cc71d
    ADD EAX,0x158                       ; 004cc721
    PUSH EAX                            ; 004cc726
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 004cc727
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004cc72c
    RET                                 ; 004cc72f

