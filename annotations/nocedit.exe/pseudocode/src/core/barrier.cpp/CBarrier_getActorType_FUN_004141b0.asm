; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_barrier.cpp_CBarrier_getActorType_FUN_004141b0(CBarrier * this_ptr)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBarrierClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x8226d4                    ; 004141b0 | g_CBarrierClassInfo
        ;   Label: core_barrier.cpp_CBarrier_getActorType_FUN_004141b0
    RET                                 ; 004141b5

