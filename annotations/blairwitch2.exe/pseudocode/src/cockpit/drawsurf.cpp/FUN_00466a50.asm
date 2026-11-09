; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_00466a50(CDrawSurface *param_1,int param_2,int param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_005d12e0
;   undefined4 DAT_0060b270
;   undefined4 DAT_0060b274
;   undefined4 DAT_01ba5990
;   undefined4 DAT_01ba5994
;   undefined4 DAT_01ba5998
;   undefined4 DAT_01c2a370
;   undefined4 DAT_01c2a374
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00466a50
        ;   Label: cockpit_drawsurf.cpp_FUN_00466a50
    PUSH ESI                            ; 00466a51
    PUSH EDI                            ; 00466a52
    PUSH EBP                            ; 00466a53
    SUB ESP,0x1c                        ; 00466a54
    MOV EBX,dword ptr [ESP + 0x34]      ; 00466a57
    MOV ESI,dword ptr [ESP + 0x38]      ; 00466a5b
    MOV EBP,dword ptr [ESP + 0x3c]      ; 00466a5f
    MOV EDX,dword ptr [ESP + 0x40]      ; 00466a63
    MOV EDI,dword ptr [0x01c2a374]      ; 00466a67 | DAT_01c2a374
    CMP EDI,dword ptr [0x01ba5998]      ; 00466a6d | DAT_01ba5998
    JNZ 0x00466b48                      ; 00466a73
        ;   XREF to: 00466b48 (CONDITIONAL_JUMP)  ; LAB_00466b48
    FLD float ptr [0x01ba5994]          ; 00466a79 | DAT_01ba5994
        ;   Label: LAB_00466a79
    MOV EDI,0x1                         ; 00466a7f
    MOV ECX,dword ptr [ESP + 0x30]      ; 00466a84
    CALL crt_math.c_round_FUN_005b7ff0  ; 00466a88
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x14]        ; 00466a8d
    MOV dword ptr [ESP + 0x4],EDI       ; 00466a91
    MOV EAX,dword ptr [ECX + 0x8]       ; 00466a95
    MOV EDI,dword ptr [ECX + 0xc]       ; 00466a98
    SUB EBX,EAX                         ; 00466a9b
    SUB EBP,EAX                         ; 00466a9d
    MOV EAX,0x1                         ; 00466a9f
    SUB ESI,EDI                         ; 00466aa4
    SUB EDX,EDI                         ; 00466aa6
    MOV dword ptr [ESP],EAX             ; 00466aa8
    CMP ESI,EDX                         ; 00466aab
    JG 0x00466ab6                       ; 00466aad
        ;   XREF to: 00466ab6 (CONDITIONAL_JUMP)  ; LAB_00466ab6
    MOV dword ptr [ESP],0xffffffff      ; 00466aaf
    JLE 0x00466ac4                      ; 00466ab6
        ;   XREF to: 00466ac4 (CONDITIONAL_JUMP)  ; LAB_00466ac4
        ;   Label: LAB_00466ab6
    MOV ECX,EBX                         ; 00466ab8
    MOV EBX,EBP                         ; 00466aba
    MOV EBP,ECX                         ; 00466abc
    MOV ECX,ESI                         ; 00466abe
    MOV ESI,EDX                         ; 00466ac0
    MOV EDX,ECX                         ; 00466ac2
    SUB EDX,ESI                         ; 00466ac4
        ;   Label: LAB_00466ac4
    SUB EBP,EBX                         ; 00466ac6
    MOV dword ptr [ESP + 0x10],EDX      ; 00466ac8
    TEST EBP,EBP                        ; 00466acc
    JL 0x00466bbe                       ; 00466ace
        ;   XREF to: 00466bbe (CONDITIONAL_JUMP)  ; LAB_00466bbe
    MOV EAX,dword ptr [ESP + 0x10]      ; 00466ad4
        ;   Label: LAB_00466ad4
    CMP EBP,EAX                         ; 00466ad8
    JLE 0x00466be2                      ; 00466ada
        ;   XREF to: 00466be2 (CONDITIONAL_JUMP)  ; LAB_00466be2
    XOR EDX,EDX                         ; 00466ae0
    LEA EDI,[EAX + EAX*0x1]             ; 00466ae2
    MOV dword ptr [ESP + 0xc],EDX       ; 00466ae5
    SUB EDI,EBP                         ; 00466ae9
    TEST EBP,EBP                        ; 00466aeb
    JL 0x00466b40                       ; 00466aed
        ;   XREF to: 00466b40 (CONDITIONAL_JUMP)  ; LAB_00466b40
    MOV EAX,dword ptr [ESP + 0x14]      ; 00466aef
        ;   Label: LAB_00466aef
    CDQ                                 ; 00466af3
    XOR EAX,EDX                         ; 00466af4
    SUB EAX,EDX                         ; 00466af6
    MOV EDX,EAX                         ; 00466af8
    MOV ECX,dword ptr [0x0060b270]      ; 00466afa | DAT_0060b270
    SAR EDX,0x1f                        ; 00466b00
    ADD ECX,ECX                         ; 00466b03
    IDIV ECX                            ; 00466b05
    CMP EDX,dword ptr [0x0060b270]      ; 00466b07 | DAT_0060b270
    JL 0x00466bce                       ; 00466b0d
        ;   XREF to: 00466bce (CONDITIONAL_JUMP)  ; LAB_00466bce
    TEST EDI,EDI                        ; 00466b13
        ;   Label: LAB_00466b13
    JLE 0x00466b1a                      ; 00466b15
        ;   XREF to: 00466b1a (CONDITIONAL_JUMP)  ; LAB_00466b1a
    INC ESI                             ; 00466b17
    SUB EDI,EBP                         ; 00466b18
    MOV EDX,dword ptr [ESP]             ; 00466b1a
        ;   Label: LAB_00466b1a
    MOV ECX,dword ptr [ESP + 0x14]      ; 00466b1d
    MOV EAX,dword ptr [ESP + 0x4]       ; 00466b21
    ADD ECX,EDX                         ; 00466b25
    ADD EBX,EAX                         ; 00466b27
    MOV dword ptr [ESP + 0x14],ECX      ; 00466b29
    MOV ECX,dword ptr [ESP + 0xc]       ; 00466b2d
    MOV EDX,dword ptr [ESP + 0x10]      ; 00466b31
    INC ECX                             ; 00466b35
    ADD EDI,EDX                         ; 00466b36
    MOV dword ptr [ESP + 0xc],ECX       ; 00466b38
    CMP EBP,ECX                         ; 00466b3c
    JGE 0x00466aef                      ; 00466b3e
        ;   XREF to: 00466aef (CONDITIONAL_JUMP)  ; LAB_00466aef
    ADD ESP,0x1c                        ; 00466b40
        ;   Label: LAB_00466b40
    POP EBP                             ; 00466b43
    POP EDI                             ; 00466b44
    POP ESI                             ; 00466b45
    POP EBX                             ; 00466b46
    RET                                 ; 00466b47
    FILD dword ptr [0x01c2a370]         ; 00466b48 | DAT_01c2a370
        ;   Label: LAB_00466b48
    FMUL float ptr [0x005d12e0]         ; 00466b4e | DAT_005d12e0
    FADD float ptr [0x01ba5990]         ; 00466b54 | DAT_01ba5990
    MOV dword ptr [0x01ba5998],EDI      ; 00466b5a | DAT_01ba5998
    FST float ptr [0x01ba5990]          ; 00466b60 | DAT_01ba5990
    FCOMP float ptr [0x0060b274]        ; 00466b66 | DAT_0060b274
    FNSTSW AX                           ; 00466b6c
    SAHF                                ; 00466b6e
    JBE 0x00466a79                      ; 00466b6f
        ;   XREF to: 00466a79 (CONDITIONAL_JUMP)  ; LAB_00466a79
    FLD float ptr [0x01ba5990]          ; 00466b75 | DAT_01ba5990
    FDIV float ptr [0x0060b274]         ; 00466b7b | DAT_0060b274
    MOV ECX,dword ptr [0x0060b270]      ; 00466b81 | DAT_0060b270
    ADD ECX,ECX                         ; 00466b87
    MOV dword ptr [ESP + 0x18],ECX      ; 00466b89
    FADD float ptr [0x01ba5994]         ; 00466b8d | DAT_01ba5994
    FILD dword ptr [ESP + 0x18]         ; 00466b93
    FXCH                                ; 00466b97
    FSTP float ptr [0x01ba5994]         ; 00466b99 | DAT_01ba5994
    FCOMP float ptr [0x01ba5994]        ; 00466b9f | DAT_01ba5994
    FNSTSW AX                           ; 00466ba5
    SAHF                                ; 00466ba7
    JNC 0x00466bb1                      ; 00466ba8
        ;   XREF to: 00466bb1 (CONDITIONAL_JUMP)  ; LAB_00466bb1
    XOR EAX,EAX                         ; 00466baa
    MOV [0x01ba5994],EAX                ; 00466bac | DAT_01ba5994
    XOR ECX,ECX                         ; 00466bb1
        ;   Label: LAB_00466bb1
    MOV dword ptr [0x01ba5990],ECX      ; 00466bb3 | DAT_01ba5990
    JMP 0x00466a79                      ; 00466bb9
        ;   XREF to: 00466a79 (UNCONDITIONAL_JUMP)  ; LAB_00466a79
    MOV EDI,0xffffffff                  ; 00466bbe
        ;   Label: LAB_00466bbe
    NEG EBP                             ; 00466bc3
    MOV dword ptr [ESP + 0x4],EDI       ; 00466bc5
    JMP 0x00466ad4                      ; 00466bc9
        ;   XREF to: 00466ad4 (UNCONDITIONAL_JUMP)  ; LAB_00466ad4
    PUSH ESI                            ; 00466bce
        ;   Label: LAB_00466bce
    PUSH EBX                            ; 00466bcf
    MOV EAX,dword ptr [ESP + 0x38]      ; 00466bd0
    PUSH EAX                            ; 00466bd4
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 00466bd5
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00466bda
    JMP 0x00466b13                      ; 00466bdd
        ;   XREF to: 00466b13 (UNCONDITIONAL_JUMP)  ; LAB_00466b13
    XOR ECX,ECX                         ; 00466be2
        ;   Label: LAB_00466be2
    LEA EDI,[EBP + EBP*0x1]             ; 00466be4
    MOV dword ptr [ESP + 0x8],ECX       ; 00466be8
    SUB EDI,EAX                         ; 00466bec
    TEST EAX,EAX                        ; 00466bee
    JL 0x00466b40                       ; 00466bf0
        ;   XREF to: 00466b40 (CONDITIONAL_JUMP)  ; LAB_00466b40
    MOV EAX,dword ptr [ESP + 0x14]      ; 00466bf6
        ;   Label: LAB_00466bf6
    CDQ                                 ; 00466bfa
    XOR EAX,EDX                         ; 00466bfb
    SUB EAX,EDX                         ; 00466bfd
    MOV EDX,EAX                         ; 00466bff
    MOV ECX,dword ptr [0x0060b270]      ; 00466c01 | DAT_0060b270
    SAR EDX,0x1f                        ; 00466c07
    ADD ECX,ECX                         ; 00466c0a
    IDIV ECX                            ; 00466c0c
    CMP EDX,dword ptr [0x0060b270]      ; 00466c0e | DAT_0060b270
    JL 0x00466c4d                       ; 00466c14
        ;   XREF to: 00466c4d (CONDITIONAL_JUMP)  ; LAB_00466c4d
    TEST EDI,EDI                        ; 00466c16
        ;   Label: LAB_00466c16
    JLE 0x00466c26                      ; 00466c18
        ;   XREF to: 00466c26 (CONDITIONAL_JUMP)  ; LAB_00466c26
    MOV EAX,dword ptr [ESP + 0x10]      ; 00466c1a
    MOV ECX,dword ptr [ESP + 0x4]       ; 00466c1e
    SUB EDI,EAX                         ; 00466c22
    ADD EBX,ECX                         ; 00466c24
    MOV EDX,dword ptr [ESP]             ; 00466c26
        ;   Label: LAB_00466c26
    MOV ECX,dword ptr [ESP + 0x14]      ; 00466c29
    MOV EAX,dword ptr [ESP + 0x8]       ; 00466c2d
    INC ESI                             ; 00466c31
    ADD EDI,EBP                         ; 00466c32
    ADD ECX,EDX                         ; 00466c34
    INC EAX                             ; 00466c36
    MOV dword ptr [ESP + 0x14],ECX      ; 00466c37
    MOV ECX,dword ptr [ESP + 0x10]      ; 00466c3b
    MOV dword ptr [ESP + 0x8],EAX       ; 00466c3f
    CMP EAX,ECX                         ; 00466c43
    JG 0x00466b40                       ; 00466c45
        ;   XREF to: 00466b40 (CONDITIONAL_JUMP)  ; LAB_00466b40
    JMP 0x00466bf6                      ; 00466c4b
        ;   XREF to: 00466bf6 (UNCONDITIONAL_JUMP)  ; LAB_00466bf6
    PUSH ESI                            ; 00466c4d
        ;   Label: LAB_00466c4d
    PUSH EBX                            ; 00466c4e
    MOV EDX,dword ptr [ESP + 0x38]      ; 00466c4f
    PUSH EDX                            ; 00466c53
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 00466c54
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00466c59
    JMP 0x00466c16                      ; 00466c5c
        ;   XREF to: 00466c16 (UNCONDITIONAL_JUMP)  ; LAB_00466c16

