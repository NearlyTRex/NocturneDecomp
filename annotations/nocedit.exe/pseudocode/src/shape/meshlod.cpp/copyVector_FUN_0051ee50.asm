; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_meshlod_cpp_copyVector_FUN_0051ee50(CVector3f *destination,CVector3f *source)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   destination
; CVector3f *      Stack[0x8]:4   source
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0051ee50
        ;   Label: shape_meshlod.cpp_copyVector_FUN_0051ee50
    MOV EDX,dword ptr [ESP + 0x8]       ; 0051ee54
    MOV ECX,dword ptr [EDX]             ; 0051ee58
    MOV dword ptr [EAX],ECX             ; 0051ee5a
    MOV ECX,dword ptr [EDX + 0x4]       ; 0051ee5c
    MOV dword ptr [EAX + 0x4],ECX       ; 0051ee5f
    MOV ECX,dword ptr [EDX + 0x8]       ; 0051ee62
    MOV dword ptr [EAX + 0x8],ECX       ; 0051ee65
    RET                                 ; 0051ee68

