; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_bat_cpp_CBat_getActorType_FUN_00411a00(CBat *this_ptr)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBatClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x764560                    ; 00411a00 | g_CBatClassInfo
        ;   Label: core_bat.cpp_CBat_getActorType_FUN_00411a00
    RET                                 ; 00411a05

