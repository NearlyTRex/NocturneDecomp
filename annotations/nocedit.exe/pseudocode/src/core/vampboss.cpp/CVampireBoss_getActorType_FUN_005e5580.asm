; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_vampboss.cpp_CVampireBoss_getActorType_FUN_005e5580(CVampireBoss * this_ptr)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CVampireBossClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x3f8751c                   ; 005e5580 | g_CVampireBossClassInfo
        ;   Label: core_vampboss.cpp_CVampireBoss_getActorType_FUN_005e5580
    RET                                 ; 005e5585

