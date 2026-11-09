; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00441720(CDemonCamera *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *bbox_min ,CVector3f *bbox_max)
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
; XREF[2]:
;   core_lightgun.cpp_FUN_004e2e70 at 004e3181
;   core_set.cpp_FUN_00530aa0 at 00530bea
;
; Referenced Globals:
;   undefined4 DAT_005ce62e
;   undefined4 DAT_005f4dcc
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c38b6c
;   undefined4 DAT_01c38b70
;   undefined4 DAT_01c38b74
;   undefined4 DAT_01c38b9c
;   undefined4 DAT_01c38ba0
;   undefined4 DAT_01c38ba4
;   undefined4 DAT_01c38ba8
;   undefined4 DAT_01c38bac
;   undefined4 DAT_01c38bb0
;   undefined4 DAT_01c38bb4
;   undefined4 DAT_01c38bb8
;   ... and 1 more
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_matrix.c_matrixPush_FUN_0046b490
;   engine_matrix.c_pop_FUN_0046b4a0
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441720
        ;   Label: core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00441720
    PUSH ESI                            ; 00441721
    PUSH EDI                            ; 00441722
    PUSH EBP                            ; 00441723
    SUB ESP,0x120                       ; 00441724
    MOV EBX,dword ptr [ESP + 0x134]     ; 0044172a
    MOV EBP,dword ptr [ESP + 0x138]     ; 00441731
    MOV EDI,dword ptr [ESP + 0x140]     ; 00441738
    MOV ESI,dword ptr [ESP + 0x144]     ; 0044173f
    MOV EDX,dword ptr [0x0060b280]      ; 00441746 | DAT_0060b280
    PUSH EDX                            ; 0044174c | DAT_01ba5c50
    CALL engine_matrix.c_matrixPush_FUN_0046b490 ; 0044174d
        ;   XREF to: 0046b490 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPush_FUN_0046b490()
    FLD float ptr [EBX + 0x4]           ; 00441752
    FSUB float ptr [EBP]                ; 00441755
    FLD double ptr [0x005ce62e]         ; 00441758 | DAT_005ce62e
    FXCH                                ; 0044175e
    FMUL ST1                            ; 00441760
    FLD float ptr [EBX + 0xc]           ; 00441762
    FLD float ptr [EBX + 0x8]           ; 00441765
    FSUB float ptr [EBP + 0x4]          ; 00441768
    FXCH                                ; 0044176b
    FSUB float ptr [EBP + 0x8]          ; 0044176d
    FXCH                                ; 00441770
    FMUL ST3                            ; 00441772
    FXCH                                ; 00441774
    FMULP ST3                           ; 00441776
    MOV EAX,dword ptr [EBX + 0x178]     ; 00441778
    ADD ESP,0x4                         ; 0044177e
    MOV [0x01c38b9c],EAX                ; 00441781 | DAT_01c38b9c
    MOV EAX,dword ptr [EBX + 0x17c]     ; 00441786
    PUSH 0x0                            ; 0044178c
    MOV [0x01c38ba0],EAX                ; 0044178e | DAT_01c38ba0
    MOV EAX,dword ptr [EBX + 0x180]     ; 00441793
    MOV ECX,dword ptr [ESP + 0x140]     ; 00441799
    MOV [0x01c38ba4],EAX                ; 004417a0 | DAT_01c38ba4
    MOV EAX,dword ptr [EBX + 0x184]     ; 004417a5
    PUSH ECX                            ; 004417ab
    MOV [0x01c38ba8],EAX                ; 004417ac | DAT_01c38ba8
    MOV EAX,dword ptr [EBX + 0x188]     ; 004417b1
    FXCH                                ; 004417b7
    CALL crt_math.c_round_FUN_005b7ff0  ; 004417b9
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    MOV [0x01c38bac],EAX                ; 004417be | DAT_01c38bac
    MOV EAX,dword ptr [EBX + 0x18c]     ; 004417c3
    FXCH                                ; 004417c9
    CALL crt_math.c_round_FUN_005b7ff0  ; 004417cb
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    MOV [0x01c38bb0],EAX                ; 004417d0 | DAT_01c38bb0
    MOV EAX,dword ptr [EBX + 0x190]     ; 004417d5
    FXCH ST2                            ; 004417db
    CALL crt_math.c_round_FUN_005b7ff0  ; 004417dd
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    MOV [0x01c38bb4],EAX                ; 004417e2 | DAT_01c38bb4
    MOV EAX,dword ptr [EBX + 0x194]     ; 004417e7
    FXCH                                ; 004417ed
    FISTP dword ptr [0x01c38b6c]        ; 004417ef | DAT_01c38b6c
    MOV [0x01c38bb8],EAX                ; 004417f5 | DAT_01c38bb8
    MOV EAX,dword ptr [EBX + 0x198]     ; 004417fa
    MOV EBX,dword ptr [0x0060b280]      ; 00441800 | DAT_0060b280
    FXCH                                ; 00441806
    FISTP dword ptr [0x01c38b70]        ; 00441808 | DAT_01c38b70
    PUSH EBX                            ; 0044180e | DAT_01ba5c50
    FISTP dword ptr [0x01c38b74]        ; 0044180f | DAT_01c38b74
    MOV [0x01c38bbc],EAX                ; 00441815 | DAT_01c38bbc
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0044181a
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0044181f
    MOV EAX,dword ptr [ESI]             ; 00441822
    MOV dword ptr [ESP + 0xc4],EAX      ; 00441824
    MOV EAX,dword ptr [EDI + 0x4]       ; 0044182b
    MOV dword ptr [ESP + 0xc8],EAX      ; 0044182e
    MOV EAX,dword ptr [ESI + 0x8]       ; 00441835
    MOV dword ptr [ESP + 0xdc],EAX      ; 00441838
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0044183f
    MOV dword ptr [ESP + 0x18],EAX      ; 00441846
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0044184a
    MOV dword ptr [ESP + 0x1c],EAX      ; 00441851
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00441855
    LEA EBX,[ESP + 0x48]                ; 0044185c
    MOV dword ptr [ESP + 0x20],EAX      ; 00441860
    LEA EAX,[ESP + 0x18]                ; 00441864
    MOV EDX,dword ptr [0x0060b280]      ; 00441868 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0044186e
    FMUL float ptr [0x005f4dcc]         ; 00441870 | DAT_005f4dcc
    FISTP dword ptr [EBX]               ; 00441876
    FLD float ptr [EAX + 0x4]           ; 00441878
    FMUL float ptr [0x005f4dcc]         ; 0044187b | DAT_005f4dcc
    FISTP dword ptr [EBX + 0x4]         ; 00441881
    FLD float ptr [EAX + 0x8]           ; 00441884
    FMUL float ptr [0x005f4dcc]         ; 00441887 | DAT_005f4dcc
    FISTP dword ptr [EBX + 0x8]         ; 0044188d
    LEA EAX,[ESP + 0x48]                ; 00441890
    PUSH EAX                            ; 00441894
    MOV EAX,dword ptr [EDX]             ; 00441895 | DAT_01ba5c50
    ADD EAX,0xea480                     ; 00441897
    PUSH EAX                            ; 0044189c
    CALL engine_special.cpp_FUN_0055d723 ; 0044189d
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004418a2
    MOV EAX,dword ptr [EDI]             ; 004418a5
    MOV dword ptr [ESP + 0xc0],EAX      ; 004418a7
    MOV EAX,dword ptr [EDI + 0x4]       ; 004418ae
    MOV dword ptr [ESP + 0xcc],EAX      ; 004418b1
    MOV EAX,dword ptr [ESI + 0x8]       ; 004418b8
    MOV dword ptr [ESP + 0xd0],EAX      ; 004418bb
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004418c2
    MOV dword ptr [ESP + 0x54],EAX      ; 004418c9
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004418cd
    MOV dword ptr [ESP + 0x58],EAX      ; 004418d4
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004418d8
    MOV EDX,dword ptr [0x0060b280]      ; 004418df | DAT_0060b280
    MOV dword ptr [ESP + 0x5c],EAX      ; 004418e5
    LEA EBX,[ESP + 0x60]                ; 004418e9
    LEA EAX,[ESP + 0x54]                ; 004418ed
    FLD float ptr [EAX]                 ; 004418f1
    FMUL float ptr [0x005f4dcc]         ; 004418f3 | DAT_005f4dcc
    FISTP dword ptr [EBX]               ; 004418f9
    FLD float ptr [EAX + 0x4]           ; 004418fb
    FMUL float ptr [0x005f4dcc]         ; 004418fe | DAT_005f4dcc
    FISTP dword ptr [EBX + 0x4]         ; 00441904
    FLD float ptr [EAX + 0x8]           ; 00441907
    FMUL float ptr [0x005f4dcc]         ; 0044190a | DAT_005f4dcc
    FISTP dword ptr [EBX + 0x8]         ; 00441910
    LEA EAX,[ESP + 0x60]                ; 00441913
    PUSH EAX                            ; 00441917
    MOV EAX,dword ptr [EDX]             ; 00441918 | DAT_01ba5c50
    ADD EAX,0xea4b0                     ; 0044191a
    PUSH EAX                            ; 0044191f
    CALL engine_special.cpp_FUN_0055d723 ; 00441920
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00441925
    MOV EAX,dword ptr [EDI]             ; 00441928
    MOV dword ptr [ESP + 0xd4],EAX      ; 0044192a
    MOV EAX,dword ptr [EDI + 0x4]       ; 00441931
    MOV dword ptr [ESP + 0xe4],EAX      ; 00441934
    MOV EAX,dword ptr [EDI + 0x8]       ; 0044193b
    MOV dword ptr [ESP + 0x108],EAX     ; 0044193e
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00441945
    MOV dword ptr [ESP + 0xa8],EAX      ; 0044194c
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00441953
    MOV dword ptr [ESP + 0xac],EAX      ; 0044195a
    MOV EAX,dword ptr [ESP + 0x108]     ; 00441961
    LEA EBX,[ESP + 0x3c]                ; 00441968
    MOV dword ptr [ESP + 0xb0],EAX      ; 0044196c
    LEA EAX,[ESP + 0xa8]                ; 00441973
    MOV EDX,dword ptr [0x0060b280]      ; 0044197a | DAT_0060b280
    FLD float ptr [EAX]                 ; 00441980
    FMUL float ptr [0x005f4dcc]         ; 00441982 | DAT_005f4dcc
    FISTP dword ptr [EBX]               ; 00441988
    FLD float ptr [EAX + 0x4]           ; 0044198a
    FMUL float ptr [0x005f4dcc]         ; 0044198d | DAT_005f4dcc
    FISTP dword ptr [EBX + 0x4]         ; 00441993
    FLD float ptr [EAX + 0x8]           ; 00441996
    FMUL float ptr [0x005f4dcc]         ; 00441999 | DAT_005f4dcc
    FISTP dword ptr [EBX + 0x8]         ; 0044199f
    LEA EAX,[ESP + 0x3c]                ; 004419a2
    PUSH EAX                            ; 004419a6
    MOV EAX,dword ptr [EDX]             ; 004419a7 | DAT_01ba5c50
    ADD EAX,0xea4e0                     ; 004419a9
    PUSH EAX                            ; 004419ae
    CALL engine_special.cpp_FUN_0055d723 ; 004419af
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004419b4
    MOV EAX,dword ptr [ESI]             ; 004419b7
    MOV dword ptr [ESP + 0x118],EAX     ; 004419b9
    MOV EAX,dword ptr [EDI + 0x4]       ; 004419c0
    MOV dword ptr [ESP + 0xd8],EAX      ; 004419c3
    MOV EAX,dword ptr [EDI + 0x8]       ; 004419ca
    MOV dword ptr [ESP + 0x11c],EAX     ; 004419cd
    MOV EAX,dword ptr [ESP + 0x118]     ; 004419d4
    MOV dword ptr [ESP + 0xc],EAX       ; 004419db
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004419df
    MOV dword ptr [ESP + 0x10],EAX      ; 004419e6
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004419ea
    LEA EBX,[ESP + 0x24]                ; 004419f1
    MOV dword ptr [ESP + 0x14],EAX      ; 004419f5
    LEA EAX,[ESP + 0xc]                 ; 004419f9
    MOV EDX,dword ptr [0x0060b280]      ; 004419fd | DAT_0060b280
    FLD float ptr [EAX]                 ; 00441a03
    FMUL float ptr [0x005f4dcc]         ; 00441a05 | DAT_005f4dcc
    FISTP dword ptr [EBX]               ; 00441a0b
    FLD float ptr [EAX + 0x4]           ; 00441a0d
    FMUL float ptr [0x005f4dcc]         ; 00441a10 | DAT_005f4dcc
    FISTP dword ptr [EBX + 0x4]         ; 00441a16
    FLD float ptr [EAX + 0x8]           ; 00441a19
    FMUL float ptr [0x005f4dcc]         ; 00441a1c | DAT_005f4dcc
    FISTP dword ptr [EBX + 0x8]         ; 00441a22
    LEA EAX,[ESP + 0x24]                ; 00441a25
    PUSH EAX                            ; 00441a29
    MOV EAX,dword ptr [EDX]             ; 00441a2a | DAT_01ba5c50
    ADD EAX,0xea510                     ; 00441a2c
    PUSH EAX                            ; 00441a31
    CALL engine_special.cpp_FUN_0055d723 ; 00441a32
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00441a37
    MOV EAX,dword ptr [ESI]             ; 00441a3a
    MOV dword ptr [ESP + 0xf4],EAX      ; 00441a3c
    MOV EAX,dword ptr [ESI + 0x4]       ; 00441a43
    MOV dword ptr [ESP + 0xf8],EAX      ; 00441a46
    MOV EAX,dword ptr [ESI + 0x8]       ; 00441a4d
    MOV dword ptr [ESP + 0xe0],EAX      ; 00441a50
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00441a57
    MOV dword ptr [ESP + 0x90],EAX      ; 00441a5e
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00441a65
    MOV dword ptr [ESP + 0x94],EAX      ; 00441a6c
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00441a73
    MOV EBX,ESP                         ; 00441a7a
    MOV dword ptr [ESP + 0x98],EAX      ; 00441a7c
    LEA EAX,[ESP + 0x90]                ; 00441a83
    MOV EDX,dword ptr [0x0060b280]      ; 00441a8a | DAT_0060b280
    FLD float ptr [EAX]                 ; 00441a90
    FMUL float ptr [0x005f4dcc]         ; 00441a92 | DAT_005f4dcc
    FISTP dword ptr [EBX]               ; 00441a98
    FLD float ptr [EAX + 0x4]           ; 00441a9a
    FMUL float ptr [0x005f4dcc]         ; 00441a9d | DAT_005f4dcc
    FISTP dword ptr [EBX + 0x4]         ; 00441aa3
    FLD float ptr [EAX + 0x8]           ; 00441aa6
    FMUL float ptr [0x005f4dcc]         ; 00441aa9 | DAT_005f4dcc
    FISTP dword ptr [EBX + 0x8]         ; 00441aaf
    MOV EAX,ESP                         ; 00441ab2
    PUSH EAX                            ; 00441ab4
    MOV EAX,dword ptr [EDX]             ; 00441ab5 | DAT_01ba5c50
    ADD EAX,0xea540                     ; 00441ab7
    PUSH EAX                            ; 00441abc
    CALL engine_special.cpp_FUN_0055d723 ; 00441abd
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00441ac2
    MOV EAX,dword ptr [EDI]             ; 00441ac5
    MOV dword ptr [ESP + 0xe8],EAX      ; 00441ac7
    MOV EAX,dword ptr [ESI + 0x4]       ; 00441ace
    MOV dword ptr [ESP + 0xec],EAX      ; 00441ad1
    MOV EAX,dword ptr [ESI + 0x8]       ; 00441ad8
    MOV dword ptr [ESP + 0xf0],EAX      ; 00441adb
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00441ae2
    MOV dword ptr [ESP + 0x9c],EAX      ; 00441ae9
    MOV EAX,dword ptr [ESP + 0xec]      ; 00441af0
    MOV dword ptr [ESP + 0xa0],EAX      ; 00441af7
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00441afe
    LEA EBX,[ESP + 0x84]                ; 00441b05
    MOV dword ptr [ESP + 0xa4],EAX      ; 00441b0c
    LEA EAX,[ESP + 0x9c]                ; 00441b13
    MOV EDX,dword ptr [0x0060b280]      ; 00441b1a | DAT_0060b280
    FLD float ptr [EAX]                 ; 00441b20
    FMUL float ptr [0x005f4dcc]         ; 00441b22 | DAT_005f4dcc
    FISTP dword ptr [EBX]               ; 00441b28
    FLD float ptr [EAX + 0x4]           ; 00441b2a
    FMUL float ptr [0x005f4dcc]         ; 00441b2d | DAT_005f4dcc
    FISTP dword ptr [EBX + 0x4]         ; 00441b33
    FLD float ptr [EAX + 0x8]           ; 00441b36
    FMUL float ptr [0x005f4dcc]         ; 00441b39 | DAT_005f4dcc
    FISTP dword ptr [EBX + 0x8]         ; 00441b3f
    LEA EAX,[ESP + 0x84]                ; 00441b42
    PUSH EAX                            ; 00441b49
    MOV EAX,dword ptr [EDX]             ; 00441b4a | DAT_01ba5c50
    ADD EAX,0xea570                     ; 00441b4c
    PUSH EAX                            ; 00441b51
    CALL engine_special.cpp_FUN_0055d723 ; 00441b52
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00441b57
    MOV EAX,dword ptr [EDI]             ; 00441b5a
    MOV dword ptr [ESP + 0x10c],EAX     ; 00441b5c
    MOV EAX,dword ptr [ESI + 0x4]       ; 00441b63
    MOV dword ptr [ESP + 0x110],EAX     ; 00441b66
    MOV EAX,dword ptr [EDI + 0x8]       ; 00441b6d
    MOV dword ptr [ESP + 0x114],EAX     ; 00441b70
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00441b77
    MOV dword ptr [ESP + 0x30],EAX      ; 00441b7e
    MOV EAX,dword ptr [ESP + 0x110]     ; 00441b82
    MOV dword ptr [ESP + 0x34],EAX      ; 00441b89
    MOV EAX,dword ptr [ESP + 0x114]     ; 00441b8d
    LEA EBX,[ESP + 0xb4]                ; 00441b94
    MOV dword ptr [ESP + 0x38],EAX      ; 00441b9b
    LEA EAX,[ESP + 0x30]                ; 00441b9f
    MOV EDX,dword ptr [0x0060b280]      ; 00441ba3 | DAT_0060b280
    FLD float ptr [EAX]                 ; 00441ba9
    FMUL float ptr [0x005f4dcc]         ; 00441bab | DAT_005f4dcc
    FISTP dword ptr [EBX]               ; 00441bb1
    FLD float ptr [EAX + 0x4]           ; 00441bb3
    FMUL float ptr [0x005f4dcc]         ; 00441bb6 | DAT_005f4dcc
    FISTP dword ptr [EBX + 0x4]         ; 00441bbc
    FLD float ptr [EAX + 0x8]           ; 00441bbf
    FMUL float ptr [0x005f4dcc]         ; 00441bc2 | DAT_005f4dcc
    FISTP dword ptr [EBX + 0x8]         ; 00441bc8
    LEA EAX,[ESP + 0xb4]                ; 00441bcb
    PUSH EAX                            ; 00441bd2
    MOV EAX,dword ptr [EDX]             ; 00441bd3 | DAT_01ba5c50
    ADD EAX,0xea5a0                     ; 00441bd5
    PUSH EAX                            ; 00441bda
    CALL engine_special.cpp_FUN_0055d723 ; 00441bdb
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00441be0
    MOV EAX,dword ptr [ESI]             ; 00441be3
    MOV dword ptr [ESP + 0xfc],EAX      ; 00441be5
    MOV EAX,dword ptr [ESI + 0x4]       ; 00441bec
    MOV dword ptr [ESP + 0x100],EAX     ; 00441bef
    MOV EAX,dword ptr [EDI + 0x8]       ; 00441bf6
    MOV dword ptr [ESP + 0x104],EAX     ; 00441bf9
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00441c00
    MOV dword ptr [ESP + 0x6c],EAX      ; 00441c07
    MOV EAX,dword ptr [ESP + 0x100]     ; 00441c0b
    MOV dword ptr [ESP + 0x70],EAX      ; 00441c12
    MOV EAX,dword ptr [ESP + 0x104]     ; 00441c16
    LEA EBX,[ESP + 0x78]                ; 00441c1d
    MOV dword ptr [ESP + 0x74],EAX      ; 00441c21
    LEA EAX,[ESP + 0x6c]                ; 00441c25
    MOV EDX,dword ptr [0x0060b280]      ; 00441c29 | DAT_0060b280
    FLD float ptr [EAX]                 ; 00441c2f
    FMUL float ptr [0x005f4dcc]         ; 00441c31 | DAT_005f4dcc
    FISTP dword ptr [EBX]               ; 00441c37
    FLD float ptr [EAX + 0x4]           ; 00441c39
    FMUL float ptr [0x005f4dcc]         ; 00441c3c | DAT_005f4dcc
    FISTP dword ptr [EBX + 0x4]         ; 00441c42
    FLD float ptr [EAX + 0x8]           ; 00441c45
    FMUL float ptr [0x005f4dcc]         ; 00441c48 | DAT_005f4dcc
    FISTP dword ptr [EBX + 0x8]         ; 00441c4e
    LEA EAX,[ESP + 0x78]                ; 00441c51
    PUSH EAX                            ; 00441c55
    MOV EAX,dword ptr [EDX]             ; 00441c56 | DAT_01ba5c50
    ADD EAX,0xea5d0                     ; 00441c58
    PUSH EAX                            ; 00441c5d
    CALL engine_special.cpp_FUN_0055d723 ; 00441c5e
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EDX,0xffffffff                  ; 00441c63
    MOV EAX,0xea480                     ; 00441c68
    ADD ESP,0x8                         ; 00441c6d
    MOV ECX,dword ptr [0x0060b280]      ; 00441c70 | DAT_0060b280
        ;   Label: LAB_00441c70
    MOV ECX,dword ptr [ECX]             ; 00441c76 | DAT_01ba5c50
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x10] ; 00441c78
    ADD EAX,0x30                        ; 00441c7c
    AND EDX,ESI                         ; 00441c7f
    CMP EAX,0xea600                     ; 00441c81
    JNZ 0x00441c70                      ; 00441c86
        ;   XREF to: 00441c70 (CONDITIONAL_JUMP)  ; LAB_00441c70
    MOV EBX,0x1                         ; 00441c88
    TEST EDX,0x80000000                 ; 00441c8d
    JZ 0x00441c9c                       ; 00441c93
        ;   XREF to: 00441c9c (CONDITIONAL_JUMP)  ; LAB_00441c9c
    TEST DL,0xff                        ; 00441c95
    JZ 0x00441c9c                       ; 00441c98
        ;   XREF to: 00441c9c (CONDITIONAL_JUMP)  ; LAB_00441c9c
    XOR EBX,EBX                         ; 00441c9a
    MOV EDI,dword ptr [0x0060b280]      ; 00441c9c | DAT_0060b280
        ;   Label: LAB_00441c9c
    PUSH EDI                            ; 00441ca2 | DAT_01ba5c50
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 00441ca3
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 00441ca8
    MOV EBP,dword ptr [0x0060b280]      ; 00441cab | DAT_0060b280
    PUSH EBP                            ; 00441cb1 | DAT_01ba5c50
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 00441cb2
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 00441cb7
    MOV EAX,EBX                         ; 00441cba
    ADD ESP,0x120                       ; 00441cbc
    POP EBP                             ; 00441cc2
    POP EDI                             ; 00441cc3
    POP ESI                             ; 00441cc4
    POP EBX                             ; 00441cc5
    RET                                 ; 00441cc6

