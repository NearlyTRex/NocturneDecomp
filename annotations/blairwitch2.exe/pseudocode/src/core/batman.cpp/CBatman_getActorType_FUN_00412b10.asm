; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_batman_cpp_CBatman_getActorType_FUN_00412b10(CBatman *this_ptr)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBatmanClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7bc7e8                    ; 00412b10 | g_CBatmanClassInfo
        ;   Label: core_batman.cpp_CBatman_getActorType_FUN_00412b10
    RET                                 ; 00412b15

