; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_actor.cpp_CDemonActor_getActorType_FUN_00408b50(CDemonActor * this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_006135c9
;   TerminatedCString s_core_actor_cpp_006135db
;   TerminatedCString s_CDemonActor_getActorType_006135ed
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408b50
        ;   Label: core_actor.cpp_CDemonActor_getActorType_FUN_00408b50
    PUSH 0x226                          ; 00408b51
    PUSH 0x6135c9                       ; 00408b56 | = "..\\core\\actor.cpp"
    MOV EDX,dword ptr [ESP + 0x10]      ; 00408b5b
    PUSH EDX                            ; 00408b5f
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 00408b60
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 00408b65
    MOV EBX,0x22a                       ; 00408b68
    MOV ECX,0x6135db                    ; 00408b6d | = "..\\core\\actor.cpp"
    PUSH 0x6135ed                       ; 00408b72 | = "CDemonActor::getActorType called.  Sh..."
    MOV dword ptr [0x02f0ca4c],EBX      ; 00408b77 | g_CurrentLineNumber
    MOV dword ptr [0x02f0ca48],ECX      ; 00408b7d | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00408b83
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00408b88
    XOR EAX,EAX                         ; 00408b8b
    POP EBX                             ; 00408b8d
    RET                                 ; 00408b8e

