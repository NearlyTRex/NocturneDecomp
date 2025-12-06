; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_skeledit.cpp_FUN_00599650()
;
;
; Called Functions:
;   crt_stack.c_stack_probe_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x4                            ; 00599650
        ;   Label: core_skeledit.cpp_FUN_00599650
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 00599655 | uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [ESP + 0x4]       ; 0059965a
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059965e
    MOV EAX,dword ptr [EAX]             ; 00599662
    MOV dword ptr [EDX],EAX             ; 00599664
    MOV EAX,EDX                         ; 00599666
    RET                                 ; 00599668

