; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_skeledit_cpp_FUN_005995d0(void)
;
;
; Called Functions:
;   crt_stack.c_stack_probe_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x4                            ; 005995d0
        ;   Label: core_skeledit.cpp_FUN_005995d0
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 005995d5
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
    MOV EAX,dword ptr [ESP + 0x4]       ; 005995da
    MOV EDX,dword ptr [ESP + 0x8]       ; 005995de
    MOV ECX,dword ptr [EDX]             ; 005995e2
    MOV dword ptr [EAX],ECX             ; 005995e4
    MOV ECX,dword ptr [EDX + 0x4]       ; 005995e6
    MOV dword ptr [EAX + 0x4],ECX       ; 005995e9
    MOV ECX,dword ptr [EDX + 0x8]       ; 005995ec
    MOV dword ptr [EAX + 0x8],ECX       ; 005995ef
    MOV ECX,dword ptr [EDX + 0xc]       ; 005995f2
    MOV dword ptr [EAX + 0xc],ECX       ; 005995f5
    MOV ECX,dword ptr [EDX + 0x10]      ; 005995f8
    MOV dword ptr [EAX + 0x10],ECX      ; 005995fb
    MOV ECX,dword ptr [EDX + 0x14]      ; 005995fe
    MOV dword ptr [EAX + 0x14],ECX      ; 00599601
    MOV ECX,dword ptr [EDX + 0x18]      ; 00599604
    MOV dword ptr [EAX + 0x18],ECX      ; 00599607
    MOV ECX,dword ptr [EDX + 0x1c]      ; 0059960a
    MOV dword ptr [EAX + 0x1c],ECX      ; 0059960d
    MOV ECX,dword ptr [EDX + 0x20]      ; 00599610
    MOV dword ptr [EAX + 0x20],ECX      ; 00599613
    MOV ECX,dword ptr [EDX + 0x24]      ; 00599616
    MOV dword ptr [EAX + 0x24],ECX      ; 00599619
    MOV ECX,dword ptr [EDX + 0x28]      ; 0059961c
    MOV dword ptr [EAX + 0x28],ECX      ; 0059961f
    MOV ECX,dword ptr [EDX + 0x2c]      ; 00599622
    MOV dword ptr [EAX + 0x2c],ECX      ; 00599625
    RET                                 ; 00599628

