; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_imp_cpp_setVector_FUN_004bc7c0(CVector3f *out,float x,float y,float z)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   out
; float            Stack[0x8]:4   x
; float            Stack[0xc]:4   y
; float            Stack[0x10]:4   z
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004bc7c0
        ;   Label: core_imp.cpp_setVector_FUN_004bc7c0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004bc7c4
    MOV dword ptr [EAX],EDX             ; 004bc7c8
    MOV EDX,dword ptr [ESP + 0xc]       ; 004bc7ca
    MOV dword ptr [EAX + 0x8],EDX       ; 004bc7ce
    MOV EDX,dword ptr [ESP + 0x10]      ; 004bc7d1
    MOV dword ptr [EAX + 0x4],EDX       ; 004bc7d5
    RET                                 ; 004bc7d8

