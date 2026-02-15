; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_inverseInPlace_FUN_005f6190(CMatrix3x4f *matrix)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix
; Local Variables:
; undefined        Stack[-0x38]:1  local_38
;
; Called Functions:
;   core_xform.cpp_inverse_FUN_005f6210
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005f6190
        ;   Label: core_xform.cpp_inverseInPlace_FUN_005f6190
    PUSH EDI                            ; 005f6191
    SUB ESP,0x30                        ; 005f6192
    MOV EDI,dword ptr [ESP + 0x3c]      ; 005f6195
    PUSH EDI                            ; 005f6199
    LEA ESI,[ESP + 0x4]                 ; 005f619a
    CALL core_xform.cpp_inverse_FUN_005f6210 ; 005f619e
        ;   XREF to: 005f6210 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_inverse_FUN_005f6210(CMatrix3x4f * matrix_in, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 005f61a3
    LEA ESI,[ESP + 0x4]                 ; 005f61a8
    ADD ESP,0x4                         ; 005f61ac
    MOVSD.REP ES:EDI,ESI                ; 005f61af
    ADD ESP,0x30                        ; 005f61b1
    POP EDI                             ; 005f61b4
    POP ESI                             ; 005f61b5
    RET                                 ; 005f61b6

