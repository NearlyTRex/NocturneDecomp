; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_applyScalefactorsToSubbands_FUN_00505eb0(float *spectral_samples,int *scalefactor_band_indices,SMpegFrame *frame_info,int channel_or_granule_index)
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
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0050a280 at 0050a6a1
;
; Referenced Globals:
;   undefined4 DAT_00619030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505eb0
        ;   Label: sound_mp3.cpp_applyScalefactorsToSubbands_FUN_00505eb0
    PUSH ESI                            ; 00505eb1
    PUSH EDI                            ; 00505eb2
    SUB ESP,0x10                        ; 00505eb3
    MOV EAX,dword ptr [ESP + 0x28]      ; 00505eb6
    MOV ESI,dword ptr [EAX + 0x10]      ; 00505eba
    MOV EAX,dword ptr [EAX + 0x18]      ; 00505ebd
    TEST EAX,EAX                        ; 00505ec0
    JLE 0x00505f57                      ; 00505ec2
        ;   XREF to: 00505f57 (CONDITIONAL_JUMP)  ; LAB_00505f57
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00505ec8
    SHL EAX,0x2                         ; 00505ecc
    XOR EDI,EDI                         ; 00505ecf
    SHL EDX,0x7                         ; 00505ed1
    MOV dword ptr [ESP + 0xc],EAX       ; 00505ed4
    MOV dword ptr [ESP + 0x8],EDX       ; 00505ed8
    XOR ECX,ECX                         ; 00505edc
        ;   Label: LAB_00505edc
    TEST ESI,ESI                        ; 00505ede
    JLE 0x00505f4c                      ; 00505ee0
        ;   XREF to: 00505f4c (CONDITIONAL_JUMP)  ; LAB_00505f4c
    MOV EDX,dword ptr [ESP + 0x8]       ; 00505ee2
    MOV EBX,dword ptr [ESP + 0x24]      ; 00505ee6
    MOV EAX,dword ptr [ESP + 0x20]      ; 00505eea
    ADD EDX,EDI                         ; 00505eee
    ADD EAX,EDI                         ; 00505ef0
    ADD EDX,EBX                         ; 00505ef2
    FLD float ptr [EAX]                 ; 00505ef4
        ;   Label: LAB_00505ef4
    MOV EBX,dword ptr [EDX]             ; 00505ef6
    FLD ST0                             ; 00505ef8
    FMUL double ptr [EBX*0x8 + 0x619030] ; 00505efa | DAT_00619030
    FLD float ptr [EAX + 0x80]          ; 00505f01
    FXCH                                ; 00505f07
    FSTP ST2                            ; 00505f09
    FXCH                                ; 00505f0b
    FSTP float ptr [EAX]                ; 00505f0d
    MOV EBX,dword ptr [EDX]             ; 00505f0f
    FLD ST0                             ; 00505f11
    FMUL double ptr [EBX*0x8 + 0x619030] ; 00505f13 | DAT_00619030
    FLD float ptr [EAX + 0x100]         ; 00505f1a
    FXCH                                ; 00505f20
    FSTP ST2                            ; 00505f22
    FXCH                                ; 00505f24
    FSTP float ptr [EAX + 0x80]         ; 00505f26
    MOV EBX,dword ptr [EDX]             ; 00505f2c
    FLD ST0                             ; 00505f2e
    FMUL double ptr [EBX*0x8 + 0x619030] ; 00505f30 | DAT_00619030
    ADD EDX,0x180                       ; 00505f37
    ADD EAX,0x180                       ; 00505f3d
    INC ECX                             ; 00505f42
    FSTP ST1                            ; 00505f43
    FSTP float ptr [EAX + -0x80]        ; 00505f45
    CMP ECX,ESI                         ; 00505f48
    JL 0x00505ef4                       ; 00505f4a
        ;   XREF to: 00505ef4 (CONDITIONAL_JUMP)  ; LAB_00505ef4
    MOV EDX,dword ptr [ESP + 0xc]       ; 00505f4c
        ;   Label: LAB_00505f4c
    ADD EDI,0x4                         ; 00505f50
    CMP EDI,EDX                         ; 00505f53
    JL 0x00505edc                       ; 00505f55
        ;   XREF to: 00505edc (CONDITIONAL_JUMP)  ; LAB_00505edc
    ADD ESP,0x10                        ; 00505f57
        ;   Label: LAB_00505f57
    POP EDI                             ; 00505f5a
    POP ESI                             ; 00505f5b
    POP EBX                             ; 00505f5c
    RET                                 ; 00505f5d

