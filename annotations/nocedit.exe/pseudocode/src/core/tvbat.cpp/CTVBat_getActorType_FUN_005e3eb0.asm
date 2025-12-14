; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_tvbat.cpp_CTVBat_getActorType_FUN_005e3eb0(CTVBat * this_ptr)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CTVBatClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x3f874e0                   ; 005e3eb0 | g_CTVBatClassInfo
        ;   Label: core_tvbat.cpp_CTVBat_getActorType_FUN_005e3eb0
    RET                                 ; 005e3eb5

