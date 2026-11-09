; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_carved_cpp_CCarved_getActorType_FUN_004286c0(CCarved *this_ptr)
;
; Parameters:
; CCarved *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CCarvedClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7c6124                    ; 004286c0 | g_CCarvedClassInfo
        ;   Label: core_carved.cpp_CCarved_getActorType_FUN_004286c0
    RET                                 ; 004286c5

