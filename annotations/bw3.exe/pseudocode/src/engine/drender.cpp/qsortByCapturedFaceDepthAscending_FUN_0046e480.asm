; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_qsortByCapturedFaceDepthAscending_FUN_0046e480(SFace **face_ptr_a,SFace **face_ptr_b)
;
; Parameters:
; SFace * *        Stack[0x4]:4   face_ptr_a
; SFace * *        Stack[0x8]:4   face_ptr_b
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0 at 0046e52a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046e480
        ;   Label: engine_drender.cpp_qsortByCapturedFaceDepthAscending_FUN_0046e480
    MOV EDX,dword ptr [ESP + 0x8]       ; 0046e481
    MOV EAX,dword ptr [ESP + 0xc]       ; 0046e485
    MOV EDX,dword ptr [EDX]             ; 0046e489
    MOV EAX,dword ptr [EAX]             ; 0046e48b
    MOV ECX,dword ptr [EDX + 0x8]       ; 0046e48d
    MOV EBX,dword ptr [EAX + 0x8]       ; 0046e490
    CMP ECX,EBX                         ; 0046e493
    JG 0x0046e4a0                       ; 0046e495
        ;   XREF to: 0046e4a0 (CONDITIONAL_JUMP)  ; LAB_0046e4a0
    JGE 0x0046e4a7                      ; 0046e497
        ;   XREF to: 0046e4a7 (CONDITIONAL_JUMP)  ; LAB_0046e4a7
    MOV EAX,0xffffffff                  ; 0046e499
    POP EBX                             ; 0046e49e
    RET                                 ; 0046e49f
    MOV EAX,0x1                         ; 0046e4a0
        ;   Label: LAB_0046e4a0
    POP EBX                             ; 0046e4a5
    RET                                 ; 0046e4a6
    XOR EAX,EAX                         ; 0046e4a7
        ;   Label: LAB_0046e4a7
    POP EBX                             ; 0046e4a9
    RET                                 ; 0046e4aa

