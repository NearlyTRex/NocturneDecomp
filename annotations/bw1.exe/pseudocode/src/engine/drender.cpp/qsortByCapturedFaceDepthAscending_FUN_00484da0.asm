; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_qsortByCapturedFaceDepthAscending_FUN_00484da0(SFace **face_ptr_a,SFace **face_ptr_b)
;
; Parameters:
; SFace * *        Stack[0x4]:4   face_ptr_a
; SFace * *        Stack[0x8]:4   face_ptr_b
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00 at 00484e4a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484da0
        ;   Label: engine_drender.cpp_qsortByCapturedFaceDepthAscending_FUN_00484da0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00484da1
    MOV EAX,dword ptr [ESP + 0xc]       ; 00484da5
    MOV EDX,dword ptr [EDX]             ; 00484da9
    MOV EAX,dword ptr [EAX]             ; 00484dab
    MOV ECX,dword ptr [EDX + 0x8]       ; 00484dad
    MOV EBX,dword ptr [EAX + 0x8]       ; 00484db0
    CMP ECX,EBX                         ; 00484db3
    JG 0x00484dc0                       ; 00484db5
        ;   XREF to: 00484dc0 (CONDITIONAL_JUMP)  ; LAB_00484dc0
    JGE 0x00484dc7                      ; 00484db7
        ;   XREF to: 00484dc7 (CONDITIONAL_JUMP)  ; LAB_00484dc7
    MOV EAX,0xffffffff                  ; 00484db9
    POP EBX                             ; 00484dbe
    RET                                 ; 00484dbf
    MOV EAX,0x1                         ; 00484dc0
        ;   Label: LAB_00484dc0
    POP EBX                             ; 00484dc5
    RET                                 ; 00484dc6
    XOR EAX,EAX                         ; 00484dc7
        ;   Label: LAB_00484dc7
    POP EBX                             ; 00484dc9
    RET                                 ; 00484dca

