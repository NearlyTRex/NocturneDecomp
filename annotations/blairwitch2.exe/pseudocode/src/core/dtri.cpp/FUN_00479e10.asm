; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtri_cpp_FUN_00479e10(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005d1e23
;   undefined4 DAT_005d1e2b
;   undefined4 DAT_005d1e33
;   undefined4 DAT_005f5b50
;   undefined4 DAT_0060b27c
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479e10
        ;   Label: core_dtri.cpp_FUN_00479e10
    PUSH ESI                            ; 00479e11
    PUSH EDI                            ; 00479e12
    SUB ESP,0x6c                        ; 00479e13
    MOV ESI,dword ptr [ESP + 0x7c]      ; 00479e16
    LEA EBX,[ESP + 0x48]                ; 00479e1a
    MOV EAX,ESI                         ; 00479e1e
    MOV EDX,dword ptr [0x0060b27c]      ; 00479e20 | DAT_0060b27c
    FLD float ptr [EAX]                 ; 00479e26
    FMUL float ptr [0x005f5b50]         ; 00479e28 | DAT_005f5b50
    FISTP dword ptr [EBX]               ; 00479e2e
    FLD float ptr [EAX + 0x4]           ; 00479e30
    FMUL float ptr [0x005f5b50]         ; 00479e33 | DAT_005f5b50
    FISTP dword ptr [EBX + 0x4]         ; 00479e39
    FLD float ptr [EAX + 0x8]           ; 00479e3c
    FMUL float ptr [0x005f5b50]         ; 00479e3f | DAT_005f5b50
    FISTP dword ptr [EBX + 0x8]         ; 00479e45
    LEA EAX,[ESP + 0x48]                ; 00479e48
    PUSH EAX                            ; 00479e4c
    MOV EAX,dword ptr [EDX]             ; 00479e4d
    PUSH EAX                            ; 00479e4f
    CALL engine_special.cpp_FUN_0055d723 ; 00479e50
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x68]                ; 00479e55
    ADD ESP,0x8                         ; 00479e59
    LEA EAX,[ESI + 0xc]                 ; 00479e5c
    MOV EDX,dword ptr [0x0060b27c]      ; 00479e5f | DAT_0060b27c
    FLD float ptr [EAX]                 ; 00479e65
    FMUL float ptr [0x005f5b50]         ; 00479e67 | DAT_005f5b50
    FISTP dword ptr [EBX]               ; 00479e6d
    FLD float ptr [EAX + 0x4]           ; 00479e6f
    FMUL float ptr [0x005f5b50]         ; 00479e72 | DAT_005f5b50
    FISTP dword ptr [EBX + 0x4]         ; 00479e78
    FLD float ptr [EAX + 0x8]           ; 00479e7b
    FMUL float ptr [0x005f5b50]         ; 00479e7e | DAT_005f5b50
    FISTP dword ptr [EBX + 0x8]         ; 00479e84
    LEA EAX,[ESP + 0x60]                ; 00479e87
    PUSH EAX                            ; 00479e8b
    MOV EAX,dword ptr [EDX]             ; 00479e8c
    ADD EAX,0x30                        ; 00479e8e
    PUSH EAX                            ; 00479e91
    CALL engine_special.cpp_FUN_0055d723 ; 00479e92
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x5c]                ; 00479e97
    ADD ESP,0x8                         ; 00479e9b
    LEA EAX,[ESI + 0x18]                ; 00479e9e
    MOV EDX,dword ptr [0x0060b27c]      ; 00479ea1 | DAT_0060b27c
    FLD float ptr [EAX]                 ; 00479ea7
    FMUL float ptr [0x005f5b50]         ; 00479ea9 | DAT_005f5b50
    FISTP dword ptr [EBX]               ; 00479eaf
    FLD float ptr [EAX + 0x4]           ; 00479eb1
    FMUL float ptr [0x005f5b50]         ; 00479eb4 | DAT_005f5b50
    FISTP dword ptr [EBX + 0x4]         ; 00479eba
    FLD float ptr [EAX + 0x8]           ; 00479ebd
    FMUL float ptr [0x005f5b50]         ; 00479ec0 | DAT_005f5b50
    FISTP dword ptr [EBX + 0x8]         ; 00479ec6
    LEA EAX,[ESP + 0x54]                ; 00479ec9
    PUSH EAX                            ; 00479ecd
    MOV EAX,dword ptr [EDX]             ; 00479ece
    ADD EAX,0x60                        ; 00479ed0
    PUSH EAX                            ; 00479ed3
    CALL engine_special.cpp_FUN_0055d723 ; 00479ed4
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EDX,0x3                         ; 00479ed9
    ADD ESP,0x8                         ; 00479ede
    MOV dword ptr [ESP + 0x4],EDX       ; 00479ee1
    FLD double ptr [0x005d1e23]         ; 00479ee5 | DAT_005d1e23
    FLD float ptr [ESI + 0x24]          ; 00479eeb
    FMUL ST1                            ; 00479eee
    CALL crt_math.c_round_FUN_005b7ff0  ; 00479ef0
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x8]         ; 00479ef5
    FLD float ptr [ESI + 0x28]          ; 00479ef9
    FMUL ST1                            ; 00479efc
    CALL crt_math.c_round_FUN_005b7ff0  ; 00479efe
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0xc]         ; 00479f03
    FMUL float ptr [ESI + 0x2c]         ; 00479f07
    CALL crt_math.c_round_FUN_005b7ff0  ; 00479f0a
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x10]        ; 00479f0f
    FLD float ptr [ESI + 0x30]          ; 00479f13
    FMUL double ptr [0x005d1e2b]        ; 00479f16 | DAT_005d1e2b
    FMUL double ptr [0x005d1e33]        ; 00479f1c | DAT_005d1e33
    MOV EAX,ESP                         ; 00479f22
    MOV EBX,0x1                         ; 00479f24
    PUSH EAX                            ; 00479f29
    MOV EDI,dword ptr [0x0060b27c]      ; 00479f2a | DAT_0060b27c
    XOR ECX,ECX                         ; 00479f30
    PUSH EDI                            ; 00479f32
    MOV ESI,0x2                         ; 00479f33
    MOV dword ptr [ESP + 0x20],ECX      ; 00479f38
    MOV dword ptr [ESP + 0x2c],EBX      ; 00479f3c
    MOV dword ptr [ESP + 0x38],ESI      ; 00479f40
    CALL crt_math.c_round_FUN_005b7ff0  ; 00479f44
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x1c]        ; 00479f49
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0 ; 00479f4d
        ;   XREF to: 004696f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 00479f52
    ADD ESP,0x6c                        ; 00479f55
    POP EDI                             ; 00479f58
    POP ESI                             ; 00479f59
    POP EBX                             ; 00479f5a
    RET                                 ; 00479f5b

