; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_bugs_cpp_CBugs_getActorType_FUN_0041ef40(CBugs *this_ptr)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBugsClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7bda38                    ; 0041ef40 | g_CBugsClassInfo
        ;   Label: core_bugs.cpp_CBugs_getActorType_FUN_0041ef40
    RET                                 ; 0041ef45

