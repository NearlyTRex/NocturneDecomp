; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_0045ec60(CDemonGlobe *this_ptr)
;
; Parameters:
; CDemonGlobe *    Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005d8913
;   undefined4 DAT_005fe9d0
;   undefined4 DAT_0061255c
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30
;   engine_special.cpp_FUN_00580173
;   engine_texture.cpp_FUN_00597a20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ec60
        ;   Label: core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_0045ec60
    PUSH ESI                            ; 0045ec61
    PUSH EDI                            ; 0045ec62
    PUSH EBP                            ; 0045ec63
    SUB ESP,0x40                        ; 0045ec64
    MOV EBP,dword ptr [ESP + 0x54]      ; 0045ec67
    LEA EAX,[EBP + 0x24]                ; 0045ec6b
    PUSH EAX                            ; 0045ec6e
    MOV EDX,dword ptr [0x0061255c]      ; 0045ec6f | DAT_0061255c
    PUSH EDX                            ; 0045ec75
    XOR ESI,ESI                         ; 0045ec76
    XOR EDI,EDI                         ; 0045ec78
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 0045ec7a
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0045ec7f
    FILD dword ptr [EDI + 0x6113a0]     ; 0045ec82
        ;   Label: LAB_0045ec82
    FMUL double ptr [0x005d8913]        ; 0045ec88 | DAT_005d8913
    FMUL float ptr [EBP + 0x30]         ; 0045ec8e
    FILD dword ptr [EDI + 0x6113a4]     ; 0045ec91
    FMUL double ptr [0x005d8913]        ; 0045ec97 | DAT_005d8913
    FXCH                                ; 0045ec9d
    FSTP float ptr [ESP + 0x28]         ; 0045ec9f
    FMUL float ptr [EBP + 0x30]         ; 0045eca3
    FILD dword ptr [EDI + 0x6113a8]     ; 0045eca6
    FMUL double ptr [0x005d8913]        ; 0045ecac | DAT_005d8913
    FXCH                                ; 0045ecb2
    FSTP float ptr [ESP + 0x2c]         ; 0045ecb4
    FMUL float ptr [EBP + 0x30]         ; 0045ecb8
    LEA EBX,[ESP + 0x34]                ; 0045ecbb
    LEA EAX,[ESP + 0x28]                ; 0045ecbf
    MOV EDX,dword ptr [0x0061255c]      ; 0045ecc3 | DAT_0061255c
    FSTP float ptr [ESP + 0x30]         ; 0045ecc9
    FLD float ptr [EAX]                 ; 0045eccd
    FMUL float ptr [0x005fe9d0]         ; 0045eccf | DAT_005fe9d0
    FISTP dword ptr [EBX]               ; 0045ecd5
    FLD float ptr [EAX + 0x4]           ; 0045ecd7
    FMUL float ptr [0x005fe9d0]         ; 0045ecda | DAT_005fe9d0
    FISTP dword ptr [EBX + 0x4]         ; 0045ece0
    FLD float ptr [EAX + 0x8]           ; 0045ece3
    FMUL float ptr [0x005fe9d0]         ; 0045ece6 | DAT_005fe9d0
    FISTP dword ptr [EBX + 0x8]         ; 0045ecec
    LEA EAX,[ESP + 0x34]                ; 0045ecef
    PUSH EAX                            ; 0045ecf3
    MOV EAX,dword ptr [EDX]             ; 0045ecf4
    ADD EAX,ESI                         ; 0045ecf6
    PUSH EAX                            ; 0045ecf8
    CALL engine_special.cpp_FUN_00580173 ; 0045ecf9
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0061255c]                ; 0045ecfe | DAT_0061255c
    MOV EBX,dword ptr [EAX]             ; 0045ed03
    MOV dword ptr [ESI + EBX*0x1 + 0x18],0x800000 ; 0045ed05
    MOV EBX,dword ptr [EAX]             ; 0045ed0d
    MOV dword ptr [ESI + EBX*0x1 + 0x1c],0x800000 ; 0045ed0f
    MOV EBX,dword ptr [EAX]             ; 0045ed17
    MOV dword ptr [ESI + EBX*0x1 + 0x2c],0x8000 ; 0045ed19
    MOV EDX,dword ptr [EAX]             ; 0045ed21
    MOV dword ptr [EDX + ESI*0x1 + 0x20],0xffff ; 0045ed23
    MOV EDX,dword ptr [EAX]             ; 0045ed2b
    MOV dword ptr [EDX + ESI*0x1 + 0x24],0xffff ; 0045ed2d
    ADD ESI,0x30                        ; 0045ed35
    MOV EAX,dword ptr [EAX]             ; 0045ed38
    ADD EDI,0xc                         ; 0045ed3a
    ADD ESP,0x8                         ; 0045ed3d
    MOV dword ptr [ESI + EAX*0x1 + -0x8],0xffff ; 0045ed40
    CMP EDI,0x2e8                       ; 0045ed48
    JNZ 0x0045ec82                      ; 0045ed4e
        ;   XREF to: 0045ec82 (CONDITIONAL_JUMP)  ; LAB_0045ec82
    PUSH 0x611388                       ; 0045ed54
    CALL engine_texture.cpp_FUN_00597a20 ; 0045ed59
        ;   XREF to: 00597a20 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00597a20()
    XOR EBX,EBX                         ; 0045ed5e
    ADD ESP,0x4                         ; 0045ed60
    MOV EAX,dword ptr [EBX + 0x611688]  ; 0045ed63
        ;   Label: LAB_0045ed63
    MOV dword ptr [ESP + 0x4],EAX       ; 0045ed69
    MOV EAX,dword ptr [EBX + 0x61168c]  ; 0045ed6d
    MOV dword ptr [ESP + 0x8],EAX       ; 0045ed73
    MOV EAX,dword ptr [EBX + 0x611690]  ; 0045ed77
    MOV dword ptr [ESP + 0xc],EAX       ; 0045ed7d
    MOV EAX,dword ptr [EBX + 0x611694]  ; 0045ed81
    FILD dword ptr [EBX + 0x611698]     ; 0045ed87
    MOV dword ptr [ESP + 0x10],EAX      ; 0045ed8d
    MOV EAX,dword ptr [EBX + 0x61169c]  ; 0045ed91
    FMUL float ptr [EBP + 0x30]         ; 0045ed97
    MOV dword ptr [ESP + 0x18],EAX      ; 0045ed9a
    MOV EAX,dword ptr [EBX + 0x6116a0]  ; 0045ed9e
    MOV dword ptr [ESP + 0x1c],EAX      ; 0045eda4
    MOV EAX,dword ptr [EBX + 0x6116a4]  ; 0045eda8
    MOV dword ptr [ESP + 0x20],EAX      ; 0045edae
    MOV EAX,dword ptr [EBX + 0x6116a8]  ; 0045edb2
    MOV ECX,dword ptr [0x0061255c]      ; 0045edb8 | DAT_0061255c
    MOV dword ptr [ESP + 0x24],EAX      ; 0045edbe
    MOV EAX,ESP                         ; 0045edc2
    ADD EBX,0x24                        ; 0045edc4
    PUSH EAX                            ; 0045edc7
    CALL crt_math.c_round_FUN_005c03a0  ; 0045edc8
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH ECX                            ; 0045edcd
    FISTP dword ptr [ESP + 0x1c]        ; 0045edce
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30 ; 0045edd2
        ;   XREF to: 00482e30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0045edd7
    CMP EBX,0xbd0                       ; 0045edda
    JNZ 0x0045ed63                      ; 0045ede0
        ;   XREF to: 0045ed63 (CONDITIONAL_JUMP)  ; LAB_0045ed63
    ADD ESP,0x40                        ; 0045ede2
    POP EBP                             ; 0045ede5
    POP EDI                             ; 0045ede6
    POP ESI                             ; 0045ede7
    POP EBX                             ; 0045ede8
    RET                                 ; 0045ede9

