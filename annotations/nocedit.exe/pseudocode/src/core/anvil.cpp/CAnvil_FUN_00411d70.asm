; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_anvil.cpp_CAnvil_FUN_00411d70(CAnvil * this_ptr)
;
; Parameters:
; CAnvil *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00411d70
        ;   Label: core_anvil.cpp_CAnvil_FUN_00411d70
    PUSH EDX                            ; 00411d74
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 00411d75
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

