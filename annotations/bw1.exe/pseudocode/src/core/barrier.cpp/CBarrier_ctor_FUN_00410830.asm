; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBarrier * __cdecl core_barrier_cpp_CBarrier_ctor_FUN_00410830(CBarrier *this_ptr)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_barrier.cpp_factoryFuncBarrier_FUN_00410800 at 00410813
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00410830
        ;   Label: core_barrier.cpp_CBarrier_ctor_FUN_00410830
    PUSH EDX                            ; 00410834
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 00410835
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    MOV dword ptr [EAX + 0x154],0x5fbd94 ; 0041083a
    MOV dword ptr [EAX + 0x160],0x40a00000 ; 00410844
    MOV byte ptr [EAX + 0x168],0x0      ; 0041084e
    MOV dword ptr [EAX + 0x164],0x1     ; 00410855
    ADD ESP,0x4                         ; 0041085f
    MOV EDX,dword ptr [EAX + 0x160]     ; 00410862
    MOV dword ptr [EAX + 0x15c],EDX     ; 00410868
    MOV EDX,dword ptr [EAX + 0x15c]     ; 0041086e
    MOV dword ptr [EAX + 0x158],EDX     ; 00410874
    RET                                 ; 0041087a

