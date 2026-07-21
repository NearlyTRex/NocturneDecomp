; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00477890(int param_1)
;
; Local Variables:
; undefined        Stack[-0xb0]:1  local_b0
;
; Referenced Globals:
;   string s_shotgun-noammo.wav_0057f119
;   string s_elephantgun.wav_0057f12c
;   undefined4 DAT_0057f13c
;   undefined4 DAT_0057f144
;   undefined4 DAT_0057f14c
;   undefined4 DAT_0057f154
;   undefined4 DAT_0057f15c
;   undefined4 DAT_005b80f0
;   undefined4 DAT_005b9284
;   undefined4 DAT_005be368
;   undefined4 DAT_005bed68
;   undefined4 DAT_00765a98
;   undefined4 DAT_0077bd78
;   undefined4 DAT_01c7068c
;   undefined4 DAT_01c78c78
;   ... and 14 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_getRandomInt_FUN_0040de00
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_crate.cpp_CCrate_explode_FUN_0043cdb0
;   core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_0048af20
;   core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
;   core_setcolid.cpp_CDemonSet_init_FUN_00511750
;   core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800
;   core_sound.cpp_CSound_playActorSound_FUN_0052ea60
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477890
        ;   Label: FUN_00477890
    PUSH ESI                            ; 00477891
    PUSH EDI                            ; 00477892
    PUSH EBP                            ; 00477893
    MOV EBP,ESP                         ; 00477894
    SUB ESP,0x114                       ; 00477896
    AND ESP,0xfffffff8                  ; 0047789c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047789f
    LEA ESI,[ESP + 0x78]                ; 004778a2
    PUSH ESI                            ; 004778a6
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004778a7
    PUSH EBX                            ; 004778ad
    CALL dword ptr [EAX + 0xd8]         ; 004778ae
    ADD ESP,0x8                         ; 004778b4
    PUSH EAX                            ; 004778b7
    LEA EAX,[ESP + 0x58]                ; 004778b8
    PUSH EAX                            ; 004778bc
    PUSH EBX                            ; 004778bd
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004778be
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 004778c3
    PUSH EBX                            ; 004778c6
    CALL core_weapon.cpp_CWeapon_fire_FUN_00554600 ; 004778c7
        ;   XREF to: 00554600 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_CWeapon_fire_FUN_00554600()
    ADD ESP,0x4                         ; 004778cc
    TEST EAX,EAX                        ; 004778cf
    JZ 0x00477bce                       ; 004778d1
        ;   XREF to: 00477bce (CONDITIONAL_JUMP)  ; LAB_00477bce
    FLD float ptr [EBX + 0x570]         ; 004778d7
    FMUL double ptr [0x0057f13c]        ; 004778dd | DAT_0057f13c
    FMUL double ptr [0x0057f144]        ; 004778e3 | DAT_0057f144
    FPTAN                               ; 004778e9
    FSTP ST0                            ; 004778eb
    PUSH 0xf                            ; 004778ed
    FMUL float ptr [EBX + 0x2e0]        ; 004778ef
    PUSH 0xa                            ; 004778f5
    FSTP float ptr [ESP + 0xec]         ; 004778f7
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 004778fe
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomInt_FUN_0040de00()
    ADD ESP,0x8                         ; 00477903
    XOR ECX,ECX                         ; 00477906
    MOV dword ptr [ESP + 0xf0],EAX      ; 00477908
    MOV dword ptr [ESP + 0xe8],ECX      ; 0047790f
    TEST EAX,EAX                        ; 00477916
    JLE 0x00477b1f                      ; 00477918
        ;   XREF to: 00477b1f (CONDITIONAL_JUMP)  ; LAB_00477b1f
    PUSH 0x40c90fdb                     ; 0047791e
        ;   Label: LAB_0047791e
    PUSH 0x0                            ; 00477923
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00477925
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x118],EAX     ; 0047792a
    FLD float ptr [ESP + 0x118]         ; 00477931
    ADD ESP,0x8                         ; 00477938
    PUSH dword ptr [ESP + 0xe4]         ; 0047793b
    PUSH 0x0                            ; 00477942
    FSTP float ptr [ESP + 0xe4]         ; 00477944
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0047794b
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x118],EAX     ; 00477950
    FLD float ptr [ESP + 0x118]         ; 00477957
    ADD ESP,0x8                         ; 0047795e
    FLD float ptr [ESP + 0xdc]          ; 00477961
    FLD ST0                             ; 00477968
    FCOS                                ; 0047796a
    FXCH                                ; 0047796c
    FSIN                                ; 0047796e
    FXCH                                ; 00477970
    FMUL ST2                            ; 00477972
    FXCH                                ; 00477974
    FMULP ST2                           ; 00477976
    FSTP float ptr [ESP + 0x48]         ; 00477978
    FSTP float ptr [ESP + 0x4c]         ; 0047797c
    MOV EAX,dword ptr [EBX + 0x2e0]     ; 00477980
    MOV dword ptr [ESP + 0x50],EAX      ; 00477986
    LEA EAX,[ESP + 0x48]                ; 0047798a
    PUSH EAX                            ; 0047798e
    LEA EAX,[ESP + 0xa0]                ; 0047798f
    PUSH EAX                            ; 00477996
    PUSH EBX                            ; 00477997
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 00477998
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_transformVector_FUN_0040a200()
    MOV ESI,EAX                         ; 0047799d
    LEA EAX,[ESP + 0x54]                ; 0047799f
    ADD ESP,0xc                         ; 004779a3
    CMP EAX,ESI                         ; 004779a6
    JZ 0x004779be                       ; 004779a8
        ;   XREF to: 004779be (CONDITIONAL_JUMP)  ; LAB_004779be
    MOV EAX,dword ptr [ESI]             ; 004779aa
    MOV dword ptr [ESP + 0x48],EAX      ; 004779ac
    MOV EAX,dword ptr [ESI + 0x4]       ; 004779b0
    MOV dword ptr [ESP + 0x4c],EAX      ; 004779b3
    MOV EAX,dword ptr [ESI + 0x8]       ; 004779b7
    MOV dword ptr [ESP + 0x50],EAX      ; 004779ba
    FLD float ptr [ESP + 0x54]          ; 004779be
        ;   Label: LAB_004779be
    FLD float ptr [ESP + 0x58]          ; 004779c2
    FLD float ptr [ESP + 0x5c]          ; 004779c6
    FXCH ST2                            ; 004779ca
    FADD float ptr [ESP + 0x48]         ; 004779cc
    FXCH                                ; 004779d0
    FADD float ptr [ESP + 0x4c]         ; 004779d2
    FXCH ST2                            ; 004779d6
    FADD float ptr [ESP + 0x50]         ; 004779d8
    FXCH                                ; 004779dc
    FSTP float ptr [ESP + 0x6c]         ; 004779de
    FXCH                                ; 004779e2
    FSTP float ptr [ESP + 0x70]         ; 004779e4
    FSTP float ptr [ESP + 0x74]         ; 004779e8
    FLD float ptr [EBX + 0x2e0]         ; 004779ec
    FDIVR double ptr [0x0057f154]       ; 004779f2 | DAT_0057f154
    FLD float ptr [ESP + 0x48]          ; 004779f8
    FXCH                                ; 004779fc
    FSTP float ptr [ESP + 0xec]         ; 004779fe
    FMUL float ptr [ESP + 0xec]         ; 00477a05
    FLD float ptr [ESP + 0x4c]          ; 00477a0c
    FMUL float ptr [ESP + 0xec]         ; 00477a10
    FLD float ptr [ESP + 0x50]          ; 00477a17
    FMUL float ptr [ESP + 0xec]         ; 00477a1b
    FLD float ptr [ESP + 0x54]          ; 00477a22
    FLD float ptr [ESP + 0x58]          ; 00477a26
    MOV ESI,dword ptr [0x005be368]      ; 00477a2a | DAT_005be368
    FLD float ptr [ESP + 0x5c]          ; 00477a30
    PUSH ESI                            ; 00477a34 | DAT_01e57284
    FXCH ST5                            ; 00477a35
    FSTP float ptr [ESP + 0x88]         ; 00477a37
    FXCH ST3                            ; 00477a3e
    FSTP float ptr [ESP + 0x8c]         ; 00477a40
    FXCH                                ; 00477a47
    FSTP float ptr [ESP + 0x90]         ; 00477a49
    FSUB float ptr [ESP + 0x88]         ; 00477a50
    FXCH                                ; 00477a57
    FSUB float ptr [ESP + 0x8c]         ; 00477a59
    FXCH ST2                            ; 00477a60
    FSUB float ptr [ESP + 0x90]         ; 00477a62
    FXCH                                ; 00477a69
    FSTP float ptr [ESP + 0x94]         ; 00477a6b
    FXCH                                ; 00477a72
    FSTP float ptr [ESP + 0x98]         ; 00477a74
    FSTP float ptr [ESP + 0x9c]         ; 00477a7b
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 00477a82
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_init_FUN_00511750()
    ADD ESP,0x4                         ; 00477a87
    PUSH 0x1                            ; 00477a8a
    MOV EDI,dword ptr [0x005be368]      ; 00477a8c | DAT_005be368
    PUSH EDI                            ; 00477a92 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800 ; 00477a93
        ;   XREF to: 00511800 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800()
    ADD ESP,0x8                         ; 00477a98
    PUSH EBX                            ; 00477a9b
    MOV EAX,[0x005be368]                ; 00477a9c | DAT_005be368
    PUSH EAX                            ; 00477aa1 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 00477aa2
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    MOV EDX,dword ptr [EBX + 0x2fc]     ; 00477aa7
    ADD ESP,0x8                         ; 00477aad
    TEST EDX,EDX                        ; 00477ab0
    JNZ 0x00477bf1                      ; 00477ab2
        ;   XREF to: 00477bf1 (CONDITIONAL_JUMP)  ; LAB_00477bf1
    XOR EDI,EDI                         ; 00477ab8
        ;   Label: LAB_00477ab8
    MOV dword ptr [ESP + 0x104],EDI     ; 00477aba
    LEA EAX,[ESP + 0x6c]                ; 00477ac1
        ;   Label: LAB_00477ac1
    PUSH EAX                            ; 00477ac5
    LEA EAX,[ESP + 0x94]                ; 00477ac6
    PUSH EAX                            ; 00477acd
    MOV EAX,[0x005be368]                ; 00477ace | DAT_005be368
    PUSH EAX                            ; 00477ad3 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00 ; 00477ad4
        ;   XREF to: 0050fb00 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00()
    MOV dword ptr [ESP + 0x11c],EAX     ; 00477ad9
    FLD float ptr [ESP + 0x11c]         ; 00477ae0
    ADD ESP,0xc                         ; 00477ae7
    FLDZ                                ; 00477aea
    FXCH                                ; 00477aec
    FST float ptr [ESP + 0x8]           ; 00477aee
    FSTP double ptr [ESP]               ; 00477af2
    FCOMP double ptr [ESP]              ; 00477af5
    FNSTSW AX                           ; 00477af8
    SAHF                                ; 00477afa
    JBE 0x00477c06                      ; 00477afb
        ;   XREF to: 00477c06 (CONDITIONAL_JUMP)  ; LAB_00477c06
    MOV ESI,dword ptr [ESP + 0xe8]      ; 00477b01
        ;   Label: LAB_00477b01
    INC ESI                             ; 00477b08
    MOV EDI,dword ptr [ESP + 0xf0]      ; 00477b09
    MOV dword ptr [ESP + 0xe8],ESI      ; 00477b10
    CMP ESI,EDI                         ; 00477b17
    JL 0x0047791e                       ; 00477b19
        ;   XREF to: 0047791e (CONDITIONAL_JUMP)  ; LAB_0047791e
    MOV EAX,dword ptr [ESP + 0x54]      ; 00477b1f
        ;   Label: LAB_00477b1f
    MOV dword ptr [ESP + 0xa8],EAX      ; 00477b23
    MOV EAX,dword ptr [ESP + 0x58]      ; 00477b2a
    MOV dword ptr [ESP + 0xac],EAX      ; 00477b2e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00477b35
    MOV dword ptr [ESP + 0xb0],EAX      ; 00477b39
    LEA EAX,[EBX + 0x3c]                ; 00477b40
    PUSH EAX                            ; 00477b43
    LEA EAX,[ESP + 0xac]                ; 00477b44
    FLD float ptr [ESP + 0xb0]          ; 00477b4b
    PUSH EAX                            ; 00477b52
    MOV EAX,[0x005b80f0]                ; 00477b53 | DAT_005b80f0
    FADD float ptr [0x0057f14c]         ; 00477b58 | DAT_0057f14c
    PUSH EAX                            ; 00477b5e
    FSTP float ptr [ESP + 0xb8]         ; 00477b5f
    CALL core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_0048af20 ; 00477b66
        ;   XREF to: 0048af20 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_0048af20()
    ADD ESP,0xc                         ; 00477b6b
    LEA EAX,[ESP + 0x54]                ; 00477b6e
    PUSH EAX                            ; 00477b72
    PUSH 0x57f12c                       ; 00477b73 | = "elephantgun.wav"
    PUSH EBX                            ; 00477b78
    MOV EDX,dword ptr [0x005bed68]      ; 00477b79 | DAT_005bed68
    PUSH EDX                            ; 00477b7f
    CALL core_sound.cpp_CSound_playActorSound_FUN_0052ea60 ; 00477b80
        ;   XREF to: 0052ea60 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_playActorSound_FUN_0052ea60()
    ADD ESP,0x10                        ; 00477b85
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00477b88
    PUSH EBX                            ; 00477b8e
    MOV dword ptr [EBX + 0x2f8],0x3f800000 ; 00477b8f
    CALL dword ptr [EAX + 0x8c]         ; 00477b99
    MOV EBX,dword ptr [0x01cae0e8]      ; 00477b9f | DAT_01cae0e8
    MOV ECX,dword ptr [EBX*0x4 + 0x1cae0d8] ; 00477ba5
    ADD ESP,0x4                         ; 00477bac
    CMP EAX,ECX                         ; 00477baf
    JNZ 0x00477bc2                      ; 00477bb1
        ;   XREF to: 00477bc2 (CONDITIONAL_JUMP)  ; LAB_00477bc2
    MOV EBX,dword ptr [0x005b9284]      ; 00477bb3 | DAT_005b9284
    PUSH EBX                            ; 00477bb9
    CALL FUN_004940d0                   ; 00477bba
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004940d0()
    ADD ESP,0x4                         ; 00477bbf
    MOV EAX,0x1                         ; 00477bc2
        ;   Label: LAB_00477bc2
    MOV ESP,EBP                         ; 00477bc7
    POP EBP                             ; 00477bc9
    POP EDI                             ; 00477bca
    POP ESI                             ; 00477bcb
    POP EBX                             ; 00477bcc
    RET                                 ; 00477bcd
    LEA EAX,[ESP + 0x54]                ; 00477bce
        ;   Label: LAB_00477bce
    PUSH EAX                            ; 00477bd2
    PUSH 0x57f119                       ; 00477bd3 | = "shotgun-noammo.wav"
    PUSH EBX                            ; 00477bd8
    MOV EDX,dword ptr [0x005bed68]      ; 00477bd9 | DAT_005bed68
    PUSH EDX                            ; 00477bdf
    CALL core_sound.cpp_CSound_playActorSound_FUN_0052ea60 ; 00477be0
        ;   XREF to: 0052ea60 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_playActorSound_FUN_0052ea60()
    ADD ESP,0x10                        ; 00477be5
    XOR EAX,EAX                         ; 00477be8
    MOV ESP,EBP                         ; 00477bea
    POP EBP                             ; 00477bec
    POP EDI                             ; 00477bed
    POP ESI                             ; 00477bee
    POP EBX                             ; 00477bef
    RET                                 ; 00477bf0
    PUSH EDX                            ; 00477bf1
        ;   Label: LAB_00477bf1
    MOV ESI,dword ptr [0x005be368]      ; 00477bf2 | DAT_005be368
    PUSH ESI                            ; 00477bf8 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 00477bf9
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    ADD ESP,0x8                         ; 00477bfe
    JMP 0x00477ab8                      ; 00477c01
        ;   XREF to: 00477ab8 (UNCONDITIONAL_JUMP)  ; LAB_00477ab8
    FLD1                                ; 00477c06
        ;   Label: LAB_00477c06
    FCOMP double ptr [ESP]              ; 00477c08
    FNSTSW AX                           ; 00477c0b
    SAHF                                ; 00477c0d
    JC 0x00477b01                       ; 00477c0e
        ;   XREF to: 00477b01 (CONDITIONAL_JUMP)  ; LAB_00477b01
    MOV EDX,dword ptr [0x00765a98]      ; 00477c14 | DAT_00765a98
    MOV EAX,[0x005be368]                ; 00477c1a | DAT_005be368
    PUSH EDX                            ; 00477c1f
    MOV ECX,dword ptr [EAX + 0x14cd5c]  ; 00477c20 | DAT_01fa3fe0
    PUSH ECX                            ; 00477c26
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00477c27
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 00477c2c
    MOV ESI,EAX                         ; 00477c2f
    TEST EAX,EAX                        ; 00477c31
    JZ 0x00477c4b                       ; 00477c33
        ;   XREF to: 00477c4b (CONDITIONAL_JUMP)  ; LAB_00477c4b
    PUSH EAX                            ; 00477c35
    MOV EDI,dword ptr [EAX + 0x14c]     ; 00477c36
    CALL dword ptr [EDI + 0x104]        ; 00477c3c
    ADD ESP,0x4                         ; 00477c42
    TEST EAX,EAX                        ; 00477c45
    JLE 0x00477c4b                      ; 00477c47
        ;   XREF to: 00477c4b (CONDITIONAL_JUMP)  ; LAB_00477c4b
    XOR ESI,ESI                         ; 00477c49
    MOV EDI,dword ptr [0x01c78c78]      ; 00477c4b | DAT_01c78c78
        ;   Label: LAB_00477c4b
    MOV EAX,[0x005be368]                ; 00477c51 | DAT_005be368
    PUSH EDI                            ; 00477c56
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 00477c57 | DAT_01fa3fe0
    PUSH EDX                            ; 00477c5d
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00477c5e
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    MOV dword ptr [ESP + 0x110],EAX     ; 00477c63
    ADD ESP,0x8                         ; 00477c6a
    MOV ECX,dword ptr [0x02dd10bc]      ; 00477c6d | DAT_02dd10bc
    MOV EAX,[0x005be368]                ; 00477c73 | DAT_005be368
    PUSH ECX                            ; 00477c78
    MOV EDI,dword ptr [EAX + 0x14cd5c]  ; 00477c79 | DAT_01fa3fe0
    PUSH EDI                            ; 00477c7f
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00477c80
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 00477c85
    MOV EDI,EAX                         ; 00477c88
    MOV dword ptr [ESP + 0xf4],EAX      ; 00477c8a
    MOV EAX,[0x0077bd78]                ; 00477c91 | DAT_0077bd78
    PUSH EAX                            ; 00477c96
    MOV EAX,[0x005be368]                ; 00477c97 | DAT_005be368
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 00477c9c | DAT_01fa3fe0
    PUSH EDX                            ; 00477ca2
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00477ca3
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    MOV dword ptr [ESP + 0x108],EAX     ; 00477ca8
    ADD ESP,0x8                         ; 00477caf
    MOV ECX,dword ptr [0x01c7068c]      ; 00477cb2 | DAT_01c7068c
    MOV EAX,[0x005be368]                ; 00477cb8 | DAT_005be368
    PUSH ECX                            ; 00477cbd
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 00477cbe | DAT_01fa3fe0
    PUSH EDX                            ; 00477cc4
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00477cc5
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    MOV dword ptr [ESP + 0x100],EAX     ; 00477cca
    ADD ESP,0x8                         ; 00477cd1
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00477cd4
    PUSH EBX                            ; 00477cda
    CALL dword ptr [EAX + 0xe4]         ; 00477cdb
    MOV dword ptr [ESP + 0x114],EAX     ; 00477ce1
    FLD float ptr [ESP + 0x114]         ; 00477ce8
    ADD ESP,0x4                         ; 00477cef
    FLD1                                ; 00477cf2
    FSUB float ptr [ESP + 0x8]          ; 00477cf4
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00477cf8
    FMULP                               ; 00477cff
    MOV dword ptr [ESP + 0x110],EAX     ; 00477d01
    FILD dword ptr [ESP + 0x110]        ; 00477d08
    FDIVP                               ; 00477d0f
    FSTP float ptr [ESP + 0xfc]         ; 00477d11
    TEST ESI,ESI                        ; 00477d18
    JNZ 0x00477d76                      ; 00477d1a
        ;   XREF to: 00477d76 (CONDITIONAL_JUMP)  ; LAB_00477d76
    MOV ECX,dword ptr [ESP + 0x108]     ; 00477d1c
    TEST ECX,ECX                        ; 00477d23
    JNZ 0x00477f25                      ; 00477d25
        ;   XREF to: 00477f25 (CONDITIONAL_JUMP)  ; LAB_00477f25
    TEST EDI,EDI                        ; 00477d2b
    JZ 0x00477f53                       ; 00477d2d
        ;   XREF to: 00477f53 (CONDITIONAL_JUMP)  ; LAB_00477f53
    PUSH EDI                            ; 00477d33
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_00548580 ; 00477d34
        ;   XREF to: 00548580 (UNCONDITIONAL_CALL)  ; undefined core_trigger.cpp_CTrigger_onProjectileHit_FUN_00548580()
    ADD ESP,0x4                         ; 00477d39
    PUSH EBX                            ; 00477d3c
    PUSH EDI                            ; 00477d3d
    CALL FUN_005485a0                   ; 00477d3e
        ;   XREF to: 005485a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005485a0()
    ADD ESP,0x8                         ; 00477d43
    TEST EAX,EAX                        ; 00477d46
    JZ 0x00477d5a                       ; 00477d48
        ;   XREF to: 00477d5a (CONDITIONAL_JUMP)  ; LAB_00477d5a
    PUSH dword ptr [ESP + 0xfc]         ; 00477d4a
    PUSH EDI                            ; 00477d51
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_005485e0 ; 00477d52
        ;   XREF to: 005485e0 (UNCONDITIONAL_CALL)  ; undefined core_trigger.cpp_CTrigger_applyDamage_FUN_005485e0()
    ADD ESP,0x8                         ; 00477d57
    MOV EDX,dword ptr [ESP + 0xf4]      ; 00477d5a
        ;   Label: LAB_00477d5a
    PUSH EDX                            ; 00477d61
    MOV ECX,dword ptr [0x005be368]      ; 00477d62 | DAT_005be368
    PUSH ECX                            ; 00477d68 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 00477d69
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    ADD ESP,0x8                         ; 00477d6e
    JMP 0x00477f7d                      ; 00477d71
        ;   XREF to: 00477f7d (UNCONDITIONAL_JUMP)  ; LAB_00477f7d
    PUSH ESI                            ; 00477d76
        ;   Label: LAB_00477d76
    MOV EAX,dword ptr [ESI + 0x14c]     ; 00477d77
    CALL dword ptr [EAX + 0xd8]         ; 00477d7d
    ADD ESP,0x4                         ; 00477d83
    TEST EAX,EAX                        ; 00477d86
    JNZ 0x00477b01                      ; 00477d88
        ;   XREF to: 00477b01 (CONDITIONAL_JUMP)  ; LAB_00477b01
    LEA EAX,[ESP + 0xc]                 ; 00477d8e
    PUSH EAX                            ; 00477d92
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 00477d93
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    MOV EDI,dword ptr [0x005be368]      ; 00477d98 | DAT_005be368
    ADD ESP,0x4                         ; 00477d9e
    MOV EAX,dword ptr [EDI + 0x14cd60]  ; 00477da1 | DAT_01fa3fe4
    MOV dword ptr [ESP + 0xc],EAX       ; 00477da7
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00477dab
    MOV dword ptr [ESP + 0x10],EAX      ; 00477db2
    MOV dword ptr [ESP + 0x14],0x3ecccccd ; 00477db6
    LEA EAX,[EDI + 0x14cd34]            ; 00477dbe
    FLD float ptr [EAX]                 ; 00477dc4 | DAT_01fa3fb8
    FSUB float ptr [EDI + 0x14cd28]     ; 00477dc6 | DAT_01fa3fac
    FSTP float ptr [ESP + 0xb4]         ; 00477dcc
    FLD float ptr [EAX + 0x4]           ; 00477dd3 | DAT_01fa3fbc
    FSUB float ptr [EDI + 0x14cd2c]     ; 00477dd6 | DAT_01fa3fb0
    FST float ptr [ESP + 0xb8]          ; 00477ddc
    FMUL float ptr [ESP + 0xb8]         ; 00477de3
    FLD float ptr [ESP + 0xb4]          ; 00477dea
    FMUL ST0                            ; 00477df1
    FLD float ptr [EAX + 0x8]           ; 00477df3 | DAT_01fa3fc0
    FSUB float ptr [EDI + 0x14cd30]     ; 00477df6 | DAT_01fa3fb4
    FXCH                                ; 00477dfc
    FADDP ST2,ST0                       ; 00477dfe
    FST float ptr [ESP + 0xbc]          ; 00477e00
    FMUL float ptr [ESP + 0xbc]         ; 00477e07
    FADDP                               ; 00477e0e
    FSQRT                               ; 00477e10
    FDIVR double ptr [0x0057f15c]       ; 00477e12 | DAT_0057f15c
    FLD float ptr [ESP + 0xb4]          ; 00477e18
    FXCH                                ; 00477e1f
    FSTP float ptr [ESP + 0x10c]        ; 00477e21
    FMUL float ptr [ESP + 0x10c]        ; 00477e28
    FLD float ptr [ESP + 0xb8]          ; 00477e2f
    FMUL float ptr [ESP + 0x10c]        ; 00477e36
    FLD float ptr [ESP + 0xbc]          ; 00477e3d
    FMUL float ptr [ESP + 0x10c]        ; 00477e44
    LEA EDI,[ESP + 0x18]                ; 00477e4b
    LEA EAX,[ESP + 0x60]                ; 00477e4f
    FXCH ST2                            ; 00477e53
    FSTP float ptr [ESP + 0x60]         ; 00477e55
    FSTP float ptr [ESP + 0x64]         ; 00477e59
    FSTP float ptr [ESP + 0x68]         ; 00477e5d
    CMP EDI,EAX                         ; 00477e61
    JZ 0x00477e7d                       ; 00477e63
        ;   XREF to: 00477e7d (CONDITIONAL_JUMP)  ; LAB_00477e7d
    MOV EAX,dword ptr [ESP + 0x60]      ; 00477e65
    MOV dword ptr [ESP + 0x18],EAX      ; 00477e69
    MOV EAX,dword ptr [ESP + 0x64]      ; 00477e6d
    MOV dword ptr [ESP + 0x1c],EAX      ; 00477e71
    MOV EAX,dword ptr [ESP + 0x68]      ; 00477e75
    MOV dword ptr [ESP + 0x20],EAX      ; 00477e79
    MOV EAX,[0x005be368]                ; 00477e7d | DAT_005be368
        ;   Label: LAB_00477e7d
    ADD EAX,0x14cd50                    ; 00477e82
    PUSH EAX                            ; 00477e87 | DAT_01fa3fd4
    LEA EAX,[ESP + 0xc4]                ; 00477e88
    PUSH EAX                            ; 00477e8f
    PUSH ESI                            ; 00477e90
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 00477e91
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    MOV EDI,EAX                         ; 00477e96
    LEA EAX,[ESP + 0x34]                ; 00477e98
    ADD ESP,0xc                         ; 00477e9c
    CMP EAX,EDI                         ; 00477e9f
    JZ 0x00477eb7                       ; 00477ea1
        ;   XREF to: 00477eb7 (CONDITIONAL_JUMP)  ; LAB_00477eb7
    MOV EAX,dword ptr [EDI]             ; 00477ea3
    MOV dword ptr [ESP + 0x28],EAX      ; 00477ea5
    MOV EAX,dword ptr [EDI + 0x4]       ; 00477ea9
    MOV dword ptr [ESP + 0x2c],EAX      ; 00477eac
    MOV EAX,dword ptr [EDI + 0x8]       ; 00477eb0
    MOV dword ptr [ESP + 0x30],EAX      ; 00477eb3
    MOV EDX,0x6b                        ; 00477eb7
        ;   Label: LAB_00477eb7
    MOV EAX,dword ptr [EBX + 0x564]     ; 00477ebc
    MOV ECX,0x3f800000                  ; 00477ec2
    MOV dword ptr [ESP + 0x34],EAX      ; 00477ec7
    MOV dword ptr [ESP + 0x3c],EDX      ; 00477ecb
    MOV dword ptr [ESP + 0x38],ECX      ; 00477ecf
    MOV dword ptr [ESP + 0x40],EBX      ; 00477ed3
    PUSH EBX                            ; 00477ed7
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00477ed8
    CALL dword ptr [EAX + 0x8c]         ; 00477ede
    ADD ESP,0x4                         ; 00477ee4
    MOV dword ptr [ESP + 0x44],EAX      ; 00477ee7
    LEA EAX,[ESP + 0xc]                 ; 00477eeb
    PUSH EAX                            ; 00477eef
    MOV EDI,dword ptr [ESI + 0x14c]     ; 00477ef0
    PUSH ESI                            ; 00477ef6
    CALL dword ptr [EDI + 0x100]        ; 00477ef7
    MOV ESI,dword ptr [EBX + 0x2dc]     ; 00477efd
    ADD ESP,0x8                         ; 00477f03
    TEST ESI,ESI                        ; 00477f06
    JZ 0x00477b01                       ; 00477f08
        ;   XREF to: 00477b01 (CONDITIONAL_JUMP)  ; LAB_00477b01
    MOV EAX,[0x005be368]                ; 00477f0e | DAT_005be368
    MOV EDI,dword ptr [EAX + 0x14cd5c]  ; 00477f13 | DAT_01fa3fe0
    PUSH EDI                            ; 00477f19
    PUSH EAX                            ; 00477f1a | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 00477f1b
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    ADD ESP,0x8                         ; 00477f20
    JMP 0x00477f7d                      ; 00477f23
        ;   XREF to: 00477f7d (UNCONDITIONAL_JUMP)  ; LAB_00477f7d
    PUSH ECX                            ; 00477f25
        ;   Label: LAB_00477f25
    CALL FUN_004aded0                   ; 00477f26
        ;   XREF to: 004aded0 (UNCONDITIONAL_CALL)  ; undefined FUN_004aded0()
    ADD ESP,0x4                         ; 00477f2b
    TEST EAX,EAX                        ; 00477f2e
    JZ 0x00477b01                       ; 00477f30
        ;   XREF to: 00477b01 (CONDITIONAL_JUMP)  ; LAB_00477b01
    MOV EAX,[0x005be368]                ; 00477f36 | DAT_005be368
    ADD EAX,0x14cd50                    ; 00477f3b
    PUSH EAX                            ; 00477f40 | DAT_01fa3fd4
    MOV EDI,dword ptr [ESP + 0x10c]     ; 00477f41
    PUSH EDI                            ; 00477f48
    CALL FUN_004ada20                   ; 00477f49
        ;   XREF to: 004ada20 (UNCONDITIONAL_CALL)  ; undefined FUN_004ada20()
    ADD ESP,0x8                         ; 00477f4e
    JMP 0x00477f7d                      ; 00477f51
        ;   XREF to: 00477f7d (UNCONDITIONAL_JUMP)  ; LAB_00477f7d
    MOV ESI,dword ptr [ESP + 0x100]     ; 00477f53
        ;   Label: LAB_00477f53
    TEST ESI,ESI                        ; 00477f5a
    JNZ 0x00477f74                      ; 00477f5c
        ;   XREF to: 00477f74 (CONDITIONAL_JUMP)  ; LAB_00477f74
    MOV EDI,dword ptr [ESP + 0xf8]      ; 00477f5e
    TEST EDI,EDI                        ; 00477f65
    JZ 0x00477f9a                       ; 00477f67
        ;   XREF to: 00477f9a (CONDITIONAL_JUMP)  ; LAB_00477f9a
    PUSH EDI                            ; 00477f69
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550 ; 00477f6a
        ;   XREF to: 0048e550 (UNCONDITIONAL_CALL)  ; undefined core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550()
    ADD ESP,0x4                         ; 00477f6f
    JMP 0x00477f7d                      ; 00477f72
        ;   XREF to: 00477f7d (UNCONDITIONAL_JUMP)  ; LAB_00477f7d
    PUSH ESI                            ; 00477f74
        ;   Label: LAB_00477f74
    CALL core_crate.cpp_CCrate_explode_FUN_0043cdb0 ; 00477f75
        ;   XREF to: 0043cdb0 (UNCONDITIONAL_CALL)  ; undefined core_crate.cpp_CCrate_explode_FUN_0043cdb0()
    ADD ESP,0x4                         ; 00477f7a
    MOV EAX,dword ptr [ESP + 0x104]     ; 00477f7d
        ;   Label: LAB_00477f7d
    INC EAX                             ; 00477f84
    MOV dword ptr [ESP + 0x104],EAX     ; 00477f85
    CMP EAX,0x4                         ; 00477f8c
    JL 0x00477ac1                       ; 00477f8f
        ;   XREF to: 00477ac1 (CONDITIONAL_JUMP)  ; LAB_00477ac1
    JMP 0x00477b01                      ; 00477f95
        ;   XREF to: 00477b01 (UNCONDITIONAL_JUMP)  ; LAB_00477b01
    MOV EAX,[0x005be368]                ; 00477f9a | DAT_005be368
        ;   Label: LAB_00477f9a
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 00477f9f | DAT_01fa3fe0
    PUSH EDX                            ; 00477fa5
    MOV ECX,dword ptr [EAX + 0x14cd4c]  ; 00477fa6 | DAT_01fa3fd0
    PUSH ECX                            ; 00477fac
    LEA ESI,[EAX + 0x14cd40]            ; 00477fad
    PUSH ESI                            ; 00477fb3 | DAT_01fa3fc4
    ADD EAX,0x14cd50                    ; 00477fb4
    PUSH EAX                            ; 00477fb9 | DAT_01fa3fd4
    MOV ESI,dword ptr [0x005b80f0]      ; 00477fba | DAT_005b80f0
    PUSH ESI                            ; 00477fc0
    CALL FUN_0048ab60                   ; 00477fc1
        ;   XREF to: 0048ab60 (UNCONDITIONAL_CALL)  ; undefined FUN_0048ab60()
    ADD ESP,0x14                        ; 00477fc6
    JMP 0x00477b01                      ; 00477fc9
        ;   XREF to: 00477b01 (UNCONDITIONAL_JUMP)  ; LAB_00477b01

