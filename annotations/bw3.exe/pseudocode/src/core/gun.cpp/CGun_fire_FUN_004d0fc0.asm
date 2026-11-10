; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gun_cpp_CGun_fire_FUN_004d0fc0(CGun *this_ptr)
;
; Parameters:
; CGun *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_s_45_dry_wav_005c49d4
;   TerminatedCString s_s_45_wav_005c49e1
;   TerminatedCString s_gatbullet_kfm_005c49e8
;   undefined4 DAT_005c49f7
;   undefined4 DAT_005c49ff
;   undefined4 DAT_005c4a07
;   undefined4 DAT_005fc5a0
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_006045f8
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 g_CCrateClassInfo.name_hash
;   undefined4 g_CFlameCanClassInfo.name_hash
;   undefined4 g_CGlassClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.ray_origin.x
;   ... and 11 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   core_crate.cpp_FUN_004461c0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
;   core_dirmat.cpp_FUN_0045b800
;   core_dmodel.cpp_loadModel_FUN_00462420
;   core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
;   core_fire.cpp_CFireEffect_createShell_FUN_004a3e70
;   core_fire.cpp_FUN_004a2090
;   core_flamecan.cpp_CFlameCan_ignite_FUN_004a7110
;   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004cc5d0
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d0fc0
        ;   Label: core_gun.cpp_CGun_fire_FUN_004d0fc0
    PUSH ESI                            ; 004d0fc1
    PUSH EDI                            ; 004d0fc2
    PUSH EBP                            ; 004d0fc3
    MOV EBP,ESP                         ; 004d0fc4
    SUB ESP,0x1c0                       ; 004d0fc6
    AND ESP,0xfffffff8                  ; 004d0fcc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d0fcf
    PUSH EBX                            ; 004d0fd2
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d0fd3
    LEA ESI,[ESP + 0x7c]                ; 004d0fd9
    LEA EDI,[ESP + 0xc4]                ; 004d0fdd
    CALL dword ptr [EAX + 0xe0]         ; 004d0fe4
    ADD ESP,0x4                         ; 004d0fea
    LEA EAX,[ESP + 0xc0]                ; 004d0fed
    LEA ESI,[ESP + 0x78]                ; 004d0ff4
    PUSH EAX                            ; 004d0ff8
    MOVSD ES:EDI,ESI                    ; 004d0ff9
    MOVSD ES:EDI,ESI                    ; 004d0ffa
    MOVSD ES:EDI,ESI                    ; 004d0ffb
    PUSH EBX                            ; 004d0ffc
    LEA ESI,[ESP + 0x14c]               ; 004d0ffd
    CALL core_actor.cpp_FUN_00408b80    ; 004d1004
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 004d1009
    LEA EDI,[ESP + 0xb4]                ; 004d100c
    LEA ESI,[ESP + 0x144]               ; 004d1013
    PUSH EBX                            ; 004d101a
    MOVSD ES:EDI,ESI                    ; 004d101b
    MOVSD ES:EDI,ESI                    ; 004d101c
    MOVSD ES:EDI,ESI                    ; 004d101d
    CALL core_weapon.cpp_CWeapon_fire_FUN_0057b880 ; 004d101e
        ;   XREF to: 0057b880 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_0057b880(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004d1023
    TEST EAX,EAX                        ; 004d1026
    JZ 0x004d13d4                       ; 004d1028
        ;   XREF to: 004d13d4 (CONDITIONAL_JUMP)  ; LAB_004d13d4
    MOV EAX,dword ptr [EBX + 0x2e8]     ; 004d102e
    MOV dword ptr [ESP + 0xd4],EAX      ; 004d1034
    LEA EAX,[ESP + 0xcc]                ; 004d103b
    LEA ESI,[ESP + 0x12c]               ; 004d1042
    PUSH EAX                            ; 004d1049
    LEA EDI,[ESP + 0x13c]               ; 004d104a
    XOR ECX,ECX                         ; 004d1051
    PUSH EBX                            ; 004d1053
    MOV dword ptr [ESP + 0xd4],ECX      ; 004d1054
    MOV dword ptr [ESP + 0xd8],ECX      ; 004d105b
    CALL core_actor.cpp_FUN_00408b00    ; 004d1062
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    ADD ESP,0x8                         ; 004d1067
    LEA ESI,[ESP + 0x12c]               ; 004d106a
    FLD float ptr [ESP + 0xb4]          ; 004d1071
    FLD float ptr [ESP + 0xb8]          ; 004d1078
    MOVSD ES:EDI,ESI                    ; 004d107f
    MOVSD ES:EDI,ESI                    ; 004d1080
    MOVSD ES:EDI,ESI                    ; 004d1081
    FLD float ptr [ESP + 0xbc]          ; 004d1082
    LEA EDI,[ESP + 0xfc]                ; 004d1089
    LEA ESI,[ESP + 0x6c]                ; 004d1090
    FXCH ST2                            ; 004d1094
    FADD float ptr [ESP + 0x138]        ; 004d1096
    FXCH                                ; 004d109d
    FADD float ptr [ESP + 0x13c]        ; 004d109f
    FXCH ST2                            ; 004d10a6
    FADD float ptr [ESP + 0x140]        ; 004d10a8
    FXCH                                ; 004d10af
    FSTP float ptr [ESP + 0x6c]         ; 004d10b1
    FXCH                                ; 004d10b5
    FSTP float ptr [ESP + 0x70]         ; 004d10b7
    FSTP float ptr [ESP + 0x74]         ; 004d10bb
    MOVSD ES:EDI,ESI                    ; 004d10bf
    MOVSD ES:EDI,ESI                    ; 004d10c0
    MOVSD ES:EDI,ESI                    ; 004d10c1
    FLD float ptr [EBX + 0x2e8]         ; 004d10c2
    FDIVR double ptr [0x005c49f7]       ; 004d10c8 | DAT_005c49f7
    FLD float ptr [ESP + 0x138]         ; 004d10ce
    FXCH                                ; 004d10d5
    FSTP float ptr [ESP + 0x1a4]        ; 004d10d7
    FMUL float ptr [ESP + 0x1a4]        ; 004d10de
    FLD float ptr [ESP + 0x13c]         ; 004d10e5
    FMUL float ptr [ESP + 0x1a4]        ; 004d10ec
    FLD float ptr [ESP + 0x140]         ; 004d10f3
    FMUL float ptr [ESP + 0x1a4]        ; 004d10fa
    FLD float ptr [ESP + 0xb4]          ; 004d1101
    FLD float ptr [ESP + 0xb8]          ; 004d1108
    LEA EDI,[ESP + 0x180]               ; 004d110f
    LEA ESI,[ESP + 0xd8]                ; 004d1116
    FXCH ST4                            ; 004d111d
    FSTP float ptr [ESP + 0xd8]         ; 004d111f
    FXCH ST2                            ; 004d1126
    FSTP float ptr [ESP + 0xdc]         ; 004d1128
    FSTP float ptr [ESP + 0xe0]         ; 004d112f
    MOVSD ES:EDI,ESI                    ; 004d1136
    MOVSD ES:EDI,ESI                    ; 004d1137
    MOVSD ES:EDI,ESI                    ; 004d1138
    FLD float ptr [ESP + 0xbc]          ; 004d1139
    LEA EDI,[ESP + 0x108]               ; 004d1140
    LEA ESI,[ESP + 0x150]               ; 004d1147
    FXCH                                ; 004d114e
    FSUB float ptr [ESP + 0x180]        ; 004d1150
    FXCH ST2                            ; 004d1157
    FSUB float ptr [ESP + 0x184]        ; 004d1159
    FXCH                                ; 004d1160
    FSUB float ptr [ESP + 0x188]        ; 004d1162
    FXCH ST2                            ; 004d1169
    FSTP float ptr [ESP + 0x150]        ; 004d116b
    FSTP float ptr [ESP + 0x154]        ; 004d1172
    FSTP float ptr [ESP + 0x158]        ; 004d1179
    MOVSD ES:EDI,ESI                    ; 004d1180
    MOVSD ES:EDI,ESI                    ; 004d1181
    MOVSD ES:EDI,ESI                    ; 004d1182
    MOV EDI,dword ptr [0x00603b28]      ; 004d1183 | g_CDemonSetPtr
    PUSH EDI                            ; 004d1189 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 004d118a
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004d118f
    PUSH 0x1                            ; 004d1192
    MOV EAX,[0x00603b28]                ; 004d1194 | g_CDemonSetPtr
    PUSH EAX                            ; 004d1199 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90 ; 004d119a
        ;   XREF to: 0053ec90 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 004d119f
    PUSH EBX                            ; 004d11a2
    MOV EDX,dword ptr [0x00603b28]      ; 004d11a3 | g_CDemonSetPtr
    PUSH EDX                            ; 004d11a9 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 004d11aa
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    MOV ECX,dword ptr [EBX + 0x304]     ; 004d11af
    ADD ESP,0x8                         ; 004d11b5
    TEST ECX,ECX                        ; 004d11b8
    JNZ 0x004d13fa                      ; 004d11ba
        ;   XREF to: 004d13fa (CONDITIONAL_JUMP)  ; LAB_004d13fa
    XOR EAX,EAX                         ; 004d11c0
        ;   Label: LAB_004d11c0
    MOV dword ptr [ESP + 0x1b0],EAX     ; 004d11c2
    LEA EAX,[ESP + 0xfc]                ; 004d11c9
        ;   Label: LAB_004d11c9
    PUSH EAX                            ; 004d11d0
    LEA EAX,[ESP + 0x10c]               ; 004d11d1
    PUSH EAX                            ; 004d11d8
    MOV EDX,dword ptr [0x00603b28]      ; 004d11d9 | g_CDemonSetPtr
    PUSH EDX                            ; 004d11df | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_0053ccc0 ; 004d11e0
        ;   XREF to: 0053ccc0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053ccc0()
    MOV dword ptr [ESP + 0x1c8],EAX     ; 004d11e5
    FLD float ptr [ESP + 0x1c8]         ; 004d11ec
    ADD ESP,0xc                         ; 004d11f3
    FLDZ                                ; 004d11f6
    FXCH                                ; 004d11f8
    FSTP double ptr [ESP]               ; 004d11fa
    FCOMP double ptr [ESP]              ; 004d11fd
    FNSTSW AX                           ; 004d1200
    SAHF                                ; 004d1202
    JBE 0x004d140f                      ; 004d1203
        ;   XREF to: 004d140f (CONDITIONAL_JUMP)  ; LAB_004d140f
    MOV EDI,dword ptr [0x00603b28]      ; 004d1209 | g_CDemonSetPtr
        ;   Label: LAB_004d1209
    PUSH EDI                            ; 004d120f | g_CDemonSetInstance
    LEA ESI,[ESP + 0xb8]                ; 004d1210
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 004d1217
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004d121c
    LEA EAX,[EBX + 0x3c]                ; 004d121f
    LEA EDI,[ESP + 0x114]               ; 004d1222
    PUSH EAX                            ; 004d1229
    MOVSD ES:EDI,ESI                    ; 004d122a
    MOVSD ES:EDI,ESI                    ; 004d122b
    MOVSD ES:EDI,ESI                    ; 004d122c
    LEA EAX,[ESP + 0x118]               ; 004d122d
    FLD float ptr [ESP + 0x11c]         ; 004d1234
    PUSH EAX                            ; 004d123b
    MOV EAX,[0x005fc5a0]                ; 004d123c | DAT_005fc5a0
    FADD float ptr [0x005c49ff]         ; 004d1241 | DAT_005c49ff
    PUSH EAX                            ; 004d1247
    FSTP float ptr [ESP + 0x124]        ; 004d1248
    CALL core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450 ; 004d124f
        ;   XREF to: 004a2450 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450(CFireEffect * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    ADD ESP,0xc                         ; 004d1254
    LEA EAX,[ESP + 0xb4]                ; 004d1257
    PUSH EAX                            ; 004d125e
    PUSH 0x5c49e1                       ; 004d125f | = "45.wav"
    PUSH EBX                            ; 004d1264
    MOV EDX,dword ptr [0x006045f8]      ; 004d1265 | DAT_006045f8
    PUSH EDX                            ; 004d126b
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 004d126c
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004d1271
    MOV EDI,0xc0800000                  ; 004d1274
    MOV ECX,0x40400000                  ; 004d1279
    PUSH 0x3ec90fdb                     ; 004d127e
    MOV dword ptr [EBX + 0x300],0x3eaa7efa ; 004d1283
    PUSH 0xbec90fdb                     ; 004d128d
    MOV dword ptr [ESP + 0x194],ECX     ; 004d1292
    MOV dword ptr [ESP + 0x198],ECX     ; 004d1299
    MOV dword ptr [ESP + 0x19c],EDI     ; 004d12a0
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004d12a7
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1c4],EAX     ; 004d12ac
    FLD float ptr [ESP + 0x1c4]         ; 004d12b3
    ADD ESP,0x8                         ; 004d12ba
    PUSH 0x3ec90fdb                     ; 004d12bd
    PUSH 0xbec90fdb                     ; 004d12c2
    FSTP float ptr [ESP + 0x128]        ; 004d12c7
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004d12ce
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1c4],EAX     ; 004d12d3
    FLD float ptr [ESP + 0x1c4]         ; 004d12da
    XOR EAX,EAX                         ; 004d12e1
    ADD ESP,0x8                         ; 004d12e3
    MOV dword ptr [ESP + 0x128],EAX     ; 004d12e6
    LEA EAX,[ESP + 0x120]               ; 004d12ed
    PUSH EAX                            ; 004d12f4
    LEA EAX,[ESP + 0x48]                ; 004d12f5
    PUSH EAX                            ; 004d12f9
    FSTP float ptr [ESP + 0x12c]        ; 004d12fa
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 ; 004d1301
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004d1306
    LEA EAX,[ESP + 0x18c]               ; 004d1309
    PUSH EAX                            ; 004d1310
    LEA EAX,[ESP + 0x48]                ; 004d1311
    PUSH EAX                            ; 004d1315
    LEA ESI,[ESP + 0x17c]               ; 004d1316
    LEA EDI,[ESP + 0x1a0]               ; 004d131d
    CALL core_dirmat.cpp_FUN_0045b800   ; 004d1324
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    ADD ESP,0x8                         ; 004d1329
    LEA EAX,[ESP + 0x198]               ; 004d132c
    LEA ESI,[ESP + 0x174]               ; 004d1333
    PUSH EAX                            ; 004d133a
    MOVSD ES:EDI,ESI                    ; 004d133b
    MOVSD ES:EDI,ESI                    ; 004d133c
    MOVSD ES:EDI,ESI                    ; 004d133d
    PUSH EBX                            ; 004d133e
    LEA ESI,[ESP + 0x98]                ; 004d133f
    LEA EDI,[ESP + 0xa4]                ; 004d1346
    CALL core_actor.cpp_FUN_00408b00    ; 004d134d
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x98]                ; 004d1352
    ADD ESP,0x8                         ; 004d1359
    MOVSD ES:EDI,ESI                    ; 004d135c
    MOVSD ES:EDI,ESI                    ; 004d135d
    MOVSD ES:EDI,ESI                    ; 004d135e
    LEA EAX,[ESP + 0x9c]                ; 004d135f
    LEA ESI,[ESP + 0x18c]               ; 004d1366
    CMP ESI,EAX                         ; 004d136d
    JZ 0x004d139b                       ; 004d136f
        ;   XREF to: 004d139b (CONDITIONAL_JUMP)  ; LAB_004d139b
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004d1371
    MOV dword ptr [ESP + 0x18c],EAX     ; 004d1378
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004d137f
    MOV dword ptr [ESP + 0x190],EAX     ; 004d1386
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004d138d
    MOV dword ptr [ESP + 0x194],EAX     ; 004d1394
    PUSH 0x5c49e8                       ; 004d139b | = "gatbullet.kfm"
        ;   Label: LAB_004d139b
    CALL core_dmodel.cpp_loadModel_FUN_00462420 ; 004d13a0
        ;   XREF to: 00462420 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_loadModel_FUN_00462420()
    ADD ESP,0x4                         ; 004d13a5
    PUSH EAX                            ; 004d13a8
    LEA EAX,[ESP + 0x190]               ; 004d13a9
    PUSH EAX                            ; 004d13b0
    LEA EAX,[EBX + 0x30]                ; 004d13b1
    PUSH EAX                            ; 004d13b4
    ADD EBX,0x20                        ; 004d13b5
    PUSH EBX                            ; 004d13b8
    MOV EDX,dword ptr [0x005fc5a0]      ; 004d13b9 | DAT_005fc5a0
    PUSH EDX                            ; 004d13bf
    CALL core_fire.cpp_CFireEffect_createShell_FUN_004a3e70 ; 004d13c0
        ;   XREF to: 004a3e70 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createShell_FUN_004a3e70(CFireEffect * this_ptr, CVector3f * position, CVector3f * euler_angles, CVector3f * velocity, ...)
    MOV EAX,0x1                         ; 004d13c5
    ADD ESP,0x14                        ; 004d13ca
    MOV ESP,EBP                         ; 004d13cd
    POP EBP                             ; 004d13cf
    POP EDI                             ; 004d13d0
    POP ESI                             ; 004d13d1
    POP EBX                             ; 004d13d2
    RET                                 ; 004d13d3
    LEA EAX,[ESP + 0xb4]                ; 004d13d4
        ;   Label: LAB_004d13d4
    PUSH EAX                            ; 004d13db
    PUSH 0x5c49d4                       ; 004d13dc | = "45-dry-!.wav"
    PUSH EBX                            ; 004d13e1
    MOV EDX,dword ptr [0x006045f8]      ; 004d13e2 | DAT_006045f8
    PUSH EDX                            ; 004d13e8
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 004d13e9
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004d13ee
    XOR EAX,EAX                         ; 004d13f1
    MOV ESP,EBP                         ; 004d13f3
    POP EBP                             ; 004d13f5
    POP EDI                             ; 004d13f6
    POP ESI                             ; 004d13f7
    POP EBX                             ; 004d13f8
    RET                                 ; 004d13f9
    PUSH ECX                            ; 004d13fa
        ;   Label: LAB_004d13fa
    MOV EDI,dword ptr [0x00603b28]      ; 004d13fb | g_CDemonSetPtr
    PUSH EDI                            ; 004d1401 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 004d1402
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004d1407
    JMP 0x004d11c0                      ; 004d140a
        ;   XREF to: 004d11c0 (UNCONDITIONAL_JUMP)  ; LAB_004d11c0
    FLD1                                ; 004d140f
        ;   Label: LAB_004d140f
    FCOMP double ptr [ESP]              ; 004d1411
    FNSTSW AX                           ; 004d1414
    SAHF                                ; 004d1416
    JC 0x004d1209                       ; 004d1417
        ;   XREF to: 004d1209 (CONDITIONAL_JUMP)  ; LAB_004d1209
    MOV ECX,dword ptr [0x007e2cec]      ; 004d141d | g_CCharacterClassInfo.name_hash
    MOV EAX,[0x00603b28]                ; 004d1423 | g_CDemonSetPtr
    PUSH ECX                            ; 004d1428
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 004d1429 | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 004d142f
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004d1430
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004d1435
    MOV dword ptr [ESP + 0x1b8],EAX     ; 004d1438
    TEST EAX,EAX                        ; 004d143f
    JZ 0x004d1460                       ; 004d1441
        ;   XREF to: 004d1460 (CONDITIONAL_JUMP)  ; LAB_004d1460
    PUSH EAX                            ; 004d1443
    MOV ESI,dword ptr [EAX + 0x154]     ; 004d1444
    CALL dword ptr [ESI + 0x10c]        ; 004d144a
    ADD ESP,0x4                         ; 004d1450
    TEST EAX,EAX                        ; 004d1453
    JLE 0x004d1460                      ; 004d1455
        ;   XREF to: 004d1460 (CONDITIONAL_JUMP)  ; LAB_004d1460
    XOR EDI,EDI                         ; 004d1457
    MOV dword ptr [ESP + 0x1b8],EDI     ; 004d1459
    MOV EAX,[0x01d22e04]                ; 004d1460 | g_CGlassClassInfo.name_hash
        ;   Label: LAB_004d1460
    PUSH EAX                            ; 004d1465
    MOV EAX,[0x00603b28]                ; 004d1466 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004d146b | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 004d1471
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004d1472
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV ECX,dword ptr [0x02cfd894]      ; 004d1477 | g_CTriggerClassInfo.name_hash
    ADD ESP,0x8                         ; 004d147d
    MOV EDI,EAX                         ; 004d1480
    MOV EAX,[0x00603b28]                ; 004d1482 | g_CDemonSetPtr
    PUSH ECX                            ; 004d1487
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 004d1488 | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 004d148e
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004d148f
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004d1494
    MOV ESI,EAX                         ; 004d1497
    MOV dword ptr [ESP + 0x1a8],EAX     ; 004d1499
    MOV EAX,[0x007f8fc8]                ; 004d14a0 | g_CCrateClassInfo.name_hash
    PUSH EAX                            ; 004d14a5
    MOV EAX,[0x00603b28]                ; 004d14a6 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004d14ab | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 004d14b1
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004d14b2
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV dword ptr [ESP + 0x1b4],EAX     ; 004d14b7
    ADD ESP,0x8                         ; 004d14be
    MOV ECX,dword ptr [0x01d0cf60]      ; 004d14c1 | g_CFlameCanClassInfo.name_hash
    MOV EAX,[0x00603b28]                ; 004d14c7 | g_CDemonSetPtr
    PUSH ECX                            ; 004d14cc
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004d14cd | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 004d14d3
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004d14d4
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004d14d9
    MOV ECX,dword ptr [ESP + 0x1b8]     ; 004d14dc
    TEST ECX,ECX                        ; 004d14e3
    JNZ 0x004d151c                      ; 004d14e5
        ;   XREF to: 004d151c (CONDITIONAL_JUMP)  ; LAB_004d151c
    TEST EDI,EDI                        ; 004d14e7
    JNZ 0x004d1794                      ; 004d14e9
        ;   XREF to: 004d1794 (CONDITIONAL_JUMP)  ; LAB_004d1794
    TEST ESI,ESI                        ; 004d14ef
    JNZ 0x004d17bb                      ; 004d14f1
        ;   XREF to: 004d17bb (CONDITIONAL_JUMP)  ; LAB_004d17bb
    MOV ESI,dword ptr [ESP + 0x1ac]     ; 004d14f7
    TEST ESI,ESI                        ; 004d14fe
    JNZ 0x004d1817                      ; 004d1500
        ;   XREF to: 004d1817 (CONDITIONAL_JUMP)  ; LAB_004d1817
    TEST EAX,EAX                        ; 004d1506
    JZ 0x004d183d                       ; 004d1508
        ;   XREF to: 004d183d (CONDITIONAL_JUMP)  ; LAB_004d183d
    PUSH EAX                            ; 004d150e
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004a7110 ; 004d150f
        ;   XREF to: 004a7110 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004a7110(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 004d1514
    JMP 0x004d1820                      ; 004d1517
        ;   XREF to: 004d1820 (UNCONDITIONAL_JUMP)  ; LAB_004d1820
    PUSH ECX                            ; 004d151c
        ;   Label: LAB_004d151c
    MOV EAX,dword ptr [ECX + 0x154]     ; 004d151d
    CALL dword ptr [EAX + 0xe0]         ; 004d1523
    ADD ESP,0x4                         ; 004d1529
    TEST EAX,EAX                        ; 004d152c
    JZ 0x004d1563                       ; 004d152e
        ;   XREF to: 004d1563 (CONDITIONAL_JUMP)  ; LAB_004d1563
    CMP dword ptr [ESP + 0x1b0],0x0     ; 004d1530
    JNZ 0x004d1209                      ; 004d1538
        ;   XREF to: 004d1209 (CONDITIONAL_JUMP)  ; LAB_004d1209
    MOV ESI,dword ptr [EBX + 0x568]     ; 004d153e
    MOV ECX,dword ptr [0x00603b28]      ; 004d1544 | g_CDemonSetPtr
    INC ESI                             ; 004d154a
    PUSH ECX                            ; 004d154b | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x568],ESI     ; 004d154c
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 004d1552
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004d1557
    XOR EAX,EAX                         ; 004d155a
    MOV ESP,EBP                         ; 004d155c
    POP EBP                             ; 004d155e
    POP EDI                             ; 004d155f
    POP ESI                             ; 004d1560
    POP EBX                             ; 004d1561
    RET                                 ; 004d1562
    LEA EAX,[ESP + 0x8]                 ; 004d1563
        ;   Label: LAB_004d1563
    PUSH EAX                            ; 004d1567
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 004d1568
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    MOV EAX,[0x00603b28]                ; 004d156d | g_CDemonSetPtr
    ADD ESP,0x4                         ; 004d1572
    MOV EAX,dword ptr [EAX + 0x14d148]  ; 004d1575 | g_CDemonSetInstance.collision_part_index
    MOV dword ptr [ESP + 0x8],EAX       ; 004d157b
    PUSH EBX                            ; 004d157f
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d1580
    LEA EDI,[ESP + 0xe8]                ; 004d1586
    CALL dword ptr [EAX + 0xec]         ; 004d158d
    MOV ECX,0x3ecccccd                  ; 004d1593
    MOV dword ptr [ESP + 0x1c0],EAX     ; 004d1598
    MOV ESI,dword ptr [0x00603b28]      ; 004d159f | g_CDemonSetPtr
    FLD float ptr [ESP + 0x1c0]         ; 004d15a5
    ADD ESP,0x4                         ; 004d15ac
    LEA EAX,[ESI + 0x14d11c]            ; 004d15af
    MOV dword ptr [ESP + 0x10],ECX      ; 004d15b5
    FSTP float ptr [ESP + 0xc]          ; 004d15b9
    FLD float ptr [EAX]                 ; 004d15bd | g_CDemonSetInstance.ray_target.x
    FLD float ptr [EAX + 0x4]           ; 004d15bf | g_CDemonSetInstance.ray_target.y
    FLD float ptr [EAX + 0x8]           ; 004d15c2 | g_CDemonSetInstance.ray_target.z
    FXCH ST2                            ; 004d15c5
    FSUB float ptr [ESI + 0x14d110]     ; 004d15c7 | g_CDemonSetInstance.ray_origin.x
    FXCH                                ; 004d15cd
    FSUB float ptr [ESI + 0x14d114]     ; 004d15cf | g_CDemonSetInstance.ray_origin.y
    FXCH ST2                            ; 004d15d5
    FSUB float ptr [ESI + 0x14d118]     ; 004d15d7 | g_CDemonSetInstance.ray_origin.z
    FXCH                                ; 004d15dd
    FSTP float ptr [ESP + 0x84]         ; 004d15df
    FXCH                                ; 004d15e6
    FSTP float ptr [ESP + 0x88]         ; 004d15e8
    LEA ESI,[ESP + 0x84]                ; 004d15ef
    FSTP float ptr [ESP + 0x8c]         ; 004d15f6
    MOVSD ES:EDI,ESI                    ; 004d15fd
    MOVSD ES:EDI,ESI                    ; 004d15fe
    MOVSD ES:EDI,ESI                    ; 004d15ff
    FLD float ptr [ESP + 0xe8]          ; 004d1600
    FMUL ST0                            ; 004d1607
    FLD float ptr [ESP + 0xe4]          ; 004d1609
    FMUL ST0                            ; 004d1610
    FADDP                               ; 004d1612
    FLD float ptr [ESP + 0xec]          ; 004d1614
    FMUL ST0                            ; 004d161b
    FADDP                               ; 004d161d
    FSQRT                               ; 004d161f
    FDIVR double ptr [0x005c4a07]       ; 004d1621 | DAT_005c4a07
    FLD float ptr [ESP + 0xe4]          ; 004d1627
    FXCH                                ; 004d162e
    FSTP float ptr [ESP + 0x1b4]        ; 004d1630
    FMUL float ptr [ESP + 0x1b4]        ; 004d1637
    FLD float ptr [ESP + 0xe8]          ; 004d163e
    FMUL float ptr [ESP + 0x1b4]        ; 004d1645
    FLD float ptr [ESP + 0xec]          ; 004d164c
    FMUL float ptr [ESP + 0x1b4]        ; 004d1653
    LEA EDI,[ESP + 0x168]               ; 004d165a
    LEA ESI,[ESP + 0xa8]                ; 004d1661
    FXCH ST2                            ; 004d1668
    FSTP float ptr [ESP + 0xa8]         ; 004d166a
    FSTP float ptr [ESP + 0xac]         ; 004d1671
    FSTP float ptr [ESP + 0xb0]         ; 004d1678
    MOVSD ES:EDI,ESI                    ; 004d167f
    MOVSD ES:EDI,ESI                    ; 004d1680
    MOVSD ES:EDI,ESI                    ; 004d1681
    LEA EAX,[ESP + 0x14]                ; 004d1682
    LEA ESI,[ESP + 0x168]               ; 004d1686
    CMP EAX,ESI                         ; 004d168d
    JZ 0x004d16b2                       ; 004d168f
        ;   XREF to: 004d16b2 (CONDITIONAL_JUMP)  ; LAB_004d16b2
    MOV EAX,dword ptr [ESP + 0x168]     ; 004d1691
    MOV dword ptr [ESP + 0x14],EAX      ; 004d1698
    MOV EAX,dword ptr [ESP + 0x16c]     ; 004d169c
    MOV dword ptr [ESP + 0x18],EAX      ; 004d16a3
    MOV EAX,dword ptr [ESP + 0x170]     ; 004d16a7
    MOV dword ptr [ESP + 0x1c],EAX      ; 004d16ae
    MOV EAX,[0x00603b28]                ; 004d16b2 | g_CDemonSetPtr
        ;   Label: LAB_004d16b2
    ADD EAX,0x14d138                    ; 004d16b7
    PUSH EAX                            ; 004d16bc | g_CDemonSetInstance.collision_impact_position.x
    MOV ESI,dword ptr [ESP + 0x1bc]     ; 004d16bd
    PUSH ESI                            ; 004d16c4
    LEA ESI,[ESP + 0x164]               ; 004d16c5
    LEA EDI,[ESP + 0xf8]                ; 004d16cc
    CALL core_actor.cpp_FUN_00408bf0    ; 004d16d3
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x164]               ; 004d16d8
    ADD ESP,0x8                         ; 004d16df
    MOVSD ES:EDI,ESI                    ; 004d16e2
    MOVSD ES:EDI,ESI                    ; 004d16e3
    MOVSD ES:EDI,ESI                    ; 004d16e4
    LEA EAX,[ESP + 0x24]                ; 004d16e5
    LEA ESI,[ESP + 0xf0]                ; 004d16e9
    CMP EAX,ESI                         ; 004d16f0
    JZ 0x004d1715                       ; 004d16f2
        ;   XREF to: 004d1715 (CONDITIONAL_JUMP)  ; LAB_004d1715
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004d16f4
    MOV dword ptr [ESP + 0x24],EAX      ; 004d16fb
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004d16ff
    MOV dword ptr [ESP + 0x28],EAX      ; 004d1706
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004d170a
    MOV dword ptr [ESP + 0x2c],EAX      ; 004d1711
    MOV EAX,dword ptr [EBX + 0x56c]     ; 004d1715
        ;   Label: LAB_004d1715
    MOV EDI,0x65                        ; 004d171b
    MOV dword ptr [ESP + 0x30],EAX      ; 004d1720
    MOV dword ptr [ESP + 0x38],EDI      ; 004d1724
    MOV EAX,0x3e19999a                  ; 004d1728
    MOV dword ptr [ESP + 0x3c],EBX      ; 004d172d
    MOV dword ptr [ESP + 0x34],EAX      ; 004d1731
    PUSH EBX                            ; 004d1735
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d1736
    CALL dword ptr [EAX + 0x94]         ; 004d173c
    ADD ESP,0x4                         ; 004d1742
    MOV dword ptr [ESP + 0x40],EAX      ; 004d1745
    LEA EAX,[ESP + 0x8]                 ; 004d1749
    MOV ESI,dword ptr [ESP + 0x1b8]     ; 004d174d
    PUSH EAX                            ; 004d1754
    MOV EDX,dword ptr [ESP + 0x1bc]     ; 004d1755
    MOV ESI,dword ptr [ESI + 0x154]     ; 004d175c
    PUSH EDX                            ; 004d1762
    CALL dword ptr [ESI + 0x108]        ; 004d1763
    MOV ECX,dword ptr [EBX + 0x2e4]     ; 004d1769
    ADD ESP,0x8                         ; 004d176f
    TEST ECX,ECX                        ; 004d1772
    JZ 0x004d1209                       ; 004d1774
        ;   XREF to: 004d1209 (CONDITIONAL_JUMP)  ; LAB_004d1209
    MOV EAX,[0x00603b28]                ; 004d177a | g_CDemonSetPtr
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 004d177f | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 004d1785
    PUSH EAX                            ; 004d1786 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 004d1787
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004d178c
    JMP 0x004d1820                      ; 004d178f
        ;   XREF to: 004d1820 (UNCONDITIONAL_JUMP)  ; LAB_004d1820
    PUSH EDI                            ; 004d1794
        ;   Label: LAB_004d1794
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004cc5d0 ; 004d1795
        ;   XREF to: 004cc5d0 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 004d179a
    TEST EAX,EAX                        ; 004d179d
    JZ 0x004d1209                       ; 004d179f
        ;   XREF to: 004d1209 (CONDITIONAL_JUMP)  ; LAB_004d1209
    MOV EAX,[0x00603b28]                ; 004d17a5 | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 004d17aa
    PUSH EAX                            ; 004d17af | g_CDemonSetInstance.collision_impact_position.x
    PUSH EDI                            ; 004d17b0
    CALL core_glass.cpp_FUN_004cc040    ; 004d17b1
        ;   XREF to: 004cc040 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004cc040()
    ADD ESP,0x8                         ; 004d17b6
    JMP 0x004d1820                      ; 004d17b9
        ;   XREF to: 004d1820 (UNCONDITIONAL_JUMP)  ; LAB_004d1820
    PUSH ESI                            ; 004d17bb
        ;   Label: LAB_004d17bb
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_0056edc0 ; 004d17bc
        ;   XREF to: 0056edc0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_0056edc0(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 004d17c1
    PUSH EBX                            ; 004d17c4
    PUSH ESI                            ; 004d17c5
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0 ; 004d17c6
        ;   XREF to: 0056ede0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004d17cb
    TEST EAX,EAX                        ; 004d17ce
    JZ 0x004d17ff                       ; 004d17d0
        ;   XREF to: 004d17ff (CONDITIONAL_JUMP)  ; LAB_004d17ff
    PUSH EBX                            ; 004d17d2
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d17d3
    CALL dword ptr [EAX + 0xec]         ; 004d17d9
    MOV dword ptr [ESP + 0x1c0],EAX     ; 004d17df
    FLD float ptr [ESP + 0x1c0]         ; 004d17e6
    ADD ESP,0x4                         ; 004d17ed
    SUB ESP,0x4                         ; 004d17f0
    FSTP float ptr [ESP]                ; 004d17f3
    PUSH ESI                            ; 004d17f6
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_0056ee20 ; 004d17f7
        ;   XREF to: 0056ee20 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_0056ee20(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 004d17fc
    MOV EDI,dword ptr [ESP + 0x1a8]     ; 004d17ff
        ;   Label: LAB_004d17ff
    PUSH EDI                            ; 004d1806
    MOV EAX,[0x00603b28]                ; 004d1807 | g_CDemonSetPtr
    PUSH EAX                            ; 004d180c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 004d180d
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004d1812
    JMP 0x004d1820                      ; 004d1815
        ;   XREF to: 004d1820 (UNCONDITIONAL_JUMP)  ; LAB_004d1820
    PUSH ESI                            ; 004d1817
        ;   Label: LAB_004d1817
    CALL core_crate.cpp_FUN_004461c0    ; 004d1818
        ;   XREF to: 004461c0 (UNCONDITIONAL_CALL)  ; void core_crate.cpp_FUN_004461c0(CCrate * this_ptr)
    ADD ESP,0x4                         ; 004d181d
    MOV EDI,dword ptr [ESP + 0x1b0]     ; 004d1820
        ;   Label: LAB_004d1820
    INC EDI                             ; 004d1827
    MOV dword ptr [ESP + 0x1b0],EDI     ; 004d1828
    CMP EDI,0x4                         ; 004d182f
    JL 0x004d11c9                       ; 004d1832
        ;   XREF to: 004d11c9 (CONDITIONAL_JUMP)  ; LAB_004d11c9
    JMP 0x004d1209                      ; 004d1838
        ;   XREF to: 004d1209 (UNCONDITIONAL_JUMP)  ; LAB_004d1209
    MOV EAX,[0x00603b28]                ; 004d183d | g_CDemonSetPtr
        ;   Label: LAB_004d183d
    PUSH ECX                            ; 004d1842
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 004d1843 | g_CDemonSetInstance.collision_actor
    PUSH EDI                            ; 004d1849
    MOV EDX,dword ptr [EAX + 0x14d134]  ; 004d184a | g_CDemonSetInstance.ground_type
    PUSH EDX                            ; 004d1850
    LEA ESI,[EAX + 0x14d128]            ; 004d1851
    PUSH ESI                            ; 004d1857 | g_CDemonSetInstance.collision_normal.x
    ADD EAX,0x14d138                    ; 004d1858
    PUSH EAX                            ; 004d185d | g_CDemonSetInstance.collision_impact_position.x
    MOV ECX,dword ptr [0x005fc5a0]      ; 004d185e | DAT_005fc5a0
    PUSH ECX                            ; 004d1864
    CALL core_fire.cpp_FUN_004a2090     ; 004d1865
        ;   XREF to: 004a2090 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a2090()
    ADD ESP,0x18                        ; 004d186a
    JMP 0x004d1209                      ; 004d186d
        ;   XREF to: 004d1209 (UNCONDITIONAL_JUMP)  ; LAB_004d1209

