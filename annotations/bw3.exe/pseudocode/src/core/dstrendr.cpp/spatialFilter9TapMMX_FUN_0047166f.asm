; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dstrendr_cpp_spatialFilter9TapMMX_FUN_0047166f(uint *output_buffer,uint *input_buffer,int pixel_count)
;
; Parameters:
; uint *           Stack[0x4]:4   output_buffer
; uint *           Stack[0x8]:4   input_buffer
; int              Stack[0xc]:4   pixel_count
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0047166f
        ;   Label: core_dstrendr.cpp_spatialFilter9TapMMX_FUN_0047166f
    MOV EBP,ESP                         ; 00471670
    PUSH ESI                            ; 00471672
    PUSH EDI                            ; 00471673
    MOV ESI,dword ptr [EBP + 0xc]       ; 00471674
    MOV EDI,dword ptr [EBP + 0x8]       ; 00471677
    MOV ECX,dword ptr [EBP + 0x10]      ; 0047167a
    PXOR MM7,MM7                        ; 0047167d
    MOVD MM1,dword ptr [ESI + -0x4]     ; 00471680
        ;   Label: LAB_00471680
    MOVD MM0,dword ptr [ESI]            ; 00471684
    MOVD MM2,dword ptr [ESI + 0x4]      ; 00471687
    MOVD MM3,dword ptr [ESI + 0xfffffb00] ; 0047168b
    MOVD MM4,dword ptr [ESI + 0x500]    ; 00471692
    PUNPCKLBW MM0,MM7                   ; 00471699
    PUNPCKLBW MM1,MM7                   ; 0047169c
    PUNPCKLBW MM2,MM7                   ; 0047169f
    PUNPCKLBW MM3,MM7                   ; 004716a2
    PUNPCKLBW MM4,MM7                   ; 004716a5
    PSLLW MM0,0x2                       ; 004716a8
    PSLLW MM1,0x1                       ; 004716ac
    PSLLW MM2,0x1                       ; 004716b0
    PSLLW MM3,0x1                       ; 004716b4
    PSLLW MM4,0x1                       ; 004716b8
    PADDW MM0,MM1                       ; 004716bc
    PADDW MM0,MM2                       ; 004716bf
    PADDW MM0,MM3                       ; 004716c2
    PADDW MM0,MM4                       ; 004716c5
    MOVD MM1,dword ptr [ESI + 0xfffffafc] ; 004716c8
    MOVD MM2,dword ptr [ESI + 0xfffffb04] ; 004716cf
    MOVD MM3,dword ptr [ESI + 0x4fc]    ; 004716d6
    MOVD MM4,dword ptr [ESI + 0x504]    ; 004716dd
    PUNPCKLBW MM1,MM7                   ; 004716e4
    PUNPCKLBW MM2,MM7                   ; 004716e7
    PUNPCKLBW MM3,MM7                   ; 004716ea
    PUNPCKLBW MM4,MM7                   ; 004716ed
    PADDW MM0,MM1                       ; 004716f0
    PADDW MM0,MM2                       ; 004716f3
    PADDW MM0,MM3                       ; 004716f6
    PADDW MM0,MM4                       ; 004716f9
    PSRLW MM0,0x4                       ; 004716fc
    PACKUSWB MM0,MM7                    ; 00471700
    MOVD dword ptr [EDI],MM0            ; 00471703
    ADD ESI,0x4                         ; 00471706
    ADD EDI,0x4                         ; 00471709
    DEC ECX                             ; 0047170c
    JG 0x00471680                       ; 0047170d
        ;   XREF to: 00471680 (CONDITIONAL_JUMP)  ; LAB_00471680
    EMMS                                ; 00471713
    POP EDI                             ; 00471715
    POP ESI                             ; 00471716
    LEAVE                               ; 00471717
    RET                                 ; 00471718

