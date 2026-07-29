; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __cdecl core_xform_cpp_multiplyMatrix3x4InPlace_FUN_0055abb0(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix_a
; CMatrix3x4f *    Stack[0x8]:4   matrix_b
;
; Called Functions:
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055abb0
        ;   Label: core_xform.cpp_multiplyMatrix3x4InPlace_FUN_0055abb0
    PUSH ESI                            ; 0055abb1
    PUSH EDI                            ; 0055abb2
    SUB ESP,0x30                        ; 0055abb3
    MOV EBX,dword ptr [ESP + 0x40]      ; 0055abb6
    MOV EDX,dword ptr [ESP + 0x44]      ; 0055abba
    PUSH EDX                            ; 0055abbe
    PUSH EBX                            ; 0055abbf
    LEA ESI,[ESP + 0x8]                 ; 0055abc0
    MOV EDI,EBX                         ; 0055abc4
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0055abc6
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 0055abcb
    LEA ESI,[ESP + 0x8]                 ; 0055abd0
    ADD ESP,0x8                         ; 0055abd4
    MOV EAX,EBX                         ; 0055abd7
    MOVSD.REP ES:EDI,ESI                ; 0055abd9
    ADD ESP,0x30                        ; 0055abdb
    POP EDI                             ; 0055abde
    POP ESI                             ; 0055abdf
    POP EBX                             ; 0055abe0
    RET                                 ; 0055abe1

