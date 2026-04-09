; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_displayMessageBoxAndQuit_FUN_005f3920(char *message)
;
; Parameters:
; char *           Stack[0x4]:4   message
;
; XREF[1]:
;   core_main.c_displayErrorAndQuit_FUN_00506f10 at 0050702c
;
; Referenced Globals:
;   MESSAGE_BOX_A_FUNC* g_MessageBoxAFunc = 00211b44
;   EXIT_PROCESS_FUNC* g_ExitProcessFunc = 00211d12
;   TerminatedCString s_s_File_s_Line_d_00657f84
;   TerminatedCString s_Nocturne_Editor_006581a7
;   char* g_ApplicationTitle = 006581a7
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   char[6000] g_ErrorMessageBuffer_03f96c30
;   HWND g_MainWindowHandle
;
; Called Functions:
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   MessageBoxA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f3920
        ;   Label: wincore_winrun.cpp_displayMessageBoxAndQuit_FUN_005f3920
    PUSH ESI                            ; 005f3921
    PUSH EDI                            ; 005f3922
    MOV EDX,dword ptr [0x02f0ca4c]      ; 005f3923 | g_CurrentLineNumber
    PUSH EDX                            ; 005f3929
    MOV ECX,dword ptr [0x02f0ca48]      ; 005f392a | g_CurrentFilename
    PUSH ECX                            ; 005f3930
    MOV EBX,dword ptr [ESP + 0x18]      ; 005f3931
    PUSH EBX                            ; 005f3935
    PUSH 0x657f84                       ; 005f3936 | = "%s\n\nFile: %s\nLine: %d"
    PUSH 0x3f96c30                      ; 005f393b | g_ErrorMessageBuffer_03f96c30
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005f3940
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 005f3945
    PUSH 0x30                           ; 005f3948
    MOV ESI,dword ptr [0x0068499c]      ; 005f394a | g_ApplicationTitle
    PUSH ESI                            ; 005f3950 | = "Nocturne Editor"
    PUSH 0x3f96c30                      ; 005f3951 | g_ErrorMessageBuffer_03f96c30
    MOV EDI,dword ptr [0x03f98468]      ; 005f3956 | g_MainWindowHandle
    PUSH EDI                            ; 005f395c
    CALL dword ptr CS:[0x6114c4]        ; 005f395d | g_MessageBoxAFunc
    PUSH 0x1                            ; 005f3964
    CALL dword ptr CS:[0x611534]        ; 005f3966 | g_ExitProcessFunc
    POP EDI                             ; 005f396d
    POP ESI                             ; 005f396e
    POP EBX                             ; 005f396f
    RET                                 ; 005f3970

