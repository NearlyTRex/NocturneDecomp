; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_bodypart_cpp_copyVector_FUN_00417ff0(CVector3f *dst,CVector3f *src)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   dst
; CVector3f *      Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00417ff0
        ;   Label: core_bodypart.cpp_copyVector_FUN_00417ff0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00417ff4
    MOV ECX,dword ptr [EDX]             ; 00417ff8
    MOV dword ptr [EAX],ECX             ; 00417ffa
    MOV ECX,dword ptr [EDX + 0x4]       ; 00417ffc
    MOV dword ptr [EAX + 0x4],ECX       ; 00417fff
    MOV ECX,dword ptr [EDX + 0x8]       ; 00418002
    MOV dword ptr [EAX + 0x8],ECX       ; 00418005
    RET                                 ; 00418008

