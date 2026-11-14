; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452de0(CDemonCamera *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *bbox_min ,CVector3f *bbox_max)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   orientation
; CVector3f *      Stack[0x10]:4   bbox_min
; CVector3f *      Stack[0x14]:4   bbox_max
; Local Variables:
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
; undefined4       Stack[-0x100]:4  local_100
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
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
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
;
; XREF[3]:
;   core_lightgun.cpp_CLightGun_fire_FUN_00500310 at 0050085d
;   core_lightpis.cpp_CLightPis_fire_FUN_00501a70 at 00501fbd
;   core_set.cpp_CDemonSet_gatherVisibleLights_FUN_00551d50 at 00551e9a
;
; Referenced Globals:
;   undefined4 DAT_005d78f7
;   undefined4 DAT_005fe5fc
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c51d2c
;   undefined4 DAT_01c51d30
;   undefined4 DAT_01c51d34
;   undefined4 DAT_01c51d5c
;   undefined4 DAT_01c51d60
;   undefined4 DAT_01c51d64
;   undefined4 DAT_01c51d68
;   undefined4 DAT_01c51d6c
;   undefined4 DAT_01c51d70
;   undefined4 DAT_01c51d74
;   undefined4 DAT_01c51d78
;   ... and 1 more
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_matrixPush_FUN_00483990
;   engine_drender.cpp_pop_FUN_004839a0
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00452de0
        ;   Label: core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452de0
    PUSH ESI                            ; 00452de1
    PUSH EDI                            ; 00452de2
    PUSH EBP                            ; 00452de3
    SUB ESP,0x120                       ; 00452de4
    MOV EBX,dword ptr [ESP + 0x134]     ; 00452dea
    MOV EBP,dword ptr [ESP + 0x138]     ; 00452df1
    MOV EDI,dword ptr [ESP + 0x140]     ; 00452df8
    MOV ESI,dword ptr [ESP + 0x144]     ; 00452dff
    MOV EDX,dword ptr [0x00612560]      ; 00452e06 | DAT_00612560
    PUSH EDX                            ; 00452e0c | DAT_01bc120c
    CALL engine_drender.cpp_matrixPush_FUN_00483990 ; 00452e0d
        ;   XREF to: 00483990 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_matrixPush_FUN_00483990()
    FLD float ptr [EBX + 0x4]           ; 00452e12
    FSUB float ptr [EBP]                ; 00452e15
    FLD double ptr [0x005d78f7]         ; 00452e18 | DAT_005d78f7
    FXCH                                ; 00452e1e
    FMUL ST1                            ; 00452e20
    FLD float ptr [EBX + 0xc]           ; 00452e22
    FLD float ptr [EBX + 0x8]           ; 00452e25
    FSUB float ptr [EBP + 0x4]          ; 00452e28
    FXCH                                ; 00452e2b
    FSUB float ptr [EBP + 0x8]          ; 00452e2d
    FXCH                                ; 00452e30
    FMUL ST3                            ; 00452e32
    FXCH                                ; 00452e34
    FMULP ST3                           ; 00452e36
    MOV EAX,dword ptr [EBX + 0x178]     ; 00452e38
    ADD ESP,0x4                         ; 00452e3e
    MOV [0x01c51d5c],EAX                ; 00452e41 | DAT_01c51d5c
    MOV EAX,dword ptr [EBX + 0x17c]     ; 00452e46
    PUSH 0x0                            ; 00452e4c
    MOV [0x01c51d60],EAX                ; 00452e4e | DAT_01c51d60
    MOV EAX,dword ptr [EBX + 0x180]     ; 00452e53
    MOV ECX,dword ptr [ESP + 0x140]     ; 00452e59
    MOV [0x01c51d64],EAX                ; 00452e60 | DAT_01c51d64
    MOV EAX,dword ptr [EBX + 0x184]     ; 00452e65
    PUSH ECX                            ; 00452e6b
    MOV [0x01c51d68],EAX                ; 00452e6c | DAT_01c51d68
    MOV EAX,dword ptr [EBX + 0x188]     ; 00452e71
    FXCH                                ; 00452e77
    CALL crt_math.c_round_FUN_005c03a0  ; 00452e79
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    MOV [0x01c51d6c],EAX                ; 00452e7e | DAT_01c51d6c
    MOV EAX,dword ptr [EBX + 0x18c]     ; 00452e83
    FXCH                                ; 00452e89
    CALL crt_math.c_round_FUN_005c03a0  ; 00452e8b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    MOV [0x01c51d70],EAX                ; 00452e90 | DAT_01c51d70
    MOV EAX,dword ptr [EBX + 0x190]     ; 00452e95
    FXCH ST2                            ; 00452e9b
    CALL crt_math.c_round_FUN_005c03a0  ; 00452e9d
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    MOV [0x01c51d74],EAX                ; 00452ea2 | DAT_01c51d74
    MOV EAX,dword ptr [EBX + 0x194]     ; 00452ea7
    FXCH                                ; 00452ead
    FISTP dword ptr [0x01c51d2c]        ; 00452eaf | DAT_01c51d2c
    MOV [0x01c51d78],EAX                ; 00452eb5 | DAT_01c51d78
    MOV EAX,dword ptr [EBX + 0x198]     ; 00452eba
    MOV EBX,dword ptr [0x00612560]      ; 00452ec0 | DAT_00612560
    FXCH                                ; 00452ec6
    FISTP dword ptr [0x01c51d30]        ; 00452ec8 | DAT_01c51d30
    PUSH EBX                            ; 00452ece | DAT_01bc120c
    FISTP dword ptr [0x01c51d34]        ; 00452ecf | DAT_01c51d34
    MOV [0x01c51d7c],EAX                ; 00452ed5 | DAT_01c51d7c
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 00452eda
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00452edf
    MOV EAX,dword ptr [ESI]             ; 00452ee2
    MOV dword ptr [ESP + 0xc4],EAX      ; 00452ee4
    MOV EAX,dword ptr [EDI + 0x4]       ; 00452eeb
    MOV dword ptr [ESP + 0xc8],EAX      ; 00452eee
    MOV EAX,dword ptr [ESI + 0x8]       ; 00452ef5
    MOV dword ptr [ESP + 0xdc],EAX      ; 00452ef8
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00452eff
    MOV dword ptr [ESP + 0x18],EAX      ; 00452f06
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00452f0a
    MOV dword ptr [ESP + 0x1c],EAX      ; 00452f11
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00452f15
    LEA EBX,[ESP + 0x48]                ; 00452f1c
    MOV dword ptr [ESP + 0x20],EAX      ; 00452f20
    LEA EAX,[ESP + 0x18]                ; 00452f24
    MOV EDX,dword ptr [0x00612560]      ; 00452f28 | DAT_00612560
    FLD float ptr [EAX]                 ; 00452f2e
    FMUL float ptr [0x005fe5fc]         ; 00452f30 | DAT_005fe5fc
    FISTP dword ptr [EBX]               ; 00452f36
    FLD float ptr [EAX + 0x4]           ; 00452f38
    FMUL float ptr [0x005fe5fc]         ; 00452f3b | DAT_005fe5fc
    FISTP dword ptr [EBX + 0x4]         ; 00452f41
    FLD float ptr [EAX + 0x8]           ; 00452f44
    FMUL float ptr [0x005fe5fc]         ; 00452f47 | DAT_005fe5fc
    FISTP dword ptr [EBX + 0x8]         ; 00452f4d
    LEA EAX,[ESP + 0x48]                ; 00452f50
    PUSH EAX                            ; 00452f54
    MOV EAX,dword ptr [EDX]             ; 00452f55 | DAT_01bc120c
    ADD EAX,0xea480                     ; 00452f57
    PUSH EAX                            ; 00452f5c
    CALL engine_special.cpp_FUN_00580173 ; 00452f5d
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00452f62
    MOV EAX,dword ptr [EDI]             ; 00452f65
    MOV dword ptr [ESP + 0xc0],EAX      ; 00452f67
    MOV EAX,dword ptr [EDI + 0x4]       ; 00452f6e
    MOV dword ptr [ESP + 0xcc],EAX      ; 00452f71
    MOV EAX,dword ptr [ESI + 0x8]       ; 00452f78
    MOV dword ptr [ESP + 0xd0],EAX      ; 00452f7b
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00452f82
    MOV dword ptr [ESP + 0x54],EAX      ; 00452f89
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00452f8d
    MOV dword ptr [ESP + 0x58],EAX      ; 00452f94
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00452f98
    MOV EDX,dword ptr [0x00612560]      ; 00452f9f | DAT_00612560
    MOV dword ptr [ESP + 0x5c],EAX      ; 00452fa5
    LEA EBX,[ESP + 0x60]                ; 00452fa9
    LEA EAX,[ESP + 0x54]                ; 00452fad
    FLD float ptr [EAX]                 ; 00452fb1
    FMUL float ptr [0x005fe5fc]         ; 00452fb3 | DAT_005fe5fc
    FISTP dword ptr [EBX]               ; 00452fb9
    FLD float ptr [EAX + 0x4]           ; 00452fbb
    FMUL float ptr [0x005fe5fc]         ; 00452fbe | DAT_005fe5fc
    FISTP dword ptr [EBX + 0x4]         ; 00452fc4
    FLD float ptr [EAX + 0x8]           ; 00452fc7
    FMUL float ptr [0x005fe5fc]         ; 00452fca | DAT_005fe5fc
    FISTP dword ptr [EBX + 0x8]         ; 00452fd0
    LEA EAX,[ESP + 0x60]                ; 00452fd3
    PUSH EAX                            ; 00452fd7
    MOV EAX,dword ptr [EDX]             ; 00452fd8 | DAT_01bc120c
    ADD EAX,0xea4b0                     ; 00452fda
    PUSH EAX                            ; 00452fdf
    CALL engine_special.cpp_FUN_00580173 ; 00452fe0
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00452fe5
    MOV EAX,dword ptr [EDI]             ; 00452fe8
    MOV dword ptr [ESP + 0xd4],EAX      ; 00452fea
    MOV EAX,dword ptr [EDI + 0x4]       ; 00452ff1
    MOV dword ptr [ESP + 0xe4],EAX      ; 00452ff4
    MOV EAX,dword ptr [EDI + 0x8]       ; 00452ffb
    MOV dword ptr [ESP + 0x108],EAX     ; 00452ffe
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00453005
    MOV dword ptr [ESP + 0xa8],EAX      ; 0045300c
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00453013
    MOV dword ptr [ESP + 0xac],EAX      ; 0045301a
    MOV EAX,dword ptr [ESP + 0x108]     ; 00453021
    LEA EBX,[ESP + 0x3c]                ; 00453028
    MOV dword ptr [ESP + 0xb0],EAX      ; 0045302c
    LEA EAX,[ESP + 0xa8]                ; 00453033
    MOV EDX,dword ptr [0x00612560]      ; 0045303a | DAT_00612560
    FLD float ptr [EAX]                 ; 00453040
    FMUL float ptr [0x005fe5fc]         ; 00453042 | DAT_005fe5fc
    FISTP dword ptr [EBX]               ; 00453048
    FLD float ptr [EAX + 0x4]           ; 0045304a
    FMUL float ptr [0x005fe5fc]         ; 0045304d | DAT_005fe5fc
    FISTP dword ptr [EBX + 0x4]         ; 00453053
    FLD float ptr [EAX + 0x8]           ; 00453056
    FMUL float ptr [0x005fe5fc]         ; 00453059 | DAT_005fe5fc
    FISTP dword ptr [EBX + 0x8]         ; 0045305f
    LEA EAX,[ESP + 0x3c]                ; 00453062
    PUSH EAX                            ; 00453066
    MOV EAX,dword ptr [EDX]             ; 00453067 | DAT_01bc120c
    ADD EAX,0xea4e0                     ; 00453069
    PUSH EAX                            ; 0045306e
    CALL engine_special.cpp_FUN_00580173 ; 0045306f
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00453074
    MOV EAX,dword ptr [ESI]             ; 00453077
    MOV dword ptr [ESP + 0x118],EAX     ; 00453079
    MOV EAX,dword ptr [EDI + 0x4]       ; 00453080
    MOV dword ptr [ESP + 0xd8],EAX      ; 00453083
    MOV EAX,dword ptr [EDI + 0x8]       ; 0045308a
    MOV dword ptr [ESP + 0x11c],EAX     ; 0045308d
    MOV EAX,dword ptr [ESP + 0x118]     ; 00453094
    MOV dword ptr [ESP + 0xc],EAX       ; 0045309b
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0045309f
    MOV dword ptr [ESP + 0x10],EAX      ; 004530a6
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004530aa
    LEA EBX,[ESP + 0x24]                ; 004530b1
    MOV dword ptr [ESP + 0x14],EAX      ; 004530b5
    LEA EAX,[ESP + 0xc]                 ; 004530b9
    MOV EDX,dword ptr [0x00612560]      ; 004530bd | DAT_00612560
    FLD float ptr [EAX]                 ; 004530c3
    FMUL float ptr [0x005fe5fc]         ; 004530c5 | DAT_005fe5fc
    FISTP dword ptr [EBX]               ; 004530cb
    FLD float ptr [EAX + 0x4]           ; 004530cd
    FMUL float ptr [0x005fe5fc]         ; 004530d0 | DAT_005fe5fc
    FISTP dword ptr [EBX + 0x4]         ; 004530d6
    FLD float ptr [EAX + 0x8]           ; 004530d9
    FMUL float ptr [0x005fe5fc]         ; 004530dc | DAT_005fe5fc
    FISTP dword ptr [EBX + 0x8]         ; 004530e2
    LEA EAX,[ESP + 0x24]                ; 004530e5
    PUSH EAX                            ; 004530e9
    MOV EAX,dword ptr [EDX]             ; 004530ea | DAT_01bc120c
    ADD EAX,0xea510                     ; 004530ec
    PUSH EAX                            ; 004530f1
    CALL engine_special.cpp_FUN_00580173 ; 004530f2
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004530f7
    MOV EAX,dword ptr [ESI]             ; 004530fa
    MOV dword ptr [ESP + 0xf4],EAX      ; 004530fc
    MOV EAX,dword ptr [ESI + 0x4]       ; 00453103
    MOV dword ptr [ESP + 0xf8],EAX      ; 00453106
    MOV EAX,dword ptr [ESI + 0x8]       ; 0045310d
    MOV dword ptr [ESP + 0xe0],EAX      ; 00453110
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00453117
    MOV dword ptr [ESP + 0x90],EAX      ; 0045311e
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00453125
    MOV dword ptr [ESP + 0x94],EAX      ; 0045312c
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00453133
    MOV EBX,ESP                         ; 0045313a
    MOV dword ptr [ESP + 0x98],EAX      ; 0045313c
    LEA EAX,[ESP + 0x90]                ; 00453143
    MOV EDX,dword ptr [0x00612560]      ; 0045314a | DAT_00612560
    FLD float ptr [EAX]                 ; 00453150
    FMUL float ptr [0x005fe5fc]         ; 00453152 | DAT_005fe5fc
    FISTP dword ptr [EBX]               ; 00453158
    FLD float ptr [EAX + 0x4]           ; 0045315a
    FMUL float ptr [0x005fe5fc]         ; 0045315d | DAT_005fe5fc
    FISTP dword ptr [EBX + 0x4]         ; 00453163
    FLD float ptr [EAX + 0x8]           ; 00453166
    FMUL float ptr [0x005fe5fc]         ; 00453169 | DAT_005fe5fc
    FISTP dword ptr [EBX + 0x8]         ; 0045316f
    MOV EAX,ESP                         ; 00453172
    PUSH EAX                            ; 00453174
    MOV EAX,dword ptr [EDX]             ; 00453175 | DAT_01bc120c
    ADD EAX,0xea540                     ; 00453177
    PUSH EAX                            ; 0045317c
    CALL engine_special.cpp_FUN_00580173 ; 0045317d
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00453182
    MOV EAX,dword ptr [EDI]             ; 00453185
    MOV dword ptr [ESP + 0xe8],EAX      ; 00453187
    MOV EAX,dword ptr [ESI + 0x4]       ; 0045318e
    MOV dword ptr [ESP + 0xec],EAX      ; 00453191
    MOV EAX,dword ptr [ESI + 0x8]       ; 00453198
    MOV dword ptr [ESP + 0xf0],EAX      ; 0045319b
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004531a2
    MOV dword ptr [ESP + 0x9c],EAX      ; 004531a9
    MOV EAX,dword ptr [ESP + 0xec]      ; 004531b0
    MOV dword ptr [ESP + 0xa0],EAX      ; 004531b7
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004531be
    LEA EBX,[ESP + 0x84]                ; 004531c5
    MOV dword ptr [ESP + 0xa4],EAX      ; 004531cc
    LEA EAX,[ESP + 0x9c]                ; 004531d3
    MOV EDX,dword ptr [0x00612560]      ; 004531da | DAT_00612560
    FLD float ptr [EAX]                 ; 004531e0
    FMUL float ptr [0x005fe5fc]         ; 004531e2 | DAT_005fe5fc
    FISTP dword ptr [EBX]               ; 004531e8
    FLD float ptr [EAX + 0x4]           ; 004531ea
    FMUL float ptr [0x005fe5fc]         ; 004531ed | DAT_005fe5fc
    FISTP dword ptr [EBX + 0x4]         ; 004531f3
    FLD float ptr [EAX + 0x8]           ; 004531f6
    FMUL float ptr [0x005fe5fc]         ; 004531f9 | DAT_005fe5fc
    FISTP dword ptr [EBX + 0x8]         ; 004531ff
    LEA EAX,[ESP + 0x84]                ; 00453202
    PUSH EAX                            ; 00453209
    MOV EAX,dword ptr [EDX]             ; 0045320a | DAT_01bc120c
    ADD EAX,0xea570                     ; 0045320c
    PUSH EAX                            ; 00453211
    CALL engine_special.cpp_FUN_00580173 ; 00453212
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00453217
    MOV EAX,dword ptr [EDI]             ; 0045321a
    MOV dword ptr [ESP + 0x10c],EAX     ; 0045321c
    MOV EAX,dword ptr [ESI + 0x4]       ; 00453223
    MOV dword ptr [ESP + 0x110],EAX     ; 00453226
    MOV EAX,dword ptr [EDI + 0x8]       ; 0045322d
    MOV dword ptr [ESP + 0x114],EAX     ; 00453230
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00453237
    MOV dword ptr [ESP + 0x30],EAX      ; 0045323e
    MOV EAX,dword ptr [ESP + 0x110]     ; 00453242
    MOV dword ptr [ESP + 0x34],EAX      ; 00453249
    MOV EAX,dword ptr [ESP + 0x114]     ; 0045324d
    LEA EBX,[ESP + 0xb4]                ; 00453254
    MOV dword ptr [ESP + 0x38],EAX      ; 0045325b
    LEA EAX,[ESP + 0x30]                ; 0045325f
    MOV EDX,dword ptr [0x00612560]      ; 00453263 | DAT_00612560
    FLD float ptr [EAX]                 ; 00453269
    FMUL float ptr [0x005fe5fc]         ; 0045326b | DAT_005fe5fc
    FISTP dword ptr [EBX]               ; 00453271
    FLD float ptr [EAX + 0x4]           ; 00453273
    FMUL float ptr [0x005fe5fc]         ; 00453276 | DAT_005fe5fc
    FISTP dword ptr [EBX + 0x4]         ; 0045327c
    FLD float ptr [EAX + 0x8]           ; 0045327f
    FMUL float ptr [0x005fe5fc]         ; 00453282 | DAT_005fe5fc
    FISTP dword ptr [EBX + 0x8]         ; 00453288
    LEA EAX,[ESP + 0xb4]                ; 0045328b
    PUSH EAX                            ; 00453292
    MOV EAX,dword ptr [EDX]             ; 00453293 | DAT_01bc120c
    ADD EAX,0xea5a0                     ; 00453295
    PUSH EAX                            ; 0045329a
    CALL engine_special.cpp_FUN_00580173 ; 0045329b
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004532a0
    MOV EAX,dword ptr [ESI]             ; 004532a3
    MOV dword ptr [ESP + 0xfc],EAX      ; 004532a5
    MOV EAX,dword ptr [ESI + 0x4]       ; 004532ac
    MOV dword ptr [ESP + 0x100],EAX     ; 004532af
    MOV EAX,dword ptr [EDI + 0x8]       ; 004532b6
    MOV dword ptr [ESP + 0x104],EAX     ; 004532b9
    MOV EAX,dword ptr [ESP + 0xfc]      ; 004532c0
    MOV dword ptr [ESP + 0x6c],EAX      ; 004532c7
    MOV EAX,dword ptr [ESP + 0x100]     ; 004532cb
    MOV dword ptr [ESP + 0x70],EAX      ; 004532d2
    MOV EAX,dword ptr [ESP + 0x104]     ; 004532d6
    LEA EBX,[ESP + 0x78]                ; 004532dd
    MOV dword ptr [ESP + 0x74],EAX      ; 004532e1
    LEA EAX,[ESP + 0x6c]                ; 004532e5
    MOV EDX,dword ptr [0x00612560]      ; 004532e9 | DAT_00612560
    FLD float ptr [EAX]                 ; 004532ef
    FMUL float ptr [0x005fe5fc]         ; 004532f1 | DAT_005fe5fc
    FISTP dword ptr [EBX]               ; 004532f7
    FLD float ptr [EAX + 0x4]           ; 004532f9
    FMUL float ptr [0x005fe5fc]         ; 004532fc | DAT_005fe5fc
    FISTP dword ptr [EBX + 0x4]         ; 00453302
    FLD float ptr [EAX + 0x8]           ; 00453305
    FMUL float ptr [0x005fe5fc]         ; 00453308 | DAT_005fe5fc
    FISTP dword ptr [EBX + 0x8]         ; 0045330e
    LEA EAX,[ESP + 0x78]                ; 00453311
    PUSH EAX                            ; 00453315
    MOV EAX,dword ptr [EDX]             ; 00453316 | DAT_01bc120c
    ADD EAX,0xea5d0                     ; 00453318
    PUSH EAX                            ; 0045331d
    CALL engine_special.cpp_FUN_00580173 ; 0045331e
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EDX,0xffffffff                  ; 00453323
    MOV EAX,0xea480                     ; 00453328
    ADD ESP,0x8                         ; 0045332d
    MOV ECX,dword ptr [0x00612560]      ; 00453330 | DAT_00612560
        ;   Label: LAB_00453330
    MOV ECX,dword ptr [ECX]             ; 00453336 | DAT_01bc120c
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x10] ; 00453338
    ADD EAX,0x30                        ; 0045333c
    AND EDX,ESI                         ; 0045333f
    CMP EAX,0xea600                     ; 00453341
    JNZ 0x00453330                      ; 00453346
        ;   XREF to: 00453330 (CONDITIONAL_JUMP)  ; LAB_00453330
    MOV EBX,0x1                         ; 00453348
    TEST EDX,0x80000000                 ; 0045334d
    JZ 0x0045335c                       ; 00453353
        ;   XREF to: 0045335c (CONDITIONAL_JUMP)  ; LAB_0045335c
    TEST DL,0xff                        ; 00453355
    JZ 0x0045335c                       ; 00453358
        ;   XREF to: 0045335c (CONDITIONAL_JUMP)  ; LAB_0045335c
    XOR EBX,EBX                         ; 0045335a
    MOV EDI,dword ptr [0x00612560]      ; 0045335c | DAT_00612560
        ;   Label: LAB_0045335c
    PUSH EDI                            ; 00453362 | DAT_01bc120c
    CALL engine_drender.cpp_pop_FUN_004839a0 ; 00453363
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 00453368
    MOV EBP,dword ptr [0x00612560]      ; 0045336b | DAT_00612560
    PUSH EBP                            ; 00453371 | DAT_01bc120c
    CALL engine_drender.cpp_pop_FUN_004839a0 ; 00453372
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 00453377
    MOV EAX,EBX                         ; 0045337a
    ADD ESP,0x120                       ; 0045337c
    POP EBP                             ; 00453382
    POP EDI                             ; 00453383
    POP ESI                             ; 00453384
    POP EBX                             ; 00453385
    RET                                 ; 00453386

