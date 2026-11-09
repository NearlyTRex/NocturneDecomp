; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ladder_cpp_CLadder_setup_FUN_004df700(CLadder *this_ptr)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_FUN_00408890
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004df700
        ;   Label: core_ladder.cpp_CLadder_setup_FUN_004df700
    PUSH EDX                            ; 004df704
    CALL core_actor.cpp_FUN_00408890    ; 004df705
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408890(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004df70a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004df70d
    ADD EAX,0x158                       ; 004df711
    PUSH EAX                            ; 004df716
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 004df717
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004df71c
    RET                                 ; 004df71f

