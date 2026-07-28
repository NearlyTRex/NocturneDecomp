; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_CMobster_playTaunt_FUN_004dc940(CMobster *this_ptr,int taunt_category)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   taunt_category
; Local Variables:
; undefined        Stack[-0x80]:1  local_80
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mobster.cpp_FUN_004da790 at 004daeda
;
; Referenced Globals:
;   TerminatedCString s_mobster_cheese_c_c_d_wav_0058a4ad
;   float FLOAT_0058a4c9 = 5
;   undefined4 DAT_005b9354
;   undefined4 DAT_005be368
;   undefined4 DAT_005bed68
;   undefined4 DAT_01c77608
;   undefined4 g_CMobsterActorType_01ccdbd8.name_hash
;   undefined4 DAT_01fa7e78
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_sound.cpp_FUN_0052ebc0
;   crt_stdio.c_sprintf_FUN_00563c90
;   sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dc940
        ;   Label: core_mobster.cpp_CMobster_playTaunt_FUN_004dc940
    PUSH ESI                            ; 004dc941
    PUSH EDI                            ; 004dc942
    PUSH EBP                            ; 004dc943
    MOV EBP,ESP                         ; 004dc944
    SUB ESP,0x70                        ; 004dc946
    AND ESP,0xfffffff8                  ; 004dc949
    MOV ESI,dword ptr [EBP + 0x14]      ; 004dc94c
    FLD float ptr [ESI + 0xbd3c]        ; 004dc94f
    FLDZ                                ; 004dc955
    FCOMPP                              ; 004dc957
    FNSTSW AX                           ; 004dc959
    SAHF                                ; 004dc95b
    JC 0x004dc9a8                       ; 004dc95c
        ;   XREF to: 004dc9a8 (CONDITIONAL_JUMP)  ; LAB_004dc9a8
    MOV EBX,dword ptr [EBP + 0x18]      ; 004dc95e
    MOV EAX,dword ptr [EBP + 0x18]      ; 004dc961
    XOR EDI,EDI                         ; 004dc964
    ADD EAX,0x60                        ; 004dc966
    SHL EBX,0x2                         ; 004dc969
    MOV dword ptr [ESP + 0x64],EAX      ; 004dc96c
    MOV EDX,dword ptr [EBX + 0x1ccdb94] ; 004dc970
        ;   Label: LAB_004dc970
    INC EDX                             ; 004dc976
    MOV EAX,[0x005b9354]                ; 004dc977 | DAT_005b9354
    MOV dword ptr [EBX + 0x1ccdb94],EDX ; 004dc97c
    CMP dword ptr [EAX + 0x1c],0x0      ; 004dc982 | DAT_01c77608
    JNZ 0x004dc9af                      ; 004dc986
        ;   XREF to: 004dc9af (CONDITIONAL_JUMP)  ; LAB_004dc9af
    CMP dword ptr [EBP + 0x18],0x1      ; 004dc988
    JNZ 0x004dc9af                      ; 004dc98c
        ;   XREF to: 004dc9af (CONDITIONAL_JUMP)  ; LAB_004dc9af
    CMP EDX,0x6                         ; 004dc98e
    JNZ 0x004dc9af                      ; 004dc991
        ;   XREF to: 004dc9af (CONDITIONAL_JUMP)  ; LAB_004dc9af
    INC EDI                             ; 004dc993
        ;   Label: LAB_004dc993
    CMP EDI,0x3                         ; 004dc994
    JL 0x004dc970                       ; 004dc997
        ;   XREF to: 004dc970 (CONDITIONAL_JUMP)  ; LAB_004dc970
    FLD float ptr [ESI + 0xbd3c]        ; 004dc999
        ;   Label: LAB_004dc999
    FLDZ                                ; 004dc99f
    FCOMPP                              ; 004dc9a1
    FNSTSW AX                           ; 004dc9a3
    SAHF                                ; 004dc9a5
    JC 0x004dca0f                       ; 004dc9a6
        ;   XREF to: 004dca0f (CONDITIONAL_JUMP)  ; LAB_004dca0f
    MOV ESP,EBP                         ; 004dc9a8
        ;   Label: LAB_004dc9a8
    POP EBP                             ; 004dc9aa
    POP EDI                             ; 004dc9ab
    POP ESI                             ; 004dc9ac
    POP EBX                             ; 004dc9ad
    RET                                 ; 004dc9ae
    MOV ECX,dword ptr [EBX + 0x1ccdb94] ; 004dc9af
        ;   Label: LAB_004dc9af
    PUSH ECX                            ; 004dc9b5
    MOV EAX,dword ptr [ESP + 0x68]      ; 004dc9b6
    PUSH EAX                            ; 004dc9ba
    XOR EAX,EAX                         ; 004dc9bb
    MOV AL,byte ptr [ESI + 0xbd38]      ; 004dc9bd
    PUSH EAX                            ; 004dc9c3
    PUSH 0x58a4ad                       ; 004dc9c4 | = "mobster-cheese-%c-%c-%d.wav"
    LEA EAX,[ESP + 0x10]                ; 004dc9c9
    PUSH EAX                            ; 004dc9cd
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004dc9ce
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x14                        ; 004dc9d3
    MOV EAX,ESP                         ; 004dc9d6
    PUSH EAX                            ; 004dc9d8
    MOV EDX,dword ptr [0x005bed68]      ; 004dc9d9 | DAT_005bed68
    PUSH EDX                            ; 004dc9df
    CALL core_sound.cpp_FUN_0052ebc0    ; 004dc9e0
        ;   XREF to: 0052ebc0 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_FUN_0052ebc0()
    MOV dword ptr [ESP + 0x74],EAX      ; 004dc9e5
    MOV EAX,dword ptr [ESP + 0x74]      ; 004dc9e9
    MOV dword ptr [ESI + 0xbd3c],EAX    ; 004dc9ed
    ADD ESP,0x8                         ; 004dc9f3
    FLD float ptr [ESI + 0xbd3c]        ; 004dc9f6
    FLDZ                                ; 004dc9fc
    FCOMPP                              ; 004dc9fe
    FNSTSW AX                           ; 004dca00
    SAHF                                ; 004dca02
    JC 0x004dc999                       ; 004dca03
        ;   XREF to: 004dc999 (CONDITIONAL_JUMP)  ; LAB_004dc999
    XOR ECX,ECX                         ; 004dca05
    MOV dword ptr [EBX + 0x1ccdb94],ECX ; 004dca07
    JMP 0x004dc993                      ; 004dca0d
        ;   XREF to: 004dc993 (UNCONDITIONAL_JUMP)  ; LAB_004dc993
    FLD float ptr [ESI + 0xbd3c]        ; 004dca0f
        ;   Label: LAB_004dca0f
    MOV EBX,dword ptr [ESI + 0xbdc4]    ; 004dca15
    FADD float ptr [0x0058a4c9]         ; 004dca1b | FLOAT_0058a4c9
    PUSH EBX                            ; 004dca21
    FSTP float ptr [ESI + 0xbd3c]       ; 004dca22
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004dca28
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 004dca2d
    TEST EAX,EAX                        ; 004dca30
    JNZ 0x004dc9a8                      ; 004dca32
        ;   XREF to: 004dc9a8 (CONDITIONAL_JUMP)  ; LAB_004dc9a8
    MOV dword ptr [ESP + 0x68],EAX      ; 004dca38
    XOR EDI,EDI                         ; 004dca3c
    XOR EBX,EBX                         ; 004dca3e
    MOV EAX,[0x005be368]                ; 004dca40 | DAT_005be368
        ;   Label: LAB_004dca40
    CMP EDI,dword ptr [EAX + 0x150bf4]  ; 004dca45 | DAT_01fa7e78
    JGE 0x004dca9a                      ; 004dca4b
        ;   XREF to: 004dca9a (CONDITIONAL_JUMP)  ; LAB_004dca9a
    MOV EDX,dword ptr [ESP + 0x68]      ; 004dca4d
    MOV ECX,dword ptr [0x01ccdc10]      ; 004dca51 | g_CMobsterActorType_01ccdbd8.name_hash
    ADD EAX,EDX                         ; 004dca57
    PUSH ECX                            ; 004dca59
    MOV ECX,dword ptr [EAX + 0x150bf8]  ; 004dca5a
    PUSH ECX                            ; 004dca60
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004dca61
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004dca66
    TEST EAX,EAX                        ; 004dca69
    JNZ 0x004dca7b                      ; 004dca6b
        ;   XREF to: 004dca7b (CONDITIONAL_JUMP)  ; LAB_004dca7b
    MOV ECX,dword ptr [ESP + 0x68]      ; 004dca6d
        ;   Label: LAB_004dca6d
    ADD ECX,0x4                         ; 004dca71
    INC EDI                             ; 004dca74
    MOV dword ptr [ESP + 0x68],ECX      ; 004dca75
    JMP 0x004dca40                      ; 004dca79
        ;   XREF to: 004dca40 (UNCONDITIONAL_JUMP)  ; LAB_004dca40
    MOV EDX,dword ptr [EAX + 0xbdbc]    ; 004dca7b
        ;   Label: LAB_004dca7b
    PUSH EDX                            ; 004dca81
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004dca82
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 004dca87
    TEST EAX,EAX                        ; 004dca8a
    JZ 0x004dca6d                       ; 004dca8c
        ;   XREF to: 004dca6d (CONDITIONAL_JUMP)  ; LAB_004dca6d
    INC EBX                             ; 004dca8e
    CMP EBX,0x3                         ; 004dca8f
    JG 0x004dc9a8                       ; 004dca92
        ;   XREF to: 004dc9a8 (CONDITIONAL_JUMP)  ; LAB_004dc9a8
    JMP 0x004dca6d                      ; 004dca98
        ;   XREF to: 004dca6d (UNCONDITIONAL_JUMP)  ; LAB_004dca6d
    MOV EAX,ESP                         ; 004dca9a
        ;   Label: LAB_004dca9a
    PUSH EAX                            ; 004dca9c
    MOV EBX,dword ptr [ESI + 0x14c]     ; 004dca9d
    PUSH ESI                            ; 004dcaa3
    CALL dword ptr [EBX + 0x24]         ; 004dcaa4
    ADD ESP,0x8                         ; 004dcaa7
    MOV dword ptr [ESI + 0xbdbc],EAX    ; 004dcaaa
    MOV ESP,EBP                         ; 004dcab0
    POP EBP                             ; 004dcab2
    POP EDI                             ; 004dcab3
    POP ESI                             ; 004dcab4
    POP EBX                             ; 004dcab5
    RET                                 ; 004dcab6

