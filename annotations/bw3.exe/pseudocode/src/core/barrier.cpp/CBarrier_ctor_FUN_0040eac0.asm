; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBarrier * __cdecl core_barrier_cpp_CBarrier_ctor_FUN_0040eac0(CBarrier *this_ptr)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_barrier.cpp_factoryFuncBarrier_FUN_0040ea90 at 0040eaa3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0040eac0
        ;   Label: core_barrier.cpp_CBarrier_ctor_FUN_0040eac0
    PUSH EDX                            ; 0040eac4
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 0040eac5
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    MOV dword ptr [EAX + 0x154],0x5db674 ; 0040eaca
    MOV dword ptr [EAX + 0x160],0x40a00000 ; 0040ead4
    MOV byte ptr [EAX + 0x168],0x0      ; 0040eade
    MOV dword ptr [EAX + 0x164],0x1     ; 0040eae5
    ADD ESP,0x4                         ; 0040eaef
    MOV EDX,dword ptr [EAX + 0x160]     ; 0040eaf2
    MOV dword ptr [EAX + 0x15c],EDX     ; 0040eaf8
    MOV EDX,dword ptr [EAX + 0x15c]     ; 0040eafe
    MOV dword ptr [EAX + 0x158],EDX     ; 0040eb04
    RET                                 ; 0040eb0a

