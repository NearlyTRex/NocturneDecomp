; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_bugs_cpp_CBugs_getActorType_FUN_00424ca0(CBugs *this_ptr)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBugsClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x823a38                    ; 00424ca0 | g_CBugsClassInfo
        ;   Label: core_bugs.cpp_CBugs_getActorType_FUN_00424ca0
    RET                                 ; 00424ca5

