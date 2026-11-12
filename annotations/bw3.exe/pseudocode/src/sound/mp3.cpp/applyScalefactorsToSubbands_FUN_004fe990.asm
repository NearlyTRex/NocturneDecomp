; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_applyScalefactorsToSubbands_FUN_004fe990(float *spectral_samples,int *scalefactor_band_indices,SMpegFrame *frame_info,int channel_or_granule_index)
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
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60 at 00503181
;
; Referenced Globals:
;   undefined4 DAT_00601360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fe990
        ;   Label: sound_mp3.cpp_applyScalefactorsToSubbands_FUN_004fe990
    PUSH ESI                            ; 004fe991
    PUSH EDI                            ; 004fe992
    SUB ESP,0x10                        ; 004fe993
    MOV EAX,dword ptr [ESP + 0x28]      ; 004fe996
    MOV ESI,dword ptr [EAX + 0x10]      ; 004fe99a
    MOV EAX,dword ptr [EAX + 0x18]      ; 004fe99d
    TEST EAX,EAX                        ; 004fe9a0
    JLE 0x004fea37                      ; 004fe9a2
        ;   XREF to: 004fea37 (CONDITIONAL_JUMP)  ; LAB_004fea37
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004fe9a8
    SHL EAX,0x2                         ; 004fe9ac
    XOR EDI,EDI                         ; 004fe9af
    SHL EDX,0x7                         ; 004fe9b1
    MOV dword ptr [ESP + 0xc],EAX       ; 004fe9b4
    MOV dword ptr [ESP + 0x8],EDX       ; 004fe9b8
    XOR ECX,ECX                         ; 004fe9bc
        ;   Label: LAB_004fe9bc
    TEST ESI,ESI                        ; 004fe9be
    JLE 0x004fea2c                      ; 004fe9c0
        ;   XREF to: 004fea2c (CONDITIONAL_JUMP)  ; LAB_004fea2c
    MOV EDX,dword ptr [ESP + 0x8]       ; 004fe9c2
    MOV EBX,dword ptr [ESP + 0x24]      ; 004fe9c6
    MOV EAX,dword ptr [ESP + 0x20]      ; 004fe9ca
    ADD EDX,EDI                         ; 004fe9ce
    ADD EAX,EDI                         ; 004fe9d0
    ADD EDX,EBX                         ; 004fe9d2
    FLD float ptr [EAX]                 ; 004fe9d4
        ;   Label: LAB_004fe9d4
    MOV EBX,dword ptr [EDX]             ; 004fe9d6
    FLD ST0                             ; 004fe9d8
    FMUL double ptr [EBX*0x8 + 0x601360] ; 004fe9da | DAT_00601360
    FLD float ptr [EAX + 0x80]          ; 004fe9e1
    FXCH                                ; 004fe9e7
    FSTP ST2                            ; 004fe9e9
    FXCH                                ; 004fe9eb
    FSTP float ptr [EAX]                ; 004fe9ed
    MOV EBX,dword ptr [EDX]             ; 004fe9ef
    FLD ST0                             ; 004fe9f1
    FMUL double ptr [EBX*0x8 + 0x601360] ; 004fe9f3 | DAT_00601360
    FLD float ptr [EAX + 0x100]         ; 004fe9fa
    FXCH                                ; 004fea00
    FSTP ST2                            ; 004fea02
    FXCH                                ; 004fea04
    FSTP float ptr [EAX + 0x80]         ; 004fea06
    MOV EBX,dword ptr [EDX]             ; 004fea0c
    FLD ST0                             ; 004fea0e
    FMUL double ptr [EBX*0x8 + 0x601360] ; 004fea10 | DAT_00601360
    ADD EDX,0x180                       ; 004fea17
    ADD EAX,0x180                       ; 004fea1d
    INC ECX                             ; 004fea22
    FSTP ST1                            ; 004fea23
    FSTP float ptr [EAX + -0x80]        ; 004fea25
    CMP ECX,ESI                         ; 004fea28
    JL 0x004fe9d4                       ; 004fea2a
        ;   XREF to: 004fe9d4 (CONDITIONAL_JUMP)  ; LAB_004fe9d4
    MOV EDX,dword ptr [ESP + 0xc]       ; 004fea2c
        ;   Label: LAB_004fea2c
    ADD EDI,0x4                         ; 004fea30
    CMP EDI,EDX                         ; 004fea33
    JL 0x004fe9bc                       ; 004fea35
        ;   XREF to: 004fe9bc (CONDITIONAL_JUMP)  ; LAB_004fe9bc
    ADD ESP,0x10                        ; 004fea37
        ;   Label: LAB_004fea37
    POP EDI                             ; 004fea3a
    POP ESI                             ; 004fea3b
    POP EBX                             ; 004fea3c
    RET                                 ; 004fea3d

