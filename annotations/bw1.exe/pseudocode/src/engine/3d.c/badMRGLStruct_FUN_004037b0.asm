; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_badMRGLStruct_FUN_004037b0(SMRGLHeaderExtended *prim)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   prim
;
; Referenced Globals:
;   TerminatedCString s_engine_3d_c_005d2315
;   TerminatedCString s_Bad_MRGL_struct_005d2324
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EDX,0x5d2315                    ; 004037b0 | = "..\\engine\\3d.c"
        ;   Label: engine_3d.c_badMRGLStruct_FUN_004037b0
    MOV ECX,0x11b                       ; 004037b5
    PUSH 0x5d2324                       ; 004037ba | = "Bad MRGL struct"
    MOV dword ptr [0x01d1d400],EDX      ; 004037bf | g_CurrentFilename
    MOV dword ptr [0x01d1d404],ECX      ; 004037c5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_005030e0 ; 004037cb
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_005030e0(char * format)
    ADD ESP,0x4                         ; 004037d0
    MOV EAX,dword ptr [ESP + 0x4]       ; 004037d3
    RET                                 ; 004037d7

