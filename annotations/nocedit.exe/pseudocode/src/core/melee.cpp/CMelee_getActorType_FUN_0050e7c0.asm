; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_melee_cpp_CMelee_getActorType_FUN_0050e7c0(CMelee *this_ptr)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CMeleeClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2f0d8f0                   ; 0050e7c0 | g_CMeleeClassInfo
        ;   Label: core_melee.cpp_CMelee_getActorType_FUN_0050e7c0
    RET                                 ; 0050e7c5

