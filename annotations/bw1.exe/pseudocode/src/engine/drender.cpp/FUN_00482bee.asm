; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_00482bee(CDemonRenderer *param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 00482bee
        ;   Label: engine_drender.cpp_FUN_00482bee
    PUSH EBX                            ; 00482bf0
    PUSH ESI                            ; 00482bf1
    PUSH EDI                            ; 00482bf2
    PUSH EBP                            ; 00482bf3
    MOV EBP,dword ptr [ESP + 0x14]      ; 00482bf4
    MOV ESI,dword ptr [ESP + 0x18]      ; 00482bf8
    CMP dword ptr [EBP + 0xc],0x0       ; 00482bfc
    JNZ 0x00482c76                      ; 00482c00
        ;   XREF to: 00482c76 (CONDITIONAL_JUMP)  ; LAB_00482c76
    MOV ECX,0xffffffff                  ; 00482c06
        ;   Label: LAB_00482c06
    MOV EBX,dword ptr [ESI + 0x4]       ; 00482c0b
    XOR EDX,EDX                         ; 00482c0e
    TEST EBX,EBX                        ; 00482c10
    JLE 0x00482c30                      ; 00482c12
        ;   XREF to: 00482c30 (CONDITIONAL_JUMP)  ; LAB_00482c30
    MOV EAX,ESI                         ; 00482c14
    MOV EDI,dword ptr [EBP]             ; 00482c16
    MOV EBX,dword ptr [EAX + 0x18]      ; 00482c19
        ;   Label: LAB_00482c19
    IMUL EBX,EBX,0x30                   ; 00482c1c
    INC EDX                             ; 00482c1f
    AND ECX,dword ptr [EDI + EBX*0x1 + 0x10] ; 00482c20
    MOV EBX,dword ptr [ESI + 0x4]       ; 00482c24
    ADD EAX,0x4                         ; 00482c27
    CMP EDX,EBX                         ; 00482c2a
    JL 0x00482c19                       ; 00482c2c
        ;   XREF to: 00482c19 (CONDITIONAL_JUMP)  ; LAB_00482c19
    MOV EAX,EAX                         ; 00482c2e
    TEST ECX,0x80000000                 ; 00482c30
        ;   Label: LAB_00482c30
    JZ 0x00482c3d                       ; 00482c36
        ;   XREF to: 00482c3d (CONDITIONAL_JUMP)  ; LAB_00482c3d
    TEST CL,0x1f                        ; 00482c38
    JNZ 0x00482c71                      ; 00482c3b
        ;   XREF to: 00482c71 (CONDITIONAL_JUMP)  ; LAB_00482c71
    CMP dword ptr [EBP + 0x4],0x0       ; 00482c3d
        ;   Label: LAB_00482c3d
    JZ 0x00482c8b                       ; 00482c41
        ;   XREF to: 00482c8b (CONDITIONAL_JUMP)  ; LAB_00482c8b
    MOV EDX,0x1                         ; 00482c43
    MOV EAX,0x486ed7                    ; 00482c48
    XOR ECX,ECX                         ; 00482c4d
    MOV dword ptr [0x01c51d14],EDX      ; 00482c4f | DAT_01c51d14
    MOV dword ptr [0x01c51d18],ECX      ; 00482c55 | DAT_01c51d18
    MOV [0x01c4f02c],EAX                ; 00482c5b | DAT_01c4f02c
    LEA EAX,[ESI + 0x18]                ; 00482c60
        ;   Label: LAB_00482c60
    PUSH EAX                            ; 00482c63
    MOV EBX,dword ptr [ESI + 0x4]       ; 00482c64
    PUSH EBX                            ; 00482c67
    PUSH EBP                            ; 00482c68
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 ; 00482c69
        ;   XREF to: 00481aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 00482c6e
    POP EBP                             ; 00482c71
        ;   Label: LAB_00482c71
    POP EDI                             ; 00482c72
    POP ESI                             ; 00482c73
    POP EBX                             ; 00482c74
    RET                                 ; 00482c75
    LEA EAX,[ESI + 0x8]                 ; 00482c76
        ;   Label: LAB_00482c76
    PUSH EAX                            ; 00482c79
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00482c7a
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 00482c7f
    TEST EAX,EAX                        ; 00482c82
    JZ 0x00482c71                       ; 00482c84
        ;   XREF to: 00482c71 (CONDITIONAL_JUMP)  ; LAB_00482c71
    JMP 0x00482c06                      ; 00482c86
        ;   XREF to: 00482c06 (UNCONDITIONAL_JUMP)  ; LAB_00482c06
    CMP dword ptr [0x0061b4a0],0x20     ; 00482c8b | DAT_0061b4a0
        ;   Label: LAB_00482c8b
    JNZ 0x00482cb6                      ; 00482c92
        ;   XREF to: 00482cb6 (CONDITIONAL_JUMP)  ; LAB_00482cb6
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00482c94 | DAT_01c4f02c
    MOV EDI,0x6                         ; 00482c9e
        ;   Label: LAB_00482c9e
    MOV EBX,0x2e7                       ; 00482ca3
    MOV dword ptr [0x01c51d18],EDI      ; 00482ca8 | DAT_01c51d18
    MOV dword ptr [0x01c51d14],EBX      ; 00482cae | DAT_01c51d14
    JMP 0x00482c60                      ; 00482cb4
        ;   XREF to: 00482c60 (UNCONDITIONAL_JUMP)  ; LAB_00482c60
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00482cb6 | DAT_01c4f02c
        ;   Label: LAB_00482cb6
    JMP 0x00482c9e                      ; 00482cc0
        ;   XREF to: 00482c9e (UNCONDITIONAL_JUMP)  ; LAB_00482c9e

