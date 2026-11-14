; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_qsortByCapturedFaceDepthDescending_FUN_00484dd0(SFace **face_ptr_a,SFace **face_ptr_b)
;
; Parameters:
; SFace * *        Stack[0x4]:4   face_ptr_a
; SFace * *        Stack[0x8]:4   face_ptr_b
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00 at 00484ee5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484dd0
        ;   Label: engine_drender.cpp_qsortByCapturedFaceDepthDescending_FUN_00484dd0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00484dd1
    MOV EAX,dword ptr [ESP + 0xc]       ; 00484dd5
    MOV EDX,dword ptr [EDX]             ; 00484dd9
    MOV EAX,dword ptr [EAX]             ; 00484ddb
    MOV ECX,dword ptr [EDX + 0x8]       ; 00484ddd
    MOV EBX,dword ptr [EAX + 0x8]       ; 00484de0
    CMP ECX,EBX                         ; 00484de3
    JL 0x00484df0                       ; 00484de5
        ;   XREF to: 00484df0 (CONDITIONAL_JUMP)  ; LAB_00484df0
    JLE 0x00484df7                      ; 00484de7
        ;   XREF to: 00484df7 (CONDITIONAL_JUMP)  ; LAB_00484df7
    MOV EAX,0xffffffff                  ; 00484de9
    POP EBX                             ; 00484dee
    RET                                 ; 00484def
    MOV EAX,0x1                         ; 00484df0
        ;   Label: LAB_00484df0
    POP EBX                             ; 00484df5
    RET                                 ; 00484df6
    XOR EAX,EAX                         ; 00484df7
        ;   Label: LAB_00484df7
    POP EBX                             ; 00484df9
    RET                                 ; 00484dfa

