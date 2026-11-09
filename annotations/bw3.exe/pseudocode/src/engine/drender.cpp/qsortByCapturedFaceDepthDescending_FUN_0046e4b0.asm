; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_drender_cpp_qsortByCapturedFaceDepthDescending_FUN_0046e4b0(int *param_1,int *param_2)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0 at 0046e5c5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046e4b0
        ;   Label: engine_drender.cpp_qsortByCapturedFaceDepthDescending_FUN_0046e4b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0046e4b1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0046e4b5
    MOV EDX,dword ptr [EDX]             ; 0046e4b9
    MOV EAX,dword ptr [EAX]             ; 0046e4bb
    MOV ECX,dword ptr [EDX + 0x8]       ; 0046e4bd
    MOV EBX,dword ptr [EAX + 0x8]       ; 0046e4c0
    CMP ECX,EBX                         ; 0046e4c3
    JL 0x0046e4d0                       ; 0046e4c5
        ;   XREF to: 0046e4d0 (CONDITIONAL_JUMP)  ; LAB_0046e4d0
    JLE 0x0046e4d7                      ; 0046e4c7
        ;   XREF to: 0046e4d7 (CONDITIONAL_JUMP)  ; LAB_0046e4d7
    MOV EAX,0xffffffff                  ; 0046e4c9
    POP EBX                             ; 0046e4ce
    RET                                 ; 0046e4cf
    MOV EAX,0x1                         ; 0046e4d0
        ;   Label: LAB_0046e4d0
    POP EBX                             ; 0046e4d5
    RET                                 ; 0046e4d6
    XOR EAX,EAX                         ; 0046e4d7
        ;   Label: LAB_0046e4d7
    POP EBX                             ; 0046e4d9
    RET                                 ; 0046e4da

