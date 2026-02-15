; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_curtain_cpp_CCurtain_getActorType_FUN_00449690(CCurtain *this_ptr)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CCurtainClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x888e10                    ; 00449690 | g_CCurtainClassInfo
        ;   Label: core_curtain.cpp_CCurtain_getActorType_FUN_00449690
    RET                                 ; 00449695

