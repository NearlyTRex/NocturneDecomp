; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_msnedit.cpp_CDemonMission_makeOptimizedPalette_FUN_0053ccc0()
;
;
; Referenced Globals:
;   TerminatedCString s_core_msnedit_cpp_0063c8a1
;   TerminatedCString s_CDemonMission_makeOptimi_0063c8b5
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    MOV EDX,0x63c8a1                    ; 0053ccc0 | = "..\\core\\msnedit.cpp"
        ;   Label: core_msnedit.cpp_CDemonMission_makeOptimizedPalette_FUN_0053ccc0
    MOV ECX,0xbb8                       ; 0053ccc5
    PUSH 0x63c8b5                       ; 0053ccca | = "CDemonMission::makeOptimizedPalette -..."
    MOV dword ptr [0x02f0ca48],EDX      ; 0053cccf | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0053ccd5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0053ccdb
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0053cce0
    RET                                 ; 0053cce3

