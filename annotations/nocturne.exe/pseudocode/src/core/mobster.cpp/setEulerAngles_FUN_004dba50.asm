; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_mobster_cpp_setEulerAngles_FUN_004dba50(CVector3f *out,float x,float z,float y)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   out
; float            Stack[0x8]:4   x
; float            Stack[0xc]:4   z
; float            Stack[0x10]:4   y
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004dba50
        ;   Label: core_mobster.cpp_setEulerAngles_FUN_004dba50
    MOV EDX,dword ptr [ESP + 0x8]       ; 004dba54
    MOV dword ptr [EAX],EDX             ; 004dba58
    MOV EDX,dword ptr [ESP + 0xc]       ; 004dba5a
    MOV dword ptr [EAX + 0x8],EDX       ; 004dba5e
    MOV EDX,dword ptr [ESP + 0x10]      ; 004dba61
    MOV dword ptr [EAX + 0x4],EDX       ; 004dba65
    RET                                 ; 004dba68

