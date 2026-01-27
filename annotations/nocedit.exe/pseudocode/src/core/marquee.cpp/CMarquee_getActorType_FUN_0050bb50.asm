; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_marquee.cpp_CMarquee_getActorType_FUN_0050bb50(CMarquee * this_ptr)
;
; Parameters:
; CMarquee *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CMarqueeClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2f0cb20                   ; 0050bb50 | g_CMarqueeClassInfo
        ;   Label: core_marquee.cpp_CMarquee_getActorType_FUN_0050bb50
    RET                                 ; 0050bb55

