; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_elephant_cpp_CElephantGun_fire_FUN_004a7160(CElephantGun *this_ptr)
;
; Parameters:
; CElephantGun *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x68]:1  local_68
;
; Referenced Globals:
;   TerminatedCString s_shotgun_noammo_wav_00623fd4
;   TerminatedCString s_elephantgun_wav_00623fe7
;   double DOUBLE_00623ffa = 3.14159265350000
;   double DOUBLE_00624002 = 0.00555555555555555
;   float FLOAT_0062400a = -0.125
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CSound* g_CSoundPtr = 03f6af64
;   CFireEffect g_CFireEffectInstance
;   CSound g_CSoundInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_fire.cpp_CFireEffect_FUN_004c7a60
;   core_sound.cpp_CSound_playActorSound_FUN_005b3a40
;   core_weapon.cpp_CWeapon_fire_FUN_005ee6e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7160
        ;   Label: core_elephant.cpp_CElephantGun_fire_FUN_004a7160
    PUSH ESI                            ; 004a7161
    PUSH EDI                            ; 004a7162
    PUSH EBP                            ; 004a7163
    MOV EBP,ESP                         ; 004a7164
    SUB ESP,0x114                       ; 004a7166
    AND ESP,0xfffffff8                  ; 004a716c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a716f
    LEA ESI,[ESP + 0xc0]                ; 004a7172
    PUSH ESI                            ; 004a7179
    MOV EAX,dword ptr [EBX + 0x154]     ; 004a717a
    PUSH EBX                            ; 004a7180
    CALL dword ptr [EAX + 0xf4]         ; 004a7181
    ADD ESP,0x8                         ; 004a7187
    PUSH EAX                            ; 004a718a
    LEA EAX,[ESP + 0xac]                ; 004a718b
    PUSH EAX                            ; 004a7192
    PUSH EBX                            ; 004a7193
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004a7194
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004a7199
    PUSH EBX                            ; 004a719c
    CALL core_weapon.cpp_CWeapon_fire_FUN_005ee6e0 ; 004a719d
        ;   XREF to: 005ee6e0 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_005ee6e0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004a71a2
    TEST EAX,EAX                        ; 004a71a5
    JZ 0x004a747f                       ; 004a71a7
        ;   XREF to: 004a747f (CONDITIONAL_JUMP)  ; LAB_004a747f
    FLD float ptr [EBX + 0x578]         ; 004a71ad
    FMUL double ptr [0x00623ffa]        ; 004a71b3 | DOUBLE_00623ffa
    FMUL double ptr [0x00624002]        ; 004a71b9 | DOUBLE_00624002
    FPTAN                               ; 004a71bf
    FSTP ST0                            ; 004a71c1
    PUSH 0xf                            ; 004a71c3
    FMUL float ptr [EBX + 0x2e8]        ; 004a71c5
    PUSH 0xa                            ; 004a71cb
    FSTP float ptr [ESP + 0xec]         ; 004a71cd
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 004a71d4
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 004a71d9
    XOR ECX,ECX                         ; 004a71dc
    MOV dword ptr [ESP + 0xf0],EAX      ; 004a71de
    MOV dword ptr [ESP + 0xe8],ECX      ; 004a71e5
    TEST EAX,EAX                        ; 004a71ec
    JLE 0x004a7406                      ; 004a71ee
        ;   XREF to: 004a7406 (CONDITIONAL_JUMP)  ; LAB_004a7406
    PUSH 0x40c90fdb                     ; 004a71f4
        ;   Label: LAB_004a71f4
    PUSH 0x0                            ; 004a71f9
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004a71fb
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004a7406
        ;   Label: LAB_004a7406
    MOV dword ptr [ESP + 0x60],EAX      ; 004a740d
    MOV EAX,dword ptr [ESP + 0xac]      ; 004a7411
    MOV dword ptr [ESP + 0x64],EAX      ; 004a7418
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004a741c
    MOV dword ptr [ESP + 0x68],EAX      ; 004a7423
    LEA EAX,[EBX + 0x3c]                ; 004a7427
    PUSH EAX                            ; 004a742a
    LEA EAX,[ESP + 0x64]                ; 004a742b
    FLD float ptr [ESP + 0x68]          ; 004a742f
    PUSH EAX                            ; 004a7433
    MOV EAX,[0x0067a3d0]                ; 004a7434 | g_CFireEffectPtr | g_CFireEffectInstance
    FADD float ptr [0x0062400a]         ; 004a7439 | FLOAT_0062400a
    PUSH EAX                            ; 004a743f | g_CFireEffectInstance
    FSTP float ptr [ESP + 0x70]         ; 004a7440
    CALL core_fire.cpp_CFireEffect_FUN_004c7a60 ; 004a7444
        ;   XREF to: 004c7a60 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c7a60(CFireEffect * this_ptr)
    ADD ESP,0xc                         ; 004a7449
    LEA EAX,[ESP + 0xa8]                ; 004a744c
    PUSH EAX                            ; 004a7453
    PUSH 0x623fe7                       ; 004a7454 | = "elephantgun.wav"
    PUSH EBX                            ; 004a7459
    MOV EDX,dword ptr [0x00681ef8]      ; 004a745a | g_CSoundPtr | g_CSoundInstance
    PUSH EDX                            ; 004a7460 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playActorSound_FUN_005b3a40 ; 004a7461
        ;   XREF to: 005b3a40 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_playActorSound_FUN_005b3a40(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    MOV EAX,0x1                         ; 004a7466
    ADD ESP,0x10                        ; 004a746b
    MOV dword ptr [EBX + 0x300],0x3f800000 ; 004a746e
    MOV ESP,EBP                         ; 004a7478
    POP EBP                             ; 004a747a
    POP EDI                             ; 004a747b
    POP ESI                             ; 004a747c
    POP EBX                             ; 004a747d
    RET                                 ; 004a747e
    LEA EAX,[ESP + 0xa8]                ; 004a747f
        ;   Label: LAB_004a747f
    PUSH EAX                            ; 004a7486
    PUSH 0x623fd4                       ; 004a7487 | = "shotgun-noammo.wav"
    PUSH EBX                            ; 004a748c
    MOV EDX,dword ptr [0x00681ef8]      ; 004a748d | g_CSoundPtr | g_CSoundInstance
    PUSH EDX                            ; 004a7493 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playActorSound_FUN_005b3a40 ; 004a7494
        ;   XREF to: 005b3a40 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_playActorSound_FUN_005b3a40(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004a7499
    XOR EAX,EAX                         ; 004a749c
    MOV ESP,EBP                         ; 004a749e
    POP EBP                             ; 004a74a0
    POP EDI                             ; 004a74a1
    POP ESI                             ; 004a74a2
    POP EBX                             ; 004a74a3
    RET                                 ; 004a74a4

