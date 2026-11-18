; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_abortOldFuncOp23_FUN_004046b0(SMRGLHeaderExtended *primitive)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   primitive
;
; Referenced Globals:
;   TerminatedCString s_engine_3d_c_005ca3b1
;   TerminatedCString s_old_func_005ca3c0
;   char* g_CHAR_PTR_01d046a0
;   int g_INT_01d046a4
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,0x5ca3b1                    ; 004046b0 | = "..\\engine\\3d.c"
        ;   Label: engine_3d.c_abortOldFuncOp23_FUN_004046b0
    MOV ECX,0x51a                       ; 004046b5
    PUSH 0x5ca3c0                       ; 004046ba | = "old func"
    MOV dword ptr [0x01d046a0],EDX      ; 004046bf | g_CHAR_PTR_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004046c5 | g_INT_01d046a4
    CALL core_main.c_displayErrorAndQuit_FUN_004e4500 ; 004046cb
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4500(char * format)
    ADD ESP,0x4                         ; 004046d0
    XOR EAX,EAX                         ; 004046d3
    RET                                 ; 004046d5

