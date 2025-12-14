; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_vessel.cpp_CCryptVessel_getActorType_FUN_005e8e50(CCryptVessel * this_ptr)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CCryptVesselClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x3f875a0                   ; 005e8e50 | g_CCryptVesselClassInfo
        ;   Label: core_vessel.cpp_CCryptVessel_getActorType_FUN_005e8e50
    RET                                 ; 005e8e55

