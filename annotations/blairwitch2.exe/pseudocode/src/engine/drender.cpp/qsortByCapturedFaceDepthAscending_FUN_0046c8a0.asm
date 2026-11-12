; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_qsortByCapturedFaceDepthAscending_FUN_0046c8a0(SFace **face_ptr_a,SFace **face_ptr_b)
;
; Parameters:
; SFace * *        Stack[0x4]:4   face_ptr_a
; SFace * *        Stack[0x8]:4   face_ptr_b
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900 at 0046c94a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046c8a0
        ;   Label: engine_drender.cpp_qsortByCapturedFaceDepthAscending_FUN_0046c8a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0046c8a1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0046c8a5
    MOV EDX,dword ptr [EDX]             ; 0046c8a9
    MOV EAX,dword ptr [EAX]             ; 0046c8ab
    MOV ECX,dword ptr [EDX + 0x8]       ; 0046c8ad
    MOV EBX,dword ptr [EAX + 0x8]       ; 0046c8b0
    CMP ECX,EBX                         ; 0046c8b3
    JG 0x0046c8c0                       ; 0046c8b5
        ;   XREF to: 0046c8c0 (CONDITIONAL_JUMP)  ; LAB_0046c8c0
    JGE 0x0046c8c7                      ; 0046c8b7
        ;   XREF to: 0046c8c7 (CONDITIONAL_JUMP)  ; LAB_0046c8c7
    MOV EAX,0xffffffff                  ; 0046c8b9
    POP EBX                             ; 0046c8be
    RET                                 ; 0046c8bf
    MOV EAX,0x1                         ; 0046c8c0
        ;   Label: LAB_0046c8c0
    POP EBX                             ; 0046c8c5
    RET                                 ; 0046c8c6
    XOR EAX,EAX                         ; 0046c8c7
        ;   Label: LAB_0046c8c7
    POP EBX                             ; 0046c8c9
    RET                                 ; 0046c8ca

