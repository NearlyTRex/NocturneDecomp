; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_00545100(int param_1)
;
;
; XREF[1]:
;   core_shadow.cpp_FUN_005459b0 at 00545b5d
;
; Referenced Globals:
;   TerminatedCString s_shb_die_wav_005d1354
;
; Called Functions:
;   sound_sndmain.cpp_isSfxPlaying_FUN_00556700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545100
        ;   Label: core_shadow.cpp_FUN_00545100
    MOV EBX,dword ptr [ESP + 0x8]       ; 00545101
    MOV EDX,dword ptr [EBX + 0xd078]    ; 00545105
    PUSH EDX                            ; 0054510b
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00556700 ; 0054510c
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00545111
    TEST EAX,EAX                        ; 00545114
    JZ 0x0054511a                       ; 00545116
        ;   XREF to: 0054511a (CONDITIONAL_JUMP)  ; LAB_0054511a
    POP EBX                             ; 00545118
    RET                                 ; 00545119
    PUSH 0x5d1354                       ; 0054511a | = "shb_die??.wav"
        ;   Label: LAB_0054511a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0054511f
    PUSH EBX                            ; 00545125
    CALL dword ptr [EAX + 0x2c]         ; 00545126
    MOV dword ptr [EBX + 0xd07c],0x41000000 ; 00545129
    ADD ESP,0x8                         ; 00545133
    MOV dword ptr [EBX + 0xd078],EAX    ; 00545136
    POP EBX                             ; 0054513c
    RET                                 ; 0054513d

