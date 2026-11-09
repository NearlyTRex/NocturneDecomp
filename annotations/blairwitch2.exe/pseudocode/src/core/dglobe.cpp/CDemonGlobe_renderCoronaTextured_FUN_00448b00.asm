; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_00448b00(CDemonGlobe *this_ptr)
;
; Parameters:
; CDemonGlobe *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005cf01a
;   undefined4 DAT_005f5020
;   undefined4 DAT_0060b27c
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
;   engine_special.cpp_FUN_0055d723
;   engine_texture.cpp_FUN_00574e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448b00
        ;   Label: core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_00448b00
    PUSH ESI                            ; 00448b01
    PUSH EDI                            ; 00448b02
    PUSH EBP                            ; 00448b03
    SUB ESP,0x40                        ; 00448b04
    MOV EBP,dword ptr [ESP + 0x54]      ; 00448b07
    LEA EAX,[EBP + 0x24]                ; 00448b0b
    PUSH EAX                            ; 00448b0e
    MOV EDX,dword ptr [0x0060b27c]      ; 00448b0f | DAT_0060b27c
    PUSH EDX                            ; 00448b15
    XOR ESI,ESI                         ; 00448b16
    XOR EDI,EDI                         ; 00448b18
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 00448b1a
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00448b1f
    FILD dword ptr [EDI + 0x60a0fc]     ; 00448b22
        ;   Label: LAB_00448b22
    FMUL double ptr [0x005cf01a]        ; 00448b28 | DAT_005cf01a
    FMUL float ptr [EBP + 0x30]         ; 00448b2e
    FILD dword ptr [EDI + 0x60a100]     ; 00448b31
    FMUL double ptr [0x005cf01a]        ; 00448b37 | DAT_005cf01a
    FXCH                                ; 00448b3d
    FSTP float ptr [ESP + 0x28]         ; 00448b3f
    FMUL float ptr [EBP + 0x30]         ; 00448b43
    FILD dword ptr [EDI + 0x60a104]     ; 00448b46
    FMUL double ptr [0x005cf01a]        ; 00448b4c | DAT_005cf01a
    FXCH                                ; 00448b52
    FSTP float ptr [ESP + 0x2c]         ; 00448b54
    FMUL float ptr [EBP + 0x30]         ; 00448b58
    LEA EBX,[ESP + 0x34]                ; 00448b5b
    LEA EAX,[ESP + 0x28]                ; 00448b5f
    MOV EDX,dword ptr [0x0060b27c]      ; 00448b63 | DAT_0060b27c
    FSTP float ptr [ESP + 0x30]         ; 00448b69
    FLD float ptr [EAX]                 ; 00448b6d
    FMUL float ptr [0x005f5020]         ; 00448b6f | DAT_005f5020
    FISTP dword ptr [EBX]               ; 00448b75
    FLD float ptr [EAX + 0x4]           ; 00448b77
    FMUL float ptr [0x005f5020]         ; 00448b7a | DAT_005f5020
    FISTP dword ptr [EBX + 0x4]         ; 00448b80
    FLD float ptr [EAX + 0x8]           ; 00448b83
    FMUL float ptr [0x005f5020]         ; 00448b86 | DAT_005f5020
    FISTP dword ptr [EBX + 0x8]         ; 00448b8c
    LEA EAX,[ESP + 0x34]                ; 00448b8f
    PUSH EAX                            ; 00448b93
    MOV EAX,dword ptr [EDX]             ; 00448b94
    ADD EAX,ESI                         ; 00448b96
    PUSH EAX                            ; 00448b98
    CALL engine_special.cpp_FUN_0055d723 ; 00448b99
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b27c]                ; 00448b9e | DAT_0060b27c
    MOV EBX,dword ptr [EAX]             ; 00448ba3
    MOV dword ptr [ESI + EBX*0x1 + 0x18],0x800000 ; 00448ba5
    MOV EBX,dword ptr [EAX]             ; 00448bad
    MOV dword ptr [ESI + EBX*0x1 + 0x1c],0x800000 ; 00448baf
    MOV EBX,dword ptr [EAX]             ; 00448bb7
    MOV dword ptr [ESI + EBX*0x1 + 0x2c],0x8000 ; 00448bb9
    MOV EDX,dword ptr [EAX]             ; 00448bc1
    MOV dword ptr [EDX + ESI*0x1 + 0x20],0xffff ; 00448bc3
    MOV EDX,dword ptr [EAX]             ; 00448bcb
    MOV dword ptr [EDX + ESI*0x1 + 0x24],0xffff ; 00448bcd
    ADD ESI,0x30                        ; 00448bd5
    MOV EAX,dword ptr [EAX]             ; 00448bd8
    ADD EDI,0xc                         ; 00448bda
    ADD ESP,0x8                         ; 00448bdd
    MOV dword ptr [ESI + EAX*0x1 + -0x8],0xffff ; 00448be0
    CMP EDI,0x2e8                       ; 00448be8
    JNZ 0x00448b22                      ; 00448bee
        ;   XREF to: 00448b22 (CONDITIONAL_JUMP)  ; LAB_00448b22
    PUSH 0x60a0e4                       ; 00448bf4
    CALL engine_texture.cpp_FUN_00574e00 ; 00448bf9
        ;   XREF to: 00574e00 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00574e00()
    XOR EBX,EBX                         ; 00448bfe
    ADD ESP,0x4                         ; 00448c00
    MOV EAX,dword ptr [EBX + 0x60a3e4]  ; 00448c03
        ;   Label: LAB_00448c03
    MOV dword ptr [ESP + 0x4],EAX       ; 00448c09
    MOV EAX,dword ptr [EBX + 0x60a3e8]  ; 00448c0d
    MOV dword ptr [ESP + 0x8],EAX       ; 00448c13
    MOV EAX,dword ptr [EBX + 0x60a3ec]  ; 00448c17
    MOV dword ptr [ESP + 0xc],EAX       ; 00448c1d
    MOV EAX,dword ptr [EBX + 0x60a3f0]  ; 00448c21
    FILD dword ptr [EBX + 0x60a3f4]     ; 00448c27
    MOV dword ptr [ESP + 0x10],EAX      ; 00448c2d
    MOV EAX,dword ptr [EBX + 0x60a3f8]  ; 00448c31
    FMUL float ptr [EBP + 0x30]         ; 00448c37
    MOV dword ptr [ESP + 0x18],EAX      ; 00448c3a
    MOV EAX,dword ptr [EBX + 0x60a3fc]  ; 00448c3e
    MOV dword ptr [ESP + 0x1c],EAX      ; 00448c44
    MOV EAX,dword ptr [EBX + 0x60a400]  ; 00448c48
    MOV dword ptr [ESP + 0x20],EAX      ; 00448c4e
    MOV EAX,dword ptr [EBX + 0x60a404]  ; 00448c52
    MOV ECX,dword ptr [0x0060b27c]      ; 00448c58 | DAT_0060b27c
    MOV dword ptr [ESP + 0x24],EAX      ; 00448c5e
    MOV EAX,ESP                         ; 00448c62
    ADD EBX,0x24                        ; 00448c64
    PUSH EAX                            ; 00448c67
    CALL crt_math.c_round_FUN_005b7ff0  ; 00448c68
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    PUSH ECX                            ; 00448c6d
    FISTP dword ptr [ESP + 0x1c]        ; 00448c6e
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930 ; 00448c72
        ;   XREF to: 0046a930 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00448c77
    CMP EBX,0xbd0                       ; 00448c7a
    JNZ 0x00448c03                      ; 00448c80
        ;   XREF to: 00448c03 (CONDITIONAL_JUMP)  ; LAB_00448c03
    ADD ESP,0x40                        ; 00448c82
    POP EBP                             ; 00448c85
    POP EDI                             ; 00448c86
    POP ESI                             ; 00448c87
    POP EBX                             ; 00448c88
    RET                                 ; 00448c89

