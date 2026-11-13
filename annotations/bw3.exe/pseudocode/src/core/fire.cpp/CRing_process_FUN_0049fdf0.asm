; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl core_fire_cpp_CRing_process_FUN_0049fdf0(CRing *this_ptr)
;
; Parameters:
; CRing *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x138]:1  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
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
; undefined        Stack[-0x9c]:1  local_9c
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
; undefined8       Stack[-0x54]:8  local_54
; undefined8       Stack[-0x4c]:8  local_4c
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_004a1760 at 004a1a86
;
; Referenced Globals:
;   undefined4 DAT_005c0908
;   undefined4 DAT_005c0910
;   undefined4 DAT_005c0918
;   undefined4 DAT_005c0920
;   undefined4 DAT_005c0928
;   undefined4 DAT_005c0930
;   undefined4 DAT_005c0938
;   undefined4 DAT_005fc5a0
;   CGame* g_CGamePtr = 01d2130c
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 g_CGameInstance.delta_time_float
;   undefined4 g_CHeroClassInfo.name_hash
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_charactr.cpp_FUN_0042fbd0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
;   core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049fdf0
        ;   Label: core_fire.cpp_CRing_process_FUN_0049fdf0
    PUSH ESI                            ; 0049fdf1
    PUSH EDI                            ; 0049fdf2
    PUSH EBP                            ; 0049fdf3
    MOV EBP,ESP                         ; 0049fdf4
    SUB ESP,0x128                       ; 0049fdf6
    SUB EBP,0x7e                        ; 0049fdfc
    LEA EAX,[EBP + 0xffffff56]          ; 0049fdff
    PUSH EAX                            ; 0049fe05
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 0049fe06
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049fe0b
    ADD ESP,0x4                         ; 0049fe11
    FLD float ptr [EAX + 0x14]          ; 0049fe14
    FLDZ                                ; 0049fe17
    FCOMPP                              ; 0049fe19
    FNSTSW AX                           ; 0049fe1b
    SAHF                                ; 0049fe1d
    JNC 0x004a0061                      ; 0049fe1e
        ;   XREF to: 004a0061 (CONDITIONAL_JUMP)  ; LAB_004a0061
    MOV EAX,[0x005fe9dc]                ; 0049fe24 | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x314]     ; 0049fe29 | g_CGameInstance.delta_time_float
    MOV dword ptr [EBP + 0x4a],EAX      ; 0049fe2f
    MOV dword ptr [EBP + 0x62],EAX      ; 0049fe32
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049fe35
    FLD float ptr [EAX + 0x14]          ; 0049fe3b
    FSUB float ptr [EBP + 0x4a]         ; 0049fe3e
    FST float ptr [EAX + 0x14]          ; 0049fe41
    FLDZ                                ; 0049fe44
    FCOMPP                              ; 0049fe46
    FNSTSW AX                           ; 0049fe48
    SAHF                                ; 0049fe4a
    JA 0x004a0054                       ; 0049fe4b
        ;   XREF to: 004a0054 (CONDITIONAL_JUMP)  ; LAB_004a0054
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049fe51
    TEST dword ptr [EAX + 0x14],0x7fffffff ; 0049fe57
    JZ 0x004a0061                       ; 0049fe5e
        ;   XREF to: 004a0061 (CONDITIONAL_JUMP)  ; LAB_004a0061
    LEA ECX,[EAX + 0xf0]                ; 0049fe64
    ADD EAX,0x30                        ; 0049fe6a
    MOV EDX,ECX                         ; 0049fe6d
    LEA EBX,[ECX + 0xc0]                ; 0049fe6f
    FLD float ptr [EBP + 0x62]          ; 0049fe75
    FLD float ptr [0x005c0908]          ; 0049fe78 | DAT_005c0908
    FLD float ptr [EDX]                 ; 0049fe7e
        ;   Label: LAB_0049fe7e
    FMUL ST1                            ; 0049fe80
    FLD float ptr [EDX + 0x4]           ; 0049fe82
    FMUL ST2                            ; 0049fe85
    FLD float ptr [EDX + 0x8]           ; 0049fe87
    FMUL ST3                            ; 0049fe8a
    LEA EDI,[EBP + 0x16]                ; 0049fe8c
    LEA ESI,[EBP + -0x56]               ; 0049fe8f
    FXCH ST2                            ; 0049fe92
    FSTP float ptr [EBP + -0x56]        ; 0049fe94
    FSTP float ptr [EBP + -0x52]        ; 0049fe97
    FSTP float ptr [EBP + -0x4e]        ; 0049fe9a
    MOVSD ES:EDI,ESI                    ; 0049fe9d
    MOVSD ES:EDI,ESI                    ; 0049fe9e
    MOVSD ES:EDI,ESI                    ; 0049fe9f
    FLD float ptr [EBP + 0x16]          ; 0049fea0
    FMUL ST2                            ; 0049fea3
    FLD float ptr [EBP + 0x1a]          ; 0049fea5
    FMUL ST3                            ; 0049fea8
    FLD float ptr [EBP + 0x1e]          ; 0049feaa
    FMUL ST4                            ; 0049fead
    ADD EAX,0xc                         ; 0049feaf
    LEA EDI,[EBP + -0x62]               ; 0049feb2
    LEA ESI,[EBP + 0xa]                 ; 0049feb5
    FXCH ST2                            ; 0049feb8
    FSTP float ptr [EBP + 0xa]          ; 0049feba
    FSTP float ptr [EBP + 0xe]          ; 0049febd
    FSTP float ptr [EBP + 0x12]         ; 0049fec0
    MOVSD ES:EDI,ESI                    ; 0049fec3
    MOVSD ES:EDI,ESI                    ; 0049fec4
    MOVSD ES:EDI,ESI                    ; 0049fec5
    ADD EDX,0xc                         ; 0049fec6
    FLD float ptr [EAX + -0xc]          ; 0049fec9
    FLD float ptr [EAX + -0x8]          ; 0049fecc
    FLD float ptr [EAX + -0x4]          ; 0049fecf
    FXCH ST2                            ; 0049fed2
    FADD float ptr [EBP + -0x62]        ; 0049fed4
    FXCH                                ; 0049fed7
    FADD float ptr [EBP + -0x5e]        ; 0049fed9
    FXCH ST2                            ; 0049fedc
    FADD float ptr [EBP + -0x5a]        ; 0049fede
    FXCH                                ; 0049fee1
    FSTP float ptr [EAX + -0xc]         ; 0049fee3
    FXCH                                ; 0049fee6
    FSTP float ptr [EAX + -0x8]         ; 0049fee8
    FSTP float ptr [EAX + -0x4]         ; 0049feeb
    CMP EDX,EBX                         ; 0049feee
    JNZ 0x0049fe7e                      ; 0049fef0
        ;   XREF to: 0049fe7e (CONDITIONAL_JUMP)  ; LAB_0049fe7e
    FSTP ST0                            ; 0049fef2
    FSTP ST0                            ; 0049fef4
    FLD float ptr [ECX + 0x4]           ; 0049fef6
    FMUL ST0                            ; 0049fef9
    FLD float ptr [ECX]                 ; 0049fefb
    FMUL ST0                            ; 0049fefd
    FADDP                               ; 0049feff
    FLD float ptr [ECX + 0x8]           ; 0049ff01
    FMUL ST0                            ; 0049ff04
    FADDP                               ; 0049ff06
    FSQRT                               ; 0049ff08
    FMUL float ptr [0x005c0908]         ; 0049ff0a | DAT_005c0908
    FLD float ptr [EBP + 0x62]          ; 0049ff10
    FXCH                                ; 0049ff13
    FMUL ST1                            ; 0049ff15
    MOV EDX,dword ptr [EBP + 0x92]      ; 0049ff17
    FLDZ                                ; 0049ff1d
    FLD float ptr [EDX + 0x1b0]         ; 0049ff1f
    FSUBRP ST3,ST0                      ; 0049ff25
    FXCH                                ; 0049ff27
    FADD float ptr [EDX + 0x1b4]        ; 0049ff29
    FXCH ST2                            ; 0049ff2f
    FSTP float ptr [EDX + 0x1b0]        ; 0049ff31
    FXCH                                ; 0049ff37
    FSTP float ptr [EDX + 0x1b4]        ; 0049ff39
    FCOMP float ptr [EDX + 0x1b0]       ; 0049ff3f
    FNSTSW AX                           ; 0049ff45
    SAHF                                ; 0049ff47
    JC 0x004a0061                       ; 0049ff48
        ;   XREF to: 004a0061 (CONDITIONAL_JUMP)  ; LAB_004a0061
    XOR ECX,ECX                         ; 0049ff4e
    LEA EDI,[EDX + 0x30]                ; 0049ff50
    MOV dword ptr [EBP + 0x66],ECX      ; 0049ff53
    MOV EBX,EDI                         ; 0049ff56
    LEA ESI,[EDI + 0xc]                 ; 0049ff58
    LEA EAX,[EBP + -0x32]               ; 0049ff5b
        ;   Label: LAB_0049ff5b
    CMP EAX,EBX                         ; 0049ff5e
    JNZ 0x004a0071                      ; 0049ff60
        ;   XREF to: 004a0071 (CONDITIONAL_JUMP)  ; LAB_004a0071
    CMP dword ptr [EBP + 0x66],0xf      ; 0049ff66
        ;   Label: LAB_0049ff66
    JNZ 0x004a0087                      ; 0049ff6a
        ;   XREF to: 004a0087 (CONDITIONAL_JUMP)  ; LAB_004a0087
    LEA EAX,[EBP + -0x2]                ; 0049ff70
    CMP EAX,EDI                         ; 0049ff73
    JZ 0x0049ff88                       ; 0049ff75
        ;   XREF to: 0049ff88 (CONDITIONAL_JUMP)  ; LAB_0049ff88
    MOV EAX,dword ptr [EDI]             ; 0049ff77
    MOV dword ptr [EBP + -0x2],EAX      ; 0049ff79
    MOV EAX,dword ptr [EDI + 0x4]       ; 0049ff7c
    MOV dword ptr [EBP + 0x2],EAX       ; 0049ff7f
    MOV EAX,dword ptr [EDI + 0x8]       ; 0049ff82
    MOV dword ptr [EBP + 0x6],EAX       ; 0049ff85
        ;   Label: LAB_0049ff85
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049ff88
        ;   Label: LAB_0049ff88
    MOV EDX,dword ptr [EAX]             ; 0049ff8e
    TEST EDX,EDX                        ; 0049ff90
    JNZ 0x004a00a5                      ; 0049ff92
        ;   XREF to: 004a00a5 (CONDITIONAL_JUMP)  ; LAB_004a00a5
    FLD float ptr [EAX + 0x14]          ; 0049ff98
    FMUL double ptr [0x005c0910]        ; 0049ff9b | DAT_005c0910
    FMUL double ptr [0x005c0918]        ; 0049ffa1 | DAT_005c0918
    CALL crt_math.c_round_FUN_005a3120  ; 0049ffa7
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBP + 0x4e]        ; 0049ffac
    MOV EAX,dword ptr [EBP + 0x4e]      ; 0049ffaf
    PUSH EAX                            ; 0049ffb2
    PUSH 0x3d4ccccd                     ; 0049ffb3
    PUSH 0x2                            ; 0049ffb8
    PUSH 0x40400000                     ; 0049ffba
    PUSH 0x40400000                     ; 0049ffbf
    PUSH EDX                            ; 0049ffc4
    LEA EAX,[EBP + -0x2]                ; 0049ffc5
    PUSH EAX                            ; 0049ffc8
    LEA EAX,[EBP + -0x32]               ; 0049ffc9
    PUSH EAX                            ; 0049ffcc
    MOV EDX,dword ptr [0x005fc5a0]      ; 0049ffcd | DAT_005fc5a0
    PUSH EDX                            ; 0049ffd3
    CALL core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50 ; 0049ffd4
        ;   XREF to: 004a3c50 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50(CFireEffect * this_ptr, CVector3f * start_position, CVector3f * end_position, int enable_camera_shake, ...)
        ;   Label: LAB_0049ffd4
    ADD ESP,0x24                        ; 0049ffd9
    MOV ECX,dword ptr [EBP + 0x66]      ; 0049ffdc
    ADD ESI,0xc                         ; 0049ffdf
    INC ECX                             ; 0049ffe2
    ADD EBX,0xc                         ; 0049ffe3
    MOV dword ptr [EBP + 0x66],ECX      ; 0049ffe6
    CMP ECX,0x10                        ; 0049ffe9
    JL 0x0049ff5b                       ; 0049ffec
        ;   XREF to: 0049ff5b (CONDITIONAL_JUMP)  ; LAB_0049ff5b
    XOR EDX,EDX                         ; 0049fff2
    MOV EAX,dword ptr [EBP + 0x92]      ; 0049fff4
    MOV dword ptr [EBP + 0x56],EDX      ; 0049fffa
    ADD EAX,0x4                         ; 0049fffd
    MOV dword ptr [EBP + 0x5e],EDX      ; 004a0000
    MOV dword ptr [EBP + 0x5a],EAX      ; 004a0003
    MOV EAX,[0x00603b28]                ; 004a0006 | g_CDemonSetPtr
        ;   Label: LAB_004a0006
    MOV EDX,dword ptr [EBP + 0x56]      ; 004a000b
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 004a000e | g_CDemonSetInstance.actor_count
    JGE 0x004a0451                      ; 004a0014
        ;   XREF to: 004a0451 (CONDITIONAL_JUMP)  ; LAB_004a0451
    MOV EDI,dword ptr [EBP + 0x5e]      ; 004a001a
    MOV ESI,dword ptr [0x007e2cec]      ; 004a001d | g_CCharacterClassInfo.name_hash
    ADD EAX,EDI                         ; 004a0023
    PUSH ESI                            ; 004a0025
    MOV EDX,dword ptr [EAX + 0x14d168]  ; 004a0026 | g_CDemonSetInstance.actors[0]
    PUSH EDX                            ; 004a002c
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004a002d
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 004a0032
    ADD ESP,0x8                         ; 004a0034
    MOV dword ptr [EBP + 0x6a],EAX      ; 004a0037
    TEST EAX,EAX                        ; 004a003a
    JNZ 0x004a00d1                      ; 004a003c
        ;   XREF to: 004a00d1 (CONDITIONAL_JUMP)  ; LAB_004a00d1
    MOV EDX,dword ptr [EBP + 0x56]      ; 004a0042
        ;   Label: LAB_004a0042
    MOV EAX,dword ptr [EBP + 0x5e]      ; 004a0045
    INC EDX                             ; 004a0048
    ADD EAX,0x4                         ; 004a0049
    MOV dword ptr [EBP + 0x56],EDX      ; 004a004c
    MOV dword ptr [EBP + 0x5e],EAX      ; 004a004f
    JMP 0x004a0006                      ; 004a0052
        ;   XREF to: 004a0006 (UNCONDITIONAL_JUMP)  ; LAB_004a0006
    MOV EAX,dword ptr [EBP + 0x92]      ; 004a0054
        ;   Label: LAB_004a0054
    MOV dword ptr [EAX + 0x14],0x0      ; 004a005a
    LEA ESP,[EBP + 0x7e]                ; 004a0061
        ;   Label: LAB_004a0061
    POP EBP                             ; 004a0064
    POP EDI                             ; 004a0065
    POP ESI                             ; 004a0066
    POP EBX                             ; 004a0067
    LEA EAX,[EAX]                       ; 004a0068
    MOV EDX,EDX                         ; 004a006e
    RET                                 ; 004a0070
    MOV EAX,dword ptr [EBX]             ; 004a0071
        ;   Label: LAB_004a0071
    MOV dword ptr [EBP + -0x32],EAX     ; 004a0073
    MOV EAX,dword ptr [EBX + 0x4]       ; 004a0076
    MOV dword ptr [EBP + -0x2e],EAX     ; 004a0079
    MOV EAX,dword ptr [EBX + 0x8]       ; 004a007c
    MOV dword ptr [EBP + -0x2a],EAX     ; 004a007f
    JMP 0x0049ff66                      ; 004a0082
        ;   XREF to: 0049ff66 (UNCONDITIONAL_JUMP)  ; LAB_0049ff66
    LEA EAX,[EBP + -0x2]                ; 004a0087
        ;   Label: LAB_004a0087
    CMP EAX,ESI                         ; 004a008a
    JZ 0x0049ff88                       ; 004a008c
        ;   XREF to: 0049ff88 (CONDITIONAL_JUMP)  ; LAB_0049ff88
    MOV EAX,dword ptr [ESI]             ; 004a0092
    MOV dword ptr [EBP + -0x2],EAX      ; 004a0094
    MOV EAX,dword ptr [ESI + 0x4]       ; 004a0097
    MOV dword ptr [EBP + 0x2],EAX       ; 004a009a
    MOV EAX,dword ptr [ESI + 0x8]       ; 004a009d
    JMP 0x0049ff85                      ; 004a00a0
        ;   XREF to: 0049ff85 (UNCONDITIONAL_JUMP)  ; LAB_0049ff85
    PUSH 0xffff                         ; 004a00a5
        ;   Label: LAB_004a00a5
    PUSH 0x3d4ccccd                     ; 004a00aa
    PUSH 0x5                            ; 004a00af
    PUSH 0x40000000                     ; 004a00b1
    PUSH 0x40000000                     ; 004a00b6
    PUSH 0x0                            ; 004a00bb
    LEA EAX,[EBP + -0x2]                ; 004a00bd
    PUSH EAX                            ; 004a00c0
    LEA EAX,[EBP + -0x32]               ; 004a00c1
    PUSH EAX                            ; 004a00c4
    MOV ECX,dword ptr [0x005fc5a0]      ; 004a00c5 | DAT_005fc5a0
    PUSH ECX                            ; 004a00cb
    JMP 0x0049ffd4                      ; 004a00cc
        ;   XREF to: 0049ffd4 (UNCONDITIONAL_JUMP)  ; LAB_0049ffd4
    PUSH EBX                            ; 004a00d1
        ;   Label: LAB_004a00d1
    MOV EAX,dword ptr [EAX + 0x154]     ; 004a00d2
    CALL dword ptr [EAX + 0x10c]        ; 004a00d8
    ADD ESP,0x4                         ; 004a00de
    TEST EAX,EAX                        ; 004a00e1
    JNZ 0x004a0042                      ; 004a00e3
        ;   XREF to: 004a0042 (CONDITIONAL_JUMP)  ; LAB_004a0042
    MOV EAX,dword ptr [EBP + 0x92]      ; 004a00e9
    CMP EBX,dword ptr [EAX + 0x2c]      ; 004a00ef
    JZ 0x004a0042                       ; 004a00f2
        ;   XREF to: 004a0042 (CONDITIONAL_JUMP)  ; LAB_004a0042
    MOV EAX,dword ptr [EBP + 0x5a]      ; 004a00f8
    LEA EDI,[EBP + -0x4a]               ; 004a00fb
    LEA ESI,[EBP + 0x2e]                ; 004a00fe
    LEA EDX,[EBP + -0x26]               ; 004a0101
    FLD float ptr [EAX + 0x4]           ; 004a0104
    FLD float ptr [EAX + 0x8]           ; 004a0107
    FLD float ptr [EAX]                 ; 004a010a
    LEA EAX,[EBP + -0x4a]               ; 004a010c
    FSUB float ptr [EBX + 0x20]         ; 004a010f
    FXCH ST2                            ; 004a0112
    FSUB float ptr [EBX + 0x24]         ; 004a0114
    FXCH                                ; 004a0117
    FSUB float ptr [EBX + 0x28]         ; 004a0119
    FXCH ST2                            ; 004a011c
    FSTP float ptr [EBP + 0x2e]         ; 004a011e
    FSTP float ptr [EBP + 0x32]         ; 004a0121
    FSTP float ptr [EBP + 0x36]         ; 004a0124
    MOVSD ES:EDI,ESI                    ; 004a0127
    MOVSD ES:EDI,ESI                    ; 004a0128
    MOVSD ES:EDI,ESI                    ; 004a0129
    CMP EDX,EAX                         ; 004a012a
    JZ 0x004a0140                       ; 004a012c
        ;   XREF to: 004a0140 (CONDITIONAL_JUMP)  ; LAB_004a0140
    MOV EAX,dword ptr [EBP + -0x4a]     ; 004a012e
    MOV dword ptr [EBP + -0x26],EAX     ; 004a0131
    MOV EAX,dword ptr [EBP + -0x46]     ; 004a0134
    MOV dword ptr [EBP + -0x22],EAX     ; 004a0137
    MOV EAX,dword ptr [EBP + -0x42]     ; 004a013a
    MOV dword ptr [EBP + -0x1e],EAX     ; 004a013d
    FLD float ptr [EBP + -0x26]         ; 004a0140
        ;   Label: LAB_004a0140
    FMUL ST0                            ; 004a0143
    FLD float ptr [EBP + -0x1e]         ; 004a0145
    FMUL ST0                            ; 004a0148
    FADDP                               ; 004a014a
    FSQRT                               ; 004a014c
    XOR EBX,EBX                         ; 004a014e
    MOV EAX,dword ptr [EBP + 0x92]      ; 004a0150
    MOV dword ptr [EBP + -0x22],EBX     ; 004a0156
    FLD float ptr [EAX + 0x1b4]         ; 004a0159
    FST double ptr [EBP + 0x42]         ; 004a015f
    FADD double ptr [0x005c0928]        ; 004a0162 | DAT_005c0928
    FXCH                                ; 004a0168
    FSTP double ptr [EBP + 0x3a]        ; 004a016a
    FCOMP double ptr [EBP + 0x3a]       ; 004a016d
    FNSTSW AX                           ; 004a0170
    SAHF                                ; 004a0172
    JNC 0x004a0042                      ; 004a0173
        ;   XREF to: 004a0042 (CONDITIONAL_JUMP)  ; LAB_004a0042
    FLD1                                ; 004a0179
    FADD double ptr [EBP + 0x42]        ; 004a017b
    FCOMP double ptr [EBP + 0x3a]       ; 004a017e
    FNSTSW AX                           ; 004a0181
    SAHF                                ; 004a0183
    JBE 0x004a0042                      ; 004a0184
        ;   XREF to: 004a0042 (CONDITIONAL_JUMP)  ; LAB_004a0042
    MOV EAX,dword ptr [EBP + 0x92]      ; 004a018a
    MOV ESI,dword ptr [EAX + 0x1e0]     ; 004a0190
    MOV EDX,0x1                         ; 004a0196
    TEST ESI,ESI                        ; 004a019b
    JLE 0x004a01c2                      ; 004a019d
        ;   XREF to: 004a01c2 (CONDITIONAL_JUMP)  ; LAB_004a01c2
    MOV ECX,dword ptr [EBP + 0x6a]      ; 004a019f
        ;   Label: LAB_004a019f
    CMP ECX,dword ptr [EAX + 0x1b8]     ; 004a01a2
    JZ 0x004a0042                       ; 004a01a8
        ;   XREF to: 004a0042 (CONDITIONAL_JUMP)  ; LAB_004a0042
    MOV ECX,dword ptr [EBP + 0x92]      ; 004a01ae
    INC EBX                             ; 004a01b4
    MOV EDI,dword ptr [ECX + 0x1e0]     ; 004a01b5
    ADD EAX,0x4                         ; 004a01bb
    CMP EBX,EDI                         ; 004a01be
    JL 0x004a019f                       ; 004a01c0
        ;   XREF to: 004a019f (CONDITIONAL_JUMP)  ; LAB_004a019f
    TEST EDX,EDX                        ; 004a01c2
        ;   Label: LAB_004a01c2
    JZ 0x004a0042                       ; 004a01c4
        ;   XREF to: 004a0042 (CONDITIONAL_JUMP)  ; LAB_004a0042
    MOV EAX,dword ptr [EBP + 0x92]      ; 004a01ca
    CMP dword ptr [EAX + 0x1e0],0xa     ; 004a01d0
    JGE 0x004a0042                      ; 004a01d7
        ;   XREF to: 004a0042 (CONDITIONAL_JUMP)  ; LAB_004a0042
    MOV ECX,dword ptr [EAX]             ; 004a01dd
    TEST ECX,ECX                        ; 004a01df
    JNZ 0x004a037a                      ; 004a01e1
        ;   XREF to: 004a037a (CONDITIONAL_JUMP)  ; LAB_004a037a
    FLD float ptr [EAX + 0x14]          ; 004a01e7
    FMUL float ptr [0x005c0920]         ; 004a01ea | DAT_005c0920
    FMUL double ptr [0x005c0910]        ; 004a01f0 | DAT_005c0910
    MOV ESI,0x66                        ; 004a01f6
    LEA EDX,[EBP + 0xffffff56]          ; 004a01fb
    MOV EDI,dword ptr [EBP + 0x6a]      ; 004a0201
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004a0204
    MOV dword ptr [EBP + -0x7a],ESI     ; 004a0207
    PUSH EDX                            ; 004a020a
    FADD double ptr [0x005c0930]        ; 004a020b | DAT_005c0930
    PUSH EDI                            ; 004a0211
    FSTP float ptr [EBP + 0xffffff5a]   ; 004a0212
    MOV EAX,dword ptr [EAX + 0x154]     ; 004a0218
    CALL dword ptr [EAX + 0x108]        ; 004a021e
    MOV EDX,dword ptr [EDI + 0x27c0]    ; 004a0224
    ADD ESP,0x8                         ; 004a022a
    TEST EDX,EDX                        ; 004a022d
    JZ 0x004a0271                       ; 004a022f
        ;   XREF to: 004a0271 (CONDITIONAL_JUMP)  ; LAB_004a0271
    PUSH 0x40a00000                     ; 004a0231
    FLD float ptr [EDI + 0x24]          ; 004a0236
    LEA ESI,[EBP + -0x1a]               ; 004a0239
    PUSH 0x1                            ; 004a023c
    MOV ECX,EDI                         ; 004a023e
    MOV EAX,dword ptr [EDI + 0x20]      ; 004a0240
    PUSH 0x3f800000                     ; 004a0243
    MOV dword ptr [EBP + -0x1a],EAX     ; 004a0248
    PUSH 0x0                            ; 004a024b
    FADD float ptr [0x005c0938]         ; 004a024d | DAT_005c0938
    MOV EAX,dword ptr [EDI + 0x28]      ; 004a0253
    PUSH 0x0                            ; 004a0256
    MOV dword ptr [EBP + -0x12],EAX     ; 004a0258
    LEA EAX,[EBP + -0xe]                ; 004a025b
    LEA EDI,[EBP + -0xe]                ; 004a025e
    PUSH EAX                            ; 004a0261
    FSTP float ptr [EBP + -0x16]        ; 004a0262
    PUSH ECX                            ; 004a0265
    MOVSD ES:EDI,ESI                    ; 004a0266
    MOVSD ES:EDI,ESI                    ; 004a0267
    MOVSD ES:EDI,ESI                    ; 004a0268
    CALL core_charactr.cpp_FUN_0042fbd0 ; 004a0269
        ;   XREF to: 0042fbd0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042fbd0()
    ADD ESP,0x1c                        ; 004a026e
    MOV EAX,dword ptr [EBP + 0x92]      ; 004a0271
        ;   Label: LAB_004a0271
    MOV EAX,dword ptr [EAX + 0x1e0]     ; 004a0277
    MOV EBX,dword ptr [EBP + 0x92]      ; 004a027d
    SHL EAX,0x2                         ; 004a0283
    ADD EAX,EBX                         ; 004a0286
    MOV EDX,dword ptr [EBP + 0x6a]      ; 004a0288
    MOV dword ptr [EAX + 0x1b8],EDX     ; 004a028b
    MOV ESI,dword ptr [EBX + 0x1e0]     ; 004a0291
    INC ESI                             ; 004a0297
    MOV EDI,dword ptr [EBX]             ; 004a0298
    MOV dword ptr [EBX + 0x1e0],ESI     ; 004a029a
    TEST EDI,EDI                        ; 004a02a0
    JNZ 0x004a0042                      ; 004a02a2
        ;   XREF to: 004a0042 (CONDITIONAL_JUMP)  ; LAB_004a0042
    LEA EAX,[EBP + 0x22]                ; 004a02a8
    ADD EDX,0x20                        ; 004a02ab
    CMP EAX,EDX                         ; 004a02ae
    JNZ 0x004a043b                      ; 004a02b0
        ;   XREF to: 004a043b (CONDITIONAL_JUMP)  ; LAB_004a043b
    MOV EAX,dword ptr [EBP + 0x92]      ; 004a02b6
        ;   Label: LAB_004a02b6
    MOV EAX,dword ptr [EAX + 0x8]       ; 004a02bc
    XOR EBX,EBX                         ; 004a02bf
    MOV dword ptr [EBP + 0x26],EAX      ; 004a02c1
    PUSH 0x40f00000                     ; 004a02c4
        ;   Label: LAB_004a02c4
    PUSH 0xc0f00000                     ; 004a02c9
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004a02ce
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    ADD ESP,0x8                         ; 004a02d3
    PUSH 0x41700000                     ; 004a02d6
    PUSH 0x41200000                     ; 004a02db
    MOV dword ptr [EBP + 0x4e],EAX      ; 004a02e0
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004a02e3
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    ADD ESP,0x8                         ; 004a02e8
    PUSH 0x40f00000                     ; 004a02eb
    PUSH 0xc0f00000                     ; 004a02f0
    MOV dword ptr [EBP + 0x52],EAX      ; 004a02f5
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004a02f8
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x7a],EAX      ; 004a02fd
    MOV EAX,dword ptr [EBP + 0x52]      ; 004a0300
    FLD float ptr [EBP + 0x7a]          ; 004a0303
    MOV dword ptr [EBP + 0x6e],EAX      ; 004a0306
    MOV EAX,dword ptr [EBP + 0x4e]      ; 004a0309
    FSTP float ptr [EBP + 0x76]         ; 004a030c
    MOV dword ptr [EBP + 0x72],EAX      ; 004a030f
    MOV EAX,dword ptr [EBP + 0x76]      ; 004a0312
    MOV dword ptr [EBP + -0x3e],EAX     ; 004a0315
    MOV EAX,dword ptr [EBP + 0x6e]      ; 004a0318
    MOV dword ptr [EBP + -0x3a],EAX     ; 004a031b
    MOV EAX,dword ptr [EBP + 0x72]      ; 004a031e
    LEA EDX,[EBP + -0x3e]               ; 004a0321
    MOV dword ptr [EBP + -0x36],EAX     ; 004a0324
    LEA EAX,[EBP + -0x6e]               ; 004a0327
    ADD ESP,0x8                         ; 004a032a
    CMP EAX,EDX                         ; 004a032d
    JZ 0x004a0343                       ; 004a032f
        ;   XREF to: 004a0343 (CONDITIONAL_JUMP)  ; LAB_004a0343
    MOV EAX,dword ptr [EBP + 0x76]      ; 004a0331
    MOV dword ptr [EBP + -0x6e],EAX     ; 004a0334
    MOV EAX,dword ptr [EBP + 0x6e]      ; 004a0337
    MOV dword ptr [EBP + -0x6a],EAX     ; 004a033a
    MOV EAX,dword ptr [EBP + 0x72]      ; 004a033d
    MOV dword ptr [EBP + -0x66],EAX     ; 004a0340
    PUSH 0xffff                         ; 004a0343
        ;   Label: LAB_004a0343
    PUSH 0x4                            ; 004a0348
    PUSH 0x10000                        ; 004a034a
    PUSH 0x20000                        ; 004a034f
    LEA EAX,[EBP + -0x6e]               ; 004a0354
    PUSH EAX                            ; 004a0357
    LEA EAX,[EBP + 0x22]                ; 004a0358
    PUSH EAX                            ; 004a035b
    MOV EDI,dword ptr [0x005fc5a0]      ; 004a035c | DAT_005fc5a0
    PUSH EDI                            ; 004a0362
    INC EBX                             ; 004a0363
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0 ; 004a0364
        ;   XREF to: 004a23c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004a0369
    CMP EBX,0x20                        ; 004a036c
    JGE 0x004a0042                      ; 004a036f
        ;   XREF to: 004a0042 (CONDITIONAL_JUMP)  ; LAB_004a0042
    JMP 0x004a02c4                      ; 004a0375
        ;   XREF to: 004a02c4 (UNCONDITIONAL_JUMP)  ; LAB_004a02c4
    CMP ECX,0x1                         ; 004a037a
        ;   Label: LAB_004a037a
    JNZ 0x004a0271                      ; 004a037d
        ;   XREF to: 004a0271 (CONDITIONAL_JUMP)  ; LAB_004a0271
    MOV ESI,dword ptr [0x01d5ba70]      ; 004a0383 | g_CHeroClassInfo.name_hash
    PUSH ESI                            ; 004a0389
    MOV EDI,dword ptr [EBP + 0x6a]      ; 004a038a
    PUSH EDI                            ; 004a038d
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004a038e
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004a0393
    TEST EAX,EAX                        ; 004a0396
    JNZ 0x004a0271                      ; 004a0398
        ;   XREF to: 004a0271 (CONDITIONAL_JUMP)  ; LAB_004a0271
    MOV EAX,[0x02d24cb4]                ; 004a039e | g_CHinoClassInfo.name_hash
    PUSH EAX                            ; 004a03a3
    PUSH EDI                            ; 004a03a4
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004a03a5
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004a03aa
    TEST EAX,EAX                        ; 004a03ad
    JZ 0x004a03d0                       ; 004a03af
        ;   XREF to: 004a03d0 (CONDITIONAL_JUMP)  ; LAB_004a03d0
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004a03b1
        ;   Label: LAB_004a03b1
    MOV dword ptr [EAX + 0x3254],0x40a00000 ; 004a03b4
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004a03be
    MOV dword ptr [EAX + 0x3258],0x0    ; 004a03c1
    JMP 0x004a0271                      ; 004a03cb
        ;   XREF to: 004a0271 (UNCONDITIONAL_JUMP)  ; LAB_004a0271
    MOV ECX,dword ptr [0x02d24a14]      ; 004a03d0 | g_CKedwardClassInfo.name_hash
        ;   Label: LAB_004a03d0
    PUSH ECX                            ; 004a03d6
    PUSH EDI                            ; 004a03d7
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004a03d8
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004a03dd
    TEST EAX,EAX                        ; 004a03e0
    JNZ 0x004a03b1                      ; 004a03e2
        ;   XREF to: 004a03b1 (CONDITIONAL_JUMP)  ; LAB_004a03b1
    MOV ESI,dword ptr [0x02d24d40]      ; 004a03e4 | g_CStylerDemonClassInfo.name_hash
    PUSH ESI                            ; 004a03ea
    PUSH EDI                            ; 004a03eb
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004a03ec
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004a03f1
    TEST EAX,EAX                        ; 004a03f4
    JNZ 0x004a03b1                      ; 004a03f6
        ;   XREF to: 004a03b1 (CONDITIONAL_JUMP)  ; LAB_004a03b1
    MOV EAX,[0x02d24a50]                ; 004a03f8 | g_CMattanntoteClassInfo.name_hash
    PUSH EAX                            ; 004a03fd
    PUSH EDI                            ; 004a03fe
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004a03ff
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004a0404
    TEST EAX,EAX                        ; 004a0407
    JNZ 0x004a03b1                      ; 004a0409
        ;   XREF to: 004a03b1 (CONDITIONAL_JUMP)  ; LAB_004a03b1
    MOV ECX,dword ptr [0x02d24ae0]      ; 004a040b | g_CBaalClassInfo.name_hash
    PUSH ECX                            ; 004a0411
    PUSH EDI                            ; 004a0412
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004a0413
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004a0418
    TEST EAX,EAX                        ; 004a041b
    JNZ 0x004a03b1                      ; 004a041d
        ;   XREF to: 004a03b1 (CONDITIONAL_JUMP)  ; LAB_004a03b1
    MOV dword ptr [EDI + 0x3254],0x41200000 ; 004a041f
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004a0429
    MOV dword ptr [EAX + 0x3258],0x0    ; 004a042c
    JMP 0x004a0271                      ; 004a0436
        ;   XREF to: 004a0271 (UNCONDITIONAL_JUMP)  ; LAB_004a0271
    MOV EAX,dword ptr [EDX]             ; 004a043b
        ;   Label: LAB_004a043b
    MOV dword ptr [EBP + 0x22],EAX      ; 004a043d
    MOV EAX,dword ptr [EDX + 0x4]       ; 004a0440
    MOV dword ptr [EBP + 0x26],EAX      ; 004a0443
    MOV EAX,dword ptr [EDX + 0x8]       ; 004a0446
    MOV dword ptr [EBP + 0x2a],EAX      ; 004a0449
    JMP 0x004a02b6                      ; 004a044c
        ;   XREF to: 004a02b6 (UNCONDITIONAL_JUMP)  ; LAB_004a02b6
    MOV EAX,dword ptr [EBP + 0x92]      ; 004a0451
        ;   Label: LAB_004a0451
    MOV dword ptr [EAX + 0x1b0],0x3d4ccccd ; 004a0457
    LEA ESP,[EBP + 0x7e]                ; 004a0461
    POP EBP                             ; 004a0464
    POP EDI                             ; 004a0465
    POP ESI                             ; 004a0466
    POP EBX                             ; 004a0467
    RET                                 ; 004a0468

