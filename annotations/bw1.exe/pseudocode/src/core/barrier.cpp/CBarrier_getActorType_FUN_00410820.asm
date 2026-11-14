; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_barrier_cpp_CBarrier_getActorType_FUN_00410820(CBarrier *this_ptr)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBarrierClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7c36d4                    ; 00410820 | g_CBarrierClassInfo
        ;   Label: core_barrier.cpp_CBarrier_getActorType_FUN_00410820
    RET                                 ; 00410825

