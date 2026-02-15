; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_qsortByCapturedFaceDepthAscending_FUN_0048da20(SFace **face_ptr_a,SFace **face_ptr_b)
;
; Parameters:
; SFace * *        Stack[0x4]:4   face_ptr_a
; SFace * *        Stack[0x8]:4   face_ptr_b
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80 at 0048daca
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048da20
        ;   Label: engine_drender.cpp_qsortByCapturedFaceDepthAscending_FUN_0048da20
    MOV EDX,dword ptr [ESP + 0x8]       ; 0048da21
    MOV EAX,dword ptr [ESP + 0xc]       ; 0048da25
    MOV EDX,dword ptr [EDX]             ; 0048da29
    MOV EAX,dword ptr [EAX]             ; 0048da2b
    MOV ECX,dword ptr [EDX + 0x8]       ; 0048da2d
    MOV EBX,dword ptr [EAX + 0x8]       ; 0048da30
    CMP ECX,EBX                         ; 0048da33
    JG 0x0048da40                       ; 0048da35
        ;   XREF to: 0048da40 (CONDITIONAL_JUMP)  ; LAB_0048da40
    JGE 0x0048da47                      ; 0048da37
        ;   XREF to: 0048da47 (CONDITIONAL_JUMP)  ; LAB_0048da47
    MOV EAX,0xffffffff                  ; 0048da39
    POP EBX                             ; 0048da3e
    RET                                 ; 0048da3f
    MOV EAX,0x1                         ; 0048da40
        ;   Label: LAB_0048da40
    POP EBX                             ; 0048da45
    RET                                 ; 0048da46
    XOR EAX,EAX                         ; 0048da47
        ;   Label: LAB_0048da47
    POP EBX                             ; 0048da49
    RET                                 ; 0048da4a

