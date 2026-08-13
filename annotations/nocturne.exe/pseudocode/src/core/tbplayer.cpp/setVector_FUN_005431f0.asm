; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_tbplayer_cpp_setVector_FUN_005431f0(CVector3f *out,float x,float y,float z)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   out
; float            Stack[0x8]:4   x
; float            Stack[0xc]:4   y
; float            Stack[0x10]:4   z
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005431f0
        ;   Label: core_tbplayer.cpp_setVector_FUN_005431f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005431f4
    MOV dword ptr [EAX],EDX             ; 005431f8
    MOV EDX,dword ptr [ESP + 0xc]       ; 005431fa
    MOV dword ptr [EAX + 0x8],EDX       ; 005431fe
    MOV EDX,dword ptr [ESP + 0x10]      ; 00543201
    MOV dword ptr [EAX + 0x4],EDX       ; 00543205
    RET                                 ; 00543208

