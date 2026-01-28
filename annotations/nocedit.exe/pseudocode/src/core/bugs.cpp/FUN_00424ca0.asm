; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown CDemonActorType * core_bugs_cpp_FUN_00424ca0(void)
;
;
; Referenced Globals:
;   CDemonActorType g_CBugsClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x823a38                    ; 00424ca0 | g_CBugsClassInfo
        ;   Label: core_bugs.cpp_FUN_00424ca0
    RET                                 ; 00424ca5

