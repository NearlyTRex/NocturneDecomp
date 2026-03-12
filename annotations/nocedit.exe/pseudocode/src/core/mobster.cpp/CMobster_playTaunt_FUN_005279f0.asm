; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_CMobster_playTaunt_FUN_005279f0(CMobster *this_ptr,int taunt_category)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   taunt_category
; Local Variables:
; char[100]        Stack[-0x80]:100  local_80
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mobster.cpp_CMobster_process_FUN_00525840 at 00525f8a
;
; Referenced Globals:
;   TerminatedCString s_mobster_cheese_c_c_d_wav_006399fa
;   float FLOAT_00639a16 = 5
;   CGame* g_CGamePtr = 02d81a9c
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CSound* g_CSoundPtr = 03f6af64
;   undefined4 DAT_02d81ab8
;   int[5] g_MobsterTauntCounters
;   undefined4 g_CMobsterClassInfo.name_hash
;   undefined4 g_CDemonSetInstance.enemy_count
;   undefined4 DAT_03265258
;   undefined4 DAT_0326525c
;   CSound g_CSoundInstance
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_sound.cpp_CSound_getSoundDuration_FUN_005b3ba0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005279f0
        ;   Label: core_mobster.cpp_CMobster_playTaunt_FUN_005279f0
    PUSH ESI                            ; 005279f1
    PUSH EDI                            ; 005279f2
    PUSH EBP                            ; 005279f3
    MOV EBP,ESP                         ; 005279f4
    SUB ESP,0x70                        ; 005279f6
    AND ESP,0xfffffff8                  ; 005279f9
    MOV ESI,dword ptr [EBP + 0x14]      ; 005279fc
    FLD float ptr [ESI + 0xbed4]        ; 005279ff
    FLDZ                                ; 00527a05
    FCOMPP                              ; 00527a07
    FNSTSW AX                           ; 00527a09
    SAHF                                ; 00527a0b
    JC 0x00527a58                       ; 00527a0c
        ;   XREF to: 00527a58 (CONDITIONAL_JUMP)  ; LAB_00527a58
    MOV EBX,dword ptr [EBP + 0x18]      ; 00527a0e
    MOV EAX,dword ptr [EBP + 0x18]      ; 00527a11
    XOR EDI,EDI                         ; 00527a14
    ADD EAX,0x60                        ; 00527a16
    SHL EBX,0x2                         ; 00527a19
    MOV dword ptr [ESP + 0x64],EAX      ; 00527a1c
    MOV EDX,dword ptr [EBX + 0x2f37eb4] ; 00527a20 | g_MobsterTauntCounters
        ;   Label: LAB_00527a20
    INC EDX                             ; 00527a26
    MOV EAX,[0x0067b654]                ; 00527a27 | g_CGamePtr
    MOV dword ptr [EBX + 0x2f37eb4],EDX ; 00527a2c | g_MobsterTauntCounters
    CMP dword ptr [EAX + 0x1c],0x0      ; 00527a32 | DAT_02d81ab8
    JNZ 0x00527a5f                      ; 00527a36
        ;   XREF to: 00527a5f (CONDITIONAL_JUMP)  ; LAB_00527a5f
    CMP dword ptr [EBP + 0x18],0x1      ; 00527a38
    JNZ 0x00527a5f                      ; 00527a3c
        ;   XREF to: 00527a5f (CONDITIONAL_JUMP)  ; LAB_00527a5f
    CMP EDX,0x6                         ; 00527a3e
    JNZ 0x00527a5f                      ; 00527a41
        ;   XREF to: 00527a5f (CONDITIONAL_JUMP)  ; LAB_00527a5f
    INC EDI                             ; 00527a43
        ;   Label: LAB_00527a43
    CMP EDI,0x3                         ; 00527a44
    JL 0x00527a20                       ; 00527a47
        ;   XREF to: 00527a20 (CONDITIONAL_JUMP)  ; LAB_00527a20
    FLD float ptr [ESI + 0xbed4]        ; 00527a49
        ;   Label: LAB_00527a49
    FLDZ                                ; 00527a4f
    FCOMPP                              ; 00527a51
    FNSTSW AX                           ; 00527a53
    SAHF                                ; 00527a55
    JC 0x00527abf                       ; 00527a56
        ;   XREF to: 00527abf (CONDITIONAL_JUMP)  ; LAB_00527abf
    MOV ESP,EBP                         ; 00527a58
        ;   Label: LAB_00527a58
    POP EBP                             ; 00527a5a
    POP EDI                             ; 00527a5b
    POP ESI                             ; 00527a5c
    POP EBX                             ; 00527a5d
    RET                                 ; 00527a5e
    MOV ECX,dword ptr [EBX + 0x2f37eb4] ; 00527a5f | g_MobsterTauntCounters
        ;   Label: LAB_00527a5f
    PUSH ECX                            ; 00527a65
    MOV EAX,dword ptr [ESP + 0x68]      ; 00527a66
    PUSH EAX                            ; 00527a6a
    XOR EAX,EAX                         ; 00527a6b
    MOV AL,byte ptr [ESI + 0xbed0]      ; 00527a6d
    PUSH EAX                            ; 00527a73
    PUSH 0x6399fa                       ; 00527a74 | = "mobster-cheese-%c-%c-%d.wav"
    LEA EAX,[ESP + 0x10]                ; 00527a79
    PUSH EAX                            ; 00527a7d
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00527a7e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 00527a83
    MOV EAX,ESP                         ; 00527a86
    PUSH EAX                            ; 00527a88
    MOV EDX,dword ptr [0x00681ef8]      ; 00527a89 | g_CSoundInstance | g_CSoundPtr
    PUSH EDX                            ; 00527a8f | g_CSoundInstance
    CALL core_sound.cpp_CSound_getSoundDuration_FUN_005b3ba0 ; 00527a90
        ;   XREF to: 005b3ba0 (UNCONDITIONAL_CALL)  ; float core_sound.cpp_CSound_getSoundDuration_FUN_005b3ba0(CSound * this_ptr, char * sound_name)
    MOV dword ptr [ESP + 0x74],EAX      ; 00527a95
    MOV EAX,dword ptr [ESP + 0x74]      ; 00527a99
    MOV dword ptr [ESI + 0xbed4],EAX    ; 00527a9d
    ADD ESP,0x8                         ; 00527aa3
    FLD float ptr [ESI + 0xbed4]        ; 00527aa6
    FLDZ                                ; 00527aac
    FCOMPP                              ; 00527aae
    FNSTSW AX                           ; 00527ab0
    SAHF                                ; 00527ab2
    JC 0x00527a49                       ; 00527ab3
        ;   XREF to: 00527a49 (CONDITIONAL_JUMP)  ; LAB_00527a49
    XOR ECX,ECX                         ; 00527ab5
    MOV dword ptr [EBX + 0x2f37eb4],ECX ; 00527ab7 | g_MobsterTauntCounters
    JMP 0x00527a43                      ; 00527abd
        ;   XREF to: 00527a43 (UNCONDITIONAL_JUMP)  ; LAB_00527a43
    FLD float ptr [ESI + 0xbed4]        ; 00527abf
        ;   Label: LAB_00527abf
    MOV EBX,dword ptr [ESI + 0xbf5c]    ; 00527ac5
    FADD float ptr [0x00639a16]         ; 00527acb | FLOAT_00639a16
    PUSH EBX                            ; 00527ad1
    FSTP float ptr [ESI + 0xbed4]       ; 00527ad2
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00527ad8
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 00527add
    TEST EAX,EAX                        ; 00527ae0
    JNZ 0x00527a58                      ; 00527ae2
        ;   XREF to: 00527a58 (CONDITIONAL_JUMP)  ; LAB_00527a58
    MOV dword ptr [ESP + 0x68],EAX      ; 00527ae8
    XOR EDI,EDI                         ; 00527aec
    XOR EBX,EBX                         ; 00527aee
    MOV EAX,[0x006810c8]                ; 00527af0 | g_CDemonSetPtr
        ;   Label: LAB_00527af0
    CMP EDI,dword ptr [EAX + 0x150fdc]  ; 00527af5 | g_CDemonSetInstance.enemy_count
    JGE 0x00527b4a                      ; 00527afb
        ;   XREF to: 00527b4a (CONDITIONAL_JUMP)  ; LAB_00527b4a
    MOV EDX,dword ptr [ESP + 0x68]      ; 00527afd
    MOV ECX,dword ptr [0x02f37f30]      ; 00527b01 | g_CMobsterClassInfo.name_hash
    ADD EAX,EDX                         ; 00527b07
    PUSH ECX                            ; 00527b09
    MOV ECX,dword ptr [EAX + 0x150fe0]  ; 00527b0a | DAT_03265258 | DAT_0326525c
    PUSH ECX                            ; 00527b10
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00527b11
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00527b16
    TEST EAX,EAX                        ; 00527b19
    JNZ 0x00527b2b                      ; 00527b1b
        ;   XREF to: 00527b2b (CONDITIONAL_JUMP)  ; LAB_00527b2b
    MOV ECX,dword ptr [ESP + 0x68]      ; 00527b1d
        ;   Label: LAB_00527b1d
    ADD ECX,0x4                         ; 00527b21
    INC EDI                             ; 00527b24
    MOV dword ptr [ESP + 0x68],ECX      ; 00527b25
    JMP 0x00527af0                      ; 00527b29
        ;   XREF to: 00527af0 (UNCONDITIONAL_JUMP)  ; LAB_00527af0
    MOV EDX,dword ptr [EAX + 0xbf54]    ; 00527b2b
        ;   Label: LAB_00527b2b
    PUSH EDX                            ; 00527b31
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00527b32
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 00527b37
    TEST EAX,EAX                        ; 00527b3a
    JZ 0x00527b1d                       ; 00527b3c
        ;   XREF to: 00527b1d (CONDITIONAL_JUMP)  ; LAB_00527b1d
    INC EBX                             ; 00527b3e
    CMP EBX,0x3                         ; 00527b3f
    JG 0x00527a58                       ; 00527b42
        ;   XREF to: 00527a58 (CONDITIONAL_JUMP)  ; LAB_00527a58
    JMP 0x00527b1d                      ; 00527b48
        ;   XREF to: 00527b1d (UNCONDITIONAL_JUMP)  ; LAB_00527b1d
    MOV EAX,ESP                         ; 00527b4a
        ;   Label: LAB_00527b4a
    PUSH EAX                            ; 00527b4c
    MOV EBX,dword ptr [ESI + 0x154]     ; 00527b4d
    PUSH ESI                            ; 00527b53
    CALL dword ptr [EBX + 0x24]         ; 00527b54
    ADD ESP,0x8                         ; 00527b57
    MOV dword ptr [ESI + 0xbf54],EAX    ; 00527b5a
    MOV ESP,EBP                         ; 00527b60
    POP EBP                             ; 00527b62
    POP EDI                             ; 00527b63
    POP ESI                             ; 00527b64
    POP EBX                             ; 00527b65
    RET                                 ; 00527b66

