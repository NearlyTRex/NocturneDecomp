; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_barrier_cpp_CBarrier_setup_FUN_00411760(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005baf90
;   undefined4 DAT_01cc9454
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411760
        ;   Label: core_barrier.cpp_CBarrier_setup_FUN_00411760
    MOV EBX,dword ptr [ESP + 0x8]       ; 00411761
    PUSH EBX                            ; 00411765
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 00411766
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00409fc0(CDemonActor * this_ptr)
    MOV EAX,[0x005baf90]                ; 0041176b | DAT_005baf90
    MOV EAX,dword ptr [EAX + 0x4]       ; 00411770 | DAT_01cc9454
    MOV dword ptr [EBX + 0xf8],0x0      ; 00411773
    ADD ESP,0x4                         ; 0041177d
    MOV dword ptr [EBX + 0xfc],EAX      ; 00411780
    POP EBX                             ; 00411786
    RET                                 ; 00411787

