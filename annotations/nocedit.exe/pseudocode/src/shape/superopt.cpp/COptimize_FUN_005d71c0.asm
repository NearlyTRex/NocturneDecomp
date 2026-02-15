; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_COptimize_FUN_005d71c0(COptimize *this_ptr)
;
; Parameters:
; COptimize *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_superopt.cpp_TriListSomething_FUN_005d77a0 at 005d7cb1
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005d71c0
        ;   Label: shape_superopt.cpp_COptimize_FUN_005d71c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005d71c4
    MOV dword ptr [EDX + 0x34],EAX      ; 005d71c8
    RET                                 ; 005d71cb

