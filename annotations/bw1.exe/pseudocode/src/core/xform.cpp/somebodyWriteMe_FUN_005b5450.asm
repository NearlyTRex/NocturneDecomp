; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_somebodyWriteMe_FUN_005b5450(void)
;
;
; Referenced Globals:
;   char* g_CHAR_PTR_01d1d400
;   int g_INT_01d1d404
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EDX,0x5fa088                    ; 005b5450
        ;   Label: core_xform.cpp_somebodyWriteMe_FUN_005b5450
    MOV ECX,0x7c                        ; 005b5455
    PUSH 0x5fa09a                       ; 005b545a
    MOV dword ptr [0x01d1d400],EDX      ; 005b545f | g_CHAR_PTR_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 005b5465 | g_INT_01d1d404
    CALL core_main.c_displayErrorAndQuit_FUN_005030e0 ; 005b546b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_005030e0(char * format)
    ADD ESP,0x4                         ; 005b5470
    RET                                 ; 005b5473

