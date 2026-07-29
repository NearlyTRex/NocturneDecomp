; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_xform_cpp_invertAndGetTranslation_FUN_0055bc30(CMatrix3x4f *matrix_in,CVector3f *vector_out)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix_in
; CVector3f *      Stack[0x8]:4   vector_out
; Local Variables:
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x3c]:1  local_3c
;
; Called Functions:
;   core_xform.cpp_getTranslation_FUN_0055bc00
;   core_xform.cpp_inverse_FUN_0055bd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055bc30
        ;   Label: core_xform.cpp_invertAndGetTranslation_FUN_0055bc30
    PUSH ESI                            ; 0055bc31
    PUSH EDI                            ; 0055bc32
    SUB ESP,0x60                        ; 0055bc33
    MOV EBX,dword ptr [ESP + 0x74]      ; 0055bc36
    MOV EDX,dword ptr [ESP + 0x70]      ; 0055bc3a
    PUSH EDX                            ; 0055bc3e
    LEA ESI,[ESP + 0x4]                 ; 0055bc3f
    LEA EDI,[ESP + 0x34]                ; 0055bc43
    CALL core_xform.cpp_inverse_FUN_0055bd00 ; 0055bc47
        ;   XREF to: 0055bd00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_inverse_FUN_0055bd00()
    MOV ECX,0xc                         ; 0055bc4c
    LEA ESI,[ESP + 0x4]                 ; 0055bc51
    ADD ESP,0x4                         ; 0055bc55
    MOVSD.REP ES:EDI,ESI                ; 0055bc58
    PUSH EBX                            ; 0055bc5a
    LEA ESI,[ESP + 0x34]                ; 0055bc5b
    PUSH ESI                            ; 0055bc5f
    CALL core_xform.cpp_getTranslation_FUN_0055bc00 ; 0055bc60
        ;   XREF to: 0055bc00 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_getTranslation_FUN_0055bc00(CMatrix3x4f * matrix_in, CVector3f * vector_out)
    ADD ESP,0x8                         ; 0055bc65
    MOV EAX,EBX                         ; 0055bc68
    ADD ESP,0x60                        ; 0055bc6a
    POP EDI                             ; 0055bc6d
    POP ESI                             ; 0055bc6e
    POP EBX                             ; 0055bc6f
    RET                                 ; 0055bc70

