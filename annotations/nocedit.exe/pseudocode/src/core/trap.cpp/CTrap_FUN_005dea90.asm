; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_trap_cpp_CTrap_FUN_005dea90(CTrap *this_ptr)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005dea90
        ;   Label: core_trap.cpp_CTrap_FUN_005dea90
    PUSH EDX                            ; 005dea94
    MOV ECX,dword ptr [ESP + 0x8]       ; 005dea95
    PUSH ECX                            ; 005dea99
    CALL core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0 ; 005dea9a
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 005dea9f
    RET                                 ; 005deaa2

