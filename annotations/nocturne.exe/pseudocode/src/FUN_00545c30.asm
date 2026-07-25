; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00545c30(int param_1)
;
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
;
; Referenced Globals:
;   TerminatedCString s_s_45_dry_wav_2_0_00596898
;   TerminatedCString s_bullet_kfm_005968aa
;   float FLOAT_005968b5 = 0.1000000
;   double DOUBLE_005968b9 = 2.5
;   float FLOAT_005968c1 = -0.125
;   double DOUBLE_005968c9 = 10
;   undefined4 DAT_005b80f0
;   int INT_005b9284 = 0x1c70f74
;   undefined4 DAT_005be368
;   undefined4 CDemonActorType_00765a60.name_hash
;   undefined4 CDemonActorType_0077bd40.name_hash
;   undefined4 DAT_01c7068c
;   undefined4 DAT_01c78c78
;   undefined4 DAT_01cae0e8
;   undefined4 DAT_01cae124
;   ... and 13 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_crate.cpp_CCrate_explode_FUN_0043cdb0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_dmodel.cpp_loadModel_FUN_004543b0
;   core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_0048af20
;   core_fire.cpp_CFireEffect_createShell_FUN_0048c6b0
;   core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
;   core_setcolid.cpp_CDemonSet_init_FUN_00511750
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545c30
        ;   Label: FUN_00545c30
    PUSH ESI                            ; 00545c31
    PUSH EDI                            ; 00545c32
    PUSH EBP                            ; 00545c33
    MOV EBP,ESP                         ; 00545c34
    SUB ESP,0x13c                       ; 00545c36
    AND ESP,0xfffffff8                  ; 00545c3c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00545c3f
    FLD float ptr [EBX + 0x2f8]         ; 00545c42
    FLDZ                                ; 00545c48
    MOV dword ptr [EBX + 0x570],0x2     ; 00545c4a
    FCOMPP                              ; 00545c54
    FNSTSW AX                           ; 00545c56
    SAHF                                ; 00545c58
    JNC 0x00545c64                      ; 00545c59
        ;   XREF to: 00545c64 (CONDITIONAL_JUMP)  ; LAB_00545c64
    XOR EAX,EAX                         ; 00545c5b
    MOV ESP,EBP                         ; 00545c5d
    POP EBP                             ; 00545c5f
    POP EDI                             ; 00545c60
    POP ESI                             ; 00545c61
    POP EBX                             ; 00545c62
    RET                                 ; 00545c63
    FLD float ptr [EBX + 0x2f8]         ; 00545c64
        ;   Label: LAB_00545c64
    LEA EAX,[ESP + 0xf0]                ; 00545c6a
    MOV ESI,dword ptr [EBX + 0x14c]     ; 00545c71
    PUSH EAX                            ; 00545c77
    FADD float ptr [0x005968b5]         ; 00545c78 | FLOAT_005968b5
    PUSH EBX                            ; 00545c7e
    FSTP float ptr [EBX + 0x2f8]        ; 00545c7f
    CALL dword ptr [ESI + 0xd8]         ; 00545c85
    ADD ESP,0x8                         ; 00545c8b
    PUSH EAX                            ; 00545c8e
    LEA EAX,[ESP + 0xb8]                ; 00545c8f
    PUSH EAX                            ; 00545c96
    PUSH EBX                            ; 00545c97
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00545c98
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 00545c9d
    PUSH EBX                            ; 00545ca0
    CALL core_weapon.cpp_CWeapon_fire_FUN_00554600 ; 00545ca1
        ;   XREF to: 00554600 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_CWeapon_fire_FUN_00554600()
    ADD ESP,0x4                         ; 00545ca6
    TEST EAX,EAX                        ; 00545ca9
    JNZ 0x00545d17                      ; 00545cab
        ;   XREF to: 00545d17 (CONDITIONAL_JUMP)  ; LAB_00545d17
    PUSH 0x596898                       ; 00545cad | = "45-dry-!.wav @2.0"
    MOV dword ptr [EBX + 0x570],EAX     ; 00545cb2
    PUSH EBX                            ; 00545cb8
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00545cb9
    CALL dword ptr [EAX + 0x24]         ; 00545cbf
    ADD ESP,0x8                         ; 00545cc2
    MOV EDX,dword ptr [EBX + 0x574]     ; 00545cc5
    PUSH EDX                            ; 00545ccb
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00545ccc
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 00545cd1
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00545cd4
    PUSH EBX                            ; 00545cda
    CALL dword ptr [EAX + 0x8c]         ; 00545cdb
    MOV ESI,dword ptr [0x01cae0e8]      ; 00545ce1 | DAT_01cae0e8
    MOV ECX,dword ptr [ESI*0x4 + 0x1cae0d8] ; 00545ce7
    ADD ESP,0x4                         ; 00545cee
    CMP EAX,ECX                         ; 00545cf1
    JNZ 0x00545d04                      ; 00545cf3
        ;   XREF to: 00545d04 (CONDITIONAL_JUMP)  ; LAB_00545d04
    MOV ESI,dword ptr [0x005b9284]      ; 00545cf5 | INT_005b9284
    PUSH ESI                            ; 00545cfb
    CALL FUN_004940d0                   ; 00545cfc
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004940d0()
    ADD ESP,0x4                         ; 00545d01
    MOV dword ptr [EBX + 0x574],0x0     ; 00545d04
        ;   Label: LAB_00545d04
    XOR EAX,EAX                         ; 00545d0e
    MOV ESP,EBP                         ; 00545d10
    POP EBP                             ; 00545d12
    POP EDI                             ; 00545d13
    POP ESI                             ; 00545d14
    POP EBX                             ; 00545d15
    RET                                 ; 00545d16
    MOV EAX,dword ptr [EBX + 0x2e0]     ; 00545d17
        ;   Label: LAB_00545d17
    MOV dword ptr [ESP + 0xb0],EAX      ; 00545d1d
    LEA EAX,[ESP + 0xa8]                ; 00545d24
    PUSH EAX                            ; 00545d2b
    LEA EAX,[ESP + 0xdc]                ; 00545d2c
    PUSH EAX                            ; 00545d33
    XOR EDI,EDI                         ; 00545d34
    PUSH EBX                            ; 00545d36
    MOV dword ptr [ESP + 0xb4],EDI      ; 00545d37
    MOV dword ptr [ESP + 0xb8],EDI      ; 00545d3e
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 00545d45
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_transformVector_FUN_0040a200()
    ADD ESP,0xc                         ; 00545d4a
    FLD float ptr [ESP + 0xb4]          ; 00545d4d
    FLD float ptr [ESP + 0xb8]          ; 00545d54
    FLD float ptr [ESP + 0xbc]          ; 00545d5b
    FXCH ST2                            ; 00545d62
    FADD float ptr [ESP + 0xd8]         ; 00545d64
    FXCH                                ; 00545d6b
    FADD float ptr [ESP + 0xdc]         ; 00545d6d
    FXCH ST2                            ; 00545d74
    FADD float ptr [ESP + 0xe0]         ; 00545d76
    FXCH                                ; 00545d7d
    FSTP float ptr [ESP + 0x90]         ; 00545d7f
    FXCH                                ; 00545d86
    FSTP float ptr [ESP + 0x94]         ; 00545d88
    FSTP float ptr [ESP + 0x98]         ; 00545d8f
    FLD float ptr [EBX + 0x2e0]         ; 00545d96
    FDIVR double ptr [0x005968b9]       ; 00545d9c | DOUBLE_005968b9
    FLD float ptr [ESP + 0xd8]          ; 00545da2
    FXCH                                ; 00545da9
    FSTP float ptr [ESP + 0x124]        ; 00545dab
    FMUL float ptr [ESP + 0x124]        ; 00545db2
    FLD float ptr [ESP + 0xdc]          ; 00545db9
    FMUL float ptr [ESP + 0x124]        ; 00545dc0
    FLD float ptr [ESP + 0xe0]          ; 00545dc7
    FMUL float ptr [ESP + 0x124]        ; 00545dce
    MOV EDX,dword ptr [0x005be368]      ; 00545dd5 | DAT_005be368
    FLD float ptr [ESP + 0xb4]          ; 00545ddb
    FLD float ptr [ESP + 0xb8]          ; 00545de2
    FLD float ptr [ESP + 0xbc]          ; 00545de9
    PUSH EDX                            ; 00545df0 | DAT_01e57284
    FXCH ST5                            ; 00545df1
    FSTP float ptr [ESP + 0x88]         ; 00545df3
    FXCH ST3                            ; 00545dfa
    FSTP float ptr [ESP + 0x8c]         ; 00545dfc
    FXCH                                ; 00545e03
    FSTP float ptr [ESP + 0x90]         ; 00545e05
    FSUB float ptr [ESP + 0x88]         ; 00545e0c
    FXCH                                ; 00545e13
    FSUB float ptr [ESP + 0x8c]         ; 00545e15
    FXCH ST2                            ; 00545e1c
    FSUB float ptr [ESP + 0x90]         ; 00545e1e
    FXCH                                ; 00545e25
    FSTP float ptr [ESP + 0x118]        ; 00545e27
    FXCH                                ; 00545e2e
    FSTP float ptr [ESP + 0x11c]        ; 00545e30
    FSTP float ptr [ESP + 0x120]        ; 00545e37
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 00545e3e
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_init_FUN_00511750()
    ADD ESP,0x4                         ; 00545e43
    PUSH 0x1                            ; 00545e46
    MOV ECX,dword ptr [0x005be368]      ; 00545e48 | DAT_005be368
    PUSH ECX                            ; 00545e4e | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800 ; 00545e4f
        ;   XREF to: 00511800 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800()
    ADD ESP,0x8                         ; 00545e54
    PUSH EBX                            ; 00545e57
    MOV ESI,dword ptr [0x005be368]      ; 00545e58 | DAT_005be368
    PUSH ESI                            ; 00545e5e | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 00545e5f
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    MOV EDI,dword ptr [EBX + 0x2fc]     ; 00545e64
    ADD ESP,0x8                         ; 00545e6a
    TEST EDI,EDI                        ; 00545e6d
    JNZ 0x00546056                      ; 00545e6f
        ;   XREF to: 00546056 (CONDITIONAL_JUMP)  ; LAB_00546056
    XOR ECX,ECX                         ; 00545e75
        ;   Label: LAB_00545e75
    MOV dword ptr [ESP + 0x130],ECX     ; 00545e77
    LEA EAX,[ESP + 0x90]                ; 00545e7e
        ;   Label: LAB_00545e7e
    PUSH EAX                            ; 00545e85
    LEA EAX,[ESP + 0x118]               ; 00545e86
    PUSH EAX                            ; 00545e8d
    MOV ESI,dword ptr [0x005be368]      ; 00545e8e | DAT_005be368
    PUSH ESI                            ; 00545e94 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00 ; 00545e95
        ;   XREF to: 0050fb00 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00()
    MOV dword ptr [ESP + 0x144],EAX     ; 00545e9a
    FLD float ptr [ESP + 0x144]         ; 00545ea1
    ADD ESP,0xc                         ; 00545ea8
    FLDZ                                ; 00545eab
    FXCH                                ; 00545ead
    FSTP double ptr [ESP]               ; 00545eaf
    FCOMP double ptr [ESP]              ; 00545eb2
    FNSTSW AX                           ; 00545eb5
    SAHF                                ; 00545eb7
    JBE 0x0054606b                      ; 00545eb8
        ;   XREF to: 0054606b (CONDITIONAL_JUMP)  ; LAB_0054606b
    MOV ECX,dword ptr [0x005be368]      ; 00545ebe | DAT_005be368
        ;   Label: LAB_00545ebe
    PUSH ECX                            ; 00545ec4 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 00545ec5
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_init_FUN_00511750()
    MOV ESI,dword ptr [EBX + 0x56c]     ; 00545eca
    ADD ESP,0x4                         ; 00545ed0
    TEST ESI,ESI                        ; 00545ed3
    JZ 0x0054604a                       ; 00545ed5
        ;   XREF to: 0054604a (CONDITIONAL_JUMP)  ; LAB_0054604a
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00545edb
    MOV dword ptr [ESP + 0xe4],EAX      ; 00545ee2
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00545ee9
    MOV dword ptr [ESP + 0xe8],EAX      ; 00545ef0
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00545ef7
    MOV dword ptr [ESP + 0xec],EAX      ; 00545efe
    LEA EAX,[EBX + 0x3c]                ; 00545f05
    MOV EDI,dword ptr [0x005b80f0]      ; 00545f08 | DAT_005b80f0
    PUSH EAX                            ; 00545f0e
    LEA EAX,[ESP + 0xe8]                ; 00545f0f
    FLD float ptr [ESP + 0xec]          ; 00545f16
    PUSH EAX                            ; 00545f1d
    FADD float ptr [0x005968c1]         ; 00545f1e | FLOAT_005968c1
    PUSH EDI                            ; 00545f24
    FSTP float ptr [ESP + 0xf4]         ; 00545f25
    CALL core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_0048af20 ; 00545f2c
        ;   XREF to: 0048af20 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_0048af20()
    ADD ESP,0xc                         ; 00545f31
    MOV EAX,0x40a00000                  ; 00545f34
    MOV EDX,0x40c00000                  ; 00545f39
    PUSH 0x3ec90fdb                     ; 00545f3e
    MOV ECX,0xc0c00000                  ; 00545f43
    PUSH 0xbec90fdb                     ; 00545f48
    MOV dword ptr [ESP + 0xd4],EAX      ; 00545f4d
    MOV dword ptr [ESP + 0xd8],EDX      ; 00545f54
    MOV dword ptr [ESP + 0xdc],ECX      ; 00545f5b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00545f62
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x140],EAX     ; 00545f67
    FLD float ptr [ESP + 0x140]         ; 00545f6e
    ADD ESP,0x8                         ; 00545f75
    PUSH 0x3ec90fdb                     ; 00545f78
    PUSH 0xbec90fdb                     ; 00545f7d
    FSTP float ptr [ESP + 0xc8]         ; 00545f82
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00545f89
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x140],EAX     ; 00545f8e
    FLD float ptr [ESP + 0x140]         ; 00545f95
    ADD ESP,0x8                         ; 00545f9c
    LEA EAX,[ESP + 0xc0]                ; 00545f9f
    PUSH EAX                            ; 00545fa6
    LEA EAX,[ESP + 0x48]                ; 00545fa7
    XOR ESI,ESI                         ; 00545fab
    PUSH EAX                            ; 00545fad
    FSTP float ptr [ESP + 0xcc]         ; 00545fae
    MOV dword ptr [ESP + 0xd0],ESI      ; 00545fb5
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 00545fbc
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0()
    ADD ESP,0x8                         ; 00545fc1
    LEA EAX,[ESP + 0xcc]                ; 00545fc4
    PUSH EAX                            ; 00545fcb
    LEA EAX,[ESP + 0xa0]                ; 00545fcc
    PUSH EAX                            ; 00545fd3
    LEA EAX,[ESP + 0x4c]                ; 00545fd4
    PUSH EAX                            ; 00545fd8
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 00545fd9
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    ADD ESP,0xc                         ; 00545fde
    PUSH EAX                            ; 00545fe1
    LEA EAX,[ESP + 0x100]               ; 00545fe2
    PUSH EAX                            ; 00545fe9
    PUSH EBX                            ; 00545fea
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 00545feb
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_transformVector_FUN_0040a200()
    MOV ESI,EAX                         ; 00545ff0
    LEA EAX,[ESP + 0xd8]                ; 00545ff2
    ADD ESP,0xc                         ; 00545ff9
    CMP EAX,ESI                         ; 00545ffc
    JZ 0x0054601d                       ; 00545ffe
        ;   XREF to: 0054601d (CONDITIONAL_JUMP)  ; LAB_0054601d
    MOV EAX,dword ptr [ESI]             ; 00546000
    MOV dword ptr [ESP + 0xcc],EAX      ; 00546002
    MOV EAX,dword ptr [ESI + 0x4]       ; 00546009
    MOV dword ptr [ESP + 0xd0],EAX      ; 0054600c
    MOV EAX,dword ptr [ESI + 0x8]       ; 00546013
    MOV dword ptr [ESP + 0xd4],EAX      ; 00546016
    PUSH 0x5968aa                       ; 0054601d | = "bullet.kfm"
        ;   Label: LAB_0054601d
    CALL core_dmodel.cpp_loadModel_FUN_004543b0 ; 00546022
        ;   XREF to: 004543b0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_loadModel_FUN_004543b0()
    ADD ESP,0x4                         ; 00546027
    PUSH EAX                            ; 0054602a
    LEA EAX,[ESP + 0xd0]                ; 0054602b
    PUSH EAX                            ; 00546032
    LEA EAX,[EBX + 0x30]                ; 00546033
    PUSH EAX                            ; 00546036
    ADD EBX,0x20                        ; 00546037
    PUSH EBX                            ; 0054603a
    MOV EDI,dword ptr [0x005b80f0]      ; 0054603b | DAT_005b80f0
    PUSH EDI                            ; 00546041
    CALL core_fire.cpp_CFireEffect_createShell_FUN_0048c6b0 ; 00546042
        ;   XREF to: 0048c6b0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createShell_FUN_0048c6b0()
    ADD ESP,0x14                        ; 00546047
    MOV EAX,0x1                         ; 0054604a
        ;   Label: LAB_0054604a
    MOV ESP,EBP                         ; 0054604f
    POP EBP                             ; 00546051
    POP EDI                             ; 00546052
    POP ESI                             ; 00546053
    POP EBX                             ; 00546054
    RET                                 ; 00546055
    PUSH EDI                            ; 00546056
        ;   Label: LAB_00546056
    MOV EDX,dword ptr [0x005be368]      ; 00546057 | DAT_005be368
    PUSH EDX                            ; 0054605d | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 0054605e
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    ADD ESP,0x8                         ; 00546063
    JMP 0x00545e75                      ; 00546066
        ;   XREF to: 00545e75 (UNCONDITIONAL_JUMP)  ; LAB_00545e75
    FLD1                                ; 0054606b
        ;   Label: LAB_0054606b
    FCOMP double ptr [ESP]              ; 0054606d
    FNSTSW AX                           ; 00546070
    SAHF                                ; 00546072
    JC 0x00545ebe                       ; 00546073
        ;   XREF to: 00545ebe (CONDITIONAL_JUMP)  ; LAB_00545ebe
    MOV EDI,dword ptr [0x00765a98]      ; 00546079 | CDemonActorType_00765a60.name_hash
    MOV EAX,[0x005be368]                ; 0054607f | DAT_005be368
    PUSH EDI                            ; 00546084
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 00546085 | DAT_01fa3fe0
    PUSH EDX                            ; 0054608b
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0054608c
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 00546091
    MOV ESI,EAX                         ; 00546094
    TEST EAX,EAX                        ; 00546096
    JZ 0x005460b0                       ; 00546098
        ;   XREF to: 005460b0 (CONDITIONAL_JUMP)  ; LAB_005460b0
    PUSH EAX                            ; 0054609a
    MOV EDI,dword ptr [EAX + 0x14c]     ; 0054609b
    CALL dword ptr [EDI + 0x104]        ; 005460a1
    ADD ESP,0x4                         ; 005460a7
    TEST EAX,EAX                        ; 005460aa
    JLE 0x005460b0                      ; 005460ac
        ;   XREF to: 005460b0 (CONDITIONAL_JUMP)  ; LAB_005460b0
    XOR ESI,ESI                         ; 005460ae
    MOV ECX,dword ptr [0x01c78c78]      ; 005460b0 | DAT_01c78c78
        ;   Label: LAB_005460b0
    MOV EAX,[0x005be368]                ; 005460b6 | DAT_005be368
    PUSH ECX                            ; 005460bb
    MOV EDI,dword ptr [EAX + 0x14cd5c]  ; 005460bc | DAT_01fa3fe0
    PUSH EDI                            ; 005460c2
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 005460c3
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    MOV dword ptr [ESP + 0x13c],EAX     ; 005460c8
    ADD ESP,0x8                         ; 005460cf
    MOV EAX,[0x02dd10bc]                ; 005460d2 | DAT_02dd10bc
    PUSH EAX                            ; 005460d7
    MOV EAX,[0x005be368]                ; 005460d8 | DAT_005be368
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 005460dd | DAT_01fa3fe0
    PUSH EDX                            ; 005460e3
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 005460e4
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    MOV ECX,dword ptr [0x0077bd78]      ; 005460e9 | CDemonActorType_0077bd40.name_hash
    ADD ESP,0x8                         ; 005460ef
    MOV EDI,EAX                         ; 005460f2
    MOV dword ptr [ESP + 0x128],EAX     ; 005460f4
    MOV EAX,[0x005be368]                ; 005460fb | DAT_005be368
    PUSH ECX                            ; 00546100
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 00546101 | DAT_01fa3fe0
    PUSH EDX                            ; 00546107
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00546108
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    MOV dword ptr [ESP + 0x134],EAX     ; 0054610d
    ADD ESP,0x8                         ; 00546114
    MOV ECX,dword ptr [0x01c7068c]      ; 00546117 | DAT_01c7068c
    MOV EAX,[0x005be368]                ; 0054611d | DAT_005be368
    PUSH ECX                            ; 00546122
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 00546123 | DAT_01fa3fe0
    PUSH EDX                            ; 00546129
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0054612a
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 0054612f
    TEST ESI,ESI                        ; 00546132
    JNZ 0x00546172                      ; 00546134
        ;   XREF to: 00546172 (CONDITIONAL_JUMP)  ; LAB_00546172
    MOV ECX,dword ptr [ESP + 0x134]     ; 00546136
    TEST ECX,ECX                        ; 0054613d
    JNZ 0x00546388                      ; 0054613f
        ;   XREF to: 00546388 (CONDITIONAL_JUMP)  ; LAB_00546388
    TEST EDI,EDI                        ; 00546145
    JNZ 0x005463b6                      ; 00546147
        ;   XREF to: 005463b6 (CONDITIONAL_JUMP)  ; LAB_005463b6
    MOV ESI,dword ptr [ESP + 0x12c]     ; 0054614d
    TEST ESI,ESI                        ; 00546154
    JNZ 0x00546412                      ; 00546156
        ;   XREF to: 00546412 (CONDITIONAL_JUMP)  ; LAB_00546412
    TEST EAX,EAX                        ; 0054615c
    JZ 0x00546438                       ; 0054615e
        ;   XREF to: 00546438 (CONDITIONAL_JUMP)  ; LAB_00546438
    PUSH EAX                            ; 00546164
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550 ; 00546165
        ;   XREF to: 0048e550 (UNCONDITIONAL_CALL)  ; undefined core_flamecan.cpp_CFlameCan_ignite_FUN_0048e550()
    ADD ESP,0x4                         ; 0054616a
    JMP 0x0054641b                      ; 0054616d
        ;   XREF to: 0054641b (UNCONDITIONAL_JUMP)  ; LAB_0054641b
    PUSH ESI                            ; 00546172
        ;   Label: LAB_00546172
    MOV EAX,dword ptr [ESI + 0x14c]     ; 00546173
    CALL dword ptr [EAX + 0xd8]         ; 00546179
    ADD ESP,0x4                         ; 0054617f
    TEST EAX,EAX                        ; 00546182
    JZ 0x005461d2                       ; 00546184
        ;   XREF to: 005461d2 (CONDITIONAL_JUMP)  ; LAB_005461d2
    MOV EDI,dword ptr [0x01cae124]      ; 00546186 | DAT_01cae124
    PUSH EDI                            ; 0054618c
    MOV EAX,dword ptr [EBX + 0x2fc]     ; 0054618d
    PUSH EAX                            ; 00546193
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00546194
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 00546199
    TEST EAX,EAX                        ; 0054619c
    JZ 0x005461d2                       ; 0054619e
        ;   XREF to: 005461d2 (CONDITIONAL_JUMP)  ; LAB_005461d2
    CMP dword ptr [ESP + 0x130],0x0     ; 005461a0
    JNZ 0x00545ebe                      ; 005461a8
        ;   XREF to: 00545ebe (CONDITIONAL_JUMP)  ; LAB_00545ebe
    MOV EDX,dword ptr [EBX + 0x560]     ; 005461ae
    MOV EAX,[0x005be368]                ; 005461b4 | DAT_005be368
    INC EDX                             ; 005461b9
    PUSH EAX                            ; 005461ba | DAT_01e57284
    MOV dword ptr [EBX + 0x560],EDX     ; 005461bb
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 005461c1
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_init_FUN_00511750()
    ADD ESP,0x4                         ; 005461c6
    XOR EAX,EAX                         ; 005461c9
    MOV ESP,EBP                         ; 005461cb
    POP EBP                             ; 005461cd
    POP EDI                             ; 005461ce
    POP ESI                             ; 005461cf
    POP EBX                             ; 005461d0
    RET                                 ; 005461d1
    LEA EAX,[ESP + 0x8]                 ; 005461d2
        ;   Label: LAB_005461d2
    PUSH EAX                            ; 005461d6
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 005461d7
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    MOV EAX,[0x005be368]                ; 005461dc | DAT_005be368
    ADD ESP,0x4                         ; 005461e1
    MOV EAX,dword ptr [EAX + 0x14cd60]  ; 005461e4 | DAT_01fa3fe4
    MOV dword ptr [ESP + 0x8],EAX       ; 005461ea
    PUSH EBX                            ; 005461ee
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005461ef
    CALL dword ptr [EAX + 0xe4]         ; 005461f5
    MOV dword ptr [ESP + 0x13c],EAX     ; 005461fb
    MOV EDX,0x3ecccccd                  ; 00546202
    FLD float ptr [ESP + 0x13c]         ; 00546207
    MOV EAX,[0x005be368]                ; 0054620e | DAT_005be368
    ADD ESP,0x4                         ; 00546213
    LEA EDI,[EAX + 0x14cd34]            ; 00546216
    MOV dword ptr [ESP + 0x10],EDX      ; 0054621c
    FSTP float ptr [ESP + 0xc]          ; 00546220
    FLD float ptr [EDI]                 ; 00546224 | DAT_01fa3fb8
    FSUB float ptr [EAX + 0x14cd28]     ; 00546226 | DAT_01fa3fac
    FSTP float ptr [ESP + 0x78]         ; 0054622c
    FLD float ptr [EDI + 0x4]           ; 00546230 | DAT_01fa3fbc
    FSUB float ptr [EAX + 0x14cd2c]     ; 00546233 | DAT_01fa3fb0
    FST float ptr [ESP + 0x7c]          ; 00546239
    FMUL float ptr [ESP + 0x7c]         ; 0054623d
    FLD float ptr [ESP + 0x78]          ; 00546241
    FMUL ST0                            ; 00546245
    FLD float ptr [EDI + 0x8]           ; 00546247 | DAT_01fa3fc0
    FSUB float ptr [EAX + 0x14cd30]     ; 0054624a | DAT_01fa3fb4
    FXCH                                ; 00546250
    FADDP ST2,ST0                       ; 00546252
    FST float ptr [ESP + 0x80]          ; 00546254
    FMUL float ptr [ESP + 0x80]         ; 0054625b
    FADDP                               ; 00546262
    FSQRT                               ; 00546264
    FDIVR double ptr [0x005968c9]       ; 00546266 | DOUBLE_005968c9
    FLD float ptr [ESP + 0x78]          ; 0054626c
    FXCH                                ; 00546270
    FSTP float ptr [ESP + 0x120]        ; 00546272
    FMUL float ptr [ESP + 0x120]        ; 00546279
    FLD float ptr [ESP + 0x7c]          ; 00546280
    FMUL float ptr [ESP + 0x120]        ; 00546284
    FLD float ptr [ESP + 0x80]          ; 0054628b
    FMUL float ptr [ESP + 0x120]        ; 00546292
    LEA EDI,[ESP + 0x108]               ; 00546299
    LEA EAX,[ESP + 0x14]                ; 005462a0
    FXCH ST2                            ; 005462a4
    FSTP float ptr [ESP + 0x108]        ; 005462a6
    FSTP float ptr [ESP + 0x10c]        ; 005462ad
    FSTP float ptr [ESP + 0x110]        ; 005462b4
    CMP EAX,EDI                         ; 005462bb
    JZ 0x005462e0                       ; 005462bd
        ;   XREF to: 005462e0 (CONDITIONAL_JUMP)  ; LAB_005462e0
    MOV EAX,dword ptr [ESP + 0x108]     ; 005462bf
    MOV dword ptr [ESP + 0x14],EAX      ; 005462c6
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005462ca
    MOV dword ptr [ESP + 0x18],EAX      ; 005462d1
    MOV EAX,dword ptr [ESP + 0x110]     ; 005462d5
    MOV dword ptr [ESP + 0x1c],EAX      ; 005462dc
    MOV EAX,[0x005be368]                ; 005462e0 | DAT_005be368
        ;   Label: LAB_005462e0
    ADD EAX,0x14cd50                    ; 005462e5
    PUSH EAX                            ; 005462ea | DAT_01fa3fd4
    LEA EAX,[ESP + 0x70]                ; 005462eb
    PUSH EAX                            ; 005462ef
    PUSH ESI                            ; 005462f0
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 005462f1
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    MOV EDI,EAX                         ; 005462f6
    LEA EAX,[ESP + 0x30]                ; 005462f8
    ADD ESP,0xc                         ; 005462fc
    CMP EAX,EDI                         ; 005462ff
    JZ 0x00546317                       ; 00546301
        ;   XREF to: 00546317 (CONDITIONAL_JUMP)  ; LAB_00546317
    MOV EAX,dword ptr [EDI]             ; 00546303
    MOV dword ptr [ESP + 0x24],EAX      ; 00546305
    MOV EAX,dword ptr [EDI + 0x4]       ; 00546309
    MOV dword ptr [ESP + 0x28],EAX      ; 0054630c
    MOV EAX,dword ptr [EDI + 0x8]       ; 00546310
    MOV dword ptr [ESP + 0x2c],EAX      ; 00546313
    MOV ECX,0x65                        ; 00546317
        ;   Label: LAB_00546317
    MOV EAX,dword ptr [EBX + 0x564]     ; 0054631c
    MOV EDI,0x3e19999a                  ; 00546322
    MOV dword ptr [ESP + 0x30],EAX      ; 00546327
    MOV dword ptr [ESP + 0x38],ECX      ; 0054632b
    MOV dword ptr [ESP + 0x34],EDI      ; 0054632f
    MOV dword ptr [ESP + 0x3c],EBX      ; 00546333
    PUSH EBX                            ; 00546337
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00546338
    CALL dword ptr [EAX + 0x8c]         ; 0054633e
    ADD ESP,0x4                         ; 00546344
    MOV dword ptr [ESP + 0x40],EAX      ; 00546347
    LEA EAX,[ESP + 0x8]                 ; 0054634b
    PUSH EAX                            ; 0054634f
    MOV EDI,dword ptr [ESI + 0x14c]     ; 00546350
    PUSH ESI                            ; 00546356
    CALL dword ptr [EDI + 0x100]        ; 00546357
    MOV EAX,dword ptr [EBX + 0x2dc]     ; 0054635d
    ADD ESP,0x8                         ; 00546363
    TEST EAX,EAX                        ; 00546366
    JZ 0x00545ebe                       ; 00546368
        ;   XREF to: 00545ebe (CONDITIONAL_JUMP)  ; LAB_00545ebe
    MOV EAX,[0x005be368]                ; 0054636e | DAT_005be368
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 00546373 | DAT_01fa3fe0
    PUSH EDX                            ; 00546379
    PUSH EAX                            ; 0054637a | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 0054637b
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    ADD ESP,0x8                         ; 00546380
    JMP 0x0054641b                      ; 00546383
        ;   XREF to: 0054641b (UNCONDITIONAL_JUMP)  ; LAB_0054641b
    PUSH ECX                            ; 00546388
        ;   Label: LAB_00546388
    CALL FUN_004aded0                   ; 00546389
        ;   XREF to: 004aded0 (UNCONDITIONAL_CALL)  ; undefined FUN_004aded0()
    ADD ESP,0x4                         ; 0054638e
    TEST EAX,EAX                        ; 00546391
    JZ 0x00545ebe                       ; 00546393
        ;   XREF to: 00545ebe (CONDITIONAL_JUMP)  ; LAB_00545ebe
    MOV EAX,[0x005be368]                ; 00546399 | DAT_005be368
    ADD EAX,0x14cd50                    ; 0054639e
    PUSH EAX                            ; 005463a3 | DAT_01fa3fd4
    MOV ECX,dword ptr [ESP + 0x138]     ; 005463a4
    PUSH ECX                            ; 005463ab
    CALL FUN_004ada20                   ; 005463ac
        ;   XREF to: 004ada20 (UNCONDITIONAL_CALL)  ; undefined FUN_004ada20()
    ADD ESP,0x8                         ; 005463b1
    JMP 0x0054641b                      ; 005463b4
        ;   XREF to: 0054641b (UNCONDITIONAL_JUMP)  ; LAB_0054641b
    PUSH EDI                            ; 005463b6
        ;   Label: LAB_005463b6
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_00548580 ; 005463b7
        ;   XREF to: 00548580 (UNCONDITIONAL_CALL)  ; undefined core_trigger.cpp_CTrigger_onProjectileHit_FUN_00548580()
    ADD ESP,0x4                         ; 005463bc
    PUSH EBX                            ; 005463bf
    PUSH EDI                            ; 005463c0
    CALL FUN_005485a0                   ; 005463c1
        ;   XREF to: 005485a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005485a0()
    ADD ESP,0x8                         ; 005463c6
    TEST EAX,EAX                        ; 005463c9
    JZ 0x005463fa                       ; 005463cb
        ;   XREF to: 005463fa (CONDITIONAL_JUMP)  ; LAB_005463fa
    PUSH EBX                            ; 005463cd
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005463ce
    CALL dword ptr [EAX + 0xe4]         ; 005463d4
    MOV dword ptr [ESP + 0x13c],EAX     ; 005463da
    FLD float ptr [ESP + 0x13c]         ; 005463e1
    ADD ESP,0x4                         ; 005463e8
    SUB ESP,0x4                         ; 005463eb
    FSTP float ptr [ESP]                ; 005463ee
    PUSH EDI                            ; 005463f1
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_005485e0 ; 005463f2
        ;   XREF to: 005485e0 (UNCONDITIONAL_CALL)  ; undefined core_trigger.cpp_CTrigger_applyDamage_FUN_005485e0()
    ADD ESP,0x8                         ; 005463f7
    MOV EDI,dword ptr [ESP + 0x128]     ; 005463fa
        ;   Label: LAB_005463fa
    PUSH EDI                            ; 00546401
    MOV EAX,[0x005be368]                ; 00546402 | DAT_005be368
    PUSH EAX                            ; 00546407 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 00546408
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    ADD ESP,0x8                         ; 0054640d
    JMP 0x0054641b                      ; 00546410
        ;   XREF to: 0054641b (UNCONDITIONAL_JUMP)  ; LAB_0054641b
    PUSH ESI                            ; 00546412
        ;   Label: LAB_00546412
    CALL core_crate.cpp_CCrate_explode_FUN_0043cdb0 ; 00546413
        ;   XREF to: 0043cdb0 (UNCONDITIONAL_CALL)  ; undefined core_crate.cpp_CCrate_explode_FUN_0043cdb0()
    ADD ESP,0x4                         ; 00546418
    MOV ECX,dword ptr [ESP + 0x130]     ; 0054641b
        ;   Label: LAB_0054641b
    INC ECX                             ; 00546422
    MOV dword ptr [ESP + 0x130],ECX     ; 00546423
    CMP ECX,0x4                         ; 0054642a
    JL 0x00545e7e                       ; 0054642d
        ;   XREF to: 00545e7e (CONDITIONAL_JUMP)  ; LAB_00545e7e
    JMP 0x00545ebe                      ; 00546433
        ;   XREF to: 00545ebe (UNCONDITIONAL_JUMP)  ; LAB_00545ebe
    MOV EAX,[0x005be368]                ; 00546438 | DAT_005be368
        ;   Label: LAB_00546438
    MOV EDI,dword ptr [EAX + 0x14cd5c]  ; 0054643d | DAT_01fa3fe0
    PUSH EDI                            ; 00546443
    MOV EDX,dword ptr [EAX + 0x14cd4c]  ; 00546444 | DAT_01fa3fd0
    PUSH EDX                            ; 0054644a
    LEA ESI,[EAX + 0x14cd40]            ; 0054644b
    PUSH ESI                            ; 00546451 | DAT_01fa3fc4
    ADD EAX,0x14cd50                    ; 00546452
    PUSH EAX                            ; 00546457 | DAT_01fa3fd4
    MOV ECX,dword ptr [0x005b80f0]      ; 00546458 | DAT_005b80f0
    PUSH ECX                            ; 0054645e
    CALL FUN_0048ab60                   ; 0054645f
        ;   XREF to: 0048ab60 (UNCONDITIONAL_CALL)  ; undefined FUN_0048ab60()
    ADD ESP,0x14                        ; 00546464
    JMP 0x00545ebe                      ; 00546467
        ;   XREF to: 00545ebe (UNCONDITIONAL_JUMP)  ; LAB_00545ebe

