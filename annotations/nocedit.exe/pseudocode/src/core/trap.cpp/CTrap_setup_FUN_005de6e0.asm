; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trap_cpp_CTrap_setup_FUN_005de6e0(CTrap *this_ptr)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005de6e0
        ;   Label: core_trap.cpp_CTrap_setup_FUN_005de6e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005de6e1
    PUSH EBX                            ; 005de6e5
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 005de6e6
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005de6eb
    LEA EAX,[EBX + 0x158]               ; 005de6ee
    PUSH EAX                            ; 005de6f4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 005de6f5
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005de6fa
    MOV dword ptr [EBX + 0x2d4],0x0     ; 005de6fd
    POP EBX                             ; 005de707
    RET                                 ; 005de708

