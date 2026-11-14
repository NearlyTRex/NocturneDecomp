; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_baron_cpp_CBaron_getActorType_FUN_0040f680(CBaron *this_ptr)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBaronClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7bc4e0                    ; 0040f680 | g_CBaronClassInfo
        ;   Label: core_baron.cpp_CBaron_getActorType_FUN_0040f680
    RET                                 ; 0040f685

