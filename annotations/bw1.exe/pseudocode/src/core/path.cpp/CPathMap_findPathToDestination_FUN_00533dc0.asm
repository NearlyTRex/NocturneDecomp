; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_path_cpp_CPathMap_findPathToDestination_FUN_00533dc0(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   dest_position
; CVector3f *      Stack[0xc]:4   out_euler_angles
; int              Stack[0x10]:4   direction_hint
; Local Variables:
; undefined4       Stack[-0x1e4]:4  local_1e4
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined4       Stack[-0x1dc]:4  local_1dc
; undefined4       Stack[-0x1d8]:4  local_1d8
; undefined4       Stack[-0x1d4]:4  local_1d4
; undefined4       Stack[-0x1d0]:4  local_1d0
; undefined4       Stack[-0x1cc]:4  local_1cc
; undefined4       Stack[-0x1c8]:4  local_1c8
; undefined4       Stack[-0x1c4]:4  local_1c4
; undefined        Stack[-0x1c0]:1  local_1c0
; undefined4       Stack[-0x1b4]:4  local_1b4
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x1ac]:4  local_1ac
; undefined        Stack[-0x1a8]:1  local_1a8
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined        Stack[-0x190]:1  local_190
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
; undefined        Stack[-0x154]:1  local_154
; undefined        Stack[-0x148]:1  local_148
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x11c]:4  local_11c
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined        Stack[-0x100]:1  local_100
; undefined        Stack[-0xf4]:1  local_f4
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined        Stack[-0xdc]:1  local_dc
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined        Stack[-0xb8]:1  local_b8
; undefined        Stack[-0xac]:1  local_ac
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0 at 005349de
;
; Referenced Globals:
;   void* switchdataD_00533d94 = 00533e29
;   TerminatedCString s_core_path_cpp_005ec9fc
;   TerminatedCString s_Out_of_bounds1_005eca0d
;   TerminatedCString s_core_path_cpp_005eca1d
;   TerminatedCString s_Out_of_bounds2_005eca2e
;   TerminatedCString s_core_path_cpp_005eca3e
;   TerminatedCString s_Out_of_bounds3_005eca4f
;   TerminatedCString s_core_path_cpp_005eca5f
;   TerminatedCString s_Out_of_bounds4_005eca70
;   undefined4 DAT_00622788
;   undefined4 DAT_006227ac
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01e6c16c
;   undefined4 DAT_01e6c170
;   ... and 7 more
;
; Called Functions:
;   core_dtrace.cpp_FUN_0048ef40
;   core_main.c_FUN_005030e0
;   core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_00533930
;   core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00533640
;   core_path.cpp_CPathMap_isLineWalkable_FUN_005336e0
;   core_path.cpp_CPathMap_searchGrid_FUN_00535490
;   core_path.cpp_FUN_00533140
;   core_vecdir.cpp_FUN_005a7520
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00533dc0
        ;   Label: core_path.cpp_CPathMap_findPathToDestination_FUN_00533dc0
    PUSH ESI                            ; 00533dc1
    PUSH EDI                            ; 00533dc2
    PUSH EBP                            ; 00533dc3
    SUB ESP,0x1d4                       ; 00533dc4
    MOV EBP,dword ptr [ESP + 0x1e8]     ; 00533dca
    MOV EBX,dword ptr [ESP + 0x1f4]     ; 00533dd1
    MOV EDX,dword ptr [ESP + 0x1ec]     ; 00533dd8
    PUSH EDX                            ; 00533ddf
    PUSH 0x1fe5c1c                      ; 00533de0 | g_CDemonRaytraceInstance
    LEA ESI,[ESP + 0xec]                ; 00533de5
    CALL core_dtrace.cpp_FUN_0048ef40   ; 00533dec
        ;   XREF to: 0048ef40 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_0048ef40()
    LEA ESI,[ESP + 0xec]                ; 00533df1
    ADD ESP,0x8                         ; 00533df8
    LEA EDI,[EBP + 0x18]                ; 00533dfb
    MOV EAX,EBX                         ; 00533dfe
    MOV EDX,EBX                         ; 00533e00
    MOVSD ES:EDI,ESI                    ; 00533e02
    MOVSD ES:EDI,ESI                    ; 00533e03
    MOVSD ES:EDI,ESI                    ; 00533e04
    SAR EDX,0x1f                        ; 00533e05
    MOV ESI,0x9                         ; 00533e08
    IDIV ESI                            ; 00533e0d
    XOR ECX,ECX                         ; 00533e0f
    MOV dword ptr [ESP + 0x30],ECX      ; 00533e11
    MOV dword ptr [ESP + 0x34],ECX      ; 00533e15
    MOV dword ptr [ESP + 0x38],ECX      ; 00533e19
    CMP EDX,0x8                         ; 00533e1d
    JA 0x00533e29                       ; 00533e20
        ;   XREF to: 00533e29 (CONDITIONAL_JUMP)  ; caseD_0
    JMP dword ptr [EDX*0x4 + 0x533d94]  ; 00533e22 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0xc]       ; 00533e29
        ;   Label: caseD_0
    MOV EDX,dword ptr [EBP + 0x18]      ; 00533e2c
    SUB EAX,EDX                         ; 00533e2f
    MOV dword ptr [ESP + 0xc0],EAX      ; 00533e31
    CDQ                                 ; 00533e38
    XOR EAX,EDX                         ; 00533e39
    SUB EAX,EDX                         ; 00533e3b
    CMP EAX,0x32                        ; 00533e3d
    JL 0x00533f75                       ; 00533e40
        ;   XREF to: 00533f75 (CONDITIONAL_JUMP)  ; LAB_00533f75
    FLD float ptr [EBP]                 ; 00533e46
    FLD float ptr [EBP + 0x4]           ; 00533e49
    FLD float ptr [EBP + 0x8]           ; 00533e4c
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 00533e4f
    LEA EDI,[ESP + 0x108]               ; 00533e56
    LEA ESI,[ESP + 0xb4]                ; 00533e5d
    FXCH ST2                            ; 00533e64
    FSUB float ptr [EAX]                ; 00533e66
    FXCH                                ; 00533e68
    FSUB float ptr [EAX + 0x4]          ; 00533e6a
    FXCH ST2                            ; 00533e6d
    FSUB float ptr [EAX + 0x8]          ; 00533e6f
    FXCH                                ; 00533e72
    FSTP float ptr [ESP + 0xb4]         ; 00533e74
    FXCH                                ; 00533e7b
    FSTP float ptr [ESP + 0xb8]         ; 00533e7d
    FSTP float ptr [ESP + 0xbc]         ; 00533e84
    LEA EAX,[ESP + 0x108]               ; 00533e8b
    MOVSD ES:EDI,ESI                    ; 00533e92
    MOVSD ES:EDI,ESI                    ; 00533e93
    MOVSD ES:EDI,ESI                    ; 00533e94
    PUSH EAX                            ; 00533e95
    LEA ESI,[ESP + 0x40]                ; 00533e96
    LEA EDI,[ESP + 0x124]               ; 00533e9a
    CALL core_vecdir.cpp_FUN_005a7520   ; 00533ea1
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005a7520()
    LEA ESI,[ESP + 0x40]                ; 00533ea6
    ADD ESP,0x4                         ; 00533eaa
    LEA EAX,[ESP + 0x120]               ; 00533ead
    MOV ECX,dword ptr [ESP + 0x1f0]     ; 00533eb4
    MOVSD ES:EDI,ESI                    ; 00533ebb
    MOVSD ES:EDI,ESI                    ; 00533ebc
    MOVSD ES:EDI,ESI                    ; 00533ebd
    CMP EAX,ECX                         ; 00533ebe
    JZ 0x00533edf                       ; 00533ec0
        ;   XREF to: 00533edf (CONDITIONAL_JUMP)  ; LAB_00533edf
    MOV EAX,dword ptr [ESP + 0x120]     ; 00533ec2
    MOV dword ptr [ECX],EAX             ; 00533ec9
    MOV EAX,dword ptr [ESP + 0x124]     ; 00533ecb
    MOV dword ptr [ECX + 0x4],EAX       ; 00533ed2
    MOV EAX,dword ptr [ESP + 0x128]     ; 00533ed5
    MOV dword ptr [ECX + 0x8],EAX       ; 00533edc
    MOV EAX,0x2                         ; 00533edf
        ;   Label: LAB_00533edf
    ADD ESP,0x1d4                       ; 00533ee4
    POP EBP                             ; 00533eea
    POP EDI                             ; 00533eeb
    POP ESI                             ; 00533eec
    POP EBX                             ; 00533eed
    RET                                 ; 00533eee
    MOV dword ptr [ESP + 0x30],0x4      ; 00533eef
        ;   Label: caseD_1
    JMP 0x00533e29                      ; 00533ef7
        ;   XREF to: 00533e29 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV dword ptr [ESP + 0x30],0xfffffffc ; 00533efc
        ;   Label: caseD_2
    JMP 0x00533e29                      ; 00533f04
        ;   XREF to: 00533e29 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV dword ptr [ESP + 0x38],0x4      ; 00533f09
        ;   Label: caseD_3
    JMP 0x00533e29                      ; 00533f11
        ;   XREF to: 00533e29 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV dword ptr [ESP + 0x38],0xfffffffc ; 00533f16
        ;   Label: caseD_4
    JMP 0x00533e29                      ; 00533f1e
        ;   XREF to: 00533e29 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EAX,0x4                         ; 00533f23
        ;   Label: caseD_5
    MOV dword ptr [ESP + 0x38],EAX      ; 00533f28
    MOV dword ptr [ESP + 0x30],EAX      ; 00533f2c
    JMP 0x00533e29                      ; 00533f30
        ;   XREF to: 00533e29 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EDI,0x4                         ; 00533f35
        ;   Label: caseD_6
    MOV ESI,0xfffffffc                  ; 00533f3a
    MOV dword ptr [ESP + 0x38],EDI      ; 00533f3f
    MOV dword ptr [ESP + 0x30],ESI      ; 00533f43
    JMP 0x00533e29                      ; 00533f47
        ;   XREF to: 00533e29 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV ECX,0xfffffffc                  ; 00533f4c
        ;   Label: caseD_7
    MOV dword ptr [ESP + 0x38],ECX      ; 00533f51
    MOV dword ptr [ESP + 0x30],ECX      ; 00533f55
    JMP 0x00533e29                      ; 00533f59
        ;   XREF to: 00533e29 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EDX,0xfffffffc                  ; 00533f5e
        ;   Label: caseD_8
    MOV EAX,0x4                         ; 00533f63
    MOV dword ptr [ESP + 0x38],EDX      ; 00533f68
    MOV dword ptr [ESP + 0x30],EAX      ; 00533f6c
    JMP 0x00533e29                      ; 00533f70
        ;   XREF to: 00533e29 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EAX,dword ptr [EBP + 0x14]      ; 00533f75
        ;   Label: LAB_00533f75
    MOV ECX,dword ptr [EBP + 0x20]      ; 00533f78
    SUB EAX,ECX                         ; 00533f7b
    MOV dword ptr [ESP + 0xc8],EAX      ; 00533f7d
    CDQ                                 ; 00533f84
    XOR EAX,EDX                         ; 00533f85
    SUB EAX,EDX                         ; 00533f87
    CMP EAX,0x32                        ; 00533f89
    JL 0x00534039                       ; 00533f8c
        ;   XREF to: 00534039 (CONDITIONAL_JUMP)  ; LAB_00534039
    FLD float ptr [EBP]                 ; 00533f92
    FLD float ptr [EBP + 0x4]           ; 00533f95
    FLD float ptr [EBP + 0x8]           ; 00533f98
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 00533f9b
    LEA EDI,[ESP + 0x15c]               ; 00533fa2
    LEA ESI,[ESP + 0xc]                 ; 00533fa9
    FXCH ST2                            ; 00533fad
    FSUB float ptr [EAX]                ; 00533faf
    FXCH                                ; 00533fb1
    FSUB float ptr [EAX + 0x4]          ; 00533fb3
    FXCH ST2                            ; 00533fb6
    FSUB float ptr [EAX + 0x8]          ; 00533fb8
    FXCH                                ; 00533fbb
    FSTP float ptr [ESP + 0xc]          ; 00533fbd
    FXCH                                ; 00533fc1
    FSTP float ptr [ESP + 0x10]         ; 00533fc3
    FSTP float ptr [ESP + 0x14]         ; 00533fc7
    LEA EAX,[ESP + 0x15c]               ; 00533fcb
    MOVSD ES:EDI,ESI                    ; 00533fd2
    MOVSD ES:EDI,ESI                    ; 00533fd3
    MOVSD ES:EDI,ESI                    ; 00533fd4
    PUSH EAX                            ; 00533fd5
    LEA ESI,[ESP + 0x154]               ; 00533fd6
    LEA EDI,[ESP + 0x190]               ; 00533fdd
    CALL core_vecdir.cpp_FUN_005a7520   ; 00533fe4
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005a7520()
    LEA ESI,[ESP + 0x154]               ; 00533fe9
    ADD ESP,0x4                         ; 00533ff0
    LEA EAX,[ESP + 0x18c]               ; 00533ff3
    MOV EDX,dword ptr [ESP + 0x1f0]     ; 00533ffa
    MOVSD ES:EDI,ESI                    ; 00534001
    MOVSD ES:EDI,ESI                    ; 00534002
    MOVSD ES:EDI,ESI                    ; 00534003
    CMP EAX,EDX                         ; 00534004
    JZ 0x00533edf                       ; 00534006
        ;   XREF to: 00533edf (CONDITIONAL_JUMP)  ; LAB_00533edf
    MOV EAX,dword ptr [ESP + 0x18c]     ; 0053400c
    MOV dword ptr [EDX],EAX             ; 00534013
    MOV EAX,dword ptr [ESP + 0x190]     ; 00534015
    MOV dword ptr [EDX + 0x4],EAX       ; 0053401c
    MOV EAX,dword ptr [ESP + 0x194]     ; 0053401f
    MOV dword ptr [EDX + 0x8],EAX       ; 00534026
    MOV EAX,0x2                         ; 00534029
    ADD ESP,0x1d4                       ; 0053402e
    POP EBP                             ; 00534034
    POP EDI                             ; 00534035
    POP ESI                             ; 00534036
    POP EBX                             ; 00534037
    RET                                 ; 00534038
    MOV EBX,0x32                        ; 00534039
        ;   Label: LAB_00534039
    MOV EAX,dword ptr [EBP + 0x18]      ; 0053403e
    MOV EDI,dword ptr [EBP + 0x24]      ; 00534041
    MOV EDX,dword ptr [EBP + 0x2c]      ; 00534044
    SUB EAX,EDI                         ; 00534047
    MOV dword ptr [0x01e6c178],EBX      ; 00534049 | DAT_01e6c178
    MOV [0x01e6c16c],EAX                ; 0053404f | DAT_01e6c16c
    MOV EAX,dword ptr [EBP + 0x20]      ; 00534054
    MOV dword ptr [0x01e6c174],EBX      ; 00534057 | DAT_01e6c174
    SUB EAX,EDX                         ; 0053405d
    MOV ECX,dword ptr [0x01e6c16c]      ; 0053405f | DAT_01e6c16c
    MOV [0x01e6c170],EAX                ; 00534065 | DAT_01e6c170
    TEST ECX,ECX                        ; 0053406a
    JL 0x00534077                       ; 0053406c
        ;   XREF to: 00534077 (CONDITIONAL_JUMP)  ; LAB_00534077
    CMP ECX,0x64                        ; 0053406e
    JL 0x00534122                       ; 00534071
        ;   XREF to: 00534122 (CONDITIONAL_JUMP)  ; LAB_00534122
    FLD float ptr [EBP]                 ; 00534077
        ;   Label: LAB_00534077
    FLD float ptr [EBP + 0x4]           ; 0053407a
    FLD float ptr [EBP + 0x8]           ; 0053407d
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 00534080
    LEA EDI,[ESP + 0x9c]                ; 00534087
    LEA ESI,[ESP + 0x78]                ; 0053408e
    FXCH ST2                            ; 00534092
    FSUB float ptr [EAX]                ; 00534094
    FXCH                                ; 00534096
    FSUB float ptr [EAX + 0x4]          ; 00534098
    FXCH ST2                            ; 0053409b
    FSUB float ptr [EAX + 0x8]          ; 0053409d
    FXCH                                ; 005340a0
    FSTP float ptr [ESP + 0x78]         ; 005340a2
    FXCH                                ; 005340a6
    FSTP float ptr [ESP + 0x7c]         ; 005340a8
    FSTP float ptr [ESP + 0x80]         ; 005340ac
    LEA EAX,[ESP + 0x9c]                ; 005340b3
    MOVSD ES:EDI,ESI                    ; 005340ba
    MOVSD ES:EDI,ESI                    ; 005340bb
    MOVSD ES:EDI,ESI                    ; 005340bc
    PUSH EAX                            ; 005340bd
    LEA ESI,[ESP + 0x19c]               ; 005340be
    LEA EDI,[ESP + 0x148]               ; 005340c5
    CALL core_vecdir.cpp_FUN_005a7520   ; 005340cc
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005a7520()
    LEA ESI,[ESP + 0x19c]               ; 005340d1
    ADD ESP,0x4                         ; 005340d8
    LEA EAX,[ESP + 0x144]               ; 005340db
    MOV EBP,dword ptr [ESP + 0x1f0]     ; 005340e2
    MOVSD ES:EDI,ESI                    ; 005340e9
    MOVSD ES:EDI,ESI                    ; 005340ea
    MOVSD ES:EDI,ESI                    ; 005340eb
    CMP EAX,EBP                         ; 005340ec
    JZ 0x00533edf                       ; 005340ee
        ;   XREF to: 00533edf (CONDITIONAL_JUMP)  ; LAB_00533edf
    MOV EAX,dword ptr [ESP + 0x144]     ; 005340f4
    MOV dword ptr [EBP],EAX             ; 005340fb
    MOV EAX,dword ptr [ESP + 0x148]     ; 005340fe
    MOV dword ptr [EBP + 0x4],EAX       ; 00534105
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00534108
    MOV dword ptr [EBP + 0x8],EAX       ; 0053410f
    MOV EAX,0x2                         ; 00534112
    ADD ESP,0x1d4                       ; 00534117
    POP EBP                             ; 0053411d
    POP EDI                             ; 0053411e
    POP ESI                             ; 0053411f
    POP EBX                             ; 00534120
    RET                                 ; 00534121
    TEST EAX,EAX                        ; 00534122
        ;   Label: LAB_00534122
    JL 0x00534077                       ; 00534124
        ;   XREF to: 00534077 (CONDITIONAL_JUMP)  ; LAB_00534077
    CMP EAX,0x64                        ; 0053412a
    JGE 0x00534077                      ; 0053412d
        ;   XREF to: 00534077 (CONDITIONAL_JUMP)  ; LAB_00534077
    CMP ECX,EBX                         ; 00534133
    JNZ 0x0053413f                      ; 00534135
        ;   XREF to: 0053413f (CONDITIONAL_JUMP)  ; LAB_0053413f
    CMP EAX,EBX                         ; 00534137
    JZ 0x0053435f                       ; 00534139
        ;   XREF to: 0053435f (CONDITIONAL_JUMP)  ; LAB_0053435f
    FLD float ptr [EBP]                 ; 0053413f
        ;   Label: LAB_0053413f
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 00534142
    CALL crt_math.c_round_FUN_005c03a0  ; 00534149
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x1d0]       ; 0053414e
    FLD float ptr [EAX]                 ; 00534155
    CALL crt_math.c_round_FUN_005c03a0  ; 00534157
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 0053415c
    FISTP dword ptr [ESP + 0x1d0]       ; 00534163
    SUB EAX,dword ptr [ESP + 0x1d0]     ; 0053416a
    CDQ                                 ; 00534171
    XOR EAX,EDX                         ; 00534172
    SUB EAX,EDX                         ; 00534174
    FLD float ptr [EBP + 0x8]           ; 00534176
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 00534179
    CALL crt_math.c_round_FUN_005c03a0  ; 00534180
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x1d0]       ; 00534185
    FLD float ptr [EAX + 0x8]           ; 0053418c
    CALL crt_math.c_round_FUN_005c03a0  ; 0053418f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 00534194
    FISTP dword ptr [ESP + 0x1d0]       ; 0053419b
    SUB EAX,dword ptr [ESP + 0x1d0]     ; 005341a2
    CDQ                                 ; 005341a9
    XOR EAX,EDX                         ; 005341aa
    SUB EAX,EDX                         ; 005341ac
    MOV ESI,dword ptr [EBP + 0x1c]      ; 005341ae
    PUSH ESI                            ; 005341b1
    MOV EDI,dword ptr [0x01e6c16c]      ; 005341b2 | DAT_01e6c16c
    PUSH EDI                            ; 005341b8
    MOV EAX,[0x01e6c170]                ; 005341b9 | DAT_01e6c170
    PUSH EAX                            ; 005341be
    PUSH EBP                            ; 005341bf
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00533640 ; 005341c0
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00533640(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 005341c5
    MOV EDX,dword ptr [EBP + 0x10]      ; 005341c8
    PUSH EDX                            ; 005341cb
    MOV ECX,dword ptr [0x01e6c174]      ; 005341cc | DAT_01e6c174
    PUSH ECX                            ; 005341d2
    MOV ESI,dword ptr [0x01e6c178]      ; 005341d3 | DAT_01e6c178
    PUSH ESI                            ; 005341d9
    PUSH EBP                            ; 005341da
    MOV EBX,EAX                         ; 005341db
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00533640 ; 005341dd
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00533640(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 005341e2
    PUSH EAX                            ; 005341e5
    MOV EDI,dword ptr [0x01e6c178]      ; 005341e6 | DAT_01e6c178
    PUSH EDI                            ; 005341ec
    MOV EAX,[0x01e6c174]                ; 005341ed | DAT_01e6c174
    PUSH EAX                            ; 005341f2
    PUSH EBX                            ; 005341f3
    MOV EDX,dword ptr [0x01e6c170]      ; 005341f4 | DAT_01e6c170
    PUSH EDX                            ; 005341fa
    MOV ECX,dword ptr [0x01e6c16c]      ; 005341fb | DAT_01e6c16c
    PUSH ECX                            ; 00534201
    PUSH EBP                            ; 00534202
    CALL core_path.cpp_CPathMap_isLineWalkable_FUN_005336e0 ; 00534203
        ;   XREF to: 005336e0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_isLineWalkable_FUN_005336e0(CPathMap * this_ptr, int start_x, int start_z, int start_height, ...)
    ADD ESP,0x1c                        ; 00534208
    TEST EAX,EAX                        ; 0053420b
    JZ 0x005343f6                       ; 0053420d
        ;   XREF to: 005343f6 (CONDITIONAL_JUMP)  ; LAB_005343f6
    LEA EDI,[ESP + 0x174]               ; 00534213
    MOV ESI,0x1fe5c50                   ; 0053421a
    MOVSD ES:EDI,ESI                    ; 0053421f | g_CDemonRaytraceInstance.field52_0x34
    MOVSD ES:EDI,ESI                    ; 00534220 | g_CDemonRaytraceInstance.field56_0x38
    MOVSD ES:EDI,ESI                    ; 00534221 | g_CDemonRaytraceInstance.field60_0x3c
    LEA EDI,[ESP + 0x114]               ; 00534222
    LEA ESI,[ESP + 0x174]               ; 00534229
    LEA EAX,[ESP + 0xa8]                ; 00534230
    MOVSD ES:EDI,ESI                    ; 00534237
    MOVSD ES:EDI,ESI                    ; 00534238
    MOVSD ES:EDI,ESI                    ; 00534239
    CMP EAX,EBP                         ; 0053423a
    JZ 0x0053425c                       ; 0053423c
        ;   XREF to: 0053425c (CONDITIONAL_JUMP)  ; LAB_0053425c
    MOV EAX,dword ptr [EBP]             ; 0053423e
    MOV dword ptr [ESP + 0xa8],EAX      ; 00534241
    MOV EAX,dword ptr [EBP + 0x4]       ; 00534248
    MOV dword ptr [ESP + 0xac],EAX      ; 0053424b
    MOV EAX,dword ptr [EBP + 0x8]       ; 00534252
    MOV dword ptr [ESP + 0xb0],EAX      ; 00534255
    MOV EAX,dword ptr [ESP + 0x30]      ; 0053425c
        ;   Label: LAB_0053425c
    MOV dword ptr [ESP + 0x1d0],EAX     ; 00534260
    FILD dword ptr [ESP + 0x1d0]        ; 00534267
    MOV EAX,dword ptr [ESP + 0x38]      ; 0053426e
    FMUL float ptr [ESP + 0x114]        ; 00534272
    MOV dword ptr [ESP + 0x1d0],EAX     ; 00534279
    FILD dword ptr [ESP + 0x1d0]        ; 00534280
    FMUL float ptr [ESP + 0x11c]        ; 00534287
    LEA EDI,[ESP + 0xcc]                ; 0053428e
    LEA ESI,[ESP + 0xd8]                ; 00534295
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 0053429c
    FXCH                                ; 005342a3
    FADD float ptr [ESP + 0xa8]         ; 005342a5
    FXCH                                ; 005342ac
    FADD float ptr [ESP + 0xb0]         ; 005342ae
    FXCH                                ; 005342b5
    FSTP float ptr [ESP + 0xa8]         ; 005342b7
    FSTP float ptr [ESP + 0xb0]         ; 005342be
    FLD float ptr [EBP]                 ; 005342c5
    FLD float ptr [EBP + 0x4]           ; 005342c8
    FLD float ptr [EBP + 0x8]           ; 005342cb
    FXCH ST2                            ; 005342ce
    FSUB float ptr [EAX]                ; 005342d0
    FXCH                                ; 005342d2
    FSUB float ptr [EAX + 0x4]          ; 005342d4
    FXCH ST2                            ; 005342d7
    FSUB float ptr [EAX + 0x8]          ; 005342d9
    FXCH                                ; 005342dc
    FSTP float ptr [ESP + 0xd8]         ; 005342de
    FXCH                                ; 005342e5
    FSTP float ptr [ESP + 0xdc]         ; 005342e7
    FSTP float ptr [ESP + 0xe0]         ; 005342ee
    LEA EAX,[ESP + 0xcc]                ; 005342f5
    MOVSD ES:EDI,ESI                    ; 005342fc
    MOVSD ES:EDI,ESI                    ; 005342fd
    MOVSD ES:EDI,ESI                    ; 005342fe
    PUSH EAX                            ; 005342ff
    LEA ESI,[ESP + 0x13c]               ; 00534300
    LEA EDI,[ESP + 0x100]               ; 00534307
    CALL core_vecdir.cpp_FUN_005a7520   ; 0053430e
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005a7520()
    LEA ESI,[ESP + 0x13c]               ; 00534313
    ADD ESP,0x4                         ; 0053431a
    MOVSD ES:EDI,ESI                    ; 0053431d
    MOVSD ES:EDI,ESI                    ; 0053431e
    MOVSD ES:EDI,ESI                    ; 0053431f
    LEA EAX,[ESP + 0xfc]                ; 00534320
    MOV ESI,dword ptr [ESP + 0x1f0]     ; 00534327
    CMP EAX,ESI                         ; 0053432e
    JZ 0x0053434f                       ; 00534330
        ;   XREF to: 0053434f (CONDITIONAL_JUMP)  ; LAB_0053434f
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00534332
    MOV dword ptr [ESI],EAX             ; 00534339
    MOV EAX,dword ptr [ESP + 0x100]     ; 0053433b
    MOV dword ptr [ESI + 0x4],EAX       ; 00534342
    MOV EAX,dword ptr [ESP + 0x104]     ; 00534345
    MOV dword ptr [ESI + 0x8],EAX       ; 0053434c
    MOV EAX,0x1                         ; 0053434f
        ;   Label: LAB_0053434f
    ADD ESP,0x1d4                       ; 00534354
    POP EBP                             ; 0053435a
    POP EDI                             ; 0053435b
    POP ESI                             ; 0053435c
    POP EBX                             ; 0053435d
    RET                                 ; 0053435e
    FLD float ptr [EBP]                 ; 0053435f
        ;   Label: LAB_0053435f
    FLD float ptr [EBP + 0x4]           ; 00534362
    FLD float ptr [EBP + 0x8]           ; 00534365
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 00534368
    LEA EDI,[ESP + 0x1a4]               ; 0053436f
    LEA ESI,[ESP + 0x1b0]               ; 00534376
    FXCH ST2                            ; 0053437d
    FSUB float ptr [EAX]                ; 0053437f
    FXCH                                ; 00534381
    FSUB float ptr [EAX + 0x4]          ; 00534383
    FXCH ST2                            ; 00534386
    FSUB float ptr [EAX + 0x8]          ; 00534388
    FXCH                                ; 0053438b
    FSTP float ptr [ESP + 0x1b0]        ; 0053438d
    FXCH                                ; 00534394
    FSTP float ptr [ESP + 0x1b4]        ; 00534396
    FSTP float ptr [ESP + 0x1b8]        ; 0053439d
    LEA EAX,[ESP + 0x1a4]               ; 005343a4
    MOVSD ES:EDI,ESI                    ; 005343ab
    MOVSD ES:EDI,ESI                    ; 005343ac
    MOVSD ES:EDI,ESI                    ; 005343ad
    PUSH EAX                            ; 005343ae
    LEA ESI,[ESP + 0x28]                ; 005343af
    LEA EDI,[ESP + 0x4]                 ; 005343b3
    CALL core_vecdir.cpp_FUN_005a7520   ; 005343b7
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005a7520()
    LEA ESI,[ESP + 0x28]                ; 005343bc
    ADD ESP,0x4                         ; 005343c0
    MOVSD ES:EDI,ESI                    ; 005343c3
    MOVSD ES:EDI,ESI                    ; 005343c4
    MOVSD ES:EDI,ESI                    ; 005343c5
    MOV EAX,ESP                         ; 005343c6
    MOV EDI,dword ptr [ESP + 0x1f0]     ; 005343c8
    CMP EAX,EDI                         ; 005343cf
    JZ 0x005343e6                       ; 005343d1
        ;   XREF to: 005343e6 (CONDITIONAL_JUMP)  ; LAB_005343e6
    MOV EAX,dword ptr [ESP]             ; 005343d3
    MOV dword ptr [EDI],EAX             ; 005343d6
    MOV EAX,dword ptr [ESP + 0x4]       ; 005343d8
    MOV dword ptr [EDI + 0x4],EAX       ; 005343dc
    MOV EAX,dword ptr [ESP + 0x8]       ; 005343df
    MOV dword ptr [EDI + 0x8],EAX       ; 005343e3
    MOV EAX,0x1                         ; 005343e6
        ;   Label: LAB_005343e6
    ADD ESP,0x1d4                       ; 005343eb
    POP EBP                             ; 005343f1
    POP EDI                             ; 005343f2
    POP ESI                             ; 005343f3
    POP EBX                             ; 005343f4
    RET                                 ; 005343f5
    MOV EBX,dword ptr [0x01e6c170]      ; 005343f6 | DAT_01e6c170
        ;   Label: LAB_005343f6
    PUSH EBX                            ; 005343fc
    MOV ESI,dword ptr [0x01e6c16c]      ; 005343fd | DAT_01e6c16c
    PUSH ESI                            ; 00534403
    MOV EDI,dword ptr [0x01e6c178]      ; 00534404 | DAT_01e6c178
    PUSH EDI                            ; 0053440a
    MOV EAX,[0x01e6c174]                ; 0053440b | DAT_01e6c174
    PUSH EAX                            ; 00534410
    PUSH EBP                            ; 00534411
    CALL core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_00533930 ; 00534412
        ;   XREF to: 00533930 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_00533930(CPathMap * this_ptr, int start_x, int start_z, int end_x, ...)
    ADD ESP,0x14                        ; 00534417
    TEST EAX,EAX                        ; 0053441a
    JZ 0x005344f7                       ; 0053441c
        ;   XREF to: 005344f7 (CONDITIONAL_JUMP)  ; LAB_005344f7
    CMP EAX,0x1                         ; 00534422
    JNZ 0x005344b6                      ; 00534425
        ;   XREF to: 005344b6 (CONDITIONAL_JUMP)  ; LAB_005344b6
    MOV EDI,dword ptr [0x01e6c16c]      ; 0053442b | DAT_01e6c16c
    MOV EAX,[0x01e6c174]                ; 00534431 | DAT_01e6c174
    CMP EAX,EDI                         ; 00534436
    JLE 0x00534491                      ; 00534438
        ;   XREF to: 00534491 (CONDITIONAL_JUMP)  ; LAB_00534491
    MOV EAX,0x3                         ; 0053443a
        ;   Label: LAB_0053443a
    MOV EBX,dword ptr [ESP + 0x1ec]     ; 0053443f
        ;   Label: LAB_0053443f
    PUSH EBX                            ; 00534446
    PUSH -0x1                           ; 00534447
    PUSH -0x1                           ; 00534449
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 0053444b
    PUSH EAX                            ; 00534452
    MOV dword ptr [EDX],0x0             ; 00534453
    PUSH EBP                            ; 00534459
    MOV dword ptr [EDX + 0x8],0x0       ; 0053445a
    CALL core_path.cpp_FUN_00533140     ; 00534461
        ;   XREF to: 00533140 (UNCONDITIONAL_CALL)  ; undefined core_path.cpp_FUN_00533140()
    MOV dword ptr [ESP + 0x1e4],EAX     ; 00534466
    FLD float ptr [ESP + 0x1e4]         ; 0053446d
    ADD ESP,0x14                        ; 00534474
    MOV EAX,dword ptr [ESP + 0x1f0]     ; 00534477
    FSTP float ptr [EAX + 0x4]          ; 0053447e
    MOV EAX,0x1                         ; 00534481
    ADD ESP,0x1d4                       ; 00534486
    POP EBP                             ; 0053448c
    POP EDI                             ; 0053448d
    POP ESI                             ; 0053448e
    POP EBX                             ; 0053448f
    RET                                 ; 00534490
    JGE 0x0053449a                      ; 00534491
        ;   XREF to: 0053449a (CONDITIONAL_JUMP)  ; LAB_0053449a
        ;   Label: LAB_00534491
    MOV EAX,0x4                         ; 00534493
    JMP 0x0053443f                      ; 00534498
        ;   XREF to: 0053443f (UNCONDITIONAL_JUMP)  ; LAB_0053443f
    MOV ECX,dword ptr [0x01e6c170]      ; 0053449a | DAT_01e6c170
        ;   Label: LAB_0053449a
    CMP ECX,dword ptr [0x01e6c178]      ; 005344a0 | DAT_01e6c178
    JGE 0x005344af                      ; 005344a6
        ;   XREF to: 005344af (CONDITIONAL_JUMP)  ; LAB_005344af
    MOV EAX,0x1                         ; 005344a8
    JMP 0x0053443f                      ; 005344ad
        ;   XREF to: 0053443f (UNCONDITIONAL_JUMP)  ; LAB_0053443f
    MOV EAX,0x2                         ; 005344af
        ;   Label: LAB_005344af
    JMP 0x0053443f                      ; 005344b4
        ;   XREF to: 0053443f (UNCONDITIONAL_JUMP)  ; LAB_0053443f
    MOV ECX,dword ptr [0x01e6c170]      ; 005344b6 | DAT_01e6c170
        ;   Label: LAB_005344b6
    MOV EAX,[0x01e6c178]                ; 005344bc | DAT_01e6c178
    CMP EAX,ECX                         ; 005344c1
    JLE 0x005344cf                      ; 005344c3
        ;   XREF to: 005344cf (CONDITIONAL_JUMP)  ; LAB_005344cf
    MOV EAX,0x1                         ; 005344c5
    JMP 0x0053443f                      ; 005344ca
        ;   XREF to: 0053443f (UNCONDITIONAL_JUMP)  ; LAB_0053443f
    JGE 0x005344db                      ; 005344cf
        ;   XREF to: 005344db (CONDITIONAL_JUMP)  ; LAB_005344db
        ;   Label: LAB_005344cf
    MOV EAX,0x2                         ; 005344d1
    JMP 0x0053443f                      ; 005344d6
        ;   XREF to: 0053443f (UNCONDITIONAL_JUMP)  ; LAB_0053443f
    MOV ESI,dword ptr [0x01e6c16c]      ; 005344db | DAT_01e6c16c
        ;   Label: LAB_005344db
    CMP ESI,dword ptr [0x01e6c174]      ; 005344e1 | DAT_01e6c174
    JL 0x0053443a                       ; 005344e7
        ;   XREF to: 0053443a (CONDITIONAL_JUMP)  ; LAB_0053443a
    MOV EAX,0x4                         ; 005344ed
    JMP 0x0053443f                      ; 005344f2
        ;   XREF to: 0053443f (UNCONDITIONAL_JUMP)  ; LAB_0053443f
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005344f7
        ;   Label: LAB_005344f7
    PUSH EDX                            ; 005344fa
    PUSH EBP                            ; 005344fb
    CALL core_path.cpp_CPathMap_searchGrid_FUN_00535490 ; 005344fc
        ;   XREF to: 00535490 (UNCONDITIONAL_CALL)  ; uint core_path.cpp_CPathMap_searchGrid_FUN_00535490(CPathMap * this_ptr, int start_height)
    ADD ESP,0x8                         ; 00534501
    TEST EAX,EAX                        ; 00534504
    JNZ 0x005345b3                      ; 00534506
        ;   XREF to: 005345b3 (CONDITIONAL_JUMP)  ; LAB_005345b3
    FLD float ptr [EBP]                 ; 0053450c
    FLD float ptr [EBP + 0x4]           ; 0053450f
    FLD float ptr [EBP + 0x8]           ; 00534512
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 00534515
    LEA EDI,[ESP + 0x168]               ; 0053451c
    LEA ESI,[ESP + 0x48]                ; 00534523
    FXCH ST2                            ; 00534527
    FSUB float ptr [EAX]                ; 00534529
    FXCH                                ; 0053452b
    FSUB float ptr [EAX + 0x4]          ; 0053452d
    FXCH ST2                            ; 00534530
    FSUB float ptr [EAX + 0x8]          ; 00534532
    FXCH                                ; 00534535
    FSTP float ptr [ESP + 0x48]         ; 00534537
    FXCH                                ; 0053453b
    FSTP float ptr [ESP + 0x4c]         ; 0053453d
    FSTP float ptr [ESP + 0x50]         ; 00534541
    LEA EAX,[ESP + 0x168]               ; 00534545
    MOVSD ES:EDI,ESI                    ; 0053454c
    MOVSD ES:EDI,ESI                    ; 0053454d
    MOVSD ES:EDI,ESI                    ; 0053454e
    PUSH EAX                            ; 0053454f
    LEA ESI,[ESP + 0x1c0]               ; 00534550
    LEA EDI,[ESP + 0x184]               ; 00534557
    CALL core_vecdir.cpp_FUN_005a7520   ; 0053455e
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005a7520()
    LEA ESI,[ESP + 0x1c0]               ; 00534563
    ADD ESP,0x4                         ; 0053456a
    LEA EAX,[ESP + 0x180]               ; 0053456d
    MOV ECX,dword ptr [ESP + 0x1f0]     ; 00534574
    MOVSD ES:EDI,ESI                    ; 0053457b
    MOVSD ES:EDI,ESI                    ; 0053457c
    MOVSD ES:EDI,ESI                    ; 0053457d
    CMP EAX,ECX                         ; 0053457e
    JZ 0x00533edf                       ; 00534580
        ;   XREF to: 00533edf (CONDITIONAL_JUMP)  ; LAB_00533edf
    MOV EAX,dword ptr [ESP + 0x180]     ; 00534586
    MOV dword ptr [ECX],EAX             ; 0053458d
    MOV EAX,dword ptr [ESP + 0x184]     ; 0053458f
    MOV dword ptr [ECX + 0x4],EAX       ; 00534596
    MOV EAX,dword ptr [ESP + 0x188]     ; 00534599
    MOV dword ptr [ECX + 0x8],EAX       ; 005345a0
    MOV EAX,0x2                         ; 005345a3
    ADD ESP,0x1d4                       ; 005345a8
    POP EBP                             ; 005345ae
    POP EDI                             ; 005345af
    POP ESI                             ; 005345b0
    POP EBX                             ; 005345b1
    RET                                 ; 005345b2
    MOV EBX,dword ptr [0x01e6c178]      ; 005345b3 | DAT_01e6c178
        ;   Label: LAB_005345b3
    LEA EAX,[EBX*0x4 + 0x0]             ; 005345b9
    SUB EAX,EBX                         ; 005345c0
    SHL EAX,0x3                         ; 005345c2
    ADD EAX,EBX                         ; 005345c5
    SHL EAX,0x4                         ; 005345c7
    LEA EDX,[EAX + EBP*0x1]             ; 005345ca
    MOV EAX,[0x01e6c174]                ; 005345cd | DAT_01e6c174
    MOV EBX,dword ptr [EBP + 0x10]      ; 005345d2
    MOV EAX,dword ptr [EDX + EAX*0x4 + 0x30] ; 005345d5
    SUB EAX,EBX                         ; 005345d9
    CDQ                                 ; 005345db
    XOR EAX,EDX                         ; 005345dc
    SUB EAX,EDX                         ; 005345de
    CMP EAX,0x3                         ; 005345e0
    JG 0x00534710                       ; 005345e3
        ;   XREF to: 00534710 (CONDITIONAL_JUMP)  ; LAB_00534710
    MOV EBX,0xffffffff                  ; 005345e9
    MOV ESI,dword ptr [0x01e6c178]      ; 005345ee | DAT_01e6c178
    MOV EDI,dword ptr [0x01e6c174]      ; 005345f4 | DAT_01e6c174
    MOV dword ptr [ESP + 0x1cc],EBX     ; 005345fa
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 00534601
        ;   Label: LAB_00534601
    MOV dword ptr [ESP + 0x1c8],EAX     ; 00534608
    IMUL EAX,ESI,0x64                   ; 0053460f
    MOV dword ptr [ESP + 0x1cc],EBX     ; 00534612
    XOR EBX,EBX                         ; 00534619
    MOV BL,byte ptr [EDI + EAX*0x1 + 0x1e7abe8] ; 0053461b | DAT_01e7bfa2
    TEST EBX,EBX                        ; 00534622
    JZ 0x005347a8                       ; 00534624
        ;   XREF to: 005347a8 (CONDITIONAL_JUMP)  ; LAB_005347a8
    MOV EAX,dword ptr [EBX*0x4 + 0x622788] ; 0053462a | DAT_00622788
    MOV EDX,dword ptr [EBX*0x4 + 0x6227ac] ; 00534631 | DAT_006227ac
    SUB EDI,EAX                         ; 00534638
    SUB ESI,EDX                         ; 0053463a
    TEST EDI,EDI                        ; 0053463c
    JL 0x00534849                       ; 0053463e
        ;   XREF to: 00534849 (CONDITIONAL_JUMP)  ; LAB_00534849
    TEST ESI,ESI                        ; 00534644
        ;   Label: LAB_00534644
    JL 0x00534870                       ; 00534646
        ;   XREF to: 00534870 (CONDITIONAL_JUMP)  ; LAB_00534870
    CMP EDI,0x64                        ; 0053464c
        ;   Label: LAB_0053464c
    JL 0x00534673                       ; 0053464f
        ;   XREF to: 00534673 (CONDITIONAL_JUMP)  ; LAB_00534673
    MOV EAX,0x5eca3e                    ; 00534651 | = "..\\core\\path.cpp"
    MOV EDX,0x54a                       ; 00534656
    PUSH 0x5eca4f                       ; 0053465b | = "Out of bounds3!"
    MOV [0x01d1d400],EAX                ; 00534660 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 00534665 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0053466b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00534670
    CMP ESI,0x64                        ; 00534673
        ;   Label: LAB_00534673
    JL 0x0053469a                       ; 00534676
        ;   XREF to: 0053469a (CONDITIONAL_JUMP)  ; LAB_0053469a
    MOV ECX,0x5eca5f                    ; 00534678 | = "..\\core\\path.cpp"
    MOV EAX,0x54b                       ; 0053467d
    PUSH 0x5eca70                       ; 00534682 | = "Out of bounds4!"
    MOV dword ptr [0x01d1d400],ECX      ; 00534687 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0053468d | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00534692
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00534697
    CMP EDI,dword ptr [0x01e6c16c]      ; 0053469a | DAT_01e6c16c
        ;   Label: LAB_0053469a
    JNZ 0x00534601                      ; 005346a0
        ;   XREF to: 00534601 (CONDITIONAL_JUMP)  ; LAB_00534601
    CMP ESI,dword ptr [0x01e6c170]      ; 005346a6 | DAT_01e6c170
    JNZ 0x00534601                      ; 005346ac
        ;   XREF to: 00534601 (CONDITIONAL_JUMP)  ; LAB_00534601
    MOV ESI,dword ptr [ESP + 0x1ec]     ; 005346b2
    MOV EAX,dword ptr [ESP + 0x1f0]     ; 005346b9
    PUSH ESI                            ; 005346c0
    MOV EDI,dword ptr [ESP + 0x1cc]     ; 005346c1
    MOV dword ptr [EAX],0x0             ; 005346c8
    PUSH EDI                            ; 005346ce
    MOV dword ptr [EAX + 0x8],0x0       ; 005346cf
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 005346d6
    PUSH EAX                            ; 005346dd
    PUSH EBX                            ; 005346de
    PUSH EBP                            ; 005346df
    CALL core_path.cpp_FUN_00533140     ; 005346e0
        ;   XREF to: 00533140 (UNCONDITIONAL_CALL)  ; undefined core_path.cpp_FUN_00533140()
    MOV dword ptr [ESP + 0x1e4],EAX     ; 005346e5
    FLD float ptr [ESP + 0x1e4]         ; 005346ec
    ADD ESP,0x14                        ; 005346f3
    MOV EAX,dword ptr [ESP + 0x1f0]     ; 005346f6
    FSTP float ptr [EAX + 0x4]          ; 005346fd
    MOV EAX,0x1                         ; 00534700
    ADD ESP,0x1d4                       ; 00534705
    POP EBP                             ; 0053470b
    POP EDI                             ; 0053470c
    POP ESI                             ; 0053470d
    POP EBX                             ; 0053470e
    RET                                 ; 0053470f
    FLD float ptr [EBP]                 ; 00534710
        ;   Label: LAB_00534710
    FLD float ptr [EBP + 0x4]           ; 00534713
    FLD float ptr [EBP + 0x8]           ; 00534716
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 00534719
    LEA EDI,[ESP + 0xf0]                ; 00534720
    LEA ESI,[ESP + 0x6c]                ; 00534727
    FXCH ST2                            ; 0053472b
    FSUB float ptr [EAX]                ; 0053472d
    FXCH                                ; 0053472f
    FSUB float ptr [EAX + 0x4]          ; 00534731
    FXCH ST2                            ; 00534734
    FSUB float ptr [EAX + 0x8]          ; 00534736
    FXCH                                ; 00534739
    FSTP float ptr [ESP + 0x6c]         ; 0053473b
    FXCH                                ; 0053473f
    FSTP float ptr [ESP + 0x70]         ; 00534741
    FSTP float ptr [ESP + 0x74]         ; 00534745
    LEA EAX,[ESP + 0xf0]                ; 00534749
    MOVSD ES:EDI,ESI                    ; 00534750
    MOVSD ES:EDI,ESI                    ; 00534751
    MOVSD ES:EDI,ESI                    ; 00534752
    PUSH EAX                            ; 00534753
    LEA ESI,[ESP + 0x130]               ; 00534754
    LEA EDI,[ESP + 0x1c]                ; 0053475b
    CALL core_vecdir.cpp_FUN_005a7520   ; 0053475f
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005a7520()
    LEA ESI,[ESP + 0x130]               ; 00534764
    ADD ESP,0x4                         ; 0053476b
    LEA EAX,[ESP + 0x18]                ; 0053476e
    MOV EDX,dword ptr [ESP + 0x1f0]     ; 00534772
    MOVSD ES:EDI,ESI                    ; 00534779
    MOVSD ES:EDI,ESI                    ; 0053477a
    MOVSD ES:EDI,ESI                    ; 0053477b
    CMP EAX,EDX                         ; 0053477c
    JZ 0x00533edf                       ; 0053477e
        ;   XREF to: 00533edf (CONDITIONAL_JUMP)  ; LAB_00533edf
    MOV EAX,dword ptr [ESP + 0x18]      ; 00534784
    MOV dword ptr [EDX],EAX             ; 00534788
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0053478a
    MOV dword ptr [EDX + 0x4],EAX       ; 0053478e
    MOV EAX,dword ptr [ESP + 0x20]      ; 00534791
    MOV dword ptr [EDX + 0x8],EAX       ; 00534795
    MOV EAX,0x2                         ; 00534798
    ADD ESP,0x1d4                       ; 0053479d
    POP EBP                             ; 005347a3
    POP EDI                             ; 005347a4
    POP ESI                             ; 005347a5
    POP EBX                             ; 005347a6
    RET                                 ; 005347a7
    FLD float ptr [EBP]                 ; 005347a8
        ;   Label: LAB_005347a8
    FLD float ptr [EBP + 0x4]           ; 005347ab
    FLD float ptr [EBP + 0x8]           ; 005347ae
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 005347b1
    LEA EDI,[ESP + 0x54]                ; 005347b8
    LEA ESI,[ESP + 0x60]                ; 005347bc
    FXCH ST2                            ; 005347c0
    FSUB float ptr [EAX]                ; 005347c2
    FXCH                                ; 005347c4
    FSUB float ptr [EAX + 0x4]          ; 005347c6
    FXCH ST2                            ; 005347c9
    FSUB float ptr [EAX + 0x8]          ; 005347cb
    FXCH                                ; 005347ce
    FSTP float ptr [ESP + 0x60]         ; 005347d0
    FXCH                                ; 005347d4
    FSTP float ptr [ESP + 0x64]         ; 005347d6
    FSTP float ptr [ESP + 0x68]         ; 005347da
    LEA EAX,[ESP + 0x54]                ; 005347de
    MOVSD ES:EDI,ESI                    ; 005347e2
    MOVSD ES:EDI,ESI                    ; 005347e3
    MOVSD ES:EDI,ESI                    ; 005347e4
    PUSH EAX                            ; 005347e5
    LEA ESI,[ESP + 0x94]                ; 005347e6
    LEA EDI,[ESP + 0x88]                ; 005347ed
    CALL core_vecdir.cpp_FUN_005a7520   ; 005347f4
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005a7520()
    LEA ESI,[ESP + 0x94]                ; 005347f9
    ADD ESP,0x4                         ; 00534800
    LEA EAX,[ESP + 0x84]                ; 00534803
    MOV EDX,dword ptr [ESP + 0x1f0]     ; 0053480a
    MOVSD ES:EDI,ESI                    ; 00534811
    MOVSD ES:EDI,ESI                    ; 00534812
    MOVSD ES:EDI,ESI                    ; 00534813
    CMP EAX,EDX                         ; 00534814
    JZ 0x00533edf                       ; 00534816
        ;   XREF to: 00533edf (CONDITIONAL_JUMP)  ; LAB_00533edf
    MOV EAX,dword ptr [ESP + 0x84]      ; 0053481c
    MOV dword ptr [EDX],EAX             ; 00534823
    MOV EAX,dword ptr [ESP + 0x88]      ; 00534825
    MOV dword ptr [EDX + 0x4],EAX       ; 0053482c
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0053482f
    MOV dword ptr [EDX + 0x8],EAX       ; 00534836
    MOV EAX,0x2                         ; 00534839
    ADD ESP,0x1d4                       ; 0053483e
    POP EBP                             ; 00534844
    POP EDI                             ; 00534845
    POP ESI                             ; 00534846
    POP EBX                             ; 00534847
    RET                                 ; 00534848
    MOV ECX,0x5ec9fc                    ; 00534849 | = "..\\core\\path.cpp"
        ;   Label: LAB_00534849
    MOV EAX,0x548                       ; 0053484e
    PUSH 0x5eca0d                       ; 00534853 | = "Out of bounds1!"
    MOV dword ptr [0x01d1d400],ECX      ; 00534858 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0053485e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00534863
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00534868
    JMP 0x00534644                      ; 0053486b
        ;   XREF to: 00534644 (UNCONDITIONAL_JUMP)  ; LAB_00534644
    MOV EDX,0x5eca1d                    ; 00534870 | = "..\\core\\path.cpp"
        ;   Label: LAB_00534870
    MOV ECX,0x549                       ; 00534875
    PUSH 0x5eca2e                       ; 0053487a | = "Out of bounds2!"
    MOV dword ptr [0x01d1d400],EDX      ; 0053487f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00534885 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0053488b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00534890
    JMP 0x0053464c                      ; 00534893
        ;   XREF to: 0053464c (UNCONDITIONAL_JUMP)  ; LAB_0053464c

