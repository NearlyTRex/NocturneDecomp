; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_bat.cpp_CBat_getActorType_FUN_004147c0(CBat * this_ptr)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBatClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x822710                    ; 004147c0 | g_CBatClassInfo
        ;   Label: core_bat.cpp_CBat_getActorType_FUN_004147c0
    RET                                 ; 004147c5

