; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_bugs_cpp_CBugs_getActorType_FUN_00420e90(CBugs *this_ptr)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBugsClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7e29dc                    ; 00420e90 | g_CBugsClassInfo
        ;   Label: core_bugs.cpp_CBugs_getActorType_FUN_00420e90
    RET                                 ; 00420e95

