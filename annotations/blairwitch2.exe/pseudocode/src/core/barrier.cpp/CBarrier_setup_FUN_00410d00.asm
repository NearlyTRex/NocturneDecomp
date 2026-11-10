; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_barrier_cpp_CBarrier_setup_FUN_00410d00(CBarrier *this_ptr)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410d00
        ;   Label: core_barrier.cpp_CBarrier_setup_FUN_00410d00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00410d01
    PUSH EBX                            ; 00410d05
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408a80 ; 00410d06
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408a80(CDemonActor * this_ptr)
    MOV dword ptr [EBX + 0xfc],0x1      ; 00410d0b
    ADD ESP,0x4                         ; 00410d15
    MOV dword ptr [EBX + 0xf8],0x1      ; 00410d18
    POP EBX                             ; 00410d22
    RET                                 ; 00410d23

