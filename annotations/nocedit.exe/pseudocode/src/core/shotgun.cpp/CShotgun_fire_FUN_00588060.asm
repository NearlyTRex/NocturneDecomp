; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_shotgun_cpp_CShotgun_fire_FUN_00588060(CShotgun *this_ptr)
;
; Parameters:
; CShotgun *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x80]:1  local_80
;
; Referenced Globals:
;   TerminatedCString s_shotgun_noammo_wav_00649b08
;   TerminatedCString s_shotgun_wav_00649b1b
;   double DOUBLE_00649b27 = 3.14159265350000
;   double DOUBLE_00649b2f = 0.00555555555555555
;   float FLOAT_00649b37 = -0.125
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CSound* g_CSoundPtr = 03f6af64
;   CFireEffect g_CFireEffectInstance
;   CDemonSet g_CDemonSetInstance
;   CSound g_CSoundInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60
;   core_setcolid.cpp_CDemonSet_init_FUN_00574180
;   core_sound.cpp_CSound_playActorSound_FUN_005b3a40
;   core_weapon.cpp_CWeapon_fire_FUN_005ee6e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00588060
        ;   Label: core_shotgun.cpp_CShotgun_fire_FUN_00588060
    PUSH ESI                            ; 00588061
    PUSH EDI                            ; 00588062
    PUSH EBP                            ; 00588063
    MOV EBP,ESP                         ; 00588064
    SUB ESP,0x114                       ; 00588066
    AND ESP,0xfffffff8                  ; 0058806c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058806f
    LEA EAX,[ESP + 0xa8]                ; 00588072
    PUSH EAX                            ; 00588079
    MOV ESI,dword ptr [EBX + 0x154]     ; 0058807a
    PUSH EBX                            ; 00588080
    CALL dword ptr [ESI + 0xf4]         ; 00588081
    ADD ESP,0x8                         ; 00588087
    PUSH EAX                            ; 0058808a
    LEA EAX,[ESP + 0x70]                ; 0058808b
    PUSH EAX                            ; 0058808f
    PUSH EBX                            ; 00588090
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00588091
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00588096
    PUSH EBX                            ; 00588099
    CALL core_weapon.cpp_CWeapon_fire_FUN_005ee6e0 ; 0058809a
        ;   XREF to: 005ee6e0 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_005ee6e0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0058809f
    TEST EAX,EAX                        ; 005880a2
    JZ 0x00588398                       ; 005880a4
        ;   XREF to: 00588398 (CONDITIONAL_JUMP)  ; LAB_00588398
    FLD float ptr [EBX + 0x578]         ; 005880aa
    FMUL double ptr [0x00649b27]        ; 005880b0 | DOUBLE_00649b27
    FMUL double ptr [0x00649b2f]        ; 005880b6 | DOUBLE_00649b2f
    FPTAN                               ; 005880bc
    FSTP ST0                            ; 005880be
    PUSH 0xf                            ; 005880c0
    FMUL float ptr [EBX + 0x2e8]        ; 005880c2
    PUSH 0xa                            ; 005880c8
    FSTP float ptr [ESP + 0xec]         ; 005880ca
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 005880d1
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 005880d6
    XOR ECX,ECX                         ; 005880d9
    MOV dword ptr [ESP + 0xf0],EAX      ; 005880db
    MOV dword ptr [ESP + 0xe8],ECX      ; 005880e2
    TEST EAX,EAX                        ; 005880e9
    JLE 0x0058830a                      ; 005880eb
        ;   XREF to: 0058830a (CONDITIONAL_JUMP)  ; LAB_0058830a
    PUSH 0x40c90fdb                     ; 005880f1
        ;   Label: LAB_005880f1
    PUSH 0x0                            ; 005880f6
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005880f8
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV EAX,[0x006810c8]                ; 0058830a | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_0058830a
    PUSH EAX                            ; 0058830f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 00588310
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00588315
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00588318
    MOV dword ptr [ESP + 0x9c],EAX      ; 0058831c
    MOV EAX,dword ptr [ESP + 0x70]      ; 00588323
    MOV dword ptr [ESP + 0xa0],EAX      ; 00588327
    MOV EAX,dword ptr [ESP + 0x74]      ; 0058832e
    MOV dword ptr [ESP + 0xa4],EAX      ; 00588332
    LEA EAX,[EBX + 0x3c]                ; 00588339
    MOV EDX,dword ptr [0x0067a3d0]      ; 0058833c | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH EAX                            ; 00588342
    LEA EAX,[ESP + 0xa0]                ; 00588343
    FLD float ptr [ESP + 0xa4]          ; 0058834a
    PUSH EAX                            ; 00588351
    FADD float ptr [0x00649b37]         ; 00588352 | FLOAT_00649b37
    PUSH EDX                            ; 00588358 | g_CFireEffectInstance
    FSTP float ptr [ESP + 0xac]         ; 00588359
    CALL core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60 ; 00588360
        ;   XREF to: 004c7a60 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004c7a60(CFireEffect * this_ptr)
    ADD ESP,0xc                         ; 00588365
    LEA EAX,[ESP + 0x6c]                ; 00588368
    PUSH EAX                            ; 0058836c
    PUSH 0x649b1b                       ; 0058836d | = "shotgun.wav"
    PUSH EBX                            ; 00588372
    MOV ECX,dword ptr [0x00681ef8]      ; 00588373 | g_CSoundPtr | g_CSoundInstance
    PUSH ECX                            ; 00588379 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playActorSound_FUN_005b3a40 ; 0058837a
        ;   XREF to: 005b3a40 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_playActorSound_FUN_005b3a40(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    MOV EAX,0x1                         ; 0058837f
    ADD ESP,0x10                        ; 00588384
    MOV dword ptr [EBX + 0x300],0x3f2a7efa ; 00588387
    MOV ESP,EBP                         ; 00588391
    POP EBP                             ; 00588393
    POP EDI                             ; 00588394
    POP ESI                             ; 00588395
    POP EBX                             ; 00588396
    RET                                 ; 00588397
    LEA EAX,[ESP + 0x6c]                ; 00588398
        ;   Label: LAB_00588398
    PUSH EAX                            ; 0058839c
    PUSH 0x649b08                       ; 0058839d | = "shotgun-noammo.wav"
    PUSH EBX                            ; 005883a2
    MOV EDX,dword ptr [0x00681ef8]      ; 005883a3 | g_CSoundPtr | g_CSoundInstance
    PUSH EDX                            ; 005883a9 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playActorSound_FUN_005b3a40 ; 005883aa
        ;   XREF to: 005b3a40 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_playActorSound_FUN_005b3a40(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 005883af
    XOR EAX,EAX                         ; 005883b2
    MOV ESP,EBP                         ; 005883b4
    POP EBP                             ; 005883b6
    POP EDI                             ; 005883b7
    POP ESI                             ; 005883b8
    POP EBX                             ; 005883b9
    RET                                 ; 005883ba

