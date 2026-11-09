; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_bugs_cpp_CBugs_getActorType_FUN_00424f70(CBugs *this_ptr)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBugsClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7c60e4                    ; 00424f70 | g_CBugsClassInfo
        ;   Label: core_bugs.cpp_CBugs_getActorType_FUN_00424f70
    RET                                 ; 00424f75

