; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_0055f9c0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00605170
;   undefined4 DAT_00612560
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    ADD byte ptr [EAX],AL               ; 0055f9c0
        ;   Label: core_shadow.cpp_FUN_0055f9c0
    ADD AL,BL                           ; 0055f9c2
    MOV byte ptr [EAX + 0x8d000027],BH  ; 0055f9c4
    POP ESP                             ; 0055f9ca
    AND AL,0x4c                         ; 0055f9cb
    LEA EDI,[ESP + 0x100]               ; 0055f9cd
    LEA ESI,[ESP + 0xd0]                ; 0055f9d4
    FXCH ST2                            ; 0055f9db
    FSTP float ptr [ESP + 0xd0]         ; 0055f9dd
    FSTP float ptr [ESP + 0xd4]         ; 0055f9e4
    FSTP float ptr [ESP + 0xd8]         ; 0055f9eb
    LEA EAX,[ESP + 0x100]               ; 0055f9f2
    MOVSD ES:EDI,ESI                    ; 0055f9f9
    MOVSD ES:EDI,ESI                    ; 0055f9fa
    MOVSD ES:EDI,ESI                    ; 0055f9fb
    CMP EBX,EAX                         ; 0055f9fc
    JZ 0x0055fa21                       ; 0055f9fe
        ;   XREF to: 0055fa21 (CONDITIONAL_JUMP)  ; LAB_0055fa21
    MOV EAX,dword ptr [ESP + 0x100]     ; 0055fa00
    MOV dword ptr [ESP + 0x4c],EAX      ; 0055fa07
    MOV EAX,dword ptr [ESP + 0x104]     ; 0055fa0b
    MOV dword ptr [ESP + 0x50],EAX      ; 0055fa12
    MOV EAX,dword ptr [ESP + 0x108]     ; 0055fa16
    MOV dword ptr [ESP + 0x54],EAX      ; 0055fa1d
    LEA EBX,[ESP + 0xac]                ; 0055fa21
        ;   Label: LAB_0055fa21
    LEA EAX,[ESP + 0x4c]                ; 0055fa28
    MOV EBP,dword ptr [0x00612560]      ; 0055fa2c | DAT_00612560
    FLD float ptr [EAX]                 ; 0055fa32
    FMUL float ptr [0x00605170]         ; 0055fa34 | DAT_00605170
    FISTP dword ptr [EBX]               ; 0055fa3a
    FLD float ptr [EAX + 0x4]           ; 0055fa3c
    FMUL float ptr [0x00605170]         ; 0055fa3f | DAT_00605170
    FISTP dword ptr [EBX + 0x4]         ; 0055fa45
    FLD float ptr [EAX + 0x8]           ; 0055fa48
    FMUL float ptr [0x00605170]         ; 0055fa4b | DAT_00605170
    FISTP dword ptr [EBX + 0x8]         ; 0055fa51
    LEA EAX,[ESP + 0xac]                ; 0055fa54
    PUSH EAX                            ; 0055fa5b
    MOV EAX,dword ptr [EBP]             ; 0055fa5c
    ADD EAX,0x90                        ; 0055fa5f
    PUSH EAX                            ; 0055fa64
    CALL engine_special.cpp_FUN_00580173 ; 0055fa65
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 0055fa6a | DAT_00612560
    MOV EDX,dword ptr [EAX]             ; 0055fa6f
    MOV dword ptr [EDX + 0x20],0xffff   ; 0055fa71
    MOV EBX,dword ptr [EAX]             ; 0055fa78
    MOV dword ptr [EBX + 0x24],0x0      ; 0055fa7a
    MOV EBX,dword ptr [EAX]             ; 0055fa81
    MOV dword ptr [EBX + 0x28],0x0      ; 0055fa83
    MOV EDX,dword ptr [EAX]             ; 0055fa8a
    MOV dword ptr [EDX + 0x50],0xffff   ; 0055fa8c
    MOV EDX,dword ptr [EAX]             ; 0055fa93
    MOV dword ptr [EDX + 0x54],0x0      ; 0055fa95
    MOV EBX,dword ptr [EAX]             ; 0055fa9c
    MOV dword ptr [EBX + 0x58],0x0      ; 0055fa9e
    MOV EBX,dword ptr [EAX]             ; 0055faa5
    MOV dword ptr [EBX + 0x80],0xffff   ; 0055faa7
    MOV EBX,dword ptr [EAX]             ; 0055fab1
    MOV dword ptr [EBX + 0x84],0x0      ; 0055fab3
    MOV EBX,dword ptr [EAX]             ; 0055fabd
    MOV dword ptr [EBX + 0x88],0x0      ; 0055fabf
    MOV EBX,dword ptr [EAX]             ; 0055fac9
    MOV dword ptr [EBX + 0xb0],0xffff   ; 0055facb
    MOV EDX,dword ptr [EAX]             ; 0055fad5
    MOV dword ptr [EDX + 0xb4],0x0      ; 0055fad7
    MOV EBX,dword ptr [EAX]             ; 0055fae1
    MOV dword ptr [EBX + 0xb8],0x0      ; 0055fae3
    MOV EBX,dword ptr [EAX]             ; 0055faed
    MOV dword ptr [EBX + 0x2c],0x4000   ; 0055faef
    MOV EBX,dword ptr [EAX]             ; 0055faf6
    MOV dword ptr [EBX + 0x5c],0x4000   ; 0055faf8
    MOV EBX,dword ptr [EAX]             ; 0055faff
    MOV dword ptr [EBX + 0x8c],0x4000   ; 0055fb01
    MOV EDX,dword ptr [EAX]             ; 0055fb0b
    MOV dword ptr [EDX + 0xbc],0x4000   ; 0055fb0d
    MOV EBX,dword ptr [EAX]             ; 0055fb17
    MOV dword ptr [EBX + 0x18],0x80000  ; 0055fb19
    MOV EDX,dword ptr [EAX]             ; 0055fb20
    MOV dword ptr [EDX + 0x1c],0xf80000 ; 0055fb22
    MOV EBX,dword ptr [EAX]             ; 0055fb29
    ADD ESP,0x8                         ; 0055fb2b
    MOV dword ptr [EBX + 0x48],0xf80000 ; 0055fb2e
    MOV EBX,dword ptr [EAX]             ; 0055fb35
    MOV dword ptr [EBX + 0x4c],0xf80000 ; 0055fb37
    MOV EBX,dword ptr [EAX]             ; 0055fb3e
    MOV dword ptr [EBX + 0x78],0xf80000 ; 0055fb40
    MOV EBX,dword ptr [EAX]             ; 0055fb47
    MOV dword ptr [EBX + 0x7c],0x80000  ; 0055fb49
    MOV EBX,dword ptr [EAX]             ; 0055fb50
    MOV EDX,0x4                         ; 0055fb52
    MOV dword ptr [EBX + 0xa8],0x80000  ; 0055fb57
    PUSH 0x6231a8                       ; 0055fb61
    MOV EBX,dword ptr [EAX]             ; 0055fb66
    XOR ECX,ECX                         ; 0055fb68
    PUSH EAX                            ; 0055fb6a
    MOV dword ptr [EBX + 0xac],0x80000  ; 0055fb6b
    MOV EBX,0x3                         ; 0055fb75
    MOV dword ptr [ESP + 0xc],EDX       ; 0055fb7a
    MOV dword ptr [ESP + 0x1c],ECX      ; 0055fb7e
    MOV dword ptr [ESP + 0x18],ECX      ; 0055fb82
    MOV dword ptr [ESP + 0x14],ECX      ; 0055fb86
    MOV dword ptr [ESP + 0x10],ECX      ; 0055fb8a
    MOV dword ptr [ESP + 0x20],ECX      ; 0055fb8e
    MOV EDX,0x1                         ; 0055fb92
    MOV ECX,0x2                         ; 0055fb97
    MOV dword ptr [ESP + 0x2c],EBX      ; 0055fb9c
    MOV dword ptr [ESP + 0x24],EDX      ; 0055fba0
    MOV dword ptr [ESP + 0x28],ECX      ; 0055fba4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 0055fba8
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0055fbad
    PUSH 0x1                            ; 0055fbb0
    MOV ESI,dword ptr [0x00612560]      ; 0055fbb2 | DAT_00612560
    PUSH ESI                            ; 0055fbb8
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 0055fbb9
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0055fbbe
    MOV EAX,ESP                         ; 0055fbc1
    PUSH EAX                            ; 0055fbc3
    MOV EDI,dword ptr [0x00612560]      ; 0055fbc4 | DAT_00612560
    PUSH EDI                            ; 0055fbca
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30 ; 0055fbcb
        ;   XREF to: 00482e30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0055fbd0
    XOR EBP,EBP                         ; 0055fbd3
    PUSH EBP                            ; 0055fbd5
    MOV EBP,dword ptr [0x00612560]      ; 0055fbd6 | DAT_00612560
    PUSH EBP                            ; 0055fbdc
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 0055fbdd
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0055fbe2
    ADD ESP,0x134                       ; 0055fbe5
    POP EBP                             ; 0055fbeb
    POP EDI                             ; 0055fbec
    POP ESI                             ; 0055fbed
    POP EBX                             ; 0055fbee
    RET                                 ; 0055fbef

