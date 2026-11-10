; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_bugs_cpp_FUN_00426870(CBugs *param_1,int *param_2,float param_3,float *param_4)
;
; Local Variables:
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
; undefined        Stack[-0x84]:1  local_84
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
;
; XREF[2]:
;   core_bugs.cpp_CBugs_updateBugsBehavior_FUN_00426030 at 00426129
;   core_bugs.cpp_FUN_00426ec0 at 0042772a
;
; Referenced Globals:
;   undefined4 DAT_005d5134
;   undefined4 DAT_005d5138
;   undefined4 DAT_005d5140
;   undefined4 DAT_005d5148
;   undefined4 DAT_005d5150
;   undefined4 DAT_005d5154
;   undefined4 DAT_005fd228
;   undefined4 DAT_005fd230
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_bugs.cpp_CBugs_sampleGroundHeight_FUN_00425ee0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00426870
        ;   Label: core_bugs.cpp_FUN_00426870
    PUSH ESI                            ; 00426871
    PUSH EDI                            ; 00426872
    PUSH EBP                            ; 00426873
    MOV EBP,ESP                         ; 00426874
    SUB ESP,0xd4                        ; 00426876
    AND ESP,0xfffffff8                  ; 0042687c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0042687f
    CMP dword ptr [EBX],0x0             ; 00426882
    JNZ 0x00426d7d                      ; 00426885
        ;   XREF to: 00426d7d (CONDITIONAL_JUMP)  ; LAB_00426d7d
    LEA EAX,[EBX + 0x20]                ; 0042688b
    MOV dword ptr [ESP + 0xc0],EAX      ; 0042688e
    LEA EAX,[EBX + 0x8]                 ; 00426895
    MOV dword ptr [ESP + 0xb8],EAX      ; 00426898
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0042689f
    FLD float ptr [EAX]                 ; 004268a6
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004268a8
    FSUB float ptr [EAX]                ; 004268af
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004268b1
    FLD float ptr [EAX + 0x4]           ; 004268b8
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004268bb
    FSUB float ptr [EAX + 0x4]          ; 004268c2
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004268c5
    LEA EDI,[ESP + 0x4]                 ; 004268cc
    LEA ESI,[ESP + 0x7c]                ; 004268d0
    FLD float ptr [EAX + 0x8]           ; 004268d4
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004268d7
    FXCH ST2                            ; 004268de
    FSTP float ptr [ESP + 0x7c]         ; 004268e0
    FXCH                                ; 004268e4
    FSUB float ptr [EAX + 0x8]          ; 004268e6
    FXCH                                ; 004268e9
    FSTP float ptr [ESP + 0x80]         ; 004268eb
    FSTP float ptr [ESP + 0x84]         ; 004268f2
    MOVSD ES:EDI,ESI                    ; 004268f9
    MOVSD ES:EDI,ESI                    ; 004268fa
    MOVSD ES:EDI,ESI                    ; 004268fb
    FLD float ptr [ESP + 0x8]           ; 004268fc
    FMUL ST0                            ; 00426900
    FLD float ptr [ESP + 0x4]           ; 00426902
    FMUL ST0                            ; 00426906
    FADDP                               ; 00426908
    FLD float ptr [ESP + 0xc]           ; 0042690a
    FMUL ST0                            ; 0042690e
    FADDP                               ; 00426910
    FSQRT                               ; 00426912
    FSTP float ptr [ESP + 0x98]         ; 00426914
    MOV EAX,dword ptr [ESP + 0x98]      ; 0042691b
    FLD float ptr [ESP + 0x98]          ; 00426922
    MOV dword ptr [ESP],EAX             ; 00426929
    FCOMP float ptr [0x005fd228]        ; 0042692c | DAT_005fd228
    FNSTSW AX                           ; 00426932
    SAHF                                ; 00426934
    JNC 0x00426aa6                      ; 00426935
        ;   XREF to: 00426aa6 (CONDITIONAL_JUMP)  ; LAB_00426aa6
    PUSH dword ptr [EBX + 0x10]         ; 0042693b
    MOV ECX,dword ptr [EBP + 0x14]      ; 0042693e
    PUSH dword ptr [EBX + 0x8]          ; 00426941
    PUSH ECX                            ; 00426944
    CALL core_bugs.cpp_CBugs_sampleGroundHeight_FUN_00425ee0 ; 00426945
        ;   XREF to: 00425ee0 (UNCONDITIONAL_CALL)  ; float core_bugs.cpp_CBugs_sampleGroundHeight_FUN_00425ee0(CBugs * this_ptr, float x, float z)
    MOV dword ptr [ESP + 0xdc],EAX      ; 0042694a
    FLD float ptr [ESP + 0xdc]          ; 00426951
    ADD ESP,0xc                         ; 00426958
    MOV ESI,dword ptr [EBP + 0x20]      ; 0042695b
    FSTP float ptr [EBX + 0xc]          ; 0042695e
    TEST ESI,ESI                        ; 00426961
    JNZ 0x00426d86                      ; 00426963
        ;   XREF to: 00426d86 (CONDITIONAL_JUMP)  ; LAB_00426d86
    FLD float ptr [0x005fd228]          ; 00426969 | DAT_005fd228
    FLD ST0                             ; 0042696f
    FMUL float ptr [0x005d5134]         ; 00426971 | DAT_005d5134
    FXCH                                ; 00426977
    FMUL float ptr [0x005d5140]         ; 00426979 | DAT_005d5140
    FXCH                                ; 0042697f
    FLD double ptr [0x005d5138]         ; 00426981 | DAT_005d5138
    FXCH                                ; 00426987
    FMUL ST1                            ; 00426989
    FXCH ST2                            ; 0042698b
    FMULP                               ; 0042698d
    FXCH                                ; 0042698f
    FSTP float ptr [ESP + 0x94]         ; 00426991
    PUSH dword ptr [ESP + 0x94]         ; 00426998
    FSTP float ptr [ESP + 0xd0]         ; 0042699f
    PUSH dword ptr [ESP + 0xd0]         ; 004269a6
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004269ad
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0xd8],EAX      ; 004269b2
    FLD float ptr [ESP + 0xd8]          ; 004269b9
    ADD ESP,0x8                         ; 004269c0
    PUSH dword ptr [ESP + 0x94]         ; 004269c3
    PUSH dword ptr [ESP + 0xd0]         ; 004269ca
    FSTP float ptr [EBX + 0x20]         ; 004269d1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004269d4
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0xd8],EAX      ; 004269d9
    FLD float ptr [ESP + 0xd8]          ; 004269e0
    ADD ESP,0x8                         ; 004269e7
    FSTP float ptr [EBX + 0x28]         ; 004269ea
    PUSH dword ptr [EBX + 0x28]         ; 004269ed
    MOV EAX,dword ptr [EBP + 0x14]      ; 004269f0
    PUSH dword ptr [EBX + 0x20]         ; 004269f3
    PUSH EAX                            ; 004269f6
    CALL core_bugs.cpp_CBugs_sampleGroundHeight_FUN_00425ee0 ; 004269f7
        ;   XREF to: 00425ee0 (UNCONDITIONAL_CALL)  ; float core_bugs.cpp_CBugs_sampleGroundHeight_FUN_00425ee0(CBugs * this_ptr, float x, float z)
    MOV dword ptr [ESP + 0xdc],EAX      ; 004269fc
    FLD float ptr [ESP + 0xdc]          ; 00426a03
    ADD ESP,0xc                         ; 00426a0a
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00426a0d
    FSTP float ptr [EBX + 0x24]         ; 00426a14
    FLD float ptr [EAX]                 ; 00426a17
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00426a19
    FSUB float ptr [EAX]                ; 00426a20
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00426a22
    FLD float ptr [EAX + 0x4]           ; 00426a29
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00426a2c
    LEA EDI,[ESP + 0x70]                ; 00426a33
    FSUB float ptr [EAX + 0x4]          ; 00426a37
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00426a3a
    LEA ESI,[ESP + 0x1c]                ; 00426a41
    LEA EDX,[ESP + 0x70]                ; 00426a45
    FLD float ptr [EAX + 0x8]           ; 00426a49
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00426a4c
    FXCH ST2                            ; 00426a53
    FSTP float ptr [ESP + 0x1c]         ; 00426a55
    FXCH                                ; 00426a59
    FSUB float ptr [EAX + 0x8]          ; 00426a5b
    FXCH                                ; 00426a5e
    FSTP float ptr [ESP + 0x20]         ; 00426a60
    FSTP float ptr [ESP + 0x24]         ; 00426a64
    LEA EAX,[ESP + 0x4]                 ; 00426a68
    MOVSD ES:EDI,ESI                    ; 00426a6c
    MOVSD ES:EDI,ESI                    ; 00426a6d
    MOVSD ES:EDI,ESI                    ; 00426a6e
    CMP EAX,EDX                         ; 00426a6f
    JZ 0x00426a8b                       ; 00426a71
        ;   XREF to: 00426a8b (CONDITIONAL_JUMP)  ; LAB_00426a8b
    MOV EAX,dword ptr [ESP + 0x70]      ; 00426a73
    MOV dword ptr [ESP + 0x4],EAX       ; 00426a77
    MOV EAX,dword ptr [ESP + 0x74]      ; 00426a7b
    MOV dword ptr [ESP + 0x8],EAX       ; 00426a7f
    MOV EAX,dword ptr [ESP + 0x78]      ; 00426a83
    MOV dword ptr [ESP + 0xc],EAX       ; 00426a87
    FLD float ptr [ESP + 0x8]           ; 00426a8b
        ;   Label: LAB_00426a8b
    FMUL ST0                            ; 00426a8f
    FLD float ptr [ESP + 0x4]           ; 00426a91
    FMUL ST0                            ; 00426a95
    FADDP                               ; 00426a97
    FLD float ptr [ESP + 0xc]           ; 00426a99
    FMUL ST0                            ; 00426a9d
    FADDP                               ; 00426a9f
    FSQRT                               ; 00426aa1
    FSTP float ptr [ESP]                ; 00426aa3
    LEA EAX,[ESP + 0x4]                 ; 00426aa6
        ;   Label: LAB_00426aa6
    PUSH EAX                            ; 00426aaa
    LEA ESI,[ESP + 0x68]                ; 00426aab
    LEA EDI,[ESP + 0x5c]                ; 00426aaf
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 00426ab3
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    ADD ESP,0x4                         ; 00426ab8
    LEA ESI,[ESP + 0x64]                ; 00426abb
    FLD float ptr [ESP]                 ; 00426abf
    FLDZ                                ; 00426ac2
    MOVSD ES:EDI,ESI                    ; 00426ac4
    MOVSD ES:EDI,ESI                    ; 00426ac5
    MOVSD ES:EDI,ESI                    ; 00426ac6
    FCOMPP                              ; 00426ac7
    FNSTSW AX                           ; 00426ac9
    SAHF                                ; 00426acb
    JNC 0x00426e50                      ; 00426acc
        ;   XREF to: 00426e50 (CONDITIONAL_JUMP)  ; LAB_00426e50
    FLD float ptr [0x005fd230]          ; 00426ad2 | DAT_005fd230
    FMUL float ptr [EBP + 0x1c]         ; 00426ad8
    FST float ptr [ESP + 0xac]          ; 00426adb
    FCOMP float ptr [ESP]               ; 00426ae2
    FNSTSW AX                           ; 00426ae5
    SAHF                                ; 00426ae7
    JBE 0x00426af4                      ; 00426ae8
        ;   XREF to: 00426af4 (CONDITIONAL_JUMP)  ; LAB_00426af4
    MOV EAX,dword ptr [ESP]             ; 00426aea
    MOV dword ptr [ESP + 0xac],EAX      ; 00426aed
    FLD float ptr [ESP + 0xac]          ; 00426af4
        ;   Label: LAB_00426af4
    FDIV float ptr [ESP]                ; 00426afb
    FLD float ptr [ESP + 0x4]           ; 00426afe
    FXCH                                ; 00426b02
    FSTP float ptr [ESP + 0x9c]         ; 00426b04
    FMUL float ptr [ESP + 0x9c]         ; 00426b0b
    FLD float ptr [ESP + 0x8]           ; 00426b12
    FMUL float ptr [ESP + 0x9c]         ; 00426b16
    FLD float ptr [ESP + 0xc]           ; 00426b1d
    FMUL float ptr [ESP + 0x9c]         ; 00426b21
    LEA EDI,[ESP + 0x40]                ; 00426b28
    LEA ESI,[ESP + 0x88]                ; 00426b2c
    LEA EAX,[EBX + 0x8]                 ; 00426b33
    FXCH ST2                            ; 00426b36
    FSTP float ptr [ESP + 0x4]          ; 00426b38
    FSTP float ptr [ESP + 0x8]          ; 00426b3c
    FSTP float ptr [ESP + 0xc]          ; 00426b40
    FLD float ptr [EAX]                 ; 00426b44
    FLD float ptr [EAX + 0x4]           ; 00426b46
    FLD float ptr [EAX + 0x8]           ; 00426b49
    FXCH ST2                            ; 00426b4c
    FADD float ptr [ESP + 0x4]          ; 00426b4e
    FXCH                                ; 00426b52
    FADD float ptr [ESP + 0x8]          ; 00426b54
    FXCH ST2                            ; 00426b58
    FADD float ptr [ESP + 0xc]          ; 00426b5a
    FXCH                                ; 00426b5e
    FSTP float ptr [ESP + 0x88]         ; 00426b60
    FXCH                                ; 00426b67
    FSTP float ptr [ESP + 0x8c]         ; 00426b69
    FSTP float ptr [ESP + 0x90]         ; 00426b70
    MOVSD ES:EDI,ESI                    ; 00426b77
    MOVSD ES:EDI,ESI                    ; 00426b78
    MOVSD ES:EDI,ESI                    ; 00426b79
    PUSH dword ptr [ESP + 0x48]         ; 00426b7a
    MOV EDX,dword ptr [EBP + 0x14]      ; 00426b7e
    PUSH dword ptr [ESP + 0x44]         ; 00426b81
    PUSH EDX                            ; 00426b85
    MOV dword ptr [ESP + 0xc8],EAX      ; 00426b86
    CALL core_bugs.cpp_CBugs_sampleGroundHeight_FUN_00425ee0 ; 00426b8d
        ;   XREF to: 00425ee0 (UNCONDITIONAL_CALL)  ; float core_bugs.cpp_CBugs_sampleGroundHeight_FUN_00425ee0(CBugs * this_ptr, float x, float z)
    MOV dword ptr [ESP + 0xdc],EAX      ; 00426b92
    FLD float ptr [ESP + 0xdc]          ; 00426b99
    ADD ESP,0xc                         ; 00426ba0
    FST float ptr [ESP + 0xc4]          ; 00426ba3
    FSUB float ptr [EBX + 0xc]          ; 00426baa
    FLD float ptr [ESP]                 ; 00426bad
    FMUL double ptr [0x005d5148]        ; 00426bb0 | DAT_005d5148
    FCOMPP                              ; 00426bb6
    FNSTSW AX                           ; 00426bb8
    SAHF                                ; 00426bba
    JNC 0x00426e74                      ; 00426bbb
        ;   XREF to: 00426e74 (CONDITIONAL_JUMP)  ; LAB_00426e74
    FLD float ptr [ESP + 0x8]           ; 00426bc1
    FLDZ                                ; 00426bc5
    FCOMPP                              ; 00426bc7
    FNSTSW AX                           ; 00426bc9
    SAHF                                ; 00426bcb
    JNC 0x00426e5c                      ; 00426bcc
        ;   XREF to: 00426e5c (CONDITIONAL_JUMP)  ; LAB_00426e5c
    FLD float ptr [EBX + 0xc]           ; 00426bd2
    MOV EDI,0xbfc90fdb                  ; 00426bd5
    FADD float ptr [ESP + 0xac]         ; 00426bda
    MOV dword ptr [ESP + 0x58],EDI      ; 00426be1
    FSTP float ptr [EBX + 0xc]          ; 00426be5
        ;   Label: LAB_00426be5
    FLD float ptr [ESP + 0x58]          ; 00426be8
        ;   Label: LAB_00426be8
    FLD float ptr [ESP + 0x5c]          ; 00426bec
    FLD float ptr [ESP + 0x60]          ; 00426bf0
    LEA EAX,[EBX + 0x14]                ; 00426bf4
    LEA EDI,[ESP + 0x28]                ; 00426bf7
    LEA ESI,[ESP + 0x34]                ; 00426bfb
    FXCH ST2                            ; 00426bff
    FSUB float ptr [EAX]                ; 00426c01
    FXCH                                ; 00426c03
    FSUB float ptr [EAX + 0x4]          ; 00426c05
    FXCH ST2                            ; 00426c08
    FSUB float ptr [EAX + 0x8]          ; 00426c0a
    FXCH                                ; 00426c0d
    FSTP float ptr [ESP + 0x34]         ; 00426c0f
    FXCH                                ; 00426c13
    FSTP float ptr [ESP + 0x38]         ; 00426c15
    FSTP float ptr [ESP + 0x3c]         ; 00426c19
    MOVSD ES:EDI,ESI                    ; 00426c1d
    MOVSD ES:EDI,ESI                    ; 00426c1e
    MOVSD ES:EDI,ESI                    ; 00426c1f
    PUSH dword ptr [ESP + 0x2c]         ; 00426c20
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00426c24
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0xd4],EAX      ; 00426c29
    FLD float ptr [ESP + 0xd4]          ; 00426c30
    ADD ESP,0x4                         ; 00426c37
    PUSH dword ptr [ESP + 0x28]         ; 00426c3a
    FSTP float ptr [ESP + 0xa8]         ; 00426c3e
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00426c45
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0xd4],EAX      ; 00426c4a
    FLD float ptr [ESP + 0xd4]          ; 00426c51
    ADD ESP,0x4                         ; 00426c58
    FLD float ptr [EBP + 0x1c]          ; 00426c5b
    FMUL float ptr [0x005d5150]         ; 00426c5e | DAT_005d5150
    FMUL float ptr [0x005d5154]         ; 00426c64 | DAT_005d5154
    FLD float ptr [ESP + 0xa4]          ; 00426c6a
    FXCH ST2                            ; 00426c71
    FSTP float ptr [ESP + 0xb0]         ; 00426c73
    FST float ptr [ESP + 0xb4]          ; 00426c7a
    FCHS                                ; 00426c81
    FSTP float ptr [ESP + 0xa8]         ; 00426c83
    FCOMP float ptr [ESP + 0xa8]        ; 00426c8a
    FNSTSW AX                           ; 00426c91
    SAHF                                ; 00426c93
    JNC 0x00426ca4                      ; 00426c94
        ;   XREF to: 00426ca4 (CONDITIONAL_JUMP)  ; LAB_00426ca4
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00426c96
    MOV dword ptr [ESP + 0xa4],EAX      ; 00426c9d
    FLD float ptr [ESP + 0xa4]          ; 00426ca4
        ;   Label: LAB_00426ca4
    FCOMP float ptr [ESP + 0xb4]        ; 00426cab
    FNSTSW AX                           ; 00426cb2
    SAHF                                ; 00426cb4
    JBE 0x00426cc5                      ; 00426cb5
        ;   XREF to: 00426cc5 (CONDITIONAL_JUMP)  ; LAB_00426cc5
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00426cb7
    MOV dword ptr [ESP + 0xa4],EAX      ; 00426cbe
    FLD float ptr [ESP + 0xb0]          ; 00426cc5
        ;   Label: LAB_00426cc5
    FLD float ptr [ESP + 0xb4]          ; 00426ccc
    FCHS                                ; 00426cd3
    FSTP float ptr [ESP + 0xc8]         ; 00426cd5
    FCOMP float ptr [ESP + 0xc8]        ; 00426cdc
    FNSTSW AX                           ; 00426ce3
    SAHF                                ; 00426ce5
    JNC 0x00426cf6                      ; 00426ce6
        ;   XREF to: 00426cf6 (CONDITIONAL_JUMP)  ; LAB_00426cf6
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00426ce8
    MOV dword ptr [ESP + 0xb0],EAX      ; 00426cef
    FLD float ptr [ESP + 0xb0]          ; 00426cf6
        ;   Label: LAB_00426cf6
    FCOMP float ptr [ESP + 0xb4]        ; 00426cfd
    FNSTSW AX                           ; 00426d04
    SAHF                                ; 00426d06
    JBE 0x00426d17                      ; 00426d07
        ;   XREF to: 00426d17 (CONDITIONAL_JUMP)  ; LAB_00426d17
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00426d09
    MOV dword ptr [ESP + 0xb0],EAX      ; 00426d10
    FLD float ptr [EBX + 0x18]          ; 00426d17
        ;   Label: LAB_00426d17
    FADD float ptr [ESP + 0xa4]         ; 00426d1a
    SUB ESP,0x4                         ; 00426d21
    FSTP float ptr [ESP]                ; 00426d24
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00426d27
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0xd4],EAX      ; 00426d2c
    FLD float ptr [EBX + 0x14]          ; 00426d33
    FLD float ptr [ESP + 0xd4]          ; 00426d36
    ADD ESP,0x4                         ; 00426d3d
    MOV dword ptr [EBX + 0x1c],0x0      ; 00426d40
    FXCH                                ; 00426d47
    FADD float ptr [ESP + 0xb0]         ; 00426d49
    SUB ESP,0x4                         ; 00426d50
    FXCH                                ; 00426d53
    FSTP float ptr [EBX + 0x18]         ; 00426d55
    FSTP float ptr [ESP]                ; 00426d58
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00426d5b
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0xd4],EAX      ; 00426d60
    FLD float ptr [ESP + 0xd4]          ; 00426d67
    XOR EAX,EAX                         ; 00426d6e
    FSTP float ptr [EBX + 0x14]         ; 00426d70
    ADD ESP,0x4                         ; 00426d73
    MOV ESP,EBP                         ; 00426d76
    POP EBP                             ; 00426d78
    POP EDI                             ; 00426d79
    POP ESI                             ; 00426d7a
    POP EBX                             ; 00426d7b
    RET                                 ; 00426d7c
    XOR EAX,EAX                         ; 00426d7d
        ;   Label: LAB_00426d7d
    MOV ESP,EBP                         ; 00426d7f
    POP EBP                             ; 00426d81
    POP EDI                             ; 00426d82
    POP ESI                             ; 00426d83
    POP EBX                             ; 00426d84
    RET                                 ; 00426d85
    CMP ESI,dword ptr [ESP + 0xc0]      ; 00426d86
        ;   Label: LAB_00426d86
    JZ 0x00426dba                       ; 00426d8d
        ;   XREF to: 00426dba (CONDITIONAL_JUMP)  ; LAB_00426dba
    MOV EAX,ESI                         ; 00426d8f
    FLD float ptr [EAX]                 ; 00426d91
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00426d93
    FSTP float ptr [EAX]                ; 00426d9a
    MOV EAX,ESI                         ; 00426d9c
    FLD float ptr [EAX + 0x4]           ; 00426d9e
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00426da1
    FSTP float ptr [EAX + 0x4]          ; 00426da8
    MOV EAX,ESI                         ; 00426dab
    FLD float ptr [EAX + 0x8]           ; 00426dad
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00426db0
    FSTP float ptr [EAX + 0x8]          ; 00426db7
    LEA EAX,[EBX + 0x20]                ; 00426dba
        ;   Label: LAB_00426dba
    LEA EDI,[ESP + 0x10]                ; 00426dbd
    LEA ESI,[ESP + 0x4c]                ; 00426dc1
    FLD float ptr [EAX + 0x4]           ; 00426dc5
    FLD float ptr [EAX + 0x8]           ; 00426dc8
    LEA EDX,[EBX + 0x8]                 ; 00426dcb
    FLD float ptr [EAX]                 ; 00426dce
    LEA EAX,[ESP + 0x10]                ; 00426dd0
    FSUB float ptr [EDX]                ; 00426dd4
    FXCH ST2                            ; 00426dd6
    FSUB float ptr [EDX + 0x4]          ; 00426dd8
    FXCH                                ; 00426ddb
    FSUB float ptr [EDX + 0x8]          ; 00426ddd
    FXCH ST2                            ; 00426de0
    FSTP float ptr [ESP + 0x4c]         ; 00426de2
    FSTP float ptr [ESP + 0x50]         ; 00426de6
    FSTP float ptr [ESP + 0x54]         ; 00426dea
    LEA EDX,[ESP + 0x4]                 ; 00426dee
    MOVSD ES:EDI,ESI                    ; 00426df2
    MOVSD ES:EDI,ESI                    ; 00426df3
    MOVSD ES:EDI,ESI                    ; 00426df4
    CMP EDX,EAX                         ; 00426df5
    JZ 0x00426e11                       ; 00426df7
        ;   XREF to: 00426e11 (CONDITIONAL_JUMP)  ; LAB_00426e11
    MOV EAX,dword ptr [ESP + 0x10]      ; 00426df9
    MOV dword ptr [ESP + 0x4],EAX       ; 00426dfd
    MOV EAX,dword ptr [ESP + 0x14]      ; 00426e01
    MOV dword ptr [ESP + 0x8],EAX       ; 00426e05
    MOV EAX,dword ptr [ESP + 0x18]      ; 00426e09
    MOV dword ptr [ESP + 0xc],EAX       ; 00426e0d
    FLD float ptr [ESP + 0x8]           ; 00426e11
        ;   Label: LAB_00426e11
    FMUL ST0                            ; 00426e15
    FLD float ptr [ESP + 0x4]           ; 00426e17
    FMUL ST0                            ; 00426e1b
    FADDP                               ; 00426e1d
    FLD float ptr [ESP + 0xc]           ; 00426e1f
    FMUL ST0                            ; 00426e23
    FADDP                               ; 00426e25
    FSQRT                               ; 00426e27
    FSTP float ptr [ESP + 0xa0]         ; 00426e29
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00426e30
    FLD float ptr [ESP + 0xa0]          ; 00426e37
    MOV dword ptr [ESP],EAX             ; 00426e3e
    FCOMP float ptr [0x005fd228]        ; 00426e41 | DAT_005fd228
    FNSTSW AX                           ; 00426e47
    SAHF                                ; 00426e49
    JNC 0x00426aa6                      ; 00426e4a
        ;   XREF to: 00426aa6 (CONDITIONAL_JUMP)  ; LAB_00426aa6
    MOV EAX,0x1                         ; 00426e50
        ;   Label: LAB_00426e50
    MOV ESP,EBP                         ; 00426e55
    POP EBP                             ; 00426e57
    POP EDI                             ; 00426e58
    POP ESI                             ; 00426e59
    POP EBX                             ; 00426e5a
    RET                                 ; 00426e5b
    FLD float ptr [EBX + 0xc]           ; 00426e5c
        ;   Label: LAB_00426e5c
    MOV ESI,0x3fc90fdb                  ; 00426e5f
    FSUB float ptr [ESP + 0xac]         ; 00426e64
    MOV dword ptr [ESP + 0x58],ESI      ; 00426e6b
    JMP 0x00426be5                      ; 00426e6f
        ;   XREF to: 00426be5 (UNCONDITIONAL_JUMP)  ; LAB_00426be5
    MOV ECX,dword ptr [ESP + 0xbc]      ; 00426e74
        ;   Label: LAB_00426e74
    LEA EAX,[ESP + 0x40]                ; 00426e7b
    CMP EAX,ECX                         ; 00426e7f
    JZ 0x00426e97                       ; 00426e81
        ;   XREF to: 00426e97 (CONDITIONAL_JUMP)  ; LAB_00426e97
    MOV EAX,dword ptr [ESP + 0x40]      ; 00426e83
    MOV dword ptr [ECX],EAX             ; 00426e87
    MOV EAX,dword ptr [ESP + 0x44]      ; 00426e89
    MOV dword ptr [ECX + 0x4],EAX       ; 00426e8d
    MOV EAX,dword ptr [ESP + 0x48]      ; 00426e90
    MOV dword ptr [ECX + 0x8],EAX       ; 00426e94
    FLD float ptr [ESP + 0xc4]          ; 00426e97
        ;   Label: LAB_00426e97
    FCOMP float ptr [EBX + 0xc]         ; 00426e9e
    FNSTSW AX                           ; 00426ea1
    SAHF                                ; 00426ea3
    JBE 0x00426be8                      ; 00426ea4
        ;   XREF to: 00426be8 (CONDITIONAL_JUMP)  ; LAB_00426be8
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00426eaa
    MOV dword ptr [EBX + 0xc],EAX       ; 00426eb1
    JMP 0x00426be8                      ; 00426eb4
        ;   XREF to: 00426be8 (UNCONDITIONAL_JUMP)  ; LAB_00426be8

