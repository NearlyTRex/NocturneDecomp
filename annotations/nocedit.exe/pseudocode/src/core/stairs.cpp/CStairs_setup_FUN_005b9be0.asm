; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_stairs_cpp_CStairs_setup_FUN_005b9be0(CStairs *this_ptr)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b9be0
        ;   Label: core_stairs.cpp_CStairs_setup_FUN_005b9be0
    PUSH EDX                            ; 005b9be4
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 005b9be5
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

