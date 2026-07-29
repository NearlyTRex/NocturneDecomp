; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_qsortByCapturedFaceDepthDescending_FUN_00461d80(SFace **face_ptr_a,SFace **face_ptr_b)
;
; Parameters:
; SFace * *        Stack[0x4]:4   face_ptr_a
; SFace * *        Stack[0x8]:4   face_ptr_b
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00461db0 at 00461e95
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461d80
        ;   Label: engine_drender.cpp_qsortByCapturedFaceDepthDescending_FUN_00461d80
    MOV EDX,dword ptr [ESP + 0x8]       ; 00461d81
    MOV EAX,dword ptr [ESP + 0xc]       ; 00461d85
    MOV EDX,dword ptr [EDX]             ; 00461d89
    MOV EAX,dword ptr [EAX]             ; 00461d8b
    MOV ECX,dword ptr [EDX + 0x8]       ; 00461d8d
    MOV EBX,dword ptr [EAX + 0x8]       ; 00461d90
    CMP ECX,EBX                         ; 00461d93
    JL 0x00461da0                       ; 00461d95
        ;   XREF to: 00461da0 (CONDITIONAL_JUMP)  ; LAB_00461da0
    JLE 0x00461da7                      ; 00461d97
        ;   XREF to: 00461da7 (CONDITIONAL_JUMP)  ; LAB_00461da7
    MOV EAX,0xffffffff                  ; 00461d99
    POP EBX                             ; 00461d9e
    RET                                 ; 00461d9f
    MOV EAX,0x1                         ; 00461da0
        ;   Label: LAB_00461da0
    POP EBX                             ; 00461da5
    RET                                 ; 00461da6
    XOR EAX,EAX                         ; 00461da7
        ;   Label: LAB_00461da7
    POP EBX                             ; 00461da9
    RET                                 ; 00461daa

