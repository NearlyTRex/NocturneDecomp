; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_elephant_cpp_CElephantGun_fire_FUN_00485b40(CElephantGun *this_ptr)
;
; Parameters:
; CElephantGun *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_shotgun_noammo_wav_005d2b23
;   TerminatedCString s_elephantgun_wav_005d2b36
;   undefined4 DAT_005d2b46
;   undefined4 DAT_005d2b4e
;   undefined4 DAT_005d2b56
;   undefined4 DAT_005d2b5e
;   undefined4 DAT_005d2b66
;   undefined4 DAT_00614d30
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_0061c068
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 g_CCrateClassInfo.name_hash
;   undefined4 g_CFlameCanClassInfo.name_hash
;   undefined4 g_CGlassClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   ... and 12 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   core_crate.cpp_FUN_0043a350
;   core_fire.cpp_CFireEffect_createBulletImpact_FUN_0049cd50
;   core_fire.cpp_FUN_0049d120
;   core_flamecan.cpp_CFlameCan_ignite_FUN_004a08d0
;   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004c72d0
;   core_glass.cpp_FUN_004c6d40
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30
;   core_setcolid.cpp_CDemonSet_init_FUN_00537e00
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485b40
        ;   Label: core_elephant.cpp_CElephantGun_fire_FUN_00485b40
    PUSH ESI                            ; 00485b41
    PUSH EDI                            ; 00485b42
    PUSH EBP                            ; 00485b43
    MOV EBP,ESP                         ; 00485b44
    SUB ESP,0x180                       ; 00485b46
    AND ESP,0xfffffff8                  ; 00485b4c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00485b4f
    PUSH EBX                            ; 00485b52
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00485b53
    LEA ESI,[ESP + 0xdc]                ; 00485b59
    LEA EDI,[ESP + 0xac]                ; 00485b60
    CALL dword ptr [EAX + 0xe8]         ; 00485b67
    ADD ESP,0x4                         ; 00485b6d
    LEA EAX,[ESP + 0xa8]                ; 00485b70
    LEA ESI,[ESP + 0xd8]                ; 00485b77
    PUSH EAX                            ; 00485b7e
    MOVSD ES:EDI,ESI                    ; 00485b7f
    MOVSD ES:EDI,ESI                    ; 00485b80
    MOVSD ES:EDI,ESI                    ; 00485b81
    PUSH EBX                            ; 00485b82
    LEA ESI,[ESP + 0x110]               ; 00485b83
    CALL core_actor.cpp_FUN_00408d70    ; 00485b8a
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 00485b8f
    LEA EDI,[ESP + 0xe4]                ; 00485b92
    LEA ESI,[ESP + 0x108]               ; 00485b99
    PUSH EBX                            ; 00485ba0
    MOVSD ES:EDI,ESI                    ; 00485ba1
    MOVSD ES:EDI,ESI                    ; 00485ba2
    MOVSD ES:EDI,ESI                    ; 00485ba3
    CALL core_weapon.cpp_CWeapon_fire_FUN_0058a290 ; 00485ba4
        ;   XREF to: 0058a290 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_0058a290(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 00485ba9
    TEST EAX,EAX                        ; 00485bac
    JZ 0x00485efb                       ; 00485bae
        ;   XREF to: 00485efb (CONDITIONAL_JUMP)  ; LAB_00485efb
    FLD float ptr [EBX + 0x6d4]         ; 00485bb4
    FMUL float ptr [0x005d2b46]         ; 00485bba | DAT_005d2b46
    FMUL double ptr [0x005d2b4e]        ; 00485bc0 | DAT_005d2b4e
    FPTAN                               ; 00485bc6
    FSTP ST0                            ; 00485bc8
    PUSH 0xf                            ; 00485bca
    FMUL float ptr [EBX + 0x444]        ; 00485bcc
    PUSH 0xa                            ; 00485bd2
    FSTP float ptr [ESP + 0x158]        ; 00485bd4
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 00485bdb
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00485be0
    XOR ECX,ECX                         ; 00485be3
    MOV dword ptr [ESP + 0x15c],EAX     ; 00485be5
    MOV dword ptr [ESP + 0x154],ECX     ; 00485bec
    TEST EAX,EAX                        ; 00485bf3
    JLE 0x00485e89                      ; 00485bf5
        ;   XREF to: 00485e89 (CONDITIONAL_JUMP)  ; LAB_00485e89
    PUSH 0x40c90fdb                     ; 00485bfb
        ;   Label: LAB_00485bfb
    PUSH 0x0                            ; 00485c00
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00485c02
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x184],EAX     ; 00485c07
    FLD float ptr [ESP + 0x184]         ; 00485c0e
    ADD ESP,0x8                         ; 00485c15
    PUSH dword ptr [ESP + 0x150]        ; 00485c18
    PUSH 0x0                            ; 00485c1f
    FSTP float ptr [ESP + 0x150]        ; 00485c21
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00485c28
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x184],EAX     ; 00485c2d
    FLD float ptr [ESP + 0x184]         ; 00485c34
    ADD ESP,0x8                         ; 00485c3b
    FLD float ptr [ESP + 0x148]         ; 00485c3e
    FLD ST0                             ; 00485c45
    FCOS                                ; 00485c47
    FXCH                                ; 00485c49
    FSIN                                ; 00485c4b
    FXCH                                ; 00485c4d
    FMUL ST2                            ; 00485c4f
    FXCH                                ; 00485c51
    FMULP ST2                           ; 00485c53
    FSTP float ptr [ESP + 0xfc]         ; 00485c55
    FSTP float ptr [ESP + 0x100]        ; 00485c5c
    MOV EAX,dword ptr [EBX + 0x444]     ; 00485c63
    MOV dword ptr [ESP + 0x104],EAX     ; 00485c69
    LEA EAX,[ESP + 0xfc]                ; 00485c70
    PUSH EAX                            ; 00485c77
    PUSH EBX                            ; 00485c78
    LEA ESI,[ESP + 0xbc]                ; 00485c79
    LEA EDI,[ESP + 0xa4]                ; 00485c80
    CALL core_actor.cpp_FUN_00408cf0    ; 00485c87
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0xbc]                ; 00485c8c
    ADD ESP,0x8                         ; 00485c93
    MOVSD ES:EDI,ESI                    ; 00485c96
    MOVSD ES:EDI,ESI                    ; 00485c97
    MOVSD ES:EDI,ESI                    ; 00485c98
    LEA EAX,[ESP + 0x9c]                ; 00485c99
    LEA ESI,[ESP + 0xfc]                ; 00485ca0
    CMP ESI,EAX                         ; 00485ca7
    JZ 0x00485cd5                       ; 00485ca9
        ;   XREF to: 00485cd5 (CONDITIONAL_JUMP)  ; LAB_00485cd5
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00485cab
    MOV dword ptr [ESP + 0xfc],EAX      ; 00485cb2
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00485cb9
    MOV dword ptr [ESP + 0x100],EAX     ; 00485cc0
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00485cc7
    MOV dword ptr [ESP + 0x104],EAX     ; 00485cce
    FLD float ptr [ESP + 0xe4]          ; 00485cd5
        ;   Label: LAB_00485cd5
    FLD float ptr [ESP + 0xe8]          ; 00485cdc
    FLD float ptr [ESP + 0xec]          ; 00485ce3
    LEA EDI,[ESP + 0xf0]                ; 00485cea
    LEA ESI,[ESP + 0x12c]               ; 00485cf1
    FXCH ST2                            ; 00485cf8
    FADD float ptr [ESP + 0xfc]         ; 00485cfa
    FXCH                                ; 00485d01
    FADD float ptr [ESP + 0x100]        ; 00485d03
    FXCH ST2                            ; 00485d0a
    FADD float ptr [ESP + 0x104]        ; 00485d0c
    FXCH                                ; 00485d13
    FSTP float ptr [ESP + 0x12c]        ; 00485d15
    FXCH                                ; 00485d1c
    FSTP float ptr [ESP + 0x130]        ; 00485d1e
    FSTP float ptr [ESP + 0x134]        ; 00485d25
    MOVSD ES:EDI,ESI                    ; 00485d2c
    MOVSD ES:EDI,ESI                    ; 00485d2d
    MOVSD ES:EDI,ESI                    ; 00485d2e
    FLD float ptr [EBX + 0x444]         ; 00485d2f
    FDIVR double ptr [0x005d2b5e]       ; 00485d35 | DAT_005d2b5e
    FLD float ptr [ESP + 0xfc]          ; 00485d3b
    FXCH                                ; 00485d42
    FSTP float ptr [ESP + 0x158]        ; 00485d44
    FMUL float ptr [ESP + 0x158]        ; 00485d4b
    FLD float ptr [ESP + 0x100]         ; 00485d52
    FMUL float ptr [ESP + 0x158]        ; 00485d59
    FLD float ptr [ESP + 0x104]         ; 00485d60
    FMUL float ptr [ESP + 0x158]        ; 00485d67
    FLD float ptr [ESP + 0xe4]          ; 00485d6e
    FLD float ptr [ESP + 0xe8]          ; 00485d75
    FLD float ptr [ESP + 0xec]          ; 00485d7c
    MOV ECX,dword ptr [0x0061b5a8]      ; 00485d83 | g_CDemonSetPtr
    LEA EDI,[ESP + 0x60]                ; 00485d89
    LEA ESI,[ESP + 0x114]               ; 00485d8d
    FXCH ST5                            ; 00485d94
    FSTP float ptr [ESP + 0x114]        ; 00485d96
    FXCH ST3                            ; 00485d9d
    FSTP float ptr [ESP + 0x118]        ; 00485d9f
    FXCH                                ; 00485da6
    FSTP float ptr [ESP + 0x11c]        ; 00485da8
    MOVSD ES:EDI,ESI                    ; 00485daf
    MOVSD ES:EDI,ESI                    ; 00485db0
    MOVSD ES:EDI,ESI                    ; 00485db1
    PUSH ECX                            ; 00485db2 | g_CDemonSetInstance
    LEA EDI,[ESP + 0x7c]                ; 00485db3
    LEA ESI,[ESP + 0xc4]                ; 00485db7
    FSUB float ptr [ESP + 0x64]         ; 00485dbe
    FXCH                                ; 00485dc2
    FSUB float ptr [ESP + 0x68]         ; 00485dc4
    FXCH ST2                            ; 00485dc8
    FSUB float ptr [ESP + 0x6c]         ; 00485dca
    FXCH                                ; 00485dce
    FSTP float ptr [ESP + 0xc4]         ; 00485dd0
    FXCH                                ; 00485dd7
    FSTP float ptr [ESP + 0xc8]         ; 00485dd9
    FSTP float ptr [ESP + 0xcc]         ; 00485de0
    MOVSD ES:EDI,ESI                    ; 00485de7
    MOVSD ES:EDI,ESI                    ; 00485de8
    MOVSD ES:EDI,ESI                    ; 00485de9
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 00485dea
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00485def
    PUSH 0x1                            ; 00485df2
    MOV ESI,dword ptr [0x0061b5a8]      ; 00485df4 | g_CDemonSetPtr
    PUSH ESI                            ; 00485dfa | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0 ; 00485dfb
        ;   XREF to: 00537eb0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 00485e00
    PUSH EBX                            ; 00485e03
    MOV EDI,dword ptr [0x0061b5a8]      ; 00485e04 | g_CDemonSetPtr
    PUSH EDI                            ; 00485e0a | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 00485e0b
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    MOV EAX,dword ptr [EBX + 0x460]     ; 00485e10
    ADD ESP,0x8                         ; 00485e16
    TEST EAX,EAX                        ; 00485e19
    JNZ 0x00485f21                      ; 00485e1b
        ;   XREF to: 00485f21 (CONDITIONAL_JUMP)  ; LAB_00485f21
    XOR ESI,ESI                         ; 00485e21
        ;   Label: LAB_00485e21
    MOV dword ptr [ESP + 0x170],ESI     ; 00485e23
    LEA EAX,[ESP + 0xf0]                ; 00485e2a
        ;   Label: LAB_00485e2a
    PUSH EAX                            ; 00485e31
    LEA EAX,[ESP + 0x7c]                ; 00485e32
    PUSH EAX                            ; 00485e36
    MOV EDI,dword ptr [0x0061b5a8]      ; 00485e37 | g_CDemonSetPtr
    PUSH EDI                            ; 00485e3d | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00535ee0 ; 00485e3e
        ;   XREF to: 00535ee0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00535ee0()
    MOV dword ptr [ESP + 0x188],EAX     ; 00485e43
    FLD float ptr [ESP + 0x188]         ; 00485e4a
    ADD ESP,0xc                         ; 00485e51
    FLDZ                                ; 00485e54
    FXCH                                ; 00485e56
    FST float ptr [ESP + 0x8]           ; 00485e58
    FSTP double ptr [ESP]               ; 00485e5c
    FCOMP double ptr [ESP]              ; 00485e5f
    FNSTSW AX                           ; 00485e62
    SAHF                                ; 00485e64
    JBE 0x00485f36                      ; 00485e65
        ;   XREF to: 00485f36 (CONDITIONAL_JUMP)  ; LAB_00485f36
    MOV ESI,dword ptr [ESP + 0x154]     ; 00485e6b
        ;   Label: LAB_00485e6b
    INC ESI                             ; 00485e72
    MOV EDI,dword ptr [ESP + 0x15c]     ; 00485e73
    MOV dword ptr [ESP + 0x154],ESI     ; 00485e7a
    CMP ESI,EDI                         ; 00485e81
    JL 0x00485bfb                       ; 00485e83
        ;   XREF to: 00485bfb (CONDITIONAL_JUMP)  ; LAB_00485bfb
    LEA EDI,[ESP + 0x120]               ; 00485e89
        ;   Label: LAB_00485e89
    LEA EAX,[EBX + 0x3c]                ; 00485e90
    LEA ESI,[ESP + 0xe4]                ; 00485e93
    PUSH EAX                            ; 00485e9a
    MOVSD ES:EDI,ESI                    ; 00485e9b
    MOVSD ES:EDI,ESI                    ; 00485e9c
    MOVSD ES:EDI,ESI                    ; 00485e9d
    LEA EAX,[ESP + 0x124]               ; 00485e9e
    FLD float ptr [ESP + 0x128]         ; 00485ea5
    PUSH EAX                            ; 00485eac
    MOV EAX,[0x00614d30]                ; 00485ead | DAT_00614d30
    FADD float ptr [0x005d2b56]         ; 00485eb2 | DAT_005d2b56
    PUSH EAX                            ; 00485eb8
    FSTP float ptr [ESP + 0x130]        ; 00485eb9
    CALL core_fire.cpp_FUN_0049d120     ; 00485ec0
        ;   XREF to: 0049d120 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_0049d120(CFireEffect * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    ADD ESP,0xc                         ; 00485ec5
    LEA EAX,[ESP + 0xe4]                ; 00485ec8
    PUSH EAX                            ; 00485ecf
    PUSH 0x5d2b36                       ; 00485ed0 | = "elephantgun.wav"
    PUSH EBX                            ; 00485ed5
    MOV EDX,dword ptr [0x0061c068]      ; 00485ed6 | DAT_0061c068
    PUSH EDX                            ; 00485edc
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 00485edd
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    MOV EAX,0x1                         ; 00485ee2
    ADD ESP,0x10                        ; 00485ee7
    MOV dword ptr [EBX + 0x45c],0x3f800000 ; 00485eea
    MOV ESP,EBP                         ; 00485ef4
    POP EBP                             ; 00485ef6
    POP EDI                             ; 00485ef7
    POP ESI                             ; 00485ef8
    POP EBX                             ; 00485ef9
    RET                                 ; 00485efa
    LEA EAX,[ESP + 0xe4]                ; 00485efb
        ;   Label: LAB_00485efb
    PUSH EAX                            ; 00485f02
    PUSH 0x5d2b23                       ; 00485f03 | = "shotgun-noammo.wav"
    PUSH EBX                            ; 00485f08
    MOV EDX,dword ptr [0x0061c068]      ; 00485f09 | DAT_0061c068
    PUSH EDX                            ; 00485f0f
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 00485f10
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 00485f15
    XOR EAX,EAX                         ; 00485f18
    MOV ESP,EBP                         ; 00485f1a
    POP EBP                             ; 00485f1c
    POP EDI                             ; 00485f1d
    POP ESI                             ; 00485f1e
    POP EBX                             ; 00485f1f
    RET                                 ; 00485f20
    PUSH EAX                            ; 00485f21
        ;   Label: LAB_00485f21
    MOV ECX,dword ptr [0x0061b5a8]      ; 00485f22 | g_CDemonSetPtr
    PUSH ECX                            ; 00485f28 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 00485f29
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00485f2e
    JMP 0x00485e21                      ; 00485f31
        ;   XREF to: 00485e21 (UNCONDITIONAL_JUMP)  ; LAB_00485e21
    FLD1                                ; 00485f36
        ;   Label: LAB_00485f36
    FCOMP double ptr [ESP]              ; 00485f38
    FNSTSW AX                           ; 00485f3b
    SAHF                                ; 00485f3d
    JC 0x00485e6b                       ; 00485f3e
        ;   XREF to: 00485e6b (CONDITIONAL_JUMP)  ; LAB_00485e6b
    MOV EAX,[0x007bdc94]                ; 00485f44 | g_CCharacterClassInfo.name_hash
    PUSH EAX                            ; 00485f49
    MOV EAX,[0x0061b5a8]                ; 00485f4a | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00485f4f | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 00485f55
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00485f56
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00485f5b
    MOV dword ptr [ESP + 0x178],EAX     ; 00485f5e
    TEST EAX,EAX                        ; 00485f65
    JZ 0x00485f86                       ; 00485f67
        ;   XREF to: 00485f86 (CONDITIONAL_JUMP)  ; LAB_00485f86
    PUSH EAX                            ; 00485f69
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 00485f6a
    CALL dword ptr [ESI + 0x114]        ; 00485f70
    ADD ESP,0x4                         ; 00485f76
    TEST EAX,EAX                        ; 00485f79
    JLE 0x00485f86                      ; 00485f7b
        ;   XREF to: 00485f86 (CONDITIONAL_JUMP)  ; LAB_00485f86
    XOR ECX,ECX                         ; 00485f7d
    MOV dword ptr [ESP + 0x178],ECX     ; 00485f7f
    MOV ESI,dword ptr [0x01cb8280]      ; 00485f86 | g_CGlassClassInfo.name_hash
        ;   Label: LAB_00485f86
    MOV EAX,[0x0061b5a8]                ; 00485f8c | g_CDemonSetPtr
    PUSH ESI                            ; 00485f91
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 00485f92 | g_CDemonSetInstance.collision_actor
    PUSH EDI                            ; 00485f98
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00485f99
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00485f9e
    MOV EDI,EAX                         ; 00485fa1
    MOV EAX,[0x02653628]                ; 00485fa3 | g_CTriggerClassInfo.name_hash
    PUSH EAX                            ; 00485fa8
    MOV EAX,[0x0061b5a8]                ; 00485fa9 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00485fae | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 00485fb4
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00485fb5
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ECX,dword ptr [0x007c2670]      ; 00485fba | g_CCrateClassInfo.name_hash
    ADD ESP,0x8                         ; 00485fc0
    MOV ESI,EAX                         ; 00485fc3
    MOV dword ptr [ESP + 0x160],EAX     ; 00485fc5
    MOV EAX,[0x0061b5a8]                ; 00485fcc | g_CDemonSetPtr
    PUSH ECX                            ; 00485fd1
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00485fd2 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 00485fd8
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00485fd9
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x16c],EAX     ; 00485fde
    ADD ESP,0x8                         ; 00485fe5
    MOV ECX,dword ptr [0x01cab6f8]      ; 00485fe8 | g_CFlameCanClassInfo.name_hash
    MOV EAX,[0x0061b5a8]                ; 00485fee | g_CDemonSetPtr
    PUSH ECX                            ; 00485ff3
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00485ff4 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 00485ffa
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00485ffb
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x170],EAX     ; 00486000
    ADD ESP,0x8                         ; 00486007
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0048600a
    PUSH EBX                            ; 00486010
    CALL dword ptr [EAX + 0xf4]         ; 00486011
    MOV dword ptr [ESP + 0x180],EAX     ; 00486017
    FLD float ptr [ESP + 0x180]         ; 0048601e
    ADD ESP,0x4                         ; 00486025
    FLD1                                ; 00486028
    FSUB float ptr [ESP + 0x8]          ; 0048602a
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0048602e
    FMULP                               ; 00486035
    MOV dword ptr [ESP + 0x17c],EAX     ; 00486037
    FILD dword ptr [ESP + 0x17c]        ; 0048603e
    FDIVP                               ; 00486045
    MOV ECX,dword ptr [ESP + 0x178]     ; 00486047
    FSTP float ptr [ESP + 0x16c]        ; 0048604e
    TEST ECX,ECX                        ; 00486055
    JNZ 0x004860ac                      ; 00486057
        ;   XREF to: 004860ac (CONDITIONAL_JUMP)  ; LAB_004860ac
    TEST EDI,EDI                        ; 00486059
    JNZ 0x004862b5                      ; 0048605b
        ;   XREF to: 004862b5 (CONDITIONAL_JUMP)  ; LAB_004862b5
    TEST ESI,ESI                        ; 00486061
    JZ 0x004862dc                       ; 00486063
        ;   XREF to: 004862dc (CONDITIONAL_JUMP)  ; LAB_004862dc
    PUSH ESI                            ; 00486069
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_00578550 ; 0048606a
        ;   XREF to: 00578550 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_00578550(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 0048606f
    PUSH EBX                            ; 00486072
    PUSH ESI                            ; 00486073
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_00578570 ; 00486074
        ;   XREF to: 00578570 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_00578570(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00486079
    TEST EAX,EAX                        ; 0048607c
    JZ 0x00486090                       ; 0048607e
        ;   XREF to: 00486090 (CONDITIONAL_JUMP)  ; LAB_00486090
    PUSH dword ptr [ESP + 0x16c]        ; 00486080
    PUSH ESI                            ; 00486087
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_005785b0 ; 00486088
        ;   XREF to: 005785b0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_005785b0(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 0048608d
    MOV EDX,dword ptr [ESP + 0x160]     ; 00486090
        ;   Label: LAB_00486090
    PUSH EDX                            ; 00486097
    MOV ECX,dword ptr [0x0061b5a8]      ; 00486098 | g_CDemonSetPtr
    PUSH ECX                            ; 0048609e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0048609f
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004860a4
    JMP 0x00486306                      ; 004860a7
        ;   XREF to: 00486306 (UNCONDITIONAL_JUMP)  ; LAB_00486306
    PUSH ECX                            ; 004860ac
        ;   Label: LAB_004860ac
    MOV EAX,dword ptr [ECX + 0x2b0]     ; 004860ad
    CALL dword ptr [EAX + 0xe8]         ; 004860b3
    ADD ESP,0x4                         ; 004860b9
    TEST EAX,EAX                        ; 004860bc
    JNZ 0x00485e6b                      ; 004860be
        ;   XREF to: 00485e6b (CONDITIONAL_JUMP)  ; LAB_00485e6b
    LEA EAX,[ESP + 0xc]                 ; 004860c4
    PUSH EAX                            ; 004860c8
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 004860c9
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    MOV ESI,dword ptr [0x0061b5a8]      ; 004860ce | g_CDemonSetPtr
    ADD ESP,0x4                         ; 004860d4
    MOV EAX,dword ptr [ESI + 0x14d148]  ; 004860d7 | g_CDemonSetInstance.collision_part_index
    MOV dword ptr [ESP + 0xc],EAX       ; 004860dd
    MOV EAX,dword ptr [ESP + 0x16c]     ; 004860e1
    MOV EDI,0x3ecccccd                  ; 004860e8
    MOV dword ptr [ESP + 0x10],EAX      ; 004860ed
    LEA EAX,[ESI + 0x14d11c]            ; 004860f1
    MOV dword ptr [ESP + 0x14],EDI      ; 004860f7
    LEA EDI,[ESP + 0x90]                ; 004860fb
    FLD float ptr [EAX]                 ; 00486102 | g_CDemonSetInstance.ray_target.x
    FLD float ptr [EAX + 0x4]           ; 00486104 | g_CDemonSetInstance.ray_target.y
    FLD float ptr [EAX + 0x8]           ; 00486107 | g_CDemonSetInstance.ray_target.z
    FXCH ST2                            ; 0048610a
    FSUB float ptr [ESI + 0x14d110]     ; 0048610c | g_CDemonSetInstance.ray_origin.x
    FXCH                                ; 00486112
    FSUB float ptr [ESI + 0x14d114]     ; 00486114 | g_CDemonSetInstance.ray_origin.y
    FXCH ST2                            ; 0048611a
    FSUB float ptr [ESI + 0x14d118]     ; 0048611c | g_CDemonSetInstance.ray_origin.z
    FXCH                                ; 00486122
    FSTP float ptr [ESP + 0x54]         ; 00486124
    FXCH                                ; 00486128
    FSTP float ptr [ESP + 0x58]         ; 0048612a
    LEA ESI,[ESP + 0x54]                ; 0048612e
    FSTP float ptr [ESP + 0x5c]         ; 00486132
    MOVSD ES:EDI,ESI                    ; 00486136
    MOVSD ES:EDI,ESI                    ; 00486137
    MOVSD ES:EDI,ESI                    ; 00486138
    FLD float ptr [ESP + 0x94]          ; 00486139
    FMUL ST0                            ; 00486140
    FLD float ptr [ESP + 0x90]          ; 00486142
    FMUL ST0                            ; 00486149
    FADDP                               ; 0048614b
    FLD float ptr [ESP + 0x98]          ; 0048614d
    FMUL ST0                            ; 00486154
    FADDP                               ; 00486156
    FSQRT                               ; 00486158
    FDIVR double ptr [0x005d2b66]       ; 0048615a | DAT_005d2b66
    FLD float ptr [ESP + 0x90]          ; 00486160
    FXCH                                ; 00486167
    FSTP float ptr [ESP + 0x174]        ; 00486169
    FMUL float ptr [ESP + 0x174]        ; 00486170
    FLD float ptr [ESP + 0x94]          ; 00486177
    FMUL float ptr [ESP + 0x174]        ; 0048617e
    FLD float ptr [ESP + 0x98]          ; 00486185
    FMUL float ptr [ESP + 0x174]        ; 0048618c
    LEA EDI,[ESP + 0x48]                ; 00486193
    LEA ESI,[ESP + 0x84]                ; 00486197
    FXCH ST2                            ; 0048619e
    FSTP float ptr [ESP + 0x84]         ; 004861a0
    FSTP float ptr [ESP + 0x88]         ; 004861a7
    FSTP float ptr [ESP + 0x8c]         ; 004861ae
    MOVSD ES:EDI,ESI                    ; 004861b5
    MOVSD ES:EDI,ESI                    ; 004861b6
    MOVSD ES:EDI,ESI                    ; 004861b7
    LEA EAX,[ESP + 0x48]                ; 004861b8
    LEA ESI,[ESP + 0x18]                ; 004861bc
    CMP ESI,EAX                         ; 004861c0
    JZ 0x004861dc                       ; 004861c2
        ;   XREF to: 004861dc (CONDITIONAL_JUMP)  ; LAB_004861dc
    MOV EAX,dword ptr [ESP + 0x48]      ; 004861c4
    MOV dword ptr [ESP + 0x18],EAX      ; 004861c8
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004861cc
    MOV dword ptr [ESP + 0x1c],EAX      ; 004861d0
    MOV EAX,dword ptr [ESP + 0x50]      ; 004861d4
    MOV dword ptr [ESP + 0x20],EAX      ; 004861d8
    MOV EAX,[0x0061b5a8]                ; 004861dc | g_CDemonSetPtr
        ;   Label: LAB_004861dc
    ADD EAX,0x14d138                    ; 004861e1
    PUSH EAX                            ; 004861e6 | g_CDemonSetInstance.collision_impact_position.x
    MOV EAX,dword ptr [ESP + 0x17c]     ; 004861e7
    PUSH EAX                            ; 004861ee
    LEA ESI,[ESP + 0x74]                ; 004861ef
    LEA EDI,[ESP + 0xd4]                ; 004861f3
    CALL core_actor.cpp_FUN_00408de0    ; 004861fa
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x74]                ; 004861ff
    ADD ESP,0x8                         ; 00486203
    MOVSD ES:EDI,ESI                    ; 00486206
    MOVSD ES:EDI,ESI                    ; 00486207
    MOVSD ES:EDI,ESI                    ; 00486208
    LEA EAX,[ESP + 0xcc]                ; 00486209
    LEA ESI,[ESP + 0x28]                ; 00486210
    CMP ESI,EAX                         ; 00486214
    JZ 0x00486239                       ; 00486216
        ;   XREF to: 00486239 (CONDITIONAL_JUMP)  ; LAB_00486239
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00486218
    MOV dword ptr [ESP + 0x28],EAX      ; 0048621f
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00486223
    MOV dword ptr [ESP + 0x2c],EAX      ; 0048622a
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0048622e
    MOV dword ptr [ESP + 0x30],EAX      ; 00486235
    MOV EDX,0x6b                        ; 00486239
        ;   Label: LAB_00486239
    MOV EAX,dword ptr [EBX + 0x6c8]     ; 0048623e
    MOV ECX,0x3f800000                  ; 00486244
    MOV dword ptr [ESP + 0x34],EAX      ; 00486249
    MOV dword ptr [ESP + 0x3c],EDX      ; 0048624d
    MOV dword ptr [ESP + 0x38],ECX      ; 00486251
    MOV dword ptr [ESP + 0x40],EBX      ; 00486255
    PUSH EBX                            ; 00486259
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0048625a
    CALL dword ptr [EAX + 0x9c]         ; 00486260
    ADD ESP,0x4                         ; 00486266
    MOV dword ptr [ESP + 0x44],EAX      ; 00486269
    LEA EAX,[ESP + 0xc]                 ; 0048626d
    MOV ESI,dword ptr [ESP + 0x178]     ; 00486271
    PUSH EAX                            ; 00486278
    MOV EDI,dword ptr [ESP + 0x17c]     ; 00486279
    MOV ESI,dword ptr [ESI + 0x2b0]     ; 00486280
    PUSH EDI                            ; 00486286
    CALL dword ptr [ESI + 0x110]        ; 00486287
    MOV EAX,dword ptr [EBX + 0x440]     ; 0048628d
    ADD ESP,0x8                         ; 00486293
    TEST EAX,EAX                        ; 00486296
    JZ 0x00485e6b                       ; 00486298
        ;   XREF to: 00485e6b (CONDITIONAL_JUMP)  ; LAB_00485e6b
    MOV EAX,[0x0061b5a8]                ; 0048629e | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004862a3 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 004862a9
    PUSH EAX                            ; 004862aa | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 004862ab
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004862b0
    JMP 0x00486306                      ; 004862b3
        ;   XREF to: 00486306 (UNCONDITIONAL_JUMP)  ; LAB_00486306
    PUSH EDI                            ; 004862b5
        ;   Label: LAB_004862b5
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004c72d0 ; 004862b6
        ;   XREF to: 004c72d0 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004c72d0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 004862bb
    TEST EAX,EAX                        ; 004862be
    JZ 0x00485e6b                       ; 004862c0
        ;   XREF to: 00485e6b (CONDITIONAL_JUMP)  ; LAB_00485e6b
    MOV EAX,[0x0061b5a8]                ; 004862c6 | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 004862cb
    PUSH EAX                            ; 004862d0 | g_CDemonSetInstance.collision_impact_position.x
    PUSH EDI                            ; 004862d1
    CALL core_glass.cpp_FUN_004c6d40    ; 004862d2
        ;   XREF to: 004c6d40 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004c6d40()
    ADD ESP,0x8                         ; 004862d7
    JMP 0x00486306                      ; 004862da
        ;   XREF to: 00486306 (UNCONDITIONAL_JUMP)  ; LAB_00486306
    MOV ESI,dword ptr [ESP + 0x164]     ; 004862dc
        ;   Label: LAB_004862dc
    TEST ESI,ESI                        ; 004862e3
    JNZ 0x004862fd                      ; 004862e5
        ;   XREF to: 004862fd (CONDITIONAL_JUMP)  ; LAB_004862fd
    MOV EDI,dword ptr [ESP + 0x168]     ; 004862e7
    TEST EDI,EDI                        ; 004862ee
    JZ 0x00486323                       ; 004862f0
        ;   XREF to: 00486323 (CONDITIONAL_JUMP)  ; LAB_00486323
    PUSH EDI                            ; 004862f2
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004a08d0 ; 004862f3
        ;   XREF to: 004a08d0 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004a08d0(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 004862f8
    JMP 0x00486306                      ; 004862fb
        ;   XREF to: 00486306 (UNCONDITIONAL_JUMP)  ; LAB_00486306
    PUSH ESI                            ; 004862fd
        ;   Label: LAB_004862fd
    CALL core_crate.cpp_FUN_0043a350    ; 004862fe
        ;   XREF to: 0043a350 (UNCONDITIONAL_CALL)  ; void core_crate.cpp_FUN_0043a350(CCrate * this_ptr)
    ADD ESP,0x4                         ; 00486303
    MOV ECX,dword ptr [ESP + 0x170]     ; 00486306
        ;   Label: LAB_00486306
    INC ECX                             ; 0048630d
    MOV dword ptr [ESP + 0x170],ECX     ; 0048630e
    CMP ECX,0x4                         ; 00486315
    JL 0x00485e2a                       ; 00486318
        ;   XREF to: 00485e2a (CONDITIONAL_JUMP)  ; LAB_00485e2a
    JMP 0x00485e6b                      ; 0048631e
        ;   XREF to: 00485e6b (UNCONDITIONAL_JUMP)  ; LAB_00485e6b
    MOV EAX,[0x0061b5a8]                ; 00486323 | g_CDemonSetPtr
        ;   Label: LAB_00486323
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00486328 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 0048632e
    MOV ECX,dword ptr [EAX + 0x14d134]  ; 0048632f | g_CDemonSetInstance.ground_type
    PUSH ECX                            ; 00486335
    LEA ESI,[EAX + 0x14d128]            ; 00486336
    PUSH ESI                            ; 0048633c | g_CDemonSetInstance.collision_normal.x
    ADD EAX,0x14d138                    ; 0048633d
    PUSH EAX                            ; 00486342 | g_CDemonSetInstance.collision_impact_position.x
    MOV ESI,dword ptr [0x00614d30]      ; 00486343 | DAT_00614d30
    PUSH ESI                            ; 00486349
    CALL core_fire.cpp_CFireEffect_createBulletImpact_FUN_0049cd50 ; 0048634a
        ;   XREF to: 0049cd50 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createBulletImpact_FUN_0049cd50(CFireEffect * this_ptr, CVector3f * impact_pos, CVector3f * surface_normal, int ground_type, ...)
    ADD ESP,0x14                        ; 0048634f
    JMP 0x00485e6b                      ; 00486352
        ;   XREF to: 00485e6b (UNCONDITIONAL_JUMP)  ; LAB_00485e6b

