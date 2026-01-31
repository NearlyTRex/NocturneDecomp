; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_bride_cpp_CBride_getActorType_FUN_00423790(CBride *this_ptr)
;
; Parameters:
; CBride *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBrideClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x822ca0                    ; 00423790 | g_CBrideClassInfo
        ;   Label: core_bride.cpp_CBride_getActorType_FUN_00423790
    RET                                 ; 00423795

