; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_firestff_cpp_CFirestaff_process_FUN_004a4dc0(CFirestaff *this_ptr,float delta_time)
;
; Parameters:
; CFirestaff *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_006045f8
;   undefined4 g_CEnemyClassInfo.name_hash
;   undefined4 g_CHeroClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0
;   core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005372f0
;   core_sound.cpp_CSound_playActorSound_FUN_005609d0
;   core_weapon.cpp_CWeapon_process_FUN_0057b160
;   sound_sndmain.cpp_isSfxPlaying_FUN_00556700
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a4dc0
        ;   Label: core_firestff.cpp_CFirestaff_process_FUN_004a4dc0
    PUSH ESI                            ; 004a4dc1
    PUSH EDI                            ; 004a4dc2
    PUSH EBP                            ; 004a4dc3
    SUB ESP,0x27c                       ; 004a4dc4
    MOV EBP,dword ptr [ESP + 0x290]     ; 004a4dca
    PUSH dword ptr [ESP + 0x294]        ; 004a4dd1
    PUSH EBP                            ; 004a4dd8
    CALL core_weapon.cpp_CWeapon_process_FUN_0057b160 ; 004a4dd9
        ;   XREF to: 0057b160 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_0057b160(CWeapon * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBP + 0x2d4]     ; 004a4dde
    ADD ESP,0x8                         ; 004a4de4
    CMP EDX,0x2                         ; 004a4de7
    JNZ 0x004a4e28                      ; 004a4dea
        ;   XREF to: 004a4e28 (CONDITIONAL_JUMP)  ; LAB_004a4e28
    MOV ESI,dword ptr [0x01d5ba70]      ; 004a4dec | g_CHeroClassInfo.name_hash
        ;   Label: LAB_004a4dec
    PUSH ESI                            ; 004a4df2
    MOV EDI,dword ptr [EBP + 0x304]     ; 004a4df3
    PUSH EDI                            ; 004a4df9
    MOV EBX,0x1                         ; 004a4dfa
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004a4dff
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004a4e04
    TEST EAX,EAX                        ; 004a4e07
    JZ 0x004a4e19                       ; 004a4e09
        ;   XREF to: 004a4e19 (CONDITIONAL_JUMP)  ; LAB_004a4e19
    MOV EDX,dword ptr [EBP + 0x58c]     ; 004a4e0b
    CMP EDX,dword ptr [EAX + 0x20b80]   ; 004a4e11
    JG 0x004a4e44                       ; 004a4e17
        ;   XREF to: 004a4e44 (CONDITIONAL_JUMP)  ; LAB_004a4e44
    TEST EBX,EBX                        ; 004a4e19
        ;   Label: LAB_004a4e19
    JNZ 0x004a4e5f                      ; 004a4e1b
        ;   XREF to: 004a4e5f (CONDITIONAL_JUMP)  ; LAB_004a4e5f
    ADD ESP,0x27c                       ; 004a4e1d
        ;   Label: LAB_004a4e1d
    POP EBP                             ; 004a4e23
    POP EDI                             ; 004a4e24
    POP ESI                             ; 004a4e25
    POP EBX                             ; 004a4e26
    RET                                 ; 004a4e27
    MOV ECX,dword ptr [0x01c5bc48]      ; 004a4e28 | g_CEnemyClassInfo.name_hash
        ;   Label: LAB_004a4e28
    PUSH ECX                            ; 004a4e2e
    MOV EBX,dword ptr [EBP + 0x304]     ; 004a4e2f
    PUSH EBX                            ; 004a4e35
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004a4e36
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004a4e3b
    TEST EAX,EAX                        ; 004a4e3e
    JNZ 0x004a4dec                      ; 004a4e40
        ;   XREF to: 004a4dec (CONDITIONAL_JUMP)  ; LAB_004a4dec
    JMP 0x004a4e1d                      ; 004a4e42
        ;   XREF to: 004a4e1d (UNCONDITIONAL_JUMP)  ; LAB_004a4e1d
    MOV ESI,dword ptr [EBP + 0x25c4]    ; 004a4e44
        ;   Label: LAB_004a4e44
    PUSH ESI                            ; 004a4e4a
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 004a4e4b
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 004a4e50
    MOV dword ptr [EBP + 0x25c4],0x0    ; 004a4e53
    JMP 0x004a4e1d                      ; 004a4e5d
        ;   XREF to: 004a4e1d (UNCONDITIONAL_JUMP)  ; LAB_004a4e1d
    MOV ECX,dword ptr [EBP + 0x25c4]    ; 004a4e5f
        ;   Label: LAB_004a4e5f
    PUSH ECX                            ; 004a4e65
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00556700 ; 004a4e66
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 004a4e6b
    TEST EAX,EAX                        ; 004a4e6e
    JZ 0x004a573d                       ; 004a4e70
        ;   XREF to: 004a573d (CONDITIONAL_JUMP)  ; LAB_004a573d
    MOV EDI,0x40200000                  ; 004a4e76
        ;   Label: LAB_004a4e76
    XOR ESI,ESI                         ; 004a4e7b
    LEA EAX,[ESP + 0xc0]                ; 004a4e7d
    MOV dword ptr [ESP + 0xc0],ESI      ; 004a4e84
    PUSH EAX                            ; 004a4e8b
    MOV dword ptr [ESP + 0xc8],EDI      ; 004a4e8c
    MOV dword ptr [ESP + 0xcc],ESI      ; 004a4e93
    PUSH EBP                            ; 004a4e9a
    LEA ESI,[ESP + 0x20]                ; 004a4e9b
    LEA EDI,[ESP + 0x224]               ; 004a4e9f
    CALL core_actor.cpp_FUN_00408b80    ; 004a4ea6
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x20]                ; 004a4eab
    ADD ESP,0x8                         ; 004a4eaf
    MOVSD ES:EDI,ESI                    ; 004a4eb2
    MOVSD ES:EDI,ESI                    ; 004a4eb3
    MOVSD ES:EDI,ESI                    ; 004a4eb4
    LEA EDX,[EBP + 0x634]               ; 004a4eb5
    MOV EAX,dword ptr [ESP + 0x21c]     ; 004a4ebb
    MOV dword ptr [EDX],EAX             ; 004a4ec2
    MOV EAX,dword ptr [ESP + 0x220]     ; 004a4ec4
    MOV ECX,0x40300000                  ; 004a4ecb
    MOV dword ptr [EDX + 0x4],EAX       ; 004a4ed0
    MOV EAX,dword ptr [ESP + 0x224]     ; 004a4ed3
    LEA ESI,[ESP + 0x3c]                ; 004a4eda
    MOV dword ptr [EDX + 0x8],EAX       ; 004a4ede
    LEA EAX,[ESP + 0xf0]                ; 004a4ee1
    LEA EDI,[ESP + 0x168]               ; 004a4ee8
    PUSH EAX                            ; 004a4eef
    MOV dword ptr [ESP + 0xf8],ECX      ; 004a4ef0
    XOR EDX,EDX                         ; 004a4ef7
    PUSH EBP                            ; 004a4ef9
    MOV dword ptr [ESP + 0xf8],EDX      ; 004a4efa
    MOV dword ptr [ESP + 0x100],EDX     ; 004a4f01
    CALL core_actor.cpp_FUN_00408b80    ; 004a4f08
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x44]                ; 004a4f0d
    ADD ESP,0x8                         ; 004a4f11
    MOVSD ES:EDI,ESI                    ; 004a4f14
    MOVSD ES:EDI,ESI                    ; 004a4f15
    MOVSD ES:EDI,ESI                    ; 004a4f16
    LEA EDX,[EBP + 0x8d8]               ; 004a4f17
    MOV EAX,dword ptr [ESP + 0x168]     ; 004a4f1d
    MOV dword ptr [EDX],EAX             ; 004a4f24
    MOV EAX,dword ptr [ESP + 0x16c]     ; 004a4f26
    MOV EDI,0x40400000                  ; 004a4f2d
    MOV dword ptr [EDX + 0x4],EAX       ; 004a4f32
    MOV EAX,dword ptr [ESP + 0x170]     ; 004a4f35
    XOR ESI,ESI                         ; 004a4f3c
    MOV dword ptr [EDX + 0x8],EAX       ; 004a4f3e
    LEA EAX,[ESP + 0x120]               ; 004a4f41
    MOV dword ptr [ESP + 0x120],ESI     ; 004a4f48
    PUSH EAX                            ; 004a4f4f
    MOV dword ptr [ESP + 0x128],EDI     ; 004a4f50
    MOV dword ptr [ESP + 0x12c],ESI     ; 004a4f57
    PUSH EBP                            ; 004a4f5e
    LEA ESI,[ESP + 0x50]                ; 004a4f5f
    LEA EDI,[ESP + 0xe0]                ; 004a4f63
    CALL core_actor.cpp_FUN_00408b80    ; 004a4f6a
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x50]                ; 004a4f6f
    ADD ESP,0x8                         ; 004a4f73
    MOVSD ES:EDI,ESI                    ; 004a4f76
    MOVSD ES:EDI,ESI                    ; 004a4f77
    MOVSD ES:EDI,ESI                    ; 004a4f78
    LEA EDX,[EBP + 0xb7c]               ; 004a4f79
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004a4f7f
    XOR EBX,EBX                         ; 004a4f86
    MOV dword ptr [EDX],EAX             ; 004a4f88
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004a4f8a
    MOV ECX,0x40500000                  ; 004a4f91
    MOV dword ptr [EDX + 0x4],EAX       ; 004a4f96
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004a4f99
    LEA ESI,[ESP + 0x54]                ; 004a4fa0
    MOV dword ptr [EDX + 0x8],EAX       ; 004a4fa4
    LEA EAX,[ESP + 0x15c]               ; 004a4fa7
    LEA EDI,[ESP + 0x6c]                ; 004a4fae
    PUSH EAX                            ; 004a4fb2
    MOV dword ptr [ESP + 0x164],ECX     ; 004a4fb3
    XOR EDX,EDX                         ; 004a4fba
    PUSH EBP                            ; 004a4fbc
    MOV dword ptr [ESP + 0x16c],EBX     ; 004a4fbd
    MOV dword ptr [ESP + 0x164],EDX     ; 004a4fc4
    CALL core_actor.cpp_FUN_00408b80    ; 004a4fcb
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x5c]                ; 004a4fd0
    ADD ESP,0x8                         ; 004a4fd4
    MOVSD ES:EDI,ESI                    ; 004a4fd7
    MOVSD ES:EDI,ESI                    ; 004a4fd8
    MOVSD ES:EDI,ESI                    ; 004a4fd9
    LEA EDX,[EBP + 0xe20]               ; 004a4fda
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004a4fe0
    MOV dword ptr [EDX],EAX             ; 004a4fe4
    MOV EAX,dword ptr [ESP + 0x70]      ; 004a4fe6
    MOV EDI,0x40600000                  ; 004a4fea
    MOV dword ptr [EDX + 0x4],EAX       ; 004a4fef
    MOV EAX,dword ptr [ESP + 0x74]      ; 004a4ff2
    XOR ESI,ESI                         ; 004a4ff6
    MOV dword ptr [EDX + 0x8],EAX       ; 004a4ff8
    LEA EAX,[ESP + 0x1a4]               ; 004a4ffb
    MOV dword ptr [ESP + 0x1a4],ESI     ; 004a5002
    PUSH EAX                            ; 004a5009
    MOV dword ptr [ESP + 0x1ac],EDI     ; 004a500a
    MOV dword ptr [ESP + 0x1b0],ESI     ; 004a5011
    PUSH EBP                            ; 004a5018
    LEA ESI,[ESP + 0x1e8]               ; 004a5019
    LEA EDI,[ESP + 0x8c]                ; 004a5020
    CALL core_actor.cpp_FUN_00408b80    ; 004a5027
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x1e8]               ; 004a502c
    ADD ESP,0x8                         ; 004a5033
    MOVSD ES:EDI,ESI                    ; 004a5036
    MOVSD ES:EDI,ESI                    ; 004a5037
    MOVSD ES:EDI,ESI                    ; 004a5038
    LEA EDX,[EBP + 0x10c4]              ; 004a5039
    MOV EAX,dword ptr [ESP + 0x84]      ; 004a503f
    MOV dword ptr [EDX],EAX             ; 004a5046
    MOV EAX,dword ptr [ESP + 0x88]      ; 004a5048
    MOV dword ptr [EDX + 0x4],EAX       ; 004a504f
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004a5052
    MOV dword ptr [EDX + 0x8],EAX       ; 004a5059
    MOV ECX,0x40700000                  ; 004a505c
    LEA EAX,[ESP + 0x1b0]               ; 004a5061
    LEA ESI,[ESP + 0x174]               ; 004a5068
    LEA EDI,[ESP + 0x1ec]               ; 004a506f
    PUSH EAX                            ; 004a5076
    MOV dword ptr [ESP + 0x1bc],EBX     ; 004a5077
    XOR EDX,EDX                         ; 004a507e
    PUSH EBP                            ; 004a5080
    MOV dword ptr [ESP + 0x1b8],EDX     ; 004a5081
    MOV dword ptr [ESP + 0x1bc],ECX     ; 004a5088
    CALL core_actor.cpp_FUN_00408b80    ; 004a508f
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x17c]               ; 004a5094
    ADD ESP,0x8                         ; 004a509b
    MOVSD ES:EDI,ESI                    ; 004a509e
    MOVSD ES:EDI,ESI                    ; 004a509f
    MOVSD ES:EDI,ESI                    ; 004a50a0
    LEA EDX,[EBP + 0x1368]              ; 004a50a1
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 004a50a7
    MOV dword ptr [EDX],EAX             ; 004a50ae
    MOV EAX,dword ptr [ESP + 0x1f0]     ; 004a50b0
    MOV EDI,0xc0200000                  ; 004a50b7
    MOV dword ptr [EDX + 0x4],EAX       ; 004a50bc
    MOV EAX,dword ptr [ESP + 0x1f4]     ; 004a50bf
    XOR ESI,ESI                         ; 004a50c6
    MOV dword ptr [EDX + 0x8],EAX       ; 004a50c8
    LEA EAX,[ESP + 0x24]                ; 004a50cb
    MOV dword ptr [ESP + 0x24],ESI      ; 004a50cf
    PUSH EAX                            ; 004a50d3
    MOV dword ptr [ESP + 0x2c],EDI      ; 004a50d4
    MOV dword ptr [ESP + 0x30],ESI      ; 004a50d8
    PUSH EBP                            ; 004a50dc
    LEA ESI,[ESP + 0xa4]                ; 004a50dd
    LEA EDI,[ESP + 0x248]               ; 004a50e4
    CALL core_actor.cpp_FUN_00408b80    ; 004a50eb
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0xa4]                ; 004a50f0
    ADD ESP,0x8                         ; 004a50f7
    MOVSD ES:EDI,ESI                    ; 004a50fa
    MOVSD ES:EDI,ESI                    ; 004a50fb
    MOVSD ES:EDI,ESI                    ; 004a50fc
    LEA EDX,[EBP + 0x160c]              ; 004a50fd
    MOV EAX,dword ptr [ESP + 0x240]     ; 004a5103
    MOV dword ptr [EDX],EAX             ; 004a510a
    MOV EAX,dword ptr [ESP + 0x244]     ; 004a510c
    MOV ECX,0xc0300000                  ; 004a5113
    MOV dword ptr [EDX + 0x4],EAX       ; 004a5118
    MOV EAX,dword ptr [ESP + 0x248]     ; 004a511b
    LEA ESI,[ESP + 0xb4]                ; 004a5122
    MOV dword ptr [EDX + 0x8],EAX       ; 004a5129
    LEA EAX,[ESP + 0x228]               ; 004a512c
    LEA EDI,[ESP + 0x18c]               ; 004a5133
    PUSH EAX                            ; 004a513a
    MOV dword ptr [ESP + 0x230],ECX     ; 004a513b
    XOR EDX,EDX                         ; 004a5142
    PUSH EBP                            ; 004a5144
    MOV dword ptr [ESP + 0x238],EBX     ; 004a5145
    MOV dword ptr [ESP + 0x230],EDX     ; 004a514c
    CALL core_actor.cpp_FUN_00408b80    ; 004a5153
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0xbc]                ; 004a5158
    ADD ESP,0x8                         ; 004a515f
    MOVSD ES:EDI,ESI                    ; 004a5162
    MOVSD ES:EDI,ESI                    ; 004a5163
    MOVSD ES:EDI,ESI                    ; 004a5164
    LEA EDX,[EBP + 0x18b0]              ; 004a5165
    MOV EAX,dword ptr [ESP + 0x18c]     ; 004a516b
    MOV dword ptr [EDX],EAX             ; 004a5172
    MOV EAX,dword ptr [ESP + 0x190]     ; 004a5174
    MOV EDI,0xc0400000                  ; 004a517b
    MOV dword ptr [EDX + 0x4],EAX       ; 004a5180
    MOV EAX,dword ptr [ESP + 0x194]     ; 004a5183
    XOR ESI,ESI                         ; 004a518a
    MOV dword ptr [EDX + 0x8],EAX       ; 004a518c
    LEA EAX,[ESP + 0x60]                ; 004a518f
    MOV dword ptr [ESP + 0x60],ESI      ; 004a5193
    PUSH EAX                            ; 004a5197
    MOV dword ptr [ESP + 0x68],EDI      ; 004a5198
    MOV dword ptr [ESP + 0x6c],ESI      ; 004a519c
    PUSH EBP                            ; 004a51a0
    LEA ESI,[ESP + 0xd4]                ; 004a51a1
    LEA EDI,[ESP + 0x188]               ; 004a51a8
    CALL core_actor.cpp_FUN_00408b80    ; 004a51af
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0xd4]                ; 004a51b4
    ADD ESP,0x8                         ; 004a51bb
    MOVSD ES:EDI,ESI                    ; 004a51be
    MOVSD ES:EDI,ESI                    ; 004a51bf
    MOVSD ES:EDI,ESI                    ; 004a51c0
    LEA EDX,[EBP + 0x1b54]              ; 004a51c1
    MOV EAX,dword ptr [ESP + 0x180]     ; 004a51c7
    MOV dword ptr [EDX],EAX             ; 004a51ce
    MOV EAX,dword ptr [ESP + 0x184]     ; 004a51d0
    MOV ECX,0xc0500000                  ; 004a51d7
    MOV dword ptr [EDX + 0x4],EAX       ; 004a51dc
    MOV EAX,dword ptr [ESP + 0x188]     ; 004a51df
    LEA ESI,[ESP + 0x150]               ; 004a51e6
    MOV dword ptr [EDX + 0x8],EAX       ; 004a51ed
    LEA EAX,[ESP + 0x210]               ; 004a51f0
    LEA EDI,[ESP + 0x108]               ; 004a51f7
    PUSH EAX                            ; 004a51fe
    MOV dword ptr [ESP + 0x218],ECX     ; 004a51ff
    XOR EDX,EDX                         ; 004a5206
    PUSH EBP                            ; 004a5208
    MOV dword ptr [ESP + 0x220],EBX     ; 004a5209
    MOV dword ptr [ESP + 0x218],EDX     ; 004a5210
    CALL core_actor.cpp_FUN_00408b80    ; 004a5217
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x158]               ; 004a521c
    ADD ESP,0x8                         ; 004a5223
    MOVSD ES:EDI,ESI                    ; 004a5226
    MOVSD ES:EDI,ESI                    ; 004a5227
    MOVSD ES:EDI,ESI                    ; 004a5228
    LEA EDX,[EBP + 0x1df8]              ; 004a5229
    MOV EAX,dword ptr [ESP + 0x108]     ; 004a522f
    MOV dword ptr [EDX],EAX             ; 004a5236
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004a5238
    MOV dword ptr [EDX + 0x4],EAX       ; 004a523f
    MOV EAX,dword ptr [ESP + 0x110]     ; 004a5242
    MOV dword ptr [EDX + 0x8],EAX       ; 004a5249
    MOV EDI,0xc0600000                  ; 004a524c
    XOR ESI,ESI                         ; 004a5251
    LEA EAX,[ESP + 0x1bc]               ; 004a5253
    MOV dword ptr [ESP + 0x1bc],ESI     ; 004a525a
    PUSH EAX                            ; 004a5261
    MOV dword ptr [ESP + 0x1c4],EDI     ; 004a5262
    MOV dword ptr [ESP + 0x1c8],ESI     ; 004a5269
    PUSH EBP                            ; 004a5270
    LEA ESI,[ESP + 0x8]                 ; 004a5271
    LEA EDI,[ESP + 0x134]               ; 004a5275
    CALL core_actor.cpp_FUN_00408b80    ; 004a527c
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x8]                 ; 004a5281
    ADD ESP,0x8                         ; 004a5285
    MOVSD ES:EDI,ESI                    ; 004a5288
    MOVSD ES:EDI,ESI                    ; 004a5289
    MOVSD ES:EDI,ESI                    ; 004a528a
    LEA EDX,[EBP + 0x209c]              ; 004a528b
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004a5291
    MOV dword ptr [EDX],EAX             ; 004a5298
    MOV EAX,dword ptr [ESP + 0x130]     ; 004a529a
    MOV ECX,0xc0700000                  ; 004a52a1
    MOV dword ptr [EDX + 0x4],EAX       ; 004a52a6
    MOV EAX,dword ptr [ESP + 0x134]     ; 004a52a9
    LEA ESI,[ESP + 0xc]                 ; 004a52b0
    MOV dword ptr [EDX + 0x8],EAX       ; 004a52b4
    LEA EAX,[ESP + 0x1d4]               ; 004a52b7
    LEA EDI,[ESP + 0x144]               ; 004a52be
    PUSH EAX                            ; 004a52c5
    MOV dword ptr [ESP + 0x1dc],ECX     ; 004a52c6
    XOR EDX,EDX                         ; 004a52cd
    PUSH EBP                            ; 004a52cf
    MOV dword ptr [ESP + 0x1e4],EBX     ; 004a52d0
    MOV dword ptr [ESP + 0x1dc],EDX     ; 004a52d7
    CALL core_actor.cpp_FUN_00408b80    ; 004a52de
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x14]                ; 004a52e3
    ADD ESP,0x8                         ; 004a52e7
    MOVSD ES:EDI,ESI                    ; 004a52ea
    MOVSD ES:EDI,ESI                    ; 004a52eb
    MOVSD ES:EDI,ESI                    ; 004a52ec
    LEA EDX,[EBP + 0x2340]              ; 004a52ed
    MOV EAX,dword ptr [ESP + 0x144]     ; 004a52f3
    LEA ESI,[EBP + 0x614]               ; 004a52fa
    MOV dword ptr [EDX],EAX             ; 004a5300
    MOV EAX,dword ptr [ESP + 0x148]     ; 004a5302
    MOV EBX,ESI                         ; 004a5309
    MOV dword ptr [EDX + 0x4],EAX       ; 004a530b
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004a530e
    ADD ESI,0x1fb0                      ; 004a5315
    MOV dword ptr [EDX + 0x8],EAX       ; 004a531b
    PUSH dword ptr [ESP + 0x294]        ; 004a531e
        ;   Label: LAB_004a531e
    MOV EAX,dword ptr [EBX + 0x154]     ; 004a5325
    PUSH EBX                            ; 004a532b
    CALL dword ptr [EAX + 0xc]          ; 004a532c
    ADD EBX,0x2a4                       ; 004a532f
    ADD ESP,0x8                         ; 004a5335
    CMP EBX,ESI                         ; 004a5338
    JNZ 0x004a531e                      ; 004a533a
        ;   XREF to: 004a531e (CONDITIONAL_JUMP)  ; LAB_004a531e
    MOV dword ptr [ESP + 0x13c],0x40400000 ; 004a533c
    LEA EAX,[ESP + 0x138]               ; 004a5347
    XOR EDI,EDI                         ; 004a534e
    PUSH EAX                            ; 004a5350
    LEA ESI,[ESP + 0x1fc]               ; 004a5351
    MOV dword ptr [ESP + 0x13c],EDI     ; 004a5358
    PUSH EBP                            ; 004a535f
    MOV dword ptr [ESP + 0x148],EDI     ; 004a5360
    LEA EDI,[ESP + 0x104]               ; 004a5367
    CALL core_actor.cpp_FUN_00408b00    ; 004a536e
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x200]               ; 004a5373
    LEA EDX,[ESP + 0x104]               ; 004a537a
    ADD ESP,0x8                         ; 004a5381
    LEA EAX,[ESP + 0x30]                ; 004a5384
    MOVSD ES:EDI,ESI                    ; 004a5388
    MOVSD ES:EDI,ESI                    ; 004a5389
    MOVSD ES:EDI,ESI                    ; 004a538a
    CMP EAX,EDX                         ; 004a538b
    JZ 0x004a53b0                       ; 004a538d
        ;   XREF to: 004a53b0 (CONDITIONAL_JUMP)  ; LAB_004a53b0
    MOV EAX,dword ptr [ESP + 0xfc]      ; 004a538f
    MOV dword ptr [ESP + 0x30],EAX      ; 004a5396
    MOV EAX,dword ptr [ESP + 0x100]     ; 004a539a
    MOV dword ptr [ESP + 0x34],EAX      ; 004a53a1
    MOV EAX,dword ptr [ESP + 0x104]     ; 004a53a5
    MOV dword ptr [ESP + 0x38],EAX      ; 004a53ac
    PUSH 0x3e800000                     ; 004a53b0
        ;   Label: LAB_004a53b0
    PUSH 0xbe800000                     ; 004a53b5
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004a53ba
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x27c],EAX     ; 004a53bf
    ADD ESP,0x8                         ; 004a53c6
    PUSH 0x3e800000                     ; 004a53c9
    PUSH 0xbe800000                     ; 004a53ce
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004a53d3
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x278],EAX     ; 004a53d8
    ADD ESP,0x8                         ; 004a53df
    PUSH 0x3e800000                     ; 004a53e2
    PUSH 0xbe800000                     ; 004a53e7
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004a53ec
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x280],EAX     ; 004a53f1
    FLD float ptr [ESP + 0x280]         ; 004a53f8
    ADD ESP,0x8                         ; 004a53ff
    MOV EAX,dword ptr [ESP + 0x270]     ; 004a5402
    MOV dword ptr [ESP + 0x25c],EAX     ; 004a5409
    MOV EAX,dword ptr [ESP + 0x274]     ; 004a5410
    LEA EDI,[ESP + 0xa8]                ; 004a5417
    MOV dword ptr [ESP + 0x260],EAX     ; 004a541e
    LEA EAX,[EBP + 0x20]                ; 004a5425
    LEA ESI,[ESP + 0x204]               ; 004a5428
    LEA EDX,[ESP + 0x78]                ; 004a542f
    FLD float ptr [EAX]                 ; 004a5433
    FLD float ptr [EAX + 0x4]           ; 004a5435
    FLD float ptr [EAX + 0x8]           ; 004a5438
    FXCH ST2                            ; 004a543b
    FSUB float ptr [ESP + 0x30]         ; 004a543d
    FXCH                                ; 004a5441
    FSUB float ptr [ESP + 0x34]         ; 004a5443
    FXCH ST2                            ; 004a5447
    FSUB float ptr [ESP + 0x38]         ; 004a5449
    FXCH                                ; 004a544d
    FSTP float ptr [ESP + 0x204]        ; 004a544f
    FXCH                                ; 004a5456
    FSTP float ptr [ESP + 0x208]        ; 004a5458
    FSTP float ptr [ESP + 0x20c]        ; 004a545f
    MOVSD ES:EDI,ESI                    ; 004a5466
    MOVSD ES:EDI,ESI                    ; 004a5467
    MOVSD ES:EDI,ESI                    ; 004a5468
    LEA EAX,[ESP + 0x24c]               ; 004a5469
    FLD float ptr [ESP + 0xa8]          ; 004a5470
    FLD float ptr [ESP + 0xac]          ; 004a5477
    FLD float ptr [ESP + 0xb0]          ; 004a547e
    LEA EDI,[ESP + 0x24c]               ; 004a5485
    LEA ESI,[ESP + 0xe4]                ; 004a548c
    FXCH ST2                            ; 004a5493
    FADDP ST3,ST0                       ; 004a5495
    FADD float ptr [ESP + 0x25c]        ; 004a5497
    FXCH                                ; 004a549e
    FADD float ptr [ESP + 0x260]        ; 004a54a0
    FXCH ST2                            ; 004a54a7
    FSTP float ptr [ESP + 0xe4]         ; 004a54a9
    FSTP float ptr [ESP + 0xe8]         ; 004a54b0
    FSTP float ptr [ESP + 0xec]         ; 004a54b7
    MOVSD ES:EDI,ESI                    ; 004a54be
    MOVSD ES:EDI,ESI                    ; 004a54bf
    MOVSD ES:EDI,ESI                    ; 004a54c0
    CMP EDX,EAX                         ; 004a54c1
    JZ 0x004a54e9                       ; 004a54c3
        ;   XREF to: 004a54e9 (CONDITIONAL_JUMP)  ; LAB_004a54e9
    MOV EAX,dword ptr [ESP + 0x24c]     ; 004a54c5
    MOV dword ptr [ESP + 0x78],EAX      ; 004a54cc
    MOV EAX,dword ptr [ESP + 0x250]     ; 004a54d0
    MOV dword ptr [ESP + 0x7c],EAX      ; 004a54d7
    MOV EAX,dword ptr [ESP + 0x254]     ; 004a54db
    MOV dword ptr [ESP + 0x80],EAX      ; 004a54e2
    PUSH 0x3e800000                     ; 004a54e9
        ;   Label: LAB_004a54e9
    PUSH 0xbe800000                     ; 004a54ee
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004a54f3
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x278],EAX     ; 004a54f8
    ADD ESP,0x8                         ; 004a54ff
    PUSH 0x3e800000                     ; 004a5502
    PUSH 0xbe800000                     ; 004a5507
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004a550c
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x27c],EAX     ; 004a5511
    ADD ESP,0x8                         ; 004a5518
    PUSH 0x3e800000                     ; 004a551b
    PUSH 0xbe800000                     ; 004a5520
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004a5525
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x280],EAX     ; 004a552a
    FLD float ptr [ESP + 0x280]         ; 004a5531
    ADD ESP,0x8                         ; 004a5538
    MOV EAX,dword ptr [ESP + 0x274]     ; 004a553b
    MOV dword ptr [ESP + 0x268],EAX     ; 004a5542
    MOV EAX,dword ptr [ESP + 0x270]     ; 004a5549
    LEA EDI,[ESP + 0x198]               ; 004a5550
    MOV dword ptr [ESP + 0x26c],EAX     ; 004a5557
    LEA EAX,[EBP + 0x20]                ; 004a555e
    LEA ESI,[ESP + 0x114]               ; 004a5561
    LEA EDX,[ESP + 0x90]                ; 004a5568
    FLD float ptr [EAX]                 ; 004a556f
    FLD float ptr [EAX + 0x4]           ; 004a5571
    FLD float ptr [EAX + 0x8]           ; 004a5574
    FXCH ST2                            ; 004a5577
    FADD float ptr [ESP + 0x30]         ; 004a5579
    FXCH                                ; 004a557d
    FADD float ptr [ESP + 0x34]         ; 004a557f
    FXCH ST2                            ; 004a5583
    FADD float ptr [ESP + 0x38]         ; 004a5585
    FXCH                                ; 004a5589
    FSTP float ptr [ESP + 0x114]        ; 004a558b
    FXCH                                ; 004a5592
    FSTP float ptr [ESP + 0x118]        ; 004a5594
    FSTP float ptr [ESP + 0x11c]        ; 004a559b
    MOVSD ES:EDI,ESI                    ; 004a55a2
    MOVSD ES:EDI,ESI                    ; 004a55a3
    MOVSD ES:EDI,ESI                    ; 004a55a4
    LEA EAX,[ESP + 0x234]               ; 004a55a5
    FLD float ptr [ESP + 0x198]         ; 004a55ac
    FLD float ptr [ESP + 0x19c]         ; 004a55b3
    FLD float ptr [ESP + 0x1a0]         ; 004a55ba
    LEA EDI,[ESP + 0x234]               ; 004a55c1
    LEA ESI,[ESP + 0x1c8]               ; 004a55c8
    FXCH ST2                            ; 004a55cf
    FADDP ST3,ST0                       ; 004a55d1
    FADD float ptr [ESP + 0x268]        ; 004a55d3
    FXCH                                ; 004a55da
    FADD float ptr [ESP + 0x26c]        ; 004a55dc
    FXCH ST2                            ; 004a55e3
    FSTP float ptr [ESP + 0x1c8]        ; 004a55e5
    FSTP float ptr [ESP + 0x1cc]        ; 004a55ec
    FSTP float ptr [ESP + 0x1d0]        ; 004a55f3
    MOVSD ES:EDI,ESI                    ; 004a55fa
    MOVSD ES:EDI,ESI                    ; 004a55fb
    MOVSD ES:EDI,ESI                    ; 004a55fc
    CMP EDX,EAX                         ; 004a55fd
    JZ 0x004a562b                       ; 004a55ff
        ;   XREF to: 004a562b (CONDITIONAL_JUMP)  ; LAB_004a562b
    MOV EAX,dword ptr [ESP + 0x234]     ; 004a5601
    MOV dword ptr [ESP + 0x90],EAX      ; 004a5608
    MOV EAX,dword ptr [ESP + 0x238]     ; 004a560f
    MOV dword ptr [ESP + 0x94],EAX      ; 004a5616
    MOV EAX,dword ptr [ESP + 0x23c]     ; 004a561d
    MOV dword ptr [ESP + 0x98],EAX      ; 004a5624
    LEA EAX,[ESP + 0x78]                ; 004a562b
        ;   Label: LAB_004a562b
    PUSH EAX                            ; 004a562f
    LEA EBX,[EBP + 0x594]               ; 004a5630
    PUSH EBX                            ; 004a5636
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0 ; 004a5637
        ;   XREF to: 0045aae0 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 004a563c
    PUSH 0x41080000                     ; 004a563f
    PUSH 0x40f00000                     ; 004a5644
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004a5649
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x280],EAX     ; 004a564e
    FLD float ptr [ESP + 0x280]         ; 004a5655
    ADD ESP,0x8                         ; 004a565c
    SUB ESP,0x4                         ; 004a565f
    FSTP float ptr [ESP]                ; 004a5662
    PUSH EBX                            ; 004a5665
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30 ; 004a5666
        ;   XREF to: 0045ab30 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(CDemonGlobe * this_ptr, float radius)
    MOV EAX,dword ptr [EBP + 0x588]     ; 004a566b
    MOV EDX,EAX                         ; 004a5671
    SAR EDX,0x1f                        ; 004a5673
    SUB EAX,EDX                         ; 004a5676
    SAR EAX,0x1                         ; 004a5678
    MOV EDX,EAX                         ; 004a567a
    SAR EDX,0x1f                        ; 004a567c
    MOV dword ptr [EBX + 0x3c],EAX      ; 004a567f
    SHL EDX,0x8                         ; 004a5682
    SBB EAX,EDX                         ; 004a5685
    SAR EAX,0x8                         ; 004a5687
    MOV EDX,EAX                         ; 004a568a
    SAR EDX,0x1f                        ; 004a568c
    SHL EDX,0x2                         ; 004a568f
    SBB EAX,EDX                         ; 004a5692
    SAR EAX,0x2                         ; 004a5694
    ADD ESP,0x8                         ; 004a5697
    PUSH EBX                            ; 004a569a
    MOV ECX,dword ptr [0x00603b28]      ; 004a569b | g_CDemonSetPtr
    PUSH ECX                            ; 004a56a1
    MOV byte ptr [EBX + 0x1c],AL        ; 004a56a2
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005372f0 ; 004a56a5
        ;   XREF to: 005372f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(CDemonSet * this_ptr, CDemonGlobe * globe)
    ADD ESP,0x8                         ; 004a56aa
    LEA EAX,[ESP + 0x90]                ; 004a56ad
    PUSH EAX                            ; 004a56b4
    LEA EBX,[EBP + 0x5d4]               ; 004a56b5
    PUSH EBX                            ; 004a56bb
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0 ; 004a56bc
        ;   XREF to: 0045aae0 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 004a56c1
    PUSH 0x41080000                     ; 004a56c4
    PUSH 0x40f00000                     ; 004a56c9
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004a56ce
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x280],EAX     ; 004a56d3
    FLD float ptr [ESP + 0x280]         ; 004a56da
    ADD ESP,0x8                         ; 004a56e1
    SUB ESP,0x4                         ; 004a56e4
    FSTP float ptr [ESP]                ; 004a56e7
    PUSH EBX                            ; 004a56ea
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30 ; 004a56eb
        ;   XREF to: 0045ab30 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(CDemonGlobe * this_ptr, float radius)
    MOV EAX,dword ptr [EBP + 0x588]     ; 004a56f0
    MOV EDX,EAX                         ; 004a56f6
    SAR EDX,0x1f                        ; 004a56f8
    SUB EAX,EDX                         ; 004a56fb
    SAR EAX,0x1                         ; 004a56fd
    MOV EDX,EAX                         ; 004a56ff
    SAR EDX,0x1f                        ; 004a5701
    MOV dword ptr [EBX + 0x3c],EAX      ; 004a5704
    SHL EDX,0x8                         ; 004a5707
    SBB EAX,EDX                         ; 004a570a
    SAR EAX,0x8                         ; 004a570c
    MOV EDX,EAX                         ; 004a570f
    SAR EDX,0x1f                        ; 004a5711
    SHL EDX,0x2                         ; 004a5714
    SBB EAX,EDX                         ; 004a5717
    SAR EAX,0x2                         ; 004a5719
    ADD ESP,0x8                         ; 004a571c
    PUSH EBX                            ; 004a571f
    MOV byte ptr [EBX + 0x1c],AL        ; 004a5720
    MOV EBX,dword ptr [0x00603b28]      ; 004a5723 | g_CDemonSetPtr
    PUSH EBX                            ; 004a5729
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005372f0 ; 004a572a
        ;   XREF to: 005372f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(CDemonSet * this_ptr, CDemonGlobe * globe)
    ADD ESP,0x8                         ; 004a572f
    ADD ESP,0x27c                       ; 004a5732
    POP EBP                             ; 004a5738
    POP EDI                             ; 004a5739
    POP ESI                             ; 004a573a
    POP EBX                             ; 004a573b
    RET                                 ; 004a573c
    LEA EAX,[EBP + 0x20]                ; 004a573d
        ;   Label: LAB_004a573d
    PUSH EAX                            ; 004a5740
    PUSH 0x5c0b49                       ; 004a5741
    PUSH EBP                            ; 004a5746
    MOV EBX,dword ptr [0x006045f8]      ; 004a5747 | DAT_006045f8
    PUSH EBX                            ; 004a574d
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 004a574e
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004a5753
    MOV dword ptr [EBP + 0x25c4],EAX    ; 004a5756
    JMP 0x004a4e76                      ; 004a575c
        ;   XREF to: 004a4e76 (UNCONDITIONAL_JUMP)  ; LAB_004a4e76

