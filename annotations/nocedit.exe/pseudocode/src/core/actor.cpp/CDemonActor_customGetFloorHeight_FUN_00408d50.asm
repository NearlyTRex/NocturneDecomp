; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50(CDemonActor *this_ptr,float x_pos,float z_pos,float *out_floor_height)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   x_pos
; float            Stack[0xc]:4   z_pos
; float *          Stack[0x10]:4   out_floor_height
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_00613741
;   TerminatedCString s_core_actor_cpp_00613753
;   TerminatedCString s_CDemonActor_customGetFlo_00613765
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408d50
        ;   Label: core_actor.cpp_CDemonActor_customGetFloorHeight_FUN_00408d50
    PUSH 0x29d                          ; 00408d51
    PUSH 0x613741                       ; 00408d56 | = "..\\core\\actor.cpp"
    MOV EDX,dword ptr [ESP + 0x10]      ; 00408d5b
    PUSH EDX                            ; 00408d5f
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 00408d60
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 00408d65
    MOV EBX,0x29e                       ; 00408d68
    MOV ECX,0x613753                    ; 00408d6d | = "..\\core\\actor.cpp"
    PUSH 0x613765                       ; 00408d72 | = "CDemonActor::customGetFloorHeight sho..."
    MOV dword ptr [0x02f0ca4c],EBX      ; 00408d77 | g_CurrentLineNumber
    MOV dword ptr [0x02f0ca48],ECX      ; 00408d7d | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00408d83
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00408d88
    XOR EAX,EAX                         ; 00408d8b
    POP EBX                             ; 00408d8d
    RET                                 ; 00408d8e

