; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_vessel.cpp_CCryptVessel_FUN_005e9d10(CCryptVessel * this_ptr)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005e9d10
        ;   Label: core_vessel.cpp_CCryptVessel_FUN_005e9d10
    PUSH EDX                            ; 005e9d14
    MOV ECX,dword ptr [ESP + 0x8]       ; 005e9d15
    PUSH ECX                            ; 005e9d19
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 005e9d1a | void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, FILE * file_handle)
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e9d1f
    RET                                 ; 005e9d22

