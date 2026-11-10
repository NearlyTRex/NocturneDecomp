; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trap_cpp_CTrap_setup_FUN_0056cd50(CTrap *this_ptr)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408890
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056cd50
        ;   Label: core_trap.cpp_CTrap_setup_FUN_0056cd50
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056cd51
    PUSH EBX                            ; 0056cd55
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408890 ; 0056cd56
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408890(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0056cd5b
    LEA EAX,[EBX + 0x158]               ; 0056cd5e
    PUSH EAX                            ; 0056cd64
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 0056cd65
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0056cd6a
    MOV dword ptr [EBX + 0x2d4],0x0     ; 0056cd6d
    POP EBX                             ; 0056cd77
    RET                                 ; 0056cd78

