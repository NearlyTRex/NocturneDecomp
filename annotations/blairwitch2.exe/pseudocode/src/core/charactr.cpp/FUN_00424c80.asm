; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_FUN_00424c80(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined        Stack[-0xf0]:1  local_f0
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_00424bd0 at 00424c6d
;
; Referenced Globals:
;   undefined4 s_s_7headlite_raw_005ccd01+1
;   undefined4 s_s_7headlite_raw_005ccd01+2
;   undefined4 s_s_7headlite_raw_005ccd01+3
;   undefined4 s_s_7headlite_raw_005ccd01+4
;   undefined4 DAT_005ccd16
;   undefined4 DAT_005ccd1e
;   undefined4 DAT_005ccd22
;   undefined4 DAT_005f4060
;   undefined4 DAT_0060b280
;   undefined4 DAT_007bda78
;   undefined1 DAT_007bda80
;   undefined1 DAT_007bda81
;   undefined1 DAT_007bda82
;   undefined1 DAT_007bda83
;   undefined4 DAT_00800000
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408de0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00424c80
        ;   Label: core_charactr.cpp_FUN_00424c80
    PUSH ESI                            ; 00424c81
    PUSH EDI                            ; 00424c82
    PUSH EBP                            ; 00424c83
    MOV EBP,ESP                         ; 00424c84
    SUB ESP,0x10c                       ; 00424c86
    AND ESP,0xfffffff8                  ; 00424c8c
    MOV EDX,dword ptr [0x0060b280]      ; 00424c8f | DAT_0060b280
    PUSH EDX                            ; 00424c95 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 00424c96
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00424c9b
    TEST EAX,EAX                        ; 00424c9e
    JZ 0x00424ca9                       ; 00424ca0
        ;   XREF to: 00424ca9 (CONDITIONAL_JUMP)  ; LAB_00424ca9
    MOV ESP,EBP                         ; 00424ca2
    POP EBP                             ; 00424ca4
    POP EDI                             ; 00424ca5
    POP ESI                             ; 00424ca6
    POP EBX                             ; 00424ca7
    RET                                 ; 00424ca8
    MOV ESI,0x5ccd02                    ; 00424ca9 | s_s_7headlite_raw_005ccd01+1
        ;   Label: LAB_00424ca9
    MOV EDI,0x7bda80                    ; 00424cae | DAT_007bda80
    MOV dword ptr [ESP + 0x1c],EAX      ; 00424cb3
    MOV dword ptr [ESP + 0x18],EAX      ; 00424cb7
    MOV dword ptr [ESP + 0x14],EAX      ; 00424cbb
    MOV dword ptr [ESP + 0x10],EAX      ; 00424cbf
    PUSH EDI                            ; 00424cc3 | DAT_007bda80
    MOV AL,byte ptr [ESI]               ; 00424cc4 | s_s_7headlite_raw_005ccd01+1 | s_s_7headlite_raw_005ccd01+3
        ;   Label: LAB_00424cc4
    MOV byte ptr [EDI],AL               ; 00424cc6 | DAT_007bda80 | DAT_007bda82
    CMP AL,0x0                          ; 00424cc8
    JZ 0x00424cdc                       ; 00424cca
        ;   XREF to: 00424cdc (CONDITIONAL_JUMP)  ; LAB_00424cdc
    MOV AL,byte ptr [ESI + 0x1]         ; 00424ccc | s_s_7headlite_raw_005ccd01+2 | s_s_7headlite_raw_005ccd01+4
    ADD ESI,0x2                         ; 00424ccf
    MOV byte ptr [EDI + 0x1],AL         ; 00424cd2 | DAT_007bda81 | DAT_007bda83
    ADD EDI,0x2                         ; 00424cd5
    CMP AL,0x0                          ; 00424cd8
    JNZ 0x00424cc4                      ; 00424cda
        ;   XREF to: 00424cc4 (CONDITIONAL_JUMP)  ; LAB_00424cc4
    POP EDI                             ; 00424cdc
        ;   Label: LAB_00424cdc
    PUSH 0x7bda78                       ; 00424cdd | DAT_007bda78
    MOV EAX,[0x0060b280]                ; 00424ce2 | DAT_0060b280
    PUSH EAX                            ; 00424ce7 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 00424ce8
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 00424ced
    XOR EAX,EAX                         ; 00424cf0
    MOV ESI,0x800000                    ; 00424cf2 | DAT_00800000
    MOV EDX,dword ptr [0x0060b280]      ; 00424cf7 | DAT_0060b280
        ;   Label: LAB_00424cf7
    MOV EBX,dword ptr [EDX]             ; 00424cfd | DAT_01ba5c50
    MOV dword ptr [EBX + EAX*0x1 + 0x18],ESI ; 00424cff | DAT_00800000
    ADD EAX,0x30                        ; 00424d03
    MOV EDX,dword ptr [EDX]             ; 00424d06 | DAT_01ba5c50
    MOV dword ptr [EDX + EAX*0x1 + -0x14],ESI ; 00424d08 | DAT_00800000
    CMP EAX,0x12c0                      ; 00424d0c
    JNZ 0x00424cf7                      ; 00424d11
        ;   XREF to: 00424cf7 (CONDITIONAL_JUMP)  ; LAB_00424cf7
    MOV EDX,0x267                       ; 00424d13
    MOV ECX,0x3                         ; 00424d18
    MOV ESI,0x1                         ; 00424d1d
    MOV EDI,0x2                         ; 00424d22
    MOV EAX,dword ptr [EBP + 0x14]      ; 00424d27
    XOR EBX,EBX                         ; 00424d2a
    MOV dword ptr [ESP + 0xe0],EDX      ; 00424d2c
    MOV dword ptr [ESP + 0xc],ECX       ; 00424d33
    MOV dword ptr [ESP + 0x20],EBX      ; 00424d37
    MOV dword ptr [ESP + 0x24],ESI      ; 00424d3b
    MOV dword ptr [ESP + 0x28],EDI      ; 00424d3f
    MOV dword ptr [ESP + 0x2c],ECX      ; 00424d43
    ADD EAX,0x2ed4                      ; 00424d47
    MOV EDX,0x28000                     ; 00424d4c
    MOV dword ptr [ESP + 0xe8],EAX      ; 00424d51
    ADD EAX,0xb4                        ; 00424d58
    MOV dword ptr [ESP + 0xe4],EDX      ; 00424d5d
    MOV dword ptr [ESP + 0xc8],EAX      ; 00424d64
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00424d6b
        ;   Label: LAB_00424d6b
    MOV EDX,EAX                         ; 00424d72
    MOV EBX,0x5                         ; 00424d74
    SAR EDX,0x1f                        ; 00424d79
    IDIV EBX                            ; 00424d7c
    PUSH EAX                            ; 00424d7e
    MOV ECX,dword ptr [0x0060b280]      ; 00424d7f | DAT_0060b280
    PUSH ECX                            ; 00424d85 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 00424d86
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00424d8b
    XOR EBX,EBX                         ; 00424d8e
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00424d90
    MOV dword ptr [ESP + 0x104],EBX     ; 00424d97
    MOV dword ptr [ESP + 0xf8],EAX      ; 00424d9e
    MOV EAX,[0x0060b280]                ; 00424da5 | DAT_0060b280
        ;   Label: LAB_00424da5
    MOV ESI,dword ptr [ESP + 0x104]     ; 00424daa
    MOV EBX,dword ptr [EAX]             ; 00424db1 | DAT_01ba5c50
    ADD EBX,ESI                         ; 00424db3
    MOV dword ptr [EBX + 0x20],0x0      ; 00424db5
    MOV EBX,dword ptr [EAX]             ; 00424dbc | DAT_01ba5c50
    ADD EBX,ESI                         ; 00424dbe
    MOV ECX,dword ptr [ESP + 0xf8]      ; 00424dc0
    LEA EDI,[ESP + 0xa8]                ; 00424dc7
    MOV dword ptr [EBX + 0x24],0xffff   ; 00424dce
    PUSH ECX                            ; 00424dd5
    MOV EAX,dword ptr [EAX]             ; 00424dd6 | DAT_01ba5c50
    MOV EBX,dword ptr [EBP + 0x14]      ; 00424dd8
    ADD EAX,ESI                         ; 00424ddb
    PUSH EBX                            ; 00424ddd
    LEA ESI,[ESP + 0x38]                ; 00424dde
    MOV dword ptr [EAX + 0x28],0x0      ; 00424de2
    LEA EBX,[ESP + 0xb0]                ; 00424de9
    CALL core_actor.cpp_FUN_00408de0    ; 00424df0
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x38]                ; 00424df5
    ADD ESP,0x8                         ; 00424df9
    LEA EAX,[ESP + 0x60]                ; 00424dfc
    MOVSD ES:EDI,ESI                    ; 00424e00
    MOVSD ES:EDI,ESI                    ; 00424e01
    MOVSD ES:EDI,ESI                    ; 00424e02
    CMP EAX,EBX                         ; 00424e03
    JZ 0x00424e28                       ; 00424e05
        ;   XREF to: 00424e28 (CONDITIONAL_JUMP)  ; LAB_00424e28
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00424e07
    MOV dword ptr [ESP + 0x60],EAX      ; 00424e0e
    MOV EAX,dword ptr [ESP + 0xac]      ; 00424e12
    MOV dword ptr [ESP + 0x64],EAX      ; 00424e19
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00424e1d
    MOV dword ptr [ESP + 0x68],EAX      ; 00424e24
    LEA EBX,[ESP + 0x78]                ; 00424e28
        ;   Label: LAB_00424e28
    LEA EAX,[ESP + 0x60]                ; 00424e2c
    MOV ESI,dword ptr [0x0060b280]      ; 00424e30 | DAT_0060b280
    FLD float ptr [EAX]                 ; 00424e36
    FMUL float ptr [0x005f4060]         ; 00424e38 | DAT_005f4060
    FISTP dword ptr [EBX]               ; 00424e3e
    FLD float ptr [EAX + 0x4]           ; 00424e40
    FMUL float ptr [0x005f4060]         ; 00424e43 | DAT_005f4060
    FISTP dword ptr [EBX + 0x4]         ; 00424e49
    FLD float ptr [EAX + 0x8]           ; 00424e4c
    FMUL float ptr [0x005f4060]         ; 00424e4f | DAT_005f4060
    FISTP dword ptr [EBX + 0x8]         ; 00424e55
    LEA EAX,[ESP + 0x78]                ; 00424e58
    PUSH EAX                            ; 00424e5c
    MOV EAX,dword ptr [ESI]             ; 00424e5d | DAT_01ba5c50
    MOV ESI,dword ptr [ESP + 0x108]     ; 00424e5f
    ADD EAX,ESI                         ; 00424e66
    PUSH EAX                            ; 00424e68
    CALL engine_special.cpp_FUN_0055d723 ; 00424e69
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00424e6e
    MOV EDI,dword ptr [ESP + 0xf8]      ; 00424e71
    LEA EAX,[ESI + 0x30]                ; 00424e78
    ADD EDI,0xc                         ; 00424e7b
    MOV dword ptr [ESP + 0x104],EAX     ; 00424e7e
    MOV dword ptr [ESP + 0xf8],EDI      ; 00424e85
    CMP EAX,0x90                        ; 00424e8c
    JNZ 0x00424da5                      ; 00424e91
        ;   XREF to: 00424da5 (CONDITIONAL_JUMP)  ; LAB_00424da5
    PUSH 0x267                          ; 00424e97
    LEA EAX,[ESP + 0xc]                 ; 00424e9c
    PUSH EAX                            ; 00424ea0
    MOV ECX,dword ptr [0x0060b280]      ; 00424ea1 | DAT_0060b280
    PUSH ECX                            ; 00424ea7 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60 ; 00424ea8
        ;   XREF to: 00469c60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 00424ead
    MOV EBX,dword ptr [ESP + 0xe8]      ; 00424eb0
    MOV ESI,dword ptr [ESP + 0xe4]      ; 00424eb7
    MOV EDI,dword ptr [ESP + 0xc8]      ; 00424ebe
    ADD EBX,0x24                        ; 00424ec5
    ADD ESI,0xffff8000                  ; 00424ec8
    MOV dword ptr [ESP + 0xe8],EBX      ; 00424ece
    MOV dword ptr [ESP + 0xe4],ESI      ; 00424ed5
    CMP EBX,EDI                         ; 00424edc
    JNZ 0x00424d6b                      ; 00424ede
        ;   XREF to: 00424d6b (CONDITIONAL_JUMP)  ; LAB_00424d6b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00424ee4
    ADD EAX,0x2f88                      ; 00424ee7
    MOV EDX,0x28000                     ; 00424eec
    MOV dword ptr [ESP + 0xec],EAX      ; 00424ef1
    ADD EAX,0xb4                        ; 00424ef8
    MOV dword ptr [ESP + 0xdc],EDX      ; 00424efd
    MOV dword ptr [ESP + 0xcc],EAX      ; 00424f04
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00424f0b
        ;   Label: LAB_00424f0b
    MOV EDX,EAX                         ; 00424f12
    MOV EBX,0x5                         ; 00424f14
    SAR EDX,0x1f                        ; 00424f19
    IDIV EBX                            ; 00424f1c
    PUSH EAX                            ; 00424f1e
    MOV ECX,dword ptr [0x0060b280]      ; 00424f1f | DAT_0060b280
    PUSH ECX                            ; 00424f25 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 00424f26
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00424f2b
    XOR EBX,EBX                         ; 00424f2e
    MOV EAX,dword ptr [ESP + 0xec]      ; 00424f30
    MOV dword ptr [ESP + 0x100],EBX     ; 00424f37
    MOV dword ptr [ESP + 0xfc],EAX      ; 00424f3e
    MOV EAX,[0x0060b280]                ; 00424f45 | DAT_0060b280
        ;   Label: LAB_00424f45
    MOV ESI,dword ptr [ESP + 0x100]     ; 00424f4a
    MOV EBX,dword ptr [EAX]             ; 00424f51 | DAT_01ba5c50
    ADD EBX,ESI                         ; 00424f53
    MOV dword ptr [EBX + 0x20],0x0      ; 00424f55
    MOV EBX,dword ptr [EAX]             ; 00424f5c | DAT_01ba5c50
    ADD EBX,ESI                         ; 00424f5e
    MOV ECX,dword ptr [ESP + 0xfc]      ; 00424f60
    LEA EDI,[ESP + 0x3c]                ; 00424f67
    MOV dword ptr [EBX + 0x24],0x0      ; 00424f6b
    PUSH ECX                            ; 00424f72
    MOV EAX,dword ptr [EAX]             ; 00424f73 | DAT_01ba5c50
    MOV EBX,dword ptr [EBP + 0x14]      ; 00424f75
    ADD EAX,ESI                         ; 00424f78
    PUSH EBX                            ; 00424f7a
    LEA ESI,[ESP + 0xa4]                ; 00424f7b
    MOV dword ptr [EAX + 0x28],0xffff   ; 00424f82
    LEA EBX,[ESP + 0x68]                ; 00424f89
    CALL core_actor.cpp_FUN_00408de0    ; 00424f8d
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0xa4]                ; 00424f92
    ADD ESP,0x8                         ; 00424f99
    LEA EAX,[ESP + 0x3c]                ; 00424f9c
    MOVSD ES:EDI,ESI                    ; 00424fa0
    MOVSD ES:EDI,ESI                    ; 00424fa1
    MOVSD ES:EDI,ESI                    ; 00424fa2
    CMP EBX,EAX                         ; 00424fa3
    JZ 0x00424fbf                       ; 00424fa5
        ;   XREF to: 00424fbf (CONDITIONAL_JUMP)  ; LAB_00424fbf
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00424fa7
    MOV dword ptr [ESP + 0x60],EAX      ; 00424fab
    MOV EAX,dword ptr [ESP + 0x40]      ; 00424faf
    MOV dword ptr [ESP + 0x64],EAX      ; 00424fb3
    MOV EAX,dword ptr [ESP + 0x44]      ; 00424fb7
    MOV dword ptr [ESP + 0x68],EAX      ; 00424fbb
    LEA EBX,[ESP + 0x54]                ; 00424fbf
        ;   Label: LAB_00424fbf
    LEA EAX,[ESP + 0x60]                ; 00424fc3
    MOV ESI,dword ptr [0x0060b280]      ; 00424fc7 | DAT_0060b280
    FLD float ptr [EAX]                 ; 00424fcd
    FMUL float ptr [0x005f4060]         ; 00424fcf | DAT_005f4060
    FISTP dword ptr [EBX]               ; 00424fd5
    FLD float ptr [EAX + 0x4]           ; 00424fd7
    FMUL float ptr [0x005f4060]         ; 00424fda | DAT_005f4060
    FISTP dword ptr [EBX + 0x4]         ; 00424fe0
    FLD float ptr [EAX + 0x8]           ; 00424fe3
    FMUL float ptr [0x005f4060]         ; 00424fe6 | DAT_005f4060
    FISTP dword ptr [EBX + 0x8]         ; 00424fec
    LEA EAX,[ESP + 0x54]                ; 00424fef
    PUSH EAX                            ; 00424ff3
    MOV EAX,dword ptr [ESI]             ; 00424ff4 | DAT_01ba5c50
    MOV ESI,dword ptr [ESP + 0x104]     ; 00424ff6
    ADD EAX,ESI                         ; 00424ffd
    PUSH EAX                            ; 00424fff
    CALL engine_special.cpp_FUN_0055d723 ; 00425000
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00425005
    MOV EDI,dword ptr [ESP + 0xfc]      ; 00425008
    LEA EAX,[ESI + 0x30]                ; 0042500f
    ADD EDI,0xc                         ; 00425012
    MOV dword ptr [ESP + 0x100],EAX     ; 00425015
    MOV dword ptr [ESP + 0xfc],EDI      ; 0042501c
    CMP EAX,0x90                        ; 00425023
    JNZ 0x00424f45                      ; 00425028
        ;   XREF to: 00424f45 (CONDITIONAL_JUMP)  ; LAB_00424f45
    MOV ECX,dword ptr [ESP + 0xe0]      ; 0042502e
    PUSH ECX                            ; 00425035
    LEA EAX,[ESP + 0xc]                 ; 00425036
    PUSH EAX                            ; 0042503a
    MOV EBX,dword ptr [0x0060b280]      ; 0042503b | DAT_0060b280
    PUSH EBX                            ; 00425041 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60 ; 00425042
        ;   XREF to: 00469c60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 00425047
    MOV ESI,dword ptr [ESP + 0xec]      ; 0042504a
    MOV EDI,dword ptr [ESP + 0xdc]      ; 00425051
    MOV EDX,dword ptr [ESP + 0xcc]      ; 00425058
    ADD ESI,0x24                        ; 0042505f
    ADD EDI,0xffff8000                  ; 00425062
    MOV dword ptr [ESP + 0xec],ESI      ; 00425068
    MOV dword ptr [ESP + 0xdc],EDI      ; 0042506f
    CMP ESI,EDX                         ; 00425076
    JNZ 0x00424f0b                      ; 00425078
        ;   XREF to: 00424f0b (CONDITIONAL_JUMP)  ; LAB_00424f0b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042507e
    FLD float ptr [EAX + 0x3444]        ; 00425081
    FMUL float ptr [EAX + 0x2824]       ; 00425087
    FLD float ptr [EAX + 0x3440]        ; 0042508d
    FMUL float ptr [EAX + 0x2824]       ; 00425093
    FXCH                                ; 00425099
    FSTP float ptr [ESP + 0xd0]         ; 0042509b
    FCOMP float ptr [ESP + 0xd0]        ; 004250a2
    FNSTSW AX                           ; 004250a9
    SAHF                                ; 004250ab
    JBE 0x004250be                      ; 004250ac
        ;   XREF to: 004250be (CONDITIONAL_JUMP)  ; LAB_004250be
    MOV EAX,dword ptr [EBP + 0x14]      ; 004250ae
    MOV EAX,dword ptr [EAX + 0x24fc]    ; 004250b1
    MOV dword ptr [ESP + 0xd0],EAX      ; 004250b7
    MOV EAX,dword ptr [EBP + 0x14]      ; 004250be
        ;   Label: LAB_004250be
    FLD float ptr [EAX + 0x3440]        ; 004250c1
    FMUL float ptr [EAX + 0x2824]       ; 004250c7
    FLD float ptr [ESP + 0xd0]          ; 004250cd
    FXCH                                ; 004250d4
    FSTP float ptr [ESP + 0x4]          ; 004250d6
    FCOMP float ptr [ESP + 0x4]         ; 004250da
    FNSTSW AX                           ; 004250de
    SAHF                                ; 004250e0
    JC 0x0042548e                       ; 004250e1
        ;   XREF to: 0042548e (CONDITIONAL_JUMP)  ; LAB_0042548e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004250e7
        ;   Label: LAB_004250e7
    FLD float ptr [EAX + 0x3440]        ; 004250ea
    FMUL float ptr [EAX + 0x2824]       ; 004250f0
    FLD float ptr [EAX + 0x3434]        ; 004250f6
    FMUL float ptr [EAX + 0x2824]       ; 004250fc
    MOV EDI,0x30                        ; 00425102
    XOR ECX,ECX                         ; 00425107
    XOR ESI,ESI                         ; 00425109
    MOV dword ptr [ESP + 0xf0],ECX      ; 0042510b
    FSTP float ptr [ESP]                ; 00425112
    FSTP float ptr [ESP + 0xc4]         ; 00425115
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0042511c
        ;   Label: LAB_0042511c
    ADD EAX,EAX                         ; 00425123
    MOV dword ptr [ESP + 0x108],EAX     ; 00425125
    FILD dword ptr [ESP + 0x108]        ; 0042512c
    FMUL float ptr [0x005ccd1e]         ; 00425133 | DAT_005ccd1e
    FMUL float ptr [0x005ccd22]         ; 00425139 | DAT_005ccd22
    MOV dword ptr [ESP + 0xf4],EAX      ; 0042513f
    FLD ST0                             ; 00425146
    FSIN                                ; 00425148
    FXCH                                ; 0042514a
    FCOS                                ; 0042514c
    FLD float ptr [ESP]                 ; 0042514e
    FXCH ST2                            ; 00425151
    FMUL ST2                            ; 00425153
    FXCH                                ; 00425155
    FMULP ST2                           ; 00425157
    LEA EBX,[ESP + 0x6c]                ; 00425159
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0042515d
    MOV EDX,dword ptr [0x0060b280]      ; 00425164 | DAT_0060b280
    MOV dword ptr [ESP + 0x64],EAX      ; 0042516a
    LEA EAX,[ESP + 0x60]                ; 0042516e
    FSTP float ptr [ESP + 0x60]         ; 00425172
    FSTP float ptr [ESP + 0x68]         ; 00425176
    FLD float ptr [EAX]                 ; 0042517a
    FMUL float ptr [0x005f4060]         ; 0042517c | DAT_005f4060
    FISTP dword ptr [EBX]               ; 00425182
    FLD float ptr [EAX + 0x4]           ; 00425184
    FMUL float ptr [0x005f4060]         ; 00425187 | DAT_005f4060
    FISTP dword ptr [EBX + 0x4]         ; 0042518d
    FLD float ptr [EAX + 0x8]           ; 00425190
    FMUL float ptr [0x005f4060]         ; 00425193 | DAT_005f4060
    FISTP dword ptr [EBX + 0x8]         ; 00425199
    LEA EAX,[ESP + 0x6c]                ; 0042519c
    PUSH EAX                            ; 004251a0
    MOV EAX,dword ptr [EDX]             ; 004251a1 | DAT_01ba5c50
    ADD EAX,ESI                         ; 004251a3
    PUSH EAX                            ; 004251a5
    CALL engine_special.cpp_FUN_0055d723 ; 004251a6
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EDX,dword ptr [0x0060b280]      ; 004251ab | DAT_0060b280
    MOV EAX,dword ptr [EDX]             ; 004251b1 | DAT_01ba5c50
    MOV dword ptr [ESI + EAX*0x1 + 0x20],0xffff ; 004251b3
    MOV EAX,dword ptr [EDX]             ; 004251bb | DAT_01ba5c50
    MOV dword ptr [ESI + EAX*0x1 + 0x24],0x0 ; 004251bd
    MOV EAX,dword ptr [EDX]             ; 004251c5 | DAT_01ba5c50
    ADD ESP,0x8                         ; 004251c7
    MOV dword ptr [ESI + EAX*0x1 + 0x28],0x0 ; 004251ca
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004251d2
    MOV dword ptr [ESP + 0x64],EAX      ; 004251d9
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004251dd
    INC EAX                             ; 004251e4
    LEA EBX,[ESP + 0x84]                ; 004251e5
    MOV dword ptr [ESP + 0xd4],EAX      ; 004251ec
    LEA EAX,[ESP + 0x60]                ; 004251f3
    FLD float ptr [EAX]                 ; 004251f7
    FMUL float ptr [0x005f4060]         ; 004251f9 | DAT_005f4060
    FISTP dword ptr [EBX]               ; 004251ff
    FLD float ptr [EAX + 0x4]           ; 00425201
    FMUL float ptr [0x005f4060]         ; 00425204 | DAT_005f4060
    FISTP dword ptr [EBX + 0x4]         ; 0042520a
    FLD float ptr [EAX + 0x8]           ; 0042520d
    FMUL float ptr [0x005f4060]         ; 00425210 | DAT_005f4060
    FISTP dword ptr [EBX + 0x8]         ; 00425216
    LEA EAX,[ESP + 0x84]                ; 00425219
    PUSH EAX                            ; 00425220
    MOV EAX,dword ptr [EDX]             ; 00425221 | DAT_01ba5c50
    ADD EAX,EDI                         ; 00425223
    PUSH EAX                            ; 00425225
    CALL engine_special.cpp_FUN_0055d723 ; 00425226
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 0042522b | DAT_0060b280
    MOV EDX,dword ptr [EAX]             ; 00425230 | DAT_01ba5c50
    MOV dword ptr [EDX + EDI*0x1 + 0x20],0xffff ; 00425232
    MOV EDX,dword ptr [EAX]             ; 0042523a | DAT_01ba5c50
    MOV dword ptr [EDX + EDI*0x1 + 0x24],0x0 ; 0042523c
    ADD ESP,0x8                         ; 00425244
    MOV EDX,dword ptr [EAX]             ; 00425247 | DAT_01ba5c50
    MOV EBX,dword ptr [ESP + 0xf0]      ; 00425249
    MOV dword ptr [EDX + EDI*0x1 + 0x28],0x0 ; 00425250
    TEST EBX,EBX                        ; 00425258
    JLE 0x004252be                      ; 0042525a
        ;   XREF to: 004252be (CONDITIONAL_JUMP)  ; LAB_004252be
    MOV dword ptr [ESP + 0xc],0x4       ; 0042525c
    MOV EDX,dword ptr [ESP + 0xf4]      ; 00425264
    SUB EDX,0x2                         ; 0042526b
    MOV dword ptr [ESP + 0x20],EDX      ; 0042526e
    MOV EDX,dword ptr [ESP + 0xf4]      ; 00425272
    DEC EDX                             ; 00425279
    MOV dword ptr [ESP + 0x24],EDX      ; 0042527a
    MOV EDX,dword ptr [ESP + 0xd4]      ; 0042527e
    PUSH 0x4000                         ; 00425285
    MOV dword ptr [ESP + 0x2c],EDX      ; 0042528a
    MOV EDX,dword ptr [ESP + 0xf8]      ; 0042528e
    PUSH EAX                            ; 00425295 | DAT_01ba5c50
    MOV dword ptr [ESP + 0x34],EDX      ; 00425296
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 0042529a
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0042529f
    MOV ECX,dword ptr [ESP + 0xe0]      ; 004252a2
    PUSH ECX                            ; 004252a9
    LEA EAX,[ESP + 0xc]                 ; 004252aa
    PUSH EAX                            ; 004252ae
    MOV EBX,dword ptr [0x0060b280]      ; 004252af | DAT_0060b280
    PUSH EBX                            ; 004252b5 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60 ; 004252b6
        ;   XREF to: 00469c60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 004252bb
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004252be
        ;   Label: LAB_004252be
    ADD ESI,0x60                        ; 004252c5
    INC EAX                             ; 004252c8
    ADD EDI,0x60                        ; 004252c9
    MOV dword ptr [ESP + 0xf0],EAX      ; 004252cc
    CMP EAX,0x18                        ; 004252d3
    JLE 0x0042511c                      ; 004252d6
        ;   XREF to: 0042511c (CONDITIONAL_JUMP)  ; LAB_0042511c
    LEA EBX,[ESP + 0x90]                ; 004252dc
    MOV EAX,0x265370c                   ; 004252e3
    MOV EDX,dword ptr [0x0060b280]      ; 004252e8 | DAT_0060b280
    FLD float ptr [EAX]                 ; 004252ee | DAT_0265370c
    FMUL float ptr [0x005f4060]         ; 004252f0 | DAT_005f4060
    FISTP dword ptr [EBX]               ; 004252f6
    FLD float ptr [EAX + 0x4]           ; 004252f8 | DAT_02653710
    FMUL float ptr [0x005f4060]         ; 004252fb | DAT_005f4060
    FISTP dword ptr [EBX + 0x4]         ; 00425301
    FLD float ptr [EAX + 0x8]           ; 00425304 | DAT_02653714
    FMUL float ptr [0x005f4060]         ; 00425307 | DAT_005f4060
    FISTP dword ptr [EBX + 0x8]         ; 0042530d
    LEA EAX,[ESP + 0x90]                ; 00425310
    PUSH EAX                            ; 00425317
    MOV EAX,dword ptr [EDX]             ; 00425318 | DAT_01ba5c50
    PUSH EAX                            ; 0042531a
    CALL engine_special.cpp_FUN_0055d723 ; 0042531b
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 00425320 | DAT_0060b280
    MOV EDX,dword ptr [EAX]             ; 00425325 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x20],0xffff   ; 00425327
    MOV EDX,dword ptr [EAX]             ; 0042532e | DAT_01ba5c50
    XOR ESI,ESI                         ; 00425330
    MOV dword ptr [EDX + 0x24],0x0      ; 00425332
    ADD ESP,0x8                         ; 00425339
    MOV EAX,dword ptr [EAX]             ; 0042533c | DAT_01ba5c50
    MOV EDI,0x30                        ; 0042533e
    MOV dword ptr [ESP + 0xd8],ESI      ; 00425343
    MOV dword ptr [EAX + 0x28],0x0      ; 0042534a
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00425351
        ;   Label: LAB_00425351
    MOV dword ptr [ESP + 0x108],EAX     ; 00425358
    FILD dword ptr [ESP + 0x108]        ; 0042535f
    FMUL float ptr [0x005ccd1e]         ; 00425366 | DAT_005ccd1e
    FMUL float ptr [0x005ccd22]         ; 0042536c | DAT_005ccd22
    FLD ST0                             ; 00425372
    FSIN                                ; 00425374
    FXCH                                ; 00425376
    FCOS                                ; 00425378
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042537a
    FLD float ptr [EAX + 0x3430]        ; 0042537d
    FMULP ST2                           ; 00425383
    FLD float ptr [EAX + 0x2824]        ; 00425385
    FMULP ST2                           ; 0042538b
    FXCH                                ; 0042538d
    FSTP float ptr [ESP + 0x60]         ; 0042538f
    FMUL float ptr [EAX + 0x3430]       ; 00425393
    FMUL float ptr [EAX + 0x2824]       ; 00425399
    MOV EDX,dword ptr [0x0060b280]      ; 0042539f | DAT_0060b280
    XOR EBX,EBX                         ; 004253a5
    LEA EAX,[ESP + 0x60]                ; 004253a7
    MOV dword ptr [ESP + 0x64],EBX      ; 004253ab
    LEA EBX,[ESP + 0x48]                ; 004253af
    FSTP float ptr [ESP + 0x68]         ; 004253b3
    FLD float ptr [EAX]                 ; 004253b7
    FMUL float ptr [0x005f4060]         ; 004253b9 | DAT_005f4060
    FISTP dword ptr [EBX]               ; 004253bf
    FLD float ptr [EAX + 0x4]           ; 004253c1
    FMUL float ptr [0x005f4060]         ; 004253c4 | DAT_005f4060
    FISTP dword ptr [EBX + 0x4]         ; 004253ca
    FLD float ptr [EAX + 0x8]           ; 004253cd
    FMUL float ptr [0x005f4060]         ; 004253d0 | DAT_005f4060
    FISTP dword ptr [EBX + 0x8]         ; 004253d6
    LEA EAX,[ESP + 0x48]                ; 004253d9
    PUSH EAX                            ; 004253dd
    MOV EAX,dword ptr [EDX]             ; 004253de | DAT_01ba5c50
    ADD EAX,EDI                         ; 004253e0
    PUSH EAX                            ; 004253e2
    CALL engine_special.cpp_FUN_0055d723 ; 004253e3
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 004253e8 | DAT_0060b280
    MOV EDX,dword ptr [EAX]             ; 004253ed | DAT_01ba5c50
    MOV dword ptr [EDX + EDI*0x1 + 0x20],0xffff ; 004253ef
    MOV EDX,dword ptr [EAX]             ; 004253f7 | DAT_01ba5c50
    MOV dword ptr [EDX + EDI*0x1 + 0x24],0x0 ; 004253f9
    MOV EDX,dword ptr [EAX]             ; 00425401 | DAT_01ba5c50
    ADD ESP,0x8                         ; 00425403
    MOV dword ptr [EDX + EDI*0x1 + 0x28],0x0 ; 00425406
    TEST ESI,ESI                        ; 0042540e
    JLE 0x00425455                      ; 00425410
        ;   XREF to: 00425455 (CONDITIONAL_JUMP)  ; LAB_00425455
    MOV EDX,0x3                         ; 00425412
    PUSH 0x4000                         ; 00425417
    XOR ECX,ECX                         ; 0042541c
    MOV dword ptr [ESP + 0x10],EDX      ; 0042541e
    MOV dword ptr [ESP + 0x24],ECX      ; 00425422
    LEA EDX,[ESI + -0x1]                ; 00425426
    PUSH EAX                            ; 00425429 | DAT_01ba5c50
    MOV dword ptr [ESP + 0x2c],EDX      ; 0042542a
    MOV dword ptr [ESP + 0x30],ESI      ; 0042542e
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 00425432
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00425437
    MOV EBX,dword ptr [ESP + 0xe0]      ; 0042543a
    PUSH EBX                            ; 00425441
    LEA EAX,[ESP + 0xc]                 ; 00425442
    PUSH EAX                            ; 00425446
    MOV EAX,[0x0060b280]                ; 00425447 | DAT_0060b280
    PUSH EAX                            ; 0042544c | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60 ; 0042544d
        ;   XREF to: 00469c60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 00425452
    MOV EDX,dword ptr [ESP + 0xd8]      ; 00425455
        ;   Label: LAB_00425455
    INC ESI                             ; 0042545c
    ADD EDX,0x2                         ; 0042545d
    ADD EDI,0x30                        ; 00425460
    MOV dword ptr [ESP + 0xd8],EDX      ; 00425463
    CMP ESI,0x18                        ; 0042546a
    JLE 0x00425351                      ; 0042546d
        ;   XREF to: 00425351 (CONDITIONAL_JUMP)  ; LAB_00425351
    PUSH 0xffff                         ; 00425473
    MOV ECX,dword ptr [0x0060b280]      ; 00425478 | DAT_0060b280
    PUSH ECX                            ; 0042547e | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 0042547f
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00425484
    MOV ESP,EBP                         ; 00425487
    POP EBP                             ; 00425489
    POP EDI                             ; 0042548a
    POP ESI                             ; 0042548b
    POP EBX                             ; 0042548c
    RET                                 ; 0042548d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042548e
        ;   Label: LAB_0042548e
    FLD float ptr [ESP + 0x4]           ; 00425491
    FLD float ptr [EAX + 0x2824]        ; 00425495
    FMUL double ptr [0x005ccd16]        ; 0042549b | DAT_005ccd16
    FADDP                               ; 004254a1
    FSTP float ptr [ESP + 0xd0]         ; 004254a3
    JMP 0x004250e7                      ; 004254aa
        ;   XREF to: 004250e7 (UNCONDITIONAL_JUMP)  ; LAB_004250e7

