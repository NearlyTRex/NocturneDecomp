; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_updateListeners_FUN_00558d50(void)
;
; Local Variables:
; undefined8       Stack[-0x1e0]:8  local_1e0
; undefined8       Stack[-0x1d8]:8  local_1d8
; undefined8       Stack[-0x1d0]:8  local_1d0
; undefined8       Stack[-0x1c8]:8  local_1c8
; undefined8       Stack[-0x1c0]:8  local_1c0
; undefined4       Stack[-0x1b8]:4  local_1b8
; undefined        Stack[-0x1b4]:1  local_1b4
; undefined        Stack[-0x18c]:1  local_18c
; undefined        Stack[-0x164]:1  local_164
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined        Stack[-0x100]:1  local_100
; undefined        Stack[-0xf4]:1  local_f4
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined        Stack[-0xd0]:1  local_d0
; undefined        Stack[-0xc4]:1  local_c4
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined        Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_sound.cpp_FUN_0055a1d0 at 0055a20e
;   core_sound.cpp_FUN_0055a3c0 at 0055a3ff
;
; Referenced Globals:
;   TerminatedCString s_castle_005ea6f4
;   undefined4 DAT_005ea6fc
;   undefined4 DAT_005ea704
;   undefined4 DAT_005ea70c
;   undefined4 DAT_005ea714
;   undefined4 DAT_005ea71c
;   undefined4 DAT_005ea720
;   undefined4 DAT_005ea724
;   undefined4 DAT_005ea72c
;   undefined4 DAT_005ea734
;   undefined4 DAT_005ea73c
;   undefined4 DAT_005ea744
;   CGame* g_CGamePtr = 01cb6900
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CDemonLightInstance.field4_0x4
;   ... and 16 more
;
; Called Functions:
;   core_dcamera.cpp_FUN_0043c6b0
;   core_dcamera.cpp_FUN_0043c780
;   core_dirmat.cpp_FUN_00449530
;   core_setcolid.cpp_FUN_00535cf0
;   crt_string.c__strnicmp_FUN_005b8da0
;   sound_sndmain.cpp_FUN_00551490
;   sound_sndmain.cpp_FUN_005514f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558d50
        ;   Label: core_sound.cpp_updateListeners_FUN_00558d50
    PUSH ESI                            ; 00558d51
    PUSH EDI                            ; 00558d52
    PUSH EBP                            ; 00558d53
    MOV EBP,ESP                         ; 00558d54
    SUB ESP,0x1b4                       ; 00558d56
    AND ESP,0xfffffff8                  ; 00558d5c
    MOV EAX,[0x00616494]                ; 00558d5f | g_CGamePtr
    CMP dword ptr [EAX + 0x25c],0x0     ; 00558d64 | g_CGameInstance.field604_0x25c
    JNZ 0x00558ff2                      ; 00558d6b
        ;   XREF to: 00558ff2 (CONDITIONAL_JUMP)  ; LAB_00558ff2
    LEA EDI,[ESP + 0xd4]                ; 00558d71
    MOV ESI,0x1fc783c                   ; 00558d78
    MOVSD ES:EDI,ESI                    ; 00558d7d | g_CDemonCameraInstance.field4_0x4
    MOVSD ES:EDI,ESI                    ; 00558d7e | g_CDemonCameraInstance.field8_0x8
    MOVSD ES:EDI,ESI                    ; 00558d7f | g_CDemonCameraInstance.field12_0xc
    LEA EDI,[ESP + 0x17c]               ; 00558d80
    LEA ESI,[ESP + 0xd4]                ; 00558d87
    LEA EAX,[ESP + 0x17c]               ; 00558d8e
    LEA EDX,[ESP + 0x170]               ; 00558d95
    MOVSD ES:EDI,ESI                    ; 00558d9c
    MOVSD ES:EDI,ESI                    ; 00558d9d
    MOVSD ES:EDI,ESI                    ; 00558d9e
    CMP EDX,EAX                         ; 00558d9f
    JZ 0x00558dcd                       ; 00558da1
        ;   XREF to: 00558dcd (CONDITIONAL_JUMP)  ; LAB_00558dcd
    MOV EAX,dword ptr [ESP + 0x17c]     ; 00558da3
    MOV dword ptr [ESP + 0x170],EAX     ; 00558daa
    MOV EAX,dword ptr [ESP + 0x180]     ; 00558db1
    MOV dword ptr [ESP + 0x174],EAX     ; 00558db8
    MOV EAX,dword ptr [ESP + 0x184]     ; 00558dbf
    MOV dword ptr [ESP + 0x178],EAX     ; 00558dc6
    FLD float ptr [ESP + 0x170]         ; 00558dcd
        ;   Label: LAB_00558dcd
    FLD float ptr [ESP + 0x174]         ; 00558dd4
    FLD float ptr [ESP + 0x178]         ; 00558ddb
    LEA EDI,[ESP + 0x158]               ; 00558de2
    LEA ESI,[ESP + 0xec]                ; 00558de9
    FXCH ST2                            ; 00558df0
    FSUB float ptr [0x0264b29c]         ; 00558df2 | DAT_0264b29c
    FXCH                                ; 00558df8
    FSUB float ptr [0x0264b2a0]         ; 00558dfa | DAT_0264b2a0
    FXCH ST2                            ; 00558e00
    FSUB float ptr [0x0264b2a4]         ; 00558e02 | DAT_0264b2a4
    FXCH                                ; 00558e08
    FSTP float ptr [ESP + 0xec]         ; 00558e0a
    FXCH                                ; 00558e11
    FSTP float ptr [ESP + 0xf0]         ; 00558e13
    FSTP float ptr [ESP + 0xf4]         ; 00558e1a
    MOVSD ES:EDI,ESI                    ; 00558e21
    MOVSD ES:EDI,ESI                    ; 00558e22
    MOVSD ES:EDI,ESI                    ; 00558e23
    FLD float ptr [ESP + 0x15c]         ; 00558e24
    FMUL ST0                            ; 00558e2b
    FLD float ptr [ESP + 0x158]         ; 00558e2d
    FMUL ST0                            ; 00558e34
    FADDP                               ; 00558e36
    FLD float ptr [ESP + 0x160]         ; 00558e38
    FMUL ST0                            ; 00558e3f
    FADDP                               ; 00558e41
    FSQRT                               ; 00558e43
    FCOMP double ptr [0x005ea6fc]       ; 00558e45 | DAT_005ea6fc
    FNSTSW AX                           ; 00558e4b
    SAHF                                ; 00558e4d
    JC 0x00558feb                       ; 00558e4e
        ;   XREF to: 00558feb (CONDITIONAL_JUMP)  ; LAB_00558feb
    MOV ECX,0xa                         ; 00558e54
    LEA EDI,[ESP + 0x14]                ; 00558e59
    MOV ESI,0x1fc7848                   ; 00558e5d
    MOVSD.REP ES:EDI,ESI                ; 00558e62 | g_CDemonCameraInstance.field16_0x10 | g_CDemonCameraInstance.field20_0x14
    MOV ECX,0xa                         ; 00558e64
    LEA EDI,[ESP + 0x64]                ; 00558e69
    LEA ESI,[ESP + 0x14]                ; 00558e6d
    MOVSD.REP ES:EDI,ESI                ; 00558e71
        ;   Label: LAB_00558e71
    FLD float ptr [ESP + 0x178]         ; 00558e73
    SUB ESP,0x8                         ; 00558e7a
    FSTP double ptr [ESP]               ; 00558e7d
    FLD float ptr [ESP + 0x17c]         ; 00558e80
    SUB ESP,0x8                         ; 00558e87
    LEA ESI,[ESP + 0xd8]                ; 00558e8a
    FSTP double ptr [ESP]               ; 00558e91
    FLD float ptr [ESP + 0x180]         ; 00558e94
    SUB ESP,0x8                         ; 00558e9b
    LEA EDI,[ESP + 0x128]               ; 00558e9e
    FSTP double ptr [ESP]               ; 00558ea5
    XOR EBX,EBX                         ; 00558ea8
    CALL sound_sndmain.cpp_FUN_00551490 ; 00558eaa
        ;   XREF to: 00551490 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551490()
    ADD ESP,0x18                        ; 00558eaf
    LEA EAX,[ESP + 0xe0]                ; 00558eb2
    MOV ECX,0x3f800000                  ; 00558eb9
    PUSH EAX                            ; 00558ebe
    LEA EAX,[ESP + 0x68]                ; 00558ebf
    MOV dword ptr [ESP + 0xe4],ECX      ; 00558ec3
    PUSH EAX                            ; 00558eca
    MOV dword ptr [ESP + 0xec],EBX      ; 00558ecb
    MOV dword ptr [ESP + 0xf0],EBX      ; 00558ed2
    CALL core_dirmat.cpp_FUN_00449530   ; 00558ed9
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0xd0]                ; 00558ede
    ADD ESP,0x8                         ; 00558ee5
    MOV EAX,0x3f800000                  ; 00558ee8
    MOV dword ptr [ESP + 0x140],EBX     ; 00558eed
    MOV dword ptr [ESP + 0x144],EAX     ; 00558ef4
    LEA EAX,[ESP + 0x140]               ; 00558efb
    MOV dword ptr [ESP + 0x148],EBX     ; 00558f02
    PUSH EAX                            ; 00558f09
    LEA EAX,[ESP + 0x68]                ; 00558f0a
    MOVSD ES:EDI,ESI                    ; 00558f0e
    MOVSD ES:EDI,ESI                    ; 00558f0f
    MOVSD ES:EDI,ESI                    ; 00558f10
    PUSH EAX                            ; 00558f11
    LEA ESI,[ESP + 0x13c]               ; 00558f12
    LEA EDI,[ESP + 0xc4]                ; 00558f19
    CALL core_dirmat.cpp_FUN_00449530   ; 00558f20
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x13c]               ; 00558f25
    ADD ESP,0x8                         ; 00558f2c
    LEA EAX,[ESP + 0x98]                ; 00558f2f
    MOV dword ptr [ESP + 0x98],EBX      ; 00558f36
    MOV dword ptr [ESP + 0x9c],EBX      ; 00558f3d
    MOVSD ES:EDI,ESI                    ; 00558f44
    MOVSD ES:EDI,ESI                    ; 00558f45
    MOVSD ES:EDI,ESI                    ; 00558f46
    PUSH EAX                            ; 00558f47
    MOV ESI,0x3f800000                  ; 00558f48
    LEA EAX,[ESP + 0x68]                ; 00558f4d
    MOV dword ptr [ESP + 0xa4],ESI      ; 00558f51
    PUSH EAX                            ; 00558f58
    LEA ESI,[ESP + 0x10c]               ; 00558f59
    LEA EDI,[ESP + 0xac]                ; 00558f60
    CALL core_dirmat.cpp_FUN_00449530   ; 00558f67
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x10c]               ; 00558f6c
    ADD ESP,0x8                         ; 00558f73
    MOVSD ES:EDI,ESI                    ; 00558f76
    MOVSD ES:EDI,ESI                    ; 00558f77
    MOVSD ES:EDI,ESI                    ; 00558f78
    PUSH dword ptr [ESP + 0xac]         ; 00558f79
    PUSH dword ptr [ESP + 0xac]         ; 00558f80
    PUSH dword ptr [ESP + 0xac]         ; 00558f87
    PUSH dword ptr [ESP + 0xd0]         ; 00558f8e
    PUSH dword ptr [ESP + 0xd0]         ; 00558f95
    PUSH dword ptr [ESP + 0xd0]         ; 00558f9c
    PUSH dword ptr [ESP + 0x130]        ; 00558fa3
    PUSH dword ptr [ESP + 0x130]        ; 00558faa
    PUSH dword ptr [ESP + 0x130]        ; 00558fb1
    CALL sound_sndmain.cpp_FUN_005514f0 ; 00558fb8
        ;   XREF to: 005514f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005514f0()
    MOV EAX,[0x00616494]                ; 00558fbd | g_CGamePtr
    ADD ESP,0x24                        ; 00558fc2
    MOV EDX,dword ptr [EAX + 0x25c]     ; 00558fc5 | g_CGameInstance.field604_0x25c
    MOV dword ptr [0x0264b2a8],EBX      ; 00558fcb | DAT_0264b2a8
    TEST EDX,EDX                        ; 00558fd1
    JZ 0x00559070                       ; 00558fd3
        ;   XREF to: 00559070 (CONDITIONAL_JUMP)  ; LAB_00559070
    LEA EAX,[ESP + 0x170]               ; 00558fd9
        ;   Label: LAB_00558fd9
    CMP EAX,0x264b29c                   ; 00558fe0
    JNZ 0x0055939a                      ; 00558fe5
        ;   XREF to: 0055939a (CONDITIONAL_JUMP)  ; LAB_0055939a
    MOV ESP,EBP                         ; 00558feb
        ;   Label: LAB_00558feb
    POP EBP                             ; 00558fed
    POP EDI                             ; 00558fee
    POP ESI                             ; 00558fef
    POP EBX                             ; 00558ff0
    RET                                 ; 00558ff1
    LEA EDI,[ESP + 0x128]               ; 00558ff2
        ;   Label: LAB_00558ff2
    MOV ESI,0x1cb3954                   ; 00558ff9
    MOVSD ES:EDI,ESI                    ; 00558ffe | g_CDemonLightInstance.field4_0x4
    MOVSD ES:EDI,ESI                    ; 00558fff | g_CDemonLightInstance.field8_0x8
    MOVSD ES:EDI,ESI                    ; 00559000 | g_CDemonLightInstance.field12_0xc
    LEA EDI,[ESP + 0x8c]                ; 00559001
    LEA ESI,[ESP + 0x128]               ; 00559008
    LEA EDX,[ESP + 0x8c]                ; 0055900f
    LEA EAX,[ESP + 0x170]               ; 00559016
    MOVSD ES:EDI,ESI                    ; 0055901d
    MOVSD ES:EDI,ESI                    ; 0055901e
    MOVSD ES:EDI,ESI                    ; 0055901f
    CMP EAX,EDX                         ; 00559020
    JZ 0x0055904e                       ; 00559022
        ;   XREF to: 0055904e (CONDITIONAL_JUMP)  ; LAB_0055904e
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00559024
    MOV dword ptr [ESP + 0x170],EAX     ; 0055902b
    MOV EAX,dword ptr [ESP + 0x90]      ; 00559032
    MOV dword ptr [ESP + 0x174],EAX     ; 00559039
    MOV EAX,dword ptr [ESP + 0x94]      ; 00559040
    MOV dword ptr [ESP + 0x178],EAX     ; 00559047
    MOV ECX,0xa                         ; 0055904e
        ;   Label: LAB_0055904e
    LEA EDI,[ESP + 0x3c]                ; 00559053
    MOV ESI,0x1cb3960                   ; 00559057
    MOVSD.REP ES:EDI,ESI                ; 0055905c | g_CDemonLightInstance.field16_0x10 | g_CDemonLightInstance.field20_0x14
    MOV ECX,0xa                         ; 0055905e
    LEA EDI,[ESP + 0x64]                ; 00559063
    LEA ESI,[ESP + 0x3c]                ; 00559067
    JMP 0x00558e71                      ; 0055906b
        ;   XREF to: 00558e71 (UNCONDITIONAL_JUMP)  ; LAB_00558e71
    PUSH 0x6                            ; 00559070
        ;   Label: LAB_00559070
    MOV EAX,[0x0061b5a8]                ; 00559072 | g_CDemonSetPtr
    PUSH 0x5ea6f4                       ; 00559077 | = "castle"
    ADD EAX,0x14d0f0                    ; 0055907c
    PUSH EAX                            ; 00559081
    CALL crt_string.c__strnicmp_FUN_005b8da0 ; 00559082
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005b8da0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00559087
    TEST EAX,EAX                        ; 0055908a
    JNZ 0x0055919f                      ; 0055908c
        ;   XREF to: 0055919f (CONDITIONAL_JUMP)  ; LAB_0055919f
    MOV dword ptr [ESP + 0x1a8],0x1     ; 00559092
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 0055909d
        ;   Label: LAB_0055909d
    MOV EBX,0x1                         ; 005590a4
    MOV dword ptr [ESP + 0x1ac],EAX     ; 005590a9
    MOV EDX,dword ptr [0x01fc797c]      ; 005590b0 | g_CDemonCameraInstance.field324_0x144
        ;   Label: LAB_005590b0
    IMUL EDX,EBX                        ; 005590b6
    MOV EAX,EDX                         ; 005590b9
    SAR EDX,0x1f                        ; 005590bb
    SHL EDX,0x5                         ; 005590be
    SBB EAX,EDX                         ; 005590c1
    SAR EAX,0x5                         ; 005590c3
    MOV EDI,dword ptr [ESP + 0x1ac]     ; 005590c6
    MOV EDX,dword ptr [0x01fc7980]      ; 005590cd | g_CDemonCameraInstance.field328_0x148
    IMUL EDX,EDI                        ; 005590d3
    MOV ESI,EAX                         ; 005590d6
    MOV EAX,EDX                         ; 005590d8
    SAR EDX,0x1f                        ; 005590da
    SHL EDX,0x5                         ; 005590dd
    SBB EAX,EDX                         ; 005590e0
    SAR EAX,0x5                         ; 005590e2
    PUSH EAX                            ; 005590e5
    PUSH ESI                            ; 005590e6
    PUSH 0x1fc7838                      ; 005590e7
    LEA ESI,[ESP + 0x104]               ; 005590ec
    LEA EDI,[ESP + 0x158]               ; 005590f3
    CALL core_dcamera.cpp_FUN_0043c6b0  ; 005590fa
        ;   XREF to: 0043c6b0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0043c6b0()
    LEA ESI,[ESP + 0x104]               ; 005590ff
    ADD ESP,0xc                         ; 00559106
    MOVSD ES:EDI,ESI                    ; 00559109
    MOVSD ES:EDI,ESI                    ; 0055910a
    MOVSD ES:EDI,ESI                    ; 0055910b
    XOR EAX,EAX                         ; 0055910c
    MOV EDX,dword ptr [ESP + 0x154]     ; 0055910e
    MOV dword ptr [ESP + 0x10],EAX      ; 00559115
    CMP EDX,0x7fffffff                  ; 00559119
    JL 0x005591ea                       ; 0055911f
        ;   XREF to: 005591ea (CONDITIONAL_JUMP)  ; LAB_005591ea
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 00559125
    FLD float ptr [ESP + 0x10]          ; 0055912d
        ;   Label: LAB_0055912d
    FLDZ                                ; 00559131
    FCOMPP                              ; 00559133
    FNSTSW AX                           ; 00559135
    SAHF                                ; 00559137
    JNC 0x00559148                      ; 00559138
        ;   XREF to: 00559148 (CONDITIONAL_JUMP)  ; LAB_00559148
    FLD float ptr [ESP + 0x10]          ; 0055913a
    FADD float ptr [0x005ea744]         ; 0055913e | DAT_005ea744
    FSTP float ptr [ESP + 0x10]         ; 00559144
    FLD float ptr [ESP + 0x10]          ; 00559148
        ;   Label: LAB_00559148
    FMUL ST0                            ; 0055914c
    FST float ptr [ESP + 0x10]          ; 0055914e
    FLD1                                ; 00559152
    FCOMPP                              ; 00559154
    FNSTSW AX                           ; 00559156
    SAHF                                ; 00559158
    JNC 0x00559163                      ; 00559159
        ;   XREF to: 00559163 (CONDITIONAL_JUMP)  ; LAB_00559163
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 0055915b
    FLD float ptr [ESP + 0x10]          ; 00559163
        ;   Label: LAB_00559163
    FMUL float ptr [0x005ea71c]         ; 00559167 | DAT_005ea71c
    FADD float ptr [0x0264b2a8]         ; 0055916d | DAT_0264b2a8
    ADD EBX,0x2                         ; 00559173
    FSTP float ptr [0x0264b2a8]         ; 00559176 | DAT_0264b2a8
    CMP EBX,0x21                        ; 0055917c
    JNZ 0x005590b0                      ; 0055917f
        ;   XREF to: 005590b0 (CONDITIONAL_JUMP)  ; LAB_005590b0
    MOV EBX,dword ptr [ESP + 0x1a8]     ; 00559185
    ADD EBX,0x2                         ; 0055918c
    MOV dword ptr [ESP + 0x1a8],EBX     ; 0055918f
    CMP EBX,0x21                        ; 00559196
    JNZ 0x0055909d                      ; 00559199
        ;   XREF to: 0055909d (CONDITIONAL_JUMP)  ; LAB_0055909d
    FLD float ptr [0x0264b2a8]          ; 0055919f | DAT_0264b2a8
        ;   Label: LAB_0055919f
    FMUL ST0                            ; 005591a5
    FST float ptr [0x0264b2a8]          ; 005591a7 | DAT_0264b2a8
    FLDZ                                ; 005591ad
    FCOMPP                              ; 005591af
    FNSTSW AX                           ; 005591b1
    SAHF                                ; 005591b3
    JNC 0x005591c8                      ; 005591b4
        ;   XREF to: 005591c8 (CONDITIONAL_JUMP)  ; LAB_005591c8
    FLD float ptr [0x0264b2a8]          ; 005591b6 | DAT_0264b2a8
    FADD float ptr [0x005ea720]         ; 005591bc | DAT_005ea720
    FSTP float ptr [0x0264b2a8]         ; 005591c2 | DAT_0264b2a8
    FLD float ptr [0x0264b2a8]          ; 005591c8 | DAT_0264b2a8
        ;   Label: LAB_005591c8
    FLD1                                ; 005591ce
    FCOMPP                              ; 005591d0
    FNSTSW AX                           ; 005591d2
    SAHF                                ; 005591d4
    JNC 0x00558fd9                      ; 005591d5
        ;   XREF to: 00558fd9 (CONDITIONAL_JUMP)  ; LAB_00558fd9
    MOV dword ptr [0x0264b2a8],0x3f800000 ; 005591db | DAT_0264b2a8
    JMP 0x00558fd9                      ; 005591e5
        ;   XREF to: 00558fd9 (UNCONDITIONAL_JUMP)  ; LAB_00558fd9
    LEA ECX,[EDX + 0xfffffd00]          ; 005591ea
        ;   Label: LAB_005591ea
    MOV dword ptr [ESP + 0x154],ECX     ; 005591f0
    CMP ECX,0x1                         ; 005591f7
    JGE 0x00559207                      ; 005591fa
        ;   XREF to: 00559207 (CONDITIONAL_JUMP)  ; LAB_00559207
    MOV dword ptr [ESP + 0x154],0x1     ; 005591fc
    LEA EAX,[ESP + 0x14c]               ; 00559207
        ;   Label: LAB_00559207
    PUSH EAX                            ; 0055920e
    PUSH 0x1fc7838                      ; 0055920f
    LEA ESI,[ESP + 0x19c]               ; 00559214
    LEA EDI,[ESP + 0xb8]                ; 0055921b
    CALL core_dcamera.cpp_FUN_0043c780  ; 00559222
        ;   XREF to: 0043c780 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0043c780()
    LEA ESI,[ESP + 0x19c]               ; 00559227
    ADD ESP,0x8                         ; 0055922e
    MOVSD ES:EDI,ESI                    ; 00559231
    MOVSD ES:EDI,ESI                    ; 00559232
    MOVSD ES:EDI,ESI                    ; 00559233
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00559234
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0055923b
    FILD dword ptr [ESP + 0x1b0]        ; 00559242
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00559249
    FLD double ptr [0x005ea704]         ; 00559250 | DAT_005ea704
    FXCH                                ; 00559256
    FMUL ST1                            ; 00559258
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0055925a
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00559261
    FILD dword ptr [ESP + 0x1b0]        ; 00559268
    MOV dword ptr [ESP + 0x1b0],EAX     ; 0055926f
    FMUL ST2                            ; 00559276
    FILD dword ptr [ESP + 0x1b0]        ; 00559278
    FMULP ST3                           ; 0055927f
    LEA EDI,[ESP + 0x188]               ; 00559281
    LEA ESI,[ESP + 0x164]               ; 00559288
    FXCH                                ; 0055928f
    FST float ptr [ESP + 0x11c]         ; 00559291
    FXCH                                ; 00559298
    FSTP float ptr [ESP + 0x120]        ; 0055929a
    FSUB float ptr [ESP + 0x170]        ; 005592a1
    FLD float ptr [ESP + 0x120]         ; 005592a8
    FXCH                                ; 005592af
    FSTP float ptr [ESP + 0x164]        ; 005592b1
    FXCH                                ; 005592b8
    FSTP float ptr [ESP + 0x124]        ; 005592ba
    FSUB float ptr [ESP + 0x174]        ; 005592c1
    FLD float ptr [ESP + 0x124]         ; 005592c8
    FSUB float ptr [ESP + 0x178]        ; 005592cf
    FXCH                                ; 005592d6
    FSTP float ptr [ESP + 0x168]        ; 005592d8
    FSTP float ptr [ESP + 0x16c]        ; 005592df
    MOVSD ES:EDI,ESI                    ; 005592e6
    MOVSD ES:EDI,ESI                    ; 005592e7
    MOVSD ES:EDI,ESI                    ; 005592e8
    FLD float ptr [ESP + 0x18c]         ; 005592e9
    FMUL ST0                            ; 005592f0
    FLD float ptr [ESP + 0x188]         ; 005592f2
    FMUL ST0                            ; 005592f9
    FADDP                               ; 005592fb
    FLD float ptr [ESP + 0x190]         ; 005592fd
    FMUL ST0                            ; 00559304
    FADDP                               ; 00559306
    FSQRT                               ; 00559308
    FST double ptr [ESP + 0x8]          ; 0055930a
    FCOMP double ptr [0x005ea724]       ; 0055930e | DAT_005ea724
    FNSTSW AX                           ; 00559314
    SAHF                                ; 00559316
    JBE 0x00559331                      ; 00559317
        ;   XREF to: 00559331 (CONDITIONAL_JUMP)  ; LAB_00559331
    FLD double ptr [ESP + 0x8]          ; 00559319
    FADD double ptr [0x005ea72c]        ; 0055931d | DAT_005ea72c
    FMUL double ptr [0x005ea70c]        ; 00559323 | DAT_005ea70c
    FADD float ptr [ESP + 0x10]         ; 00559329
    FSTP float ptr [ESP + 0x10]         ; 0055932d
    LEA EAX,[ESP + 0x11c]               ; 00559331
        ;   Label: LAB_00559331
    FLD1                                ; 00559338
    PUSH EAX                            ; 0055933a
    MOV EAX,[0x0061b5a8]                ; 0055933b | g_CDemonSetPtr
    FADD float ptr [ESP + 0x124]        ; 00559340
    PUSH EAX                            ; 00559347
    FSTP float ptr [ESP + 0x128]        ; 00559348
    CALL core_setcolid.cpp_FUN_00535cf0 ; 0055934f
        ;   XREF to: 00535cf0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00535cf0()
    MOV dword ptr [ESP + 0x1b8],EAX     ; 00559354
    FLD float ptr [ESP + 0x1b8]         ; 0055935b
    ADD ESP,0x8                         ; 00559362
    FSUB float ptr [ESP + 0x120]        ; 00559365
    FST double ptr [ESP]                ; 0055936c
    FCOMP double ptr [0x005ea734]       ; 0055936f | DAT_005ea734
    FNSTSW AX                           ; 00559375
    SAHF                                ; 00559377
    JBE 0x0055912d                      ; 00559378
        ;   XREF to: 0055912d (CONDITIONAL_JUMP)  ; LAB_0055912d
    FLD double ptr [ESP]                ; 0055937e
    FADD double ptr [0x005ea73c]        ; 00559381 | DAT_005ea73c
    FMUL double ptr [0x005ea714]        ; 00559387 | DAT_005ea714
    FADD float ptr [ESP + 0x10]         ; 0055938d
    FSTP float ptr [ESP + 0x10]         ; 00559391
    JMP 0x0055912d                      ; 00559395
        ;   XREF to: 0055912d (UNCONDITIONAL_JUMP)  ; LAB_0055912d
    MOV EAX,dword ptr [ESP + 0x170]     ; 0055939a
        ;   Label: LAB_0055939a
    MOV [0x0264b29c],EAX                ; 005593a1 | DAT_0264b29c
    MOV EAX,dword ptr [ESP + 0x174]     ; 005593a6
    MOV [0x0264b2a0],EAX                ; 005593ad | DAT_0264b2a0
    MOV EAX,dword ptr [ESP + 0x178]     ; 005593b2
    MOV [0x0264b2a4],EAX                ; 005593b9 | DAT_0264b2a4
    MOV ESP,EBP                         ; 005593be
    POP EBP                             ; 005593c0
    POP EDI                             ; 005593c1
    POP ESI                             ; 005593c2
    POP EBX                             ; 005593c3
    RET                                 ; 005593c4

