; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_barrier_cpp_CBarrier_setup_FUN_00410880(CBarrier *this_ptr)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_0061f650
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408850
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410880
        ;   Label: core_barrier.cpp_CBarrier_setup_FUN_00410880
    MOV EBX,dword ptr [ESP + 0x8]       ; 00410881
    PUSH EBX                            ; 00410885
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408850 ; 00410886
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408850(CDemonActor * this_ptr)
    MOV EAX,[0x0061f650]                ; 0041088b | DAT_0061f650
    MOV EAX,dword ptr [EAX + 0x1008]    ; 00410890
    MOV dword ptr [EBX + 0xf8],0x0      ; 00410896
    ADD ESP,0x4                         ; 004108a0
    MOV dword ptr [EBX + 0xfc],EAX      ; 004108a3
    POP EBX                             ; 004108a9
    RET                                 ; 004108aa

