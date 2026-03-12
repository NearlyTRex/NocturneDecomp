; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSlot_seek_FUN_005a8390(CSfxSlot *this_ptr)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   sound_sndmain.cpp_startSfx_FUN_005a8e90 at 005a9042
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00650657
;   TerminatedCString s_SfxSlot_seek_no_sample_0065066c
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;   sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
;   sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_005a86f0
;   sound_sndmain.cpp_CSfxSample_seek_FUN_005a65a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8390
        ;   Label: sound_sndmain.cpp_CSfxSlot_seek_FUN_005a8390
    PUSH ESI                            ; 005a8391
    PUSH EDI                            ; 005a8392
    PUSH EBP                            ; 005a8393
    SUB ESP,0xc                         ; 005a8394
    MOV EBX,dword ptr [ESP + 0x20]      ; 005a8397
    CMP dword ptr [EBX + 0x78],0x0      ; 005a839b
    JNZ 0x005a83c4                      ; 005a839f
        ;   XREF to: 005a83c4 (CONDITIONAL_JUMP)  ; LAB_005a83c4
    MOV ECX,0x650657                    ; 005a83a1 | = "..\\sound\\sndmain.cpp"
    MOV ESI,0xbfd                       ; 005a83a6
    PUSH 0x65066c                       ; 005a83ab | = "SfxSlot::seek - no sample?!"
    MOV dword ptr [0x02f0ca48],ECX      ; 005a83b0 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005a83b6 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a83bc
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a83c1
    PUSH 0x0                            ; 005a83c4
        ;   Label: LAB_005a83c4
    MOV EDI,dword ptr [EBX + 0x68]      ; 005a83c6
    PUSH EDI                            ; 005a83c9
    MOV EBP,dword ptr [EBX + 0x64]      ; 005a83ca
    PUSH EBP                            ; 005a83cd
    MOV EAX,dword ptr [EBX + 0x60]      ; 005a83ce
    PUSH EAX                            ; 005a83d1
    MOV EDX,dword ptr [EBX + 0x78]      ; 005a83d2
    PUSH EDX                            ; 005a83d5
    CALL sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580 ; 005a83d6
        ;   XREF to: 005a8580 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580(CSampleInfo * this_ptr, double position, uint input_type, uint output_type)
    MOV dword ptr [ESP + 0x14],EAX      ; 005a83db
    MOV dword ptr [ESP + 0x18],EDX      ; 005a83df
    MOV dword ptr [EBX + 0x68],0x0      ; 005a83e3
    FLD double ptr [ESP + 0x14]         ; 005a83ea
    ADD ESP,0x14                        ; 005a83ee
    MOV ECX,dword ptr [EBX + 0x68]      ; 005a83f1
    PUSH ECX                            ; 005a83f4
    FSTP double ptr [EBX + 0x60]        ; 005a83f5
    MOV ESI,dword ptr [EBX + 0x64]      ; 005a83f8
    PUSH ESI                            ; 005a83fb
    MOV EDI,dword ptr [EBX + 0x60]      ; 005a83fc
    PUSH EDI                            ; 005a83ff
    MOV EBP,dword ptr [EBX + 0x78]      ; 005a8400
    PUSH EBP                            ; 005a8403
    CALL sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_005a86f0 ; 005a8404
        ;   XREF to: 005a86f0 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_005a86f0(CSfxSample * this_ptr, double position, uint input_type)
    MOV dword ptr [ESP + 0x10],EAX      ; 005a8409
    MOV dword ptr [ESP + 0x14],EDX      ; 005a840d
    FLD double ptr [ESP + 0x10]         ; 005a8411
    MOV EAX,dword ptr [EBX + 0x78]      ; 005a8415
    FSTP double ptr [EBX + 0x60]        ; 005a8418
    MOV EDX,dword ptr [EAX + 0x15c]     ; 005a841b
    ADD ESP,0x10                        ; 005a8421
    TEST EDX,EDX                        ; 005a8424
    JGE 0x005a8442                      ; 005a8426
        ;   XREF to: 005a8442 (CONDITIONAL_JUMP)  ; LAB_005a8442
    MOV EAX,dword ptr [EBX + 0x60]      ; 005a8428
    MOV dword ptr [EBX + 0x11c],EAX     ; 005a842b
    MOV EAX,dword ptr [EBX + 0x64]      ; 005a8431
    MOV dword ptr [EBX + 0x120],EAX     ; 005a8434
    ADD ESP,0xc                         ; 005a843a
    POP EBP                             ; 005a843d
    POP EDI                             ; 005a843e
    POP ESI                             ; 005a843f
    POP EBX                             ; 005a8440
    RET                                 ; 005a8441
    FLD double ptr [EBX + 0x60]         ; 005a8442
        ;   Label: LAB_005a8442
    PUSH 0x0                            ; 005a8445
    CALL crt_math.c_round_FUN_005fe6b0  ; 005a8447
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0xc]         ; 005a844c
    MOV ECX,dword ptr [ESP + 0xc]       ; 005a8450
    PUSH ECX                            ; 005a8454
    PUSH EAX                            ; 005a8455
    CALL sound_sndmain.cpp_CSfxSample_seek_FUN_005a65a0 ; 005a8456
        ;   XREF to: 005a65a0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_seek_FUN_005a65a0(CSfxSample * this_ptr, int playback_position, int dest_buffer_offset)
    MOV EAX,dword ptr [EBX + 0x78]      ; 005a845b
    ADD ESP,0xc                         ; 005a845e
    FILD dword ptr [EAX + 0x168]        ; 005a8461
    FSTP double ptr [EBX + 0x11c]       ; 005a8467
    ADD ESP,0xc                         ; 005a846d
    POP EBP                             ; 005a8470
    POP EDI                             ; 005a8471
    POP ESI                             ; 005a8472
    POP EBX                             ; 005a8473
    RET                                 ; 005a8474

