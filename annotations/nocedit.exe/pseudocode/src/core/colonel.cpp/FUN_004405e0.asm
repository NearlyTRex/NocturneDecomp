; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_colonel_cpp_FUN_004405e0(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004405e0
        ;   Label: core_colonel.cpp_FUN_004405e0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004405e4
    MOV dword ptr [EDX + 0x1fbd4],EAX   ; 004405e8
    RET                                 ; 004405ee

