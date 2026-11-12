; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderFullEffectsDirect_FUN_0046c090(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046c090
        ;   Label: engine_drender.cpp_CDemonRenderer_renderFullEffectsDirect_FUN_0046c090
    PUSH ESI                            ; 0046c091
    PUSH EDI                            ; 0046c092
    PUSH EBP                            ; 0046c093
    MOV EBP,dword ptr [ESP + 0x14]      ; 0046c094
    MOV ESI,dword ptr [ESP + 0x18]      ; 0046c098
    CMP dword ptr [EBP + 0xc],0x0       ; 0046c09c
    JNZ 0x0046c116                      ; 0046c0a0
        ;   XREF to: 0046c116 (CONDITIONAL_JUMP)  ; LAB_0046c116
    MOV ECX,0xffffffff                  ; 0046c0a6
        ;   Label: LAB_0046c0a6
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046c0ab
    XOR EDX,EDX                         ; 0046c0ae
    TEST EBX,EBX                        ; 0046c0b0
    JLE 0x0046c0d0                      ; 0046c0b2
        ;   XREF to: 0046c0d0 (CONDITIONAL_JUMP)  ; LAB_0046c0d0
    MOV EAX,ESI                         ; 0046c0b4
    MOV EDI,dword ptr [EBP]             ; 0046c0b6
    MOV EBX,dword ptr [EAX + 0x18]      ; 0046c0b9
        ;   Label: LAB_0046c0b9
    IMUL EBX,EBX,0x30                   ; 0046c0bc
    INC EDX                             ; 0046c0bf
    AND ECX,dword ptr [EDI + EBX*0x1 + 0x10] ; 0046c0c0
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046c0c4
    ADD EAX,0x4                         ; 0046c0c7
    CMP EDX,EBX                         ; 0046c0ca
    JL 0x0046c0b9                       ; 0046c0cc
        ;   XREF to: 0046c0b9 (CONDITIONAL_JUMP)  ; LAB_0046c0b9
    MOV EAX,EAX                         ; 0046c0ce
    TEST ECX,0x80000000                 ; 0046c0d0
        ;   Label: LAB_0046c0d0
    JZ 0x0046c0dd                       ; 0046c0d6
        ;   XREF to: 0046c0dd (CONDITIONAL_JUMP)  ; LAB_0046c0dd
    TEST CL,0x1f                        ; 0046c0d8
    JNZ 0x0046c111                      ; 0046c0db
        ;   XREF to: 0046c111 (CONDITIONAL_JUMP)  ; LAB_0046c111
    CMP dword ptr [EBP + 0x4],0x0       ; 0046c0dd
        ;   Label: LAB_0046c0dd
    JZ 0x0046c12b                       ; 0046c0e1
        ;   XREF to: 0046c12b (CONDITIONAL_JUMP)  ; LAB_0046c12b
    MOV EDX,0x1                         ; 0046c0e3
    MOV EAX,0x46fa57                    ; 0046c0e8
    XOR ECX,ECX                         ; 0046c0ed
    MOV dword ptr [0x01c6e2b4],EDX      ; 0046c0ef | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],ECX      ; 0046c0f5 | DAT_01c6e2b8
    MOV [0x01c6b5cc],EAX                ; 0046c0fb | DAT_01c6b5cc
    LEA EAX,[ESI + 0x18]                ; 0046c100
        ;   Label: LAB_0046c100
    PUSH EAX                            ; 0046c103
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046c104
    PUSH EBX                            ; 0046c107
    PUSH EBP                            ; 0046c108
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160 ; 0046c109
        ;   XREF to: 0046b160 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046c10e
    POP EBP                             ; 0046c111
        ;   Label: LAB_0046c111
    POP EDI                             ; 0046c112
    POP ESI                             ; 0046c113
    POP EBX                             ; 0046c114
    RET                                 ; 0046c115
    LEA EAX,[ESI + 0x8]                 ; 0046c116
        ;   Label: LAB_0046c116
    PUSH EAX                            ; 0046c119
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0046c11a
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 0046c11f
    TEST EAX,EAX                        ; 0046c122
    JZ 0x0046c111                       ; 0046c124
        ;   XREF to: 0046c111 (CONDITIONAL_JUMP)  ; LAB_0046c111
    JMP 0x0046c0a6                      ; 0046c126
        ;   XREF to: 0046c0a6 (UNCONDITIONAL_JUMP)  ; LAB_0046c0a6
    CMP dword ptr [0x005fba20],0x20     ; 0046c12b | DAT_005fba20
        ;   Label: LAB_0046c12b
    JNZ 0x0046c156                      ; 0046c132
        ;   XREF to: 0046c156 (CONDITIONAL_JUMP)  ; LAB_0046c156
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0046c134 | DAT_01c6b5cc
    MOV EDI,0x6                         ; 0046c13e
        ;   Label: LAB_0046c13e
    MOV EBX,0x3e7                       ; 0046c143
    MOV dword ptr [0x01c6e2b8],EDI      ; 0046c148 | DAT_01c6e2b8
    MOV dword ptr [0x01c6e2b4],EBX      ; 0046c14e | DAT_01c6e2b4
    JMP 0x0046c100                      ; 0046c154
        ;   XREF to: 0046c100 (UNCONDITIONAL_JUMP)  ; LAB_0046c100
    MOV dword ptr [0x01c6b5cc],0x561713 ; 0046c156 | DAT_01c6b5cc
        ;   Label: LAB_0046c156
    JMP 0x0046c13e                      ; 0046c160
        ;   XREF to: 0046c13e (UNCONDITIONAL_JUMP)  ; LAB_0046c13e

