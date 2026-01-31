; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_lever_cpp_CLever_setup_FUN_005048a0(CLever *this_ptr)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005048a0
        ;   Label: core_lever.cpp_CLever_setup_FUN_005048a0
    PUSH ESI                            ; 005048a1
    PUSH EDI                            ; 005048a2
    PUSH EBP                            ; 005048a3
    MOV EBP,ESP                         ; 005048a4
    MOV EBX,dword ptr [EBP + 0x14]      ; 005048a6
    LEA EAX,[EBX + 0x158]               ; 005048a9
    PUSH EAX                            ; 005048af
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 005048b0
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005048b5
    PUSH EBX                            ; 005048b8
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 005048b9
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

