; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_bodypart_cpp_copyVector_FUN_0041b570(CVector3f *dst,CVector3f *src)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   dst
; CVector3f *      Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041b570
        ;   Label: core_bodypart.cpp_copyVector_FUN_0041b570
    MOV EDX,dword ptr [ESP + 0x8]       ; 0041b574
    MOV ECX,dword ptr [EDX]             ; 0041b578
    MOV dword ptr [EAX],ECX             ; 0041b57a
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041b57c
    MOV dword ptr [EAX + 0x4],ECX       ; 0041b57f
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041b582
    MOV dword ptr [EAX + 0x8],ECX       ; 0041b585
    RET                                 ; 0041b588

