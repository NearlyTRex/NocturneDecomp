; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_005454d0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005e3d30
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    ADD byte ptr [EAX],AL               ; 005454d0
        ;   Label: core_shadow.cpp_FUN_005454d0
    ADD AL,BL                           ; 005454d2
    MOV byte ptr [EAX + 0x8d000027],BH  ; 005454d4
    POP ESP                             ; 005454da
    AND AL,0x4c                         ; 005454db
    LEA EDI,[ESP + 0x100]               ; 005454dd
    LEA ESI,[ESP + 0xd0]                ; 005454e4
    FXCH ST2                            ; 005454eb
    FSTP float ptr [ESP + 0xd0]         ; 005454ed
    FSTP float ptr [ESP + 0xd4]         ; 005454f4
    FSTP float ptr [ESP + 0xd8]         ; 005454fb
    LEA EAX,[ESP + 0x100]               ; 00545502
    MOVSD ES:EDI,ESI                    ; 00545509
    MOVSD ES:EDI,ESI                    ; 0054550a
    MOVSD ES:EDI,ESI                    ; 0054550b
    CMP EBX,EAX                         ; 0054550c
    JZ 0x00545531                       ; 0054550e
        ;   XREF to: 00545531 (CONDITIONAL_JUMP)  ; LAB_00545531
    MOV EAX,dword ptr [ESP + 0x100]     ; 00545510
    MOV dword ptr [ESP + 0x4c],EAX      ; 00545517
    MOV EAX,dword ptr [ESP + 0x104]     ; 0054551b
    MOV dword ptr [ESP + 0x50],EAX      ; 00545522
    MOV EAX,dword ptr [ESP + 0x108]     ; 00545526
    MOV dword ptr [ESP + 0x54],EAX      ; 0054552d
    LEA EBX,[ESP + 0xac]                ; 00545531
        ;   Label: LAB_00545531
    LEA EAX,[ESP + 0x4c]                ; 00545538
    MOV EBP,dword ptr [0x005f2afc]      ; 0054553c | DAT_005f2afc
    FLD float ptr [EAX]                 ; 00545542
    FMUL float ptr [0x005e3d30]         ; 00545544 | DAT_005e3d30
    FISTP dword ptr [EBX]               ; 0054554a
    FLD float ptr [EAX + 0x4]           ; 0054554c
    FMUL float ptr [0x005e3d30]         ; 0054554f | DAT_005e3d30
    FISTP dword ptr [EBX + 0x4]         ; 00545555
    FLD float ptr [EAX + 0x8]           ; 00545558
    FMUL float ptr [0x005e3d30]         ; 0054555b | DAT_005e3d30
    FISTP dword ptr [EBX + 0x8]         ; 00545561
    LEA EAX,[ESP + 0xac]                ; 00545564
    PUSH EAX                            ; 0054556b
    MOV EAX,dword ptr [EBP]             ; 0054556c
    ADD EAX,0x90                        ; 0054556f
    PUSH EAX                            ; 00545574
    CALL engine_special.cpp_FUN_005632a3 ; 00545575
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005f2afc]                ; 0054557a | DAT_005f2afc
    MOV EDX,dword ptr [EAX]             ; 0054557f
    MOV dword ptr [EDX + 0x20],0xffff   ; 00545581
    MOV EBX,dword ptr [EAX]             ; 00545588
    MOV dword ptr [EBX + 0x24],0x0      ; 0054558a
    MOV EBX,dword ptr [EAX]             ; 00545591
    MOV dword ptr [EBX + 0x28],0x0      ; 00545593
    MOV EDX,dword ptr [EAX]             ; 0054559a
    MOV dword ptr [EDX + 0x50],0xffff   ; 0054559c
    MOV EDX,dword ptr [EAX]             ; 005455a3
    MOV dword ptr [EDX + 0x54],0x0      ; 005455a5
    MOV EBX,dword ptr [EAX]             ; 005455ac
    MOV dword ptr [EBX + 0x58],0x0      ; 005455ae
    MOV EBX,dword ptr [EAX]             ; 005455b5
    MOV dword ptr [EBX + 0x80],0xffff   ; 005455b7
    MOV EBX,dword ptr [EAX]             ; 005455c1
    MOV dword ptr [EBX + 0x84],0x0      ; 005455c3
    MOV EBX,dword ptr [EAX]             ; 005455cd
    MOV dword ptr [EBX + 0x88],0x0      ; 005455cf
    MOV EBX,dword ptr [EAX]             ; 005455d9
    MOV dword ptr [EBX + 0xb0],0xffff   ; 005455db
    MOV EDX,dword ptr [EAX]             ; 005455e5
    MOV dword ptr [EDX + 0xb4],0x0      ; 005455e7
    MOV EBX,dword ptr [EAX]             ; 005455f1
    MOV dword ptr [EBX + 0xb8],0x0      ; 005455f3
    MOV EBX,dword ptr [EAX]             ; 005455fd
    MOV dword ptr [EBX + 0x2c],0x4000   ; 005455ff
    MOV EBX,dword ptr [EAX]             ; 00545606
    MOV dword ptr [EBX + 0x5c],0x4000   ; 00545608
    MOV EBX,dword ptr [EAX]             ; 0054560f
    MOV dword ptr [EBX + 0x8c],0x4000   ; 00545611
    MOV EDX,dword ptr [EAX]             ; 0054561b
    MOV dword ptr [EDX + 0xbc],0x4000   ; 0054561d
    MOV EBX,dword ptr [EAX]             ; 00545627
    MOV dword ptr [EBX + 0x18],0x80000  ; 00545629
    MOV EDX,dword ptr [EAX]             ; 00545630
    MOV dword ptr [EDX + 0x1c],0xf80000 ; 00545632
    MOV EBX,dword ptr [EAX]             ; 00545639
    ADD ESP,0x8                         ; 0054563b
    MOV dword ptr [EBX + 0x48],0xf80000 ; 0054563e
    MOV EBX,dword ptr [EAX]             ; 00545645
    MOV dword ptr [EBX + 0x4c],0xf80000 ; 00545647
    MOV EBX,dword ptr [EAX]             ; 0054564e
    MOV dword ptr [EBX + 0x78],0xf80000 ; 00545650
    MOV EBX,dword ptr [EAX]             ; 00545657
    MOV dword ptr [EBX + 0x7c],0x80000  ; 00545659
    MOV EBX,dword ptr [EAX]             ; 00545660
    MOV EDX,0x4                         ; 00545662
    MOV dword ptr [EBX + 0xa8],0x80000  ; 00545667
    PUSH 0x6040b8                       ; 00545671
    MOV EBX,dword ptr [EAX]             ; 00545676
    XOR ECX,ECX                         ; 00545678
    PUSH EAX                            ; 0054567a
    MOV dword ptr [EBX + 0xac],0x80000  ; 0054567b
    MOV EBX,0x3                         ; 00545685
    MOV dword ptr [ESP + 0xc],EDX       ; 0054568a
    MOV dword ptr [ESP + 0x1c],ECX      ; 0054568e
    MOV dword ptr [ESP + 0x18],ECX      ; 00545692
    MOV dword ptr [ESP + 0x14],ECX      ; 00545696
    MOV dword ptr [ESP + 0x10],ECX      ; 0054569a
    MOV dword ptr [ESP + 0x20],ECX      ; 0054569e
    MOV EDX,0x1                         ; 005456a2
    MOV ECX,0x2                         ; 005456a7
    MOV dword ptr [ESP + 0x2c],EBX      ; 005456ac
    MOV dword ptr [ESP + 0x24],EDX      ; 005456b0
    MOV dword ptr [ESP + 0x28],ECX      ; 005456b4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 005456b8
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 005456bd
    PUSH 0x1                            ; 005456c0
    MOV ESI,dword ptr [0x005f2afc]      ; 005456c2 | DAT_005f2afc
    PUSH ESI                            ; 005456c8
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 005456c9
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 005456ce
    MOV EAX,ESP                         ; 005456d1
    PUSH EAX                            ; 005456d3
    MOV EDI,dword ptr [0x005f2afc]      ; 005456d4 | DAT_005f2afc
    PUSH EDI                            ; 005456da
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510 ; 005456db
        ;   XREF to: 0046c510 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 005456e0
    XOR EBP,EBP                         ; 005456e3
    PUSH EBP                            ; 005456e5
    MOV EBP,dword ptr [0x005f2afc]      ; 005456e6 | DAT_005f2afc
    PUSH EBP                            ; 005456ec
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 005456ed
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 005456f2
    ADD ESP,0x134                       ; 005456f5
    POP EBP                             ; 005456fb
    POP EDI                             ; 005456fc
    POP ESI                             ; 005456fd
    POP EBX                             ; 005456fe
    RET                                 ; 005456ff

