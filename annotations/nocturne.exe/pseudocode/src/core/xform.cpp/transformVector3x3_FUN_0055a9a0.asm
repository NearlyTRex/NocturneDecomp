; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_xform_cpp_transformVector3x3_FUN_0055a9a0(CMatrix3x3f *matrix,CVector3f *output_vector,CVector3f *input_vector)
;
; Parameters:
; CMatrix3x3f *    Stack[0x4]:4   matrix
; CVector3f *      Stack[0x8]:4   output_vector
; CVector3f *      Stack[0xc]:4   input_vector
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0055a9a0
        ;   Label: core_xform.cpp_transformVector3x3_FUN_0055a9a0
    MOV ECX,dword ptr [ESP + 0x8]       ; 0055a9a4
    MOV EDX,dword ptr [ESP + 0xc]       ; 0055a9a8
    FLD float ptr [EDX + 0x4]           ; 0055a9ac
    FMUL float ptr [EAX + 0x4]          ; 0055a9af
    FLD float ptr [EDX]                 ; 0055a9b2
    FMUL float ptr [EAX]                ; 0055a9b4
    FADDP                               ; 0055a9b6
    FLD float ptr [EDX + 0x8]           ; 0055a9b8
    FMUL float ptr [EAX + 0x8]          ; 0055a9bb
    FADDP                               ; 0055a9be
    FSTP float ptr [ECX]                ; 0055a9c0
    FLD float ptr [EDX + 0x4]           ; 0055a9c2
    FMUL float ptr [EAX + 0x14]         ; 0055a9c5
    FLD float ptr [EDX]                 ; 0055a9c8
    FMUL float ptr [EAX + 0x10]         ; 0055a9ca
    FADDP                               ; 0055a9cd
    FLD float ptr [EDX + 0x8]           ; 0055a9cf
    FMUL float ptr [EAX + 0x18]         ; 0055a9d2
    FADDP                               ; 0055a9d5
    FSTP float ptr [ECX + 0x4]          ; 0055a9d7
    FLD float ptr [EDX + 0x4]           ; 0055a9da
    FMUL float ptr [EAX + 0x24]         ; 0055a9dd
    FLD float ptr [EDX]                 ; 0055a9e0
    FMUL float ptr [EAX + 0x20]         ; 0055a9e2
    FADDP                               ; 0055a9e5
    FLD float ptr [EDX + 0x8]           ; 0055a9e7
    FMUL float ptr [EAX + 0x28]         ; 0055a9ea
    FADDP                               ; 0055a9ed
    MOV EAX,ECX                         ; 0055a9ef
    FSTP float ptr [ECX + 0x8]          ; 0055a9f1
    RET                                 ; 0055a9f4

