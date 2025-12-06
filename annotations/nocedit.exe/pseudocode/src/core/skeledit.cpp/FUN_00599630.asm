; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_skeledit.cpp_FUN_00599630()
;
;
; Called Functions:
;   crt_stack.c_stack_probe_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x4                            ; 00599630
        ;   Label: core_skeledit.cpp_FUN_00599630
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 00599635 | uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [ESP + 0x4]       ; 0059963a
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059963e
    MOV EAX,dword ptr [EAX]             ; 00599642
    MOV dword ptr [EDX],EAX             ; 00599644
    MOV EAX,EDX                         ; 00599646
    RET                                 ; 00599648

