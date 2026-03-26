; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_xform_cpp_invertAndGetTranslation_FUN_005f6140(CMatrix3x4f *matrix_in,CVector3f *vector_out)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix_in
; CVector3f *      Stack[0x8]:4   vector_out
; Local Variables:
; CMatrix3x4f      Stack[-0x6c]:48  local_6c
; CMatrix3x4f      Stack[-0x3c]:48  local_3c
;
; XREF[1]:
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 00598099
;
; Called Functions:
;   core_xform.cpp_getTranslation_FUN_005f6110
;   core_xform.cpp_inverse_FUN_005f6210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f6140
        ;   Label: core_xform.cpp_invertAndGetTranslation_FUN_005f6140
    PUSH ESI                            ; 005f6141
    PUSH EDI                            ; 005f6142
    SUB ESP,0x60                        ; 005f6143
    MOV EBX,dword ptr [ESP + 0x74]      ; 005f6146
    MOV EDX,dword ptr [ESP + 0x70]      ; 005f614a
    PUSH EDX                            ; 005f614e
    LEA ESI,[ESP + 0x4]                 ; 005f614f
    LEA EDI,[ESP + 0x34]                ; 005f6153
    CALL core_xform.cpp_inverse_FUN_005f6210 ; 005f6157
        ;   XREF to: 005f6210 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_inverse_FUN_005f6210(CMatrix3x4f * matrix_in, CMatrix3x4f * matrix_out)
    JMP 0x03fc3a66                      ; 005f615c
        ;   XREF to: 03fc3a66 (UNCONDITIONAL_JUMP)  ; LAB_03fc3a66
    PUSH EBX                            ; 005f616a
        ;   Label: LAB_005f616a
    LEA ESI,[ESP + 0x34]                ; 005f616b
    PUSH ESI                            ; 005f616f
    CALL core_xform.cpp_getTranslation_FUN_005f6110 ; 005f6170
        ;   XREF to: 005f6110 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_getTranslation_FUN_005f6110(CMatrix3x4f * matrix_in, CVector3f * vector_out)
    ADD ESP,0x8                         ; 005f6175
    MOV EAX,EBX                         ; 005f6178
    ADD ESP,0x60                        ; 005f617a
    POP EDI                             ; 005f617d
    POP ESI                             ; 005f617e
    POP EBX                             ; 005f617f
    RET                                 ; 005f6180
    MOV ECX,0xc                         ; 03fc3a66
        ;   Label: LAB_03fc3a66
    LEA ESI,[ESP + 0x4]                 ; 03fc3a6b
    ADD ESP,0x4                         ; 03fc3a6f
    MOV ECX,dword ptr [ESI]             ; 03fc3a72
    MOV dword ptr [EDI],ECX             ; 03fc3a74
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc3a76
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc3a79
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc3a7c
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc3a7f
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc3a82
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc3a85
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc3a88
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc3a8b
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc3a8e
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc3a91
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc3a94
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc3a97
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc3a9a
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc3a9d
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc3aa0
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc3aa3
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc3aa6
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc3aa9
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc3aac
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc3aaf
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc3ab2
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc3ab5
    ADD ESI,0x30                        ; 03fc3ab8
    ADD EDI,0x30                        ; 03fc3abb
    XOR ECX,ECX                         ; 03fc3abe
    JMP 0x005f616a                      ; 03fc3ac0
        ;   XREF to: 005f616a (UNCONDITIONAL_JUMP)  ; LAB_005f616a

