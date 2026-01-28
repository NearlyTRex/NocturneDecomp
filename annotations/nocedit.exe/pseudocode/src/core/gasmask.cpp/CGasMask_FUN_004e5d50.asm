; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_gasmask_cpp_CGasMask_FUN_004e5d50(void)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e5d50
        ;   Label: core_gasmask.cpp_CGasMask_FUN_004e5d50
    PUSH EDX                            ; 004e5d54
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 004e5d55
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

