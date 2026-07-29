; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_bugs_cpp_createVector_FUN_00423b70(CVector3f *dest,float x,float y,float z)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   dest
; float            Stack[0x8]:4   x
; float            Stack[0xc]:4   y
; float            Stack[0x10]:4   z
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00423b70
        ;   Label: core_bugs.cpp_createVector_FUN_00423b70
    MOV EDX,dword ptr [ESP + 0x8]       ; 00423b74
    MOV dword ptr [EAX],EDX             ; 00423b78
    MOV EDX,dword ptr [ESP + 0xc]       ; 00423b7a
    MOV dword ptr [EAX + 0x4],EDX       ; 00423b7e
    MOV EDX,dword ptr [ESP + 0x10]      ; 00423b81
    MOV dword ptr [EAX + 0x8],EDX       ; 00423b85
    RET                                 ; 00423b88

