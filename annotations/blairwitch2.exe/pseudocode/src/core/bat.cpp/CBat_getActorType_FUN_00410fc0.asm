; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_bat_cpp_CBat_getActorType_FUN_00410fc0(CBat *this_ptr)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBatClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7bc710                    ; 00410fc0 | g_CBatClassInfo
        ;   Label: core_bat.cpp_CBat_getActorType_FUN_00410fc0
    RET                                 ; 00410fc5

