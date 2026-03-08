; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_setMatrixTranslation_FUN_005c6930(CMatrix3x4f *matrix,CVector3f *translation)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix
; CVector3f *      Stack[0x8]:4   translation
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c6930
        ;   Label: core_stranger.cpp_setMatrixTranslation_FUN_005c6930
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c6934
    MOV ECX,dword ptr [EDX]             ; 005c6938
    MOV dword ptr [EAX + 0xc],ECX       ; 005c693a
    MOV ECX,dword ptr [EDX + 0x4]       ; 005c693d
    MOV dword ptr [EAX + 0x1c],ECX      ; 005c6940
    MOV ECX,dword ptr [EDX + 0x8]       ; 005c6943
    MOV dword ptr [EAX + 0x2c],ECX      ; 005c6946
    RET                                 ; 005c6949

