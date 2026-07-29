; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrender_cpp_spatialFilter9TapMMX_FUN_004654c5(uint *output_buffer,uint *input_buffer,int pixel_count)
;
; Parameters:
; uint *           Stack[0x4]:4   output_buffer
; uint *           Stack[0x8]:4   input_buffer
; int              Stack[0xc]:4   pixel_count
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004654c5
        ;   Label: core_dstrender.cpp_spatialFilter9TapMMX_FUN_004654c5
    MOV EBP,ESP                         ; 004654c6
    PUSH ESI                            ; 004654c8
    PUSH EDI                            ; 004654c9
    MOV ESI,dword ptr [EBP + 0xc]       ; 004654ca
    MOV EDI,dword ptr [EBP + 0x8]       ; 004654cd
    MOV ECX,dword ptr [EBP + 0x10]      ; 004654d0
    PXOR MM7,MM7                        ; 004654d3
    MOVD MM1,dword ptr [ESI + -0x4]     ; 004654d6
        ;   Label: LAB_004654d6
    MOVD MM0,dword ptr [ESI]            ; 004654da
    MOVD MM2,dword ptr [ESI + 0x4]      ; 004654dd
    MOVD MM3,dword ptr [ESI + 0xfffffb00] ; 004654e1
    MOVD MM4,dword ptr [ESI + 0x500]    ; 004654e8
    PUNPCKLBW MM0,MM7                   ; 004654ef
    PUNPCKLBW MM1,MM7                   ; 004654f2
    PUNPCKLBW MM2,MM7                   ; 004654f5
    PUNPCKLBW MM3,MM7                   ; 004654f8
    PUNPCKLBW MM4,MM7                   ; 004654fb
    PSLLW MM0,0x2                       ; 004654fe
    PSLLW MM1,0x1                       ; 00465502
    PSLLW MM2,0x1                       ; 00465506
    PSLLW MM3,0x1                       ; 0046550a
    PSLLW MM4,0x1                       ; 0046550e
    PADDW MM0,MM1                       ; 00465512
    PADDW MM0,MM2                       ; 00465515
    PADDW MM0,MM3                       ; 00465518
    PADDW MM0,MM4                       ; 0046551b
    MOVD MM1,dword ptr [ESI + 0xfffffafc] ; 0046551e
    MOVD MM2,dword ptr [ESI + 0xfffffb04] ; 00465525
    MOVD MM3,dword ptr [ESI + 0x4fc]    ; 0046552c
    MOVD MM4,dword ptr [ESI + 0x504]    ; 00465533
    PUNPCKLBW MM1,MM7                   ; 0046553a
    PUNPCKLBW MM2,MM7                   ; 0046553d
    PUNPCKLBW MM3,MM7                   ; 00465540
    PUNPCKLBW MM4,MM7                   ; 00465543
    PADDW MM0,MM1                       ; 00465546
    PADDW MM0,MM2                       ; 00465549
    PADDW MM0,MM3                       ; 0046554c
    PADDW MM0,MM4                       ; 0046554f
    PSRLW MM0,0x4                       ; 00465552
    PACKUSWB MM0,MM7                    ; 00465556
    MOVD dword ptr [EDI],MM0            ; 00465559
    ADD ESI,0x4                         ; 0046555c
    ADD EDI,0x4                         ; 0046555f
    DEC ECX                             ; 00465562
    JG 0x004654d6                       ; 00465563
        ;   XREF to: 004654d6 (CONDITIONAL_JUMP)  ; LAB_004654d6
    EMMS                                ; 00465569
    POP EDI                             ; 0046556b
    POP ESI                             ; 0046556c
    LEAVE                               ; 0046556d
    RET                                 ; 0046556e

