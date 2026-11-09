; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_drender_cpp_qsortByCapturedFaceDepthDescending_FUN_0046c8d0(int *param_1,int *param_2)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900 at 0046c9e5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046c8d0
        ;   Label: engine_drender.cpp_qsortByCapturedFaceDepthDescending_FUN_0046c8d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0046c8d1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0046c8d5
    MOV EDX,dword ptr [EDX]             ; 0046c8d9
    MOV EAX,dword ptr [EAX]             ; 0046c8db
    MOV ECX,dword ptr [EDX + 0x8]       ; 0046c8dd
    MOV EBX,dword ptr [EAX + 0x8]       ; 0046c8e0
    CMP ECX,EBX                         ; 0046c8e3
    JL 0x0046c8f0                       ; 0046c8e5
        ;   XREF to: 0046c8f0 (CONDITIONAL_JUMP)  ; LAB_0046c8f0
    JLE 0x0046c8f7                      ; 0046c8e7
        ;   XREF to: 0046c8f7 (CONDITIONAL_JUMP)  ; LAB_0046c8f7
    MOV EAX,0xffffffff                  ; 0046c8e9
    POP EBX                             ; 0046c8ee
    RET                                 ; 0046c8ef
    MOV EAX,0x1                         ; 0046c8f0
        ;   Label: LAB_0046c8f0
    POP EBX                             ; 0046c8f5
    RET                                 ; 0046c8f6
    XOR EAX,EAX                         ; 0046c8f7
        ;   Label: LAB_0046c8f7
    POP EBX                             ; 0046c8f9
    RET                                 ; 0046c8fa

