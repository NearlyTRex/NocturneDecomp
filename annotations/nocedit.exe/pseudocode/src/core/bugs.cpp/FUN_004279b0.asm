; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_bugs_cpp_FUN_004279b0(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004279b0
        ;   Label: core_bugs.cpp_FUN_004279b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004279b4
    MOV dword ptr [EAX],EDX             ; 004279b8
    MOV EDX,dword ptr [ESP + 0xc]       ; 004279ba
    MOV dword ptr [EAX + 0x4],EDX       ; 004279be
    MOV EDX,dword ptr [ESP + 0x10]      ; 004279c1
    MOV dword ptr [EAX + 0x8],EDX       ; 004279c5
    RET                                 ; 004279c8

