; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_keyactor_cpp_CKeyActor_setup_FUN_004de890(CKeyActor *this_ptr)
;
; Parameters:
; CKeyActor *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408890
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004de890
        ;   Label: core_keyactor.cpp_CKeyActor_setup_FUN_004de890
    ADD EAX,0x158                       ; 004de894
    PUSH EAX                            ; 004de899
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 004de89a
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004de89f
    MOV EDX,dword ptr [ESP + 0x4]       ; 004de8a2
    PUSH EDX                            ; 004de8a6
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408890 ; 004de8a7
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408890(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004de8ac
    RET                                 ; 004de8af

