; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_boxactor.cpp_FUN_004228e0()
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
;   core_boxactor.cpp_FUN_004218d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004228e0
        ;   Label: core_boxactor.cpp_FUN_004228e0
    PUSH EDX                            ; 004228e4
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 004228e5
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004228ea
    MOV ECX,dword ptr [ESP + 0x4]       ; 004228ed
    PUSH ECX                            ; 004228f1
    CALL core_boxactor.cpp_FUN_004218d0 ; 004228f2
        ;   XREF to: 004218d0 (UNCONDITIONAL_CALL)  ; undefined core_boxactor.cpp_FUN_004218d0()
    ADD ESP,0x4                         ; 004228f7
    RET                                 ; 004228fa

