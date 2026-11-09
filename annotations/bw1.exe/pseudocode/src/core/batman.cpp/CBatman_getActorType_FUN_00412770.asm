; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_batman_cpp_CBatman_getActorType_FUN_00412770(CBatman *this_ptr)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBatmanClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7c37e8                    ; 00412770 | g_CBatmanClassInfo
        ;   Label: core_batman.cpp_CBatman_getActorType_FUN_00412770
    RET                                 ; 00412775

