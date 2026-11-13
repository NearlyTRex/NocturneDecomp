; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_djien_cpp_FUN_004609c0(CEnemy *param_1)
;
;
; Referenced Globals:
;   undefined4 s_stick_stump_wav_005d8d77+1
;   undefined4 DAT_005d8d8c
;   undefined4 DAT_006236b8
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
;   core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004609c0
        ;   Label: core_djien.cpp_FUN_004609c0
    PUSH ESI                            ; 004609c1
    PUSH EDI                            ; 004609c2
    PUSH EBP                            ; 004609c3
    SUB ESP,0x148                       ; 004609c4
    MOV EBX,dword ptr [ESP + 0x15c]     ; 004609ca
    MOV EDX,dword ptr [EBX + 0xc270]    ; 004609d1
    PUSH EDX                            ; 004609d7
    LEA EBP,[EBX + 0x158]               ; 004609d8
    PUSH EBP                            ; 004609de
    LEA ESI,[ESP + 0xc8]                ; 004609df
    LEA EDI,[ESP + 0x44]                ; 004609e6
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 004609ea
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 004609ef
    LEA EAX,[ESP + 0x3c]                ; 004609f2
    LEA ESI,[ESP + 0xc0]                ; 004609f6
    PUSH EAX                            ; 004609fd
    MOVSD ES:EDI,ESI                    ; 004609fe
    MOVSD ES:EDI,ESI                    ; 004609ff
    MOVSD ES:EDI,ESI                    ; 00460a00
    PUSH EBX                            ; 00460a01
    LEA ESI,[ESP + 0xd4]                ; 00460a02
    CALL core_actor.cpp_FUN_00408b40    ; 00460a09
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00460a0e
    MOV ECX,dword ptr [EBX + 0xc278]    ; 00460a11
    PUSH ECX                            ; 00460a17
    PUSH EBP                            ; 00460a18
    LEA ESI,[ESP + 0xe0]                ; 00460a19
    LEA EDI,[ESP + 0x50]                ; 00460a20
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 00460a24
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 00460a29
    LEA EAX,[ESP + 0x48]                ; 00460a2c
    LEA ESI,[ESP + 0xd8]                ; 00460a30
    PUSH EAX                            ; 00460a37
    MOVSD ES:EDI,ESI                    ; 00460a38
    MOVSD ES:EDI,ESI                    ; 00460a39
    MOVSD ES:EDI,ESI                    ; 00460a3a
    PUSH EBX                            ; 00460a3b
    LEA ESI,[ESP + 0xec]                ; 00460a3c
    CALL core_actor.cpp_FUN_00408b40    ; 00460a43
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00460a48
    MOV ESI,dword ptr [EBX + 0xc274]    ; 00460a4b
    PUSH ESI                            ; 00460a51
    PUSH EBP                            ; 00460a52
    LEA ESI,[ESP + 0xf8]                ; 00460a53
    LEA EDI,[ESP + 0x5c]                ; 00460a5a
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 00460a5e
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 00460a63
    LEA EAX,[ESP + 0x54]                ; 00460a66
    LEA ESI,[ESP + 0xf0]                ; 00460a6a
    PUSH EAX                            ; 00460a71
    MOVSD ES:EDI,ESI                    ; 00460a72
    MOVSD ES:EDI,ESI                    ; 00460a73
    MOVSD ES:EDI,ESI                    ; 00460a74
    PUSH EBX                            ; 00460a75
    LEA ESI,[ESP + 0xbc]                ; 00460a76
    LEA EDI,[ESP + 0x104]               ; 00460a7d
    CALL core_actor.cpp_FUN_00408b40    ; 00460a84
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0xbc]                ; 00460a89
    ADD ESP,0x8                         ; 00460a90
    MOVSD ES:EDI,ESI                    ; 00460a93
    MOVSD ES:EDI,ESI                    ; 00460a94
    MOVSD ES:EDI,ESI                    ; 00460a95
    MOV EDI,dword ptr [EBX + 0xc27c]    ; 00460a96
    PUSH EDI                            ; 00460a9c
    PUSH EBP                            ; 00460a9d
    LEA ESI,[ESP + 0x98]                ; 00460a9e
    LEA EDI,[ESP + 0x68]                ; 00460aa5
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 00460aa9
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 00460aae
    LEA EAX,[ESP + 0x60]                ; 00460ab1
    LEA ESI,[ESP + 0x90]                ; 00460ab5
    PUSH EAX                            ; 00460abc
    MOVSD ES:EDI,ESI                    ; 00460abd
    MOVSD ES:EDI,ESI                    ; 00460abe
    MOVSD ES:EDI,ESI                    ; 00460abf
    PUSH EBX                            ; 00460ac0
    LEA ESI,[ESP + 0x11c]               ; 00460ac1
    LEA EDI,[ESP + 0x110]               ; 00460ac8
    CALL core_actor.cpp_FUN_00408b40    ; 00460acf
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00460ad4
    LEA ESI,[ESP + 0x114]               ; 00460ad7
    FLD float ptr [ESP + 0xfc]          ; 00460ade
    FLD float ptr [ESP + 0x100]         ; 00460ae5
    MOVSD ES:EDI,ESI                    ; 00460aec
    MOVSD ES:EDI,ESI                    ; 00460aed
    MOVSD ES:EDI,ESI                    ; 00460aee
    FLD float ptr [ESP + 0x104]         ; 00460aef
    LEA EDI,[ESP + 0x84]                ; 00460af6
    LEA ESI,[ESP + 0xa8]                ; 00460afd
    FXCH ST2                            ; 00460b04
    FADD float ptr [ESP + 0x108]        ; 00460b06
    FXCH                                ; 00460b0d
    FADD float ptr [ESP + 0x10c]        ; 00460b0f
    FXCH ST2                            ; 00460b16
    FADD float ptr [ESP + 0x110]        ; 00460b18
    FXCH                                ; 00460b1f
    FSTP float ptr [ESP + 0xa8]         ; 00460b21
    FXCH                                ; 00460b28
    FSTP float ptr [ESP + 0xac]         ; 00460b2a
    FSTP float ptr [ESP + 0xb0]         ; 00460b31
    MOVSD ES:EDI,ESI                    ; 00460b38
    MOVSD ES:EDI,ESI                    ; 00460b39
    MOVSD ES:EDI,ESI                    ; 00460b3a
    FLD float ptr [0x005d8d8c]          ; 00460b3b | DAT_005d8d8c
    FLD float ptr [ESP + 0x84]          ; 00460b41
    FMUL ST1                            ; 00460b48
    FLD float ptr [ESP + 0x88]          ; 00460b4a
    FMUL ST2                            ; 00460b51
    FLD float ptr [ESP + 0x8c]          ; 00460b53
    FMUL ST3                            ; 00460b5a
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00460b5c
    LEA EDI,[ESP + 0x6c]                ; 00460b63
    LEA ESI,[ESP + 0x138]               ; 00460b67
    MOV dword ptr [ESP + 0x12c],EAX     ; 00460b6e
    MOV EAX,dword ptr [ESP + 0xac]      ; 00460b75
    FXCH ST2                            ; 00460b7c
    FSTP float ptr [ESP + 0x138]        ; 00460b7e
    FSTP float ptr [ESP + 0x13c]        ; 00460b85
    FSTP float ptr [ESP + 0x140]        ; 00460b8c
    MOV dword ptr [ESP + 0x130],EAX     ; 00460b93
    MOVSD ES:EDI,ESI                    ; 00460b9a
    MOVSD ES:EDI,ESI                    ; 00460b9b
    MOVSD ES:EDI,ESI                    ; 00460b9c
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00460b9d
    LEA EDI,[ESP + 0x9c]                ; 00460ba4
    LEA ESI,[ESP + 0x12c]               ; 00460bab
    MOV dword ptr [ESP + 0x134],EAX     ; 00460bb2
    MOVSD ES:EDI,ESI                    ; 00460bb9
    MOVSD ES:EDI,ESI                    ; 00460bba
    MOVSD ES:EDI,ESI                    ; 00460bbb
    FLD float ptr [ESP + 0x9c]          ; 00460bbc
    FMUL ST1                            ; 00460bc3
    FLD float ptr [ESP + 0xa0]          ; 00460bc5
    FMUL ST2                            ; 00460bcc
    FLD float ptr [ESP + 0xa4]          ; 00460bce
    FMULP ST3                           ; 00460bd5
    FXCH                                ; 00460bd7
    FSTP float ptr [ESP + 0x120]        ; 00460bd9
    FSTP float ptr [ESP + 0x124]        ; 00460be0
    FSTP float ptr [ESP + 0x128]        ; 00460be7
    LEA EDI,[ESP + 0x78]                ; 00460bee
    MOV EAX,ESP                         ; 00460bf2
    LEA ESI,[ESP + 0x120]               ; 00460bf4
    PUSH EAX                            ; 00460bfb
    MOVSD ES:EDI,ESI                    ; 00460bfc
    MOVSD ES:EDI,ESI                    ; 00460bfd
    MOVSD ES:EDI,ESI                    ; 00460bfe
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 00460bff
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00460c04
    PUSH 0x41400000                     ; 00460c07
    PUSH 0x41000000                     ; 00460c0c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00460c11
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x14c],EAX     ; 00460c16
    FLD float ptr [ESP + 0x14c]         ; 00460c1d
    ADD ESP,0x8                         ; 00460c24
    MOV EAX,ESP                         ; 00460c27
    PUSH EAX                            ; 00460c29
    LEA EAX,[ESP + 0x7c]                ; 00460c2a
    PUSH 0x40400000                     ; 00460c2e
    PUSH EAX                            ; 00460c33
    FSTP float ptr [ESP + 0x10]         ; 00460c34
    PUSH EBX                            ; 00460c38
    MOV dword ptr [ESP + 0x44],EBX      ; 00460c39
    MOV dword ptr [ESP + 0x48],EBX      ; 00460c3d
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770 ; 00460c41
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 00460c46
    MOV EAX,ESP                         ; 00460c49
    PUSH EAX                            ; 00460c4b
    LEA EAX,[ESP + 0x70]                ; 00460c4c
    PUSH 0x40400000                     ; 00460c50
    PUSH EAX                            ; 00460c55
    PUSH EBX                            ; 00460c56
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770 ; 00460c57
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 00460c5c
    MOV EBP,dword ptr [EBX + 0xc2c8]    ; 00460c5f
    PUSH EBP                            ; 00460c65
    MOV EAX,[0x006236b8]                ; 00460c66 | DAT_006236b8
    PUSH EAX                            ; 00460c6b
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0 ; 00460c6c
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_0057d9c0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 00460c71
    TEST EAX,EAX                        ; 00460c74
    JZ 0x00460c83                       ; 00460c76
        ;   XREF to: 00460c83 (CONDITIONAL_JUMP)  ; LAB_00460c83
    ADD ESP,0x148                       ; 00460c78
    POP EBP                             ; 00460c7e
    POP EDI                             ; 00460c7f
    POP ESI                             ; 00460c80
    POP EBX                             ; 00460c81
    RET                                 ; 00460c82
    PUSH 0x5d8d78                       ; 00460c83 | s_stick_stump_wav_005d8d77+1
        ;   Label: LAB_00460c83
    MOV EAX,dword ptr [EBX + 0x154]     ; 00460c88
    PUSH EBX                            ; 00460c8e
    CALL dword ptr [EAX + 0x2c]         ; 00460c8f
    ADD ESP,0x8                         ; 00460c92
    MOV dword ptr [EBX + 0xc2c8],EAX    ; 00460c95
    ADD ESP,0x148                       ; 00460c9b
    POP EBP                             ; 00460ca1
    POP EDI                             ; 00460ca2
    POP ESI                             ; 00460ca3
    POP EBX                             ; 00460ca4
    RET                                 ; 00460ca5

