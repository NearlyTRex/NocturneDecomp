; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_bugs_cpp_createVector_FUN_004279b0(CVector3f *dest,float x,float y,float z)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   dest
; float            Stack[0x8]:4   x
; float            Stack[0xc]:4   y
; float            Stack[0x10]:4   z
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004279b0
        ;   Label: core_bugs.cpp_createVector_FUN_004279b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004279b4
    MOV dword ptr [EAX],EDX             ; 004279b8
    MOV EDX,dword ptr [ESP + 0xc]       ; 004279ba
    MOV dword ptr [EAX + 0x4],EDX       ; 004279be
    MOV EDX,dword ptr [ESP + 0x10]      ; 004279c1
    MOV dword ptr [EAX + 0x8],EDX       ; 004279c5
    RET                                 ; 004279c8

