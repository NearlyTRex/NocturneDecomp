; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * engine_3d.c_badMRGLStruct_FUN_004037b0(SMRGLHeaderExtended * primitive)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   primitive
;
; Referenced Globals:
;   TerminatedCString s_engine_3d_c_006133b3
;   TerminatedCString s_Bad_MRGL_struct_006133c2
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    MOV EDX,0x6133b3                    ; 004037b0 | = "..\\engine\\3d.c"
        ;   Label: engine_3d.c_badMRGLStruct_FUN_004037b0
    MOV ECX,0x11a                       ; 004037b5
    PUSH 0x6133c2                       ; 004037ba | = "Bad MRGL struct"
    MOV dword ptr [0x02f0ca48],EDX      ; 004037bf | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004037c5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004037cb
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004037d0
    MOV EAX,dword ptr [ESP + 0x4]       ; 004037d3
    RET                                 ; 004037d7

