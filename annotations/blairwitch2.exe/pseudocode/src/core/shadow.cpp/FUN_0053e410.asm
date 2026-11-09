; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_0053e410(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fb3e0
;   undefined4 DAT_0060b280
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    ADD byte ptr [EAX],AL               ; 0053e410
        ;   Label: core_shadow.cpp_FUN_0053e410
    ADD AL,BL                           ; 0053e412
    MOV byte ptr [EAX + EBP*0x1],AH     ; 0053e414
    ADD byte ptr [EAX],AL               ; 0053e417
    LEA EBX,[ESP + 0x4c]                ; 0053e419
    LEA EDI,[ESP + 0x100]               ; 0053e41d
    LEA ESI,[ESP + 0xd0]                ; 0053e424
    FXCH ST2                            ; 0053e42b
    FSTP float ptr [ESP + 0xd0]         ; 0053e42d
    FSTP float ptr [ESP + 0xd4]         ; 0053e434
    FSTP float ptr [ESP + 0xd8]         ; 0053e43b
    LEA EAX,[ESP + 0x100]               ; 0053e442
    MOVSD ES:EDI,ESI                    ; 0053e449
    MOVSD ES:EDI,ESI                    ; 0053e44a
    MOVSD ES:EDI,ESI                    ; 0053e44b
    CMP EBX,EAX                         ; 0053e44c
    JZ 0x0053e471                       ; 0053e44e
        ;   XREF to: 0053e471 (CONDITIONAL_JUMP)  ; LAB_0053e471
    MOV EAX,dword ptr [ESP + 0x100]     ; 0053e450
    MOV dword ptr [ESP + 0x4c],EAX      ; 0053e457
    MOV EAX,dword ptr [ESP + 0x104]     ; 0053e45b
    MOV dword ptr [ESP + 0x50],EAX      ; 0053e462
    MOV EAX,dword ptr [ESP + 0x108]     ; 0053e466
    MOV dword ptr [ESP + 0x54],EAX      ; 0053e46d
    LEA EBX,[ESP + 0xac]                ; 0053e471
        ;   Label: LAB_0053e471
    LEA EAX,[ESP + 0x4c]                ; 0053e478
    MOV EBP,dword ptr [0x0060b280]      ; 0053e47c | DAT_0060b280
    FLD float ptr [EAX]                 ; 0053e482
    FMUL float ptr [0x005fb3e0]         ; 0053e484 | DAT_005fb3e0
    FISTP dword ptr [EBX]               ; 0053e48a
    FLD float ptr [EAX + 0x4]           ; 0053e48c
    FMUL float ptr [0x005fb3e0]         ; 0053e48f | DAT_005fb3e0
    FISTP dword ptr [EBX + 0x4]         ; 0053e495
    FLD float ptr [EAX + 0x8]           ; 0053e498
    FMUL float ptr [0x005fb3e0]         ; 0053e49b | DAT_005fb3e0
    FISTP dword ptr [EBX + 0x8]         ; 0053e4a1
    LEA EAX,[ESP + 0xac]                ; 0053e4a4
    PUSH EAX                            ; 0053e4ab
    MOV EAX,dword ptr [EBP]             ; 0053e4ac
    ADD EAX,0x90                        ; 0053e4af
    PUSH EAX                            ; 0053e4b4
    CALL engine_special.cpp_FUN_0055d723 ; 0053e4b5
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 0053e4ba | DAT_0060b280
    MOV EDX,dword ptr [EAX]             ; 0053e4bf
    MOV dword ptr [EDX + 0x20],0xffff   ; 0053e4c1
    MOV EBX,dword ptr [EAX]             ; 0053e4c8
    MOV dword ptr [EBX + 0x24],0x0      ; 0053e4ca
    MOV EBX,dword ptr [EAX]             ; 0053e4d1
    MOV dword ptr [EBX + 0x28],0x0      ; 0053e4d3
    MOV EDX,dword ptr [EAX]             ; 0053e4da
    MOV dword ptr [EDX + 0x50],0xffff   ; 0053e4dc
    MOV EDX,dword ptr [EAX]             ; 0053e4e3
    MOV dword ptr [EDX + 0x54],0x0      ; 0053e4e5
    MOV EBX,dword ptr [EAX]             ; 0053e4ec
    MOV dword ptr [EBX + 0x58],0x0      ; 0053e4ee
    MOV EBX,dword ptr [EAX]             ; 0053e4f5
    MOV dword ptr [EBX + 0x80],0xffff   ; 0053e4f7
    MOV EBX,dword ptr [EAX]             ; 0053e501
    MOV dword ptr [EBX + 0x84],0x0      ; 0053e503
    MOV EBX,dword ptr [EAX]             ; 0053e50d
    MOV dword ptr [EBX + 0x88],0x0      ; 0053e50f
    MOV EBX,dword ptr [EAX]             ; 0053e519
    MOV dword ptr [EBX + 0xb0],0xffff   ; 0053e51b
    MOV EDX,dword ptr [EAX]             ; 0053e525
    MOV dword ptr [EDX + 0xb4],0x0      ; 0053e527
    MOV EBX,dword ptr [EAX]             ; 0053e531
    MOV dword ptr [EBX + 0xb8],0x0      ; 0053e533
    MOV EBX,dword ptr [EAX]             ; 0053e53d
    MOV dword ptr [EBX + 0x2c],0x4000   ; 0053e53f
    MOV EBX,dword ptr [EAX]             ; 0053e546
    MOV dword ptr [EBX + 0x5c],0x4000   ; 0053e548
    MOV EBX,dword ptr [EAX]             ; 0053e54f
    MOV dword ptr [EBX + 0x8c],0x4000   ; 0053e551
    MOV EDX,dword ptr [EAX]             ; 0053e55b
    MOV dword ptr [EDX + 0xbc],0x4000   ; 0053e55d
    MOV EBX,dword ptr [EAX]             ; 0053e567
    MOV dword ptr [EBX + 0x18],0x80000  ; 0053e569
    MOV EDX,dword ptr [EAX]             ; 0053e570
    MOV dword ptr [EDX + 0x1c],0xf80000 ; 0053e572
    MOV EBX,dword ptr [EAX]             ; 0053e579
    ADD ESP,0x8                         ; 0053e57b
    MOV dword ptr [EBX + 0x48],0xf80000 ; 0053e57e
    MOV EBX,dword ptr [EAX]             ; 0053e585
    MOV dword ptr [EBX + 0x4c],0xf80000 ; 0053e587
    MOV EBX,dword ptr [EAX]             ; 0053e58e
    MOV dword ptr [EBX + 0x78],0xf80000 ; 0053e590
    MOV EBX,dword ptr [EAX]             ; 0053e597
    MOV dword ptr [EBX + 0x7c],0x80000  ; 0053e599
    MOV EBX,dword ptr [EAX]             ; 0053e5a0
    MOV EDX,0x4                         ; 0053e5a2
    MOV dword ptr [EBX + 0xa8],0x80000  ; 0053e5a7
    PUSH 0x61bb70                       ; 0053e5b1
    MOV EBX,dword ptr [EAX]             ; 0053e5b6
    XOR ECX,ECX                         ; 0053e5b8
    PUSH EAX                            ; 0053e5ba
    MOV dword ptr [EBX + 0xac],0x80000  ; 0053e5bb
    MOV EBX,0x3                         ; 0053e5c5
    MOV dword ptr [ESP + 0xc],EDX       ; 0053e5ca
    MOV dword ptr [ESP + 0x1c],ECX      ; 0053e5ce
    MOV dword ptr [ESP + 0x18],ECX      ; 0053e5d2
    MOV dword ptr [ESP + 0x14],ECX      ; 0053e5d6
    MOV dword ptr [ESP + 0x10],ECX      ; 0053e5da
    MOV dword ptr [ESP + 0x20],ECX      ; 0053e5de
    MOV EDX,0x1                         ; 0053e5e2
    MOV ECX,0x2                         ; 0053e5e7
    MOV dword ptr [ESP + 0x2c],EBX      ; 0053e5ec
    MOV dword ptr [ESP + 0x24],EDX      ; 0053e5f0
    MOV dword ptr [ESP + 0x28],ECX      ; 0053e5f4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 0053e5f8
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0053e5fd
    PUSH 0x1                            ; 0053e600
    MOV ESI,dword ptr [0x0060b280]      ; 0053e602 | DAT_0060b280
    PUSH ESI                            ; 0053e608
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0053e609
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0053e60e
    MOV EAX,ESP                         ; 0053e611
    PUSH EAX                            ; 0053e613
    MOV EDI,dword ptr [0x0060b280]      ; 0053e614 | DAT_0060b280
    PUSH EDI                            ; 0053e61a
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930 ; 0053e61b
        ;   XREF to: 0046a930 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0053e620
    XOR EBP,EBP                         ; 0053e623
    PUSH EBP                            ; 0053e625
    MOV EBP,dword ptr [0x0060b280]      ; 0053e626 | DAT_0060b280
    PUSH EBP                            ; 0053e62c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0053e62d
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0053e632
    ADD ESP,0x134                       ; 0053e635
    POP EBP                             ; 0053e63b
    POP EDI                             ; 0053e63c
    POP ESI                             ; 0053e63d
    POP EBX                             ; 0053e63e
    RET                                 ; 0053e63f

