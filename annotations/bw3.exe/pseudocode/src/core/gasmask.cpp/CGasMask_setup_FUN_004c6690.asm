; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gasmask_cpp_CGasMask_setup_FUN_004c6690(CGasMask *this_ptr)
;
; Parameters:
; CGasMask *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_FUN_00408890
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c6690
        ;   Label: core_gasmask.cpp_CGasMask_setup_FUN_004c6690
    PUSH EDX                            ; 004c6694
    CALL core_actor.cpp_FUN_00408890    ; 004c6695
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408890(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c669a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c669d
    ADD EAX,0x158                       ; 004c66a1
    PUSH EAX                            ; 004c66a6
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 004c66a7
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c66ac
    RET                                 ; 004c66af

