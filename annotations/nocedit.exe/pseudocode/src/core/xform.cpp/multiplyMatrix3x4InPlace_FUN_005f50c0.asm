; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __cdecl core_xform_cpp_multiplyMatrix3x4InPlace_FUN_005f50c0(CMatrix3x4f *matrix_a,CMatrix3x4f *matrix_b)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix_a
; CMatrix3x4f *    Stack[0x8]:4   matrix_b
; Local Variables:
; CMatrix3x4f      Stack[-0x3c]:48  local_3c
;
; XREF[1]:
;   core_skeledit.cpp_CSkeleton_importSkeletonFile_FUN_00592690 at 005954c7
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
    JMP 0x03fc3a05                      ; 005f50db
        ;   XREF to: 03fc3a05 (UNCONDITIONAL_JUMP)  ; LAB_03fc3a05
    ADD ESP,0x30                        ; 005f50eb
        ;   Label: LAB_005f50eb
    POP EDI                             ; 005f50ee
    POP ESI                             ; 005f50ef
    POP EBX                             ; 005f50f0
    RET                                 ; 005f50f1
    MOV ECX,0xc                         ; 03fc3a05
        ;   Label: LAB_03fc3a05
    LEA ESI,[ESP + 0x8]                 ; 03fc3a0a
    ADD ESP,0x8                         ; 03fc3a0e
    MOV EAX,EBX                         ; 03fc3a11
    MOV ECX,dword ptr [ESI]             ; 03fc3a13
    MOV dword ptr [EDI],ECX             ; 03fc3a15
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc3a17
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc3a1a
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc3a1d
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc3a20
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc3a23
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc3a26
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc3a29
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc3a2c
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc3a2f
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc3a32
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc3a35
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc3a38
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc3a3b
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc3a3e
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc3a41
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc3a44
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc3a47
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc3a4a
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc3a4d
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc3a50
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc3a53
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc3a56
    ADD ESI,0x30                        ; 03fc3a59
    ADD EDI,0x30                        ; 03fc3a5c
    XOR ECX,ECX                         ; 03fc3a5f
    JMP 0x005f50eb                      ; 03fc3a61
        ;   XREF to: 005f50eb (UNCONDITIONAL_JUMP)  ; LAB_005f50eb

