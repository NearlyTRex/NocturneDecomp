; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * __cdecl engine_3d_c_oldFunction_FUN_00403740(SMRGLHeaderPrimitive *primitive)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   primitive
; Local Variables:
; undefined        Stack[-0x54]:1  local_54
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
;   crt_stdio.c__sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403740
        ;   Label: engine_3d.c_oldFunction_FUN_00403740
    SUB ESP,0x50                        ; 00403741
    MOV EAX,dword ptr [ESP + 0x58]      ; 00403744
    MOV EDX,dword ptr [EAX]             ; 00403748
    PUSH EDX                            ; 0040374a
    PUSH 0x613396                       ; 0040374b | = "Old func : %d"
    LEA EAX,[ESP + 0x8]                 ; 00403750
    PUSH EAX                            ; 00403754
    MOV EBX,0xda                        ; 00403755
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0040375a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0040375f
    MOV EAX,ESP                         ; 00403762
    MOV ECX,0x6133a4                    ; 00403764 | = "..\\engine\\3d.c"
    PUSH EAX                            ; 00403769
    MOV dword ptr [0x02f0ca4c],EBX      ; 0040376a | g_CurrentLineNumber
    MOV dword ptr [0x02f0ca48],ECX      ; 00403770 | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00403776
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    MOV EAX,0x772a84                    ; 0040377b | g_RenderResult
    ADD ESP,0x4                         ; 00403780
    ADD ESP,0x50                        ; 00403783
    POP EBX                             ; 00403786
    RET                                 ; 00403787

