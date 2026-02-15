; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setedit_cpp_CDemonSet_FUN_00578c60(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_setedit.cpp_CDemonSet_FUN_00578a20 at 00578b16
;
; Referenced Globals:
;   TerminatedCString s_core_setedit_cpp_00646b91
;   TerminatedCString s_Import_A3D_is_broken_aga_00646ba5
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    MOV EDX,0x646b91                    ; 00578c60 | = "..\\core\\setedit.cpp"
        ;   Label: core_setedit.cpp_CDemonSet_FUN_00578c60
    MOV ECX,0x41b                       ; 00578c65
    PUSH 0x646ba5                       ; 00578c6a | = "Import A3D is broken again"
    MOV dword ptr [0x02f0ca48],EDX      ; 00578c6f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00578c75 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00578c7b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00578c80
    RET                                 ; 00578c83

