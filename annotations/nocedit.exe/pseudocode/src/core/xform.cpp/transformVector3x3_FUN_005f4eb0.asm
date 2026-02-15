; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_xform_cpp_transformVector3x3_FUN_005f4eb0(CMatrix3x3f *matrix,CVector3f *output_vector,CVector3f *input_vector)
;
; Parameters:
; CMatrix3x3f *    Stack[0x4]:4   matrix
; CVector3f *      Stack[0x8]:4   output_vector
; CVector3f *      Stack[0xc]:4   input_vector
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005f4eb0
        ;   Label: core_xform.cpp_transformVector3x3_FUN_005f4eb0
    MOV ECX,dword ptr [ESP + 0x8]       ; 005f4eb4
    MOV EDX,dword ptr [ESP + 0xc]       ; 005f4eb8
    FLD float ptr [EDX + 0x4]           ; 005f4ebc
    FMUL float ptr [EAX + 0x4]          ; 005f4ebf
    FLD float ptr [EDX]                 ; 005f4ec2
    FMUL float ptr [EAX]                ; 005f4ec4
    FADDP                               ; 005f4ec6
    FLD float ptr [EDX + 0x8]           ; 005f4ec8
    FMUL float ptr [EAX + 0x8]          ; 005f4ecb
    FADDP                               ; 005f4ece
    FSTP float ptr [ECX]                ; 005f4ed0
    FLD float ptr [EDX + 0x4]           ; 005f4ed2
    FMUL float ptr [EAX + 0x14]         ; 005f4ed5
    FLD float ptr [EDX]                 ; 005f4ed8
    FMUL float ptr [EAX + 0x10]         ; 005f4eda
    FADDP                               ; 005f4edd
    FLD float ptr [EDX + 0x8]           ; 005f4edf
    FMUL float ptr [EAX + 0x18]         ; 005f4ee2
    FADDP                               ; 005f4ee5
    FSTP float ptr [ECX + 0x4]          ; 005f4ee7
    FLD float ptr [EDX + 0x4]           ; 005f4eea
    FMUL float ptr [EAX + 0x24]         ; 005f4eed
    FLD float ptr [EDX]                 ; 005f4ef0
    FMUL float ptr [EAX + 0x20]         ; 005f4ef2
    FADDP                               ; 005f4ef5
    FLD float ptr [EDX + 0x8]           ; 005f4ef7
    FMUL float ptr [EAX + 0x28]         ; 005f4efa
    FADDP                               ; 005f4efd
    MOV EAX,ECX                         ; 005f4eff
    FSTP float ptr [ECX + 0x8]          ; 005f4f01
    RET                                 ; 005f4f04

