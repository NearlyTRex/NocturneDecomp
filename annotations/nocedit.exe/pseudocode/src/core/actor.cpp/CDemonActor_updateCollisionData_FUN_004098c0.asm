; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_CDemonActor_updateCollisionData_FUN_004098c0(CDemonActor * this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_006138bc
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;
; *****************************************************************************

section .text

    PUSH 0x4be                          ; 004098c0
        ;   Label: core_actor.cpp_CDemonActor_updateCollisionData_FUN_004098c0
    PUSH 0x6138bc                       ; 004098c5 | = "..\\core\\actor.cpp" | s_core_actor_cpp_006138bc = ..\core\actor.cpp
    MOV EDX,dword ptr [ESP + 0xc]       ; 004098ca
    PUSH EDX                            ; 004098ce
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 004098cf | void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004098d4
    RET                                 ; 004098d7

