; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_actor_cpp_CVector_copy_FUN_0040e2a0(CVector3f *this_ptr,CVector3f *other)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   other
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040e2a0
        ;   Label: core_actor.cpp_CVector_copy_FUN_0040e2a0
    MOV ECX,dword ptr [ESP + 0x8]       ; 0040e2a4
    ADD EAX,0x4                         ; 0040e2a8
    MOV EDX,dword ptr [ECX]             ; 0040e2ab
    MOV dword ptr [EAX + -0x4],EDX      ; 0040e2ad
    LEA EDX,[ECX + 0x4]                 ; 0040e2b0
    ADD EAX,0x4                         ; 0040e2b3
    MOV EDX,dword ptr [EDX]             ; 0040e2b6
    MOV dword ptr [EAX + -0x4],EDX      ; 0040e2b8
    LEA EDX,[ECX + 0x8]                 ; 0040e2bb
    SUB EAX,0x8                         ; 0040e2be
    MOV EDX,dword ptr [EDX]             ; 0040e2c1
    MOV dword ptr [EAX + 0x8],EDX       ; 0040e2c3
    RET                                 ; 0040e2c6

