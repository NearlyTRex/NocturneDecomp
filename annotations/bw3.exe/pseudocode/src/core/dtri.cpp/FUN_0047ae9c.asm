; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtri_cpp_FUN_0047ae9c(float *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005bccd9
;   undefined4 DAT_005bcce1
;   undefined4 DAT_005bcce9
;   undefined4 DAT_005dee70
;   undefined4 DAT_005f2af8
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0047ae9c
        ;   Label: core_dtri.cpp_FUN_0047ae9c
    PUSH EBX                            ; 0047aea0
    PUSH ESI                            ; 0047aea1
    PUSH EDI                            ; 0047aea2
    SUB ESP,0x6c                        ; 0047aea3
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0047aea6
    LEA EBX,[ESP + 0x48]                ; 0047aeaa
    MOV EAX,ESI                         ; 0047aeae
    MOV EDX,dword ptr [0x005f2af8]      ; 0047aeb0 | DAT_005f2af8
    FLD float ptr [EAX]                 ; 0047aeb6
    FMUL float ptr [0x005dee70]         ; 0047aeb8 | DAT_005dee70
    FISTP dword ptr [EBX]               ; 0047aebe
    FLD float ptr [EAX + 0x4]           ; 0047aec0
    FMUL float ptr [0x005dee70]         ; 0047aec3 | DAT_005dee70
    FISTP dword ptr [EBX + 0x4]         ; 0047aec9
    FLD float ptr [EAX + 0x8]           ; 0047aecc
    FMUL float ptr [0x005dee70]         ; 0047aecf | DAT_005dee70
    FISTP dword ptr [EBX + 0x8]         ; 0047aed5
    LEA EAX,[ESP + 0x48]                ; 0047aed8
    PUSH EAX                            ; 0047aedc
    MOV EAX,dword ptr [EDX]             ; 0047aedd
    PUSH EAX                            ; 0047aedf
    CALL engine_special.cpp_FUN_005632a3 ; 0047aee0
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x68]                ; 0047aee5
    ADD ESP,0x8                         ; 0047aee9
    LEA EAX,[ESI + 0xc]                 ; 0047aeec
    MOV EDX,dword ptr [0x005f2af8]      ; 0047aeef | DAT_005f2af8
    FLD float ptr [EAX]                 ; 0047aef5
    FMUL float ptr [0x005dee70]         ; 0047aef7 | DAT_005dee70
    FISTP dword ptr [EBX]               ; 0047aefd
    FLD float ptr [EAX + 0x4]           ; 0047aeff
    FMUL float ptr [0x005dee70]         ; 0047af02 | DAT_005dee70
    FISTP dword ptr [EBX + 0x4]         ; 0047af08
    FLD float ptr [EAX + 0x8]           ; 0047af0b
    FMUL float ptr [0x005dee70]         ; 0047af0e | DAT_005dee70
    FISTP dword ptr [EBX + 0x8]         ; 0047af14
    LEA EAX,[ESP + 0x60]                ; 0047af17
    PUSH EAX                            ; 0047af1b
    MOV EAX,dword ptr [EDX]             ; 0047af1c
    ADD EAX,0x30                        ; 0047af1e
    PUSH EAX                            ; 0047af21
    CALL engine_special.cpp_FUN_005632a3 ; 0047af22
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x5c]                ; 0047af27
    ADD ESP,0x8                         ; 0047af2b
    LEA EAX,[ESI + 0x18]                ; 0047af2e
    MOV EDX,dword ptr [0x005f2af8]      ; 0047af31 | DAT_005f2af8
    FLD float ptr [EAX]                 ; 0047af37
    FMUL float ptr [0x005dee70]         ; 0047af39 | DAT_005dee70
    FISTP dword ptr [EBX]               ; 0047af3f
    FLD float ptr [EAX + 0x4]           ; 0047af41
    FMUL float ptr [0x005dee70]         ; 0047af44 | DAT_005dee70
    FISTP dword ptr [EBX + 0x4]         ; 0047af4a
    FLD float ptr [EAX + 0x8]           ; 0047af4d
    FMUL float ptr [0x005dee70]         ; 0047af50 | DAT_005dee70
    FISTP dword ptr [EBX + 0x8]         ; 0047af56
    LEA EAX,[ESP + 0x54]                ; 0047af59
    PUSH EAX                            ; 0047af5d
    MOV EAX,dword ptr [EDX]             ; 0047af5e
    ADD EAX,0x60                        ; 0047af60
    PUSH EAX                            ; 0047af63
    CALL engine_special.cpp_FUN_005632a3 ; 0047af64
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EDX,0x3                         ; 0047af69
    ADD ESP,0x8                         ; 0047af6e
    MOV dword ptr [ESP + 0x4],EDX       ; 0047af71
    FLD double ptr [0x005bccd9]         ; 0047af75 | DAT_005bccd9
    FLD float ptr [ESI + 0x24]          ; 0047af7b
    FMUL ST1                            ; 0047af7e
    CALL crt_math.c_round_FUN_005a3120  ; 0047af80
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x8]         ; 0047af85
    FLD float ptr [ESI + 0x28]          ; 0047af89
    FMUL ST1                            ; 0047af8c
    CALL crt_math.c_round_FUN_005a3120  ; 0047af8e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0xc]         ; 0047af93
    FMUL float ptr [ESI + 0x2c]         ; 0047af97
    CALL crt_math.c_round_FUN_005a3120  ; 0047af9a
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x10]        ; 0047af9f
    FLD float ptr [ESI + 0x30]          ; 0047afa3
    FMUL double ptr [0x005bcce1]        ; 0047afa6 | DAT_005bcce1
    FMUL double ptr [0x005bcce9]        ; 0047afac | DAT_005bcce9
    MOV EAX,ESP                         ; 0047afb2
    MOV EBX,0x1                         ; 0047afb4
    PUSH EAX                            ; 0047afb9
    MOV EDI,dword ptr [0x005f2af8]      ; 0047afba | DAT_005f2af8
    XOR ECX,ECX                         ; 0047afc0
    PUSH EDI                            ; 0047afc2
    MOV ESI,0x2                         ; 0047afc3
    MOV dword ptr [ESP + 0x20],ECX      ; 0047afc8
    MOV dword ptr [ESP + 0x2c],EBX      ; 0047afcc
    MOV dword ptr [ESP + 0x38],ESI      ; 0047afd0
    CALL crt_math.c_round_FUN_005a3120  ; 0047afd4
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x1c]        ; 0047afd9
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0 ; 0047afdd
        ;   XREF to: 0046b2c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 0047afe2
    ADD ESP,0x6c                        ; 0047afe5
    POP EDI                             ; 0047afe8
    POP ESI                             ; 0047afe9
    POP EBX                             ; 0047afea
    RET                                 ; 0047afeb

