; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __cdecl core_xform_cpp_multiplyMatrix3x4InPlace_FUN_005b53b0(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix_a
; CMatrix3x4f *    Stack[0x8]:4   matrix_b
;
; Called Functions:
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b53b0
        ;   Label: core_xform.cpp_multiplyMatrix3x4InPlace_FUN_005b53b0
    PUSH ESI                            ; 005b53b1
    PUSH EDI                            ; 005b53b2
    SUB ESP,0x30                        ; 005b53b3
    MOV EBX,dword ptr [ESP + 0x40]      ; 005b53b6
    MOV EDX,dword ptr [ESP + 0x44]      ; 005b53ba
    PUSH EDX                            ; 005b53be
    PUSH EBX                            ; 005b53bf
    LEA ESI,[ESP + 0x8]                 ; 005b53c0
    MOV EDI,EBX                         ; 005b53c4
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 005b53c6
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005b5200(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 005b53cb
    LEA ESI,[ESP + 0x8]                 ; 005b53d0
    ADD ESP,0x8                         ; 005b53d4
    MOV EAX,EBX                         ; 005b53d7
    MOVSD.REP ES:EDI,ESI                ; 005b53d9
    ADD ESP,0x30                        ; 005b53db
    POP EDI                             ; 005b53de
    POP ESI                             ; 005b53df
    POP EBX                             ; 005b53e0
    RET                                 ; 005b53e1

