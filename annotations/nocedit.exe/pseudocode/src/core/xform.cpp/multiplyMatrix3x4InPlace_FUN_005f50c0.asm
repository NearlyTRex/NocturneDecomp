; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMatrix3x4f * __cdecl core_xform_cpp_multiplyMatrix3x4InPlace_FUN_005f50c0(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix_a
; CMatrix3x4f *    Stack[0x8]:4   matrix_b
; Local Variables:
; undefined1       Stack[-0x3c]:1  local_3c
;
; XREF[1]:
;   core_skeledit.cpp_CSkeleton_FUN_00592690 at 005954c7
;
; Called Functions:
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f50c0
        ;   Label: core_xform.cpp_multiplyMatrix3x4InPlace_FUN_005f50c0
    PUSH ESI                            ; 005f50c1
    PUSH EDI                            ; 005f50c2
    SUB ESP,0x30                        ; 005f50c3
    MOV EBX,dword ptr [ESP + 0x40]      ; 005f50c6
    MOV EDX,dword ptr [ESP + 0x44]      ; 005f50ca
    PUSH EDX                            ; 005f50ce
    PUSH EBX                            ; 005f50cf
    LEA ESI,[ESP + 0x8]                 ; 005f50d0
    MOV EDI,EBX                         ; 005f50d4
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005f50d6
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 005f50db
    LEA ESI,[ESP + 0x8]                 ; 005f50e0
    ADD ESP,0x8                         ; 005f50e4
    MOV EAX,EBX                         ; 005f50e7
    MOVSD.REP ES:EDI,ESI                ; 005f50e9
    ADD ESP,0x30                        ; 005f50eb
    POP EDI                             ; 005f50ee
    POP ESI                             ; 005f50ef
    POP EBX                             ; 005f50f0
    RET                                 ; 005f50f1

