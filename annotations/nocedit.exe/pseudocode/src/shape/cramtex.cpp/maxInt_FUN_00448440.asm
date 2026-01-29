; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_cramtex_cpp_maxInt_FUN_00448440(int a,int b)
;
; Parameters:
; int              Stack[0xc]:4   a
; int              Stack[0x10]:4   b
;
; Called Functions:
;   crt_stack.c___STK_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x4                            ; 00448440
        ;   Label: shape_cramtex.cpp_maxInt_FUN_00448440
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 00448445
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c___STK_FUN_005ff9f3(uint stack_size)
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044844a
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044844e
    CMP EAX,EDX                         ; 00448452
    JLE 0x00448457                      ; 00448454
        ;   XREF to: 00448457 (CONDITIONAL_JUMP)  ; LAB_00448457
    RET                                 ; 00448456
    MOV EAX,EDX                         ; 00448457
        ;   Label: LAB_00448457
    RET                                 ; 00448459

