; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSample_seek_FUN_005702c0(CSfxSample *this_ptr,int playback_position,int dest_buffer_offset)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   playback_position
; int              Stack[0xc]:4   dest_buffer_offset
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x1c]:8  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   sound_sndmain.cpp_CSfxSlot_seek_FUN_00572250 at 00572316
;   sound_sndmain.cpp_FUN_00570460 at 005706c0
;   sound_sndmain.cpp_startSfx_FUN_00572d20 at 005732d2
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f33bf
;   TerminatedCString s_SfxSample_seek_s_isn_t_s_005f33d4
;   TerminatedCString s_sound_sndmain_cpp_005f33fb
;   TerminatedCString s_SfxSample_seek_invalid_d_005f3410
;   TerminatedCString s_sound_sndmain_cpp_005f3432
;   TerminatedCString s_Error_seeking_s_to_d_005f3447
;   TerminatedCString s_sound_sndmain_cpp_005f345e
;   TerminatedCString s_SfxSample_seek_no_MP3_an_005f3473
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_math.c_round_FUN_005c03a0
;   sound_mp3.cpp_CMP3Decoder_seek_FUN_0052b2b0
;   sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_005725a0
;   sound_sndmain.cpp_FUN_00572400
;   support_trstream.cpp_CInStreamFile_isOpen_FUN_005a0d70
;   support_trstream.cpp_CInStreamFile_seek_FUN_005a0d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005702c0
        ;   Label: sound_sndmain.cpp_CSfxSample_seek_FUN_005702c0
    PUSH ESI                            ; 005702c1
    PUSH EDI                            ; 005702c2
    PUSH EBP                            ; 005702c3
    SUB ESP,0xc                         ; 005702c4
    MOV EBX,dword ptr [ESP + 0x20]      ; 005702c7
    MOV ESI,dword ptr [ESP + 0x28]      ; 005702cb
    CMP dword ptr [EBX + 0x160],0x0     ; 005702cf
    JL 0x0057037d                       ; 005702d6
        ;   XREF to: 0057037d (CONDITIONAL_JUMP)  ; LAB_0057037d
    MOV EAX,dword ptr [ESP + 0x24]      ; 005702dc
        ;   Label: LAB_005702dc
    MOV dword ptr [ESP + 0x8],EAX       ; 005702e0
    PUSH 0x0                            ; 005702e4
    FILD dword ptr [ESP + 0xc]          ; 005702e6
    SUB ESP,0x8                         ; 005702ea
    FSTP double ptr [ESP]               ; 005702ed
    PUSH EBX                            ; 005702f0
    CALL sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_005725a0 ; 005702f1
        ;   XREF to: 005725a0 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_005725a0(CSfxSample * this_ptr, double position, uint input_type)
    MOV dword ptr [ESP + 0x10],EAX      ; 005702f6
    MOV dword ptr [ESP + 0x14],EDX      ; 005702fa
    FLD double ptr [ESP + 0x10]         ; 005702fe
    CALL crt_math.c_round_FUN_005c03a0  ; 00570302
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EBX + 0x16c]       ; 00570307
    MOV EBP,dword ptr [EBX + 0x16c]     ; 0057030d
    ADD ESP,0x10                        ; 00570313
    TEST EBP,EBP                        ; 00570316
    JL 0x005703a6                       ; 00570318
        ;   XREF to: 005703a6 (CONDITIONAL_JUMP)  ; LAB_005703a6
    TEST ESI,ESI                        ; 0057031e
        ;   Label: LAB_0057031e
    JL 0x0057032a                       ; 00570320
        ;   XREF to: 0057032a (CONDITIONAL_JUMP)  ; LAB_0057032a
    CMP ESI,dword ptr [EBX + 0x164]     ; 00570322
    JL 0x0057034d                       ; 00570328
        ;   XREF to: 0057034d (CONDITIONAL_JUMP)  ; LAB_0057034d
    MOV EDX,0x5f33fb                    ; 0057032a | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0057032a
    MOV ECX,0x8e9                       ; 0057032f
    PUSH 0x5f3410                       ; 00570334 | = "SfxSample::seek - invalid destPtr"
    MOV dword ptr [0x01d1d400],EDX      ; 00570339 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0057033f | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00570345
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0057034a
    MOV dword ptr [EBX + 0x170],ESI     ; 0057034d
        ;   Label: LAB_0057034d
    MOV ESI,dword ptr [EBX + 0x174]     ; 00570353
    TEST ESI,ESI                        ; 00570359
    JZ 0x005703e8                       ; 0057035b
        ;   XREF to: 005703e8 (CONDITIONAL_JUMP)  ; LAB_005703e8
    MOV ECX,dword ptr [EBX + 0x16c]     ; 00570361
    PUSH ECX                            ; 00570367
    PUSH ESI                            ; 00570368
    CALL sound_mp3.cpp_CMP3Decoder_seek_FUN_0052b2b0 ; 00570369
        ;   XREF to: 0052b2b0 (UNCONDITIONAL_CALL)  ; int sound_mp3.cpp_CMP3Decoder_seek_FUN_0052b2b0(CMP3Decoder * this_ptr, int sample_offset)
    ADD ESP,0x8                         ; 0057036e
    TEST EAX,EAX                        ; 00570371
    JZ 0x005703b5                       ; 00570373
        ;   XREF to: 005703b5 (CONDITIONAL_JUMP)  ; LAB_005703b5
    ADD ESP,0xc                         ; 00570375
    POP EBP                             ; 00570378
    POP EDI                             ; 00570379
    POP ESI                             ; 0057037a
    POP EBX                             ; 0057037b
    RET                                 ; 0057037c
    PUSH EBX                            ; 0057037d
        ;   Label: LAB_0057037d
    MOV ECX,0x5f33bf                    ; 0057037e | = "..\\sound\\sndmain.cpp"
    MOV EDI,0x8de                       ; 00570383
    PUSH 0x5f33d4                       ; 00570388 | = "SfxSample::seek - '%s' isn't streamed!"
    MOV dword ptr [0x01d1d400],ECX      ; 0057038d | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00570393 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00570399
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0057039e
    JMP 0x005702dc                      ; 005703a1
        ;   XREF to: 005702dc (UNCONDITIONAL_JUMP)  ; LAB_005702dc
    MOV dword ptr [EBX + 0x16c],0x0     ; 005703a6
        ;   Label: LAB_005703a6
    JMP 0x0057031e                      ; 005703b0
        ;   XREF to: 0057031e (UNCONDITIONAL_JUMP)  ; LAB_0057031e
    MOV EAX,dword ptr [EBX + 0x16c]     ; 005703b5
        ;   Label: LAB_005703b5
    PUSH EAX                            ; 005703bb
    PUSH EBX                            ; 005703bc
    MOV EDI,0x5f3432                    ; 005703bd | = "..\\sound\\sndmain.cpp"
    MOV EBP,0x8f2                       ; 005703c2
    PUSH 0x5f3447                       ; 005703c7 | = "Error seeking %s to %d"
    MOV dword ptr [0x01d1d400],EDI      ; 005703cc | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 005703d2 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005703d8
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 005703dd
    ADD ESP,0xc                         ; 005703e0
    POP EBP                             ; 005703e3
    POP EDI                             ; 005703e4
    POP ESI                             ; 005703e5
    POP EBX                             ; 005703e6
    RET                                 ; 005703e7
    LEA ESI,[EBX + 0x17c]               ; 005703e8
        ;   Label: LAB_005703e8
    PUSH ESI                            ; 005703ee
    CALL support_trstream.cpp_CInStreamFile_isOpen_FUN_005a0d70 ; 005703ef
        ;   XREF to: 005a0d70 (UNCONDITIONAL_CALL)  ; bool support_trstream.cpp_CInStreamFile_isOpen_FUN_005a0d70(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 005703f4
    TEST EAX,EAX                        ; 005703f7
    JZ 0x00570427                       ; 005703f9
        ;   XREF to: 00570427 (CONDITIONAL_JUMP)  ; LAB_00570427
    PUSH 0x0                            ; 005703fb
    MOV EAX,dword ptr [EBX + 0x16c]     ; 005703fd
    PUSH EAX                            ; 00570403
    PUSH EBX                            ; 00570404
    CALL sound_sndmain.cpp_FUN_00572400 ; 00570405
        ;   XREF to: 00572400 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00572400()
    MOV EDX,dword ptr [EBX + 0x178]     ; 0057040a
    ADD ESP,0x8                         ; 00570410
    ADD EAX,EDX                         ; 00570413
    PUSH EAX                            ; 00570415
    PUSH ESI                            ; 00570416
    CALL support_trstream.cpp_CInStreamFile_seek_FUN_005a0d00 ; 00570417
        ;   XREF to: 005a0d00 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_seek_FUN_005a0d00(CInStreamFile * this_ptr, int offset, int origin)
    ADD ESP,0xc                         ; 0057041c
    ADD ESP,0xc                         ; 0057041f
    POP EBP                             ; 00570422
    POP EDI                             ; 00570423
    POP ESI                             ; 00570424
    POP EBX                             ; 00570425
    RET                                 ; 00570426
    PUSH EBX                            ; 00570427
        ;   Label: LAB_00570427
    MOV EDI,0x5f345e                    ; 00570428 | = "..\\sound\\sndmain.cpp"
    MOV EBP,0x8fd                       ; 0057042d
    PUSH 0x5f3473                       ; 00570432 | = "SfxSample::seek - no MP3 and no wavFi..."
    MOV dword ptr [0x01d1d400],EDI      ; 00570437 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 0057043d | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00570443
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00570448
    ADD ESP,0xc                         ; 0057044b
    POP EBP                             ; 0057044e
    POP EDI                             ; 0057044f
    POP ESI                             ; 00570450
    POP EBX                             ; 00570451
    RET                                 ; 00570452

