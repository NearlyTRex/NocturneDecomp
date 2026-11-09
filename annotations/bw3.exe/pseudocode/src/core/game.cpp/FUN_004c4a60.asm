; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004c4a60(void *param_1,char *param_2,int param_3,uint param_4)
;
;
; XREF[2]:
;   core_event.cpp_FUN_0048c2e0 at 0048f419
;   core_game.cpp_FUN_004c4bc0 at 004c4c24
;
; Referenced Globals:
;   undefined4 DAT_006045f8
;
; Called Functions:
;   core_sound.cpp_CSound_playSound_FUN_005609b0
;   crt_string.c__stricmp_FUN_005a3260
;   sound_sndmain.cpp_FUN_00555df0
;   sound_sndmain.cpp_FUN_00555f20
;   sound_sndmain.cpp_FUN_00555f60
;   sound_sndmain.cpp_FUN_00555fd0
;   sound_sndmain.cpp_FUN_00556050
;   sound_sndmain.cpp_FUN_00556700
;   sound_sndmain.cpp_FUN_00556c10
;   sound_sndmain.cpp_FUN_00556e30
;   sound_sndmain.cpp_setNextSfxChannel_FUN_00555e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4a60
        ;   Label: core_game.cpp_FUN_004c4a60
    PUSH ESI                            ; 004c4a61
    PUSH EDI                            ; 004c4a62
    PUSH EBP                            ; 004c4a63
    MOV EBX,dword ptr [ESP + 0x14]      ; 004c4a64
    MOV ESI,dword ptr [ESP + 0x18]      ; 004c4a68
    LEA EAX,[EBX + 0x298]               ; 004c4a6c
    PUSH EAX                            ; 004c4a72
    PUSH ESI                            ; 004c4a73
    XOR EBP,EBP                         ; 004c4a74
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004c4a76
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004c4a7b
    TEST EAX,EAX                        ; 004c4a7e
    JNZ 0x004c4a8c                      ; 004c4a80
        ;   XREF to: 004c4a8c (CONDITIONAL_JUMP)  ; LAB_004c4a8c
    MOV EDX,dword ptr [EBX + 0x2fc]     ; 004c4a82
    TEST EDX,EDX                        ; 004c4a88
    JNZ 0x004c4ae5                      ; 004c4a8a
        ;   XREF to: 004c4ae5 (CONDITIONAL_JUMP)  ; LAB_004c4ae5
    MOV EDI,dword ptr [EBX + 0x2fc]     ; 004c4a8c
        ;   Label: LAB_004c4a8c
    TEST EDI,EDI                        ; 004c4a92
    JZ 0x004c4ab7                       ; 004c4a94
        ;   XREF to: 004c4ab7 (CONDITIONAL_JUMP)  ; LAB_004c4ab7
    PUSH 0x1                            ; 004c4a96
    PUSH 0x40800000                     ; 004c4a98
    PUSH 0x0                            ; 004c4a9d
    PUSH EDI                            ; 004c4a9f
    MOV EBP,0x1                         ; 004c4aa0
    CALL sound_sndmain.cpp_FUN_00556c10 ; 004c4aa5
        ;   XREF to: 00556c10 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556c10(uint sfx_handle, float target_volume, float fade_duration, int stop_after_fade)
    ADD ESP,0x10                        ; 004c4aaa
    MOV dword ptr [EBX + 0x2fc],0x0     ; 004c4aad
    LEA EDI,[EBX + 0x298]               ; 004c4ab7
        ;   Label: LAB_004c4ab7
    PUSH EDI                            ; 004c4abd
    MOV AL,byte ptr [ESI]               ; 004c4abe
        ;   Label: LAB_004c4abe
    MOV byte ptr [EDI],AL               ; 004c4ac0
    CMP AL,0x0                          ; 004c4ac2
    JZ 0x004c4ad6                       ; 004c4ac4
        ;   XREF to: 004c4ad6 (CONDITIONAL_JUMP)  ; LAB_004c4ad6
    MOV AL,byte ptr [ESI + 0x1]         ; 004c4ac6
    ADD ESI,0x2                         ; 004c4ac9
    MOV byte ptr [EDI + 0x1],AL         ; 004c4acc
    ADD EDI,0x2                         ; 004c4acf
    CMP AL,0x0                          ; 004c4ad2
    JNZ 0x004c4abe                      ; 004c4ad4
        ;   XREF to: 004c4abe (CONDITIONAL_JUMP)  ; LAB_004c4abe
    POP EDI                             ; 004c4ad6
        ;   Label: LAB_004c4ad6
    CMP byte ptr [EBX + 0x298],0x0      ; 004c4ad7
    JNZ 0x004c4af4                      ; 004c4ade
        ;   XREF to: 004c4af4 (CONDITIONAL_JUMP)  ; LAB_004c4af4
    POP EBP                             ; 004c4ae0
        ;   Label: LAB_004c4ae0
    POP EDI                             ; 004c4ae1
    POP ESI                             ; 004c4ae2
    POP EBX                             ; 004c4ae3
    RET                                 ; 004c4ae4
    PUSH EDX                            ; 004c4ae5
        ;   Label: LAB_004c4ae5
    CALL sound_sndmain.cpp_FUN_00556700 ; 004c4ae6
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 004c4aeb
    TEST EAX,EAX                        ; 004c4aee
    JNZ 0x004c4ae0                      ; 004c4af0
        ;   XREF to: 004c4ae0 (CONDITIONAL_JUMP)  ; LAB_004c4ae0
    JMP 0x004c4a8c                      ; 004c4af2
        ;   XREF to: 004c4a8c (UNCONDITIONAL_JUMP)  ; LAB_004c4a8c
    PUSH 0x1                            ; 004c4af4
        ;   Label: LAB_004c4af4
    CALL sound_sndmain.cpp_FUN_00556e30 ; 004c4af6
        ;   XREF to: 00556e30 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556e30(int channel_index)
    ADD ESP,0x4                         ; 004c4afb
    TEST EAX,EAX                        ; 004c4afe
    JZ 0x004c4ae0                       ; 004c4b00
        ;   XREF to: 004c4ae0 (CONDITIONAL_JUMP)  ; LAB_004c4ae0
    CALL sound_sndmain.cpp_FUN_00555fd0 ; 004c4b02
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555fd0()
    PUSH 0x1                            ; 004c4b07
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_00555e90 ; 004c4b09
        ;   XREF to: 00555e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxChannel_FUN_00555e90(int channel_index)
    ADD ESP,0x4                         ; 004c4b0e
    MOV EAX,dword ptr [ESP + 0x20]      ; 004c4b11
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004c4b15
    TEST EAX,0x7fffffff                 ; 004c4b19
    JNZ 0x004c4b9c                      ; 004c4b1e
        ;   XREF to: 004c4b9c (CONDITIONAL_JUMP)  ; LAB_004c4b9c
    TEST EDX,EDX                        ; 004c4b24
    JNZ 0x004c4b9c                      ; 004c4b26
        ;   XREF to: 004c4b9c (CONDITIONAL_JUMP)  ; LAB_004c4b9c
    TEST EBP,EBP                        ; 004c4b28
        ;   Label: LAB_004c4b28
    JZ 0x004c4bb1                       ; 004c4b2a
        ;   XREF to: 004c4bb1 (CONDITIONAL_JUMP)  ; LAB_004c4bb1
    PUSH 0x3c23d70a                     ; 004c4b30
    CALL sound_sndmain.cpp_FUN_00555df0 ; 004c4b35
        ;   XREF to: 00555df0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555df0(float volume)
        ;   Label: LAB_004c4b35
    ADD ESP,0x4                         ; 004c4b3a
    PUSH 0x1                            ; 004c4b3d
    CALL sound_sndmain.cpp_FUN_00555f20 ; 004c4b3f
        ;   XREF to: 00555f20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555f20(uint flag_mask)
    ADD ESP,0x4                         ; 004c4b44
    LEA EAX,[EBX + 0x298]               ; 004c4b47
    PUSH EAX                            ; 004c4b4d
    PUSH EBX                            ; 004c4b4e
    MOV EDI,dword ptr [0x006045f8]      ; 004c4b4f | DAT_006045f8
    PUSH EDI                            ; 004c4b55
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 004c4b56
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004c4b5b
    MOV dword ptr [EBX + 0x2fc],EAX     ; 004c4b5e
    TEST EBP,EBP                        ; 004c4b64
    JZ 0x004c4b7e                       ; 004c4b66
        ;   XREF to: 004c4b7e (CONDITIONAL_JUMP)  ; LAB_004c4b7e
    PUSH 0x0                            ; 004c4b68
    PUSH 0x40800000                     ; 004c4b6a
    PUSH dword ptr [EBX + 0x308]        ; 004c4b6f
    PUSH EAX                            ; 004c4b75
    CALL sound_sndmain.cpp_FUN_00556c10 ; 004c4b76
        ;   XREF to: 00556c10 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556c10(uint sfx_handle, float target_volume, float fade_duration, int stop_after_fade)
    ADD ESP,0x10                        ; 004c4b7b
    CALL sound_sndmain.cpp_FUN_00556050 ; 004c4b7e
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556050()
        ;   Label: LAB_004c4b7e
    MOV dword ptr [EBX + 0x300],0x0     ; 004c4b83
    MOV dword ptr [EBX + 0x304],0x0     ; 004c4b8d
    POP EBP                             ; 004c4b97
    POP EDI                             ; 004c4b98
    POP ESI                             ; 004c4b99
    POP EBX                             ; 004c4b9a
    RET                                 ; 004c4b9b
    PUSH 0x1                            ; 004c4b9c
        ;   Label: LAB_004c4b9c
    PUSH EAX                            ; 004c4b9e
    MOV ESI,dword ptr [ESP + 0x24]      ; 004c4b9f
    PUSH ESI                            ; 004c4ba3
    CALL sound_sndmain.cpp_FUN_00555f60 ; 004c4ba4
        ;   XREF to: 00555f60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555f60(double trigger_time, int trigger_id)
    ADD ESP,0xc                         ; 004c4ba9
    JMP 0x004c4b28                      ; 004c4bac
        ;   XREF to: 004c4b28 (UNCONDITIONAL_JUMP)  ; LAB_004c4b28
    PUSH dword ptr [EBX + 0x308]        ; 004c4bb1
        ;   Label: LAB_004c4bb1
    JMP 0x004c4b35                      ; 004c4bb7
        ;   XREF to: 004c4b35 (UNCONDITIONAL_JUMP)  ; LAB_004c4b35

