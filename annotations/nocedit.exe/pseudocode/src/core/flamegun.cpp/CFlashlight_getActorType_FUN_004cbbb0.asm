; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_flamegun.cpp_CFlashlight_getActorType_FUN_004cbbb0(CFlashlight * this_ptr)
;
; Parameters:
; CFlashlight *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CFlashlightClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2d7a778                   ; 004cbbb0 | g_CFlashlightClassInfo
        ;   Label: core_flamegun.cpp_CFlashlight_getActorType_FUN_004cbbb0
    RET                                 ; 004cbbb5

