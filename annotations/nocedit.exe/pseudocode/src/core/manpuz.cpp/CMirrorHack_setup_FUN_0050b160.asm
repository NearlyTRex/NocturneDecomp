; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_manpuz_cpp_CMirrorHack_setup_FUN_0050b160(CMirrorHack *this_ptr)
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0050b160
        ;   Label: core_manpuz.cpp_CMirrorHack_setup_FUN_0050b160
    PUSH EDX                            ; 0050b164
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 0050b165
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

