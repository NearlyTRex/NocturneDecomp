; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction8_FUN_00404df0(SMRGLHeaderExtended *primitive)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   primitive
; Local Variables:
; char[80]         Stack[-0x54]:80  local_54
;
; Referenced Globals:
;   TerminatedCString s_Old_func_d_00613396
;   TerminatedCString s_engine_3d_c_006133a4
;   int g_RenderResult
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404df0
        ;   Label: engine_3d.c_oldFunction8_FUN_00404df0
    SUB ESP,0x50                        ; 00404df1
    MOV EAX,dword ptr [ESP + 0x58]      ; 00404df4
    MOV EDX,dword ptr [EAX]             ; 00404df8
    PUSH EDX                            ; 00404dfa
    PUSH 0x613396                       ; 00404dfb | = "Old func : %d"
    LEA EAX,[ESP + 0x8]                 ; 00404e00
    PUSH EAX                            ; 00404e04
    MOV EBX,0xda                        ; 00404e05
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00404e0a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00404e0f
    MOV EAX,ESP                         ; 00404e12
    MOV ECX,0x6133a4                    ; 00404e14 | = "..\\engine\\3d.c"
    PUSH EAX                            ; 00404e19
    MOV dword ptr [0x02f0ca4c],EBX      ; 00404e1a | g_CurrentLineNumber
    MOV dword ptr [0x02f0ca48],ECX      ; 00404e20 | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00404e26
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    MOV EAX,0x772a84                    ; 00404e2b | g_RenderResult
    ADD ESP,0x4                         ; 00404e30
    ADD ESP,0x50                        ; 00404e33
    POP EBX                             ; 00404e36
    RET                                 ; 00404e37

