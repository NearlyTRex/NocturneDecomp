; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cloth_cpp_FUN_005b0ce0(int param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   core_cloth.cpp_FUN_005b0c8c at 005b0cbb
;
; Referenced Globals:
;   undefined4 DAT_005f1107
;   undefined4 DAT_005f110b
;   undefined4 DAT_006011a0
;   undefined4 DAT_0060b280
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;
; Called Functions:
;   core_dirmat.cpp_FUN_004496e0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046b970
;   engine_matrix.c_pop_FUN_0046b4a0
;   engine_special.cpp_FUN_0055d723
;   shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_0047f1c0
;   shape_edittool.cpp_FUN_0047fd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0ce0
        ;   Label: core_cloth.cpp_FUN_005b0ce0
    PUSH ESI                            ; 005b0ce1
    PUSH EDI                            ; 005b0ce2
    PUSH EBP                            ; 005b0ce3
    SUB ESP,0x60                        ; 005b0ce4
    IMUL EAX,dword ptr [ESP + 0x78],0xac ; 005b0ce7
    MOV EBP,dword ptr [ESP + 0x74]      ; 005b0cef
    ADD EBP,0x37b50                     ; 005b0cf3
    ADD EBP,EAX                         ; 005b0cf9
    LEA EAX,[EBP + 0x78]                ; 005b0cfb
    LEA ESI,[ESP + 0x24]                ; 005b0cfe
    PUSH EAX                            ; 005b0d02
    LEA EDI,[ESP + 0x34]                ; 005b0d03
    MOV EBX,0x270                       ; 005b0d07
    CALL core_dirmat.cpp_FUN_004496e0   ; 005b0d0c
        ;   XREF to: 004496e0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004496e0()
    ADD ESP,0x4                         ; 005b0d11
    LEA EAX,[EBP + 0xa0]                ; 005b0d14
    LEA ESI,[ESP + 0x24]                ; 005b0d1a
    PUSH EAX                            ; 005b0d1e
    LEA EAX,[ESP + 0x34]                ; 005b0d1f
    MOV ECX,dword ptr [0x0060b280]      ; 005b0d23 | DAT_0060b280
    PUSH EAX                            ; 005b0d29
    MOVSD ES:EDI,ESI                    ; 005b0d2a
    MOVSD ES:EDI,ESI                    ; 005b0d2b
    MOVSD ES:EDI,ESI                    ; 005b0d2c
    PUSH ECX                            ; 005b0d2d
    XOR ESI,ESI                         ; 005b0d2e
    XOR EDI,EDI                         ; 005b0d30
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 005b0d32
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    MOV EDX,0xc                         ; 005b0d37
    ADD ESP,0xc                         ; 005b0d3c
    MOV ECX,0xffffffff                  ; 005b0d3f
    MOV dword ptr [ESP + 0x54],EBX      ; 005b0d44
    MOV dword ptr [ESP + 0x50],ESI      ; 005b0d48
    MOV dword ptr [ESP + 0x4c],EDX      ; 005b0d4c
    MOV dword ptr [ESP + 0x58],ECX      ; 005b0d50
    MOV EAX,dword ptr [ESP + 0x50]      ; 005b0d54
        ;   Label: LAB_005b0d54
    MOV dword ptr [ESP + 0x5c],EAX      ; 005b0d58
    FILD dword ptr [ESP + 0x5c]         ; 005b0d5c
    FMUL float ptr [0x005f1107]         ; 005b0d60 | DAT_005f1107
    FMUL float ptr [0x005f110b]         ; 005b0d66 | DAT_005f110b
    FLD float ptr [EBP + 0x14]          ; 005b0d6c
    FLD ST1                             ; 005b0d6f
    FSIN                                ; 005b0d71
    FXCH ST2                            ; 005b0d73
    FCOS                                ; 005b0d75
    FXCH ST2                            ; 005b0d77
    FMULP                               ; 005b0d79
    FSTP float ptr [ESP + 0xc]          ; 005b0d7b
    FMUL float ptr [EBP + 0x18]         ; 005b0d7f
    MOV EDX,dword ptr [0x0060b280]      ; 005b0d82 | DAT_0060b280
    XOR EBX,EBX                         ; 005b0d88
    LEA EAX,[ESP + 0xc]                 ; 005b0d8a
    MOV dword ptr [ESP + 0x14],EBX      ; 005b0d8e
    LEA EBX,[ESP + 0x18]                ; 005b0d92
    FSTP float ptr [ESP + 0x10]         ; 005b0d96
    FLD float ptr [EAX]                 ; 005b0d9a
    FMUL float ptr [0x006011a0]         ; 005b0d9c | DAT_006011a0
    FISTP dword ptr [EBX]               ; 005b0da2
    FLD float ptr [EAX + 0x4]           ; 005b0da4
    FMUL float ptr [0x006011a0]         ; 005b0da7 | DAT_006011a0
    FISTP dword ptr [EBX + 0x4]         ; 005b0dad
    FLD float ptr [EAX + 0x8]           ; 005b0db0
    FMUL float ptr [0x006011a0]         ; 005b0db3 | DAT_006011a0
    FISTP dword ptr [EBX + 0x8]         ; 005b0db9
    LEA EAX,[ESP + 0x18]                ; 005b0dbc
    PUSH EAX                            ; 005b0dc0
    MOV EAX,dword ptr [EDX]             ; 005b0dc1
    ADD EAX,EDI                         ; 005b0dc3
    PUSH EAX                            ; 005b0dc5
    CALL engine_special.cpp_FUN_0055d723 ; 005b0dc6
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005b0dcb
    MOV EAX,dword ptr [EBP + 0x44]      ; 005b0dce
    MOV dword ptr [ESP + 0x14],EAX      ; 005b0dd1
    LEA EAX,[ESI + 0xd]                 ; 005b0dd5
    MOV EBX,ESP                         ; 005b0dd8
    MOV dword ptr [ESP + 0x48],EAX      ; 005b0dda
    LEA EAX,[ESP + 0xc]                 ; 005b0dde
    MOV EDX,dword ptr [0x0060b280]      ; 005b0de2 | DAT_0060b280
    FLD float ptr [EAX]                 ; 005b0de8
    FMUL float ptr [0x006011a0]         ; 005b0dea | DAT_006011a0
    FISTP dword ptr [EBX]               ; 005b0df0
    FLD float ptr [EAX + 0x4]           ; 005b0df2
    FMUL float ptr [0x006011a0]         ; 005b0df5 | DAT_006011a0
    FISTP dword ptr [EBX + 0x4]         ; 005b0dfb
    FLD float ptr [EAX + 0x8]           ; 005b0dfe
    FMUL float ptr [0x006011a0]         ; 005b0e01 | DAT_006011a0
    FISTP dword ptr [EBX + 0x8]         ; 005b0e07
    MOV EAX,ESP                         ; 005b0e0a
    PUSH EAX                            ; 005b0e0c
    MOV EAX,dword ptr [EDX]             ; 005b0e0d
    ADD EAX,dword ptr [ESP + 0x58]      ; 005b0e0f
    PUSH EAX                            ; 005b0e13
    CALL engine_special.cpp_FUN_0055d723 ; 005b0e14
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 005b0e19
    TEST ESI,ESI                        ; 005b0e1c
    JG 0x005b0e73                       ; 005b0e1e
        ;   XREF to: 005b0e73 (CONDITIONAL_JUMP)  ; LAB_005b0e73
    MOV ECX,dword ptr [ESP + 0x50]      ; 005b0e20
        ;   Label: LAB_005b0e20
    MOV EBX,dword ptr [ESP + 0x4c]      ; 005b0e24
    MOV EAX,dword ptr [ESP + 0x58]      ; 005b0e28
    MOV EDX,dword ptr [ESP + 0x54]      ; 005b0e2c
    ADD EDI,0x30                        ; 005b0e30
    INC ESI                             ; 005b0e33
    ADD ECX,0x2                         ; 005b0e34
    INC EBX                             ; 005b0e37
    INC EAX                             ; 005b0e38
    ADD EDX,0x30                        ; 005b0e39
    MOV dword ptr [ESP + 0x50],ECX      ; 005b0e3c
    MOV dword ptr [ESP + 0x4c],EBX      ; 005b0e40
    MOV dword ptr [ESP + 0x58],EAX      ; 005b0e44
    MOV dword ptr [ESP + 0x54],EDX      ; 005b0e48
    CMP ESI,0xc                         ; 005b0e4c
    JLE 0x005b0d54                      ; 005b0e4f
        ;   XREF to: 005b0d54 (CONDITIONAL_JUMP)  ; LAB_005b0d54
    CMP dword ptr [ESP + 0x7c],0x0      ; 005b0e55
    JNZ 0x005b0eba                      ; 005b0e5a
        ;   XREF to: 005b0eba (CONDITIONAL_JUMP)  ; LAB_005b0eba
    MOV ESI,dword ptr [0x0060b280]      ; 005b0e5c | DAT_0060b280
        ;   Label: LAB_005b0e5c
    PUSH ESI                            ; 005b0e62
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 005b0e63
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 005b0e68
    ADD ESP,0x60                        ; 005b0e6b
    POP EBP                             ; 005b0e6e
    POP EDI                             ; 005b0e6f
    POP ESI                             ; 005b0e70
    POP EBX                             ; 005b0e71
    RET                                 ; 005b0e72
    MOV ECX,dword ptr [ESP + 0x48]      ; 005b0e73
        ;   Label: LAB_005b0e73
    PUSH ECX                            ; 005b0e77
    PUSH ESI                            ; 005b0e78
    MOV EBX,dword ptr [0x0060b280]      ; 005b0e79 | DAT_0060b280
    PUSH EBX                            ; 005b0e7f
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046b970 ; 005b0e80
        ;   XREF to: 0046b970 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046b970(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 005b0e85
    MOV EAX,dword ptr [ESP + 0x58]      ; 005b0e88
    PUSH EAX                            ; 005b0e8c
    PUSH ESI                            ; 005b0e8d
    MOV EDX,dword ptr [0x0060b280]      ; 005b0e8e | DAT_0060b280
    PUSH EDX                            ; 005b0e94
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046b970 ; 005b0e95
        ;   XREF to: 0046b970 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046b970(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 005b0e9a
    MOV ECX,dword ptr [ESP + 0x4c]      ; 005b0e9d
    PUSH ECX                            ; 005b0ea1
    MOV EBX,dword ptr [ESP + 0x4c]      ; 005b0ea2
    PUSH EBX                            ; 005b0ea6
    MOV EAX,[0x0060b280]                ; 005b0ea7 | DAT_0060b280
    PUSH EAX                            ; 005b0eac
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046b970 ; 005b0ead
        ;   XREF to: 0046b970 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046b970(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 005b0eb2
    JMP 0x005b0e20                      ; 005b0eb5
        ;   XREF to: 005b0e20 (UNCONDITIONAL_JUMP)  ; LAB_005b0e20
    MOV ECX,dword ptr [0x006138e0]      ; 005b0eba | g_CEditorToolsPtr
        ;   Label: LAB_005b0eba
    PUSH ECX                            ; 005b0ec0
    CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_0047f1c0 ; 005b0ec1
        ;   XREF to: 0047f1c0 (UNCONDITIONAL_CALL)  ; uint shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_0047f1c0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 005b0ec6
    FLD float ptr [EBP + 0x14]          ; 005b0ec9
    PUSH EAX                            ; 005b0ecc
    FADD float ptr [EBP + 0x18]         ; 005b0ecd
    SUB ESP,0x4                         ; 005b0ed0
    MOV EBX,dword ptr [0x006138e0]      ; 005b0ed3 | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 005b0ed9
    PUSH EBX                            ; 005b0edc
    CALL shape_edittool.cpp_FUN_0047fd00 ; 005b0edd
        ;   XREF to: 0047fd00 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047fd00()
    ADD ESP,0xc                         ; 005b0ee2
    JMP 0x005b0e5c                      ; 005b0ee5
        ;   XREF to: 005b0e5c (UNCONDITIONAL_JUMP)  ; LAB_005b0e5c

