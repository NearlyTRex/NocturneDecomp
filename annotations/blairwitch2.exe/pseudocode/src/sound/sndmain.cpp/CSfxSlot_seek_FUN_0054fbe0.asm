; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSlot_seek_FUN_0054fbe0(CSfxSlot *this_ptr)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x1c]:8  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_sndmain.cpp_FUN_005506b0 at 00550830
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e89de
;   TerminatedCString s_SfxSlot_seek_no_sample_005e89f3
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_math.c_round_FUN_005b7ff0
;   sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_0054fdc0
;   sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_0054ff30
;   sound_sndmain.cpp_CSfxSample_seek_FUN_0054dc50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054fbe0
        ;   Label: sound_sndmain.cpp_CSfxSlot_seek_FUN_0054fbe0
    PUSH ESI                            ; 0054fbe1
    PUSH EDI                            ; 0054fbe2
    PUSH EBP                            ; 0054fbe3
    SUB ESP,0xc                         ; 0054fbe4
    MOV EBX,dword ptr [ESP + 0x20]      ; 0054fbe7
    CMP dword ptr [EBX + 0x68],0x0      ; 0054fbeb
    JNZ 0x0054fc14                      ; 0054fbef
        ;   XREF to: 0054fc14 (CONDITIONAL_JUMP)  ; LAB_0054fc14
    MOV ECX,0x5e89de                    ; 0054fbf1 | = "..\\sound\\sndmain.cpp"
    MOV ESI,0xd75                       ; 0054fbf6
    PUSH 0x5e89f3                       ; 0054fbfb | = "SfxSlot::seek - no sample?!"
    MOV dword ptr [0x01d046a0],ECX      ; 0054fc00 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0054fc06 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054fc0c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0054fc11
    PUSH 0x0                            ; 0054fc14
        ;   Label: LAB_0054fc14
    MOV EDI,dword ptr [EBX + 0x58]      ; 0054fc16
    PUSH EDI                            ; 0054fc19
    MOV EBP,dword ptr [EBX + 0x54]      ; 0054fc1a
    PUSH EBP                            ; 0054fc1d
    MOV EAX,dword ptr [EBX + 0x50]      ; 0054fc1e
    PUSH EAX                            ; 0054fc21
    MOV EDX,dword ptr [EBX + 0x68]      ; 0054fc22
    PUSH EDX                            ; 0054fc25
    CALL sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_0054fdc0 ; 0054fc26
        ;   XREF to: 0054fdc0 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_0054fdc0(CSampleInfo * this_ptr, double position, uint input_type, uint output_type)
    MOV dword ptr [ESP + 0x14],EAX      ; 0054fc2b
    MOV dword ptr [ESP + 0x18],EDX      ; 0054fc2f
    MOV dword ptr [EBX + 0x58],0x0      ; 0054fc33
    FLD double ptr [ESP + 0x14]         ; 0054fc3a
    ADD ESP,0x14                        ; 0054fc3e
    MOV ECX,dword ptr [EBX + 0x58]      ; 0054fc41
    PUSH ECX                            ; 0054fc44
    FSTP double ptr [EBX + 0x50]        ; 0054fc45
    MOV ESI,dword ptr [EBX + 0x54]      ; 0054fc48
    PUSH ESI                            ; 0054fc4b
    MOV EDI,dword ptr [EBX + 0x50]      ; 0054fc4c
    PUSH EDI                            ; 0054fc4f
    MOV EBP,dword ptr [EBX + 0x68]      ; 0054fc50
    PUSH EBP                            ; 0054fc53
    CALL sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_0054ff30 ; 0054fc54
        ;   XREF to: 0054ff30 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_0054ff30(CSfxSample * this_ptr, double position, uint input_type)
    MOV dword ptr [ESP + 0x10],EAX      ; 0054fc59
    MOV dword ptr [ESP + 0x14],EDX      ; 0054fc5d
    FLD double ptr [ESP + 0x10]         ; 0054fc61
    MOV EAX,dword ptr [EBX + 0x68]      ; 0054fc65
    FSTP double ptr [EBX + 0x50]        ; 0054fc68
    MOV EDX,dword ptr [EAX + 0x160]     ; 0054fc6b
    ADD ESP,0x10                        ; 0054fc71
    TEST EDX,EDX                        ; 0054fc74
    JGE 0x0054fc92                      ; 0054fc76
        ;   XREF to: 0054fc92 (CONDITIONAL_JUMP)  ; LAB_0054fc92
    MOV EAX,dword ptr [EBX + 0x50]      ; 0054fc78
    MOV dword ptr [EBX + 0x10c],EAX     ; 0054fc7b
    MOV EAX,dword ptr [EBX + 0x54]      ; 0054fc81
    MOV dword ptr [EBX + 0x110],EAX     ; 0054fc84
    ADD ESP,0xc                         ; 0054fc8a
    POP EBP                             ; 0054fc8d
    POP EDI                             ; 0054fc8e
    POP ESI                             ; 0054fc8f
    POP EBX                             ; 0054fc90
    RET                                 ; 0054fc91
    FLD double ptr [EBX + 0x50]         ; 0054fc92
        ;   Label: LAB_0054fc92
    PUSH 0x0                            ; 0054fc95
    CALL crt_math.c_round_FUN_005b7ff0  ; 0054fc97
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0xc]         ; 0054fc9c
    MOV ECX,dword ptr [ESP + 0xc]       ; 0054fca0
    PUSH ECX                            ; 0054fca4
    PUSH EAX                            ; 0054fca5
    CALL sound_sndmain.cpp_CSfxSample_seek_FUN_0054dc50 ; 0054fca6
        ;   XREF to: 0054dc50 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_seek_FUN_0054dc50(CSfxSample * this_ptr, int playback_position, int dest_buffer_offset)
    MOV EAX,dword ptr [EBX + 0x68]      ; 0054fcab
    ADD ESP,0xc                         ; 0054fcae
    FILD dword ptr [EAX + 0x170]        ; 0054fcb1
    FSTP double ptr [EBX + 0x10c]       ; 0054fcb7
    ADD ESP,0xc                         ; 0054fcbd
    POP EBP                             ; 0054fcc0
    POP EDI                             ; 0054fcc1
    POP ESI                             ; 0054fcc2
    POP EBX                             ; 0054fcc3
    RET                                 ; 0054fcc4

