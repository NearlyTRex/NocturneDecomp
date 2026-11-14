; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_applyScalefactorsToSubbands_FUN_00527080(float *spectral_samples,int *scalefactor_band_indices,SMpegFrame *frame_info,int channel_or_granule_index)
;
; Parameters:
; float *          Stack[0x4]:4   spectral_samples
; int *            Stack[0x8]:4   scalefactor_band_indices
; SMpegFrame *     Stack[0xc]:4   frame_info
; int              Stack[0x10]:4   channel_or_granule_index
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0052b450 at 0052b871
;
; Referenced Globals:
;   undefined4 DAT_00620490
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527080
        ;   Label: sound_mp3.cpp_applyScalefactorsToSubbands_FUN_00527080
    PUSH ESI                            ; 00527081
    PUSH EDI                            ; 00527082
    SUB ESP,0x10                        ; 00527083
    MOV EAX,dword ptr [ESP + 0x28]      ; 00527086
    MOV ESI,dword ptr [EAX + 0x10]      ; 0052708a
    MOV EAX,dword ptr [EAX + 0x18]      ; 0052708d
    TEST EAX,EAX                        ; 00527090
    JLE 0x00527127                      ; 00527092
        ;   XREF to: 00527127 (CONDITIONAL_JUMP)  ; LAB_00527127
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00527098
    SHL EAX,0x2                         ; 0052709c
    XOR EDI,EDI                         ; 0052709f
    SHL EDX,0x7                         ; 005270a1
    MOV dword ptr [ESP + 0xc],EAX       ; 005270a4
    MOV dword ptr [ESP + 0x8],EDX       ; 005270a8
    XOR ECX,ECX                         ; 005270ac
        ;   Label: LAB_005270ac
    TEST ESI,ESI                        ; 005270ae
    JLE 0x0052711c                      ; 005270b0
        ;   XREF to: 0052711c (CONDITIONAL_JUMP)  ; LAB_0052711c
    MOV EDX,dword ptr [ESP + 0x8]       ; 005270b2
    MOV EBX,dword ptr [ESP + 0x24]      ; 005270b6
    MOV EAX,dword ptr [ESP + 0x20]      ; 005270ba
    ADD EDX,EDI                         ; 005270be
    ADD EAX,EDI                         ; 005270c0
    ADD EDX,EBX                         ; 005270c2
    FLD float ptr [EAX]                 ; 005270c4
        ;   Label: LAB_005270c4
    MOV EBX,dword ptr [EDX]             ; 005270c6
    FLD ST0                             ; 005270c8
    FMUL double ptr [EBX*0x8 + 0x620490] ; 005270ca | DAT_00620490
    FLD float ptr [EAX + 0x80]          ; 005270d1
    FXCH                                ; 005270d7
    FSTP ST2                            ; 005270d9
    FXCH                                ; 005270db
    FSTP float ptr [EAX]                ; 005270dd
    MOV EBX,dword ptr [EDX]             ; 005270df
    FLD ST0                             ; 005270e1
    FMUL double ptr [EBX*0x8 + 0x620490] ; 005270e3 | DAT_00620490
    FLD float ptr [EAX + 0x100]         ; 005270ea
    FXCH                                ; 005270f0
    FSTP ST2                            ; 005270f2
    FXCH                                ; 005270f4
    FSTP float ptr [EAX + 0x80]         ; 005270f6
    MOV EBX,dword ptr [EDX]             ; 005270fc
    FLD ST0                             ; 005270fe
    FMUL double ptr [EBX*0x8 + 0x620490] ; 00527100 | DAT_00620490
    ADD EDX,0x180                       ; 00527107
    ADD EAX,0x180                       ; 0052710d
    INC ECX                             ; 00527112
    FSTP ST1                            ; 00527113
    FSTP float ptr [EAX + -0x80]        ; 00527115
    CMP ECX,ESI                         ; 00527118
    JL 0x005270c4                       ; 0052711a
        ;   XREF to: 005270c4 (CONDITIONAL_JUMP)  ; LAB_005270c4
    MOV EDX,dword ptr [ESP + 0xc]       ; 0052711c
        ;   Label: LAB_0052711c
    ADD EDI,0x4                         ; 00527120
    CMP EDI,EDX                         ; 00527123
    JL 0x005270ac                       ; 00527125
        ;   XREF to: 005270ac (CONDITIONAL_JUMP)  ; LAB_005270ac
    ADD ESP,0x10                        ; 00527127
        ;   Label: LAB_00527127
    POP EDI                             ; 0052712a
    POP ESI                             ; 0052712b
    POP EBX                             ; 0052712c
    RET                                 ; 0052712d

