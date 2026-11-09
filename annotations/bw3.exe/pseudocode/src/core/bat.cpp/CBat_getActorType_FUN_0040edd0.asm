; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_bat_cpp_CBat_getActorType_FUN_0040edd0(CBat *this_ptr)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBatClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7dfe54                    ; 0040edd0 | g_CBatClassInfo
        ;   Label: core_bat.cpp_CBat_getActorType_FUN_0040edd0
    RET                                 ; 0040edd5

