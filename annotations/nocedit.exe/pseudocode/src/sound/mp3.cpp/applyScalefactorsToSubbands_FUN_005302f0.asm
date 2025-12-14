; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_mp3.cpp_applyScalefactorsToSubbands_FUN_005302f0(float * spectral_samples, int * scalefactor_band_indices, SMpegFrame * frame_info, int channel_or_granule_index)
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
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00534d40 at 0053547d
;
; Referenced Globals:
;   double[64] g_MpegScalefactorTable
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005302f0
        ;   Label: sound_mp3.cpp_applyScalefactorsToSubbands_FUN_005302f0
    PUSH ESI                            ; 005302f1
    PUSH EDI                            ; 005302f2
    SUB ESP,0x10                        ; 005302f3
    MOV EAX,dword ptr [ESP + 0x28]      ; 005302f6
    MOV ESI,dword ptr [EAX + 0x10]      ; 005302fa
    MOV EAX,dword ptr [EAX + 0x18]      ; 005302fd
    TEST EAX,EAX                        ; 00530300
    JLE 0x00530397                      ; 00530302
        ;   XREF to: 00530397 (CONDITIONAL_JUMP)  ; LAB_00530397
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00530308
    SHL EAX,0x2                         ; 0053030c
    XOR EDI,EDI                         ; 0053030f
    SHL EDX,0x7                         ; 00530311
    MOV dword ptr [ESP + 0xc],EAX       ; 00530314
    MOV dword ptr [ESP + 0x8],EDX       ; 00530318
    XOR ECX,ECX                         ; 0053031c
        ;   Label: LAB_0053031c
    TEST ESI,ESI                        ; 0053031e
    JLE 0x0053038c                      ; 00530320
        ;   XREF to: 0053038c (CONDITIONAL_JUMP)  ; LAB_0053038c
    MOV EDX,dword ptr [ESP + 0x8]       ; 00530322
    MOV EBX,dword ptr [ESP + 0x24]      ; 00530326
    MOV EAX,dword ptr [ESP + 0x20]      ; 0053032a
    ADD EDX,EDI                         ; 0053032e
    ADD EAX,EDI                         ; 00530330
    ADD EDX,EBX                         ; 00530332
    FLD float ptr [EAX]                 ; 00530334
        ;   Label: LAB_00530334
    MOV EBX,dword ptr [EDX]             ; 00530336
    FLD ST0                             ; 00530338
    FMUL double ptr [EBX*0x8 + 0x67e3c0] ; 0053033a | g_MpegScalefactorTable
    FLD float ptr [EAX + 0x80]          ; 00530341
    FXCH                                ; 00530347
    FSTP ST2                            ; 00530349
    FXCH                                ; 0053034b
    FSTP float ptr [EAX]                ; 0053034d
    MOV EBX,dword ptr [EDX]             ; 0053034f
    FLD ST0                             ; 00530351
    FMUL double ptr [EBX*0x8 + 0x67e3c0] ; 00530353 | g_MpegScalefactorTable
    FLD float ptr [EAX + 0x100]         ; 0053035a
    FXCH                                ; 00530360
    FSTP ST2                            ; 00530362
    FXCH                                ; 00530364
    FSTP float ptr [EAX + 0x80]         ; 00530366
    MOV EBX,dword ptr [EDX]             ; 0053036c
    FLD ST0                             ; 0053036e
    FMUL double ptr [EBX*0x8 + 0x67e3c0] ; 00530370 | g_MpegScalefactorTable
    ADD EDX,0x180                       ; 00530377
    ADD EAX,0x180                       ; 0053037d
    INC ECX                             ; 00530382
    FSTP ST1                            ; 00530383
    FSTP float ptr [EAX + -0x80]        ; 00530385
    CMP ECX,ESI                         ; 00530388
    JL 0x00530334                       ; 0053038a
        ;   XREF to: 00530334 (CONDITIONAL_JUMP)  ; LAB_00530334
    MOV EDX,dword ptr [ESP + 0xc]       ; 0053038c
        ;   Label: LAB_0053038c
    ADD EDI,0x4                         ; 00530390
    CMP EDI,EDX                         ; 00530393
    JL 0x0053031c                       ; 00530395
        ;   XREF to: 0053031c (CONDITIONAL_JUMP)  ; LAB_0053031c
    ADD ESP,0x10                        ; 00530397
        ;   Label: LAB_00530397
    POP EDI                             ; 0053039a
    POP ESI                             ; 0053039b
    POP EBX                             ; 0053039c
    RET                                 ; 0053039d

