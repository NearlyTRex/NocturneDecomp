; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_drip_cpp_CDrip_getActorType_FUN_0048dff0(CDrip *this_ptr)
;
; Parameters:
; CDrip *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CDripClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2c9b134                   ; 0048dff0 | g_CDripClassInfo
        ;   Label: core_drip.cpp_CDrip_getActorType_FUN_0048dff0
    RET                                 ; 0048dff5

