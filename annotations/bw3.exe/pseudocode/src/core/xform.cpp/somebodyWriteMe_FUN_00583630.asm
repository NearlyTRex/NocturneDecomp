; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_somebodyWriteMe_FUN_00583630(void)
;
;
; Referenced Globals:
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EDX,0x5d80b3                    ; 00583630
        ;   Label: core_xform.cpp_somebodyWriteMe_FUN_00583630
    MOV ECX,0x7c                        ; 00583635
    PUSH 0x5d80c5                       ; 0058363a
    MOV dword ptr [0x01d71de0],EDX      ; 0058363f | g_CurrentFilename
    MOV dword ptr [0x01d71de4],ECX      ; 00583645 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004e4330 ; 0058364b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4330(char * format)
    ADD ESP,0x4                         ; 00583650
    RET                                 ; 00583653

