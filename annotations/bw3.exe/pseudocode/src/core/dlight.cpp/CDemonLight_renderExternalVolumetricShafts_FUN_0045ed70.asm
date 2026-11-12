; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_0045ed70(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x18c]:1  local_18c
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined        Stack[-0x158]:1  local_158
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined        Stack[-0x140]:1  local_140
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
; undefined        Stack[-0x104]:1  local_104
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined        Stack[-0xec]:1  local_ec
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined        Stack[-0xbc]:1  local_bc
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined        Stack[-0x98]:1  local_98
; undefined4       Stack[-0x78]:4  local_78
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
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_0045d170 at 0045d4e8
;
; Referenced Globals:
;   undefined4 DAT_005bb544
;   undefined4 DAT_005bb54c
;   undefined4 DAT_005bb554
;   undefined4 DAT_005bb55c
;   undefined4 DAT_005bb564
;   undefined4 DAT_005bb56c
;   undefined4 DAT_005bb570
;   undefined4 DAT_005bb574
;   undefined4 DAT_005bb57c
;   undefined4 DAT_005bb584
;   undefined4 DAT_005de4f0
;   undefined4 DAT_005de4f8
;   undefined4 DAT_005f2afc
;   CGame* g_CGamePtr = 01d2130c
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   ... and 3 more
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045b800
;   core_dirmat.cpp_FUN_0045b870
;   core_dirmat.cpp_FUN_0045b9b0
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0046d330
;   engine_drender.cpp_FUN_0046d1a0
;   engine_drender.cpp_FUN_0046d1c0
;   engine_drender.cpp_pop_FUN_0046d080
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ed70
        ;   Label: core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_0045ed70
    PUSH ESI                            ; 0045ed71
    PUSH EDI                            ; 0045ed72
    PUSH EBP                            ; 0045ed73
    MOV EBP,ESP                         ; 0045ed74
    SUB ESP,0x17c                       ; 0045ed76
    SUB EBP,0x7e                        ; 0045ed7c
    MOV EAX,dword ptr [EBP + 0x92]      ; 0045ed7f
    CMP dword ptr [EAX + 0x1cbc],0x0    ; 0045ed85
    JZ 0x0045edaf                       ; 0045ed8c
        ;   XREF to: 0045edaf (CONDITIONAL_JUMP)  ; LAB_0045edaf
    MOV EAX,[0x00603b28]                ; 0045ed8e | g_CDemonSetPtr
    FLD float ptr [EAX + 0x15ac80]      ; 0045ed93 | g_CDemonSetInstance.active_fog.density_multiplier
    FCOMP double ptr [0x005bb544]       ; 0045ed99 | DAT_005bb544
    FNSTSW AX                           ; 0045ed9f
    SAHF                                ; 0045eda1
    JC 0x0045edaf                       ; 0045eda2
        ;   XREF to: 0045edaf (CONDITIONAL_JUMP)  ; LAB_0045edaf
    MOV EAX,[0x005fe9dc]                ; 0045eda4 | g_CGamePtr
    CMP dword ptr [EAX + 0xc],0x0       ; 0045eda9 | g_CGameInstance.halo_mode
    JNZ 0x0045edb7                      ; 0045edad
        ;   XREF to: 0045edb7 (CONDITIONAL_JUMP)  ; LAB_0045edb7
    LEA ESP,[EBP + 0x7e]                ; 0045edaf
        ;   Label: LAB_0045edaf
    POP EBP                             ; 0045edb2
    POP EDI                             ; 0045edb3
    POP ESI                             ; 0045edb4
    POP EBX                             ; 0045edb5
    RET                                 ; 0045edb6
    MOV EBX,dword ptr [0x005f2afc]      ; 0045edb7 | DAT_005f2afc
        ;   Label: LAB_0045edb7
    PUSH EBX                            ; 0045edbd | DAT_01bdd7e4
    LEA ESI,[EBP + -0x2e]               ; 0045edbe
    LEA EDI,[EBP + -0x16]               ; 0045edc1
    CALL engine_drender.cpp_FUN_0046d1a0 ; 0045edc4
        ;   XREF to: 0046d1a0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046d1a0()
    LEA ESI,[EBP + -0x2e]               ; 0045edc9
    LEA EAX,[EBP + -0x16]               ; 0045edcc
    LEA EBX,[EBP + 0xffffff42]          ; 0045edcf
    ADD ESP,0x4                         ; 0045edd5
    MOVSD ES:EDI,ESI                    ; 0045edd8
    MOVSD ES:EDI,ESI                    ; 0045edd9
    MOVSD ES:EDI,ESI                    ; 0045edda
    FILD dword ptr [EAX]                ; 0045eddb
    FMUL float ptr [0x005de4f8]         ; 0045eddd | DAT_005de4f8
    FSTP float ptr [EBX]                ; 0045ede3
    FILD dword ptr [EAX + 0x4]          ; 0045ede5
    FMUL float ptr [0x005de4f8]         ; 0045ede8 | DAT_005de4f8
    FSTP float ptr [EBX + 0x4]          ; 0045edee
    FILD dword ptr [EAX + 0x8]          ; 0045edf1
    FMUL float ptr [0x005de4f8]         ; 0045edf4 | DAT_005de4f8
    FSTP float ptr [EBX + 0x8]          ; 0045edfa
    FLD float ptr [EBP + 0xffffff42]    ; 0045edfd
    FLD float ptr [EBP + 0xffffff46]    ; 0045ee03
    FLD float ptr [EBP + 0xffffff4a]    ; 0045ee09
    MOV EBX,dword ptr [EBP + 0x92]      ; 0045ee0f
    LEA EDI,[EBP + -0x3a]               ; 0045ee15
    LEA ESI,[EBP + -0x22]               ; 0045ee18
    FXCH ST2                            ; 0045ee1b
    FSUB float ptr [EBX + 0x4]          ; 0045ee1d
    FXCH                                ; 0045ee20
    FSUB float ptr [EBX + 0x8]          ; 0045ee22
    FXCH ST2                            ; 0045ee25
    FSUB float ptr [EBX + 0xc]          ; 0045ee27
    FXCH                                ; 0045ee2a
    FSTP float ptr [EBP + -0x22]        ; 0045ee2c
    FXCH                                ; 0045ee2f
    FSTP float ptr [EBP + -0x1e]        ; 0045ee31
    FSTP float ptr [EBP + -0x1a]        ; 0045ee34
    MOVSD ES:EDI,ESI                    ; 0045ee37
    MOVSD ES:EDI,ESI                    ; 0045ee38
    MOVSD ES:EDI,ESI                    ; 0045ee39
    FLD float ptr [EBP + -0x36]         ; 0045ee3a
    FMUL ST0                            ; 0045ee3d
    FLD float ptr [EBP + -0x3a]         ; 0045ee3f
    FMUL ST0                            ; 0045ee42
    FADDP                               ; 0045ee44
    FLD float ptr [EBP + -0x32]         ; 0045ee46
    FMUL ST0                            ; 0045ee49
    FADDP                               ; 0045ee4b
    FSQRT                               ; 0045ee4d
    ADD EBX,0x4                         ; 0045ee4f
    FLDZ                                ; 0045ee52
    FCOMPP                              ; 0045ee54
    FNSTSW AX                           ; 0045ee56
    SAHF                                ; 0045ee58
    JNC 0x0045edaf                      ; 0045ee59
        ;   XREF to: 0045edaf (CONDITIONAL_JUMP)  ; LAB_0045edaf
    MOV dword ptr [EBP + -0x62],0x3f800000 ; 0045ee5f
    LEA EAX,[EBP + -0x6a]               ; 0045ee66
    XOR ESI,ESI                         ; 0045ee69
    PUSH EAX                            ; 0045ee6b
    MOV EAX,dword ptr [EBP + 0x92]      ; 0045ee6c
    MOV dword ptr [EBP + -0x6a],ESI     ; 0045ee72
    ADD EAX,0x10                        ; 0045ee75
    MOV dword ptr [EBP + -0x66],ESI     ; 0045ee78
    PUSH EAX                            ; 0045ee7b
    LEA ESI,[EBP + -0x5e]               ; 0045ee7c
    MOV dword ptr [EBP + 0x76],EAX      ; 0045ee7f
    CALL core_dirmat.cpp_FUN_0045b800   ; 0045ee82
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    ADD ESP,0x8                         ; 0045ee87
    MOV ECX,dword ptr [0x005f2afc]      ; 0045ee8a | DAT_005f2afc
    PUSH ECX                            ; 0045ee90 | DAT_01bdd7e4
    LEA ESI,[EBP + 0xffffff4e]          ; 0045ee91
    LEA EDI,[EBP + 0xffffff72]          ; 0045ee97
    CALL engine_drender.cpp_FUN_0046d1c0 ; 0045ee9d
        ;   XREF to: 0046d1c0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046d1c0()
    LEA ESI,[EBP + 0xffffff4e]          ; 0045eea2
    LEA EAX,[EBP + 0xffffff72]          ; 0045eea8
    ADD ESP,0x4                         ; 0045eeae
    MOVSD ES:EDI,ESI                    ; 0045eeb1
    MOVSD ES:EDI,ESI                    ; 0045eeb2
    MOVSD ES:EDI,ESI                    ; 0045eeb3
    PUSH EAX                            ; 0045eeb4
    FLD float ptr [EBP + 0xffffff76]    ; 0045eeb5
    FLD float ptr [EBP + 0xffffff72]    ; 0045eebb
    FSUB float ptr [EBX]                ; 0045eec1
    FLD float ptr [EBP + 0xffffff7a]    ; 0045eec3
    FXCH                                ; 0045eec9
    FSTP float ptr [EBP + 0xffffff72]   ; 0045eecb
    FXCH                                ; 0045eed1
    FSUB float ptr [EBX + 0x4]          ; 0045eed3
    LEA ESI,[EBP + -0xa]                ; 0045eed6
    FSTP float ptr [EBP + 0xffffff76]   ; 0045eed9
    FSUB float ptr [EBX + 0x8]          ; 0045eedf
    MOV EBX,dword ptr [EBP + 0x76]      ; 0045eee2
    LEA EDI,[EBP + 0xffffff66]          ; 0045eee5
    PUSH EBX                            ; 0045eeeb
    FSTP float ptr [EBP + 0xffffff7a]   ; 0045eeec
    CALL core_dirmat.cpp_FUN_0045b870   ; 0045eef2
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b870()
    LEA ESI,[EBP + -0xa]                ; 0045eef7
    LEA EDX,[EBP + 0xffffff66]          ; 0045eefa
    LEA EAX,[EBP + 0xffffff72]          ; 0045ef00
    ADD ESP,0x8                         ; 0045ef06
    MOVSD ES:EDI,ESI                    ; 0045ef09
    MOVSD ES:EDI,ESI                    ; 0045ef0a
    MOVSD ES:EDI,ESI                    ; 0045ef0b
    CMP EAX,EDX                         ; 0045ef0c
    JZ 0x0045ef34                       ; 0045ef0e
        ;   XREF to: 0045ef34 (CONDITIONAL_JUMP)  ; LAB_0045ef34
    MOV EAX,dword ptr [EBP + 0xffffff66] ; 0045ef10
    MOV dword ptr [EBP + 0xffffff72],EAX ; 0045ef16
    MOV EAX,dword ptr [EBP + 0xffffff6a] ; 0045ef1c
    MOV dword ptr [EBP + 0xffffff76],EAX ; 0045ef22
    MOV EAX,dword ptr [EBP + 0xffffff6e] ; 0045ef28
    MOV dword ptr [EBP + 0xffffff7a],EAX ; 0045ef2e
    FLD float ptr [EBP + 0xffffff7a]    ; 0045ef34
        ;   Label: LAB_0045ef34
    FMUL double ptr [0x005bb54c]        ; 0045ef3a | DAT_005bb54c
    MOV EAX,dword ptr [EBP + 0x92]      ; 0045ef40
    FDIV float ptr [EAX + 0x38]         ; 0045ef46
    FLD float ptr [EBP + 0xffffff76]    ; 0045ef49
    FMUL ST0                            ; 0045ef4f
    FLD float ptr [EBP + 0xffffff72]    ; 0045ef51
    FMUL ST0                            ; 0045ef57
    FXCH ST2                            ; 0045ef59
    FMUL double ptr [0x005bb554]        ; 0045ef5b | DAT_005bb554
    FXCH ST2                            ; 0045ef61
    FADDP                               ; 0045ef63
    FLD ST0                             ; 0045ef65
    FLD ST2                             ; 0045ef67
    FMULP ST3                           ; 0045ef69
    FDIV ST0,ST2                        ; 0045ef6b
    FLD1                                ; 0045ef6d
    FSUBRP                              ; 0045ef6f
    FSTP float ptr [EBP + 0x32]         ; 0045ef71
    FCOMPP                              ; 0045ef74
    FNSTSW AX                           ; 0045ef76
    SAHF                                ; 0045ef78
    JNC 0x0045ef8d                      ; 0045ef79
        ;   XREF to: 0045ef8d (CONDITIONAL_JUMP)  ; LAB_0045ef8d
    FLD float ptr [EBP + 0x32]          ; 0045ef7b
    FCOMP double ptr [0x005bb55c]       ; 0045ef7e | DAT_005bb55c
    FNSTSW AX                           ; 0045ef84
    SAHF                                ; 0045ef86
    JA 0x0045edaf                       ; 0045ef87
        ;   XREF to: 0045edaf (CONDITIONAL_JUMP)  ; LAB_0045edaf
    MOV EAX,dword ptr [EBP + 0x92]      ; 0045ef8d
        ;   Label: LAB_0045ef8d
    ADD EAX,0x4                         ; 0045ef93
    PUSH EAX                            ; 0045ef96
    MOV ESI,dword ptr [0x005f2afc]      ; 0045ef97 | DAT_005f2afc
    PUSH ESI                            ; 0045ef9d | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 0045ef9e
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    MOV EAX,dword ptr [EBP + 0x92]      ; 0045efa3
    ADD ESP,0x8                         ; 0045efa9
    ADD EAX,0x10                        ; 0045efac
    PUSH EAX                            ; 0045efaf
    LEA ESI,[EBP + 0xffffff36]          ; 0045efb0
    LEA EDI,[EBP + -0x76]               ; 0045efb6
    CALL core_dirmat.cpp_FUN_0045b9b0   ; 0045efb9
        ;   XREF to: 0045b9b0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b9b0()
    ADD ESP,0x4                         ; 0045efbe
    LEA ESI,[EBP + 0xffffff36]          ; 0045efc1
    LEA EAX,[EBP + -0x76]               ; 0045efc7
    PUSH 0x0                            ; 0045efca
    MOVSD ES:EDI,ESI                    ; 0045efcc
    MOVSD ES:EDI,ESI                    ; 0045efcd
    MOVSD ES:EDI,ESI                    ; 0045efce
    PUSH EAX                            ; 0045efcf
    MOV EDI,dword ptr [0x005f2afc]      ; 0045efd0 | DAT_005f2afc
    PUSH EDI                            ; 0045efd6 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 0045efd7
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    MOV EAX,0x1                         ; 0045efdc
    ADD ESP,0xc                         ; 0045efe1
    MOV dword ptr [EBP + 0x36],EAX      ; 0045efe4
    MOV EAX,dword ptr [EBP + 0x92]      ; 0045efe7
        ;   Label: LAB_0045efe7
    FLD float ptr [EAX + 0x38]          ; 0045efed
    FDIVR double ptr [0x005bb54c]       ; 0045eff0 | DAT_005bb54c
    MOV EAX,dword ptr [EBP + 0x36]      ; 0045eff6
    MOV dword ptr [EBP + 0x76],EAX      ; 0045eff9
    FILD dword ptr [EBP + 0x76]         ; 0045effc
    FMULP                               ; 0045efff
    FMUL double ptr [0x005bb564]        ; 0045f001 | DAT_005bb564
    FST float ptr [EBP + 0x3a]          ; 0045f007
    FLD ST0                             ; 0045f00a
    FLD1                                ; 0045f00c
    FPATAN                              ; 0045f00e
    FCOS                                ; 0045f010
    FLD1                                ; 0045f012
    XOR EDX,EDX                         ; 0045f014
    FSUBRP ST2,ST0                      ; 0045f016
    MOV dword ptr [EBP + 0x3e],EDX      ; 0045f018
    FXCH                                ; 0045f01b
    FSTP float ptr [EBP + 0x46]         ; 0045f01d
    FSTP float ptr [EBP + 0x42]         ; 0045f020
    MOV EAX,dword ptr [EBP + 0x3e]      ; 0045f023
        ;   Label: LAB_0045f023
    MOV dword ptr [EBP + 0x76],EAX      ; 0045f026
    FLD float ptr [0x005bb56c]          ; 0045f029 | DAT_005bb56c
    FILD dword ptr [EBP + 0x76]         ; 0045f02f
    FMUL ST1                            ; 0045f032
    FLD float ptr [0x005bb570]          ; 0045f034 | DAT_005bb570
    FXCH                                ; 0045f03a
    FMUL ST1                            ; 0045f03c
    INC EAX                             ; 0045f03e
    FLD double ptr [0x005bb554]         ; 0045f03f | DAT_005bb554
    FXCH                                ; 0045f045
    FMUL ST1                            ; 0045f047
    MOV dword ptr [EBP + 0x76],EAX      ; 0045f049
    FLD ST0                             ; 0045f04c
    FSIN                                ; 0045f04e
    FILD dword ptr [EBP + 0x76]         ; 0045f050
    FMULP ST5                           ; 0045f053
    FXCH ST4                            ; 0045f055
    FMULP ST3                           ; 0045f057
    FXCH ST2                            ; 0045f059
    FMULP                               ; 0045f05b
    FLD ST0                             ; 0045f05d
    FSIN                                ; 0045f05f
    FXCH ST2                            ; 0045f061
    FCOS                                ; 0045f063
    FXCH                                ; 0045f065
    FCOS                                ; 0045f067
    MOV EDX,dword ptr [EBP + 0x92]      ; 0045f069
    MOV EDX,dword ptr [EDX + 0x1cc0]    ; 0045f06f
    MOV EAX,dword ptr [EBP + 0x92]      ; 0045f075
    SAR EDX,0x1f                        ; 0045f07b
    MOV EAX,dword ptr [EAX + 0x1cc0]    ; 0045f07e
    SUB EAX,EDX                         ; 0045f084
    SAR EAX,0x1                         ; 0045f086
    MOV EDX,dword ptr [EBP + 0x92]      ; 0045f088
    MOV dword ptr [EBP + 0x76],EAX      ; 0045f08e
    MOV EDX,dword ptr [EDX + 0x1cc4]    ; 0045f091
    MOV EAX,dword ptr [EBP + 0x92]      ; 0045f097
    SAR EDX,0x1f                        ; 0045f09d
    MOV EAX,dword ptr [EAX + 0x1cc4]    ; 0045f0a0
    SUB EAX,EDX                         ; 0045f0a6
    SAR EAX,0x1                         ; 0045f0a8
    FLD float ptr [EBP + 0x3a]          ; 0045f0aa
    FXCH ST2                            ; 0045f0ad
    FMUL ST2                            ; 0045f0af
    MOV dword ptr [EBP + 0x7a],EAX      ; 0045f0b1
    FSTP float ptr [EBP + 0x52]         ; 0045f0b4
    FILD dword ptr [EBP + 0x7a]         ; 0045f0b7
    FLD ST0                             ; 0045f0ba
    FMUL float ptr [EBP + 0x52]         ; 0045f0bc
    MOV EDX,dword ptr [EBP + 0x92]      ; 0045f0bf
    FSUBP                               ; 0045f0c5
    MOV ECX,dword ptr [EDX + 0x1cc0]    ; 0045f0c7
    CALL crt_math.c_round_FUN_005a3120  ; 0045f0cd
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBP + 0x16]        ; 0045f0d2
    MOV EAX,dword ptr [EBP + 0x16]      ; 0045f0d5
    IMUL EAX,ECX                        ; 0045f0d8
    FXCH ST3                            ; 0045f0db
    FMUL ST1                            ; 0045f0dd
    FSTP float ptr [EBP + 0x56]         ; 0045f0df
    FILD dword ptr [EBP + 0x76]         ; 0045f0e2
    FLD ST0                             ; 0045f0e5
    FMUL float ptr [EBP + 0x56]         ; 0045f0e7
    FADDP                               ; 0045f0ea
    FXCH ST2                            ; 0045f0ec
    FMUL ST1                            ; 0045f0ee
    FXCH ST2                            ; 0045f0f0
    CALL crt_math.c_round_FUN_005a3120  ; 0045f0f2
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBP + 0x72]        ; 0045f0f7
    ADD EAX,dword ptr [EBP + 0x72]      ; 0045f0fa
    LEA EDX,[EAX + EAX*0x1]             ; 0045f0fd
    MOV EAX,dword ptr [EBP + 0x92]      ; 0045f100
    FMULP ST2                           ; 0045f106
    MOV EAX,dword ptr [EAX + 0x2f94]    ; 0045f108
    ADD EDX,EAX                         ; 0045f10e
    XOR EAX,EAX                         ; 0045f110
    MOV AX,word ptr [EDX]               ; 0045f112
    MOV dword ptr [EBP + 0x7a],EAX      ; 0045f115
    XOR ESI,ESI                         ; 0045f118
    FILD dword ptr [EBP + 0x7a]         ; 0045f11a
    FMUL double ptr [0x005bb574]        ; 0045f11d | DAT_005bb574
    MOV dword ptr [EBP + 0x62],ESI      ; 0045f123
    FXCH                                ; 0045f126
    FSTP float ptr [EBP + 0x4e]         ; 0045f128
    FSTP float ptr [EBP + 0x5e]         ; 0045f12b
    MOV EAX,dword ptr [EBP + 0x5e]      ; 0045f12e
    FSTP float ptr [EBP + 0x4a]         ; 0045f131
    MOV dword ptr [EBP + 0x5a],EAX      ; 0045f134
    MOV EAX,dword ptr [EBP + 0x92]      ; 0045f137
        ;   Label: LAB_0045f137
    MOV EAX,dword ptr [EAX + 0x140]     ; 0045f13d
    FLD float ptr [EBP + 0x42]          ; 0045f143
    MOV dword ptr [EBP + 0x1e],EAX      ; 0045f146
    MOV EAX,dword ptr [EBP + 0x62]      ; 0045f149
    FMUL float ptr [EBP + 0x1e]         ; 0045f14c
    MOV dword ptr [EBP + 0x7a],EAX      ; 0045f14f
    FILD dword ptr [EBP + 0x7a]         ; 0045f152
    FMUL ST1                            ; 0045f155
    FLD float ptr [0x005bb57c]          ; 0045f157 | DAT_005bb57c
    FXCH                                ; 0045f15d
    FMUL ST1                            ; 0045f15f
    FLD float ptr [EBP + 0x1e]          ; 0045f161
    FXCH                                ; 0045f164
    FSTP float ptr [EBP + 0x6a]         ; 0045f166
    FSUB float ptr [EBP + 0x6a]         ; 0045f169
    FLD1                                ; 0045f16c
    FDIV float ptr [EBP + 0x1e]         ; 0045f16e
    INC EAX                             ; 0045f171
    FXCH                                ; 0045f172
    FMUL ST1                            ; 0045f174
    MOV dword ptr [EBP + 0x7a],EAX      ; 0045f176
    FLD double ptr [0x005bb584]         ; 0045f179 | DAT_005bb584
    FXCH                                ; 0045f17f
    FMUL ST1                            ; 0045f181
    FILD dword ptr [EBP + 0x7a]         ; 0045f183
    FMULP ST5                           ; 0045f186
    FLD float ptr [EBP + 0x46]          ; 0045f188
    FXCH                                ; 0045f18b
    FMUL ST1                            ; 0045f18d
    MOV EAX,dword ptr [EBP + 0x92]      ; 0045f18f
    FXCH ST5                            ; 0045f195
    FMULP ST4                           ; 0045f197
    FLD float ptr [EAX + 0x2fa8]        ; 0045f199
    FMULP ST5                           ; 0045f19f
    FXCH ST3                            ; 0045f1a1
    FSTP float ptr [EBP + 0x66]         ; 0045f1a3
    FXCH ST3                            ; 0045f1a6
    FSTP float ptr [EBP + 0x2a]         ; 0045f1a8
    FLD float ptr [EBP + 0x1e]          ; 0045f1ab
    FSUB float ptr [EBP + 0x66]         ; 0045f1ae
    FMULP                               ; 0045f1b1
    FMULP ST2                           ; 0045f1b3
    FMULP                               ; 0045f1b5
    FMUL float ptr [EAX + 0x2fa8]       ; 0045f1b7
    FSTP float ptr [EBP + 0x2e]         ; 0045f1bd
    FLD float ptr [EBP + 0x2a]          ; 0045f1c0
    FISTP dword ptr [EBP + 0x22]        ; 0045f1c6
    FLD float ptr [EBP + 0x2e]          ; 0045f1cc
    FISTP dword ptr [EBP + 0x26]        ; 0045f1d2
    FLD float ptr [EBP + 0x6a]          ; 0045f1d8
    FCOMP float ptr [EBP + 0x5e]        ; 0045f1db
    FNSTSW AX                           ; 0045f1de
    SAHF                                ; 0045f1e0
    JNC 0x0045f463                      ; 0045f1e1
        ;   XREF to: 0045f463 (CONDITIONAL_JUMP)  ; LAB_0045f463
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0045f1e7
    MOV dword ptr [EBP + -0x3e],EAX     ; 0045f1ea
        ;   Label: LAB_0045f1ea
    FLD float ptr [EBP + -0x3e]         ; 0045f1ed
    FMUL float ptr [EBP + 0x56]         ; 0045f1f0
    FLD float ptr [EBP + -0x3e]         ; 0045f1f3
    FMUL float ptr [EBP + 0x52]         ; 0045f1f6
    LEA EBX,[EBP + -0x52]               ; 0045f1f9
    LEA EAX,[EBP + -0x46]               ; 0045f1fc
    MOV EDX,dword ptr [0x005f2afc]      ; 0045f1ff | DAT_005f2afc
    FXCH                                ; 0045f205
    FSTP float ptr [EBP + -0x46]        ; 0045f207
    FSTP float ptr [EBP + -0x42]        ; 0045f20a
    FLD float ptr [EAX]                 ; 0045f20d
    FMUL float ptr [0x005de4f0]         ; 0045f20f | DAT_005de4f0
    FISTP dword ptr [EBX]               ; 0045f215
    FLD float ptr [EAX + 0x4]           ; 0045f217
    FMUL float ptr [0x005de4f0]         ; 0045f21a | DAT_005de4f0
    FISTP dword ptr [EBX + 0x4]         ; 0045f220
    FLD float ptr [EAX + 0x8]           ; 0045f223
    FMUL float ptr [0x005de4f0]         ; 0045f226 | DAT_005de4f0
    FISTP dword ptr [EBX + 0x8]         ; 0045f22c
    LEA EAX,[EBP + -0x52]               ; 0045f22f
    PUSH EAX                            ; 0045f232
    MOV EAX,dword ptr [EDX]             ; 0045f233 | DAT_01bdd7e4
    PUSH EAX                            ; 0045f235
    CALL engine_special.cpp_FUN_005632a3 ; 0045f236
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [EBP + 0x6a]          ; 0045f23b
    ADD ESP,0x8                         ; 0045f23e
    FCOMP float ptr [EBP + 0x5a]        ; 0045f241
    FNSTSW AX                           ; 0045f244
    SAHF                                ; 0045f246
    JNC 0x0045f46b                      ; 0045f247
        ;   XREF to: 0045f46b (CONDITIONAL_JUMP)  ; LAB_0045f46b
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0045f24d
    MOV dword ptr [EBP + -0x3e],EAX     ; 0045f250
        ;   Label: LAB_0045f250
    FLD float ptr [EBP + -0x3e]         ; 0045f253
    FMUL float ptr [EBP + 0x4e]         ; 0045f256
    FLD float ptr [EBP + -0x3e]         ; 0045f259
    FMUL float ptr [EBP + 0x4a]         ; 0045f25c
    LEA EBX,[EBP + 0xffffff2a]          ; 0045f25f
    LEA EAX,[EBP + -0x46]               ; 0045f265
    MOV EDX,dword ptr [0x005f2afc]      ; 0045f268 | DAT_005f2afc
    FXCH                                ; 0045f26e
    FSTP float ptr [EBP + -0x46]        ; 0045f270
    FSTP float ptr [EBP + -0x42]        ; 0045f273
    FLD float ptr [EAX]                 ; 0045f276
    FMUL float ptr [0x005de4f0]         ; 0045f278 | DAT_005de4f0
    FISTP dword ptr [EBX]               ; 0045f27e
    FLD float ptr [EAX + 0x4]           ; 0045f280
    FMUL float ptr [0x005de4f0]         ; 0045f283 | DAT_005de4f0
    FISTP dword ptr [EBX + 0x4]         ; 0045f289
    FLD float ptr [EAX + 0x8]           ; 0045f28c
    FMUL float ptr [0x005de4f0]         ; 0045f28f | DAT_005de4f0
    FISTP dword ptr [EBX + 0x8]         ; 0045f295
    LEA EAX,[EBP + 0xffffff2a]          ; 0045f298
    PUSH EAX                            ; 0045f29e
    MOV EAX,dword ptr [EDX]             ; 0045f29f | DAT_01bdd7e4
    ADD EAX,0x30                        ; 0045f2a1
    PUSH EAX                            ; 0045f2a4
    CALL engine_special.cpp_FUN_005632a3 ; 0045f2a5
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [EBP + 0x66]          ; 0045f2aa
    ADD ESP,0x8                         ; 0045f2ad
    FCOMP float ptr [EBP + 0x5a]        ; 0045f2b0
    FNSTSW AX                           ; 0045f2b3
    SAHF                                ; 0045f2b5
    JNC 0x0045f473                      ; 0045f2b6
        ;   XREF to: 0045f473 (CONDITIONAL_JUMP)  ; LAB_0045f473
    MOV EAX,dword ptr [EBP + 0x66]      ; 0045f2bc
    MOV dword ptr [EBP + -0x3e],EAX     ; 0045f2bf
        ;   Label: LAB_0045f2bf
    FLD float ptr [EBP + -0x3e]         ; 0045f2c2
    FMUL float ptr [EBP + 0x4e]         ; 0045f2c5
    FLD float ptr [EBP + -0x3e]         ; 0045f2c8
    FMUL float ptr [EBP + 0x4a]         ; 0045f2cb
    LEA EBX,[EBP + 0xffffff5a]          ; 0045f2ce
    LEA EAX,[EBP + -0x46]               ; 0045f2d4
    MOV EDX,dword ptr [0x005f2afc]      ; 0045f2d7 | DAT_005f2afc
    FXCH                                ; 0045f2dd
    FSTP float ptr [EBP + -0x46]        ; 0045f2df
    FSTP float ptr [EBP + -0x42]        ; 0045f2e2
    FLD float ptr [EAX]                 ; 0045f2e5
    FMUL float ptr [0x005de4f0]         ; 0045f2e7 | DAT_005de4f0
    FISTP dword ptr [EBX]               ; 0045f2ed
    FLD float ptr [EAX + 0x4]           ; 0045f2ef
    FMUL float ptr [0x005de4f0]         ; 0045f2f2 | DAT_005de4f0
    FISTP dword ptr [EBX + 0x4]         ; 0045f2f8
    FLD float ptr [EAX + 0x8]           ; 0045f2fb
    FMUL float ptr [0x005de4f0]         ; 0045f2fe | DAT_005de4f0
    FISTP dword ptr [EBX + 0x8]         ; 0045f304
    LEA EAX,[EBP + 0xffffff5a]          ; 0045f307
    PUSH EAX                            ; 0045f30d
    MOV EAX,dword ptr [EDX]             ; 0045f30e | DAT_01bdd7e4
    ADD EAX,0x60                        ; 0045f310
    PUSH EAX                            ; 0045f313
    CALL engine_special.cpp_FUN_005632a3 ; 0045f314
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [EBP + 0x66]          ; 0045f319
    ADD ESP,0x8                         ; 0045f31c
    FCOMP float ptr [EBP + 0x5e]        ; 0045f31f
    FNSTSW AX                           ; 0045f322
    SAHF                                ; 0045f324
    JNC 0x0045f47b                      ; 0045f325
        ;   XREF to: 0045f47b (CONDITIONAL_JUMP)  ; LAB_0045f47b
    MOV EAX,dword ptr [EBP + 0x66]      ; 0045f32b
    MOV dword ptr [EBP + -0x3e],EAX     ; 0045f32e
        ;   Label: LAB_0045f32e
    FLD float ptr [EBP + -0x3e]         ; 0045f331
    FMUL float ptr [EBP + 0x56]         ; 0045f334
    FLD float ptr [EBP + -0x3e]         ; 0045f337
    FMUL float ptr [EBP + 0x52]         ; 0045f33a
    LEA EBX,[EBP + 0xffffff7e]          ; 0045f33d
    LEA EAX,[EBP + -0x46]               ; 0045f343
    MOV EDX,dword ptr [0x005f2afc]      ; 0045f346 | DAT_005f2afc
    FXCH                                ; 0045f34c
    FSTP float ptr [EBP + -0x46]        ; 0045f34e
    FSTP float ptr [EBP + -0x42]        ; 0045f351
    FLD float ptr [EAX]                 ; 0045f354
    FMUL float ptr [0x005de4f0]         ; 0045f356 | DAT_005de4f0
    FISTP dword ptr [EBX]               ; 0045f35c
    FLD float ptr [EAX + 0x4]           ; 0045f35e
    FMUL float ptr [0x005de4f0]         ; 0045f361 | DAT_005de4f0
    FISTP dword ptr [EBX + 0x4]         ; 0045f367
    FLD float ptr [EAX + 0x8]           ; 0045f36a
    FMUL float ptr [0x005de4f0]         ; 0045f36d | DAT_005de4f0
    FISTP dword ptr [EBX + 0x8]         ; 0045f373
    LEA EAX,[EBP + 0xffffff7e]          ; 0045f376
    PUSH EAX                            ; 0045f37c
    MOV EAX,dword ptr [EDX]             ; 0045f37d | DAT_01bdd7e4
    ADD EAX,0x90                        ; 0045f37f
    PUSH EAX                            ; 0045f384
    CALL engine_special.cpp_FUN_005632a3 ; 0045f385
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EDX,dword ptr [0x005f2afc]      ; 0045f38a | DAT_005f2afc
    ADD ESP,0x8                         ; 0045f390
    MOV EBX,dword ptr [EDX]             ; 0045f393 | DAT_01bdd7e4
    MOV EAX,dword ptr [EBP + 0x22]      ; 0045f395
    MOV dword ptr [EBX + 0x20],EAX      ; 0045f398
    MOV EBX,dword ptr [EDX]             ; 0045f39b | DAT_01bdd7e4
    MOV EAX,dword ptr [EBP + 0x22]      ; 0045f39d
    MOV dword ptr [EBX + 0x50],EAX      ; 0045f3a0
    MOV EBX,dword ptr [EDX]             ; 0045f3a3 | DAT_01bdd7e4
    MOV EAX,dword ptr [EBP + 0x26]      ; 0045f3a5
    MOV dword ptr [EBX + 0x80],EAX      ; 0045f3a8
    MOV EBX,dword ptr [EDX]             ; 0045f3ae | DAT_01bdd7e4
    PUSH 0x44d180                       ; 0045f3b0 | LAB_0044d180
    MOV EAX,dword ptr [EBP + 0x26]      ; 0045f3b5
    MOV EDI,0x4                         ; 0045f3b8
    MOV ECX,0x1                         ; 0045f3bd
    MOV dword ptr [EBX + 0xb0],EAX      ; 0045f3c2
    MOV ESI,dword ptr [EBP + 0x62]      ; 0045f3c8
    MOV dword ptr [EBP + 0xffffff06],EDI ; 0045f3cb
    XOR EAX,EAX                         ; 0045f3d1
    MOV dword ptr [EBP + 0xffffff22],ECX ; 0045f3d3
    MOV dword ptr [EBP + 0xffffff16],EAX ; 0045f3d9
    MOV dword ptr [EBP + 0xffffff12],EAX ; 0045f3df
    MOV dword ptr [EBP + 0xffffff0e],EAX ; 0045f3e5
    MOV dword ptr [EBP + 0xffffff0a],EAX ; 0045f3eb
    MOV EAX,0x2                         ; 0045f3f1
    INC ESI                             ; 0045f3f6
    MOV dword ptr [EBP + 0xffffff1e],EAX ; 0045f3f7
    LEA EAX,[EBP + 0xffffff02]          ; 0045f3fd
    XOR EBX,EBX                         ; 0045f403
    PUSH EAX                            ; 0045f405
    MOV EDI,0x3                         ; 0045f406
    MOV dword ptr [EBP + 0xffffff26],EBX ; 0045f40b
    PUSH EDX                            ; 0045f411 | DAT_01bdd7e4
    MOV dword ptr [EBP + 0x62],ESI      ; 0045f412
    MOV dword ptr [EBP + 0xffffff1a],EDI ; 0045f415
    CALL engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0046d330 ; 0045f41b
        ;   XREF to: 0046d330 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0046d330(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, CustomScanlineFunc * scanline_renderer)
    ADD ESP,0xc                         ; 0045f420
    CMP ESI,0x4                         ; 0045f423
    JL 0x0045f137                       ; 0045f426
        ;   XREF to: 0045f137 (CONDITIONAL_JUMP)  ; LAB_0045f137
    MOV EAX,dword ptr [EBP + 0x3e]      ; 0045f42c
    INC EAX                             ; 0045f42f
    MOV dword ptr [EBP + 0x3e],EAX      ; 0045f430
    CMP EAX,0x10                        ; 0045f433
    JL 0x0045f023                       ; 0045f436
        ;   XREF to: 0045f023 (CONDITIONAL_JUMP)  ; LAB_0045f023
    MOV ECX,dword ptr [EBP + 0x36]      ; 0045f43c
    INC ECX                             ; 0045f43f
    MOV dword ptr [EBP + 0x36],ECX      ; 0045f440
    CMP ECX,0x10                        ; 0045f443
    JL 0x0045efe7                       ; 0045f446
        ;   XREF to: 0045efe7 (CONDITIONAL_JUMP)  ; LAB_0045efe7
    MOV ESI,dword ptr [0x005f2afc]      ; 0045f44c | DAT_005f2afc
    PUSH ESI                            ; 0045f452 | DAT_01bdd7e4
    CALL engine_drender.cpp_pop_FUN_0046d080 ; 0045f453
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 0045f458
    LEA ESP,[EBP + 0x7e]                ; 0045f45b
    POP EBP                             ; 0045f45e
    POP EDI                             ; 0045f45f
    POP ESI                             ; 0045f460
    POP EBX                             ; 0045f461
    RET                                 ; 0045f462
    MOV EAX,dword ptr [EBP + 0x5e]      ; 0045f463
        ;   Label: LAB_0045f463
    JMP 0x0045f1ea                      ; 0045f466
        ;   XREF to: 0045f1ea (UNCONDITIONAL_JUMP)  ; LAB_0045f1ea
    MOV EAX,dword ptr [EBP + 0x5a]      ; 0045f46b
        ;   Label: LAB_0045f46b
    JMP 0x0045f250                      ; 0045f46e
        ;   XREF to: 0045f250 (UNCONDITIONAL_JUMP)  ; LAB_0045f250
    MOV EAX,dword ptr [EBP + 0x5a]      ; 0045f473
        ;   Label: LAB_0045f473
    JMP 0x0045f2bf                      ; 0045f476
        ;   XREF to: 0045f2bf (UNCONDITIONAL_JUMP)  ; LAB_0045f2bf
    MOV EAX,dword ptr [EBP + 0x5e]      ; 0045f47b
        ;   Label: LAB_0045f47b
    JMP 0x0045f32e                      ; 0045f47e
        ;   XREF to: 0045f32e (UNCONDITIONAL_JUMP)  ; LAB_0045f32e

