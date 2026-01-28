; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 * core_skeledit_cpp_FUN_00599650(void)
;
;
; Called Functions:
;   crt_stack.c_stack_probe_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x4                            ; 00599650
        ;   Label: core_skeledit.cpp_FUN_00599650
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 00599655
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
    MOV EDX,dword ptr [ESP + 0x4]       ; 0059965a
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059965e
    MOV EAX,dword ptr [EAX]             ; 00599662
    MOV dword ptr [EDX],EAX             ; 00599664
    MOV EAX,EDX                         ; 00599666
    RET                                 ; 00599668

