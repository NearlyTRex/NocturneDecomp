; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_CVector_copy_FUN_004104a0(CVector3f * this_ptr, CVector3f * other)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   other
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004104a0
        ;   Label: core_actor.cpp_CVector_copy_FUN_004104a0
    MOV ECX,dword ptr [ESP + 0x8]       ; 004104a4
    ADD EAX,0x4                         ; 004104a8
    MOV EDX,dword ptr [ECX]             ; 004104ab
    MOV dword ptr [EAX + -0x4],EDX      ; 004104ad
    LEA EDX,[ECX + 0x4]                 ; 004104b0
    ADD EAX,0x4                         ; 004104b3
    MOV EDX,dword ptr [EDX]             ; 004104b6
    MOV dword ptr [EAX + -0x4],EDX      ; 004104b8
    LEA EDX,[ECX + 0x8]                 ; 004104bb
    SUB EAX,0x8                         ; 004104be
    MOV EDX,dword ptr [EDX]             ; 004104c1
    MOV dword ptr [EAX + 0x8],EDX       ; 004104c3
    RET                                 ; 004104c6

