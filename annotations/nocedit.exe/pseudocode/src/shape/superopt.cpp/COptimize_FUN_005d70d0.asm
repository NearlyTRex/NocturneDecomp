; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_COptimize_FUN_005d70d0(COptimize *this_ptr)
;
; Parameters:
; COptimize *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_superopt.cpp_TriListSomething_FUN_005d77a0 at 005d7c65
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005d70d0
        ;   Label: shape_superopt.cpp_COptimize_FUN_005d70d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005d70d4
    MOV dword ptr [EDX + 0x1c],EAX      ; 005d70d8
    MOV EAX,dword ptr [ESP + 0xc]       ; 005d70db
    MOV dword ptr [EDX + 0x20],EAX      ; 005d70df
    RET                                 ; 005d70e2

