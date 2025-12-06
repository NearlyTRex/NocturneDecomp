; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_drender.cpp_qsortByCapturedFaceDepthDescending_FUN_0048da50(SFace * * face_ptr_a, SFace * * face_ptr_b)
;
; Parameters:
; SFace * *        Stack[0x4]:4   face_ptr_a
; SFace * *        Stack[0x8]:4   face_ptr_b
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80 at 0048db65
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048da50
        ;   Label: engine_drender.cpp_qsortByCapturedFaceDepthDescending_FUN_0048da50
    MOV EDX,dword ptr [ESP + 0x8]       ; 0048da51
    MOV EAX,dword ptr [ESP + 0xc]       ; 0048da55
    MOV EDX,dword ptr [EDX]             ; 0048da59
    MOV EAX,dword ptr [EAX]             ; 0048da5b
    MOV ECX,dword ptr [EDX + 0x8]       ; 0048da5d
    MOV EBX,dword ptr [EAX + 0x8]       ; 0048da60
    CMP ECX,EBX                         ; 0048da63
    JL 0x0048da70                       ; 0048da65 | LAB_0048da70
        ;   XREF to: 0048da70 (CONDITIONAL_JUMP)
    JLE 0x0048da77                      ; 0048da67 | LAB_0048da77
        ;   XREF to: 0048da77 (CONDITIONAL_JUMP)
    MOV EAX,0xffffffff                  ; 0048da69
    POP EBX                             ; 0048da6e
    RET                                 ; 0048da6f
    MOV EAX,0x1                         ; 0048da70
        ;   Label: LAB_0048da70
    POP EBX                             ; 0048da75
    RET                                 ; 0048da76
    XOR EAX,EAX                         ; 0048da77
        ;   Label: LAB_0048da77
    POP EBX                             ; 0048da79
    RET                                 ; 0048da7a

