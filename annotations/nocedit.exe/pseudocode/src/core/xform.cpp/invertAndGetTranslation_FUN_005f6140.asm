; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_xform_cpp_invertAndGetTranslation_FUN_005f6140(CMatrix3x4f *matrix_in,CVector3f *vector_out)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix_in
; CVector3f *      Stack[0x8]:4   vector_out
; Local Variables:
; undefined1       Stack[-0x6c]:1  local_6c
; undefined1       Stack[-0x3c]:1  local_3c
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
    MOV ECX,0xc                         ; 005f615c
    LEA ESI,[ESP + 0x4]                 ; 005f6161
    ADD ESP,0x4                         ; 005f6165
    MOVSD.REP ES:EDI,ESI                ; 005f6168
    PUSH EBX                            ; 005f616a
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

