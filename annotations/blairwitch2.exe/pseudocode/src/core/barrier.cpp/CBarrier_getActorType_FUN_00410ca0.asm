; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_barrier_cpp_CBarrier_getActorType_FUN_00410ca0(CBarrier *this_ptr)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBarrierClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7bc6d4                    ; 00410ca0 | g_CBarrierClassInfo
        ;   Label: core_barrier.cpp_CBarrier_getActorType_FUN_00410ca0
    RET                                 ; 00410ca5

