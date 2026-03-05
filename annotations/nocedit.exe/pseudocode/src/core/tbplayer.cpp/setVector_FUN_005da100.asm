; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_tbplayer_cpp_setVector_FUN_005da100(CVector3f *out,float x,float y,float z)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   out
; float            Stack[0x8]:4   x
; float            Stack[0xc]:4   y
; float            Stack[0x10]:4   z
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005da100
        ;   Label: core_tbplayer.cpp_setVector_FUN_005da100
    MOV EDX,dword ptr [ESP + 0x8]       ; 005da104
    MOV dword ptr [EAX],EDX             ; 005da108
    MOV EDX,dword ptr [ESP + 0xc]       ; 005da10a
    MOV dword ptr [EAX + 0x8],EDX       ; 005da10e
    MOV EDX,dword ptr [ESP + 0x10]      ; 005da111
    MOV dword ptr [EAX + 0x4],EDX       ; 005da115
    RET                                 ; 005da118

