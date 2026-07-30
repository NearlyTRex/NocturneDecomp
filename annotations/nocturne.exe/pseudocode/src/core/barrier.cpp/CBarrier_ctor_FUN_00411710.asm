; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBarrier * __cdecl core_barrier_cpp_CBarrier_ctor_FUN_00411710(CBarrier *this_ptr)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_barrier.cpp_FUN_004116e0 at 004116f3
;
; Referenced Globals:
;   CDemonActor_vtable g_CBarrierVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00409d30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00411710
        ;   Label: core_barrier.cpp_CBarrier_ctor_FUN_00411710
    PUSH EDX                            ; 00411714
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00409d30 ; 00411715
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00409d30(CDemonActor * this_ptr)
    MOV dword ptr [EAX + 0x14c],0x599d74 ; 0041171a | g_CBarrierVTable
    MOV dword ptr [EAX + 0x158],0x40a00000 ; 00411724
    MOV byte ptr [EAX + 0x160],0x0      ; 0041172e
    MOV dword ptr [EAX + 0x15c],0x1     ; 00411735
    ADD ESP,0x4                         ; 0041173f
    MOV EDX,dword ptr [EAX + 0x158]     ; 00411742
    MOV dword ptr [EAX + 0x154],EDX     ; 00411748
    MOV EDX,dword ptr [EAX + 0x154]     ; 0041174e
    MOV dword ptr [EAX + 0x150],EDX     ; 00411754
    RET                                 ; 0041175a

