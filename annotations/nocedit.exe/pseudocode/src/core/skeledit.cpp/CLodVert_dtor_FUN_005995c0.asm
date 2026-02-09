; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CLodVert * __cdecl core_skeledit_cpp_CLodVert_dtor_FUN_005995c0(CLodVert *this_ptr,uint flags)
;
; Parameters:
; CLodVert *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_stack.c___STK_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x4                            ; 005995c0
        ;   Label: core_skeledit.cpp_CLodVert_dtor_FUN_005995c0
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 005995c5
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    MOV EAX,dword ptr [ESP + 0x4]       ; 005995ca
    RET                                 ; 005995ce

