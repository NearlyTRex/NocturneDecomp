; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_004820ec(CDemonRenderer *param_1,int param_2)
;
;
; Referenced Globals:
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

    LEA EDX,[EDX]                       ; 004820ec
        ;   Label: engine_drender.cpp_FUN_004820ec
    PUSH EBX                            ; 004820f0
    PUSH ESI                            ; 004820f1
    PUSH EBP                            ; 004820f2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004820f3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004820f7
    CMP dword ptr [EBX + 0xc],0x0       ; 004820fb
    JNZ 0x00482135                      ; 004820ff
        ;   XREF to: 00482135 (CONDITIONAL_JUMP)  ; LAB_00482135
    CMP dword ptr [EBX + 0x4],0x0       ; 00482101
        ;   Label: LAB_00482101
    JZ 0x00482147                       ; 00482105
        ;   XREF to: 00482147 (CONDITIONAL_JUMP)  ; LAB_00482147
    XOR ECX,ECX                         ; 00482107
    MOV EDX,0x486e26                    ; 00482109
    MOV dword ptr [0x01c51d14],ECX      ; 0048210e | DAT_01c51d14
    MOV dword ptr [0x01c51d18],ECX      ; 00482114 | DAT_01c51d18
    MOV dword ptr [0x01c4f02c],EDX      ; 0048211a | DAT_01c4f02c
    LEA EAX,[ESI + 0x18]                ; 00482120
        ;   Label: LAB_00482120
    PUSH EAX                            ; 00482123
    MOV EBP,dword ptr [ESI + 0x4]       ; 00482124
    PUSH EBP                            ; 00482127
    PUSH EBX                            ; 00482128
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 ; 00482129
        ;   XREF to: 00481aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0048212e
    POP EBP                             ; 00482131
        ;   Label: LAB_00482131
    POP ESI                             ; 00482132
    POP EBX                             ; 00482133
    RET                                 ; 00482134
    LEA EAX,[ESI + 0x8]                 ; 00482135
        ;   Label: LAB_00482135
    PUSH EAX                            ; 00482138
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00482139
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 0048213e
    TEST EAX,EAX                        ; 00482141
    JZ 0x00482131                       ; 00482143
        ;   XREF to: 00482131 (CONDITIONAL_JUMP)  ; LAB_00482131
    JMP 0x00482101                      ; 00482145
        ;   XREF to: 00482101 (UNCONDITIONAL_JUMP)  ; LAB_00482101
    PUSH EDI                            ; 00482147
        ;   Label: LAB_00482147
    MOV EBP,0x1                         ; 00482148
    MOV EAX,0x6                         ; 0048214d
    MOV EDI,0x48a7d9                    ; 00482152
    MOV dword ptr [0x01c51d14],EBP      ; 00482157 | DAT_01c51d14
    MOV [0x01c51d18],EAX                ; 0048215d | DAT_01c51d18
    MOV dword ptr [0x01c4f02c],EDI      ; 00482162 | DAT_01c4f02c
    POP EDI                             ; 00482168
    JMP 0x00482120                      ; 00482169
        ;   XREF to: 00482120 (UNCONDITIONAL_JUMP)  ; LAB_00482120

