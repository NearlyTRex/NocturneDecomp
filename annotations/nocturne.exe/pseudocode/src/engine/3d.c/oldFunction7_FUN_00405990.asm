; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction7_FUN_00405990(SMRGLHeaderExtended *primitive)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   primitive
;
; Referenced Globals:
;   TerminatedCString s_engine_3d_c_00577504
;   TerminatedCString s_old_func_00577513
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x577504                    ; 00405990 | = "..\\engine\\3d.c"
        ;   Label: engine_3d.c_oldFunction7_FUN_00405990
    MOV ECX,0x4ff                       ; 00405995
    PUSH 0x577513                       ; 0040599a | = "old func"
    MOV dword ptr [0x01cc4800],EDX      ; 0040599f | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 004059a5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004059ab
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004059b0
    XOR EAX,EAX                         ; 004059b3
    RET                                 ; 004059b5

