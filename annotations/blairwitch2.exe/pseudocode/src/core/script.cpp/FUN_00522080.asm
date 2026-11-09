; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_FUN_00522080(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x70]:1  local_70
; undefined1       Stack[-0x6f]:1  local_6f
;
; XREF[3]:
;   core_mission.cpp_FUN_004fce00 at 004fced8
;   core_script.cpp_FUN_00521cf0 at 00521e26
;   core_script.cpp_FUN_00521ff0 at 0052200f
;
; Referenced Globals:
;   undefined1 DAT_005e2f9d
;   undefined1 DAT_005e2f9e
;   undefined1 DAT_005e2f9f
;   undefined1 DAT_005e2fa0
;   TerminatedCString s_smill_wav_005e2fa2
;   undefined1 DAT_005e2fac
;   undefined1 DAT_005e2fad
;   undefined1 DAT_005e2fae
;   undefined1 DAT_005e2faf
;   TerminatedCString s_town_wav_005e2fb2
;   undefined1 DAT_005e2fbb
;   undefined1 DAT_005e2fbc
;   undefined1 DAT_005e2fbd
;   undefined1 DAT_005e2fbe
;   CGame* g_CGamePtr = 01cb6900
;   ... and 8 more
;
; Called Functions:
;   core_sound.cpp_CSound_playAmbientSound_FUN_0055adc0
;   crt_string.c__stricmp_FUN_005b8130
;   crt_string.c_splitpath_FUN_005b9e58
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522080
        ;   Label: core_script.cpp_FUN_00522080
    PUSH ESI                            ; 00522081
    PUSH EDI                            ; 00522082
    SUB ESP,0x64                        ; 00522083
    MOV EBX,dword ptr [ESP + 0x74]      ; 00522086
    MOV dword ptr [EBX + 0x44],0x0      ; 0052208a
    MOV byte ptr [EBX + 0x50],0x0       ; 00522091
    MOV dword ptr [EBX + 0x48],0xbf800000 ; 00522095
    MOV dword ptr [EBX + 0x4c],0xbf800000 ; 0052209c
    MOV dword ptr [EBX],0x0             ; 005220a3
    MOV EAX,[0x01cedef4]                ; 005220a9 | DAT_01cedef4
    MOV dword ptr [EBX + 0x4],0x0       ; 005220ae
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 005220b5
    MOV dword ptr [EBX + 0x18],0x0      ; 005220bc
    MOV dword ptr [EBX + 0xc],EAX       ; 005220c3
    MOV EAX,[0x00616494]                ; 005220c6 | g_CGamePtr
    MOV dword ptr [EBX + 0x10],0x1      ; 005220cb
    MOV dword ptr [EAX + 0x248],0x1     ; 005220d2 | g_CGameInstance.field584_0x248
    XOR EDX,EDX                         ; 005220dc
    MOV dword ptr [EAX + 0x24c],0x1     ; 005220de | g_CGameInstance.field588_0x24c
    PUSH EDX                            ; 005220e8
    MOV dword ptr [EAX + 0x244],EDX     ; 005220e9 | g_CGameInstance.field580_0x244
    LEA EAX,[ESP + 0x4]                 ; 005220ef
    PUSH EAX                            ; 005220f3
    MOV dword ptr [0x01e65900],EDX      ; 005220f4 | DAT_01e65900
    MOV dword ptr [EBX + 0x450],0xbf800000 ; 005220fa
    PUSH EDX                            ; 00522104
    MOV dword ptr [EBX + 0x454],0xffffffff ; 00522105
    MOV EAX,[0x0061b5a8]                ; 0052210f | g_CDemonSetPtr
    PUSH EDX                            ; 00522114
    ADD EAX,0x14d0f0                    ; 00522115
    MOV dword ptr [EBX + 0x458],EDX     ; 0052211a
    PUSH EAX                            ; 00522120
    MOV dword ptr [0x01e65908],EDX      ; 00522121 | DAT_01e65908
    MOV dword ptr [EBX + 0x14],EDX      ; 00522127
    CALL crt_string.c_splitpath_FUN_005b9e58 ; 0052212a
        ;   XREF to: 005b9e58 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005b9e58(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 0052212f
    MOV ESI,0x5e2f9d                    ; 00522132 | DAT_005e2f9d
    MOV EDI,ESP                         ; 00522137
    PUSH EDI                            ; 00522139
    SUB ECX,ECX                         ; 0052213a
    DEC ECX                             ; 0052213c
    MOV AL,0x0                          ; 0052213d
    SCASB.REPNE ES:EDI                  ; 0052213f
    DEC EDI                             ; 00522141
    MOV AL,byte ptr [ESI]               ; 00522142 | DAT_005e2f9d | DAT_005e2f9f
        ;   Label: LAB_00522142
    MOV byte ptr [EDI],AL               ; 00522144
    CMP AL,0x0                          ; 00522146
    JZ 0x0052215a                       ; 00522148
        ;   XREF to: 0052215a (CONDITIONAL_JUMP)  ; LAB_0052215a
    MOV AL,byte ptr [ESI + 0x1]         ; 0052214a | DAT_005e2f9e | DAT_005e2fa0
    ADD ESI,0x2                         ; 0052214d
    MOV byte ptr [EDI + 0x1],AL         ; 00522150
    ADD EDI,0x2                         ; 00522153
    CMP AL,0x0                          ; 00522156
    JNZ 0x00522142                      ; 00522158
        ;   XREF to: 00522142 (CONDITIONAL_JUMP)  ; LAB_00522142
    POP EDI                             ; 0052215a
        ;   Label: LAB_0052215a
    PUSH 0x5e2fa2                       ; 0052215b | = "smill.wav"
    LEA EAX,[ESP + 0x4]                 ; 00522160
    PUSH EAX                            ; 00522164
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00522165
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0052216a
    TEST EAX,EAX                        ; 0052216d
    JNZ 0x0052219a                      ; 0052216f
        ;   XREF to: 0052219a (CONDITIONAL_JUMP)  ; LAB_0052219a
    MOV ESI,0x5e2fac                    ; 00522171 | DAT_005e2fac
    MOV EDI,ESP                         ; 00522176
    PUSH EDI                            ; 00522178
    SUB ECX,ECX                         ; 00522179
    DEC ECX                             ; 0052217b
    MOV AL,0x0                          ; 0052217c
    SCASB.REPNE ES:EDI                  ; 0052217e
    DEC EDI                             ; 00522180
    MOV AL,byte ptr [ESI]               ; 00522181 | DAT_005e2fac | DAT_005e2fae
        ;   Label: LAB_00522181
    MOV byte ptr [EDI],AL               ; 00522183
    CMP AL,0x0                          ; 00522185
    JZ 0x00522199                       ; 00522187
        ;   XREF to: 00522199 (CONDITIONAL_JUMP)  ; LAB_00522199
    MOV AL,byte ptr [ESI + 0x1]         ; 00522189 | DAT_005e2fad | DAT_005e2faf
    ADD ESI,0x2                         ; 0052218c
    MOV byte ptr [EDI + 0x1],AL         ; 0052218f
    ADD EDI,0x2                         ; 00522192
    CMP AL,0x0                          ; 00522195
    JNZ 0x00522181                      ; 00522197
        ;   XREF to: 00522181 (CONDITIONAL_JUMP)  ; LAB_00522181
    POP EDI                             ; 00522199
        ;   Label: LAB_00522199
    PUSH 0x5e2fb2                       ; 0052219a | = "town.wav"
        ;   Label: LAB_0052219a
    LEA EAX,[ESP + 0x4]                 ; 0052219f
    PUSH EAX                            ; 005221a3
    CALL crt_string.c__stricmp_FUN_005b8130 ; 005221a4
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 005221a9
    TEST EAX,EAX                        ; 005221ac
    JZ 0x005221d0                       ; 005221ae
        ;   XREF to: 005221d0 (CONDITIONAL_JUMP)  ; LAB_005221d0
    MOV EAX,ESP                         ; 005221b0
        ;   Label: LAB_005221b0
    PUSH EAX                            ; 005221b2
    MOV ESI,dword ptr [0x0061c068]      ; 005221b3 | DAT_0061c068
    PUSH ESI                            ; 005221b9
    CALL core_sound.cpp_CSound_playAmbientSound_FUN_0055adc0 ; 005221ba
        ;   XREF to: 0055adc0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_playAmbientSound_FUN_0055adc0(CSound * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 005221bf
    MOV dword ptr [EBX + 0x1c],0x0      ; 005221c2
    ADD ESP,0x64                        ; 005221c9
    POP EDI                             ; 005221cc
    POP ESI                             ; 005221cd
    POP EBX                             ; 005221ce
    RET                                 ; 005221cf
    MOV ESI,0x5e2fbb                    ; 005221d0 | DAT_005e2fbb
        ;   Label: LAB_005221d0
    MOV EDI,ESP                         ; 005221d5
    PUSH EDI                            ; 005221d7
    SUB ECX,ECX                         ; 005221d8
    DEC ECX                             ; 005221da
    MOV AL,0x0                          ; 005221db
    SCASB.REPNE ES:EDI                  ; 005221dd
    DEC EDI                             ; 005221df
    MOV AL,byte ptr [ESI]               ; 005221e0 | DAT_005e2fbb | DAT_005e2fbd
        ;   Label: LAB_005221e0
    MOV byte ptr [EDI],AL               ; 005221e2
    CMP AL,0x0                          ; 005221e4
    JZ 0x005221f8                       ; 005221e6
        ;   XREF to: 005221f8 (CONDITIONAL_JUMP)  ; LAB_005221f8
    MOV AL,byte ptr [ESI + 0x1]         ; 005221e8 | DAT_005e2fbc | DAT_005e2fbe
    ADD ESI,0x2                         ; 005221eb
    MOV byte ptr [EDI + 0x1],AL         ; 005221ee
    ADD EDI,0x2                         ; 005221f1
    CMP AL,0x0                          ; 005221f4
    JNZ 0x005221e0                      ; 005221f6
        ;   XREF to: 005221e0 (CONDITIONAL_JUMP)  ; LAB_005221e0
    POP EDI                             ; 005221f8
        ;   Label: LAB_005221f8
    JMP 0x005221b0                      ; 005221f9
        ;   XREF to: 005221b0 (UNCONDITIONAL_JUMP)  ; LAB_005221b0

