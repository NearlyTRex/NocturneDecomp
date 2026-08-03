; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_FUN_004feff0(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x70]:1  local_70
; undefined1       Stack[-0x6f]:1  local_6f
;
; XREF[3]:
;   core_mission.cpp_CDemonMission_startMission_FUN_004d9780 at 004d9884
;   core_script.cpp_FUN_004febd0 at 004fee0b
;   core_script.cpp_FUN_004fef60 at 004fef76
;
; Referenced Globals:
;   TerminatedCString s_wav_0058e36d
;   undefined4 s_wav_0058e36d+1
;   undefined4 s_wav_0058e36d+2
;   undefined4 s_wav_0058e36d+3
;   TerminatedCString s_smill_wav_0058e372
;   TerminatedCString s_s_0_85_0058e37c
;   undefined4 s_s_0_85_0058e37c+1
;   undefined4 s_s_0_85_0058e37c+2
;   undefined4 s_s_0_85_0058e37c+3
;   TerminatedCString s_town_wav_0058e382
;   TerminatedCString s_s_0_85_0058e38b
;   undefined4 s_s_0_85_0058e38b+1
;   undefined4 s_s_0_85_0058e38b+2
;   undefined4 s_s_0_85_0058e38b+3
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   ... and 8 more
;
; Called Functions:
;   core_sound.cpp_CSound_playAmbientSound_FUN_0052e9d0
;   crt_string.c__stricmp_FUN_00564520
;   crt_string.c_splitpath_FUN_00566498
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004feff0
        ;   Label: core_script.cpp_FUN_004feff0
    PUSH ESI                            ; 004feff1
    PUSH EDI                            ; 004feff2
    SUB ESP,0x64                        ; 004feff3
    MOV EBX,dword ptr [ESP + 0x74]      ; 004feff6
    MOV dword ptr [EBX + 0x40],0x0      ; 004feffa
    MOV byte ptr [EBX + 0x4c],0x0       ; 004ff001
    MOV dword ptr [EBX + 0x44],0xbf800000 ; 004ff005
    MOV dword ptr [EBX + 0x48],0xbf800000 ; 004ff00c
    MOV dword ptr [EBX],0x0             ; 004ff013
    MOV EAX,[0x01cae0e8]                ; 004ff019 | DAT_01cae0e8
    MOV dword ptr [EBX + 0x4],0x0       ; 004ff01e
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004ff025
    MOV dword ptr [EBX + 0xc],EAX       ; 004ff02c
    MOV EAX,[0x005b9354]                ; 004ff02f | g_CGame_PTR_005b9354
    MOV dword ptr [EBX + 0x10],0x1      ; 004ff034
    MOV dword ptr [EAX + 0x22c],0x1     ; 004ff03b | g_CGame_01c775ec.allow_damage_flag
    XOR EDX,EDX                         ; 004ff045
    MOV dword ptr [EAX + 0x230],0x1     ; 004ff047 | g_CGame_01c775ec.allow_enemy_attack_flag
    PUSH EDX                            ; 004ff051
    MOV dword ptr [EAX + 0x228],EDX     ; 004ff052 | g_CGame_01c775ec.letterbox_mode
    LEA EAX,[ESP + 0x4]                 ; 004ff058
    PUSH EAX                            ; 004ff05c
    MOV dword ptr [0x01e56c20],EDX      ; 004ff05d | DAT_01e56c20
    MOV dword ptr [EBX + 0x44c],0xbf800000 ; 004ff063
    PUSH EDX                            ; 004ff06d
    MOV dword ptr [EBX + 0x450],0xffffffff ; 004ff06e
    MOV EAX,[0x005be368]                ; 004ff078 | g_CDemonSet_PTR_005be368
    PUSH EDX                            ; 004ff07d
    ADD EAX,0x14cd08                    ; 004ff07e
    MOV dword ptr [EBX + 0x454],EDX     ; 004ff083
    PUSH EAX                            ; 004ff089
    MOV dword ptr [0x01e56c28],EDX      ; 004ff08a | DAT_01e56c28
    MOV dword ptr [EBX + 0x14],EDX      ; 004ff090
    CALL crt_string.c_splitpath_FUN_00566498 ; 004ff093
        ;   XREF to: 00566498 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_00566498(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 004ff098
    MOV ESI,0x58e36d                    ; 004ff09b | = ".wav"
    MOV EDI,ESP                         ; 004ff0a0
    PUSH EDI                            ; 004ff0a2
    SUB ECX,ECX                         ; 004ff0a3
    DEC ECX                             ; 004ff0a5
    MOV AL,0x0                          ; 004ff0a6
    SCASB.REPNE ES:EDI                  ; 004ff0a8
    DEC EDI                             ; 004ff0aa
    MOV AL,byte ptr [ESI]               ; 004ff0ab | = ".wav" | s_wav_0058e36d+2
        ;   Label: LAB_004ff0ab
    MOV byte ptr [EDI],AL               ; 004ff0ad
    CMP AL,0x0                          ; 004ff0af
    JZ 0x004ff0c3                       ; 004ff0b1
        ;   XREF to: 004ff0c3 (CONDITIONAL_JUMP)  ; LAB_004ff0c3
    MOV AL,byte ptr [ESI + 0x1]         ; 004ff0b3 | s_wav_0058e36d+1 | s_wav_0058e36d+3
    ADD ESI,0x2                         ; 004ff0b6
    MOV byte ptr [EDI + 0x1],AL         ; 004ff0b9
    ADD EDI,0x2                         ; 004ff0bc
    CMP AL,0x0                          ; 004ff0bf
    JNZ 0x004ff0ab                      ; 004ff0c1
        ;   XREF to: 004ff0ab (CONDITIONAL_JUMP)  ; LAB_004ff0ab
    POP EDI                             ; 004ff0c3
        ;   Label: LAB_004ff0c3
    PUSH 0x58e372                       ; 004ff0c4 | = "smill.wav"
    LEA EAX,[ESP + 0x4]                 ; 004ff0c9
    PUSH EAX                            ; 004ff0cd
    CALL crt_string.c__stricmp_FUN_00564520 ; 004ff0ce
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004ff0d3
    TEST EAX,EAX                        ; 004ff0d6
    JNZ 0x004ff103                      ; 004ff0d8
        ;   XREF to: 004ff103 (CONDITIONAL_JUMP)  ; LAB_004ff103
    MOV ESI,0x58e37c                    ; 004ff0da | = "@0.85"
    MOV EDI,ESP                         ; 004ff0df
    PUSH EDI                            ; 004ff0e1
    SUB ECX,ECX                         ; 004ff0e2
    DEC ECX                             ; 004ff0e4
    MOV AL,0x0                          ; 004ff0e5
    SCASB.REPNE ES:EDI                  ; 004ff0e7
    DEC EDI                             ; 004ff0e9
    MOV AL,byte ptr [ESI]               ; 004ff0ea | = "@0.85" | s_s_0_85_0058e37c+2
        ;   Label: LAB_004ff0ea
    MOV byte ptr [EDI],AL               ; 004ff0ec
    CMP AL,0x0                          ; 004ff0ee
    JZ 0x004ff102                       ; 004ff0f0
        ;   XREF to: 004ff102 (CONDITIONAL_JUMP)  ; LAB_004ff102
    MOV AL,byte ptr [ESI + 0x1]         ; 004ff0f2 | s_s_0_85_0058e37c+1 | s_s_0_85_0058e37c+3
    ADD ESI,0x2                         ; 004ff0f5
    MOV byte ptr [EDI + 0x1],AL         ; 004ff0f8
    ADD EDI,0x2                         ; 004ff0fb
    CMP AL,0x0                          ; 004ff0fe
    JNZ 0x004ff0ea                      ; 004ff100
        ;   XREF to: 004ff0ea (CONDITIONAL_JUMP)  ; LAB_004ff0ea
    POP EDI                             ; 004ff102
        ;   Label: LAB_004ff102
    PUSH 0x58e382                       ; 004ff103 | = "town.wav"
        ;   Label: LAB_004ff103
    LEA EAX,[ESP + 0x4]                 ; 004ff108
    PUSH EAX                            ; 004ff10c
    CALL crt_string.c__stricmp_FUN_00564520 ; 004ff10d
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004ff112
    TEST EAX,EAX                        ; 004ff115
    JZ 0x004ff139                       ; 004ff117
        ;   XREF to: 004ff139 (CONDITIONAL_JUMP)  ; LAB_004ff139
    MOV EAX,ESP                         ; 004ff119
        ;   Label: LAB_004ff119
    PUSH EAX                            ; 004ff11b
    MOV ESI,dword ptr [0x005bed68]      ; 004ff11c | g_CSound_PTR_005bed68
    PUSH ESI                            ; 004ff122
    CALL core_sound.cpp_CSound_playAmbientSound_FUN_0052e9d0 ; 004ff123
        ;   XREF to: 0052e9d0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_playAmbientSound_FUN_0052e9d0(CSound * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 004ff128
    MOV dword ptr [EBX + 0x18],0x0      ; 004ff12b
    ADD ESP,0x64                        ; 004ff132
    POP EDI                             ; 004ff135
    POP ESI                             ; 004ff136
    POP EBX                             ; 004ff137
    RET                                 ; 004ff138
    MOV ESI,0x58e38b                    ; 004ff139 | = "@0.85"
        ;   Label: LAB_004ff139
    MOV EDI,ESP                         ; 004ff13e
    PUSH EDI                            ; 004ff140
    SUB ECX,ECX                         ; 004ff141
    DEC ECX                             ; 004ff143
    MOV AL,0x0                          ; 004ff144
    SCASB.REPNE ES:EDI                  ; 004ff146
    DEC EDI                             ; 004ff148
    MOV AL,byte ptr [ESI]               ; 004ff149 | = "@0.85" | s_s_0_85_0058e38b+2
        ;   Label: LAB_004ff149
    MOV byte ptr [EDI],AL               ; 004ff14b
    CMP AL,0x0                          ; 004ff14d
    JZ 0x004ff161                       ; 004ff14f
        ;   XREF to: 004ff161 (CONDITIONAL_JUMP)  ; LAB_004ff161
    MOV AL,byte ptr [ESI + 0x1]         ; 004ff151 | s_s_0_85_0058e38b+1 | s_s_0_85_0058e38b+3
    ADD ESI,0x2                         ; 004ff154
    MOV byte ptr [EDI + 0x1],AL         ; 004ff157
    ADD EDI,0x2                         ; 004ff15a
    CMP AL,0x0                          ; 004ff15d
    JNZ 0x004ff149                      ; 004ff15f
        ;   XREF to: 004ff149 (CONDITIONAL_JUMP)  ; LAB_004ff149
    POP EDI                             ; 004ff161
        ;   Label: LAB_004ff161
    JMP 0x004ff119                      ; 004ff162
        ;   XREF to: 004ff119 (UNCONDITIONAL_JUMP)  ; LAB_004ff119

