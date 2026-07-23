; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_CSfxSlot_seek_FUN_00525a80(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x1c]:8  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_sndmain.cpp_startSfx_FUN_005265a0 at 00526757
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00593236
;   TerminatedCString s_SfxSlot_seek_no_sample_0059324b
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   FUN_004c8440
;   sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00525c70
;   sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_00525de0
;   sound_sndmain.cpp_CSfxSample_seek_FUN_00523d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00525a80
        ;   Label: sound_sndmain.cpp_CSfxSlot_seek_FUN_00525a80
    PUSH ESI                            ; 00525a81
    PUSH EDI                            ; 00525a82
    PUSH EBP                            ; 00525a83
    SUB ESP,0xc                         ; 00525a84
    MOV EBX,dword ptr [ESP + 0x20]      ; 00525a87
    CMP dword ptr [EBX + 0x74],0x0      ; 00525a8b
    JNZ 0x00525ab4                      ; 00525a8f
        ;   XREF to: 00525ab4 (CONDITIONAL_JUMP)  ; LAB_00525ab4
    MOV ECX,0x593236                    ; 00525a91 | = "..\\sound\\sndmain.cpp"
    MOV ESI,0xbf0                       ; 00525a96
    PUSH 0x59324b                       ; 00525a9b | = "SfxSlot::seek - no sample?!"
    MOV dword ptr [0x01cc4800],ECX      ; 00525aa0 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00525aa6 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00525aac
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00525ab1
    PUSH 0x0                            ; 00525ab4
        ;   Label: LAB_00525ab4
    MOV EDI,dword ptr [EBX + 0x68]      ; 00525ab6
    PUSH EDI                            ; 00525ab9
    MOV EBP,dword ptr [EBX + 0x64]      ; 00525aba
    PUSH EBP                            ; 00525abd
    MOV EAX,dword ptr [EBX + 0x60]      ; 00525abe
    PUSH EAX                            ; 00525ac1
    MOV EDX,dword ptr [EBX + 0x74]      ; 00525ac2
    PUSH EDX                            ; 00525ac5
    CALL sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00525c70 ; 00525ac6
        ;   XREF to: 00525c70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00525c70()
    MOV dword ptr [ESP + 0x14],EAX      ; 00525acb
    MOV dword ptr [ESP + 0x18],EDX      ; 00525acf
    MOV dword ptr [EBX + 0x68],0x0      ; 00525ad3
    FLD double ptr [ESP + 0x14]         ; 00525ada
    ADD ESP,0x14                        ; 00525ade
    MOV ECX,dword ptr [EBX + 0x68]      ; 00525ae1
    PUSH ECX                            ; 00525ae4
    FSTP double ptr [EBX + 0x60]        ; 00525ae5
    MOV ESI,dword ptr [EBX + 0x64]      ; 00525ae8
    PUSH ESI                            ; 00525aeb
    MOV EDI,dword ptr [EBX + 0x60]      ; 00525aec
    PUSH EDI                            ; 00525aef
    MOV EBP,dword ptr [EBX + 0x74]      ; 00525af0
    PUSH EBP                            ; 00525af3
    CALL sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_00525de0 ; 00525af4
        ;   XREF to: 00525de0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_00525de0()
    MOV dword ptr [ESP + 0x10],EAX      ; 00525af9
    MOV dword ptr [ESP + 0x14],EDX      ; 00525afd
    FLD double ptr [ESP + 0x10]         ; 00525b01
    MOV EAX,dword ptr [EBX + 0x74]      ; 00525b05
    FSTP double ptr [EBX + 0x60]        ; 00525b08
    MOV EDX,dword ptr [EAX + 0x134]     ; 00525b0b
    ADD ESP,0x10                        ; 00525b11
    TEST EDX,EDX                        ; 00525b14
    JGE 0x00525b32                      ; 00525b16
        ;   XREF to: 00525b32 (CONDITIONAL_JUMP)  ; LAB_00525b32
    MOV EAX,dword ptr [EBX + 0x60]      ; 00525b18
    MOV dword ptr [EBX + 0x118],EAX     ; 00525b1b
    MOV EAX,dword ptr [EBX + 0x64]      ; 00525b21
    MOV dword ptr [EBX + 0x11c],EAX     ; 00525b24
    ADD ESP,0xc                         ; 00525b2a
    POP EBP                             ; 00525b2d
    POP EDI                             ; 00525b2e
    POP ESI                             ; 00525b2f
    POP EBX                             ; 00525b30
    RET                                 ; 00525b31
    FLD double ptr [EBX + 0x60]         ; 00525b32
        ;   Label: LAB_00525b32
    PUSH 0x0                            ; 00525b35
    CALL crt_math.c_round_FUN_00563a30  ; 00525b37
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0xc]         ; 00525b3c
    MOV ECX,dword ptr [ESP + 0xc]       ; 00525b40
    PUSH ECX                            ; 00525b44
    PUSH EAX                            ; 00525b45
    CALL sound_sndmain.cpp_CSfxSample_seek_FUN_00523d10 ; 00525b46
        ;   XREF to: 00523d10 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_seek_FUN_00523d10()
    MOV EAX,dword ptr [EBX + 0x74]      ; 00525b4b
    ADD ESP,0xc                         ; 00525b4e
    FILD dword ptr [EAX + 0x140]        ; 00525b51
    FSTP double ptr [EBX + 0x118]       ; 00525b57
    ADD ESP,0xc                         ; 00525b5d
    POP EBP                             ; 00525b60
    POP EDI                             ; 00525b61
    POP ESI                             ; 00525b62
    POP EBX                             ; 00525b63
    RET                                 ; 00525b64

