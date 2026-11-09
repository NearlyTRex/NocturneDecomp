; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_spatialFilter9TapMMX_FUN_00488aef(uint *output_buffer,uint *input_buffer,int pixel_count)
;
; Parameters:
; uint *           Stack[0x4]:4   output_buffer
; uint *           Stack[0x8]:4   input_buffer
; int              Stack[0xc]:4   pixel_count
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00488aef
        ;   Label: core_dstrendr.cpp_spatialFilter9TapMMX_FUN_00488aef
    MOV EBP,ESP                         ; 00488af0
    PUSH ESI                            ; 00488af2
    PUSH EDI                            ; 00488af3
    MOV ESI,dword ptr [EBP + 0xc]       ; 00488af4
    MOV EDI,dword ptr [EBP + 0x8]       ; 00488af7
    MOV ECX,dword ptr [EBP + 0x10]      ; 00488afa
    PXOR MM7,MM7                        ; 00488afd
    MOVD MM1,dword ptr [ESI + -0x4]     ; 00488b00
        ;   Label: LAB_00488b00
    MOVD MM0,dword ptr [ESI]            ; 00488b04
    MOVD MM2,dword ptr [ESI + 0x4]      ; 00488b07
    MOVD MM3,dword ptr [ESI + 0xfffffb00] ; 00488b0b
    MOVD MM4,dword ptr [ESI + 0x500]    ; 00488b12
    PUNPCKLBW MM0,MM7                   ; 00488b19
    PUNPCKLBW MM1,MM7                   ; 00488b1c
    PUNPCKLBW MM2,MM7                   ; 00488b1f
    PUNPCKLBW MM3,MM7                   ; 00488b22
    PUNPCKLBW MM4,MM7                   ; 00488b25
    PSLLW MM0,0x2                       ; 00488b28
    PSLLW MM1,0x1                       ; 00488b2c
    PSLLW MM2,0x1                       ; 00488b30
    PSLLW MM3,0x1                       ; 00488b34
    PSLLW MM4,0x1                       ; 00488b38
    PADDW MM0,MM1                       ; 00488b3c
    PADDW MM0,MM2                       ; 00488b3f
    PADDW MM0,MM3                       ; 00488b42
    PADDW MM0,MM4                       ; 00488b45
    MOVD MM1,dword ptr [ESI + 0xfffffafc] ; 00488b48
    MOVD MM2,dword ptr [ESI + 0xfffffb04] ; 00488b4f
    MOVD MM3,dword ptr [ESI + 0x4fc]    ; 00488b56
    MOVD MM4,dword ptr [ESI + 0x504]    ; 00488b5d
    PUNPCKLBW MM1,MM7                   ; 00488b64
    PUNPCKLBW MM2,MM7                   ; 00488b67
    PUNPCKLBW MM3,MM7                   ; 00488b6a
    PUNPCKLBW MM4,MM7                   ; 00488b6d
    PADDW MM0,MM1                       ; 00488b70
    PADDW MM0,MM2                       ; 00488b73
    PADDW MM0,MM3                       ; 00488b76
    PADDW MM0,MM4                       ; 00488b79
    PSRLW MM0,0x4                       ; 00488b7c
    PACKUSWB MM0,MM7                    ; 00488b80
    MOVD dword ptr [EDI],MM0            ; 00488b83
    ADD ESI,0x4                         ; 00488b86
    ADD EDI,0x4                         ; 00488b89
    DEC ECX                             ; 00488b8c
    JG 0x00488b00                       ; 00488b8d
        ;   XREF to: 00488b00 (CONDITIONAL_JUMP)  ; LAB_00488b00
    EMMS                                ; 00488b93
    POP EDI                             ; 00488b95
    POP ESI                             ; 00488b96
    LEAVE                               ; 00488b97
    RET                                 ; 00488b98

