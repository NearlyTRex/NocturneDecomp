; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_bugs_cpp_FUN_00420840(CBugs *param_1,int *param_2,float param_3,float *param_4)
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
;   core_bugs.cpp_CBugs_updateBugsBehavior_FUN_00420000 at 004200f9
;   core_bugs.cpp_FUN_00420e90 at 004216fa
;
; Referenced Globals:
;   undefined4 DAT_005cca45
;   undefined4 DAT_005cca49
;   undefined4 DAT_005cca51
;   undefined4 DAT_005cca59
;   undefined4 DAT_005cca61
;   undefined4 DAT_005cca65
;   undefined4 DAT_005f3e28
;   undefined4 DAT_005f3e30
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_bugs.cpp_CBugs_sampleGroundHeight_FUN_0041feb0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00420840
        ;   Label: core_bugs.cpp_FUN_00420840
    PUSH ESI                            ; 00420841
    PUSH EDI                            ; 00420842
    PUSH EBP                            ; 00420843
    MOV EBP,ESP                         ; 00420844
    SUB ESP,0xd4                        ; 00420846
    AND ESP,0xfffffff8                  ; 0042084c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0042084f
    CMP dword ptr [EBX],0x0             ; 00420852
    JNZ 0x00420d4d                      ; 00420855
        ;   XREF to: 00420d4d (CONDITIONAL_JUMP)  ; LAB_00420d4d
    LEA EAX,[EBX + 0x20]                ; 0042085b
    MOV dword ptr [ESP + 0xc0],EAX      ; 0042085e
    LEA EAX,[EBX + 0x8]                 ; 00420865
    MOV dword ptr [ESP + 0xb8],EAX      ; 00420868
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0042086f
    FLD float ptr [EAX]                 ; 00420876
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00420878
    FSUB float ptr [EAX]                ; 0042087f
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00420881
    FLD float ptr [EAX + 0x4]           ; 00420888
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0042088b
    FSUB float ptr [EAX + 0x4]          ; 00420892
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00420895
    LEA EDI,[ESP + 0x4]                 ; 0042089c
    LEA ESI,[ESP + 0x7c]                ; 004208a0
    FLD float ptr [EAX + 0x8]           ; 004208a4
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004208a7
    FXCH ST2                            ; 004208ae
    FSTP float ptr [ESP + 0x7c]         ; 004208b0
    FXCH                                ; 004208b4
    FSUB float ptr [EAX + 0x8]          ; 004208b6
    FXCH                                ; 004208b9
    FSTP float ptr [ESP + 0x80]         ; 004208bb
    FSTP float ptr [ESP + 0x84]         ; 004208c2
    MOVSD ES:EDI,ESI                    ; 004208c9
    MOVSD ES:EDI,ESI                    ; 004208ca
    MOVSD ES:EDI,ESI                    ; 004208cb
    FLD float ptr [ESP + 0x8]           ; 004208cc
    FMUL ST0                            ; 004208d0
    FLD float ptr [ESP + 0x4]           ; 004208d2
    FMUL ST0                            ; 004208d6
    FADDP                               ; 004208d8
    FLD float ptr [ESP + 0xc]           ; 004208da
    FMUL ST0                            ; 004208de
    FADDP                               ; 004208e0
    FSQRT                               ; 004208e2
    FSTP float ptr [ESP + 0x98]         ; 004208e4
    MOV EAX,dword ptr [ESP + 0x98]      ; 004208eb
    FLD float ptr [ESP + 0x98]          ; 004208f2
    MOV dword ptr [ESP],EAX             ; 004208f9
    FCOMP float ptr [0x005f3e28]        ; 004208fc | DAT_005f3e28
    FNSTSW AX                           ; 00420902
    SAHF                                ; 00420904
    JNC 0x00420a76                      ; 00420905
        ;   XREF to: 00420a76 (CONDITIONAL_JUMP)  ; LAB_00420a76
    PUSH dword ptr [EBX + 0x10]         ; 0042090b
    MOV ECX,dword ptr [EBP + 0x14]      ; 0042090e
    PUSH dword ptr [EBX + 0x8]          ; 00420911
    PUSH ECX                            ; 00420914
    CALL core_bugs.cpp_CBugs_sampleGroundHeight_FUN_0041feb0 ; 00420915
        ;   XREF to: 0041feb0 (UNCONDITIONAL_CALL)  ; float core_bugs.cpp_CBugs_sampleGroundHeight_FUN_0041feb0(CBugs * this_ptr, float x, float z)
    MOV dword ptr [ESP + 0xdc],EAX      ; 0042091a
    FLD float ptr [ESP + 0xdc]          ; 00420921
    ADD ESP,0xc                         ; 00420928
    MOV ESI,dword ptr [EBP + 0x20]      ; 0042092b
    FSTP float ptr [EBX + 0xc]          ; 0042092e
    TEST ESI,ESI                        ; 00420931
    JNZ 0x00420d56                      ; 00420933
        ;   XREF to: 00420d56 (CONDITIONAL_JUMP)  ; LAB_00420d56
    FLD float ptr [0x005f3e28]          ; 00420939 | DAT_005f3e28
    FLD ST0                             ; 0042093f
    FMUL float ptr [0x005cca45]         ; 00420941 | DAT_005cca45
    FXCH                                ; 00420947
    FMUL float ptr [0x005cca51]         ; 00420949 | DAT_005cca51
    FXCH                                ; 0042094f
    FLD double ptr [0x005cca49]         ; 00420951 | DAT_005cca49
    FXCH                                ; 00420957
    FMUL ST1                            ; 00420959
    FXCH ST2                            ; 0042095b
    FMULP                               ; 0042095d
    FXCH                                ; 0042095f
    FSTP float ptr [ESP + 0x94]         ; 00420961
    PUSH dword ptr [ESP + 0x94]         ; 00420968
    FSTP float ptr [ESP + 0xd0]         ; 0042096f
    PUSH dword ptr [ESP + 0xd0]         ; 00420976
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0042097d
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xd8],EAX      ; 00420982
    FLD float ptr [ESP + 0xd8]          ; 00420989
    ADD ESP,0x8                         ; 00420990
    PUSH dword ptr [ESP + 0x94]         ; 00420993
    PUSH dword ptr [ESP + 0xd0]         ; 0042099a
    FSTP float ptr [EBX + 0x20]         ; 004209a1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004209a4
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xd8],EAX      ; 004209a9
    FLD float ptr [ESP + 0xd8]          ; 004209b0
    ADD ESP,0x8                         ; 004209b7
    FSTP float ptr [EBX + 0x28]         ; 004209ba
    PUSH dword ptr [EBX + 0x28]         ; 004209bd
    MOV EAX,dword ptr [EBP + 0x14]      ; 004209c0
    PUSH dword ptr [EBX + 0x20]         ; 004209c3
    PUSH EAX                            ; 004209c6
    CALL core_bugs.cpp_CBugs_sampleGroundHeight_FUN_0041feb0 ; 004209c7
        ;   XREF to: 0041feb0 (UNCONDITIONAL_CALL)  ; float core_bugs.cpp_CBugs_sampleGroundHeight_FUN_0041feb0(CBugs * this_ptr, float x, float z)
    MOV dword ptr [ESP + 0xdc],EAX      ; 004209cc
    FLD float ptr [ESP + 0xdc]          ; 004209d3
    ADD ESP,0xc                         ; 004209da
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004209dd
    FSTP float ptr [EBX + 0x24]         ; 004209e4
    FLD float ptr [EAX]                 ; 004209e7
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004209e9
    FSUB float ptr [EAX]                ; 004209f0
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004209f2
    FLD float ptr [EAX + 0x4]           ; 004209f9
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004209fc
    LEA EDI,[ESP + 0x70]                ; 00420a03
    FSUB float ptr [EAX + 0x4]          ; 00420a07
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00420a0a
    LEA ESI,[ESP + 0x1c]                ; 00420a11
    LEA EDX,[ESP + 0x70]                ; 00420a15
    FLD float ptr [EAX + 0x8]           ; 00420a19
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00420a1c
    FXCH ST2                            ; 00420a23
    FSTP float ptr [ESP + 0x1c]         ; 00420a25
    FXCH                                ; 00420a29
    FSUB float ptr [EAX + 0x8]          ; 00420a2b
    FXCH                                ; 00420a2e
    FSTP float ptr [ESP + 0x20]         ; 00420a30
    FSTP float ptr [ESP + 0x24]         ; 00420a34
    LEA EAX,[ESP + 0x4]                 ; 00420a38
    MOVSD ES:EDI,ESI                    ; 00420a3c
    MOVSD ES:EDI,ESI                    ; 00420a3d
    MOVSD ES:EDI,ESI                    ; 00420a3e
    CMP EAX,EDX                         ; 00420a3f
    JZ 0x00420a5b                       ; 00420a41
        ;   XREF to: 00420a5b (CONDITIONAL_JUMP)  ; LAB_00420a5b
    MOV EAX,dword ptr [ESP + 0x70]      ; 00420a43
    MOV dword ptr [ESP + 0x4],EAX       ; 00420a47
    MOV EAX,dword ptr [ESP + 0x74]      ; 00420a4b
    MOV dword ptr [ESP + 0x8],EAX       ; 00420a4f
    MOV EAX,dword ptr [ESP + 0x78]      ; 00420a53
    MOV dword ptr [ESP + 0xc],EAX       ; 00420a57
    FLD float ptr [ESP + 0x8]           ; 00420a5b
        ;   Label: LAB_00420a5b
    FMUL ST0                            ; 00420a5f
    FLD float ptr [ESP + 0x4]           ; 00420a61
    FMUL ST0                            ; 00420a65
    FADDP                               ; 00420a67
    FLD float ptr [ESP + 0xc]           ; 00420a69
    FMUL ST0                            ; 00420a6d
    FADDP                               ; 00420a6f
    FSQRT                               ; 00420a71
    FSTP float ptr [ESP]                ; 00420a73
    LEA EAX,[ESP + 0x4]                 ; 00420a76
        ;   Label: LAB_00420a76
    PUSH EAX                            ; 00420a7a
    LEA ESI,[ESP + 0x68]                ; 00420a7b
    LEA EDI,[ESP + 0x5c]                ; 00420a7f
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 00420a83
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    ADD ESP,0x4                         ; 00420a88
    LEA ESI,[ESP + 0x64]                ; 00420a8b
    FLD float ptr [ESP]                 ; 00420a8f
    FLDZ                                ; 00420a92
    MOVSD ES:EDI,ESI                    ; 00420a94
    MOVSD ES:EDI,ESI                    ; 00420a95
    MOVSD ES:EDI,ESI                    ; 00420a96
    FCOMPP                              ; 00420a97
    FNSTSW AX                           ; 00420a99
    SAHF                                ; 00420a9b
    JNC 0x00420e20                      ; 00420a9c
        ;   XREF to: 00420e20 (CONDITIONAL_JUMP)  ; LAB_00420e20
    FLD float ptr [0x005f3e30]          ; 00420aa2 | DAT_005f3e30
    FMUL float ptr [EBP + 0x1c]         ; 00420aa8
    FST float ptr [ESP + 0xac]          ; 00420aab
    FCOMP float ptr [ESP]               ; 00420ab2
    FNSTSW AX                           ; 00420ab5
    SAHF                                ; 00420ab7
    JBE 0x00420ac4                      ; 00420ab8
        ;   XREF to: 00420ac4 (CONDITIONAL_JUMP)  ; LAB_00420ac4
    MOV EAX,dword ptr [ESP]             ; 00420aba
    MOV dword ptr [ESP + 0xac],EAX      ; 00420abd
    FLD float ptr [ESP + 0xac]          ; 00420ac4
        ;   Label: LAB_00420ac4
    FDIV float ptr [ESP]                ; 00420acb
    FLD float ptr [ESP + 0x4]           ; 00420ace
    FXCH                                ; 00420ad2
    FSTP float ptr [ESP + 0x9c]         ; 00420ad4
    FMUL float ptr [ESP + 0x9c]         ; 00420adb
    FLD float ptr [ESP + 0x8]           ; 00420ae2
    FMUL float ptr [ESP + 0x9c]         ; 00420ae6
    FLD float ptr [ESP + 0xc]           ; 00420aed
    FMUL float ptr [ESP + 0x9c]         ; 00420af1
    LEA EDI,[ESP + 0x40]                ; 00420af8
    LEA ESI,[ESP + 0x88]                ; 00420afc
    LEA EAX,[EBX + 0x8]                 ; 00420b03
    FXCH ST2                            ; 00420b06
    FSTP float ptr [ESP + 0x4]          ; 00420b08
    FSTP float ptr [ESP + 0x8]          ; 00420b0c
    FSTP float ptr [ESP + 0xc]          ; 00420b10
    FLD float ptr [EAX]                 ; 00420b14
    FLD float ptr [EAX + 0x4]           ; 00420b16
    FLD float ptr [EAX + 0x8]           ; 00420b19
    FXCH ST2                            ; 00420b1c
    FADD float ptr [ESP + 0x4]          ; 00420b1e
    FXCH                                ; 00420b22
    FADD float ptr [ESP + 0x8]          ; 00420b24
    FXCH ST2                            ; 00420b28
    FADD float ptr [ESP + 0xc]          ; 00420b2a
    FXCH                                ; 00420b2e
    FSTP float ptr [ESP + 0x88]         ; 00420b30
    FXCH                                ; 00420b37
    FSTP float ptr [ESP + 0x8c]         ; 00420b39
    FSTP float ptr [ESP + 0x90]         ; 00420b40
    MOVSD ES:EDI,ESI                    ; 00420b47
    MOVSD ES:EDI,ESI                    ; 00420b48
    MOVSD ES:EDI,ESI                    ; 00420b49
    PUSH dword ptr [ESP + 0x48]         ; 00420b4a
    MOV EDX,dword ptr [EBP + 0x14]      ; 00420b4e
    PUSH dword ptr [ESP + 0x44]         ; 00420b51
    PUSH EDX                            ; 00420b55
    MOV dword ptr [ESP + 0xc8],EAX      ; 00420b56
    CALL core_bugs.cpp_CBugs_sampleGroundHeight_FUN_0041feb0 ; 00420b5d
        ;   XREF to: 0041feb0 (UNCONDITIONAL_CALL)  ; float core_bugs.cpp_CBugs_sampleGroundHeight_FUN_0041feb0(CBugs * this_ptr, float x, float z)
    MOV dword ptr [ESP + 0xdc],EAX      ; 00420b62
    FLD float ptr [ESP + 0xdc]          ; 00420b69
    ADD ESP,0xc                         ; 00420b70
    FST float ptr [ESP + 0xc4]          ; 00420b73
    FSUB float ptr [EBX + 0xc]          ; 00420b7a
    FLD float ptr [ESP]                 ; 00420b7d
    FMUL double ptr [0x005cca59]        ; 00420b80 | DAT_005cca59
    FCOMPP                              ; 00420b86
    FNSTSW AX                           ; 00420b88
    SAHF                                ; 00420b8a
    JNC 0x00420e44                      ; 00420b8b
        ;   XREF to: 00420e44 (CONDITIONAL_JUMP)  ; LAB_00420e44
    FLD float ptr [ESP + 0x8]           ; 00420b91
    FLDZ                                ; 00420b95
    FCOMPP                              ; 00420b97
    FNSTSW AX                           ; 00420b99
    SAHF                                ; 00420b9b
    JNC 0x00420e2c                      ; 00420b9c
        ;   XREF to: 00420e2c (CONDITIONAL_JUMP)  ; LAB_00420e2c
    FLD float ptr [EBX + 0xc]           ; 00420ba2
    MOV EDI,0xbfc90fdb                  ; 00420ba5
    FADD float ptr [ESP + 0xac]         ; 00420baa
    MOV dword ptr [ESP + 0x58],EDI      ; 00420bb1
    FSTP float ptr [EBX + 0xc]          ; 00420bb5
        ;   Label: LAB_00420bb5
    FLD float ptr [ESP + 0x58]          ; 00420bb8
        ;   Label: LAB_00420bb8
    FLD float ptr [ESP + 0x5c]          ; 00420bbc
    FLD float ptr [ESP + 0x60]          ; 00420bc0
    LEA EAX,[EBX + 0x14]                ; 00420bc4
    LEA EDI,[ESP + 0x28]                ; 00420bc7
    LEA ESI,[ESP + 0x34]                ; 00420bcb
    FXCH ST2                            ; 00420bcf
    FSUB float ptr [EAX]                ; 00420bd1
    FXCH                                ; 00420bd3
    FSUB float ptr [EAX + 0x4]          ; 00420bd5
    FXCH ST2                            ; 00420bd8
    FSUB float ptr [EAX + 0x8]          ; 00420bda
    FXCH                                ; 00420bdd
    FSTP float ptr [ESP + 0x34]         ; 00420bdf
    FXCH                                ; 00420be3
    FSTP float ptr [ESP + 0x38]         ; 00420be5
    FSTP float ptr [ESP + 0x3c]         ; 00420be9
    MOVSD ES:EDI,ESI                    ; 00420bed
    MOVSD ES:EDI,ESI                    ; 00420bee
    MOVSD ES:EDI,ESI                    ; 00420bef
    PUSH dword ptr [ESP + 0x2c]         ; 00420bf0
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 00420bf4
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0()
    MOV dword ptr [ESP + 0xd4],EAX      ; 00420bf9
    FLD float ptr [ESP + 0xd4]          ; 00420c00
    ADD ESP,0x4                         ; 00420c07
    PUSH dword ptr [ESP + 0x28]         ; 00420c0a
    FSTP float ptr [ESP + 0xa8]         ; 00420c0e
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 00420c15
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0()
    MOV dword ptr [ESP + 0xd4],EAX      ; 00420c1a
    FLD float ptr [ESP + 0xd4]          ; 00420c21
    ADD ESP,0x4                         ; 00420c28
    FLD float ptr [EBP + 0x1c]          ; 00420c2b
    FMUL float ptr [0x005cca61]         ; 00420c2e | DAT_005cca61
    FMUL float ptr [0x005cca65]         ; 00420c34 | DAT_005cca65
    FLD float ptr [ESP + 0xa4]          ; 00420c3a
    FXCH ST2                            ; 00420c41
    FSTP float ptr [ESP + 0xb0]         ; 00420c43
    FST float ptr [ESP + 0xb4]          ; 00420c4a
    FCHS                                ; 00420c51
    FSTP float ptr [ESP + 0xa8]         ; 00420c53
    FCOMP float ptr [ESP + 0xa8]        ; 00420c5a
    FNSTSW AX                           ; 00420c61
    SAHF                                ; 00420c63
    JNC 0x00420c74                      ; 00420c64
        ;   XREF to: 00420c74 (CONDITIONAL_JUMP)  ; LAB_00420c74
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00420c66
    MOV dword ptr [ESP + 0xa4],EAX      ; 00420c6d
    FLD float ptr [ESP + 0xa4]          ; 00420c74
        ;   Label: LAB_00420c74
    FCOMP float ptr [ESP + 0xb4]        ; 00420c7b
    FNSTSW AX                           ; 00420c82
    SAHF                                ; 00420c84
    JBE 0x00420c95                      ; 00420c85
        ;   XREF to: 00420c95 (CONDITIONAL_JUMP)  ; LAB_00420c95
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00420c87
    MOV dword ptr [ESP + 0xa4],EAX      ; 00420c8e
    FLD float ptr [ESP + 0xb0]          ; 00420c95
        ;   Label: LAB_00420c95
    FLD float ptr [ESP + 0xb4]          ; 00420c9c
    FCHS                                ; 00420ca3
    FSTP float ptr [ESP + 0xc8]         ; 00420ca5
    FCOMP float ptr [ESP + 0xc8]        ; 00420cac
    FNSTSW AX                           ; 00420cb3
    SAHF                                ; 00420cb5
    JNC 0x00420cc6                      ; 00420cb6
        ;   XREF to: 00420cc6 (CONDITIONAL_JUMP)  ; LAB_00420cc6
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00420cb8
    MOV dword ptr [ESP + 0xb0],EAX      ; 00420cbf
    FLD float ptr [ESP + 0xb0]          ; 00420cc6
        ;   Label: LAB_00420cc6
    FCOMP float ptr [ESP + 0xb4]        ; 00420ccd
    FNSTSW AX                           ; 00420cd4
    SAHF                                ; 00420cd6
    JBE 0x00420ce7                      ; 00420cd7
        ;   XREF to: 00420ce7 (CONDITIONAL_JUMP)  ; LAB_00420ce7
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00420cd9
    MOV dword ptr [ESP + 0xb0],EAX      ; 00420ce0
    FLD float ptr [EBX + 0x18]          ; 00420ce7
        ;   Label: LAB_00420ce7
    FADD float ptr [ESP + 0xa4]         ; 00420cea
    SUB ESP,0x4                         ; 00420cf1
    FSTP float ptr [ESP]                ; 00420cf4
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 00420cf7
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0()
    MOV dword ptr [ESP + 0xd4],EAX      ; 00420cfc
    FLD float ptr [EBX + 0x14]          ; 00420d03
    FLD float ptr [ESP + 0xd4]          ; 00420d06
    ADD ESP,0x4                         ; 00420d0d
    MOV dword ptr [EBX + 0x1c],0x0      ; 00420d10
    FXCH                                ; 00420d17
    FADD float ptr [ESP + 0xb0]         ; 00420d19
    SUB ESP,0x4                         ; 00420d20
    FXCH                                ; 00420d23
    FSTP float ptr [EBX + 0x18]         ; 00420d25
    FSTP float ptr [ESP]                ; 00420d28
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 00420d2b
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0()
    MOV dword ptr [ESP + 0xd4],EAX      ; 00420d30
    FLD float ptr [ESP + 0xd4]          ; 00420d37
    XOR EAX,EAX                         ; 00420d3e
    FSTP float ptr [EBX + 0x14]         ; 00420d40
    ADD ESP,0x4                         ; 00420d43
    MOV ESP,EBP                         ; 00420d46
    POP EBP                             ; 00420d48
    POP EDI                             ; 00420d49
    POP ESI                             ; 00420d4a
    POP EBX                             ; 00420d4b
    RET                                 ; 00420d4c
    XOR EAX,EAX                         ; 00420d4d
        ;   Label: LAB_00420d4d
    MOV ESP,EBP                         ; 00420d4f
    POP EBP                             ; 00420d51
    POP EDI                             ; 00420d52
    POP ESI                             ; 00420d53
    POP EBX                             ; 00420d54
    RET                                 ; 00420d55
    CMP ESI,dword ptr [ESP + 0xc0]      ; 00420d56
        ;   Label: LAB_00420d56
    JZ 0x00420d8a                       ; 00420d5d
        ;   XREF to: 00420d8a (CONDITIONAL_JUMP)  ; LAB_00420d8a
    MOV EAX,ESI                         ; 00420d5f
    FLD float ptr [EAX]                 ; 00420d61
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00420d63
    FSTP float ptr [EAX]                ; 00420d6a
    MOV EAX,ESI                         ; 00420d6c
    FLD float ptr [EAX + 0x4]           ; 00420d6e
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00420d71
    FSTP float ptr [EAX + 0x4]          ; 00420d78
    MOV EAX,ESI                         ; 00420d7b
    FLD float ptr [EAX + 0x8]           ; 00420d7d
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00420d80
    FSTP float ptr [EAX + 0x8]          ; 00420d87
    LEA EAX,[EBX + 0x20]                ; 00420d8a
        ;   Label: LAB_00420d8a
    LEA EDI,[ESP + 0x10]                ; 00420d8d
    LEA ESI,[ESP + 0x4c]                ; 00420d91
    FLD float ptr [EAX + 0x4]           ; 00420d95
    FLD float ptr [EAX + 0x8]           ; 00420d98
    LEA EDX,[EBX + 0x8]                 ; 00420d9b
    FLD float ptr [EAX]                 ; 00420d9e
    LEA EAX,[ESP + 0x10]                ; 00420da0
    FSUB float ptr [EDX]                ; 00420da4
    FXCH ST2                            ; 00420da6
    FSUB float ptr [EDX + 0x4]          ; 00420da8
    FXCH                                ; 00420dab
    FSUB float ptr [EDX + 0x8]          ; 00420dad
    FXCH ST2                            ; 00420db0
    FSTP float ptr [ESP + 0x4c]         ; 00420db2
    FSTP float ptr [ESP + 0x50]         ; 00420db6
    FSTP float ptr [ESP + 0x54]         ; 00420dba
    LEA EDX,[ESP + 0x4]                 ; 00420dbe
    MOVSD ES:EDI,ESI                    ; 00420dc2
    MOVSD ES:EDI,ESI                    ; 00420dc3
    MOVSD ES:EDI,ESI                    ; 00420dc4
    CMP EDX,EAX                         ; 00420dc5
    JZ 0x00420de1                       ; 00420dc7
        ;   XREF to: 00420de1 (CONDITIONAL_JUMP)  ; LAB_00420de1
    MOV EAX,dword ptr [ESP + 0x10]      ; 00420dc9
    MOV dword ptr [ESP + 0x4],EAX       ; 00420dcd
    MOV EAX,dword ptr [ESP + 0x14]      ; 00420dd1
    MOV dword ptr [ESP + 0x8],EAX       ; 00420dd5
    MOV EAX,dword ptr [ESP + 0x18]      ; 00420dd9
    MOV dword ptr [ESP + 0xc],EAX       ; 00420ddd
    FLD float ptr [ESP + 0x8]           ; 00420de1
        ;   Label: LAB_00420de1
    FMUL ST0                            ; 00420de5
    FLD float ptr [ESP + 0x4]           ; 00420de7
    FMUL ST0                            ; 00420deb
    FADDP                               ; 00420ded
    FLD float ptr [ESP + 0xc]           ; 00420def
    FMUL ST0                            ; 00420df3
    FADDP                               ; 00420df5
    FSQRT                               ; 00420df7
    FSTP float ptr [ESP + 0xa0]         ; 00420df9
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00420e00
    FLD float ptr [ESP + 0xa0]          ; 00420e07
    MOV dword ptr [ESP],EAX             ; 00420e0e
    FCOMP float ptr [0x005f3e28]        ; 00420e11 | DAT_005f3e28
    FNSTSW AX                           ; 00420e17
    SAHF                                ; 00420e19
    JNC 0x00420a76                      ; 00420e1a
        ;   XREF to: 00420a76 (CONDITIONAL_JUMP)  ; LAB_00420a76
    MOV EAX,0x1                         ; 00420e20
        ;   Label: LAB_00420e20
    MOV ESP,EBP                         ; 00420e25
    POP EBP                             ; 00420e27
    POP EDI                             ; 00420e28
    POP ESI                             ; 00420e29
    POP EBX                             ; 00420e2a
    RET                                 ; 00420e2b
    FLD float ptr [EBX + 0xc]           ; 00420e2c
        ;   Label: LAB_00420e2c
    MOV ESI,0x3fc90fdb                  ; 00420e2f
    FSUB float ptr [ESP + 0xac]         ; 00420e34
    MOV dword ptr [ESP + 0x58],ESI      ; 00420e3b
    JMP 0x00420bb5                      ; 00420e3f
        ;   XREF to: 00420bb5 (UNCONDITIONAL_JUMP)  ; LAB_00420bb5
    MOV ECX,dword ptr [ESP + 0xbc]      ; 00420e44
        ;   Label: LAB_00420e44
    LEA EAX,[ESP + 0x40]                ; 00420e4b
    CMP EAX,ECX                         ; 00420e4f
    JZ 0x00420e67                       ; 00420e51
        ;   XREF to: 00420e67 (CONDITIONAL_JUMP)  ; LAB_00420e67
    MOV EAX,dword ptr [ESP + 0x40]      ; 00420e53
    MOV dword ptr [ECX],EAX             ; 00420e57
    MOV EAX,dword ptr [ESP + 0x44]      ; 00420e59
    MOV dword ptr [ECX + 0x4],EAX       ; 00420e5d
    MOV EAX,dword ptr [ESP + 0x48]      ; 00420e60
    MOV dword ptr [ECX + 0x8],EAX       ; 00420e64
    FLD float ptr [ESP + 0xc4]          ; 00420e67
        ;   Label: LAB_00420e67
    FCOMP float ptr [EBX + 0xc]         ; 00420e6e
    FNSTSW AX                           ; 00420e71
    SAHF                                ; 00420e73
    JBE 0x00420bb8                      ; 00420e74
        ;   XREF to: 00420bb8 (CONDITIONAL_JUMP)  ; LAB_00420bb8
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00420e7a
    MOV dword ptr [EBX + 0xc],EAX       ; 00420e81
    JMP 0x00420bb8                      ; 00420e84
        ;   XREF to: 00420bb8 (UNCONDITIONAL_JUMP)  ; LAB_00420bb8

