; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_trash_cpp_FUN_00576ab0(CDemonActor *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005ecd2e
;   undefined4 DAT_005ecd32
;   undefined4 DAT_005ecd36
;   undefined4 DAT_005ecd3a
;   undefined4 DAT_005ecd3e
;   undefined4 DAT_005ecd46
;   undefined4 DAT_005ecd4e
;   undefined4 s_s_333_CTrigger_005ecd55+1
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;   core_actor.cpp_FUN_00408d30
;   core_actor.cpp_FUN_0040cf60
;   core_hero.cpp_isAnyHeroWithinRadius_FUN_004ce100
;   core_setcolid.cpp_FUN_00534ea0
;   core_setcolid.cpp_FUN_00537030
;   core_xform.cpp_FUN_00591c10
;   core_xform.cpp_FUN_00591de0
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576ab0
        ;   Label: core_trash.cpp_FUN_00576ab0
    PUSH ESI                            ; 00576ab1
    PUSH EDI                            ; 00576ab2
    PUSH EBP                            ; 00576ab3
    MOV EBP,ESP                         ; 00576ab4
    SUB ESP,0x260                       ; 00576ab6
    AND ESP,0xfffffff8                  ; 00576abc
    MOV EBX,dword ptr [EBP + 0x14]      ; 00576abf
    LEA ESI,[EBX + 0x20]                ; 00576ac2
    PUSH 0x42c80000                     ; 00576ac5
    PUSH ESI                            ; 00576aca
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004ce100 ; 00576acb
        ;   XREF to: 004ce100 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_isAnyHeroWithinRadius_FUN_004ce100()
    ADD ESP,0x8                         ; 00576ad0
    TEST EAX,EAX                        ; 00576ad3
    JZ 0x00577437                       ; 00576ad5
        ;   XREF to: 00577437 (CONDITIONAL_JUMP)  ; LAB_00577437
    PUSH 0x3d4ccccd                     ; 00576adb
    PUSH 0xbd4ccccd                     ; 00576ae0
    CALL core_actor.cpp_FUN_0040cf60    ; 00576ae5
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x264],EAX     ; 00576aea
    FLD float ptr [ESP + 0x264]         ; 00576af1
    ADD ESP,0x8                         ; 00576af8
    LEA ESI,[EBX + 0x45c]               ; 00576afb
    PUSH 0x3d4ccccd                     ; 00576b01
    FADD float ptr [ESI]                ; 00576b06
    PUSH 0xbd4ccccd                     ; 00576b08
    FSTP float ptr [ESI]                ; 00576b0d
    CALL core_actor.cpp_FUN_0040cf60    ; 00576b0f
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x264],EAX     ; 00576b14
    FLD float ptr [ESP + 0x264]         ; 00576b1b
    ADD ESP,0x8                         ; 00576b22
    LEA ESI,[EBX + 0x460]               ; 00576b25
    PUSH 0x3d4ccccd                     ; 00576b2b
    FADD float ptr [ESI]                ; 00576b30
    PUSH 0xbd4ccccd                     ; 00576b32
    FSTP float ptr [ESI]                ; 00576b37
    CALL core_actor.cpp_FUN_0040cf60    ; 00576b39
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV EDX,0x40800000                  ; 00576b3e
    LEA ESI,[EBX + 0x464]               ; 00576b43
    MOV dword ptr [ESP + 0x264],EAX     ; 00576b49
    XOR ECX,ECX                         ; 00576b50
    FLD float ptr [ESP + 0x264]         ; 00576b52
    LEA EAX,[ESP + 0x108]               ; 00576b59
    FADD float ptr [ESI]                ; 00576b60
    ADD ESP,0x8                         ; 00576b62
    FSTP float ptr [ESI]                ; 00576b65
    MOV dword ptr [ESP + 0x100],EDX     ; 00576b67
    MOV EDX,dword ptr [0x0061b5a8]      ; 00576b6e | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x104],ECX     ; 00576b74
    ADD EDX,0x15ac70                    ; 00576b7b
    MOV dword ptr [ESP + 0x108],ECX     ; 00576b81
    CMP EDX,EAX                         ; 00576b88
    JZ 0x00576ba6                       ; 00576b8a
        ;   XREF to: 00576ba6 (CONDITIONAL_JUMP)  ; LAB_00576ba6
    MOV dword ptr [EDX],0x40800000      ; 00576b8c
    MOV EAX,dword ptr [ESP + 0x104]     ; 00576b92
    MOV dword ptr [EDX + 0x4],EAX       ; 00576b99
    MOV EAX,dword ptr [ESP + 0x108]     ; 00576b9c
    MOV dword ptr [EDX + 0x8],EAX       ; 00576ba3
    FLD float ptr [EBX + 0x470]         ; 00576ba6
        ;   Label: LAB_00576ba6
    FSUB float ptr [EBP + 0x18]         ; 00576bac
    FST float ptr [EBX + 0x470]         ; 00576baf
    FLDZ                                ; 00576bb5
    FCOMPP                              ; 00576bb7
    FNSTSW AX                           ; 00576bb9
    SAHF                                ; 00576bbb
    JC 0x00576c90                       ; 00576bbc
        ;   XREF to: 00576c90 (CONDITIONAL_JUMP)  ; LAB_00576c90
    MOV EAX,[0x0061b5a8]                ; 00576bc2 | g_CDemonSetPtr
    LEA EDX,[EBX + 0x474]               ; 00576bc7
    ADD EAX,0x15ac70                    ; 00576bcd
    CMP EDX,EAX                         ; 00576bd2
    JZ 0x00576be6                       ; 00576bd4
        ;   XREF to: 00576be6 (CONDITIONAL_JUMP)  ; LAB_00576be6
    MOV ECX,dword ptr [EAX]             ; 00576bd6
    MOV dword ptr [EDX],ECX             ; 00576bd8
    MOV ECX,dword ptr [EAX + 0x4]       ; 00576bda
    MOV dword ptr [EDX + 0x4],ECX       ; 00576bdd
    MOV ECX,dword ptr [EAX + 0x8]       ; 00576be0
    MOV dword ptr [EDX + 0x8],ECX       ; 00576be3
    PUSH 0x41200000                     ; 00576be6
        ;   Label: LAB_00576be6
    PUSH 0xc1200000                     ; 00576beb
    CALL core_actor.cpp_FUN_0040cf60    ; 00576bf0
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x264],EAX     ; 00576bf5
    FLD float ptr [ESP + 0x264]         ; 00576bfc
    ADD ESP,0x8                         ; 00576c03
    PUSH 0x41c80000                     ; 00576c06
    FADD float ptr [EBX + 0x474]        ; 00576c0b
    PUSH 0x41700000                     ; 00576c11
    FSTP float ptr [EBX + 0x474]        ; 00576c16
    CALL core_actor.cpp_FUN_0040cf60    ; 00576c1c
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x264],EAX     ; 00576c21
    FLD float ptr [ESP + 0x264]         ; 00576c28
    ADD ESP,0x8                         ; 00576c2f
    PUSH 0x41200000                     ; 00576c32
    FADD float ptr [EBX + 0x478]        ; 00576c37
    PUSH 0xc1200000                     ; 00576c3d
    FSTP float ptr [EBX + 0x478]        ; 00576c42
    CALL core_actor.cpp_FUN_0040cf60    ; 00576c48
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x264],EAX     ; 00576c4d
    FLD float ptr [ESP + 0x264]         ; 00576c54
    ADD ESP,0x8                         ; 00576c5b
    PUSH 0x41a00000                     ; 00576c5e
    FADD float ptr [EBX + 0x47c]        ; 00576c63
    PUSH 0x40c00000                     ; 00576c69
    FSTP float ptr [EBX + 0x47c]        ; 00576c6e
    CALL core_actor.cpp_FUN_0040cf60    ; 00576c74
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x264],EAX     ; 00576c79
    MOV EAX,dword ptr [ESP + 0x264]     ; 00576c80
    MOV dword ptr [EBX + 0x470],EAX     ; 00576c87
    ADD ESP,0x8                         ; 00576c8d
    LEA EDI,[ESP + 0x130]               ; 00576c90
        ;   Label: LAB_00576c90
    MOV EAX,[0x0061b5a8]                ; 00576c97 | g_CDemonSetPtr
    LEA ESI,[ESP + 0x19c]               ; 00576c9c
    LEA EDX,[EBX + 0x474]               ; 00576ca3
    FLD float ptr [EAX + 0x15ac70]      ; 00576ca9
    FLD float ptr [EAX + 0x15ac74]      ; 00576caf
    FLD float ptr [EAX + 0x15ac78]      ; 00576cb5
    FXCH ST2                            ; 00576cbb
    FSUB float ptr [EDX]                ; 00576cbd
    FXCH                                ; 00576cbf
    FSUB float ptr [EDX + 0x4]          ; 00576cc1
    FXCH ST2                            ; 00576cc4
    FSUB float ptr [EDX + 0x8]          ; 00576cc6
    FXCH                                ; 00576cc9
    FSTP float ptr [ESP + 0x19c]        ; 00576ccb
    FXCH                                ; 00576cd2
    FSTP float ptr [ESP + 0x1a0]        ; 00576cd4
    FSTP float ptr [ESP + 0x1a4]        ; 00576cdb
    MOVSD ES:EDI,ESI                    ; 00576ce2
    MOVSD ES:EDI,ESI                    ; 00576ce3
    MOVSD ES:EDI,ESI                    ; 00576ce4
    FLD float ptr [0x005ecd2e]          ; 00576ce5 | DAT_005ecd2e
    FLD float ptr [ESP + 0x130]         ; 00576ceb
    FMUL ST1                            ; 00576cf2
    FLD float ptr [ESP + 0x134]         ; 00576cf4
    FMUL ST2                            ; 00576cfb
    FLD float ptr [ESP + 0x138]         ; 00576cfd
    FMULP ST3                           ; 00576d04
    LEA EDI,[ESP + 0x118]               ; 00576d06
    LEA ESI,[ESP + 0x1fc]               ; 00576d0d
    FXCH                                ; 00576d14
    FSTP float ptr [ESP + 0x1fc]        ; 00576d16
    FSTP float ptr [ESP + 0x200]        ; 00576d1d
    FSTP float ptr [ESP + 0x204]        ; 00576d24
    MOVSD ES:EDI,ESI                    ; 00576d2b
    MOVSD ES:EDI,ESI                    ; 00576d2c
    MOVSD ES:EDI,ESI                    ; 00576d2d
    LEA EAX,[EBX + 0x45c]               ; 00576d2e
    FLD float ptr [EDX]                 ; 00576d34
    FLD float ptr [EDX + 0x4]           ; 00576d36
    FLD float ptr [EDX + 0x8]           ; 00576d39
    LEA EDI,[ESP + 0x214]               ; 00576d3c
    LEA ESI,[ESP + 0x178]               ; 00576d43
    FXCH ST2                            ; 00576d4a
    FADD float ptr [ESP + 0x118]        ; 00576d4c
    FXCH                                ; 00576d53
    FADD float ptr [ESP + 0x11c]        ; 00576d55
    FXCH ST2                            ; 00576d5c
    FADD float ptr [ESP + 0x120]        ; 00576d5e
    FXCH                                ; 00576d65
    FSTP float ptr [EDX]                ; 00576d67
    FXCH                                ; 00576d69
    FSTP float ptr [EDX + 0x4]          ; 00576d6b
    FSTP float ptr [EDX + 0x8]          ; 00576d6e
    FLD float ptr [EDX]                 ; 00576d71
    FLD float ptr [EDX + 0x4]           ; 00576d73
    FLD float ptr [EDX + 0x8]           ; 00576d76
    FXCH ST2                            ; 00576d79
    FSUB float ptr [EAX]                ; 00576d7b
    FXCH                                ; 00576d7d
    FSUB float ptr [EAX + 0x4]          ; 00576d7f
    FXCH ST2                            ; 00576d82
    FSUB float ptr [EAX + 0x8]          ; 00576d84
    FXCH                                ; 00576d87
    FSTP float ptr [ESP + 0x178]        ; 00576d89
    FXCH                                ; 00576d90
    FSTP float ptr [ESP + 0x17c]        ; 00576d92
    FSTP float ptr [ESP + 0x180]        ; 00576d99
    MOVSD ES:EDI,ESI                    ; 00576da0
    MOVSD ES:EDI,ESI                    ; 00576da1
    MOVSD ES:EDI,ESI                    ; 00576da2
    FLD float ptr [0x005ecd32]          ; 00576da3 | DAT_005ecd32
    FLD float ptr [ESP + 0x214]         ; 00576da9
    FMUL ST1                            ; 00576db0
    FLD float ptr [ESP + 0x218]         ; 00576db2
    FMUL ST2                            ; 00576db9
    FLD float ptr [ESP + 0x21c]         ; 00576dbb
    FMULP ST3                           ; 00576dc2
    LEA EDI,[ESP + 0x1b4]               ; 00576dc4
    LEA ESI,[ESP + 0x1e4]               ; 00576dcb
    FXCH                                ; 00576dd2
    FSTP float ptr [ESP + 0x1e4]        ; 00576dd4
    FSTP float ptr [ESP + 0x1e8]        ; 00576ddb
    FSTP float ptr [ESP + 0x1ec]        ; 00576de2
    MOVSD ES:EDI,ESI                    ; 00576de9
    MOVSD ES:EDI,ESI                    ; 00576dea
    MOVSD ES:EDI,ESI                    ; 00576deb
    FLD float ptr [EAX]                 ; 00576dec
    FLD float ptr [EAX + 0x4]           ; 00576dee
    FLD float ptr [EAX + 0x8]           ; 00576df1
    LEA EDI,[ESP + 0x124]               ; 00576df4
    FXCH ST2                            ; 00576dfb
    FADD float ptr [ESP + 0x1b4]        ; 00576dfd
    FXCH                                ; 00576e04
    FADD float ptr [ESP + 0x1b8]        ; 00576e06
    FXCH ST2                            ; 00576e0d
    FADD float ptr [ESP + 0x1bc]        ; 00576e0f
    FXCH                                ; 00576e16
    FSTP float ptr [EAX]                ; 00576e18
    FXCH                                ; 00576e1a
    FSTP float ptr [EAX + 0x4]          ; 00576e1c
    FSTP float ptr [EAX + 0x8]          ; 00576e1f
    LEA ESI,[EBX + 0x20]                ; 00576e22
    MOVSD ES:EDI,ESI                    ; 00576e25
    MOVSD ES:EDI,ESI                    ; 00576e26
    MOVSD ES:EDI,ESI                    ; 00576e27
    FLD float ptr [EBX + 0x480]         ; 00576e28
    FLD float ptr [EAX]                 ; 00576e2e
    FLD float ptr [EAX + 0x4]           ; 00576e30
    FXCH ST2                            ; 00576e33
    FCHS                                ; 00576e35
    FSTP float ptr [ESP + 0x258]        ; 00576e37
    MOV EDX,dword ptr [ESP + 0x258]     ; 00576e3e
    FLD float ptr [EAX + 0x8]           ; 00576e45
    MOV dword ptr [ESP + 0x194],EDX     ; 00576e48
    LEA EDX,[EBX + 0x444]               ; 00576e4f
    XOR EDI,EDI                         ; 00576e55
    MOV dword ptr [ESP + 0x250],EDX     ; 00576e57
    MOV dword ptr [ESP + 0x190],EDI     ; 00576e5e
    MOV ESI,dword ptr [ESP + 0x250]     ; 00576e65
    MOV dword ptr [ESP + 0x198],EDI     ; 00576e6c
    LEA EDI,[ESP + 0x220]               ; 00576e73
    FXCH                                ; 00576e7a
    FSUB float ptr [ESI]                ; 00576e7c
    FXCH ST2                            ; 00576e7e
    FSUB float ptr [ESI + 0x4]          ; 00576e80
    FXCH                                ; 00576e83
    FSUB float ptr [ESI + 0x8]          ; 00576e85
    FXCH ST2                            ; 00576e88
    FSTP float ptr [ESP + 0x184]        ; 00576e8a
    FSTP float ptr [ESP + 0x188]        ; 00576e91
    LEA ESI,[ESP + 0x184]               ; 00576e98
    FSTP float ptr [ESP + 0x18c]        ; 00576e9f
    MOVSD ES:EDI,ESI                    ; 00576ea6
    MOVSD ES:EDI,ESI                    ; 00576ea7
    MOVSD ES:EDI,ESI                    ; 00576ea8
    LEA EDX,[EBX + 0x468]               ; 00576ea9
    FLD float ptr [ESP + 0x220]         ; 00576eaf
    FMUL float ptr [EDX]                ; 00576eb6
    FLD float ptr [ESP + 0x224]         ; 00576eb8
    FMUL float ptr [EDX]                ; 00576ebf
    FLD float ptr [ESP + 0x228]         ; 00576ec1
    FMUL float ptr [EDX]                ; 00576ec8
    PUSH EAX                            ; 00576eca
    FLD float ptr [ESP + 0x25c]         ; 00576ecb
    LEA EDI,[ESP + 0x170]               ; 00576ed2
    LEA ESI,[ESP + 0x1f4]               ; 00576ed9
    FXCH ST3                            ; 00576ee0
    FSTP float ptr [ESP + 0x1f4]        ; 00576ee2
    FXCH                                ; 00576ee9
    FSTP float ptr [ESP + 0x1f8]        ; 00576eeb
    FSTP float ptr [ESP + 0x1fc]        ; 00576ef2
    MOVSD ES:EDI,ESI                    ; 00576ef9
    MOVSD ES:EDI,ESI                    ; 00576efa
    MOVSD ES:EDI,ESI                    ; 00576efb
    PUSH EBX                            ; 00576efc
    MOV EDX,dword ptr [ESP + 0x174]     ; 00576efd
    LEA ESI,[ESP + 0x240]               ; 00576f04
    LEA EDI,[ESP + 0x114]               ; 00576f0b
    FADD float ptr [ESP + 0x178]        ; 00576f12
    MOV dword ptr [ESP + 0x198],EDX     ; 00576f19
    MOV EDX,dword ptr [ESP + 0x17c]     ; 00576f20
    FSTP float ptr [ESP + 0x19c]        ; 00576f27
    MOV dword ptr [ESP + 0x1a0],EDX     ; 00576f2e
    CALL core_actor.cpp_FUN_00408d30    ; 00576f35
        ;   XREF to: 00408d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d30()
    LEA ESI,[ESP + 0x240]               ; 00576f3a
    ADD ESP,0x8                         ; 00576f41
    MOVSD ES:EDI,ESI                    ; 00576f44
    MOVSD ES:EDI,ESI                    ; 00576f45
    MOVSD ES:EDI,ESI                    ; 00576f46
    FLD float ptr [0x005ecd36]          ; 00576f47 | DAT_005ecd36
    FLD float ptr [ESP + 0x10c]         ; 00576f4d
    FMUL ST1                            ; 00576f54
    FLD float ptr [ESP + 0x110]         ; 00576f56
    FMUL ST2                            ; 00576f5d
    FLD float ptr [ESP + 0x114]         ; 00576f5f
    FMULP ST3                           ; 00576f66
    LEA EDX,[EBX + 0x450]               ; 00576f68
    LEA EDI,[ESP + 0x22c]               ; 00576f6e
    LEA ESI,[ESP + 0x1d8]               ; 00576f75
    FXCH                                ; 00576f7c
    FSTP float ptr [ESP + 0x1d8]        ; 00576f7e
    FSTP float ptr [ESP + 0x1dc]        ; 00576f85
    FSTP float ptr [ESP + 0x1e0]        ; 00576f8c
    MOVSD ES:EDI,ESI                    ; 00576f93
    MOVSD ES:EDI,ESI                    ; 00576f94
    MOVSD ES:EDI,ESI                    ; 00576f95
    FLD float ptr [EBP + 0x18]          ; 00576f96
    FLD float ptr [ESP + 0x16c]         ; 00576f99
    FMUL ST1                            ; 00576fa0
    FLD float ptr [ESP + 0x194]         ; 00576fa2
    FMUL ST2                            ; 00576fa9
    FLD float ptr [ESP + 0x174]         ; 00576fab
    FMULP ST3                           ; 00576fb2
    FLD float ptr [0x005ecd3a]          ; 00576fb4 | DAT_005ecd3a
    FLD float ptr [EDX]                 ; 00576fba
    FMUL ST1                            ; 00576fbc
    FLD float ptr [EDX + 0x4]           ; 00576fbe
    FMUL ST2                            ; 00576fc1
    FLD float ptr [EDX + 0x8]           ; 00576fc3
    FMULP ST3                           ; 00576fc6
    LEA EDI,[ESP + 0x148]               ; 00576fc8
    LEA ESI,[ESP + 0x160]               ; 00576fcf
    MOV EAX,dword ptr [ESP + 0x250]     ; 00576fd6
    FXCH ST4                            ; 00576fdd
    FSTP float ptr [ESP + 0x160]        ; 00576fdf
    FXCH ST2                            ; 00576fe6
    FSTP float ptr [ESP + 0x164]        ; 00576fe8
    FXCH ST3                            ; 00576fef
    FSTP float ptr [ESP + 0x168]        ; 00576ff1
    FSTP float ptr [EDX]                ; 00576ff8
    FSTP float ptr [EDX + 0x4]          ; 00576ffa
    FSTP float ptr [EDX + 0x8]          ; 00576ffd
    FLD float ptr [EDX]                 ; 00577000
    FLD float ptr [EDX + 0x4]           ; 00577002
    FLD float ptr [EDX + 0x8]           ; 00577005
    FXCH ST2                            ; 00577008
    FADD float ptr [ESP + 0x22c]        ; 0057700a
    FXCH                                ; 00577011
    FADD float ptr [ESP + 0x230]        ; 00577013
    FXCH ST2                            ; 0057701a
    FADD float ptr [ESP + 0x234]        ; 0057701c
    FXCH                                ; 00577023
    FSTP float ptr [EDX]                ; 00577025
    FXCH                                ; 00577027
    FSTP float ptr [EDX + 0x4]          ; 00577029
    FSTP float ptr [EDX + 0x8]          ; 0057702c
    MOVSD ES:EDI,ESI                    ; 0057702f
    MOVSD ES:EDI,ESI                    ; 00577030
    MOVSD ES:EDI,ESI                    ; 00577031
    FLD float ptr [EAX]                 ; 00577032
    FLD float ptr [EAX + 0x4]           ; 00577034
    FLD float ptr [EAX + 0x8]           ; 00577037
    FXCH ST2                            ; 0057703a
    FADD float ptr [ESP + 0x148]        ; 0057703c
    FXCH                                ; 00577043
    FADD float ptr [ESP + 0x14c]        ; 00577045
    FXCH ST2                            ; 0057704c
    FADD float ptr [ESP + 0x150]        ; 0057704e
    FXCH                                ; 00577055
    FSTP float ptr [EAX]                ; 00577057
    FXCH                                ; 00577059
    FSTP float ptr [EAX + 0x4]          ; 0057705b
    FSTP float ptr [EAX + 0x8]          ; 0057705e
    FLD float ptr [EDX + 0x4]           ; 00577061
    FMUL ST0                            ; 00577064
    FLD float ptr [EDX]                 ; 00577066
    FMUL ST0                            ; 00577068
    FADDP                               ; 0057706a
    FLD float ptr [EDX + 0x8]           ; 0057706c
    FMUL ST0                            ; 0057706f
    FADDP                               ; 00577071
    FSQRT                               ; 00577073
    FMUL float ptr [0x005ecd3e]         ; 00577075 | DAT_005ecd3e
    FST float ptr [ESP + 0x8]           ; 0057707b
    FLD1                                ; 0057707f
    FCOMPP                              ; 00577081
    FNSTSW AX                           ; 00577083
    SAHF                                ; 00577085
    JNC 0x005770aa                      ; 00577086
        ;   XREF to: 005770aa (CONDITIONAL_JUMP)  ; LAB_005770aa
    FLD1                                ; 00577088
    FLD float ptr [EDX]                 ; 0057708a
    FXCH                                ; 0057708c
    FDIV float ptr [ESP + 0x8]          ; 0057708e
    FXCH                                ; 00577092
    FMUL ST1                            ; 00577094
    FLD float ptr [EDX + 0x4]           ; 00577096
    FMUL ST2                            ; 00577099
    FLD float ptr [EDX + 0x8]           ; 0057709b
    FMULP ST3                           ; 0057709e
    FXCH                                ; 005770a0
    FSTP float ptr [EDX]                ; 005770a2
    FSTP float ptr [EDX + 0x4]          ; 005770a4
    FSTP float ptr [EDX + 0x8]          ; 005770a7
    LEA EAX,[EBX + 0x444]               ; 005770aa
        ;   Label: LAB_005770aa
    FLD float ptr [EBP + 0x18]          ; 005770b0
    FLD float ptr [EAX]                 ; 005770b3
    FMUL ST1                            ; 005770b5
    FLD float ptr [EAX + 0x4]           ; 005770b7
    FMUL ST2                            ; 005770ba
    FLD float ptr [EAX + 0x8]           ; 005770bc
    FMUL ST3                            ; 005770bf
    LEA EDI,[ESP + 0x13c]               ; 005770c1
    LEA ESI,[ESP + 0xd0]                ; 005770c8
    LEA EAX,[EBX + 0x450]               ; 005770cf
    FXCH ST2                            ; 005770d5
    FSTP float ptr [ESP + 0xd0]         ; 005770d7
    FSTP float ptr [ESP + 0xd4]         ; 005770de
    FSTP float ptr [ESP + 0xd8]         ; 005770e5
    MOVSD ES:EDI,ESI                    ; 005770ec
    MOVSD ES:EDI,ESI                    ; 005770ed
    MOVSD ES:EDI,ESI                    ; 005770ee
    FLD float ptr [EAX]                 ; 005770ef
    FMUL ST1                            ; 005770f1
    FLD float ptr [EAX + 0x4]           ; 005770f3
    FMUL ST2                            ; 005770f6
    FLD float ptr [EAX + 0x8]           ; 005770f8
    FMULP ST3                           ; 005770fb
    LEA EDI,[ESP + 0xe8]                ; 005770fd
    LEA ESI,[ESP + 0x1cc]               ; 00577104
    FXCH                                ; 0057710b
    FSTP float ptr [ESP + 0x1cc]        ; 0057710d
    FSTP float ptr [ESP + 0x1d0]        ; 00577114
    FSTP float ptr [ESP + 0x1d4]        ; 0057711b
    MOVSD ES:EDI,ESI                    ; 00577122
    MOVSD ES:EDI,ESI                    ; 00577123
    MOVSD ES:EDI,ESI                    ; 00577124
    PUSH dword ptr [EBX + 0x440]        ; 00577125
    PUSH dword ptr [EBX + 0x43c]        ; 0057712b
    PUSH dword ptr [EBX + 0x46c]        ; 00577131
    PUSH dword ptr [ESP + 0x150]        ; 00577137
    PUSH dword ptr [ESP + 0x14c]        ; 0057713e
    PUSH dword ptr [EBX + 0x28]         ; 00577145
    MOV ECX,dword ptr [0x0061b5a8]      ; 00577148 | g_CDemonSetPtr
    PUSH dword ptr [EBX + 0x20]         ; 0057714e
    PUSH ECX                            ; 00577151
    CALL core_setcolid.cpp_FUN_00537030 ; 00577152
        ;   XREF to: 00537030 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00537030()
    MOV dword ptr [ESP + 0x27c],EAX     ; 00577157
    XOR EDI,EDI                         ; 0057715e
    FLD float ptr [ESP + 0x27c]         ; 00577160
    ADD ESP,0x20                        ; 00577167
    FLDZ                                ; 0057716a
    FXCH                                ; 0057716c
    FST float ptr [ESP + 0xc]           ; 0057716e
    FSTP double ptr [ESP]               ; 00577172
    FCOMP double ptr [ESP]              ; 00577175
    FNSTSW AX                           ; 00577178
    SAHF                                ; 0057717a
    JA 0x005771c2                       ; 0057717b
        ;   XREF to: 005771c2 (CONDITIONAL_JUMP)  ; LAB_005771c2
    FLD1                                ; 0057717d
    FCOMP double ptr [ESP]              ; 0057717f
    FNSTSW AX                           ; 00577182
    SAHF                                ; 00577184
    JBE 0x005771c2                      ; 00577185
        ;   XREF to: 005771c2 (CONDITIONAL_JUMP)  ; LAB_005771c2
    FLD float ptr [ESP + 0xc]           ; 00577187
    FLD float ptr [ESP + 0x13c]         ; 0057718b
    FMUL ST1                            ; 00577192
    FLD float ptr [ESP + 0x140]         ; 00577194
    FMUL ST2                            ; 0057719b
    FLD float ptr [ESP + 0x144]         ; 0057719d
    FMULP ST3                           ; 005771a4
    MOV EDI,0x1                         ; 005771a6
    FSTP float ptr [ESP + 0x140]        ; 005771ab
    FXCH                                ; 005771b2
    FSTP float ptr [ESP + 0x144]        ; 005771b4
    FSTP float ptr [ESP + 0x13c]        ; 005771bb
    LEA ESI,[EBX + 0x20]                ; 005771c2
        ;   Label: LAB_005771c2
    FLD float ptr [ESI]                 ; 005771c5
    FLD float ptr [ESI + 0x4]           ; 005771c7
    FLD float ptr [ESI + 0x8]           ; 005771ca
    FXCH ST2                            ; 005771cd
    FADD float ptr [ESP + 0x13c]        ; 005771cf
    FXCH                                ; 005771d6
    FADD float ptr [ESP + 0x140]        ; 005771d8
    FXCH ST2                            ; 005771df
    FADD float ptr [ESP + 0x144]        ; 005771e1
    FXCH                                ; 005771e8
    FSTP float ptr [ESI]                ; 005771ea
    FXCH                                ; 005771ec
    FSTP float ptr [ESI + 0x4]          ; 005771ee
    FSTP float ptr [ESI + 0x8]          ; 005771f1
    FLD float ptr [EBX + 0x46c]         ; 005771f4
    FMUL double ptr [0x005ecd46]        ; 005771fa | DAT_005ecd46
    SUB ESP,0x4                         ; 00577200
    FSTP float ptr [ESP]                ; 00577203
    PUSH ESI                            ; 00577206
    MOV EAX,[0x0061b5a8]                ; 00577207 | g_CDemonSetPtr
    PUSH EAX                            ; 0057720c
    CALL core_setcolid.cpp_FUN_00534ea0 ; 0057720d
        ;   XREF to: 00534ea0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00534ea0()
    MOV dword ptr [ESP + 0x268],EAX     ; 00577212
    FLD float ptr [ESP + 0x268]         ; 00577219
    ADD ESP,0xc                         ; 00577220
    FLD float ptr [EBX + 0x24]          ; 00577223
    FXCH                                ; 00577226
    FSTP float ptr [ESP + 0x244]        ; 00577228
    FCOMP float ptr [ESP + 0x244]       ; 0057722f
    FNSTSW AX                           ; 00577236
    SAHF                                ; 00577238
    JNC 0x00577466                      ; 00577239
        ;   XREF to: 00577466 (CONDITIONAL_JUMP)  ; LAB_00577466
    FLD float ptr [EBX + 0x46c]         ; 0057723f
    FMUL double ptr [0x005ecd4e]        ; 00577245 | DAT_005ecd4e
    MOV EAX,dword ptr [ESP + 0x244]     ; 0057724b
    FADD float ptr [ESP + 0x128]        ; 00577252
    MOV dword ptr [EBX + 0x24],EAX      ; 00577259
    FLD float ptr [EBX + 0x24]          ; 0057725c
    FCOMPP                              ; 0057725f
    FNSTSW AX                           ; 00577261
    SAHF                                ; 00577263
    JBE 0x00577283                      ; 00577264
        ;   XREF to: 00577283 (CONDITIONAL_JUMP)  ; LAB_00577283
    MOV EAX,dword ptr [ESP + 0x124]     ; 00577266
    MOV dword ptr [ESI],EAX             ; 0057726d
    MOV EAX,dword ptr [ESP + 0x128]     ; 0057726f
    MOV dword ptr [ESI + 0x4],EAX       ; 00577276
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00577279
    MOV dword ptr [ESI + 0x8],EAX       ; 00577280
    LEA EAX,[EBX + 0x450]               ; 00577283
        ;   Label: LAB_00577283
    FLD float ptr [0x005ecd56]          ; 00577289 | s_s_333_CTrigger_005ecd55+1
    FLD float ptr [EAX]                 ; 0057728f
    FMUL ST1                            ; 00577291
    FLD float ptr [EAX + 0x4]           ; 00577293
    FMUL ST2                            ; 00577296
    FLD float ptr [EAX + 0x8]           ; 00577298
    FMULP ST3                           ; 0057729b
    FXCH                                ; 0057729d
    FSTP float ptr [EAX]                ; 0057729f
    FSTP float ptr [EAX + 0x4]          ; 005772a1
    FSTP float ptr [EAX + 0x8]          ; 005772a4
    LEA EAX,[EBX + 0x20]                ; 005772a7
        ;   Label: LAB_005772a7
    LEA EDI,[ESP + 0xdc]                ; 005772aa
    LEA ESI,[ESP + 0x1c0]               ; 005772b1
    FLD float ptr [EAX]                 ; 005772b8
    FLD float ptr [EAX + 0x4]           ; 005772ba
    FLD float ptr [EAX + 0x8]           ; 005772bd
    FXCH ST2                            ; 005772c0
    FSUB float ptr [ESP + 0x124]        ; 005772c2
    FXCH                                ; 005772c9
    FSUB float ptr [ESP + 0x128]        ; 005772cb
    FXCH ST2                            ; 005772d2
    FSUB float ptr [ESP + 0x12c]        ; 005772d4
    FXCH                                ; 005772db
    FSTP float ptr [ESP + 0x1c0]        ; 005772dd
    FXCH                                ; 005772e4
    FSTP float ptr [ESP + 0x1c4]        ; 005772e6
    FSTP float ptr [ESP + 0x1c8]        ; 005772ed
    MOVSD ES:EDI,ESI                    ; 005772f4
    MOVSD ES:EDI,ESI                    ; 005772f5
    MOVSD ES:EDI,ESI                    ; 005772f6
    FLD1                                ; 005772f7
    FLD float ptr [ESP + 0xdc]          ; 005772f9
    FXCH                                ; 00577300
    FDIV float ptr [EBP + 0x18]         ; 00577302
    FXCH                                ; 00577305
    FMUL ST1                            ; 00577307
    FLD float ptr [ESP + 0xe0]          ; 00577309
    FMUL ST2                            ; 00577310
    FLD float ptr [ESP + 0xe4]          ; 00577312
    FMULP ST3                           ; 00577319
    LEA EDX,[EBX + 0x444]               ; 0057731b
    LEA EAX,[ESP + 0x1a8]               ; 00577321
    LEA EDI,[ESP + 0x1a8]               ; 00577328
    LEA ESI,[ESP + 0xf4]                ; 0057732f
    FXCH                                ; 00577336
    FSTP float ptr [ESP + 0xf4]         ; 00577338
    FSTP float ptr [ESP + 0xf8]         ; 0057733f
    FSTP float ptr [ESP + 0xfc]         ; 00577346
    MOVSD ES:EDI,ESI                    ; 0057734d
    MOVSD ES:EDI,ESI                    ; 0057734e
    MOVSD ES:EDI,ESI                    ; 0057734f
    CMP EDX,EAX                         ; 00577350
    JZ 0x00577371                       ; 00577352
        ;   XREF to: 00577371 (CONDITIONAL_JUMP)  ; LAB_00577371
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 00577354
    MOV dword ptr [EDX],EAX             ; 0057735b
    MOV EAX,dword ptr [ESP + 0x1ac]     ; 0057735d
    MOV dword ptr [EDX + 0x4],EAX       ; 00577364
    MOV EAX,dword ptr [ESP + 0x1b0]     ; 00577367
    MOV dword ptr [EDX + 0x8],EAX       ; 0057736e
    LEA EAX,[EBX + 0x30]                ; 00577371
        ;   Label: LAB_00577371
    PUSH EAX                            ; 00577374
    PUSH 0x265370c                      ; 00577375
    MOV dword ptr [ESP + 0x250],EAX     ; 0057737a
    LEA EAX,[ESP + 0x18]                ; 00577381
    PUSH EAX                            ; 00577385
    CALL core_xform.cpp_FUN_00591c10    ; 00577386
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    ADD ESP,0xc                         ; 0057738b
    LEA EAX,[ESP + 0xe8]                ; 0057738e
    PUSH EAX                            ; 00577395
    PUSH 0x265370c                      ; 00577396
    LEA EAX,[ESP + 0x78]                ; 0057739b
    PUSH EAX                            ; 0057739f
    CALL core_xform.cpp_FUN_00591c10    ; 005773a0
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    ADD ESP,0xc                         ; 005773a5
    LEA EAX,[ESP + 0x10]                ; 005773a8
    PUSH EAX                            ; 005773ac
    LEA EAX,[ESP + 0x74]                ; 005773ad
    PUSH EAX                            ; 005773b1
    LEA ESI,[ESP + 0xa8]                ; 005773b2
    LEA EDI,[ESP + 0x48]                ; 005773b9
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 005773bd
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 005773c2
    LEA ESI,[ESP + 0xa8]                ; 005773c7
    ADD ESP,0x8                         ; 005773ce
    LEA EAX,[ESP + 0x40]                ; 005773d1
    MOVSD.REP ES:EDI,ESI                ; 005773d5
    PUSH EAX                            ; 005773d7
    LEA ESI,[ESP + 0x20c]               ; 005773d8
    LEA EDI,[ESP + 0x158]               ; 005773df
    CALL core_xform.cpp_FUN_00591de0    ; 005773e6
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591de0()
    LEA ESI,[ESP + 0x20c]               ; 005773eb
    ADD ESP,0x4                         ; 005773f2
    LEA EAX,[ESP + 0x154]               ; 005773f5
    MOV ECX,dword ptr [ESP + 0x248]     ; 005773fc
    MOVSD ES:EDI,ESI                    ; 00577403
    MOVSD ES:EDI,ESI                    ; 00577404
    MOVSD ES:EDI,ESI                    ; 00577405
    CMP EAX,ECX                         ; 00577406
    JZ 0x00577427                       ; 00577408
        ;   XREF to: 00577427 (CONDITIONAL_JUMP)  ; LAB_00577427
    MOV EAX,dword ptr [ESP + 0x154]     ; 0057740a
    MOV dword ptr [ECX],EAX             ; 00577411
    MOV EAX,dword ptr [ESP + 0x158]     ; 00577413
    MOV dword ptr [ECX + 0x4],EAX       ; 0057741a
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0057741d
    MOV dword ptr [ECX + 0x8],EAX       ; 00577424
    PUSH EBX                            ; 00577427
        ;   Label: LAB_00577427
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 00577428
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0057742d
    MOV ESP,EBP                         ; 00577430
        ;   Label: LAB_00577430
    POP EBP                             ; 00577432
    POP EDI                             ; 00577433
    POP ESI                             ; 00577434
    POP EBX                             ; 00577435
    RET                                 ; 00577436
    ADD EBX,0x430                       ; 00577437
        ;   Label: LAB_00577437
    PUSH 0x42c80000                     ; 0057743d
    PUSH EBX                            ; 00577442
    CALL core_hero.cpp_isAnyHeroWithinRadius_FUN_004ce100 ; 00577443
        ;   XREF to: 004ce100 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_isAnyHeroWithinRadius_FUN_004ce100()
    ADD ESP,0x8                         ; 00577448
    TEST EAX,EAX                        ; 0057744b
    JNZ 0x00577430                      ; 0057744d
        ;   XREF to: 00577430 (CONDITIONAL_JUMP)  ; LAB_00577430
    MOV EAX,dword ptr [EBX]             ; 0057744f
    MOV dword ptr [ESI],EAX             ; 00577451
    MOV EAX,dword ptr [EBX + 0x4]       ; 00577453
    MOV dword ptr [ESI + 0x4],EAX       ; 00577456
    MOV EAX,dword ptr [EBX + 0x8]       ; 00577459
    MOV dword ptr [ESI + 0x8],EAX       ; 0057745c
    MOV ESP,EBP                         ; 0057745f
    POP EBP                             ; 00577461
    POP EDI                             ; 00577462
    POP ESI                             ; 00577463
    POP EBX                             ; 00577464
    RET                                 ; 00577465
    TEST EDI,EDI                        ; 00577466
        ;   Label: LAB_00577466
    JNZ 0x00577283                      ; 00577468
        ;   XREF to: 00577283 (CONDITIONAL_JUMP)  ; LAB_00577283
    JMP 0x005772a7                      ; 0057746e
        ;   XREF to: 005772a7 (UNCONDITIONAL_JUMP)  ; LAB_005772a7

