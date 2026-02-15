; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_0061393a
;   TerminatedCString s_core_actor_cpp_0061394c
;   TerminatedCString s_CDemonActor_processActio_0061395e
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409f60
        ;   Label: core_actor.cpp_CDemonActor_processActionButton_FUN_00409f60
    PUSH 0x559                          ; 00409f61
    PUSH 0x61393a                       ; 00409f66 | = "..\\core\\actor.cpp"
    MOV EDX,dword ptr [ESP + 0x10]      ; 00409f6b
    PUSH EDX                            ; 00409f6f
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 00409f70
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 00409f75
    MOV EBX,0x560                       ; 00409f78
    MOV ECX,0x61394c                    ; 00409f7d | = "..\\core\\actor.cpp"
    PUSH 0x61395e                       ; 00409f82 | = "CDemonActor::processActionButton - sh..."
    MOV dword ptr [0x02f0ca4c],EBX      ; 00409f87 | g_CurrentLineNumber
    MOV dword ptr [0x02f0ca48],ECX      ; 00409f8d | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00409f93
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    MOV EAX,0x1                         ; 00409f98
    ADD ESP,0x4                         ; 00409f9d
    POP EBX                             ; 00409fa0
    RET                                 ; 00409fa1

