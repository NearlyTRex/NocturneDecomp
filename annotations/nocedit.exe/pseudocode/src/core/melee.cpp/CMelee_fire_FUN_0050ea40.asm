; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 core_melee_cpp_CMelee_fire_FUN_0050ea40(void)
;
;
; Referenced Globals:
;   TerminatedCString s_core_melee_cpp_00635ca1
;   TerminatedCString s_CMelee_fire_should_never_00635cb3
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    MOV EDX,0x635ca1                    ; 0050ea40 | = "..\\core\\melee.cpp"
        ;   Label: core_melee.cpp_CMelee_fire_FUN_0050ea40
    MOV ECX,0x8c                        ; 0050ea45
    PUSH 0x635cb3                       ; 0050ea4a | = "CMelee::fire - should never be called..."
    MOV dword ptr [0x02f0ca48],EDX      ; 0050ea4f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0050ea55 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050ea5b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    MOV EAX,0x1                         ; 0050ea60
    ADD ESP,0x4                         ; 0050ea65
    RET                                 ; 0050ea68

