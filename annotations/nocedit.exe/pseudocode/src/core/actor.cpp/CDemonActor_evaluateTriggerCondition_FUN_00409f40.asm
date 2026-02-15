; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_00613928
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;
; *****************************************************************************

section .text

    PUSH 0x545                          ; 00409f40
        ;   Label: core_actor.cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40
    PUSH 0x613928                       ; 00409f45 | = "..\\core\\actor.cpp"
    MOV EDX,dword ptr [ESP + 0xc]       ; 00409f4a
    PUSH EDX                            ; 00409f4e
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 00409f4f
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    MOV ECX,0xbf800000                  ; 00409f54
    ADD ESP,0xc                         ; 00409f59
    MOV EAX,ECX                         ; 00409f5c
    RET                                 ; 00409f5e

