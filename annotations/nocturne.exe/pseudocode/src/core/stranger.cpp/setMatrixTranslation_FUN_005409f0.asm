; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_setMatrixTranslation_FUN_005409f0(CMatrix3x4f *matrix,CVector3f *translation)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix
; CVector3f *      Stack[0x8]:4   translation
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005409f0
        ;   Label: core_stranger.cpp_setMatrixTranslation_FUN_005409f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005409f4
    MOV ECX,dword ptr [EDX]             ; 005409f8
    MOV dword ptr [EAX + 0xc],ECX       ; 005409fa
    MOV ECX,dword ptr [EDX + 0x4]       ; 005409fd
    MOV dword ptr [EAX + 0x1c],ECX      ; 00540a00
    MOV ECX,dword ptr [EDX + 0x8]       ; 00540a03
    MOV dword ptr [EAX + 0x2c],ECX      ; 00540a06
    RET                                 ; 00540a09

