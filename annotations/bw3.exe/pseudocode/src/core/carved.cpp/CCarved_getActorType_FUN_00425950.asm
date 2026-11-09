; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_carved_cpp_CCarved_getActorType_FUN_00425950(CCarved *this_ptr)
;
; Parameters:
; CCarved *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CCarvedClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7e2a58                    ; 00425950 | g_CCarvedClassInfo
        ;   Label: core_carved.cpp_CCarved_getActorType_FUN_00425950
    RET                                 ; 00425955

