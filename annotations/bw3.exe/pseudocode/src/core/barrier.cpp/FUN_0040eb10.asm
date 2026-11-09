; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_barrier_cpp_FUN_0040eb10(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00600530
;
; Called Functions:
;   core_actor.cpp_FUN_00408890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040eb10
        ;   Label: core_barrier.cpp_FUN_0040eb10
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040eb11
    PUSH EBX                            ; 0040eb15
    CALL core_actor.cpp_FUN_00408890    ; 0040eb16
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408890(CDemonActor * this_ptr)
    MOV EAX,[0x00600530]                ; 0040eb1b | DAT_00600530
    MOV EAX,dword ptr [EAX + 0x1008]    ; 0040eb20
    MOV dword ptr [EBX + 0xf8],0x0      ; 0040eb26
    ADD ESP,0x4                         ; 0040eb30
    MOV dword ptr [EBX + 0xfc],EAX      ; 0040eb33
    POP EBX                             ; 0040eb39
    RET                                 ; 0040eb3a

