; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_elephant_cpp_CElephantGun_fire_FUN_00486d40(CElephantGun *this_ptr)
;
; Parameters:
; CElephantGun *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_shotgun_noammo_wav_005bd979
;   TerminatedCString s_elephantgun_wav_005bd98c
;   undefined4 DAT_005bd99c
;   undefined4 DAT_005bd9a4
;   undefined4 DAT_005bd9ac
;   undefined4 DAT_005bd9b4
;   undefined4 DAT_005bd9bc
;   undefined4 DAT_005fc5a0
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_006045f8
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 g_CCrateClassInfo.name_hash
;   undefined4 g_CFlameCanClassInfo.name_hash
;   undefined4 g_CGlassClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   ... and 12 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   core_crate.cpp_FUN_004461c0
;   core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
;   core_fire.cpp_FUN_004a2090
;   core_flamecan.cpp_CFlameCan_ignite_FUN_004a7110
;   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004cc5d0
;   core_glass.cpp_FUN_004cc040
;   core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10
;   core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486d40
        ;   Label: core_elephant.cpp_CElephantGun_fire_FUN_00486d40
    PUSH ESI                            ; 00486d41
    PUSH EDI                            ; 00486d42
    PUSH EBP                            ; 00486d43
    MOV EBP,ESP                         ; 00486d44
    SUB ESP,0x180                       ; 00486d46
    AND ESP,0xfffffff8                  ; 00486d4c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00486d4f
    PUSH EBX                            ; 00486d52
    MOV EAX,dword ptr [EBX + 0x154]     ; 00486d53
    LEA ESI,[ESP + 0xdc]                ; 00486d59
    LEA EDI,[ESP + 0xac]                ; 00486d60
    CALL dword ptr [EAX + 0xe0]         ; 00486d67
    ADD ESP,0x4                         ; 00486d6d
    LEA EAX,[ESP + 0xa8]                ; 00486d70
    LEA ESI,[ESP + 0xd8]                ; 00486d77
    PUSH EAX                            ; 00486d7e
    MOVSD ES:EDI,ESI                    ; 00486d7f
    MOVSD ES:EDI,ESI                    ; 00486d80
    MOVSD ES:EDI,ESI                    ; 00486d81
    PUSH EBX                            ; 00486d82
    LEA ESI,[ESP + 0x110]               ; 00486d83
    CALL core_actor.cpp_FUN_00408b80    ; 00486d8a
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00486d8f
    LEA EDI,[ESP + 0xe4]                ; 00486d92
    LEA ESI,[ESP + 0x108]               ; 00486d99
    PUSH EBX                            ; 00486da0
    MOVSD ES:EDI,ESI                    ; 00486da1
    MOVSD ES:EDI,ESI                    ; 00486da2
    MOVSD ES:EDI,ESI                    ; 00486da3
    CALL core_weapon.cpp_CWeapon_fire_FUN_0057b880 ; 00486da4
        ;   XREF to: 0057b880 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_0057b880(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 00486da9
    TEST EAX,EAX                        ; 00486dac
    JZ 0x004870fb                       ; 00486dae
        ;   XREF to: 004870fb (CONDITIONAL_JUMP)  ; LAB_004870fb
    FLD float ptr [EBX + 0x594]         ; 00486db4
    FMUL float ptr [0x005bd99c]         ; 00486dba | DAT_005bd99c
    FMUL double ptr [0x005bd9a4]        ; 00486dc0 | DAT_005bd9a4
    FPTAN                               ; 00486dc6
    FSTP ST0                            ; 00486dc8
    PUSH 0xf                            ; 00486dca
    FMUL float ptr [EBX + 0x2e8]        ; 00486dcc
    PUSH 0xa                            ; 00486dd2
    FSTP float ptr [ESP + 0x158]        ; 00486dd4
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00486ddb
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00486de0
    XOR ECX,ECX                         ; 00486de3
    MOV dword ptr [ESP + 0x15c],EAX     ; 00486de5
    MOV dword ptr [ESP + 0x154],ECX     ; 00486dec
    TEST EAX,EAX                        ; 00486df3
    JLE 0x00487089                      ; 00486df5
        ;   XREF to: 00487089 (CONDITIONAL_JUMP)  ; LAB_00487089
    PUSH 0x40c90fdb                     ; 00486dfb
        ;   Label: LAB_00486dfb
    PUSH 0x0                            ; 00486e00
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00486e02
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x184],EAX     ; 00486e07
    FLD float ptr [ESP + 0x184]         ; 00486e0e
    ADD ESP,0x8                         ; 00486e15
    PUSH dword ptr [ESP + 0x150]        ; 00486e18
    PUSH 0x0                            ; 00486e1f
    FSTP float ptr [ESP + 0x150]        ; 00486e21
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00486e28
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x184],EAX     ; 00486e2d
    FLD float ptr [ESP + 0x184]         ; 00486e34
    ADD ESP,0x8                         ; 00486e3b
    FLD float ptr [ESP + 0x148]         ; 00486e3e
    FLD ST0                             ; 00486e45
    FCOS                                ; 00486e47
    FXCH                                ; 00486e49
    FSIN                                ; 00486e4b
    FXCH                                ; 00486e4d
    FMUL ST2                            ; 00486e4f
    FXCH                                ; 00486e51
    FMULP ST2                           ; 00486e53
    FSTP float ptr [ESP + 0xfc]         ; 00486e55
    FSTP float ptr [ESP + 0x100]        ; 00486e5c
    MOV EAX,dword ptr [EBX + 0x2e8]     ; 00486e63
    MOV dword ptr [ESP + 0x104],EAX     ; 00486e69
    LEA EAX,[ESP + 0xfc]                ; 00486e70
    PUSH EAX                            ; 00486e77
    PUSH EBX                            ; 00486e78
    LEA ESI,[ESP + 0xbc]                ; 00486e79
    LEA EDI,[ESP + 0xa4]                ; 00486e80
    CALL core_actor.cpp_FUN_00408b00    ; 00486e87
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0xbc]                ; 00486e8c
    ADD ESP,0x8                         ; 00486e93
    MOVSD ES:EDI,ESI                    ; 00486e96
    MOVSD ES:EDI,ESI                    ; 00486e97
    MOVSD ES:EDI,ESI                    ; 00486e98
    LEA EAX,[ESP + 0x9c]                ; 00486e99
    LEA ESI,[ESP + 0xfc]                ; 00486ea0
    CMP ESI,EAX                         ; 00486ea7
    JZ 0x00486ed5                       ; 00486ea9
        ;   XREF to: 00486ed5 (CONDITIONAL_JUMP)  ; LAB_00486ed5
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00486eab
    MOV dword ptr [ESP + 0xfc],EAX      ; 00486eb2
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00486eb9
    MOV dword ptr [ESP + 0x100],EAX     ; 00486ec0
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00486ec7
    MOV dword ptr [ESP + 0x104],EAX     ; 00486ece
    FLD float ptr [ESP + 0xe4]          ; 00486ed5
        ;   Label: LAB_00486ed5
    FLD float ptr [ESP + 0xe8]          ; 00486edc
    FLD float ptr [ESP + 0xec]          ; 00486ee3
    LEA EDI,[ESP + 0xf0]                ; 00486eea
    LEA ESI,[ESP + 0x12c]               ; 00486ef1
    FXCH ST2                            ; 00486ef8
    FADD float ptr [ESP + 0xfc]         ; 00486efa
    FXCH                                ; 00486f01
    FADD float ptr [ESP + 0x100]        ; 00486f03
    FXCH ST2                            ; 00486f0a
    FADD float ptr [ESP + 0x104]        ; 00486f0c
    FXCH                                ; 00486f13
    FSTP float ptr [ESP + 0x12c]        ; 00486f15
    FXCH                                ; 00486f1c
    FSTP float ptr [ESP + 0x130]        ; 00486f1e
    FSTP float ptr [ESP + 0x134]        ; 00486f25
    MOVSD ES:EDI,ESI                    ; 00486f2c
    MOVSD ES:EDI,ESI                    ; 00486f2d
    MOVSD ES:EDI,ESI                    ; 00486f2e
    FLD float ptr [EBX + 0x2e8]         ; 00486f2f
    FDIVR double ptr [0x005bd9b4]       ; 00486f35 | DAT_005bd9b4
    FLD float ptr [ESP + 0xfc]          ; 00486f3b
    FXCH                                ; 00486f42
    FSTP float ptr [ESP + 0x158]        ; 00486f44
    FMUL float ptr [ESP + 0x158]        ; 00486f4b
    FLD float ptr [ESP + 0x100]         ; 00486f52
    FMUL float ptr [ESP + 0x158]        ; 00486f59
    FLD float ptr [ESP + 0x104]         ; 00486f60
    FMUL float ptr [ESP + 0x158]        ; 00486f67
    FLD float ptr [ESP + 0xe4]          ; 00486f6e
    FLD float ptr [ESP + 0xe8]          ; 00486f75
    FLD float ptr [ESP + 0xec]          ; 00486f7c
    MOV ECX,dword ptr [0x00603b28]      ; 00486f83 | g_CDemonSetPtr
    LEA EDI,[ESP + 0x60]                ; 00486f89
    LEA ESI,[ESP + 0x114]               ; 00486f8d
    FXCH ST5                            ; 00486f94
    FSTP float ptr [ESP + 0x114]        ; 00486f96
    FXCH ST3                            ; 00486f9d
    FSTP float ptr [ESP + 0x118]        ; 00486f9f
    FXCH                                ; 00486fa6
    FSTP float ptr [ESP + 0x11c]        ; 00486fa8
    MOVSD ES:EDI,ESI                    ; 00486faf
    MOVSD ES:EDI,ESI                    ; 00486fb0
    MOVSD ES:EDI,ESI                    ; 00486fb1
    PUSH ECX                            ; 00486fb2 | g_CDemonSetInstance
    LEA EDI,[ESP + 0x7c]                ; 00486fb3
    LEA ESI,[ESP + 0xc4]                ; 00486fb7
    FSUB float ptr [ESP + 0x64]         ; 00486fbe
    FXCH                                ; 00486fc2
    FSUB float ptr [ESP + 0x68]         ; 00486fc4
    FXCH ST2                            ; 00486fc8
    FSUB float ptr [ESP + 0x6c]         ; 00486fca
    FXCH                                ; 00486fce
    FSTP float ptr [ESP + 0xc4]         ; 00486fd0
    FXCH                                ; 00486fd7
    FSTP float ptr [ESP + 0xc8]         ; 00486fd9
    FSTP float ptr [ESP + 0xcc]         ; 00486fe0
    MOVSD ES:EDI,ESI                    ; 00486fe7
    MOVSD ES:EDI,ESI                    ; 00486fe8
    MOVSD ES:EDI,ESI                    ; 00486fe9
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 00486fea
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00486fef
    PUSH 0x1                            ; 00486ff2
    MOV ESI,dword ptr [0x00603b28]      ; 00486ff4 | g_CDemonSetPtr
    PUSH ESI                            ; 00486ffa | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90 ; 00486ffb
        ;   XREF to: 0053ec90 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 00487000
    PUSH EBX                            ; 00487003
    MOV EDI,dword ptr [0x00603b28]      ; 00487004 | g_CDemonSetPtr
    PUSH EDI                            ; 0048700a | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 0048700b
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    MOV EAX,dword ptr [EBX + 0x304]     ; 00487010
    ADD ESP,0x8                         ; 00487016
    TEST EAX,EAX                        ; 00487019
    JNZ 0x00487121                      ; 0048701b
        ;   XREF to: 00487121 (CONDITIONAL_JUMP)  ; LAB_00487121
    XOR ESI,ESI                         ; 00487021
        ;   Label: LAB_00487021
    MOV dword ptr [ESP + 0x170],ESI     ; 00487023
    LEA EAX,[ESP + 0xf0]                ; 0048702a
        ;   Label: LAB_0048702a
    PUSH EAX                            ; 00487031
    LEA EAX,[ESP + 0x7c]                ; 00487032
    PUSH EAX                            ; 00487036
    MOV EDI,dword ptr [0x00603b28]      ; 00487037 | g_CDemonSetPtr
    PUSH EDI                            ; 0048703d | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_0053ccc0 ; 0048703e
        ;   XREF to: 0053ccc0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053ccc0()
    MOV dword ptr [ESP + 0x188],EAX     ; 00487043
    FLD float ptr [ESP + 0x188]         ; 0048704a
    ADD ESP,0xc                         ; 00487051
    FLDZ                                ; 00487054
    FXCH                                ; 00487056
    FST float ptr [ESP + 0x8]           ; 00487058
    FSTP double ptr [ESP]               ; 0048705c
    FCOMP double ptr [ESP]              ; 0048705f
    FNSTSW AX                           ; 00487062
    SAHF                                ; 00487064
    JBE 0x00487136                      ; 00487065
        ;   XREF to: 00487136 (CONDITIONAL_JUMP)  ; LAB_00487136
    MOV ESI,dword ptr [ESP + 0x154]     ; 0048706b
        ;   Label: LAB_0048706b
    INC ESI                             ; 00487072
    MOV EDI,dword ptr [ESP + 0x15c]     ; 00487073
    MOV dword ptr [ESP + 0x154],ESI     ; 0048707a
    CMP ESI,EDI                         ; 00487081
    JL 0x00486dfb                       ; 00487083
        ;   XREF to: 00486dfb (CONDITIONAL_JUMP)  ; LAB_00486dfb
    LEA EDI,[ESP + 0x120]               ; 00487089
        ;   Label: LAB_00487089
    LEA EAX,[EBX + 0x3c]                ; 00487090
    LEA ESI,[ESP + 0xe4]                ; 00487093
    PUSH EAX                            ; 0048709a
    MOVSD ES:EDI,ESI                    ; 0048709b
    MOVSD ES:EDI,ESI                    ; 0048709c
    MOVSD ES:EDI,ESI                    ; 0048709d
    LEA EAX,[ESP + 0x124]               ; 0048709e
    FLD float ptr [ESP + 0x128]         ; 004870a5
    PUSH EAX                            ; 004870ac
    MOV EAX,[0x005fc5a0]                ; 004870ad | DAT_005fc5a0
    FADD float ptr [0x005bd9ac]         ; 004870b2 | DAT_005bd9ac
    PUSH EAX                            ; 004870b8
    FSTP float ptr [ESP + 0x130]        ; 004870b9
    CALL core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450 ; 004870c0
        ;   XREF to: 004a2450 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450(CFireEffect * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    ADD ESP,0xc                         ; 004870c5
    LEA EAX,[ESP + 0xe4]                ; 004870c8
    PUSH EAX                            ; 004870cf
    PUSH 0x5bd98c                       ; 004870d0 | = "elephantgun.wav"
    PUSH EBX                            ; 004870d5
    MOV EDX,dword ptr [0x006045f8]      ; 004870d6 | DAT_006045f8
    PUSH EDX                            ; 004870dc
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 004870dd
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    MOV EAX,0x1                         ; 004870e2
    ADD ESP,0x10                        ; 004870e7
    MOV dword ptr [EBX + 0x300],0x3f800000 ; 004870ea
    MOV ESP,EBP                         ; 004870f4
    POP EBP                             ; 004870f6
    POP EDI                             ; 004870f7
    POP ESI                             ; 004870f8
    POP EBX                             ; 004870f9
    RET                                 ; 004870fa
    LEA EAX,[ESP + 0xe4]                ; 004870fb
        ;   Label: LAB_004870fb
    PUSH EAX                            ; 00487102
    PUSH 0x5bd979                       ; 00487103 | = "shotgun-noammo.wav"
    PUSH EBX                            ; 00487108
    MOV EDX,dword ptr [0x006045f8]      ; 00487109 | DAT_006045f8
    PUSH EDX                            ; 0048710f
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 00487110
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 00487115
    XOR EAX,EAX                         ; 00487118
    MOV ESP,EBP                         ; 0048711a
    POP EBP                             ; 0048711c
    POP EDI                             ; 0048711d
    POP ESI                             ; 0048711e
    POP EBX                             ; 0048711f
    RET                                 ; 00487120
    PUSH EAX                            ; 00487121
        ;   Label: LAB_00487121
    MOV ECX,dword ptr [0x00603b28]      ; 00487122 | g_CDemonSetPtr
    PUSH ECX                            ; 00487128 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 00487129
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0048712e
    JMP 0x00487021                      ; 00487131
        ;   XREF to: 00487021 (UNCONDITIONAL_JUMP)  ; LAB_00487021
    FLD1                                ; 00487136
        ;   Label: LAB_00487136
    FCOMP double ptr [ESP]              ; 00487138
    FNSTSW AX                           ; 0048713b
    SAHF                                ; 0048713d
    JC 0x0048706b                       ; 0048713e
        ;   XREF to: 0048706b (CONDITIONAL_JUMP)  ; LAB_0048706b
    MOV EAX,[0x007e2cec]                ; 00487144 | g_CCharacterClassInfo.name_hash
    PUSH EAX                            ; 00487149
    MOV EAX,[0x00603b28]                ; 0048714a | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0048714f | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 00487155
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00487156
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0048715b
    MOV dword ptr [ESP + 0x178],EAX     ; 0048715e
    TEST EAX,EAX                        ; 00487165
    JZ 0x00487186                       ; 00487167
        ;   XREF to: 00487186 (CONDITIONAL_JUMP)  ; LAB_00487186
    PUSH EAX                            ; 00487169
    MOV ESI,dword ptr [EAX + 0x154]     ; 0048716a
    CALL dword ptr [ESI + 0x10c]        ; 00487170
    ADD ESP,0x4                         ; 00487176
    TEST EAX,EAX                        ; 00487179
    JLE 0x00487186                      ; 0048717b
        ;   XREF to: 00487186 (CONDITIONAL_JUMP)  ; LAB_00487186
    XOR ECX,ECX                         ; 0048717d
    MOV dword ptr [ESP + 0x178],ECX     ; 0048717f
    MOV ESI,dword ptr [0x01d22e04]      ; 00487186 | g_CGlassClassInfo.name_hash
        ;   Label: LAB_00487186
    MOV EAX,[0x00603b28]                ; 0048718c | g_CDemonSetPtr
    PUSH ESI                            ; 00487191
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 00487192 | g_CDemonSetInstance.collision_actor
    PUSH EDI                            ; 00487198
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00487199
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0048719e
    MOV EDI,EAX                         ; 004871a1
    MOV EAX,[0x02cfd894]                ; 004871a3 | g_CTriggerClassInfo.name_hash
    PUSH EAX                            ; 004871a8
    MOV EAX,[0x00603b28]                ; 004871a9 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004871ae | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 004871b4
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004871b5
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ECX,dword ptr [0x007f8fc8]      ; 004871ba | g_CCrateClassInfo.name_hash
    ADD ESP,0x8                         ; 004871c0
    MOV ESI,EAX                         ; 004871c3
    MOV dword ptr [ESP + 0x160],EAX     ; 004871c5
    MOV EAX,[0x00603b28]                ; 004871cc | g_CDemonSetPtr
    PUSH ECX                            ; 004871d1
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004871d2 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 004871d8
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004871d9
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x16c],EAX     ; 004871de
    ADD ESP,0x8                         ; 004871e5
    MOV ECX,dword ptr [0x01d0cf60]      ; 004871e8 | g_CFlameCanClassInfo.name_hash
    MOV EAX,[0x00603b28]                ; 004871ee | g_CDemonSetPtr
    PUSH ECX                            ; 004871f3
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004871f4 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 004871fa
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004871fb
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x170],EAX     ; 00487200
    ADD ESP,0x8                         ; 00487207
    MOV EAX,dword ptr [EBX + 0x154]     ; 0048720a
    PUSH EBX                            ; 00487210
    CALL dword ptr [EAX + 0xec]         ; 00487211
    MOV dword ptr [ESP + 0x180],EAX     ; 00487217
    FLD float ptr [ESP + 0x180]         ; 0048721e
    ADD ESP,0x4                         ; 00487225
    FLD1                                ; 00487228
    FSUB float ptr [ESP + 0x8]          ; 0048722a
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0048722e
    FMULP                               ; 00487235
    MOV dword ptr [ESP + 0x17c],EAX     ; 00487237
    FILD dword ptr [ESP + 0x17c]        ; 0048723e
    FDIVP                               ; 00487245
    MOV ECX,dword ptr [ESP + 0x178]     ; 00487247
    FSTP float ptr [ESP + 0x16c]        ; 0048724e
    TEST ECX,ECX                        ; 00487255
    JNZ 0x004872ac                      ; 00487257
        ;   XREF to: 004872ac (CONDITIONAL_JUMP)  ; LAB_004872ac
    TEST EDI,EDI                        ; 00487259
    JNZ 0x004874b5                      ; 0048725b
        ;   XREF to: 004874b5 (CONDITIONAL_JUMP)  ; LAB_004874b5
    TEST ESI,ESI                        ; 00487261
    JZ 0x004874dc                       ; 00487263
        ;   XREF to: 004874dc (CONDITIONAL_JUMP)  ; LAB_004874dc
    PUSH ESI                            ; 00487269
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_0056edc0 ; 0048726a
        ;   XREF to: 0056edc0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_0056edc0(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 0048726f
    PUSH EBX                            ; 00487272
    PUSH ESI                            ; 00487273
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0 ; 00487274
        ;   XREF to: 0056ede0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00487279
    TEST EAX,EAX                        ; 0048727c
    JZ 0x00487290                       ; 0048727e
        ;   XREF to: 00487290 (CONDITIONAL_JUMP)  ; LAB_00487290
    PUSH dword ptr [ESP + 0x16c]        ; 00487280
    PUSH ESI                            ; 00487287
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_0056ee20 ; 00487288
        ;   XREF to: 0056ee20 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_0056ee20(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 0048728d
    MOV EDX,dword ptr [ESP + 0x160]     ; 00487290
        ;   Label: LAB_00487290
    PUSH EDX                            ; 00487297
    MOV ECX,dword ptr [0x00603b28]      ; 00487298 | g_CDemonSetPtr
    PUSH ECX                            ; 0048729e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 0048729f
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004872a4
    JMP 0x00487506                      ; 004872a7
        ;   XREF to: 00487506 (UNCONDITIONAL_JUMP)  ; LAB_00487506
    PUSH ECX                            ; 004872ac
        ;   Label: LAB_004872ac
    MOV EAX,dword ptr [ECX + 0x154]     ; 004872ad
    CALL dword ptr [EAX + 0xe0]         ; 004872b3
    ADD ESP,0x4                         ; 004872b9
    TEST EAX,EAX                        ; 004872bc
    JNZ 0x0048706b                      ; 004872be
        ;   XREF to: 0048706b (CONDITIONAL_JUMP)  ; LAB_0048706b
    LEA EAX,[ESP + 0xc]                 ; 004872c4
    PUSH EAX                            ; 004872c8
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 004872c9
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    MOV ESI,dword ptr [0x00603b28]      ; 004872ce | g_CDemonSetPtr
    ADD ESP,0x4                         ; 004872d4
    MOV EAX,dword ptr [ESI + 0x14d148]  ; 004872d7 | g_CDemonSetInstance.collision_part_index
    MOV dword ptr [ESP + 0xc],EAX       ; 004872dd
    MOV EAX,dword ptr [ESP + 0x16c]     ; 004872e1
    MOV EDI,0x3ecccccd                  ; 004872e8
    MOV dword ptr [ESP + 0x10],EAX      ; 004872ed
    LEA EAX,[ESI + 0x14d11c]            ; 004872f1
    MOV dword ptr [ESP + 0x14],EDI      ; 004872f7
    LEA EDI,[ESP + 0x90]                ; 004872fb
    FLD float ptr [EAX]                 ; 00487302 | g_CDemonSetInstance.ray_target.x
    FLD float ptr [EAX + 0x4]           ; 00487304 | g_CDemonSetInstance.ray_target.y
    FLD float ptr [EAX + 0x8]           ; 00487307 | g_CDemonSetInstance.ray_target.z
    FXCH ST2                            ; 0048730a
    FSUB float ptr [ESI + 0x14d110]     ; 0048730c | g_CDemonSetInstance.ray_origin.x
    FXCH                                ; 00487312
    FSUB float ptr [ESI + 0x14d114]     ; 00487314 | g_CDemonSetInstance.ray_origin.y
    FXCH ST2                            ; 0048731a
    FSUB float ptr [ESI + 0x14d118]     ; 0048731c | g_CDemonSetInstance.ray_origin.z
    FXCH                                ; 00487322
    FSTP float ptr [ESP + 0x54]         ; 00487324
    FXCH                                ; 00487328
    FSTP float ptr [ESP + 0x58]         ; 0048732a
    LEA ESI,[ESP + 0x54]                ; 0048732e
    FSTP float ptr [ESP + 0x5c]         ; 00487332
    MOVSD ES:EDI,ESI                    ; 00487336
    MOVSD ES:EDI,ESI                    ; 00487337
    MOVSD ES:EDI,ESI                    ; 00487338
    FLD float ptr [ESP + 0x94]          ; 00487339
    FMUL ST0                            ; 00487340
    FLD float ptr [ESP + 0x90]          ; 00487342
    FMUL ST0                            ; 00487349
    FADDP                               ; 0048734b
    FLD float ptr [ESP + 0x98]          ; 0048734d
    FMUL ST0                            ; 00487354
    FADDP                               ; 00487356
    FSQRT                               ; 00487358
    FDIVR double ptr [0x005bd9bc]       ; 0048735a | DAT_005bd9bc
    FLD float ptr [ESP + 0x90]          ; 00487360
    FXCH                                ; 00487367
    FSTP float ptr [ESP + 0x174]        ; 00487369
    FMUL float ptr [ESP + 0x174]        ; 00487370
    FLD float ptr [ESP + 0x94]          ; 00487377
    FMUL float ptr [ESP + 0x174]        ; 0048737e
    FLD float ptr [ESP + 0x98]          ; 00487385
    FMUL float ptr [ESP + 0x174]        ; 0048738c
    LEA EDI,[ESP + 0x48]                ; 00487393
    LEA ESI,[ESP + 0x84]                ; 00487397
    FXCH ST2                            ; 0048739e
    FSTP float ptr [ESP + 0x84]         ; 004873a0
    FSTP float ptr [ESP + 0x88]         ; 004873a7
    FSTP float ptr [ESP + 0x8c]         ; 004873ae
    MOVSD ES:EDI,ESI                    ; 004873b5
    MOVSD ES:EDI,ESI                    ; 004873b6
    MOVSD ES:EDI,ESI                    ; 004873b7
    LEA EAX,[ESP + 0x48]                ; 004873b8
    LEA ESI,[ESP + 0x18]                ; 004873bc
    CMP ESI,EAX                         ; 004873c0
    JZ 0x004873dc                       ; 004873c2
        ;   XREF to: 004873dc (CONDITIONAL_JUMP)  ; LAB_004873dc
    MOV EAX,dword ptr [ESP + 0x48]      ; 004873c4
    MOV dword ptr [ESP + 0x18],EAX      ; 004873c8
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004873cc
    MOV dword ptr [ESP + 0x1c],EAX      ; 004873d0
    MOV EAX,dword ptr [ESP + 0x50]      ; 004873d4
    MOV dword ptr [ESP + 0x20],EAX      ; 004873d8
    MOV EAX,[0x00603b28]                ; 004873dc | g_CDemonSetPtr
        ;   Label: LAB_004873dc
    ADD EAX,0x14d138                    ; 004873e1
    PUSH EAX                            ; 004873e6 | g_CDemonSetInstance.collision_impact_position.x
    MOV EAX,dword ptr [ESP + 0x17c]     ; 004873e7
    PUSH EAX                            ; 004873ee
    LEA ESI,[ESP + 0x74]                ; 004873ef
    LEA EDI,[ESP + 0xd4]                ; 004873f3
    CALL core_actor.cpp_FUN_00408bf0    ; 004873fa
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x74]                ; 004873ff
    ADD ESP,0x8                         ; 00487403
    MOVSD ES:EDI,ESI                    ; 00487406
    MOVSD ES:EDI,ESI                    ; 00487407
    MOVSD ES:EDI,ESI                    ; 00487408
    LEA EAX,[ESP + 0xcc]                ; 00487409
    LEA ESI,[ESP + 0x28]                ; 00487410
    CMP ESI,EAX                         ; 00487414
    JZ 0x00487439                       ; 00487416
        ;   XREF to: 00487439 (CONDITIONAL_JUMP)  ; LAB_00487439
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00487418
    MOV dword ptr [ESP + 0x28],EAX      ; 0048741f
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00487423
    MOV dword ptr [ESP + 0x2c],EAX      ; 0048742a
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0048742e
    MOV dword ptr [ESP + 0x30],EAX      ; 00487435
    MOV EDX,0x6b                        ; 00487439
        ;   Label: LAB_00487439
    MOV EAX,dword ptr [EBX + 0x56c]     ; 0048743e
    MOV ECX,0x3f800000                  ; 00487444
    MOV dword ptr [ESP + 0x34],EAX      ; 00487449
    MOV dword ptr [ESP + 0x3c],EDX      ; 0048744d
    MOV dword ptr [ESP + 0x38],ECX      ; 00487451
    MOV dword ptr [ESP + 0x40],EBX      ; 00487455
    PUSH EBX                            ; 00487459
    MOV EAX,dword ptr [EBX + 0x154]     ; 0048745a
    CALL dword ptr [EAX + 0x94]         ; 00487460
    ADD ESP,0x4                         ; 00487466
    MOV dword ptr [ESP + 0x44],EAX      ; 00487469
    LEA EAX,[ESP + 0xc]                 ; 0048746d
    MOV ESI,dword ptr [ESP + 0x178]     ; 00487471
    PUSH EAX                            ; 00487478
    MOV EDI,dword ptr [ESP + 0x17c]     ; 00487479
    MOV ESI,dword ptr [ESI + 0x154]     ; 00487480
    PUSH EDI                            ; 00487486
    CALL dword ptr [ESI + 0x108]        ; 00487487
    MOV EAX,dword ptr [EBX + 0x2e4]     ; 0048748d
    ADD ESP,0x8                         ; 00487493
    TEST EAX,EAX                        ; 00487496
    JZ 0x0048706b                       ; 00487498
        ;   XREF to: 0048706b (CONDITIONAL_JUMP)  ; LAB_0048706b
    MOV EAX,[0x00603b28]                ; 0048749e | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004874a3 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 004874a9
    PUSH EAX                            ; 004874aa | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 004874ab
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004874b0
    JMP 0x00487506                      ; 004874b3
        ;   XREF to: 00487506 (UNCONDITIONAL_JUMP)  ; LAB_00487506
    PUSH EDI                            ; 004874b5
        ;   Label: LAB_004874b5
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004cc5d0 ; 004874b6
        ;   XREF to: 004cc5d0 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 004874bb
    TEST EAX,EAX                        ; 004874be
    JZ 0x0048706b                       ; 004874c0
        ;   XREF to: 0048706b (CONDITIONAL_JUMP)  ; LAB_0048706b
    MOV EAX,[0x00603b28]                ; 004874c6 | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 004874cb
    PUSH EAX                            ; 004874d0 | g_CDemonSetInstance.collision_impact_position.x
    PUSH EDI                            ; 004874d1
    CALL core_glass.cpp_FUN_004cc040    ; 004874d2
        ;   XREF to: 004cc040 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004cc040()
    ADD ESP,0x8                         ; 004874d7
    JMP 0x00487506                      ; 004874da
        ;   XREF to: 00487506 (UNCONDITIONAL_JUMP)  ; LAB_00487506
    MOV ESI,dword ptr [ESP + 0x164]     ; 004874dc
        ;   Label: LAB_004874dc
    TEST ESI,ESI                        ; 004874e3
    JNZ 0x004874fd                      ; 004874e5
        ;   XREF to: 004874fd (CONDITIONAL_JUMP)  ; LAB_004874fd
    MOV EDI,dword ptr [ESP + 0x168]     ; 004874e7
    TEST EDI,EDI                        ; 004874ee
    JZ 0x00487523                       ; 004874f0
        ;   XREF to: 00487523 (CONDITIONAL_JUMP)  ; LAB_00487523
    PUSH EDI                            ; 004874f2
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004a7110 ; 004874f3
        ;   XREF to: 004a7110 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004a7110(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 004874f8
    JMP 0x00487506                      ; 004874fb
        ;   XREF to: 00487506 (UNCONDITIONAL_JUMP)  ; LAB_00487506
    PUSH ESI                            ; 004874fd
        ;   Label: LAB_004874fd
    CALL core_crate.cpp_FUN_004461c0    ; 004874fe
        ;   XREF to: 004461c0 (UNCONDITIONAL_CALL)  ; void core_crate.cpp_FUN_004461c0(CCrate * this_ptr)
    ADD ESP,0x4                         ; 00487503
    MOV ECX,dword ptr [ESP + 0x170]     ; 00487506
        ;   Label: LAB_00487506
    INC ECX                             ; 0048750d
    MOV dword ptr [ESP + 0x170],ECX     ; 0048750e
    CMP ECX,0x4                         ; 00487515
    JL 0x0048702a                       ; 00487518
        ;   XREF to: 0048702a (CONDITIONAL_JUMP)  ; LAB_0048702a
    JMP 0x0048706b                      ; 0048751e
        ;   XREF to: 0048706b (UNCONDITIONAL_JUMP)  ; LAB_0048706b
    MOV EAX,[0x00603b28]                ; 00487523 | g_CDemonSetPtr
        ;   Label: LAB_00487523
    PUSH ECX                            ; 00487528
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00487529 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 0048752f
    MOV ECX,dword ptr [EAX + 0x14d134]  ; 00487530 | g_CDemonSetInstance.ground_type
    PUSH ECX                            ; 00487536
    LEA ESI,[EAX + 0x14d128]            ; 00487537
    PUSH ESI                            ; 0048753d | g_CDemonSetInstance.collision_normal.x
    ADD EAX,0x14d138                    ; 0048753e
    PUSH EAX                            ; 00487543 | g_CDemonSetInstance.collision_impact_position.x
    MOV ESI,dword ptr [0x005fc5a0]      ; 00487544 | DAT_005fc5a0
    PUSH ESI                            ; 0048754a
    CALL core_fire.cpp_FUN_004a2090     ; 0048754b
        ;   XREF to: 004a2090 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a2090()
    ADD ESP,0x18                        ; 00487550
    JMP 0x0048706b                      ; 00487553
        ;   XREF to: 0048706b (UNCONDITIONAL_JUMP)  ; LAB_0048706b

