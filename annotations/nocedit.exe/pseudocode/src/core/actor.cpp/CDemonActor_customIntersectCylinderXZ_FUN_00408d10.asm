; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10(CDemonActor *this_ptr,SIntersectXZCylinder *cylinder)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; SIntersectXZCylinder * Stack[0x8]:4   cylinder
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_006136cd
;   TerminatedCString s_core_actor_cpp_006136df
;   TerminatedCString s_CDemonActor_customInters_006136f1
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408d10
        ;   Label: core_actor.cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10
    PUSH 0x298                          ; 00408d11
    PUSH 0x6136cd                       ; 00408d16 | = "..\\core\\actor.cpp"
    MOV EDX,dword ptr [ESP + 0x10]      ; 00408d1b
    PUSH EDX                            ; 00408d1f
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 00408d20
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 00408d25
    MOV EBX,0x299                       ; 00408d28
    MOV ECX,0x6136df                    ; 00408d2d | = "..\\core\\actor.cpp"
    PUSH 0x6136f1                       ; 00408d32 | = "CDemonActor::customIntersectCylinderX..."
    MOV dword ptr [0x02f0ca4c],EBX      ; 00408d37 | g_CurrentLineNumber
    MOV dword ptr [0x02f0ca48],ECX      ; 00408d3d | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00408d43
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00408d48
    POP EBX                             ; 00408d4b
    RET                                 ; 00408d4c

