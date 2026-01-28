; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction_FUN_004041d0(SMRGLHeaderExtended *primitive)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   primitive
; Local Variables:
; undefined1       Stack[-0x54]:1  local_54
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

    PUSH EBX                            ; 004041d0
        ;   Label: engine_3d.c_oldFunction_FUN_004041d0
    SUB ESP,0x50                        ; 004041d1
    MOV EAX,dword ptr [ESP + 0x58]      ; 004041d4
    MOV EDX,dword ptr [EAX]             ; 004041d8
    PUSH EDX                            ; 004041da
    PUSH 0x613396                       ; 004041db | = "Old func : %d"
    LEA EAX,[ESP + 0x8]                 ; 004041e0
    PUSH EAX                            ; 004041e4
    MOV EBX,0xda                        ; 004041e5
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004041ea
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004041ef
    MOV EAX,ESP                         ; 004041f2
    MOV ECX,0x6133a4                    ; 004041f4 | = "..\\engine\\3d.c"
    PUSH EAX                            ; 004041f9
    MOV dword ptr [0x02f0ca4c],EBX      ; 004041fa | g_CurrentLineNumber
    MOV dword ptr [0x02f0ca48],ECX      ; 00404200 | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00404206
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    MOV EAX,0x772a84                    ; 0040420b | g_RenderResult
    ADD ESP,0x4                         ; 00404210
    ADD ESP,0x50                        ; 00404213
    POP EBX                             ; 00404216
    RET                                 ; 00404217

