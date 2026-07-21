; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_updateListeners_FUN_0052c9d0(void)
;
; Local Variables:
; undefined8       Stack[-0x1b8]:8  local_1b8
; undefined8       Stack[-0x1b0]:8  local_1b0
; undefined8       Stack[-0x1a8]:8  local_1a8
; undefined8       Stack[-0x1a0]:8  local_1a0
; undefined8       Stack[-0x198]:8  local_198
; undefined8       Stack[-0x190]:8  local_190
; undefined8       Stack[-0x188]:8  local_188
; undefined8       Stack[-0x180]:8  local_180
; undefined8       Stack[-0x178]:8  local_178
; undefined8       Stack[-0x170]:8  local_170
; undefined8       Stack[-0x168]:8  local_168
; undefined4       Stack[-0x160]:4  local_160
; undefined        Stack[-0x15c]:1  local_15c
; undefined        Stack[-0x134]:1  local_134
; undefined        Stack[-0x10c]:1  local_10c
; undefined        Stack[-0xe4]:1  local_e4
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined        Stack[-0x54]:1  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_0052dff0 at 0052e02f
;   core_sound.cpp_CSound_init_FUN_0052ddf0 at 0052de2d
;
; Referenced Globals:
;   string s_castle_005949c6
;   undefined4 DAT_005949ce
;   undefined4 DAT_005949d6
;   undefined4 DAT_005949de
;   undefined4 DAT_005949e6
;   undefined4 DAT_005949ee
;   undefined4 DAT_005949f2
;   undefined4 DAT_005949f6
;   undefined4 DAT_005949fe
;   undefined4 DAT_00594a06
;   undefined4 DAT_00594a0e
;   undefined4 DAT_00594a16
;   undefined4 DAT_005b9354
;   undefined4 DAT_005be368
;   undefined4 DAT_01c74744
;   ... and 17 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0
;   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   crt_string.c__strnicmp_FUN_00564bc0
;   FUN_0050f910
;   sound_sndmain.cpp_set3DListenerOrient_FUN_00527690
;   sound_sndmain.cpp_set3DListenerPos_FUN_00527610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052c9d0
        ;   Label: core_sound.cpp_updateListeners_FUN_0052c9d0
    PUSH ESI                            ; 0052c9d1
    PUSH EDI                            ; 0052c9d2
    PUSH EBP                            ; 0052c9d3
    MOV EBP,ESP                         ; 0052c9d4
    SUB ESP,0x160                       ; 0052c9d6
    AND ESP,0xfffffff8                  ; 0052c9dc
    MOV EAX,[0x005b9354]                ; 0052c9df | DAT_005b9354
    CMP dword ptr [EAX + 0x240],0x0     ; 0052c9e4 | DAT_01c7782c
    JNZ 0x0052cc69                      ; 0052c9eb
        ;   XREF to: 0052cc69 (CONDITIONAL_JUMP)  ; LAB_0052cc69
    MOV EAX,[0x01fb860c]                ; 0052c9f1 | DAT_01fb860c
    MOV dword ptr [ESP + 0x128],EAX     ; 0052c9f6
    MOV EAX,0x1fb860c                   ; 0052c9fd
    MOV EAX,dword ptr [EAX + 0x4]       ; 0052ca02 | DAT_01fb8610
    MOV dword ptr [ESP + 0x12c],EAX     ; 0052ca05
    MOV EAX,0x1fb860c                   ; 0052ca0c
    MOV EAX,dword ptr [EAX + 0x8]       ; 0052ca11 | DAT_01fb8614
    LEA EDX,[ESP + 0xa4]                ; 0052ca14
    MOV dword ptr [ESP + 0x130],EAX     ; 0052ca1b
    LEA EAX,[ESP + 0x128]               ; 0052ca22
    CMP EDX,EAX                         ; 0052ca29
    JZ 0x0052ca57                       ; 0052ca2b
        ;   XREF to: 0052ca57 (CONDITIONAL_JUMP)  ; LAB_0052ca57
    MOV EAX,dword ptr [ESP + 0x128]     ; 0052ca2d
    MOV dword ptr [ESP + 0xa4],EAX      ; 0052ca34
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0052ca3b
    MOV dword ptr [ESP + 0xa8],EAX      ; 0052ca42
    MOV EAX,dword ptr [ESP + 0x130]     ; 0052ca49
    MOV dword ptr [ESP + 0xac],EAX      ; 0052ca50
    FLD float ptr [ESP + 0xa4]          ; 0052ca57
        ;   Label: LAB_0052ca57
    FLD float ptr [ESP + 0xa8]          ; 0052ca5e
    FSUB float ptr [0x02dc9460]         ; 0052ca65 | DAT_02dc9460
    FXCH                                ; 0052ca6b
    FSUB float ptr [0x02dc945c]         ; 0052ca6d | DAT_02dc945c
    FXCH                                ; 0052ca73
    FST float ptr [ESP + 0x108]         ; 0052ca75
    FMUL float ptr [ESP + 0x108]        ; 0052ca7c
    FXCH                                ; 0052ca83
    FST float ptr [ESP + 0x104]         ; 0052ca85
    FMUL float ptr [ESP + 0x104]        ; 0052ca8c
    FLD float ptr [ESP + 0xac]          ; 0052ca93
    FSUB float ptr [0x02dc9464]         ; 0052ca9a | DAT_02dc9464
    FXCH                                ; 0052caa0
    FADDP ST2,ST0                       ; 0052caa2
    FST float ptr [ESP + 0x10c]         ; 0052caa4
    FMUL float ptr [ESP + 0x10c]        ; 0052caab
    FADDP                               ; 0052cab2
    FSQRT                               ; 0052cab4
    FCOMP double ptr [0x005949ce]       ; 0052cab6 | DAT_005949ce
    FNSTSW AX                           ; 0052cabc
    SAHF                                ; 0052cabe
    JC 0x0052cc62                       ; 0052cabf
        ;   XREF to: 0052cc62 (CONDITIONAL_JUMP)  ; LAB_0052cc62
    MOV ECX,0xa                         ; 0052cac5
    LEA EDI,[ESP + 0x64]                ; 0052caca
    MOV ESI,0x1fb8618                   ; 0052cace
    MOVSD.REP ES:EDI,ESI                ; 0052cad3 | DAT_01fb8618 | DAT_01fb861c
    MOV ECX,0xa                         ; 0052cad5
    LEA EDI,[ESP + 0x14]                ; 0052cada
    LEA ESI,[ESP + 0x64]                ; 0052cade
    MOVSD.REP ES:EDI,ESI                ; 0052cae2
        ;   Label: LAB_0052cae2
    FLD float ptr [ESP + 0xac]          ; 0052cae4
    SUB ESP,0x8                         ; 0052caeb
    FSTP double ptr [ESP]               ; 0052caee
    FLD float ptr [ESP + 0xb0]          ; 0052caf1
    SUB ESP,0x8                         ; 0052caf8
    FSTP double ptr [ESP]               ; 0052cafb
    FLD float ptr [ESP + 0xb4]          ; 0052cafe
    SUB ESP,0x8                         ; 0052cb05
    FSTP double ptr [ESP]               ; 0052cb08
    CALL sound_sndmain.cpp_set3DListenerPos_FUN_00527610 ; 0052cb0b
        ;   XREF to: 00527610 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_set3DListenerPos_FUN_00527610()
    ADD ESP,0x18                        ; 0052cb10
    LEA EAX,[ESP + 0x98]                ; 0052cb13
    XOR EBX,EBX                         ; 0052cb1a
    PUSH EAX                            ; 0052cb1c
    LEA EAX,[ESP + 0x144]               ; 0052cb1d
    MOV ECX,0x3f800000                  ; 0052cb24
    PUSH EAX                            ; 0052cb29
    LEA EAX,[ESP + 0x1c]                ; 0052cb2a
    MOV dword ptr [ESP + 0xa0],ECX      ; 0052cb2e
    PUSH EAX                            ; 0052cb35
    MOV dword ptr [ESP + 0xa8],EBX      ; 0052cb36
    MOV dword ptr [ESP + 0xac],EBX      ; 0052cb3d
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 0052cb44
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    MOV EAX,0x3f800000                  ; 0052cb49
    ADD ESP,0xc                         ; 0052cb4e
    MOV dword ptr [ESP + 0x114],EAX     ; 0052cb51
    LEA EAX,[ESP + 0x110]               ; 0052cb58
    PUSH EAX                            ; 0052cb5f
    LEA EAX,[ESP + 0xb4]                ; 0052cb60
    PUSH EAX                            ; 0052cb67
    LEA EAX,[ESP + 0x1c]                ; 0052cb68
    PUSH EAX                            ; 0052cb6c
    MOV dword ptr [ESP + 0x11c],EBX     ; 0052cb6d
    MOV dword ptr [ESP + 0x124],EBX     ; 0052cb74
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 0052cb7b
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    ADD ESP,0xc                         ; 0052cb80
    LEA EAX,[ESP + 0xbc]                ; 0052cb83
    PUSH EAX                            ; 0052cb8a
    LEA EAX,[ESP + 0xfc]                ; 0052cb8b
    MOV ESI,0x3f800000                  ; 0052cb92
    PUSH EAX                            ; 0052cb97
    LEA EAX,[ESP + 0x1c]                ; 0052cb98
    MOV dword ptr [ESP + 0xc4],EBX      ; 0052cb9c
    PUSH EAX                            ; 0052cba3
    MOV dword ptr [ESP + 0xcc],EBX      ; 0052cba4
    MOV dword ptr [ESP + 0xd0],ESI      ; 0052cbab
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 0052cbb2
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    ADD ESP,0xc                         ; 0052cbb7
    FLD float ptr [ESP + 0x100]         ; 0052cbba
    SUB ESP,0x8                         ; 0052cbc1
    FSTP double ptr [ESP]               ; 0052cbc4
    FLD float ptr [ESP + 0x104]         ; 0052cbc7
    SUB ESP,0x8                         ; 0052cbce
    FSTP double ptr [ESP]               ; 0052cbd1
    FLD float ptr [ESP + 0x108]         ; 0052cbd4
    SUB ESP,0x8                         ; 0052cbdb
    FSTP double ptr [ESP]               ; 0052cbde
    FLD float ptr [ESP + 0xd0]          ; 0052cbe1
    SUB ESP,0x8                         ; 0052cbe8
    FSTP double ptr [ESP]               ; 0052cbeb
    FLD float ptr [ESP + 0xd4]          ; 0052cbee
    SUB ESP,0x8                         ; 0052cbf5
    FSTP double ptr [ESP]               ; 0052cbf8
    FLD float ptr [ESP + 0xd8]          ; 0052cbfb
    SUB ESP,0x8                         ; 0052cc02
    FSTP double ptr [ESP]               ; 0052cc05
    FLD float ptr [ESP + 0x178]         ; 0052cc08
    SUB ESP,0x8                         ; 0052cc0f
    FSTP double ptr [ESP]               ; 0052cc12
    FLD float ptr [ESP + 0x17c]         ; 0052cc15
    SUB ESP,0x8                         ; 0052cc1c
    FSTP double ptr [ESP]               ; 0052cc1f
    FLD float ptr [ESP + 0x180]         ; 0052cc22
    SUB ESP,0x8                         ; 0052cc29
    FSTP double ptr [ESP]               ; 0052cc2c
    CALL sound_sndmain.cpp_set3DListenerOrient_FUN_00527690 ; 0052cc2f
        ;   XREF to: 00527690 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_set3DListenerOrient_FUN_00527690()
    MOV EAX,[0x005b9354]                ; 0052cc34 | DAT_005b9354
    ADD ESP,0x48                        ; 0052cc39
    MOV EDX,dword ptr [EAX + 0x240]     ; 0052cc3c | DAT_01c7782c
    MOV dword ptr [0x02dc9468],EBX      ; 0052cc42 | DAT_02dc9468
    TEST EDX,EDX                        ; 0052cc48
    JZ 0x0052ccf1                       ; 0052cc4a
        ;   XREF to: 0052ccf1 (CONDITIONAL_JUMP)  ; LAB_0052ccf1
    LEA EAX,[ESP + 0xa4]                ; 0052cc50
        ;   Label: LAB_0052cc50
    CMP EAX,0x2dc945c                   ; 0052cc57
    JNZ 0x0052cffc                      ; 0052cc5c
        ;   XREF to: 0052cffc (CONDITIONAL_JUMP)  ; LAB_0052cffc
    MOV ESP,EBP                         ; 0052cc62
        ;   Label: LAB_0052cc62
    POP EBP                             ; 0052cc64
    POP EDI                             ; 0052cc65
    POP ESI                             ; 0052cc66
    POP EBX                             ; 0052cc67
    RET                                 ; 0052cc68
    MOV EAX,[0x01c74744]                ; 0052cc69 | DAT_01c74744
        ;   Label: LAB_0052cc69
    MOV dword ptr [ESP + 0xc8],EAX      ; 0052cc6e
    MOV EAX,0x1c74744                   ; 0052cc75
    MOV EAX,dword ptr [EAX + 0x4]       ; 0052cc7a | DAT_01c74748
    MOV dword ptr [ESP + 0xcc],EAX      ; 0052cc7d
    MOV EAX,0x1c74744                   ; 0052cc84
    MOV EAX,dword ptr [EAX + 0x8]       ; 0052cc89 | DAT_01c7474c
    LEA EDX,[ESP + 0xa4]                ; 0052cc8c
    MOV dword ptr [ESP + 0xd0],EAX      ; 0052cc93
    LEA EAX,[ESP + 0xc8]                ; 0052cc9a
    CMP EDX,EAX                         ; 0052cca1
    JZ 0x0052cccf                       ; 0052cca3
        ;   XREF to: 0052cccf (CONDITIONAL_JUMP)  ; LAB_0052cccf
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0052cca5
    MOV dword ptr [ESP + 0xa4],EAX      ; 0052ccac
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0052ccb3
    MOV dword ptr [ESP + 0xa8],EAX      ; 0052ccba
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0052ccc1
    MOV dword ptr [ESP + 0xac],EAX      ; 0052ccc8
    MOV ECX,0xa                         ; 0052cccf
        ;   Label: LAB_0052cccf
    LEA EDI,[ESP + 0x3c]                ; 0052ccd4
    MOV ESI,0x1c74750                   ; 0052ccd8
    MOVSD.REP ES:EDI,ESI                ; 0052ccdd | DAT_01c74750 | DAT_01c74754
    MOV ECX,0xa                         ; 0052ccdf
    LEA EDI,[ESP + 0x14]                ; 0052cce4
    LEA ESI,[ESP + 0x3c]                ; 0052cce8
    JMP 0x0052cae2                      ; 0052ccec
        ;   XREF to: 0052cae2 (UNCONDITIONAL_JUMP)  ; LAB_0052cae2
    PUSH 0x6                            ; 0052ccf1
        ;   Label: LAB_0052ccf1
    MOV EAX,[0x005be368]                ; 0052ccf3 | DAT_005be368
    PUSH 0x5949c6                       ; 0052ccf8 | = "castle"
    ADD EAX,0x14cd08                    ; 0052ccfd
    PUSH EAX                            ; 0052cd02
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 0052cd03
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strnicmp_FUN_00564bc0()
    ADD ESP,0xc                         ; 0052cd08
    TEST EAX,EAX                        ; 0052cd0b
    JNZ 0x0052ce20                      ; 0052cd0d
        ;   XREF to: 0052ce20 (CONDITIONAL_JUMP)  ; LAB_0052ce20
    MOV dword ptr [ESP + 0x154],0x1     ; 0052cd13
    MOV EAX,dword ptr [ESP + 0x154]     ; 0052cd1e
        ;   Label: LAB_0052cd1e
    MOV EBX,0x1                         ; 0052cd25
    MOV dword ptr [ESP + 0x158],EAX     ; 0052cd2a
    MOV EDX,dword ptr [0x01fb8644]      ; 0052cd31 | DAT_01fb8644
        ;   Label: LAB_0052cd31
    IMUL EDX,EBX                        ; 0052cd37
    MOV EAX,EDX                         ; 0052cd3a
    SAR EDX,0x1f                        ; 0052cd3c
    SHL EDX,0x5                         ; 0052cd3f
    SBB EAX,EDX                         ; 0052cd42
    SAR EAX,0x5                         ; 0052cd44
    MOV EDI,dword ptr [ESP + 0x158]     ; 0052cd47
    MOV EDX,dword ptr [0x01fb8648]      ; 0052cd4e | DAT_01fb8648
    IMUL EDX,EDI                        ; 0052cd54
    MOV ESI,EAX                         ; 0052cd57
    MOV EAX,EDX                         ; 0052cd59
    SAR EDX,0x1f                        ; 0052cd5b
    SHL EDX,0x5                         ; 0052cd5e
    SBB EAX,EDX                         ; 0052cd61
    SAR EAX,0x5                         ; 0052cd63
    PUSH EAX                            ; 0052cd66
    PUSH ESI                            ; 0052cd67
    PUSH 0x1fb8508                      ; 0052cd68
    LEA ESI,[ESP + 0x140]               ; 0052cd6d
    LEA EDI,[ESP + 0x98]                ; 0052cd74
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0 ; 0052cd7b
        ;   XREF to: 004410c0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0()
    LEA ESI,[ESP + 0x140]               ; 0052cd80
    ADD ESP,0xc                         ; 0052cd87
    MOVSD ES:EDI,ESI                    ; 0052cd8a
    MOVSD ES:EDI,ESI                    ; 0052cd8b
    MOVSD ES:EDI,ESI                    ; 0052cd8c
    XOR EAX,EAX                         ; 0052cd8d
    MOV EDX,dword ptr [ESP + 0x94]      ; 0052cd8f
    MOV dword ptr [ESP + 0x10],EAX      ; 0052cd96
    CMP EDX,0x7fffffff                  ; 0052cd9a
    JL 0x0052ce6b                       ; 0052cda0
        ;   XREF to: 0052ce6b (CONDITIONAL_JUMP)  ; LAB_0052ce6b
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 0052cda6
    FLD float ptr [ESP + 0x10]          ; 0052cdae
        ;   Label: LAB_0052cdae
    FLDZ                                ; 0052cdb2
    FCOMPP                              ; 0052cdb4
    FNSTSW AX                           ; 0052cdb6
    SAHF                                ; 0052cdb8
    JNC 0x0052cdc9                      ; 0052cdb9
        ;   XREF to: 0052cdc9 (CONDITIONAL_JUMP)  ; LAB_0052cdc9
    FLD float ptr [ESP + 0x10]          ; 0052cdbb
    FADD float ptr [0x00594a16]         ; 0052cdbf | DAT_00594a16
    FSTP float ptr [ESP + 0x10]         ; 0052cdc5
    FLD float ptr [ESP + 0x10]          ; 0052cdc9
        ;   Label: LAB_0052cdc9
    FMUL ST0                            ; 0052cdcd
    FST float ptr [ESP + 0x10]          ; 0052cdcf
    FLD1                                ; 0052cdd3
    FCOMPP                              ; 0052cdd5
    FNSTSW AX                           ; 0052cdd7
    SAHF                                ; 0052cdd9
    JNC 0x0052cde4                      ; 0052cdda
        ;   XREF to: 0052cde4 (CONDITIONAL_JUMP)  ; LAB_0052cde4
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 0052cddc
    FLD float ptr [ESP + 0x10]          ; 0052cde4
        ;   Label: LAB_0052cde4
    FMUL float ptr [0x005949ee]         ; 0052cde8 | DAT_005949ee
    FADD float ptr [0x02dc9468]         ; 0052cdee | DAT_02dc9468
    ADD EBX,0x2                         ; 0052cdf4
    FSTP float ptr [0x02dc9468]         ; 0052cdf7 | DAT_02dc9468
    CMP EBX,0x21                        ; 0052cdfd
    JNZ 0x0052cd31                      ; 0052ce00
        ;   XREF to: 0052cd31 (CONDITIONAL_JUMP)  ; LAB_0052cd31
    MOV EBX,dword ptr [ESP + 0x154]     ; 0052ce06
    ADD EBX,0x2                         ; 0052ce0d
    MOV dword ptr [ESP + 0x154],EBX     ; 0052ce10
    CMP EBX,0x21                        ; 0052ce17
    JNZ 0x0052cd1e                      ; 0052ce1a
        ;   XREF to: 0052cd1e (CONDITIONAL_JUMP)  ; LAB_0052cd1e
    FLD float ptr [0x02dc9468]          ; 0052ce20 | DAT_02dc9468
        ;   Label: LAB_0052ce20
    FMUL ST0                            ; 0052ce26
    FST float ptr [0x02dc9468]          ; 0052ce28 | DAT_02dc9468
    FLDZ                                ; 0052ce2e
    FCOMPP                              ; 0052ce30
    FNSTSW AX                           ; 0052ce32
    SAHF                                ; 0052ce34
    JNC 0x0052ce49                      ; 0052ce35
        ;   XREF to: 0052ce49 (CONDITIONAL_JUMP)  ; LAB_0052ce49
    FLD float ptr [0x02dc9468]          ; 0052ce37 | DAT_02dc9468
    FADD float ptr [0x005949f2]         ; 0052ce3d | DAT_005949f2
    FSTP float ptr [0x02dc9468]         ; 0052ce43 | DAT_02dc9468
    FLD float ptr [0x02dc9468]          ; 0052ce49 | DAT_02dc9468
        ;   Label: LAB_0052ce49
    FLD1                                ; 0052ce4f
    FCOMPP                              ; 0052ce51
    FNSTSW AX                           ; 0052ce53
    SAHF                                ; 0052ce55
    JNC 0x0052cc50                      ; 0052ce56
        ;   XREF to: 0052cc50 (CONDITIONAL_JUMP)  ; LAB_0052cc50
    MOV dword ptr [0x02dc9468],0x3f800000 ; 0052ce5c | DAT_02dc9468
    JMP 0x0052cc50                      ; 0052ce66
        ;   XREF to: 0052cc50 (UNCONDITIONAL_JUMP)  ; LAB_0052cc50
    LEA ECX,[EDX + 0xfffffd00]          ; 0052ce6b
        ;   Label: LAB_0052ce6b
    MOV dword ptr [ESP + 0x94],ECX      ; 0052ce71
    CMP ECX,0x1                         ; 0052ce78
    JGE 0x0052ce88                      ; 0052ce7b
        ;   XREF to: 0052ce88 (CONDITIONAL_JUMP)  ; LAB_0052ce88
    MOV dword ptr [ESP + 0x94],0x1      ; 0052ce7d
    LEA EAX,[ESP + 0x8c]                ; 0052ce88
        ;   Label: LAB_0052ce88
    PUSH EAX                            ; 0052ce8f
    PUSH 0x1fb8508                      ; 0052ce90
    LEA ESI,[ESP + 0x124]               ; 0052ce95
    LEA EDI,[ESP + 0xe8]                ; 0052ce9c
    CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0 ; 0052cea3
        ;   XREF to: 004411b0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0()
    LEA ESI,[ESP + 0x124]               ; 0052cea8
    ADD ESP,0x8                         ; 0052ceaf
    MOVSD ES:EDI,ESI                    ; 0052ceb2
    MOVSD ES:EDI,ESI                    ; 0052ceb3
    MOVSD ES:EDI,ESI                    ; 0052ceb4
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0052ceb5
    MOV dword ptr [ESP + 0x15c],EAX     ; 0052cebc
    FILD dword ptr [ESP + 0x15c]        ; 0052cec3
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0052ceca
    FLD double ptr [0x005949d6]         ; 0052ced1 | DAT_005949d6
    FXCH                                ; 0052ced7
    FMUL ST1                            ; 0052ced9
    MOV dword ptr [ESP + 0x15c],EAX     ; 0052cedb
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0052cee2
    FILD dword ptr [ESP + 0x15c]        ; 0052cee9
    MOV dword ptr [ESP + 0x15c],EAX     ; 0052cef0
    FMUL ST2                            ; 0052cef7
    FILD dword ptr [ESP + 0x15c]        ; 0052cef9
    FMULP ST3                           ; 0052cf00
    FXCH                                ; 0052cf02
    FST float ptr [ESP + 0xec]          ; 0052cf04
    FXCH                                ; 0052cf0b
    FST float ptr [ESP + 0xf0]          ; 0052cf0d
    FSUB float ptr [ESP + 0xa8]         ; 0052cf14
    FXCH                                ; 0052cf1b
    FSUB float ptr [ESP + 0xa4]         ; 0052cf1d
    FXCH                                ; 0052cf24
    FST float ptr [ESP + 0xd8]          ; 0052cf26
    FMUL float ptr [ESP + 0xd8]         ; 0052cf2d
    FXCH                                ; 0052cf34
    FST float ptr [ESP + 0xd4]          ; 0052cf36
    FMUL float ptr [ESP + 0xd4]         ; 0052cf3d
    FXCH ST2                            ; 0052cf44
    FST float ptr [ESP + 0xf4]          ; 0052cf46
    FSUB float ptr [ESP + 0xac]         ; 0052cf4d
    FXCH ST2                            ; 0052cf54
    FADDP                               ; 0052cf56
    FXCH                                ; 0052cf58
    FST float ptr [ESP + 0xdc]          ; 0052cf5a
    FMUL float ptr [ESP + 0xdc]         ; 0052cf61
    FADDP                               ; 0052cf68
    FSQRT                               ; 0052cf6a
    FST double ptr [ESP]                ; 0052cf6c
    FCOMP double ptr [0x005949f6]       ; 0052cf6f | DAT_005949f6
    FNSTSW AX                           ; 0052cf75
    SAHF                                ; 0052cf77
    JBE 0x0052cf91                      ; 0052cf78
        ;   XREF to: 0052cf91 (CONDITIONAL_JUMP)  ; LAB_0052cf91
    FLD double ptr [ESP]                ; 0052cf7a
    FADD double ptr [0x005949fe]        ; 0052cf7d | DAT_005949fe
    FMUL double ptr [0x005949de]        ; 0052cf83 | DAT_005949de
    FADD float ptr [ESP + 0x10]         ; 0052cf89
    FSTP float ptr [ESP + 0x10]         ; 0052cf8d
    LEA EAX,[ESP + 0xec]                ; 0052cf91
        ;   Label: LAB_0052cf91
    FLD1                                ; 0052cf98
    PUSH EAX                            ; 0052cf9a
    MOV EAX,[0x005be368]                ; 0052cf9b | DAT_005be368
    FADD float ptr [ESP + 0xf4]         ; 0052cfa0
    PUSH EAX                            ; 0052cfa7 | DAT_01e57284
    FSTP float ptr [ESP + 0xf8]         ; 0052cfa8
    CALL FUN_0050f910                   ; 0052cfaf
        ;   XREF to: 0050f910 (UNCONDITIONAL_CALL)  ; undefined FUN_0050f910()
    MOV dword ptr [ESP + 0x164],EAX     ; 0052cfb4
    FLD float ptr [ESP + 0x164]         ; 0052cfbb
    ADD ESP,0x8                         ; 0052cfc2
    FSUB float ptr [ESP + 0xf0]         ; 0052cfc5
    FST double ptr [ESP + 0x8]          ; 0052cfcc
    FCOMP double ptr [0x00594a06]       ; 0052cfd0 | DAT_00594a06
    FNSTSW AX                           ; 0052cfd6
    SAHF                                ; 0052cfd8
    JBE 0x0052cdae                      ; 0052cfd9
        ;   XREF to: 0052cdae (CONDITIONAL_JUMP)  ; LAB_0052cdae
    FLD double ptr [ESP + 0x8]          ; 0052cfdf
    FADD double ptr [0x00594a0e]        ; 0052cfe3 | DAT_00594a0e
    FMUL double ptr [0x005949e6]        ; 0052cfe9 | DAT_005949e6
    FADD float ptr [ESP + 0x10]         ; 0052cfef
    FSTP float ptr [ESP + 0x10]         ; 0052cff3
    JMP 0x0052cdae                      ; 0052cff7
        ;   XREF to: 0052cdae (UNCONDITIONAL_JUMP)  ; LAB_0052cdae
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0052cffc
        ;   Label: LAB_0052cffc
    MOV [0x02dc945c],EAX                ; 0052d003 | DAT_02dc945c
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0052d008
    MOV [0x02dc9460],EAX                ; 0052d00f | DAT_02dc9460
    MOV EAX,dword ptr [ESP + 0xac]      ; 0052d014
    MOV [0x02dc9464],EAX                ; 0052d01b | DAT_02dc9464
    MOV ESP,EBP                         ; 0052d020
    POP EBP                             ; 0052d022
    POP EDI                             ; 0052d023
    POP ESI                             ; 0052d024
    POP EBX                             ; 0052d025
    RET                                 ; 0052d026

