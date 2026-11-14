; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_0044b960(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
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
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined        Stack[-0x14c]:1  local_14c
; undefined4       Stack[-0x140]:4  local_140
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
; undefined        Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined        Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined        Stack[-0x80]:1  local_80
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dlight.cpp_FUN_0044b020 at 0044b586
;
; Referenced Globals:
;   undefined4 DAT_005cf4b7
;   undefined4 DAT_005cf4bf
;   undefined4 DAT_005cf4c7
;   undefined4 DAT_005cf4cb
;   undefined4 DAT_005cf4cf
;   undefined4 DAT_005f5050
;   undefined4 DAT_005f5058
;   undefined4 DAT_0060afe0
;   undefined4 DAT_0060b280
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c38aec
;   undefined4 g_CGameInstance.halo_mode
;
; Called Functions:
;   core_dirmat.cpp_FUN_00449530
;   core_dirmat.cpp_FUN_004495a0
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046b5c0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_drender.cpp_FUN_0046b5e0
;   engine_drender.cpp_FUN_0046b670
;   engine_drender.cpp_pop_FUN_0046b4a0
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044b960
        ;   Label: core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_0044b960
    PUSH ESI                            ; 0044b961
    PUSH EDI                            ; 0044b962
    PUSH EBP                            ; 0044b963
    MOV EBP,ESP                         ; 0044b964
    SUB ESP,0x188                       ; 0044b966
    AND ESP,0xfffffff8                  ; 0044b96c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b96f
    CMP dword ptr [EAX + 0x1cbc],0x0    ; 0044b972
    JZ 0x0044b986                       ; 0044b979
        ;   XREF to: 0044b986 (CONDITIONAL_JUMP)  ; LAB_0044b986
    MOV EAX,[0x00616494]                ; 0044b97b | g_CGamePtr
    CMP dword ptr [EAX + 0xc],0x2       ; 0044b980 | g_CGameInstance.halo_mode
    JZ 0x0044b98d                       ; 0044b984
        ;   XREF to: 0044b98d (CONDITIONAL_JUMP)  ; LAB_0044b98d
    MOV ESP,EBP                         ; 0044b986
        ;   Label: LAB_0044b986
    POP EBP                             ; 0044b988
    POP EDI                             ; 0044b989
    POP ESI                             ; 0044b98a
    POP EBX                             ; 0044b98b
    RET                                 ; 0044b98c
    MOV EBX,dword ptr [0x0060b280]      ; 0044b98d | DAT_0060b280
        ;   Label: LAB_0044b98d
    PUSH EBX                            ; 0044b993 | DAT_01ba5c50
    LEA ESI,[ESP + 0x158]               ; 0044b994
    LEA EDI,[ESP + 0xb0]                ; 0044b99b
    CALL engine_drender.cpp_FUN_0046b5e0 ; 0044b9a2
        ;   XREF to: 0046b5e0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046b5e0()
    LEA ESI,[ESP + 0x158]               ; 0044b9a7
    ADD ESP,0x4                         ; 0044b9ae
    MOVSD ES:EDI,ESI                    ; 0044b9b1
    MOVSD ES:EDI,ESI                    ; 0044b9b2
    MOVSD ES:EDI,ESI                    ; 0044b9b3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b9b4
    FLD float ptr [ESP + 0xac]          ; 0044b9b7
    FSUB float ptr [EAX + 0x4]          ; 0044b9be
    FLD float ptr [ESP + 0xb0]          ; 0044b9c1
    FXCH                                ; 0044b9c8
    FSTP float ptr [ESP + 0xac]         ; 0044b9ca
    FSUB float ptr [EAX + 0x8]          ; 0044b9d1
    FLD float ptr [ESP + 0xb4]          ; 0044b9d4
    FXCH                                ; 0044b9db
    FSTP float ptr [ESP + 0xb0]         ; 0044b9dd
    FSUB float ptr [EAX + 0xc]          ; 0044b9e4
    LEA EAX,[ESP + 0xac]                ; 0044b9e7
    PUSH EAX                            ; 0044b9ee
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b9ef
    LEA ESI,[ESP + 0xd4]                ; 0044b9f2
    ADD EAX,0x10                        ; 0044b9f9
    LEA EDI,[ESP + 0x68]                ; 0044b9fc
    PUSH EAX                            ; 0044ba00
    FSTP float ptr [ESP + 0xbc]         ; 0044ba01
    CALL core_dirmat.cpp_FUN_004495a0   ; 0044ba08
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    LEA ESI,[ESP + 0xd8]                ; 0044ba0d
    LEA EAX,[ESP + 0x6c]                ; 0044ba14
    ADD ESP,0x8                         ; 0044ba18
    LEA EDX,[ESP + 0xac]                ; 0044ba1b
    MOVSD ES:EDI,ESI                    ; 0044ba22
    MOVSD ES:EDI,ESI                    ; 0044ba23
    MOVSD ES:EDI,ESI                    ; 0044ba24
    CMP EDX,EAX                         ; 0044ba25
    JZ 0x0044ba4a                       ; 0044ba27
        ;   XREF to: 0044ba4a (CONDITIONAL_JUMP)  ; LAB_0044ba4a
    MOV EAX,dword ptr [ESP + 0x64]      ; 0044ba29
    MOV dword ptr [ESP + 0xac],EAX      ; 0044ba2d
    MOV EAX,dword ptr [ESP + 0x68]      ; 0044ba34
    MOV dword ptr [ESP + 0xb0],EAX      ; 0044ba38
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0044ba3f
    MOV dword ptr [ESP + 0xb4],EAX      ; 0044ba43
    FLD float ptr [ESP + 0xb4]          ; 0044ba4a
        ;   Label: LAB_0044ba4a
    FMUL double ptr [0x005cf4b7]        ; 0044ba51 | DAT_005cf4b7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044ba57
    FDIV float ptr [EAX + 0x38]         ; 0044ba5a
    FLD float ptr [ESP + 0xb0]          ; 0044ba5d
    FMUL ST0                            ; 0044ba64
    FLD float ptr [ESP + 0xac]          ; 0044ba66
    FMUL ST0                            ; 0044ba6d
    FXCH ST2                            ; 0044ba6f
    FMUL double ptr [0x005cf4bf]        ; 0044ba71 | DAT_005cf4bf
    FXCH                                ; 0044ba77
    FSTP float ptr [ESP + 0x168]        ; 0044ba79
    FXCH                                ; 0044ba80
    FADD float ptr [ESP + 0x168]        ; 0044ba82
    FXCH                                ; 0044ba89
    FST float ptr [ESP + 0x170]         ; 0044ba8b
    FMUL float ptr [ESP + 0x170]        ; 0044ba92
    FXCH                                ; 0044ba99
    FST float ptr [ESP + 0x174]         ; 0044ba9b
    FXCH                                ; 0044baa2
    FSTP float ptr [ESP + 0x16c]        ; 0044baa4
    FCOMP float ptr [ESP + 0x16c]       ; 0044baab
    FNSTSW AX                           ; 0044bab2
    SAHF                                ; 0044bab4
    JA 0x0044b986                       ; 0044bab5
        ;   XREF to: 0044b986 (CONDITIONAL_JUMP)  ; LAB_0044b986
    FLD float ptr [ESP + 0x174]         ; 0044babb
    FDIV float ptr [ESP + 0x16c]        ; 0044bac2
    LEA EDI,[ESP + 0x88]                ; 0044bac9
    MOV ESI,dword ptr [0x0060b280]      ; 0044bad0 | DAT_0060b280
    LEA EBX,[ESP + 0x100]               ; 0044bad6
    PUSH ESI                            ; 0044badd | DAT_01ba5c50
    FLD1                                ; 0044bade
    FSUBRP                              ; 0044bae0
    LEA ESI,[ESP + 0x134]               ; 0044bae2
    FSTP float ptr [ESP + 0x8]          ; 0044bae9
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046b5c0 ; 0044baed
        ;   XREF to: 0046b5c0 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046b5c0(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0x134]               ; 0044baf2
    ADD ESP,0x4                         ; 0044baf9
    LEA EAX,[ESP + 0x88]                ; 0044bafc
    MOVSD ES:EDI,ESI                    ; 0044bb03
    MOVSD ES:EDI,ESI                    ; 0044bb04
    MOVSD ES:EDI,ESI                    ; 0044bb05
    FILD dword ptr [EAX]                ; 0044bb06
    FMUL float ptr [0x005f5058]         ; 0044bb08 | DAT_005f5058
    FSTP float ptr [EBX]                ; 0044bb0e
    FILD dword ptr [EAX + 0x4]          ; 0044bb10
    FMUL float ptr [0x005f5058]         ; 0044bb13 | DAT_005f5058
    FSTP float ptr [EBX + 0x4]          ; 0044bb19
    FILD dword ptr [EAX + 0x8]          ; 0044bb1c
    FMUL float ptr [0x005f5058]         ; 0044bb1f | DAT_005f5058
    FSTP float ptr [EBX + 0x8]          ; 0044bb25
    FLD float ptr [ESP + 0x100]         ; 0044bb28
    FLD float ptr [ESP + 0x104]         ; 0044bb2f
    FLD float ptr [ESP + 0x108]         ; 0044bb36
    MOV EBX,dword ptr [EBP + 0x14]      ; 0044bb3d
    LEA EDI,[ESP + 0xa0]                ; 0044bb40
    LEA ESI,[ESP + 0xdc]                ; 0044bb47
    FXCH ST2                            ; 0044bb4e
    FSUB float ptr [EBX + 0x4]          ; 0044bb50
    FXCH                                ; 0044bb53
    FSUB float ptr [EBX + 0x8]          ; 0044bb55
    FXCH ST2                            ; 0044bb58
    FSUB float ptr [EBX + 0xc]          ; 0044bb5a
    FXCH                                ; 0044bb5d
    FSTP float ptr [ESP + 0xdc]         ; 0044bb5f
    FXCH                                ; 0044bb66
    FSTP float ptr [ESP + 0xe0]         ; 0044bb68
    FSTP float ptr [ESP + 0xe4]         ; 0044bb6f
    MOVSD ES:EDI,ESI                    ; 0044bb76
    MOVSD ES:EDI,ESI                    ; 0044bb77
    MOVSD ES:EDI,ESI                    ; 0044bb78
    FLD float ptr [ESP + 0xa4]          ; 0044bb79
    FMUL ST0                            ; 0044bb80
    FLD float ptr [ESP + 0xa0]          ; 0044bb82
    FMUL ST0                            ; 0044bb89
    FADDP                               ; 0044bb8b
    FLD float ptr [ESP + 0xa8]          ; 0044bb8d
    FMUL ST0                            ; 0044bb94
    FADDP                               ; 0044bb96
    FSQRT                               ; 0044bb98
    ADD EBX,0x4                         ; 0044bb9a
    FST float ptr [ESP]                 ; 0044bb9d
    FLDZ                                ; 0044bba0
    FCOMPP                              ; 0044bba2
    FNSTSW AX                           ; 0044bba4
    SAHF                                ; 0044bba6
    JNC 0x0044b986                      ; 0044bba7
        ;   XREF to: 0044b986 (CONDITIONAL_JUMP)  ; LAB_0044b986
    FLD1                                ; 0044bbad
    FLD float ptr [ESP + 0xa0]          ; 0044bbaf
    FXCH                                ; 0044bbb6
    FDIV float ptr [ESP]                ; 0044bbb8
    FXCH                                ; 0044bbbb
    FMUL ST1                            ; 0044bbbd
    FLD float ptr [ESP + 0xa4]          ; 0044bbbf
    FMUL ST2                            ; 0044bbc6
    FLD float ptr [ESP + 0xa8]          ; 0044bbc8
    FMULP ST3                           ; 0044bbcf
    MOV EAX,0xffff                      ; 0044bbd1
    MOV EDI,dword ptr [0x01c38aec]      ; 0044bbd6 | DAT_01c38aec
    MOV ECX,0x3f800000                  ; 0044bbdc
    SUB EAX,EDI                         ; 0044bbe1
    LEA ESI,[ESP + 0x118]               ; 0044bbe3
    MOV dword ptr [ESP + 0x184],EAX     ; 0044bbea
    XOR EAX,EAX                         ; 0044bbf1
    MOV dword ptr [ESP + 0x12c],ECX     ; 0044bbf3
    MOV dword ptr [ESP + 0x124],EAX     ; 0044bbfa
    MOV dword ptr [ESP + 0x128],EAX     ; 0044bc01
    LEA EAX,[ESP + 0x124]               ; 0044bc08
    LEA EDI,[ESP + 0x148]               ; 0044bc0f
    PUSH EAX                            ; 0044bc16
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044bc17
    FILD dword ptr [ESP + 0x188]        ; 0044bc1a
    ADD EAX,0x10                        ; 0044bc21
    FSTP float ptr [ESP + 0x188]        ; 0044bc24
    PUSH EAX                            ; 0044bc2b
    FXCH                                ; 0044bc2c
    FSTP float ptr [ESP + 0xa8]         ; 0044bc2e
    FSTP float ptr [ESP + 0xac]         ; 0044bc35
    FSTP float ptr [ESP + 0xb0]         ; 0044bc3c
    CALL core_dirmat.cpp_FUN_00449530   ; 0044bc43
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x120]               ; 0044bc48
    ADD ESP,0x8                         ; 0044bc4f
    MOVSD ES:EDI,ESI                    ; 0044bc52
    MOVSD ES:EDI,ESI                    ; 0044bc53
    MOVSD ES:EDI,ESI                    ; 0044bc54
    FLD float ptr [ESP + 0xa4]          ; 0044bc55
    FMUL float ptr [ESP + 0x14c]        ; 0044bc5c
    FLD float ptr [ESP + 0xa0]          ; 0044bc63
    FMUL float ptr [ESP + 0x148]        ; 0044bc6a
    FADDP                               ; 0044bc71
    FLD float ptr [ESP + 0xa8]          ; 0044bc73
    FMUL float ptr [ESP + 0x150]        ; 0044bc7a
    FADDP                               ; 0044bc81
    FMUL float ptr [ESP + 0x184]        ; 0044bc83
    FMUL float ptr [0x005cf4c7]         ; 0044bc8a | DAT_005cf4c7
    FLDZ                                ; 0044bc90
    FCOMPP                              ; 0044bc92
    FNSTSW AX                           ; 0044bc94
    SAHF                                ; 0044bc96
    JNC 0x0044b986                      ; 0044bc97
        ;   XREF to: 0044b986 (CONDITIONAL_JUMP)  ; LAB_0044b986
    PUSH 0x1                            ; 0044bc9d
    MOV ESI,dword ptr [0x0060b280]      ; 0044bc9f | DAT_0060b280
    PUSH ESI                            ; 0044bca5 | DAT_01ba5c50
    XOR EDI,EDI                         ; 0044bca6
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0044bca8
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0044bcad
    MOV dword ptr [ESP + 0x180],EDI     ; 0044bcb0
    MOV dword ptr [ESP + 0x17c],EBX     ; 0044bcb7
    MOV EAX,dword ptr [ESP + 0x180]     ; 0044bcbe
        ;   Label: LAB_0044bcbe
    MOV dword ptr [ESP + 0x184],EAX     ; 0044bcc5
    FILD dword ptr [ESP + 0x184]        ; 0044bccc
    FMUL float ptr [0x005cf4cb]         ; 0044bcd3 | DAT_005cf4cb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044bcd9
    FMUL float ptr [EAX + 0x140]        ; 0044bcdc
    FLD float ptr [EAX + 0x38]          ; 0044bce2
    FXCH                                ; 0044bce5
    FSTP float ptr [ESP + 0x8]          ; 0044bce7
    MOV EAX,dword ptr [EAX + 0x18]      ; 0044bceb
    FLD float ptr [ESP + 0x8]           ; 0044bcee
    MOV dword ptr [ESP + 0x7c],EAX      ; 0044bcf2
    FMUL double ptr [0x005cf4b7]        ; 0044bcf6 | DAT_005cf4b7
    FLD float ptr [ESP + 0x7c]          ; 0044bcfc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044bd00
    FMUL float ptr [ESP + 0x8]          ; 0044bd03
    FXCH                                ; 0044bd07
    FDIVRP ST2,ST0                      ; 0044bd09
    MOV EAX,dword ptr [EAX + 0x24]      ; 0044bd0b
    MOV dword ptr [ESP + 0x80],EAX      ; 0044bd0e
    FLD float ptr [ESP + 0x80]          ; 0044bd15
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044bd1c
    FMUL float ptr [ESP + 0x8]          ; 0044bd1f
    MOV EAX,dword ptr [EAX + 0x30]      ; 0044bd23
    MOV dword ptr [ESP + 0x84],EAX      ; 0044bd26
    FLD float ptr [ESP + 0x84]          ; 0044bd2d
    FMUL float ptr [ESP + 0x8]          ; 0044bd34
    LEA EDI,[ESP + 0x34]                ; 0044bd38
    LEA ESI,[ESP + 0x58]                ; 0044bd3c
    FXCH ST2                            ; 0044bd40
    FSTP float ptr [ESP + 0x58]         ; 0044bd42
    FSTP float ptr [ESP + 0x5c]         ; 0044bd46
    MOV EAX,dword ptr [ESP + 0x17c]     ; 0044bd4a
    FSTP float ptr [ESP + 0x60]         ; 0044bd51
    MOVSD ES:EDI,ESI                    ; 0044bd55
    MOVSD ES:EDI,ESI                    ; 0044bd56
    MOVSD ES:EDI,ESI                    ; 0044bd57
    LEA EDX,[ESP + 0x94]                ; 0044bd58
    FLD float ptr [EAX + 0x4]           ; 0044bd5f
    FLD float ptr [EAX + 0x8]           ; 0044bd62
    FLD float ptr [EAX]                 ; 0044bd65
    LEA EDI,[ESP + 0x94]                ; 0044bd67
    LEA ESI,[ESP + 0x70]                ; 0044bd6e
    LEA EAX,[ESP + 0x40]                ; 0044bd72
    FADD float ptr [ESP + 0x34]         ; 0044bd76
    FXCH ST2                            ; 0044bd7a
    FADD float ptr [ESP + 0x38]         ; 0044bd7c
    FXCH                                ; 0044bd80
    FADD float ptr [ESP + 0x3c]         ; 0044bd82
    FXCH ST2                            ; 0044bd86
    FSTP float ptr [ESP + 0x70]         ; 0044bd88
    FSTP float ptr [ESP + 0x74]         ; 0044bd8c
    FSTP float ptr [ESP + 0x78]         ; 0044bd90
    MOVSD ES:EDI,ESI                    ; 0044bd94
    MOVSD ES:EDI,ESI                    ; 0044bd95
    MOVSD ES:EDI,ESI                    ; 0044bd96
    FSTP float ptr [ESP + 0x178]        ; 0044bd97
    CMP EAX,EDX                         ; 0044bd9e
    JZ 0x0044bdc3                       ; 0044bda0
        ;   XREF to: 0044bdc3 (CONDITIONAL_JUMP)  ; LAB_0044bdc3
    MOV EAX,dword ptr [ESP + 0x94]      ; 0044bda2
    MOV dword ptr [ESP + 0x40],EAX      ; 0044bda9
    MOV EAX,dword ptr [ESP + 0x98]      ; 0044bdad
    MOV dword ptr [ESP + 0x44],EAX      ; 0044bdb4
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0044bdb8
    MOV dword ptr [ESP + 0x48],EAX      ; 0044bdbf
    LEA EAX,[ESP + 0x40]                ; 0044bdc3
        ;   Label: LAB_0044bdc3
    PUSH EAX                            ; 0044bdc7
    MOV EAX,[0x0060b280]                ; 0044bdc8 | DAT_0060b280
    PUSH EAX                            ; 0044bdcd | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 0044bdce
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0044bdd3
    MOV EDX,dword ptr [0x0060b280]      ; 0044bdd6 | DAT_0060b280
    PUSH EDX                            ; 0044bddc | DAT_01ba5c50
    LEA ESI,[ESP + 0xf8]                ; 0044bddd
    CALL engine_drender.cpp_FUN_0046b670 ; 0044bde4
        ;   XREF to: 0046b670 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046b670()
    ADD ESP,0x4                         ; 0044bde9
    PUSH 0x0                            ; 0044bdec
    LEA EAX,[ESP + 0x50]                ; 0044bdee
    LEA EDI,[ESP + 0x50]                ; 0044bdf2
    PUSH EAX                            ; 0044bdf6
    MOV ECX,dword ptr [0x0060b280]      ; 0044bdf7 | DAT_0060b280
    LEA ESI,[ESP + 0xfc]                ; 0044bdfd
    PUSH ECX                            ; 0044be04 | DAT_01ba5c50
    MOVSD ES:EDI,ESI                    ; 0044be05
    MOVSD ES:EDI,ESI                    ; 0044be06
    MOVSD ES:EDI,ESI                    ; 0044be07
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0044be08
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0044be0d
    XOR EBX,EBX                         ; 0044be10
    MOV EAX,dword ptr [ESP + 0x178]     ; 0044be12
    MOV dword ptr [ESP + 0x114],EBX     ; 0044be19
    LEA EBX,[ESP + 0xb8]                ; 0044be20
    MOV dword ptr [ESP + 0x10c],EAX     ; 0044be27
    MOV dword ptr [ESP + 0x110],EAX     ; 0044be2e
    LEA EAX,[ESP + 0x10c]               ; 0044be35
    MOV EDX,dword ptr [0x0060b280]      ; 0044be3c | DAT_0060b280
    FLD float ptr [EAX]                 ; 0044be42
    FMUL float ptr [0x005f5050]         ; 0044be44 | DAT_005f5050
    FISTP dword ptr [EBX]               ; 0044be4a
    FLD float ptr [EAX + 0x4]           ; 0044be4c
    FMUL float ptr [0x005f5050]         ; 0044be4f | DAT_005f5050
    FISTP dword ptr [EBX + 0x4]         ; 0044be55
    FLD float ptr [EAX + 0x8]           ; 0044be58
    FMUL float ptr [0x005f5050]         ; 0044be5b | DAT_005f5050
    FISTP dword ptr [EBX + 0x8]         ; 0044be61
    LEA EAX,[ESP + 0xb8]                ; 0044be64
    PUSH EAX                            ; 0044be6b
    MOV EAX,dword ptr [EDX]             ; 0044be6c | DAT_01ba5c50
    PUSH EAX                            ; 0044be6e
    CALL engine_special.cpp_FUN_0055d723 ; 0044be6f
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0044be74
    MOV AH,byte ptr [ESP + 0x10f]       ; 0044be77
    XOR AH,0x80                         ; 0044be7e
    LEA EBX,[ESP + 0xc4]                ; 0044be81
    MOV byte ptr [ESP + 0x10f],AH       ; 0044be88
    LEA EAX,[ESP + 0x10c]               ; 0044be8f
    MOV EDX,dword ptr [0x0060b280]      ; 0044be96 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0044be9c
    FMUL float ptr [0x005f5050]         ; 0044be9e | DAT_005f5050
    FISTP dword ptr [EBX]               ; 0044bea4
    FLD float ptr [EAX + 0x4]           ; 0044bea6
    FMUL float ptr [0x005f5050]         ; 0044bea9 | DAT_005f5050
    FISTP dword ptr [EBX + 0x4]         ; 0044beaf
    FLD float ptr [EAX + 0x8]           ; 0044beb2
    FMUL float ptr [0x005f5050]         ; 0044beb5 | DAT_005f5050
    FISTP dword ptr [EBX + 0x8]         ; 0044bebb
    LEA EAX,[ESP + 0xc4]                ; 0044bebe
    PUSH EAX                            ; 0044bec5
    MOV EAX,dword ptr [EDX]             ; 0044bec6 | DAT_01ba5c50
    ADD EAX,0x30                        ; 0044bec8
    PUSH EAX                            ; 0044becb
    CALL engine_special.cpp_FUN_0055d723 ; 0044becc
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0044bed1
    MOV DL,byte ptr [ESP + 0x113]       ; 0044bed4
    LEA EBX,[ESP + 0xe8]                ; 0044bedb
    XOR DL,0x80                         ; 0044bee2
    LEA EAX,[ESP + 0x10c]               ; 0044bee5
    MOV byte ptr [ESP + 0x113],DL       ; 0044beec
    MOV EDX,dword ptr [0x0060b280]      ; 0044bef3 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0044bef9
    FMUL float ptr [0x005f5050]         ; 0044befb | DAT_005f5050
    FISTP dword ptr [EBX]               ; 0044bf01
    FLD float ptr [EAX + 0x4]           ; 0044bf03
    FMUL float ptr [0x005f5050]         ; 0044bf06 | DAT_005f5050
    FISTP dword ptr [EBX + 0x4]         ; 0044bf0c
    FLD float ptr [EAX + 0x8]           ; 0044bf0f
    FMUL float ptr [0x005f5050]         ; 0044bf12 | DAT_005f5050
    FISTP dword ptr [EBX + 0x8]         ; 0044bf18
    LEA EAX,[ESP + 0xe8]                ; 0044bf1b
    PUSH EAX                            ; 0044bf22
    MOV EAX,dword ptr [EDX]             ; 0044bf23 | DAT_01ba5c50
    ADD EAX,0x60                        ; 0044bf25
    PUSH EAX                            ; 0044bf28
    CALL engine_special.cpp_FUN_0055d723 ; 0044bf29
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0044bf2e
    MOV DH,byte ptr [ESP + 0x10f]       ; 0044bf31
    LEA EBX,[ESP + 0x13c]               ; 0044bf38
    XOR DH,0x80                         ; 0044bf3f
    LEA EAX,[ESP + 0x10c]               ; 0044bf42
    MOV byte ptr [ESP + 0x10f],DH       ; 0044bf49
    MOV EDX,dword ptr [0x0060b280]      ; 0044bf50 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0044bf56
    FMUL float ptr [0x005f5050]         ; 0044bf58 | DAT_005f5050
    FISTP dword ptr [EBX]               ; 0044bf5e
    FLD float ptr [EAX + 0x4]           ; 0044bf60
    FMUL float ptr [0x005f5050]         ; 0044bf63 | DAT_005f5050
    FISTP dword ptr [EBX + 0x4]         ; 0044bf69
    FLD float ptr [EAX + 0x8]           ; 0044bf6c
    FMUL float ptr [0x005f5050]         ; 0044bf6f | DAT_005f5050
    FISTP dword ptr [EBX + 0x8]         ; 0044bf75
    LEA EAX,[ESP + 0x13c]               ; 0044bf78
    PUSH EAX                            ; 0044bf7f
    MOV EAX,dword ptr [EDX]             ; 0044bf80 | DAT_01ba5c50
    ADD EAX,0x90                        ; 0044bf82
    PUSH EAX                            ; 0044bf87
    CALL engine_special.cpp_FUN_0055d723 ; 0044bf88
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0044bf8d
    PUSH 0x60afe0                       ; 0044bf90 | DAT_0060afe0
    MOV ESI,dword ptr [0x0060b280]      ; 0044bf95 | DAT_0060b280
    PUSH ESI                            ; 0044bf9b | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 0044bf9c
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0044bfa1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044bfa4
    FLD float ptr [EAX + 0x140]         ; 0044bfa7
    FSUB float ptr [ESP + 0x8]          ; 0044bfad
    FMUL double ptr [0x005cf4cf]        ; 0044bfb1 | DAT_005cf4cf
    FDIV float ptr [EAX + 0x140]        ; 0044bfb7
    MOV EDI,0x4                         ; 0044bfbd
    MOV EDX,dword ptr [0x0060b280]      ; 0044bfc2 | DAT_0060b280
    XOR EAX,EAX                         ; 0044bfc8
    MOV dword ptr [ESP + 0x10],EDI      ; 0044bfca
    MOV dword ptr [ESP + 0x20],EAX      ; 0044bfce
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044bfd2
    MOV dword ptr [ESP + 0x18],EAX      ; 0044bfd6
    MOV dword ptr [ESP + 0x14],EAX      ; 0044bfda
    MOV dword ptr [ESP + 0x24],EAX      ; 0044bfde
    FMUL float ptr [ESP + 0x4]          ; 0044bfe2
    MOV EBX,dword ptr [EDX]             ; 0044bfe6 | DAT_01ba5c50
    CALL crt_math.c_round_FUN_005b7ff0  ; 0044bfe8
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x160]       ; 0044bfed
    MOV EAX,dword ptr [ESP + 0x160]     ; 0044bff4
    MOV dword ptr [EBX + 0x2c],EAX      ; 0044bffb
    MOV EAX,dword ptr [EDX]             ; 0044bffe
    MOV dword ptr [EAX + 0x20],0xffff   ; 0044c000
    MOV EAX,dword ptr [EDX]             ; 0044c007
    MOV dword ptr [EAX + 0x24],0xffff   ; 0044c009
    MOV EAX,dword ptr [EDX]             ; 0044c010
    MOV EDI,0x1                         ; 0044c012
    MOV dword ptr [EAX + 0x28],0xffff   ; 0044c017
    MOV dword ptr [ESP + 0x28],EDI      ; 0044c01e
    MOV EBX,dword ptr [EDX]             ; 0044c022
    MOV EAX,dword ptr [ESP + 0x160]     ; 0044c024
    MOV dword ptr [EBX + 0x5c],EAX      ; 0044c02b
    MOV EAX,dword ptr [EDX]             ; 0044c02e
    MOV dword ptr [EAX + 0x50],0xffff   ; 0044c030
    MOV EAX,dword ptr [EDX]             ; 0044c037
    MOV dword ptr [EAX + 0x54],0xffff   ; 0044c039
    MOV EAX,dword ptr [EDX]             ; 0044c040
    MOV dword ptr [EAX + 0x58],0xffff   ; 0044c042
    MOV dword ptr [ESP + 0x2c],0x2      ; 0044c049
    MOV EBX,dword ptr [EDX]             ; 0044c051
    MOV EAX,dword ptr [ESP + 0x160]     ; 0044c053
    MOV dword ptr [EBX + 0x8c],EAX      ; 0044c05a
    MOV EAX,dword ptr [EDX]             ; 0044c060
    MOV dword ptr [EAX + 0x80],0xffff   ; 0044c062
    MOV EAX,dword ptr [EDX]             ; 0044c06c
    MOV dword ptr [EAX + 0x84],0xffff   ; 0044c06e
    MOV EAX,dword ptr [EDX]             ; 0044c078
    MOV ECX,0x3                         ; 0044c07a
    MOV dword ptr [EAX + 0x88],0xffff   ; 0044c07f
    MOV dword ptr [ESP + 0x30],ECX      ; 0044c089
    MOV EBX,dword ptr [EDX]             ; 0044c08d
    MOV EAX,dword ptr [ESP + 0x160]     ; 0044c08f
    MOV dword ptr [EBX + 0xbc],EAX      ; 0044c096
    MOV EAX,dword ptr [EDX]             ; 0044c09c
    MOV dword ptr [EAX + 0xb0],0xffff   ; 0044c09e
    MOV EAX,dword ptr [EDX]             ; 0044c0a8
    MOV dword ptr [EAX + 0xb4],0xffff   ; 0044c0aa
    MOV EAX,dword ptr [EDX]             ; 0044c0b4
    MOV dword ptr [EAX + 0xb8],0xffff   ; 0044c0b6
    MOV EAX,dword ptr [EDX]             ; 0044c0c0
    MOV dword ptr [EAX + 0x18],0xf80000 ; 0044c0c2
    MOV EAX,dword ptr [EDX]             ; 0044c0c9
    MOV dword ptr [EAX + 0x1c],0xf80000 ; 0044c0cb
    MOV EAX,dword ptr [EDX]             ; 0044c0d2
    MOV dword ptr [EAX + 0x48],0x80000  ; 0044c0d4
    MOV EAX,dword ptr [EDX]             ; 0044c0db
    MOV dword ptr [EAX + 0x4c],0xf80000 ; 0044c0dd
    MOV EAX,dword ptr [EDX]             ; 0044c0e4
    MOV dword ptr [EAX + 0x78],0x80000  ; 0044c0e6
    MOV EAX,dword ptr [EDX]             ; 0044c0ed
    MOV dword ptr [EAX + 0x7c],0x80000  ; 0044c0ef
    MOV EAX,dword ptr [EDX]             ; 0044c0f6
    MOV dword ptr [EAX + 0xa8],0xf80000 ; 0044c0f8
    MOV EAX,dword ptr [EDX]             ; 0044c102
    MOV dword ptr [EAX + 0xac],0x80000  ; 0044c104
    LEA EAX,[ESP + 0xc]                 ; 0044c10e
    PUSH EAX                            ; 0044c112
    PUSH EDX                            ; 0044c113
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930 ; 0044c114
        ;   XREF to: 0046a930 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0044c119
    MOV EBX,dword ptr [0x0060b280]      ; 0044c11c | DAT_0060b280
    PUSH EBX                            ; 0044c122 | DAT_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 0044c123
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0044c128
    MOV ESI,dword ptr [ESP + 0x180]     ; 0044c12b
    ADD ESI,EDI                         ; 0044c132
    MOV dword ptr [ESP + 0x180],ESI     ; 0044c134
    CMP ESI,0x19                        ; 0044c13b
    JL 0x0044bcbe                       ; 0044c13e
        ;   XREF to: 0044bcbe (CONDITIONAL_JUMP)  ; LAB_0044bcbe
    PUSH 0x0                            ; 0044c144
    MOV EAX,[0x0060b280]                ; 0044c146 | DAT_0060b280
    PUSH EAX                            ; 0044c14b | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0044c14c
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0044c151
    MOV ESP,EBP                         ; 0044c154
    POP EBP                             ; 0044c156
    POP EDI                             ; 0044c157
    POP ESI                             ; 0044c158
    POP EBX                             ; 0044c159
    RET                                 ; 0044c15a

