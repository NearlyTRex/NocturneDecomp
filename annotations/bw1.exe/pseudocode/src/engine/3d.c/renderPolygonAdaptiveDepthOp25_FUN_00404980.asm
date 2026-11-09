; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonAdaptiveDepthOp25_FUN_00404980(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006104ec
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_00713a5c
;   undefined4 DAT_00713a74
;   undefined4 DAT_01c4f020
;   undefined4 DAT_01c4f024
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_3d.c_lookupLitColor_FUN_00403990
;   engine_clipper.c_clipAndRasterize_FUN_0043cbf0
;   engine_light.cpp_calculateLighting_FUN_004ffd40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404980
        ;   Label: engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_00404980
    PUSH ESI                            ; 00404981
    PUSH EDI                            ; 00404982
    PUSH EBP                            ; 00404983
    MOV ESI,dword ptr [0x01c4f02c]      ; 00404984 | DAT_01c4f02c
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040498a
    LEA EDI,[EBX + 0x18]                ; 0040498e
    LEA EAX,[EBX + 0x8]                 ; 00404991
    PUSH EAX                            ; 00404994
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00404995
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 0040499a
    TEST EAX,EAX                        ; 0040499d
    JZ 0x00404a18                       ; 0040499f
        ;   XREF to: 00404a18 (CONDITIONAL_JUMP)  ; LAB_00404a18
    CMP dword ptr [0x00713a74],0x0      ; 004049a1 | DAT_00713a74
    JZ 0x00404a4f                       ; 004049a8
        ;   XREF to: 00404a4f (CONDITIONAL_JUMP)  ; LAB_00404a4f
    CMP dword ptr [0x01c51d00],0x0      ; 004049ae | DAT_01c51d00
    JNZ 0x00404a35                      ; 004049b5
        ;   XREF to: 00404a35 (CONDITIONAL_JUMP)  ; LAB_00404a35
    CMP dword ptr [0x0061b4a0],0x20     ; 004049bb | DAT_0061b4a0
    JNZ 0x00404a2e                      ; 004049c2
        ;   XREF to: 00404a2e (CONDITIONAL_JUMP)  ; LAB_00404a2e
    MOV ESI,0x57fb03                    ; 004049c4
    XOR EDX,EDX                         ; 004049c9
        ;   Label: LAB_004049c9
    MOV dword ptr [0x01c4f02c],ESI      ; 004049cb | DAT_01c4f02c
    MOV dword ptr [0x01c51d18],EDX      ; 004049d1 | DAT_01c51d18
    MOV dword ptr [0x01c51d14],EDX      ; 004049d7 | DAT_01c51d14
        ;   Label: LAB_004049d7
    MOV EBP,dword ptr [EBX + 0x10]      ; 004049dd
    PUSH EBP                            ; 004049e0
    MOV EAX,dword ptr [EBX + 0xc]       ; 004049e1
    PUSH EAX                            ; 004049e4
    MOV EDX,dword ptr [EBX + 0x8]       ; 004049e5
    PUSH EDX                            ; 004049e8
    CALL engine_light.cpp_calculateLighting_FUN_004ffd40 ; 004049e9
        ;   XREF to: 004ffd40 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_004ffd40(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 004049ee
    PUSH EAX                            ; 004049f1
    MOV ECX,dword ptr [0x00713a5c]      ; 004049f2 | DAT_00713a5c
    PUSH ECX                            ; 004049f8
    MOV [0x01c4f024],EAX                ; 004049f9 | DAT_01c4f024
    CALL engine_3d.c_lookupLitColor_FUN_00403990 ; 004049fe
        ;   XREF to: 00403990 (UNCONDITIONAL_CALL)  ; uint engine_3d.c_lookupLitColor_FUN_00403990(int color_value, int lighting_value)
    ADD ESP,0x8                         ; 00404a03
    PUSH EDI                            ; 00404a06
    MOV EDI,dword ptr [EBX + 0x4]       ; 00404a07
    PUSH EDI                            ; 00404a0a
    MOV [0x01c4f020],EAX                ; 00404a0b | DAT_01c4f020
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 00404a10
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404a15
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404a18
        ;   Label: LAB_00404a18
    ADD EBX,0x18                        ; 00404a1b
    SHL EAX,0x2                         ; 00404a1e
    MOV ESI,dword ptr [0x01c4f02c]      ; 00404a21 | DAT_01c4f02c
    ADD EAX,EBX                         ; 00404a27
    POP EBP                             ; 00404a29
    POP EDI                             ; 00404a2a
    POP ESI                             ; 00404a2b
    POP EBX                             ; 00404a2c
    RET                                 ; 00404a2d
    MOV ESI,0x57fd39                    ; 00404a2e
        ;   Label: LAB_00404a2e
    JMP 0x004049c9                      ; 00404a33
        ;   XREF to: 004049c9 (UNCONDITIONAL_JUMP)  ; LAB_004049c9
    CMP dword ptr [0x0061b4a0],0x20     ; 00404a35 | DAT_0061b4a0
        ;   Label: LAB_00404a35
    JNZ 0x00404a45                      ; 00404a3c
        ;   XREF to: 00404a45 (CONDITIONAL_JUMP)  ; LAB_00404a45
    MOV ESI,0x57de01                    ; 00404a3e
    JMP 0x004049c9                      ; 00404a43
        ;   XREF to: 004049c9 (UNCONDITIONAL_JUMP)  ; LAB_004049c9
    MOV ESI,0x57e5e3                    ; 00404a45
        ;   Label: LAB_00404a45
    JMP 0x004049c9                      ; 00404a4a
        ;   XREF to: 004049c9 (UNCONDITIONAL_JUMP)  ; LAB_004049c9
    CMP dword ptr [0x006104ec],0x0      ; 00404a4f | DAT_006104ec
        ;   Label: LAB_00404a4f
    JZ 0x00404aa8                       ; 00404a56
        ;   XREF to: 00404aa8 (CONDITIONAL_JUMP)  ; LAB_00404aa8
    CMP dword ptr [0x01c51d00],0x0      ; 00404a58 | DAT_01c51d00
    JNZ 0x00404a91                      ; 00404a5f
        ;   XREF to: 00404a91 (CONDITIONAL_JUMP)  ; LAB_00404a91
    CMP dword ptr [0x0061b4a0],0x20     ; 00404a61 | DAT_0061b4a0
    JNZ 0x00404a8a                      ; 00404a68
        ;   XREF to: 00404a8a (CONDITIONAL_JUMP)  ; LAB_00404a8a
    MOV ESI,0x57fb03                    ; 00404a6a
    MOV ECX,0x1                         ; 00404a6f
        ;   Label: LAB_00404a6f
    MOV EDX,0xd0                        ; 00404a74
    MOV dword ptr [0x01c4f02c],ESI      ; 00404a79 | DAT_01c4f02c
    MOV dword ptr [0x01c51d18],ECX      ; 00404a7f | DAT_01c51d18
    JMP 0x004049d7                      ; 00404a85
        ;   XREF to: 004049d7 (UNCONDITIONAL_JUMP)  ; LAB_004049d7
    MOV ESI,0x57fd39                    ; 00404a8a
        ;   Label: LAB_00404a8a
    JMP 0x00404a6f                      ; 00404a8f
        ;   XREF to: 00404a6f (UNCONDITIONAL_JUMP)  ; LAB_00404a6f
    CMP dword ptr [0x0061b4a0],0x20     ; 00404a91 | DAT_0061b4a0
        ;   Label: LAB_00404a91
    JNZ 0x00404aa1                      ; 00404a98
        ;   XREF to: 00404aa1 (CONDITIONAL_JUMP)  ; LAB_00404aa1
    MOV ESI,0x57de01                    ; 00404a9a
    JMP 0x00404a6f                      ; 00404a9f
        ;   XREF to: 00404a6f (UNCONDITIONAL_JUMP)  ; LAB_00404a6f
    MOV ESI,0x57e5e3                    ; 00404aa1
        ;   Label: LAB_00404aa1
    JMP 0x00404a6f                      ; 00404aa6
        ;   XREF to: 00404a6f (UNCONDITIONAL_JUMP)  ; LAB_00404a6f
    CMP dword ptr [0x01c51d00],0x0      ; 00404aa8 | DAT_01c51d00
        ;   Label: LAB_00404aa8
    JNZ 0x00404ade                      ; 00404aaf
        ;   XREF to: 00404ade (CONDITIONAL_JUMP)  ; LAB_00404ade
    CMP dword ptr [0x0061b4a0],0x20     ; 00404ab1 | DAT_0061b4a0
    JNZ 0x00404ad7                      ; 00404ab8
        ;   XREF to: 00404ad7 (CONDITIONAL_JUMP)  ; LAB_00404ad7
    MOV ESI,0x57fb03                    ; 00404aba
    MOV EDX,0x10                        ; 00404abf
        ;   Label: LAB_00404abf
    XOR ECX,ECX                         ; 00404ac4
    MOV dword ptr [0x01c4f02c],ESI      ; 00404ac6 | DAT_01c4f02c
    MOV dword ptr [0x01c51d18],ECX      ; 00404acc | DAT_01c51d18
    JMP 0x004049d7                      ; 00404ad2
        ;   XREF to: 004049d7 (UNCONDITIONAL_JUMP)  ; LAB_004049d7
    MOV ESI,0x57fd39                    ; 00404ad7
        ;   Label: LAB_00404ad7
    JMP 0x00404abf                      ; 00404adc
        ;   XREF to: 00404abf (UNCONDITIONAL_JUMP)  ; LAB_00404abf
    CMP dword ptr [0x0061b4a0],0x20     ; 00404ade | DAT_0061b4a0
        ;   Label: LAB_00404ade
    JNZ 0x00404aee                      ; 00404ae5
        ;   XREF to: 00404aee (CONDITIONAL_JUMP)  ; LAB_00404aee
    MOV ESI,0x57de01                    ; 00404ae7
    JMP 0x00404abf                      ; 00404aec
        ;   XREF to: 00404abf (UNCONDITIONAL_JUMP)  ; LAB_00404abf
    MOV ESI,0x57e5e3                    ; 00404aee
        ;   Label: LAB_00404aee
    JMP 0x00404abf                      ; 00404af3
        ;   XREF to: 00404abf (UNCONDITIONAL_JUMP)  ; LAB_00404abf

