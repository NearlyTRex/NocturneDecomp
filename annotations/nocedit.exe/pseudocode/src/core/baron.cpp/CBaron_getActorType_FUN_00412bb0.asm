; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_baron_cpp_CBaron_getActorType_FUN_00412bb0(CBaron *this_ptr)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBaronClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x8224e0                    ; 00412bb0 | g_CBaronClassInfo
        ;   Label: core_baron.cpp_CBaron_getActorType_FUN_00412bb0
    RET                                 ; 00412bb5

