; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_crate_cpp_CCrate_setup_FUN_00448530(CCrate *this_ptr)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448530
        ;   Label: core_crate.cpp_CCrate_setup_FUN_00448530
    SUB ESP,0x20                        ; 00448531
    MOV EBX,dword ptr [ESP + 0x28]      ; 00448534
    PUSH EBX                            ; 00448538
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 00448539
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

