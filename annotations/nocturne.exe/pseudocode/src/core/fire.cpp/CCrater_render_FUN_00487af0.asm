; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CCrater_render_FUN_00487af0(CCrater *this_ptr)
;
; Parameters:
; CCrater *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_fire.cpp_CCrater_activate_FUN_004876d0 at 004876fa
;   core_fire.cpp_CFireEffect_renderDecals_FUN_0048a970 at 0048aa2a
;
; Referenced Globals:
;   float FLOAT_0059d1f8 = 256
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b8afc
;   undefined4 DAT_005c5014
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;   undefined4 DAT_005c5034
;   undefined4 DAT_005c5038
;   undefined4 DAT_005c503c
;   undefined4 DAT_005c5044
;   undefined4 DAT_005c505c
;   undefined4 DAT_005c5060
;   undefined4 DAT_005c5064
;   undefined4 DAT_005c5068
;   undefined4 DAT_005c506c
;   ... and 13 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;   engine_special.cpp_transformPoint_FUN_00530a25
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00487af0
        ;   Label: core_fire.cpp_CCrater_render_FUN_00487af0
    PUSH EBP                            ; 00487af1
    SUB ESP,0x64                        ; 00487af2
    MOV ESI,dword ptr [ESP + 0x70]      ; 00487af5
    CMP dword ptr [ESI],0x0             ; 00487af9
    JNZ 0x00487b04                      ; 00487afc
        ;   XREF to: 00487b04 (CONDITIONAL_JUMP)  ; LAB_00487b04
    ADD ESP,0x64                        ; 00487afe
    POP EBP                             ; 00487b01
    POP ESI                             ; 00487b02
    RET                                 ; 00487b03
    PUSH EDI                            ; 00487b04
        ;   Label: LAB_00487b04
    PUSH EBX                            ; 00487b05
    LEA EAX,[ESI + 0xc]                 ; 00487b06
    PUSH EAX                            ; 00487b09
    MOV ECX,dword ptr [0x005ae704]      ; 00487b0a | DAT_005ae704
    PUSH ECX                            ; 00487b10 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00487b11
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00487b16
    PUSH 0x5b8afc                       ; 00487b19 | DAT_005b8afc
    MOV EBX,dword ptr [0x005ae704]      ; 00487b1e | DAT_005ae704
    PUSH EBX                            ; 00487b24 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00487b25
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00487b2a
    LEA EBX,[ESP + 0x54]                ; 00487b2d
    LEA EAX,[ESI + 0x40]                ; 00487b31
    FLD float ptr [EAX]                 ; 00487b34
    FMUL float ptr [0x0059d1f8]         ; 00487b36 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00487b3c
    FLD float ptr [EAX + 0x4]           ; 00487b3e
    FMUL float ptr [0x0059d1f8]         ; 00487b41 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00487b47
    FLD float ptr [EAX + 0x8]           ; 00487b4a
    FMUL float ptr [0x0059d1f8]         ; 00487b4d | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00487b53
    LEA EAX,[ESP + 0x54]                ; 00487b56
    PUSH EAX                            ; 00487b5a
    PUSH 0x5c5014                       ; 00487b5b | DAT_005c5014
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 00487b60
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00487b65
    LEA EBX,[ESP + 0x48]                ; 00487b68
    LEA EAX,[ESI + 0x4c]                ; 00487b6c
    FLD float ptr [EAX]                 ; 00487b6f
    FMUL float ptr [0x0059d1f8]         ; 00487b71 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00487b77
    FLD float ptr [EAX + 0x4]           ; 00487b79
    FMUL float ptr [0x0059d1f8]         ; 00487b7c | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00487b82
    FLD float ptr [EAX + 0x8]           ; 00487b85
    FMUL float ptr [0x0059d1f8]         ; 00487b88 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00487b8e
    LEA EAX,[ESP + 0x48]                ; 00487b91
    PUSH EAX                            ; 00487b95
    PUSH 0x5c5044                       ; 00487b96 | DAT_005c5044
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 00487b9b
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00487ba0
    LEA EBX,[ESP + 0x3c]                ; 00487ba3
    LEA EAX,[ESI + 0x58]                ; 00487ba7
    FLD float ptr [EAX]                 ; 00487baa
    FMUL float ptr [0x0059d1f8]         ; 00487bac | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00487bb2
    FLD float ptr [EAX + 0x4]           ; 00487bb4
    FMUL float ptr [0x0059d1f8]         ; 00487bb7 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00487bbd
    FLD float ptr [EAX + 0x8]           ; 00487bc0
    FMUL float ptr [0x0059d1f8]         ; 00487bc3 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00487bc9
    LEA EAX,[ESP + 0x3c]                ; 00487bcc
    PUSH EAX                            ; 00487bd0
    PUSH 0x5c5074                       ; 00487bd1 | DAT_005c5074
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 00487bd6
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00487bdb
    LEA EAX,[ESI + 0x64]                ; 00487bde
    LEA EBX,[ESP + 0x60]                ; 00487be1
    FLD float ptr [EAX]                 ; 00487be5
    FMUL float ptr [0x0059d1f8]         ; 00487be7 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00487bed
    FLD float ptr [EAX + 0x4]           ; 00487bef
    FMUL float ptr [0x0059d1f8]         ; 00487bf2 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00487bf8
    FLD float ptr [EAX + 0x8]           ; 00487bfb
    FMUL float ptr [0x0059d1f8]         ; 00487bfe | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00487c04
    LEA EAX,[ESP + 0x60]                ; 00487c07
    PUSH EAX                            ; 00487c0b
    PUSH 0x5c50a4                       ; 00487c0c | DAT_005c50a4
    MOV ESI,0xffff                      ; 00487c11
    MOV EDI,0xffff                      ; 00487c16
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 00487c1b
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_transformPoint_FUN_00530a25(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0x80000                     ; 00487c20
    MOV EBX,0xf80000                    ; 00487c25
    ADD ESP,0x8                         ; 00487c2a
    MOV dword ptr [0x005c5034],ESI      ; 00487c2d | DAT_005c5034
    MOV dword ptr [0x005c5038],ESI      ; 00487c33 | DAT_005c5038
    MOV dword ptr [0x005c503c],ESI      ; 00487c39 | DAT_005c503c
    MOV dword ptr [0x005c5064],ESI      ; 00487c3f | DAT_005c5064
    MOV dword ptr [0x005c5068],ESI      ; 00487c45 | DAT_005c5068
    MOV dword ptr [0x005c506c],ESI      ; 00487c4b | DAT_005c506c
    MOV dword ptr [0x005c5094],ESI      ; 00487c51 | DAT_005c5094
    MOV dword ptr [0x005c5098],ESI      ; 00487c57 | DAT_005c5098
    MOV dword ptr [0x005c509c],ESI      ; 00487c5d | DAT_005c509c
    MOV dword ptr [0x005c50c4],ESI      ; 00487c63 | DAT_005c50c4
    MOV dword ptr [0x005c50c8],ESI      ; 00487c69 | DAT_005c50c8
    MOV dword ptr [0x005c50cc],ESI      ; 00487c6f | DAT_005c50cc
    MOV dword ptr [0x005c502c],ECX      ; 00487c75 | DAT_005c502c
    MOV dword ptr [0x005c5030],EBX      ; 00487c7b | DAT_005c5030
    MOV dword ptr [0x005c505c],EBX      ; 00487c81 | DAT_005c505c
    MOV dword ptr [0x005c5060],EBX      ; 00487c87 | DAT_005c5060
    MOV dword ptr [0x005c508c],EBX      ; 00487c8d | DAT_005c508c
    MOV EAX,ECX                         ; 00487c93
    MOV dword ptr [0x005c5090],ECX      ; 00487c95 | DAT_005c5090
    MOV EDX,ECX                         ; 00487c9b
    MOV dword ptr [0x005c50bc],ECX      ; 00487c9d | DAT_005c50bc
    MOV dword ptr [0x005c50c0],ECX      ; 00487ca3 | DAT_005c50c0
    MOV dword ptr [ESP + 0x14],EDI      ; 00487ca9
    PUSH EDI                            ; 00487cad
    XOR ESI,ESI                         ; 00487cae
    MOV EBX,0x3                         ; 00487cb0
    MOV dword ptr [ESP + 0x14],ESI      ; 00487cb5
    MOV dword ptr [ESP + 0x1c],ESI      ; 00487cb9
    XOR EAX,ECX                         ; 00487cbd
    XOR EDX,ECX                         ; 00487cbf
    MOV ECX,0x1                         ; 00487cc1
    MOV ESI,dword ptr [0x005ae704]      ; 00487cc6 | DAT_005ae704
    MOV dword ptr [ESP + 0x10],EBX      ; 00487ccc
    MOV dword ptr [ESP + 0x20],EAX      ; 00487cd0
    MOV dword ptr [ESP + 0x24],EDX      ; 00487cd4
    MOV EBX,0x2                         ; 00487cd8
    PUSH ESI                            ; 00487cdd | DAT_01b4d738
    MOV dword ptr [ESP + 0x2c],ECX      ; 00487cde
    MOV dword ptr [ESP + 0x30],EBX      ; 00487ce2
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 00487ce6
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00487ceb
    LEA EAX,[ESP + 0x8]                 ; 00487cee
    PUSH EAX                            ; 00487cf2
    MOV EDI,dword ptr [0x005ae704]      ; 00487cf3 | DAT_005ae704
    PUSH EDI                            ; 00487cf9 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0 ; 00487cfa
        ;   XREF to: 004602a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00487cff
    XOR EBP,EBP                         ; 00487d02
    MOV EDX,0x3                         ; 00487d04
    PUSH 0xffff                         ; 00487d09
    MOV ECX,dword ptr [0x005ae704]      ; 00487d0e | DAT_005ae704
    MOV dword ptr [ESP + 0x24],EBP      ; 00487d14
    PUSH ECX                            ; 00487d18 | DAT_01b4d738
    MOV dword ptr [ESP + 0x2c],EBX      ; 00487d19
    MOV dword ptr [ESP + 0x30],EDX      ; 00487d1d
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 00487d21
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00487d26
    LEA EAX,[ESP + 0x8]                 ; 00487d29
    PUSH EAX                            ; 00487d2d
    MOV EBX,dword ptr [0x005ae704]      ; 00487d2e | DAT_005ae704
    PUSH EBX                            ; 00487d34 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0 ; 00487d35
        ;   XREF to: 004602a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00487d3a
    POP EBX                             ; 00487d3d
    POP EDI                             ; 00487d3e
    ADD ESP,0x64                        ; 00487d3f
    POP EBP                             ; 00487d42
    POP ESI                             ; 00487d43
    RET                                 ; 00487d44

