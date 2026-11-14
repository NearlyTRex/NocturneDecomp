; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_barrier_cpp_CBarrier_getActorType_FUN_0040eab0(CBarrier *this_ptr)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBarrierClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7dfe18                    ; 0040eab0 | g_CBarrierClassInfo
        ;   Label: core_barrier.cpp_CBarrier_getActorType_FUN_0040eab0
    RET                                 ; 0040eab5

