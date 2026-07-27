; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_snddx_cpp_CDirectSoundDevice_poll_FUN_0052a970(void)
;
; Local Variables:
; undefined        Stack[-0xc]:1  local_c
; undefined        Stack[-0x8]:1  local_8
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005940b7
;   TerminatedCString s_Get_position_of_secondar_0059422c
;   undefined4 DAT_02dc921c
;   undefined4 DAT_02dc9220
;   undefined4 DAT_02dc9238
;   undefined4 DAT_02dc923c
;   undefined4 DAT_02dc9240
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   sound_snddx.cpp_fillStreamBuffer_FUN_00529c10
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90
;   sound_sndmain.cpp_FUN_00529980
;   sound_sndmain.cpp_pollAllSfxSlots_FUN_00529810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052a970
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_poll_FUN_0052a970
    SUB ESP,0x198                       ; 0052a971
    CMP dword ptr [0x02dc9220],0x0      ; 0052a977 | DAT_02dc9220
    JNZ 0x0052a994                      ; 0052a97e
        ;   XREF to: 0052a994 (CONDITIONAL_JUMP)  ; LAB_0052a994
    MOV ECX,dword ptr [0x02dc921c]      ; 0052a980 | DAT_02dc921c
    TEST ECX,ECX                        ; 0052a986
    JNZ 0x0052a9a0                      ; 0052a988
        ;   XREF to: 0052a9a0 (CONDITIONAL_JUMP)  ; LAB_0052a9a0
    XOR EAX,EAX                         ; 0052a98a
    ADD ESP,0x198                       ; 0052a98c
        ;   Label: LAB_0052a98c
    POP EBX                             ; 0052a992
    RET                                 ; 0052a993
    CALL sound_sndmain.cpp_pollAllSfxSlots_FUN_00529810 ; 0052a994
        ;   XREF to: 00529810 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_pollAllSfxSlots_FUN_00529810()
        ;   Label: LAB_0052a994
    MOV EAX,0x1                         ; 0052a999
    JMP 0x0052a98c                      ; 0052a99e
        ;   XREF to: 0052a98c (UNCONDITIONAL_JUMP)  ; LAB_0052a98c
    LEA EBX,[ESP + 0x194]               ; 0052a9a0
        ;   Label: LAB_0052a9a0
    PUSH EBX                            ; 0052a9a7
    LEA EBX,[ESP + 0x194]               ; 0052a9a8
    PUSH EBX                            ; 0052a9af
    MOV EDX,dword ptr [ECX]             ; 0052a9b0
    PUSH ECX                            ; 0052a9b2
    CALL dword ptr [EDX + 0x10]         ; 0052a9b3
    TEST EAX,EAX                        ; 0052a9b6
    JNZ 0x0052a9f5                      ; 0052a9b8
        ;   XREF to: 0052a9f5 (CONDITIONAL_JUMP)  ; LAB_0052a9f5
    PUSH ESI                            ; 0052a9ba
    MOV EAX,dword ptr [ESP + 0x194]     ; 0052a9bb
    MOV EBX,dword ptr [0x02dc9238]      ; 0052a9c2 | DAT_02dc9238
    XOR EDX,EDX                         ; 0052a9c8
    DIV EBX                             ; 0052a9ca
    MOV ESI,dword ptr [0x02dc923c]      ; 0052a9cc | DAT_02dc923c
    MOV EBX,EAX                         ; 0052a9d2
    CMP EAX,ESI                         ; 0052a9d4
    JL 0x0052a9db                       ; 0052a9d6
        ;   XREF to: 0052a9db (CONDITIONAL_JUMP)  ; LAB_0052a9db
    LEA EBX,[ESI + -0x1]                ; 0052a9d8
    TEST EBX,EBX                        ; 0052a9db
        ;   Label: LAB_0052a9db
    JL 0x0052aa2b                       ; 0052a9dd
        ;   XREF to: 0052aa2b (CONDITIONAL_JUMP)  ; LAB_0052aa2b
    POP ESI                             ; 0052a9df
        ;   Label: LAB_0052a9df
    CMP EBX,dword ptr [0x02dc9240]      ; 0052a9e0 | DAT_02dc9240
        ;   Label: LAB_0052a9e0
    JNZ 0x0052aa2f                      ; 0052a9e6
        ;   XREF to: 0052aa2f (CONDITIONAL_JUMP)  ; LAB_0052aa2f
    MOV EAX,0x1                         ; 0052a9e8
    ADD ESP,0x198                       ; 0052a9ed
    POP EBX                             ; 0052a9f3
    RET                                 ; 0052a9f4
    PUSH EAX                            ; 0052a9f5
        ;   Label: LAB_0052a9f5
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052a9f6
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90()
    ADD ESP,0x4                         ; 0052a9fb
    PUSH EAX                            ; 0052a9fe
    PUSH 0x59422c                       ; 0052a9ff | = "Get position of secondary buffer"
    PUSH 0x5940b7                       ; 0052aa04 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0052aa09
    PUSH EAX                            ; 0052aa0d
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052aa0e
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0052aa13
    MOV EAX,ESP                         ; 0052aa16
    PUSH EAX                            ; 0052aa18
    CALL sound_sndmain.cpp_FUN_00529980 ; 0052aa19
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00529980()
    ADD ESP,0x4                         ; 0052aa1e
    XOR EAX,EAX                         ; 0052aa21
    ADD ESP,0x198                       ; 0052aa23
    POP EBX                             ; 0052aa29
    RET                                 ; 0052aa2a
    XOR EBX,EBX                         ; 0052aa2b
        ;   Label: LAB_0052aa2b
    JMP 0x0052a9df                      ; 0052aa2d
        ;   XREF to: 0052a9df (UNCONDITIONAL_JUMP)  ; LAB_0052a9df
    CALL sound_snddx.cpp_fillStreamBuffer_FUN_00529c10 ; 0052aa2f
        ;   XREF to: 00529c10 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_fillStreamBuffer_FUN_00529c10()
        ;   Label: LAB_0052aa2f
    TEST EAX,EAX                        ; 0052aa34
    JNZ 0x0052a9e0                      ; 0052aa36
        ;   XREF to: 0052a9e0 (CONDITIONAL_JUMP)  ; LAB_0052a9e0
    ADD ESP,0x198                       ; 0052aa38
    POP EBX                             ; 0052aa3e
    RET                                 ; 0052aa3f

