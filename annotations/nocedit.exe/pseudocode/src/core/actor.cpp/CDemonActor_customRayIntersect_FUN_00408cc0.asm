; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float core_actor.cpp_CDemonActor_customRayIntersect_FUN_00408cc0(CDemonActor * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_normal)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   ray_origin
; CVector3f *      Stack[0xc]:4   ray_direction
; CVector3f *      Stack[0x10]:4   out_normal
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_00613660
;   TerminatedCString s_core_actor_cpp_00613672
;   TerminatedCString s_CDemonActor_customRayInt_00613684
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408cc0
        ;   Label: core_actor.cpp_CDemonActor_customRayIntersect_FUN_00408cc0
    PUSH ESI                            ; 00408cc1
    PUSH 0x292                          ; 00408cc2
    PUSH 0x613660                       ; 00408cc7 | = "..\\core\\actor.cpp"
    MOV EDX,dword ptr [ESP + 0x14]      ; 00408ccc
    PUSH EDX                            ; 00408cd0
    MOV EBX,0x293                       ; 00408cd1
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 00408cd6
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 00408cdb
    MOV ESI,0x40000000                  ; 00408cde
    MOV ECX,0x613672                    ; 00408ce3 | = "..\\core\\actor.cpp"
    PUSH 0x613684                       ; 00408ce8 | = "CDemonActor::customRayIntersect shoul..."
    MOV dword ptr [0x02f0ca4c],EBX      ; 00408ced | g_CurrentLineNumber
    MOV dword ptr [0x02f0ca48],ECX      ; 00408cf3 | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00408cf9
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00408cfe
    MOV EAX,ESI                         ; 00408d01
    POP ESI                             ; 00408d03
    POP EBX                             ; 00408d04
    RET                                 ; 00408d05

