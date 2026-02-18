; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050a8d0(CMansionPuzzleCircle *this_ptr)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; Local Variables:
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
; undefined1       Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined1       Stack[-0x54]:1  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined1       Stack[-0x3c]:1  local_3c
; undefined1       Stack[-0x30]:1  local_30
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_process_FUN_005091d0 at 00509223
;
; Referenced Globals:
;   float FLOAT_006357d5 = 2
;   float FLOAT_006357d9 = 4
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CFireEffect g_CFireEffectInstance
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_fire.cpp_CFireEffect_traceLaser_FUN_004c8230
;   core_fire.cpp_SLaserInfo_ctor_FUN_004c81f0
;   core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050aef0
;   core_setcolid.cpp_CDemonSet_init_FUN_00574180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050a8d0
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a8d0
    PUSH ESI                            ; 0050a8d1
    PUSH EDI                            ; 0050a8d2
    PUSH EBP                            ; 0050a8d3
    MOV EBP,ESP                         ; 0050a8d4
    SUB ESP,0x104                       ; 0050a8d6
    SUB EBP,0x76                        ; 0050a8dc
    MOV EBX,dword ptr [EBP + 0x8a]      ; 0050a8df
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0050a8e5
    LEA EAX,[ESI*0x4 + 0x0]             ; 0050a8eb
    SUB EAX,ESI                         ; 0050a8f2
    SHL EAX,0x3                         ; 0050a8f4
    ADD EAX,ESI                         ; 0050a8f7
    LEA EDX,[EBX + 0x5f0]               ; 0050a8f9
    SHL EAX,0x2                         ; 0050a8ff
    MOV dword ptr [EBP + 0x6e],EDX      ; 0050a902
    LEA EDI,[EDX + EAX*0x1]             ; 0050a905
    XOR EDX,EDX                         ; 0050a908
    MOV ECX,dword ptr [EDI]             ; 0050a90a
    MOV dword ptr [EBP + 0x72],EDX      ; 0050a90c
    TEST ECX,ECX                        ; 0050a90f
    JZ 0x0050ab32                       ; 0050a911
        ;   XREF to: 0050ab32 (CONDITIONAL_JUMP)  ; LAB_0050ab32
    CMP dword ptr [EBP + 0x72],0x0      ; 0050a917
        ;   Label: LAB_0050a917
    JZ 0x0050ab72                       ; 0050a91b
        ;   XREF to: 0050ab72 (CONDITIONAL_JUMP)  ; LAB_0050ab72
    FLD float ptr [EBX + ESI*0x4 + 0x1490] ; 0050a921
    FADD float ptr [EBP + 0x92]         ; 0050a928
    FSTP float ptr [EBX + ESI*0x4 + 0x1490] ; 0050a92e
        ;   Label: LAB_0050a92e
    LEA EDX,[ESI*0x4 + 0x0]             ; 0050a935
    ADD EDX,EBX                         ; 0050a93c
    FLDZ                                ; 0050a93e
    FLD float ptr [EDX + 0x1490]        ; 0050a940
    FSTP double ptr [EBP + 0x62]        ; 0050a946
    FCOMP double ptr [EBP + 0x62]       ; 0050a949
    FNSTSW AX                           ; 0050a94c
    SAHF                                ; 0050a94e
    JNC 0x0050ab84                      ; 0050a94f
        ;   XREF to: 0050ab84 (CONDITIONAL_JUMP)  ; LAB_0050ab84
    FLD1                                ; 0050a955
    FCOMP double ptr [EBP + 0x62]       ; 0050a957
    FNSTSW AX                           ; 0050a95a
    SAHF                                ; 0050a95c
    JNC 0x0050a969                      ; 0050a95d
        ;   XREF to: 0050a969 (CONDITIONAL_JUMP)  ; LAB_0050a969
    MOV dword ptr [EDX + 0x1490],0x3f800000 ; 0050a95f
    LEA EAX,[EBX + 0x5e4]               ; 0050a969
        ;   Label: LAB_0050a969
    PUSH EAX                            ; 0050a96f
    LEA EAX,[EBP + 0x1a]                ; 0050a970
    PUSH EAX                            ; 0050a973
    LEA EAX,[EDI + 0x24]                ; 0050a974
    PUSH EAX                            ; 0050a977
    MOV dword ptr [EBP + 0x6a],EAX      ; 0050a978
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 0050a97b
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    LEA EDX,[EDI + 0xc]                 ; 0050a980
    FLD float ptr [EDX]                 ; 0050a983
    FADD float ptr [EAX]                ; 0050a985
    FSTP float ptr [EBP + 0x3e]         ; 0050a987
    FLD float ptr [EDX + 0x4]           ; 0050a98a
    FADD float ptr [EAX + 0x4]          ; 0050a98d
    ADD ESP,0xc                         ; 0050a990
    FSTP float ptr [EBP + 0x42]         ; 0050a993
    FLD float ptr [EDX + 0x8]           ; 0050a996
    FADD float ptr [EAX + 0x8]          ; 0050a999
    LEA EAX,[EBP + 0x3e]                ; 0050a99c
    PUSH EAX                            ; 0050a99f
    LEA EAX,[EBP + 0x4a]                ; 0050a9a0
    PUSH EAX                            ; 0050a9a3
    PUSH EBX                            ; 0050a9a4
    FSTP float ptr [EBP + 0x46]         ; 0050a9a5
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0050a9a8
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    XOR ECX,ECX                         ; 0050a9ad
    MOV dword ptr [EBP + 0x26],ECX      ; 0050a9af
    FLD float ptr [EBX + 0x5d0]         ; 0050a9b2
    FSUB float ptr [EBX + 0x5e8]        ; 0050a9b8
    FSTP float ptr [EBP + 0x2a]         ; 0050a9be
    FLD float ptr [EBX + 0x150c]        ; 0050a9c1
    FMUL float ptr [0x006357d5]         ; 0050a9c7 | FLOAT_006357d5
    LEA EAX,[EBP + 0x26]                ; 0050a9cd
    ADD ESP,0xc                         ; 0050a9d0
    FLD float ptr [0x006357d9]          ; 0050a9d3 | FLOAT_006357d9
    FLD float ptr [EBP + 0x2a]          ; 0050a9d9
    FMUL ST1                            ; 0050a9dc
    PUSH EAX                            ; 0050a9de
    LEA EAX,[EBP + 0x56]                ; 0050a9df
    FXCH ST2                            ; 0050a9e2
    FADD float ptr [EBX + 0x5ec]        ; 0050a9e4
    PUSH EAX                            ; 0050a9ea
    FADD float ptr [EBX + 0x5d4]        ; 0050a9eb
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0050a9f1
    FCHS                                ; 0050a9f4
    FMULP                               ; 0050a9f6
    PUSH EAX                            ; 0050a9f8
    FXCH                                ; 0050a9f9
    FSTP float ptr [EBP + 0x2a]         ; 0050a9fb
    FSTP float ptr [EBP + 0x2e]         ; 0050a9fe
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 0050aa01
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0050aa06
    LEA EAX,[EBP + 0x56]                ; 0050aa09
    PUSH EAX                            ; 0050aa0c
    LEA EAX,[EBP + 0x32]                ; 0050aa0d
    PUSH EAX                            ; 0050aa10
    PUSH EBX                            ; 0050aa11
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 0050aa12
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0050aa17
    MOV EDX,dword ptr [0x006810c8]      ; 0050aa1a | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 0050aa20 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 0050aa21
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0050aa26
    LEA EAX,[EBP + 0xffffff72]          ; 0050aa29
    PUSH EAX                            ; 0050aa2f
    MOV EDI,0x3da3d70a                  ; 0050aa30
    CALL core_fire.cpp_SLaserInfo_ctor_FUN_004c81f0 ; 0050aa35
        ;   XREF to: 004c81f0 (UNCONDITIONAL_CALL)  ; SLaserInfo * core_fire.cpp_SLaserInfo_ctor_FUN_004c81f0(SLaserInfo * this_ptr)
    MOV ECX,0x2                         ; 0050aa3a
    MOV dword ptr [EBP + 0xffffff76],EDI ; 0050aa3f
    MOV dword ptr [EBP + 0xffffff7a],ECX ; 0050aa45
    MOV EAX,dword ptr [EBX + ESI*0x4 + 0x1400] ; 0050aa4b
    MOV dword ptr [EBP + 0xffffff7e],EAX ; 0050aa52
    MOV EAX,dword ptr [EBX + ESI*0x4 + 0x1430] ; 0050aa58
    MOV dword ptr [EBP + -0x7e],EAX     ; 0050aa5f
    MOV EAX,dword ptr [EBX + ESI*0x4 + 0x1460] ; 0050aa62
    MOV dword ptr [EBP + -0x7a],EAX     ; 0050aa69
    MOV EAX,dword ptr [EBX + ESI*0x4 + 0x1490] ; 0050aa6c
    MOV dword ptr [EBP + 0xffffff72],EAX ; 0050aa73
    XOR EAX,EAX                         ; 0050aa79
    ADD ESP,0x4                         ; 0050aa7b
    MOV dword ptr [EBP + -0x76],EAX     ; 0050aa7e
    MOV dword ptr [EBP + -0x72],EAX     ; 0050aa81
    PUSH EAX                            ; 0050aa84
    MOV EAX,dword ptr [EBP + 0xffffff72] ; 0050aa85
    XOR EDX,EDX                         ; 0050aa8b
    MOV dword ptr [EBP + -0x3a],EAX     ; 0050aa8d
    MOV EAX,dword ptr [EBP + 0xffffff7e] ; 0050aa90
    MOV dword ptr [EBP + -0x36],EDI     ; 0050aa96
    MOV dword ptr [EBP + -0x2e],EAX     ; 0050aa99
    MOV EAX,dword ptr [EBP + -0x7e]     ; 0050aa9c
    MOV dword ptr [EBP + -0x32],ECX     ; 0050aa9f
    MOV dword ptr [EBP + -0x2a],EAX     ; 0050aaa2
    MOV EAX,dword ptr [EBP + -0x7a]     ; 0050aaa5
    MOV dword ptr [EBP + -0x1e],EDX     ; 0050aaa8
    MOV dword ptr [EBP + -0x26],EAX     ; 0050aaab
    MOV EAX,dword ptr [EBP + -0x6e]     ; 0050aaae
    XOR ESI,ESI                         ; 0050aab1
    MOV dword ptr [EBP + -0x1a],EAX     ; 0050aab3
    MOV EAX,dword ptr [EBP + -0x6a]     ; 0050aab6
    MOV dword ptr [EBP + -0x22],ESI     ; 0050aab9
    MOV dword ptr [EBP + -0x16],EAX     ; 0050aabc
    MOV EAX,dword ptr [EBP + -0x66]     ; 0050aabf
    MOV dword ptr [EBP + -0x12],EAX     ; 0050aac2
    MOV EAX,dword ptr [EBP + -0x62]     ; 0050aac5
    MOV dword ptr [EBP + -0xe],EAX      ; 0050aac8
    MOV EAX,dword ptr [EBP + -0x5e]     ; 0050aacb
    MOV dword ptr [EBP + -0xa],EAX      ; 0050aace
    MOV EAX,dword ptr [EBP + -0x5a]     ; 0050aad1
    MOV dword ptr [EBP + -0x6],EAX      ; 0050aad4
    MOV EAX,dword ptr [EBP + -0x56]     ; 0050aad7
    MOV dword ptr [EBP + -0x2],EAX      ; 0050aada
    MOV EAX,dword ptr [EBP + -0x52]     ; 0050aadd
    MOV dword ptr [EBP + 0x2],EAX       ; 0050aae0
    MOV EAX,dword ptr [EBP + -0x4e]     ; 0050aae3
    MOV dword ptr [EBP + 0x6],EAX       ; 0050aae6
    MOV EAX,dword ptr [EBP + -0x4a]     ; 0050aae9
    MOV dword ptr [EBP + 0xa],EAX       ; 0050aaec
    MOV EAX,dword ptr [EBP + -0x46]     ; 0050aaef
    MOV dword ptr [EBP + 0xe],EAX       ; 0050aaf2
    MOV EAX,dword ptr [EBP + -0x42]     ; 0050aaf5
    MOV dword ptr [EBP + 0x12],EAX      ; 0050aaf8
    MOV EAX,dword ptr [EBP + -0x3e]     ; 0050aafb
    MOV dword ptr [EBP + 0x16],EAX      ; 0050aafe
    LEA EAX,[EBP + -0x3a]               ; 0050ab01
    PUSH EAX                            ; 0050ab04
    LEA EAX,[EBP + 0x32]                ; 0050ab05
    PUSH EAX                            ; 0050ab08
    LEA EAX,[EBP + 0x4a]                ; 0050ab09
    PUSH EAX                            ; 0050ab0c
    MOV EAX,[0x0067a3d0]                ; 0050ab0d | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EAX                            ; 0050ab12 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_traceLaser_FUN_004c8230 ; 0050ab13
        ;   XREF to: 004c8230 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_traceLaser_FUN_004c8230(CFireEffect * this_ptr, CVector3f * origin, CVector3f * direction, SLaserInfo * laser_info, ...)
    ADD ESP,0x14                        ; 0050ab18
    MOV EDX,dword ptr [0x006810c8]      ; 0050ab1b | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 0050ab21 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 0050ab22
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0050ab27
    LEA ESP,[EBP + 0x76]                ; 0050ab2a
    POP EBP                             ; 0050ab2d
    POP EDI                             ; 0050ab2e
    POP ESI                             ; 0050ab2f
    POP EBX                             ; 0050ab30
    RET                                 ; 0050ab31
    PUSH ESI                            ; 0050ab32
        ;   Label: LAB_0050ab32
    MOV EAX,0x1                         ; 0050ab33
    PUSH EBX                            ; 0050ab38
    MOV dword ptr [EBP + 0x72],EAX      ; 0050ab39
    CALL core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050aef0 ; 0050ab3c
        ;   XREF to: 0050aef0 (UNCONDITIONAL_CALL)  ; int core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050aef0(CMansionPuzzleCircle * this_ptr)
    MOV EDX,EAX                         ; 0050ab41
    SHL EAX,0x2                         ; 0050ab43
    SUB EAX,EDX                         ; 0050ab46
    SHL EAX,0x3                         ; 0050ab48
    ADD EAX,EDX                         ; 0050ab4b
    MOV EDX,dword ptr [EBP + 0x6e]      ; 0050ab4d
    SHL EAX,0x2                         ; 0050ab50
    ADD EAX,EDX                         ; 0050ab53
    MOV ECX,dword ptr [EAX]             ; 0050ab55
    ADD ESP,0x8                         ; 0050ab57
    TEST ECX,ECX                        ; 0050ab5a
    JZ 0x0050a917                       ; 0050ab5c
        ;   XREF to: 0050a917 (CONDITIONAL_JUMP)  ; LAB_0050a917
    FLD float ptr [EAX + 0x8]           ; 0050ab62
    FLDZ                                ; 0050ab65
    FCOMPP                              ; 0050ab67
    FNSTSW AX                           ; 0050ab69
    SAHF                                ; 0050ab6b
    JNC 0x0050a917                      ; 0050ab6c
        ;   XREF to: 0050a917 (CONDITIONAL_JUMP)  ; LAB_0050a917
    FLD float ptr [EBX + ESI*0x4 + 0x1490] ; 0050ab72
        ;   Label: LAB_0050ab72
    FSUB float ptr [EBP + 0x92]         ; 0050ab79
    JMP 0x0050a92e                      ; 0050ab7f
        ;   XREF to: 0050a92e (UNCONDITIONAL_JUMP)  ; LAB_0050a92e
    MOV dword ptr [EDX + 0x1490],0x0    ; 0050ab84
        ;   Label: LAB_0050ab84
    LEA ESP,[EBP + 0x76]                ; 0050ab8e
    POP EBP                             ; 0050ab91
    POP EDI                             ; 0050ab92
    POP ESI                             ; 0050ab93
    POP EBX                             ; 0050ab94
    RET                                 ; 0050ab95

