; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_spike.cpp_CSpike_getActorType_FUN_005b8210(CSpike * this_ptr)
;
; Parameters:
; CSpike *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CSpikeClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x3f6b9a4                   ; 005b8210 | g_CSpikeClassInfo
        ;   Label: core_spike.cpp_CSpike_getActorType_FUN_005b8210
    RET                                 ; 005b8215

