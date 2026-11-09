; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_burncrss_cpp_CBurncross_getActorType_FUN_00424420(CBurncross *this_ptr)
;
; Parameters:
; CBurncross *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBurncrossClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7e2a18                    ; 00424420 | g_CBurncrossClassInfo
        ;   Label: core_burncrss.cpp_CBurncross_getActorType_FUN_00424420
    RET                                 ; 00424425

