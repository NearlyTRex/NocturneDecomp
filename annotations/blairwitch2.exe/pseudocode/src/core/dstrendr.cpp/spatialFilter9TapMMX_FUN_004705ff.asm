; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_spatialFilter9TapMMX_FUN_004705ff(uint *output_buffer,uint *input_buffer,int pixel_count)
;
; Parameters:
; uint *           Stack[0x4]:4   output_buffer
; uint *           Stack[0x8]:4   input_buffer
; int              Stack[0xc]:4   pixel_count
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004705ff
        ;   Label: core_dstrendr.cpp_spatialFilter9TapMMX_FUN_004705ff
    MOV EBP,ESP                         ; 00470600
    PUSH ESI                            ; 00470602
    PUSH EDI                            ; 00470603
    MOV ESI,dword ptr [EBP + 0xc]       ; 00470604
    MOV EDI,dword ptr [EBP + 0x8]       ; 00470607
    MOV ECX,dword ptr [EBP + 0x10]      ; 0047060a
    PXOR MM7,MM7                        ; 0047060d
    MOVD MM1,dword ptr [ESI + -0x4]     ; 00470610
        ;   Label: LAB_00470610
    MOVD MM0,dword ptr [ESI]            ; 00470614
    MOVD MM2,dword ptr [ESI + 0x4]      ; 00470617
    MOVD MM3,dword ptr [ESI + 0xfffffb00] ; 0047061b
    MOVD MM4,dword ptr [ESI + 0x500]    ; 00470622
    PUNPCKLBW MM0,MM7                   ; 00470629
    PUNPCKLBW MM1,MM7                   ; 0047062c
    PUNPCKLBW MM2,MM7                   ; 0047062f
    PUNPCKLBW MM3,MM7                   ; 00470632
    PUNPCKLBW MM4,MM7                   ; 00470635
    PSLLW MM0,0x2                       ; 00470638
    PSLLW MM1,0x1                       ; 0047063c
    PSLLW MM2,0x1                       ; 00470640
    PSLLW MM3,0x1                       ; 00470644
    PSLLW MM4,0x1                       ; 00470648
    PADDW MM0,MM1                       ; 0047064c
    PADDW MM0,MM2                       ; 0047064f
    PADDW MM0,MM3                       ; 00470652
    PADDW MM0,MM4                       ; 00470655
    MOVD MM1,dword ptr [ESI + 0xfffffafc] ; 00470658
    MOVD MM2,dword ptr [ESI + 0xfffffb04] ; 0047065f
    MOVD MM3,dword ptr [ESI + 0x4fc]    ; 00470666
    MOVD MM4,dword ptr [ESI + 0x504]    ; 0047066d
    PUNPCKLBW MM1,MM7                   ; 00470674
    PUNPCKLBW MM2,MM7                   ; 00470677
    PUNPCKLBW MM3,MM7                   ; 0047067a
    PUNPCKLBW MM4,MM7                   ; 0047067d
    PADDW MM0,MM1                       ; 00470680
    PADDW MM0,MM2                       ; 00470683
    PADDW MM0,MM3                       ; 00470686
    PADDW MM0,MM4                       ; 00470689
    PSRLW MM0,0x4                       ; 0047068c
    PACKUSWB MM0,MM7                    ; 00470690
    MOVD dword ptr [EDI],MM0            ; 00470693
    ADD ESI,0x4                         ; 00470696
    ADD EDI,0x4                         ; 00470699
    DEC ECX                             ; 0047069c
    JG 0x00470610                       ; 0047069d
        ;   XREF to: 00470610 (CONDITIONAL_JUMP)  ; LAB_00470610
    EMMS                                ; 004706a3
    POP EDI                             ; 004706a5
    POP ESI                             ; 004706a6
    LEAVE                               ; 004706a7
    RET                                 ; 004706a8

