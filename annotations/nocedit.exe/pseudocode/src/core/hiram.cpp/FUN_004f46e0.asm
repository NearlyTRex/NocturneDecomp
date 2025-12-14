; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_hiram.cpp_FUN_004f46e0()
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004f46e0
        ;   Label: core_hiram.cpp_FUN_004f46e0
    PUSH EDX                            ; 004f46e4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f46e5
    PUSH ECX                            ; 004f46e9
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 004f46ea
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, FILE * file_handle)
    ADD ESP,0x8                         ; 004f46ef
    RET                                 ; 004f46f2

