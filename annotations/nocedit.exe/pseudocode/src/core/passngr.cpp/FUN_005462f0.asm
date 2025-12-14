; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_passngr.cpp_FUN_005462f0()
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005462f0
        ;   Label: core_passngr.cpp_FUN_005462f0
    PUSH EDX                            ; 005462f4
    MOV ECX,dword ptr [ESP + 0x8]       ; 005462f5
    PUSH ECX                            ; 005462f9
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 005462fa
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, FILE * file_handle)
    ADD ESP,0x8                         ; 005462ff
    RET                                 ; 00546302

