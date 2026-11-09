; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trap_cpp_CTrap_setup_FUN_00599d60(CTrap *this_ptr)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_FUN_00408850
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599d60
        ;   Label: core_trap.cpp_CTrap_setup_FUN_00599d60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00599d61
    PUSH EBX                            ; 00599d65
    CALL core_actor.cpp_FUN_00408850    ; 00599d66
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408850(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00599d6b
    LEA EAX,[EBX + 0x158]               ; 00599d6e
    PUSH EAX                            ; 00599d74
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 00599d75
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00599d7a
    MOV dword ptr [EBX + 0x2d4],0x0     ; 00599d7d
    POP EBX                             ; 00599d87
    RET                                 ; 00599d88

