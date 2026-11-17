; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_barrier_cpp_CBarrier_getActorType_FUN_00411700(CBarrier *this_ptr)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBarrierClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x764524                    ; 00411700 | g_CBarrierClassInfo
        ;   Label: core_barrier.cpp_CBarrier_getActorType_FUN_00411700
    RET                                 ; 00411705

