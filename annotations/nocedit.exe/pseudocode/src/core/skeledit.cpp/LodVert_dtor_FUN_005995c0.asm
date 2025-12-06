; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CLodVert * core_skeledit.cpp_LodVert_dtor_FUN_005995c0(CLodVert * this_ptr, CLodVert * other, CLodVert * other2)
;
; Parameters:
; CLodVert *       Stack[0x4]:4   this_ptr
; CLodVert *       Stack[0x8]:4   other
; CLodVert *       Stack[0xc]:4   other2
;
; Called Functions:
;   crt_stack.c_stack_probe_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x4                            ; 005995c0
        ;   Label: core_skeledit.cpp_LodVert_dtor_FUN_005995c0
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 005995c5 | uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [ESP + 0x4]       ; 005995ca
    RET                                 ; 005995ce

