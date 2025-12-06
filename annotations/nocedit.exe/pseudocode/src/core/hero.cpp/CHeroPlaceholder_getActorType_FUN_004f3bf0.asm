; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_hero.cpp_CHeroPlaceholder_getActorType_FUN_004f3bf0(CHeroPlaceholder * this_ptr)
;
; Parameters:
; CHeroPlaceholder * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CHeroPlaceholderClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2db8810                   ; 004f3bf0 | CDemonActorType g_CHeroPlaceholderClassInfo
        ;   Label: core_hero.cpp_CHeroPlaceholder_getActorType_FUN_004f3bf0
    RET                                 ; 004f3bf5

