; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_bat_cpp_CBat_getActorType_FUN_00410b40(CBat *this_ptr)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBatClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7c3710                    ; 00410b40 | g_CBatClassInfo
        ;   Label: core_bat.cpp_CBat_getActorType_FUN_00410b40
    RET                                 ; 00410b45

