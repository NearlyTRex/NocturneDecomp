; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_bugs_cpp_CBugs_getActorType_FUN_00421030(CBugs *this_ptr)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBugsActorType_00765888
;
; *****************************************************************************

section .text

    MOV EAX,0x765888                    ; 00421030 | g_CBugsActorType_00765888
        ;   Label: core_bugs.cpp_CBugs_getActorType_FUN_00421030
    RET                                 ; 00421035

