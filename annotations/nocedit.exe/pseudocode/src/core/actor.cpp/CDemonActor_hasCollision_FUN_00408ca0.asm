; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_actor.cpp_CDemonActor_hasCollision_FUN_00408ca0(CDemonActor * this_ptr, SCollisionInfo * collision_info)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_0061364e
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;
; *****************************************************************************

section .text

    PUSH 0x27e                          ; 00408ca0
        ;   Label: core_actor.cpp_CDemonActor_hasCollision_FUN_00408ca0
    PUSH 0x61364e                       ; 00408ca5 | = "..\\core\\actor.cpp" | s_core_actor_cpp_0061364e = ..\core\actor.cpp
    MOV EDX,dword ptr [ESP + 0xc]       ; 00408caa
    PUSH EDX                            ; 00408cae
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 00408caf | void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
    MOV EAX,0x1                         ; 00408cb4
    ADD ESP,0xc                         ; 00408cb9
    RET                                 ; 00408cbc

