; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_tentacle_cpp_CTentacle_getActorType_FUN_005daf50(CTentacle *this_ptr)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CTentacleClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x3f6cd18                   ; 005daf50 | g_CTentacleClassInfo
        ;   Label: core_tentacle.cpp_CTentacle_getActorType_FUN_005daf50
    RET                                 ; 005daf55

