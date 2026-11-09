; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_baron_cpp_CBaron_getActorType_FUN_0040f200(CBaron *this_ptr)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBaronClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7c34e0                    ; 0040f200 | g_CBaronClassInfo
        ;   Label: core_baron.cpp_CBaron_getActorType_FUN_0040f200
    RET                                 ; 0040f205

