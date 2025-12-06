; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_skeledit.cpp_FUN_00589fa0()
;
;
; XREF[1]:
;   core_skeledit.cpp_FUN_00589c20 at 00589da4
;
; Called Functions:
;   core_skeledit.cpp_FUN_00589fc0
;   crt_stack.c_stack_probe_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0xc                            ; 00589fa0
        ;   Label: core_skeledit.cpp_FUN_00589fa0
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 00589fa5 | uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
    PUSH EBX                            ; 00589faa
    MOV EBX,dword ptr [ESP + 0x8]       ; 00589fab
    PUSH EBX                            ; 00589faf
    CALL core_skeledit.cpp_FUN_00589fc0 ; 00589fb0 | undefined core_skeledit.cpp_FUN_00589fc0()
        ;   XREF to: 00589fc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00589fb5
    MOV EAX,EBX                         ; 00589fb8
    POP EBX                             ; 00589fba
    RET                                 ; 00589fbb

