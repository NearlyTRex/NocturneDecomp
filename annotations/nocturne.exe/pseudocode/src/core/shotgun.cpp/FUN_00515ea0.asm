; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_shotgun_cpp_FUN_00515ea0(CCharacter *param_1)
;
; Local Variables:
; undefined        Stack[-0x8c]:1  local_8c
;
; Referenced Globals:
;   TerminatedCString s_shotgun_noammo_wav_00591042
;   TerminatedCString s_shotgun_wav_00591055
;   double DOUBLE_00591065 = 3.14159265350000
;   double DOUBLE_0059106d = 0.00555555555555555
;   float FLOAT_00591075 = -0.125
;   double DOUBLE_0059107d = 1.5
;   double DOUBLE_00591085 = 10
;   undefined4 DAT_005b80f0
;   int INT_005b9284 = 0x1c70f74
;   undefined4 DAT_005be368
;   undefined4 DAT_005bed68
;   undefined4 g_CCharacterActorType_00765a60.name_hash
;   undefined4 g_CCrateActorType_0077bd40.name_hash
;   undefined4 g_CFlameCanActorType_01c70654.name_hash
;   undefined4 g_CGlassActorType_01c78c40.name_hash
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
;   core_fire.cpp_CFireEffect_createBulletImpact_FUN_0048ab60
;   core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_0048af20
;   core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550
;   core_glass.cpp_CGlass_shatter_FUN_004ada20
;   core_glass.cpp_FUN_004aded0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
;   core_setcolid.cpp_CDemonSet_init_FUN_00511750
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515ea0
        ;   Label: core_shotgun.cpp_FUN_00515ea0
    PUSH ESI                            ; 00515ea1
    PUSH EDI                            ; 00515ea2
    PUSH EBP                            ; 00515ea3
    MOV EBP,ESP                         ; 00515ea4
    SUB ESP,0x114                       ; 00515ea6
    AND ESP,0xfffffff8                  ; 00515eac
    MOV EBX,dword ptr [EBP + 0x14]      ; 00515eaf
    LEA EAX,[ESP + 0x9c]                ; 00515eb2
    PUSH EAX                            ; 00515eb9
    MOV EDX,dword ptr [EBX + 0x14c]     ; 00515eba
    PUSH EBX                            ; 00515ec0
    CALL dword ptr [EDX + 0xd8]         ; 00515ec1
    ADD ESP,0x8                         ; 00515ec7
    PUSH EAX                            ; 00515eca
    LEA EAX,[ESP + 0xac]                ; 00515ecb
    PUSH EAX                            ; 00515ed2
    PUSH EBX                            ; 00515ed3
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00515ed4
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00515ed9
    PUSH EBX                            ; 00515edc
    CALL core_weapon.cpp_CWeapon_fire_FUN_00554600 ; 00515edd
        ;   XREF to: 00554600 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_00554600(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 00515ee2
    TEST EAX,EAX                        ; 00515ee5
    JZ 0x00516233                       ; 00515ee7
        ;   XREF to: 00516233 (CONDITIONAL_JUMP)  ; LAB_00516233
    FLD float ptr [EBX + 0x570]         ; 00515eed
    FMUL double ptr [0x00591065]        ; 00515ef3 | DOUBLE_00591065
    FMUL double ptr [0x0059106d]        ; 00515ef9 | DOUBLE_0059106d
    FPTAN                               ; 00515eff
    FSTP ST0                            ; 00515f01
    PUSH 0xf                            ; 00515f03
    FMUL float ptr [EBX + 0x2e0]        ; 00515f05
    PUSH 0xa                            ; 00515f0b
    FSTP float ptr [ESP + 0xec]         ; 00515f0d
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 00515f14
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040de00(int min_value, int max_value)
    ADD ESP,0x8                         ; 00515f19
    XOR ECX,ECX                         ; 00515f1c
    MOV dword ptr [ESP + 0xf0],EAX      ; 00515f1e
    MOV dword ptr [ESP + 0xe8],ECX      ; 00515f25
    TEST EAX,EAX                        ; 00515f2c
    JLE 0x00516169                      ; 00515f2e
        ;   XREF to: 00516169 (CONDITIONAL_JUMP)  ; LAB_00516169
    PUSH 0x40c90fdb                     ; 00515f34
        ;   Label: LAB_00515f34
    PUSH 0x0                            ; 00515f39
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00515f3b
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x118],EAX     ; 00515f40
    FLD float ptr [ESP + 0x118]         ; 00515f47
    ADD ESP,0x8                         ; 00515f4e
    PUSH dword ptr [ESP + 0xe4]         ; 00515f51
    PUSH 0x0                            ; 00515f58
    FSTP float ptr [ESP + 0xe8]         ; 00515f5a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00515f61
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x118],EAX     ; 00515f66
    FLD float ptr [ESP + 0x118]         ; 00515f6d
    ADD ESP,0x8                         ; 00515f74
    FLD float ptr [ESP + 0xe0]          ; 00515f77
    FLD ST0                             ; 00515f7e
    FCOS                                ; 00515f80
    FXCH                                ; 00515f82
    FSIN                                ; 00515f84
    FXCH                                ; 00515f86
    FMUL ST2                            ; 00515f88
    FXCH                                ; 00515f8a
    FMULP ST2                           ; 00515f8c
    FSTP float ptr [ESP + 0xc0]         ; 00515f8e
    FSTP float ptr [ESP + 0xc4]         ; 00515f95
    MOV EAX,dword ptr [EBX + 0x2e0]     ; 00515f9c
    MOV dword ptr [ESP + 0xc8],EAX      ; 00515fa2
    LEA EAX,[ESP + 0xc0]                ; 00515fa9
    PUSH EAX                            ; 00515fb0
    LEA EAX,[ESP + 0x64]                ; 00515fb1
    PUSH EAX                            ; 00515fb5
    PUSH EBX                            ; 00515fb6
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 00515fb7
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 00515fbc
    LEA EAX,[ESP + 0xcc]                ; 00515fbe
    ADD ESP,0xc                         ; 00515fc5
    CMP EAX,EDX                         ; 00515fc8
    JZ 0x00515fe9                       ; 00515fca
        ;   XREF to: 00515fe9 (CONDITIONAL_JUMP)  ; LAB_00515fe9
    MOV EAX,dword ptr [EDX]             ; 00515fcc
    MOV dword ptr [ESP + 0xc0],EAX      ; 00515fce
    MOV EAX,dword ptr [EDX + 0x4]       ; 00515fd5
    MOV dword ptr [ESP + 0xc4],EAX      ; 00515fd8
    MOV EAX,dword ptr [EDX + 0x8]       ; 00515fdf
    MOV dword ptr [ESP + 0xc8],EAX      ; 00515fe2
    FLD float ptr [ESP + 0xa8]          ; 00515fe9
        ;   Label: LAB_00515fe9
    FLD float ptr [ESP + 0xac]          ; 00515ff0
    FLD float ptr [ESP + 0xb0]          ; 00515ff7
    FXCH ST2                            ; 00515ffe
    FADD float ptr [ESP + 0xc0]         ; 00516000
    FXCH                                ; 00516007
    FADD float ptr [ESP + 0xc4]         ; 00516009
    FXCH ST2                            ; 00516010
    FADD float ptr [ESP + 0xc8]         ; 00516012
    FXCH                                ; 00516019
    FSTP float ptr [ESP + 0x90]         ; 0051601b
    FXCH                                ; 00516022
    FSTP float ptr [ESP + 0x94]         ; 00516024
    FSTP float ptr [ESP + 0x98]         ; 0051602b
    FLD float ptr [EBX + 0x2e0]         ; 00516032
    FDIVR double ptr [0x0059107d]       ; 00516038 | DOUBLE_0059107d
    FLD float ptr [ESP + 0xc0]          ; 0051603e
    FXCH                                ; 00516045
    FSTP float ptr [ESP + 0xec]         ; 00516047
    FMUL float ptr [ESP + 0xec]         ; 0051604e
    FLD float ptr [ESP + 0xc4]          ; 00516055
    FMUL float ptr [ESP + 0xec]         ; 0051605c
    FLD float ptr [ESP + 0xc8]          ; 00516063
    FMUL float ptr [ESP + 0xec]         ; 0051606a
    FLD float ptr [ESP + 0xa8]          ; 00516071
    FLD float ptr [ESP + 0xac]          ; 00516078
    MOV EDI,dword ptr [0x005be368]      ; 0051607f | DAT_005be368
    FLD float ptr [ESP + 0xb0]          ; 00516085
    PUSH EDI                            ; 0051608c | DAT_01e57284
    FXCH ST5                            ; 0051608d
    FSTP float ptr [ESP + 0x58]         ; 0051608f
    FXCH ST3                            ; 00516093
    FSTP float ptr [ESP + 0x5c]         ; 00516095
    FXCH                                ; 00516099
    FSTP float ptr [ESP + 0x60]         ; 0051609b
    FSUB float ptr [ESP + 0x58]         ; 0051609f
    FXCH                                ; 005160a3
    FSUB float ptr [ESP + 0x5c]         ; 005160a5
    FXCH ST2                            ; 005160a9
    FSUB float ptr [ESP + 0x60]         ; 005160ab
    FXCH                                ; 005160af
    FSTP float ptr [ESP + 0xb8]         ; 005160b1
    FXCH                                ; 005160b8
    FSTP float ptr [ESP + 0xbc]         ; 005160ba
    FSTP float ptr [ESP + 0xc0]         ; 005160c1
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 005160c8
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00511750(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005160cd
    PUSH 0x1                            ; 005160d0
    MOV EAX,[0x005be368]                ; 005160d2 | DAT_005be368
    PUSH EAX                            ; 005160d7 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800 ; 005160d8
        ;   XREF to: 00511800 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 005160dd
    PUSH EBX                            ; 005160e0
    MOV EDX,dword ptr [0x005be368]      ; 005160e1 | DAT_005be368
    PUSH EDX                            ; 005160e7 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 005160e8
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00511780(CDemonSet * this_ptr, CDemonActor * actor)
    MOV ECX,dword ptr [EBX + 0x2fc]     ; 005160ed
    ADD ESP,0x8                         ; 005160f3
    TEST ECX,ECX                        ; 005160f6
    JNZ 0x00516259                      ; 005160f8
        ;   XREF to: 00516259 (CONDITIONAL_JUMP)  ; LAB_00516259
    XOR EAX,EAX                         ; 005160fe
        ;   Label: LAB_005160fe
    MOV dword ptr [ESP + 0x104],EAX     ; 00516100
    LEA EAX,[ESP + 0x90]                ; 00516107
        ;   Label: LAB_00516107
    PUSH EAX                            ; 0051610e
    LEA EAX,[ESP + 0xb8]                ; 0051610f
    PUSH EAX                            ; 00516116
    MOV EDX,dword ptr [0x005be368]      ; 00516117 | DAT_005be368
    PUSH EDX                            ; 0051611d | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00 ; 0051611e
        ;   XREF to: 0050fb00 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00(CDemonSet * this_ptr, CVector3f * ray_origin, CVector3f * ray_target)
    MOV dword ptr [ESP + 0x11c],EAX     ; 00516123
    FLD float ptr [ESP + 0x11c]         ; 0051612a
    ADD ESP,0xc                         ; 00516131
    FLDZ                                ; 00516134
    FXCH                                ; 00516136
    FST float ptr [ESP + 0x8]           ; 00516138
    FSTP double ptr [ESP]               ; 0051613c
    FCOMP double ptr [ESP]              ; 0051613f
    FNSTSW AX                           ; 00516142
    SAHF                                ; 00516144
    JBE 0x0051626e                      ; 00516145
        ;   XREF to: 0051626e (CONDITIONAL_JUMP)  ; LAB_0051626e
    MOV ESI,dword ptr [ESP + 0xe8]      ; 0051614b
        ;   Label: LAB_0051614b
    INC ESI                             ; 00516152
    MOV EDI,dword ptr [ESP + 0xf0]      ; 00516153
    MOV dword ptr [ESP + 0xe8],ESI      ; 0051615a
    CMP ESI,EDI                         ; 00516161
    JL 0x00515f34                       ; 00516163
        ;   XREF to: 00515f34 (CONDITIONAL_JUMP)  ; LAB_00515f34
    MOV EAX,[0x005be368]                ; 00516169 | DAT_005be368
        ;   Label: LAB_00516169
    PUSH EAX                            ; 0051616e | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 0051616f
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00511750(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00516174
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00516177
    MOV dword ptr [ESP + 0x84],EAX      ; 0051617e
    MOV EAX,dword ptr [ESP + 0xac]      ; 00516185
    MOV dword ptr [ESP + 0x88],EAX      ; 0051618c
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00516193
    MOV dword ptr [ESP + 0x8c],EAX      ; 0051619a
    LEA EAX,[EBX + 0x3c]                ; 005161a1
    MOV EDX,dword ptr [0x005b80f0]      ; 005161a4 | DAT_005b80f0
    PUSH EAX                            ; 005161aa
    LEA EAX,[ESP + 0x88]                ; 005161ab
    FLD float ptr [ESP + 0x8c]          ; 005161b2
    PUSH EAX                            ; 005161b9
    FADD float ptr [0x00591075]         ; 005161ba | FLOAT_00591075
    PUSH EDX                            ; 005161c0
    FSTP float ptr [ESP + 0x94]         ; 005161c1
    CALL core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_0048af20 ; 005161c8
        ;   XREF to: 0048af20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_0048af20(CFireEffect * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    ADD ESP,0xc                         ; 005161cd
    LEA EAX,[ESP + 0xa8]                ; 005161d0
    PUSH EAX                            ; 005161d7
    PUSH 0x591055                       ; 005161d8 | = "shotgun.wav"
    PUSH EBX                            ; 005161dd
    MOV ECX,dword ptr [0x005bed68]      ; 005161de | DAT_005bed68
    PUSH ECX                            ; 005161e4
    CALL core_sound.cpp_CSound_playActorSound_FUN_0052ea60 ; 005161e5
        ;   XREF to: 0052ea60 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0052ea60(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 005161ea
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005161ed
    PUSH EBX                            ; 005161f3
    MOV dword ptr [EBX + 0x2f8],0x3f2a7efa ; 005161f4
    CALL dword ptr [EAX + 0x8c]         ; 005161fe
    MOV EDX,dword ptr [0x01cae0e8]      ; 00516204 | DAT_01cae0e8
    MOV EBX,dword ptr [EDX*0x4 + 0x1cae0d8] ; 0051620a
    ADD ESP,0x4                         ; 00516211
    CMP EAX,EBX                         ; 00516214
    JNZ 0x00516227                      ; 00516216
        ;   XREF to: 00516227 (CONDITIONAL_JUMP)  ; LAB_00516227
    MOV ESI,dword ptr [0x005b9284]      ; 00516218 | INT_005b9284
    PUSH ESI                            ; 0051621e
    CALL xxx_unk.c_FUN_004940d0         ; 0051621f
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined xxx_unk.c_FUN_004940d0()
    ADD ESP,0x4                         ; 00516224
    MOV EAX,0x1                         ; 00516227
        ;   Label: LAB_00516227
    MOV ESP,EBP                         ; 0051622c
    POP EBP                             ; 0051622e
    POP EDI                             ; 0051622f
    POP ESI                             ; 00516230
    POP EBX                             ; 00516231
    RET                                 ; 00516232
    LEA EAX,[ESP + 0xa8]                ; 00516233
        ;   Label: LAB_00516233
    PUSH EAX                            ; 0051623a
    PUSH 0x591042                       ; 0051623b | = "shotgun-noammo.wav"
    PUSH EBX                            ; 00516240
    MOV EDX,dword ptr [0x005bed68]      ; 00516241 | DAT_005bed68
    PUSH EDX                            ; 00516247
    CALL core_sound.cpp_CSound_playActorSound_FUN_0052ea60 ; 00516248
        ;   XREF to: 0052ea60 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0052ea60(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0051624d
    XOR EAX,EAX                         ; 00516250
    MOV ESP,EBP                         ; 00516252
    POP EBP                             ; 00516254
    POP EDI                             ; 00516255
    POP ESI                             ; 00516256
    POP EBX                             ; 00516257
    RET                                 ; 00516258
    PUSH ECX                            ; 00516259
        ;   Label: LAB_00516259
    MOV EDI,dword ptr [0x005be368]      ; 0051625a | DAT_005be368
    PUSH EDI                            ; 00516260 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 00516261
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00511780(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00516266
    JMP 0x005160fe                      ; 00516269
        ;   XREF to: 005160fe (UNCONDITIONAL_JUMP)  ; LAB_005160fe
    FLD1                                ; 0051626e
        ;   Label: LAB_0051626e
    FCOMP double ptr [ESP]              ; 00516270
    FNSTSW AX                           ; 00516273
    SAHF                                ; 00516275
    JC 0x0051614b                       ; 00516276
        ;   XREF to: 0051614b (CONDITIONAL_JUMP)  ; LAB_0051614b
    MOV ECX,dword ptr [0x00765a98]      ; 0051627c | g_CCharacterActorType_00765a60.name_hash
    MOV EAX,[0x005be368]                ; 00516282 | DAT_005be368
    PUSH ECX                            ; 00516287
    MOV ESI,dword ptr [EAX + 0x14cd5c]  ; 00516288 | DAT_01fa3fe0
    PUSH ESI                            ; 0051628e
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0051628f
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00516294
    MOV ESI,EAX                         ; 00516297
    TEST EAX,EAX                        ; 00516299
    JZ 0x005162b3                       ; 0051629b
        ;   XREF to: 005162b3 (CONDITIONAL_JUMP)  ; LAB_005162b3
    PUSH EAX                            ; 0051629d
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0051629e
    CALL dword ptr [EDX + 0x104]        ; 005162a4
    ADD ESP,0x4                         ; 005162aa
    TEST EAX,EAX                        ; 005162ad
    JLE 0x005162b3                      ; 005162af
        ;   XREF to: 005162b3 (CONDITIONAL_JUMP)  ; LAB_005162b3
    XOR ESI,ESI                         ; 005162b1
    MOV EDI,dword ptr [0x01c78c78]      ; 005162b3 | g_CGlassActorType_01c78c40.name_hash
        ;   Label: LAB_005162b3
    MOV EAX,[0x005be368]                ; 005162b9 | DAT_005be368
    PUSH EDI                            ; 005162be
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 005162bf | DAT_01fa3fe0
    PUSH EDX                            ; 005162c5
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 005162c6
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x110],EAX     ; 005162cb
    ADD ESP,0x8                         ; 005162d2
    MOV ECX,dword ptr [0x02dd10bc]      ; 005162d5 | g_CTriggerActorType_02dd1084.name_hash
    MOV EAX,[0x005be368]                ; 005162db | DAT_005be368
    PUSH ECX                            ; 005162e0
    MOV EDI,dword ptr [EAX + 0x14cd5c]  ; 005162e1 | DAT_01fa3fe0
    PUSH EDI                            ; 005162e7
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 005162e8
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005162ed
    MOV EDI,EAX                         ; 005162f0
    MOV dword ptr [ESP + 0xf4],EAX      ; 005162f2
    MOV EAX,[0x0077bd78]                ; 005162f9 | g_CCrateActorType_0077bd40.name_hash
    PUSH EAX                            ; 005162fe
    MOV EAX,[0x005be368]                ; 005162ff | DAT_005be368
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 00516304 | DAT_01fa3fe0
    PUSH EDX                            ; 0051630a
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0051630b
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x108],EAX     ; 00516310
    ADD ESP,0x8                         ; 00516317
    MOV ECX,dword ptr [0x01c7068c]      ; 0051631a | g_CFlameCanActorType_01c70654.name_hash
    MOV EAX,[0x005be368]                ; 00516320 | DAT_005be368
    PUSH ECX                            ; 00516325
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 00516326 | DAT_01fa3fe0
    PUSH EDX                            ; 0051632c
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0051632d
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x104],EAX     ; 00516332
    ADD ESP,0x8                         ; 00516339
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0051633c
    PUSH EBX                            ; 00516342
    CALL dword ptr [EAX + 0xe4]         ; 00516343
    MOV dword ptr [ESP + 0x114],EAX     ; 00516349
    FLD float ptr [ESP + 0x114]         ; 00516350
    ADD ESP,0x4                         ; 00516357
    FLD1                                ; 0051635a
    FSUB float ptr [ESP + 0x8]          ; 0051635c
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00516360
    FMULP                               ; 00516367
    MOV dword ptr [ESP + 0x110],EAX     ; 00516369
    FILD dword ptr [ESP + 0x110]        ; 00516370
    FDIVP                               ; 00516377
    FSTP float ptr [ESP + 0xf8]         ; 00516379
    TEST ESI,ESI                        ; 00516380
    JNZ 0x005163de                      ; 00516382
        ;   XREF to: 005163de (CONDITIONAL_JUMP)  ; LAB_005163de
    MOV ECX,dword ptr [ESP + 0x108]     ; 00516384
    TEST ECX,ECX                        ; 0051638b
    JNZ 0x0051656c                      ; 0051638d
        ;   XREF to: 0051656c (CONDITIONAL_JUMP)  ; LAB_0051656c
    TEST EDI,EDI                        ; 00516393
    JZ 0x0051659a                       ; 00516395
        ;   XREF to: 0051659a (CONDITIONAL_JUMP)  ; LAB_0051659a
    PUSH EDI                            ; 0051639b
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_00548580 ; 0051639c
        ;   XREF to: 00548580 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_00548580(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 005163a1
    PUSH EBX                            ; 005163a4
    PUSH EDI                            ; 005163a5
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_005485a0 ; 005163a6
        ;   XREF to: 005485a0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_005485a0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005163ab
    TEST EAX,EAX                        ; 005163ae
    JZ 0x005163c2                       ; 005163b0
        ;   XREF to: 005163c2 (CONDITIONAL_JUMP)  ; LAB_005163c2
    PUSH dword ptr [ESP + 0xf8]         ; 005163b2
    PUSH EDI                            ; 005163b9
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_005485e0 ; 005163ba
        ;   XREF to: 005485e0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_005485e0(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 005163bf
    MOV EDX,dword ptr [ESP + 0xf4]      ; 005163c2
        ;   Label: LAB_005163c2
    PUSH EDX                            ; 005163c9
    MOV ECX,dword ptr [0x005be368]      ; 005163ca | DAT_005be368
    PUSH ECX                            ; 005163d0 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 005163d1
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00511780(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005163d6
    JMP 0x005165c4                      ; 005163d9
        ;   XREF to: 005165c4 (UNCONDITIONAL_JUMP)  ; LAB_005165c4
    PUSH ESI                            ; 005163de
        ;   Label: LAB_005163de
    MOV EAX,dword ptr [ESI + 0x14c]     ; 005163df
    CALL dword ptr [EAX + 0xd8]         ; 005163e5
    ADD ESP,0x4                         ; 005163eb
    TEST EAX,EAX                        ; 005163ee
    JNZ 0x0051614b                      ; 005163f0
        ;   XREF to: 0051614b (CONDITIONAL_JUMP)  ; LAB_0051614b
    LEA EAX,[ESP + 0xc]                 ; 005163f6
    PUSH EAX                            ; 005163fa
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 005163fb
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo * this_ptr)
    MOV EDX,dword ptr [0x005be368]      ; 00516400 | DAT_005be368
    ADD ESP,0x4                         ; 00516406
    MOV EAX,dword ptr [EDX + 0x14cd60]  ; 00516409 | DAT_01fa3fe4
    MOV dword ptr [ESP + 0xc],EAX       ; 0051640f
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00516413
    MOV dword ptr [ESP + 0x10],EAX      ; 0051641a
    MOV EAX,0x3ecccccd                  ; 0051641e
    LEA EDI,[EDX + 0x14cd34]            ; 00516423
    MOV dword ptr [ESP + 0x14],EAX      ; 00516429
    LEA EAX,[EDX + 0x14cd28]            ; 0051642d
    FLD float ptr [EDI]                 ; 00516433 | DAT_01fa3fb8
    FSUB float ptr [EAX]                ; 00516435 | DAT_01fa3fac
    FSTP float ptr [ESP + 0x48]         ; 00516437
    FLD float ptr [EDI + 0x4]           ; 0051643b | DAT_01fa3fbc
    FSUB float ptr [EAX + 0x4]          ; 0051643e | DAT_01fa3fb0
    FST float ptr [ESP + 0x4c]          ; 00516441
    FMUL float ptr [ESP + 0x4c]         ; 00516445
    FLD float ptr [ESP + 0x48]          ; 00516449
    FMUL ST0                            ; 0051644d
    FLD float ptr [EDI + 0x8]           ; 0051644f | DAT_01fa3fc0
    FSUB float ptr [EAX + 0x8]          ; 00516452 | DAT_01fa3fb4
    FXCH                                ; 00516455
    FADDP ST2,ST0                       ; 00516457
    FST float ptr [ESP + 0x50]          ; 00516459
    FMUL float ptr [ESP + 0x50]         ; 0051645d
    FADDP                               ; 00516461
    FSQRT                               ; 00516463
    FDIVR double ptr [0x00591085]       ; 00516465 | DOUBLE_00591085
    FLD float ptr [ESP + 0x48]          ; 0051646b
    FXCH                                ; 0051646f
    FSTP float ptr [ESP + 0x10c]        ; 00516471
    FMUL float ptr [ESP + 0x10c]        ; 00516478
    FLD float ptr [ESP + 0x4c]          ; 0051647f
    FMUL float ptr [ESP + 0x10c]        ; 00516483
    FLD float ptr [ESP + 0x50]          ; 0051648a
    FMUL float ptr [ESP + 0x10c]        ; 0051648e
    LEA EDX,[ESP + 0x18]                ; 00516495
    LEA EAX,[ESP + 0x6c]                ; 00516499
    FXCH ST2                            ; 0051649d
    FSTP float ptr [ESP + 0x6c]         ; 0051649f
    FSTP float ptr [ESP + 0x70]         ; 005164a3
    FSTP float ptr [ESP + 0x74]         ; 005164a7
    CMP EDX,EAX                         ; 005164ab
    JZ 0x005164c7                       ; 005164ad
        ;   XREF to: 005164c7 (CONDITIONAL_JUMP)  ; LAB_005164c7
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005164af
    MOV dword ptr [ESP + 0x18],EAX      ; 005164b3
    MOV EAX,dword ptr [ESP + 0x70]      ; 005164b7
    MOV dword ptr [ESP + 0x1c],EAX      ; 005164bb
    MOV EAX,dword ptr [ESP + 0x74]      ; 005164bf
    MOV dword ptr [ESP + 0x20],EAX      ; 005164c3
    MOV EAX,[0x005be368]                ; 005164c7 | DAT_005be368
        ;   Label: LAB_005164c7
    ADD EAX,0x14cd50                    ; 005164cc
    PUSH EAX                            ; 005164d1 | DAT_01fa3fd4
    LEA EAX,[ESP + 0x7c]                ; 005164d2
    PUSH EAX                            ; 005164d6
    PUSH ESI                            ; 005164d7
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 005164d8
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    MOV EDI,EAX                         ; 005164dd
    LEA EAX,[ESP + 0x34]                ; 005164df
    ADD ESP,0xc                         ; 005164e3
    CMP EAX,EDI                         ; 005164e6
    JZ 0x005164fe                       ; 005164e8
        ;   XREF to: 005164fe (CONDITIONAL_JUMP)  ; LAB_005164fe
    MOV EAX,dword ptr [EDI]             ; 005164ea
    MOV dword ptr [ESP + 0x28],EAX      ; 005164ec
    MOV EAX,dword ptr [EDI + 0x4]       ; 005164f0
    MOV dword ptr [ESP + 0x2c],EAX      ; 005164f3
    MOV EAX,dword ptr [EDI + 0x8]       ; 005164f7
    MOV dword ptr [ESP + 0x30],EAX      ; 005164fa
    MOV EDX,0x65                        ; 005164fe
        ;   Label: LAB_005164fe
    MOV EAX,dword ptr [EBX + 0x564]     ; 00516503
    MOV ECX,0x3e19999a                  ; 00516509
    MOV dword ptr [ESP + 0x34],EAX      ; 0051650e
    MOV dword ptr [ESP + 0x3c],EDX      ; 00516512
    MOV dword ptr [ESP + 0x38],ECX      ; 00516516
    MOV dword ptr [ESP + 0x40],EBX      ; 0051651a
    PUSH EBX                            ; 0051651e
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0051651f
    CALL dword ptr [EAX + 0x8c]         ; 00516525
    ADD ESP,0x4                         ; 0051652b
    MOV dword ptr [ESP + 0x44],EAX      ; 0051652e
    LEA EAX,[ESP + 0xc]                 ; 00516532
    PUSH EAX                            ; 00516536
    MOV EDX,dword ptr [ESI + 0x14c]     ; 00516537
    PUSH ESI                            ; 0051653d
    CALL dword ptr [EDX + 0x100]        ; 0051653e
    MOV ESI,dword ptr [EBX + 0x2dc]     ; 00516544
    ADD ESP,0x8                         ; 0051654a
    TEST ESI,ESI                        ; 0051654d
    JZ 0x0051614b                       ; 0051654f
        ;   XREF to: 0051614b (CONDITIONAL_JUMP)  ; LAB_0051614b
    MOV EAX,[0x005be368]                ; 00516555 | DAT_005be368
    MOV EDI,dword ptr [EAX + 0x14cd5c]  ; 0051655a | DAT_01fa3fe0
    PUSH EDI                            ; 00516560
    PUSH EAX                            ; 00516561 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 00516562
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00511780(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00516567
    JMP 0x005165c4                      ; 0051656a
        ;   XREF to: 005165c4 (UNCONDITIONAL_JUMP)  ; LAB_005165c4
    PUSH ECX                            ; 0051656c
        ;   Label: LAB_0051656c
    CALL core_glass.cpp_FUN_004aded0    ; 0051656d
        ;   XREF to: 004aded0 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_FUN_004aded0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 00516572
    TEST EAX,EAX                        ; 00516575
    JZ 0x0051614b                       ; 00516577
        ;   XREF to: 0051614b (CONDITIONAL_JUMP)  ; LAB_0051614b
    MOV EAX,[0x005be368]                ; 0051657d | DAT_005be368
    ADD EAX,0x14cd50                    ; 00516582
    PUSH EAX                            ; 00516587 | DAT_01fa3fd4
    MOV EDI,dword ptr [ESP + 0x10c]     ; 00516588
    PUSH EDI                            ; 0051658f
    CALL core_glass.cpp_CGlass_shatter_FUN_004ada20 ; 00516590
        ;   XREF to: 004ada20 (UNCONDITIONAL_CALL)  ; void core_glass.cpp_CGlass_shatter_FUN_004ada20(CGlass * this_ptr, CVector3f * location)
    ADD ESP,0x8                         ; 00516595
    JMP 0x005165c4                      ; 00516598
        ;   XREF to: 005165c4 (UNCONDITIONAL_JUMP)  ; LAB_005165c4
    MOV ESI,dword ptr [ESP + 0x100]     ; 0051659a
        ;   Label: LAB_0051659a
    TEST ESI,ESI                        ; 005165a1
    JNZ 0x005165bb                      ; 005165a3
        ;   XREF to: 005165bb (CONDITIONAL_JUMP)  ; LAB_005165bb
    MOV EDI,dword ptr [ESP + 0xfc]      ; 005165a5
    TEST EDI,EDI                        ; 005165ac
    JZ 0x005165e1                       ; 005165ae
        ;   XREF to: 005165e1 (CONDITIONAL_JUMP)  ; LAB_005165e1
    PUSH EDI                            ; 005165b0
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550 ; 005165b1
        ;   XREF to: 0048e550 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 005165b6
    JMP 0x005165c4                      ; 005165b9
        ;   XREF to: 005165c4 (UNCONDITIONAL_JUMP)  ; LAB_005165c4
    PUSH ESI                            ; 005165bb
        ;   Label: LAB_005165bb
    CALL core_crate.cpp_CCrate_explode_FUN_0043cdb0 ; 005165bc
        ;   XREF to: 0043cdb0 (UNCONDITIONAL_CALL)  ; void core_crate.cpp_CCrate_explode_FUN_0043cdb0(CCrate * this_ptr)
    ADD ESP,0x4                         ; 005165c1
    MOV EAX,dword ptr [ESP + 0x104]     ; 005165c4
        ;   Label: LAB_005165c4
    INC EAX                             ; 005165cb
    MOV dword ptr [ESP + 0x104],EAX     ; 005165cc
    CMP EAX,0x4                         ; 005165d3
    JL 0x00516107                       ; 005165d6
        ;   XREF to: 00516107 (CONDITIONAL_JUMP)  ; LAB_00516107
    JMP 0x0051614b                      ; 005165dc
        ;   XREF to: 0051614b (UNCONDITIONAL_JUMP)  ; LAB_0051614b
    MOV EAX,[0x005be368]                ; 005165e1 | DAT_005be368
        ;   Label: LAB_005165e1
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 005165e6 | DAT_01fa3fe0
    PUSH EDX                            ; 005165ec
    MOV ECX,dword ptr [EAX + 0x14cd4c]  ; 005165ed | DAT_01fa3fd0
    PUSH ECX                            ; 005165f3
    LEA EDX,[EAX + 0x14cd40]            ; 005165f4
    PUSH EDX                            ; 005165fa | DAT_01fa3fc4
    ADD EAX,0x14cd50                    ; 005165fb
    PUSH EAX                            ; 00516600 | DAT_01fa3fd4
    MOV ESI,dword ptr [0x005b80f0]      ; 00516601 | DAT_005b80f0
    PUSH ESI                            ; 00516607
    CALL core_fire.cpp_CFireEffect_createBulletImpact_FUN_0048ab60 ; 00516608
        ;   XREF to: 0048ab60 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createBulletImpact_FUN_0048ab60(CFireEffect * this_ptr, CVector3f * impact_pos, CVector3f * surface_normal, int ground_type, ...)
    ADD ESP,0x14                        ; 0051660d
    JMP 0x0051614b                      ; 00516610
        ;   XREF to: 0051614b (UNCONDITIONAL_JUMP)  ; LAB_0051614b

