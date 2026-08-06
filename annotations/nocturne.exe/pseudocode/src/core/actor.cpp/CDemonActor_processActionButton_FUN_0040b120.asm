; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_CDemonActor_processActionButton_FUN_0040b120(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_00577747
;   TerminatedCString s_CDemonActor_processActio_00577759
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x577747                    ; 0040b120 | = "..\\core\\actor.cpp"
        ;   Label: core_actor.cpp_CDemonActor_processActionButton_FUN_0040b120
    MOV ECX,0x562                       ; 0040b125
    PUSH 0x577759                       ; 0040b12a | = "CDemonActor::processActionButton - sh..."
    MOV dword ptr [0x01cc4800],EDX      ; 0040b12f | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 0040b135 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0040b13b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    MOV EAX,0x1                         ; 0040b140
    ADD ESP,0x4                         ; 0040b145
    RET                                 ; 0040b148

