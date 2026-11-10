; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gabriela_cpp_FUN_004aeb00(CDemonActor *param_1)
;
; Local Variables:
; undefined4       Stack[-0x1f4]:4  local_1f4
; undefined8       Stack[-0x1f0]:8  local_1f0
; undefined4       Stack[-0x1e8]:4  local_1e8
; undefined4       Stack[-0x1e4]:4  local_1e4
; undefined        Stack[-0x1b0]:1  local_1b0
; undefined        Stack[-0x198]:1  local_198
; undefined        Stack[-0x174]:1  local_174
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined        Stack[-0x12c]:1  local_12c
; undefined        Stack[-0x114]:1  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_process_FUN_004ad640 at 004adf68
;
; Referenced Globals:
;   undefined4 DAT_005d6fc3
;   undefined4 DAT_005d6fcb
;   undefined4 DAT_005d6fd3
;   undefined4 DAT_005d6fdb
;   undefined4 DAT_005d6fe3
;   undefined4 DAT_005d6feb
;   undefined4 DAT_005d6ff3
;   undefined4 DAT_005d6ff7
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01cedef4
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.collision_actor
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_hero.cpp_FUN_004d00c0
;   core_motion.cpp_FUN_005035c0
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30
;   core_setcolid.cpp_CDemonSet_init_FUN_00537e00
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0
;   core_setcolid.cpp_FUN_00535ee0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aeb00
        ;   Label: core_gabriela.cpp_FUN_004aeb00
    PUSH ESI                            ; 004aeb01
    PUSH EDI                            ; 004aeb02
    PUSH EBP                            ; 004aeb03
    MOV EBP,ESP                         ; 004aeb04
    SUB ESP,0x1dc                       ; 004aeb06
    AND ESP,0xfffffff8                  ; 004aeb0c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004aeb0f
    PUSH 0x34                           ; 004aeb12
    PUSH 0x0                            ; 004aeb14
    LEA EAX,[EBX + 0x10a68]             ; 004aeb16
    MOV EDX,0x3e800000                  ; 004aeb1c
    PUSH EAX                            ; 004aeb21
    MOV dword ptr [ESP + 0x1dc],EDX     ; 004aeb22
    CALL crt_memory.c_memset_FUN_005b77c0 ; 004aeb29
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV ECX,dword ptr [EBX + 0x25638]   ; 004aeb2e
    ADD ESP,0xc                         ; 004aeb34
    TEST ECX,ECX                        ; 004aeb37
    JZ 0x004aed6b                       ; 004aeb39
        ;   XREF to: 004aed6b (CONDITIONAL_JUMP)  ; LAB_004aed6b
    LEA EDI,[ESP + 0x124]               ; 004aeb3f
    LEA EDX,[EBX + 0x20]                ; 004aeb46
    LEA ESI,[ESP + 0x88]                ; 004aeb49
    MOV EAX,[0x01cedef4]                ; 004aeb50 | DAT_01cedef4
    FLD float ptr [EDX]                 ; 004aeb55
    FLD float ptr [EDX + 0x4]           ; 004aeb57
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004aeb5a
    FLD float ptr [EDX + 0x8]           ; 004aeb61
    FXCH ST2                            ; 004aeb64
    FSUB float ptr [EAX + 0x20]         ; 004aeb66
    FXCH                                ; 004aeb69
    FSUB float ptr [EAX + 0x24]         ; 004aeb6b
    FXCH ST2                            ; 004aeb6e
    FSUB float ptr [EAX + 0x28]         ; 004aeb70
    FXCH                                ; 004aeb73
    FSTP float ptr [ESP + 0x88]         ; 004aeb75
    FXCH                                ; 004aeb7c
    FSTP float ptr [ESP + 0x8c]         ; 004aeb7e
    FSTP float ptr [ESP + 0x90]         ; 004aeb85
    MOVSD ES:EDI,ESI                    ; 004aeb8c
    MOVSD ES:EDI,ESI                    ; 004aeb8d
    MOVSD ES:EDI,ESI                    ; 004aeb8e
    FLD float ptr [ESP + 0x128]         ; 004aeb8f
    FMUL ST0                            ; 004aeb96
    FLD float ptr [ESP + 0x124]         ; 004aeb98
    FMUL ST0                            ; 004aeb9f
    FADDP                               ; 004aeba1
    FLD float ptr [ESP + 0x12c]         ; 004aeba3
    FMUL ST0                            ; 004aebaa
    FADDP                               ; 004aebac
    FSQRT                               ; 004aebae
    MOV ESI,dword ptr [EBX + 0x25638]   ; 004aebb0
    FSTP float ptr [ESP + 0x8]          ; 004aebb6
    CMP ESI,0x3                         ; 004aebba
    JZ 0x004aed72                       ; 004aebbd
        ;   XREF to: 004aed72 (CONDITIONAL_JUMP)  ; LAB_004aed72
    FLD float ptr [ESP + 0x8]           ; 004aebc3
        ;   Label: LAB_004aebc3
    FCOMP double ptr [0x005d6fc3]       ; 004aebc7 | DAT_005d6fc3
    FNSTSW AX                           ; 004aebcd
    SAHF                                ; 004aebcf
    JNC 0x004af21f                      ; 004aebd0
        ;   XREF to: 004af21f (CONDITIONAL_JUMP)  ; LAB_004af21f
    MOV dword ptr [ESP + 0xc],0x461c3f9a ; 004aebd6
    XOR EDX,EDX                         ; 004aebde
    MOV ESI,dword ptr [EBX + 0x25638]   ; 004aebe0
    MOV dword ptr [ESP + 0x1d4],EDX     ; 004aebe6
    CMP ESI,0x2                         ; 004aebed
    JZ 0x004aebf7                       ; 004aebf0
        ;   XREF to: 004aebf7 (CONDITIONAL_JUMP)  ; LAB_004aebf7
    CMP ESI,0x3                         ; 004aebf2
    JNZ 0x004aec0c                      ; 004aebf5
        ;   XREF to: 004aec0c (CONDITIONAL_JUMP)  ; LAB_004aec0c
    LEA EAX,[ESP + 0xc]                 ; 004aebf7
        ;   Label: LAB_004aebf7
    PUSH EAX                            ; 004aebfb
    PUSH EBX                            ; 004aebfc
    CALL core_hero.cpp_FUN_004d00c0     ; 004aebfd
        ;   XREF to: 004d00c0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d00c0()
    ADD ESP,0x8                         ; 004aec02
    MOV dword ptr [ESP + 0x1d4],EAX     ; 004aec05
    CMP dword ptr [ESP + 0x1d4],0x0     ; 004aec0c
        ;   Label: LAB_004aec0c
    JZ 0x004af1e7                       ; 004aec14
        ;   XREF to: 004af1e7 (CONDITIONAL_JUMP)  ; LAB_004af1e7
    FLD float ptr [ESP + 0xc]           ; 004aec1a
    FCOMP double ptr [0x005d6fdb]       ; 004aec1e | DAT_005d6fdb
    FNSTSW AX                           ; 004aec24
    SAHF                                ; 004aec26
    JNC 0x004af1e7                      ; 004aec27
        ;   XREF to: 004af1e7 (CONDITIONAL_JUMP)  ; LAB_004af1e7
    CMP dword ptr [EBX + 0x25640],0x0   ; 004aec2d
    JNZ 0x004aec56                      ; 004aec34
        ;   XREF to: 004aec56 (CONDITIONAL_JUMP)  ; LAB_004aec56
    LEA EAX,[EBX + 0x2b4]               ; 004aec36
    PUSH EAX                            ; 004aec3c
    CALL core_motion.cpp_FUN_005035c0   ; 004aec3d
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004aec42
    ADD ESP,0x4                         ; 004aec45
    TEST EAX,EAX                        ; 004aec48
    JNZ 0x004aec56                      ; 004aec4a
        ;   XREF to: 004aec56 (CONDITIONAL_JUMP)  ; LAB_004aec56
    MOV dword ptr [EBX + 0x10a80],0x1   ; 004aec4c
    MOV EDX,dword ptr [ESP + 0x1d4]     ; 004aec56
        ;   Label: LAB_004aec56
    LEA EDI,[ESP + 0xc4]                ; 004aec5d
    LEA ESI,[ESP + 0xb8]                ; 004aec64
    LEA EAX,[EBX + 0x20]                ; 004aec6b
    FLD float ptr [EDX + 0x20]          ; 004aec6e
    FLD float ptr [EDX + 0x24]          ; 004aec71
    FLD float ptr [EDX + 0x28]          ; 004aec74
    FXCH ST2                            ; 004aec77
    FSUB float ptr [EAX]                ; 004aec79
    FXCH                                ; 004aec7b
    FSUB float ptr [EAX + 0x4]          ; 004aec7d
    FXCH ST2                            ; 004aec80
    FSUB float ptr [EAX + 0x8]          ; 004aec82
    FXCH                                ; 004aec85
    FSTP float ptr [ESP + 0xb8]         ; 004aec87
    FXCH                                ; 004aec8e
    FSTP float ptr [ESP + 0xbc]         ; 004aec90
    FSTP float ptr [ESP + 0xc0]         ; 004aec97
    LEA EAX,[ESP + 0xc4]                ; 004aec9e
    MOVSD ES:EDI,ESI                    ; 004aeca5
    MOVSD ES:EDI,ESI                    ; 004aeca6
    MOVSD ES:EDI,ESI                    ; 004aeca7
    PUSH EAX                            ; 004aeca8
    LEA ESI,[ESP + 0x188]               ; 004aeca9
    LEA EDI,[ESP + 0x80]                ; 004aecb0
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 004aecb7
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x188]               ; 004aecbc
    ADD ESP,0x4                         ; 004aecc3
    MOVSD ES:EDI,ESI                    ; 004aecc6
    MOVSD ES:EDI,ESI                    ; 004aecc7
    MOVSD ES:EDI,ESI                    ; 004aecc8
    FLD float ptr [ESP + 0x80]          ; 004aecc9
    FSUB float ptr [EBX + 0x34]         ; 004aecd0
    SUB ESP,0x4                         ; 004aecd3
    FSTP float ptr [ESP]                ; 004aecd6
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 004aecd9
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0()
    MOV dword ptr [ESP + 0x1dc],EAX     ; 004aecde
    FLD float ptr [ESP + 0x1dc]         ; 004aece5
    FMUL float ptr [0x005d6fcb]         ; 004aecec | DAT_005d6fcb
    ADD ESP,0x4                         ; 004aecf2
    FMUL double ptr [0x005d6fc3]        ; 004aecf5 | DAT_005d6fc3
    FLD float ptr [ESP + 0x1d0]         ; 004aecfb
    FCHS                                ; 004aed02
    FSTP float ptr [ESP + 0x1c8]        ; 004aed04
    FST float ptr [EBX + 0x10a90]       ; 004aed0b
    FCOMP float ptr [ESP + 0x1c8]       ; 004aed11
    FNSTSW AX                           ; 004aed18
    SAHF                                ; 004aed1a
    JNC 0x004aed2a                      ; 004aed1b
        ;   XREF to: 004aed2a (CONDITIONAL_JUMP)  ; LAB_004aed2a
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 004aed1d
    MOV dword ptr [EBX + 0x10a90],EAX   ; 004aed24
    FLD float ptr [EBX + 0x10a90]       ; 004aed2a
        ;   Label: LAB_004aed2a
    FCOMP float ptr [ESP + 0x1d0]       ; 004aed30
    FNSTSW AX                           ; 004aed37
    SAHF                                ; 004aed39
    JBE 0x004aed49                      ; 004aed3a
        ;   XREF to: 004aed49 (CONDITIONAL_JUMP)  ; LAB_004aed49
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 004aed3c
    MOV dword ptr [EBX + 0x10a90],EAX   ; 004aed43
    FLD float ptr [EBX + 0x10a90]       ; 004aed49
        ;   Label: LAB_004aed49
    FST double ptr [ESP]                ; 004aed4f
    FCOMP double ptr [0x005d6fe3]       ; 004aed52 | DAT_005d6fe3
    FNSTSW AX                           ; 004aed58
    SAHF                                ; 004aed5a
    JBE 0x004aed6b                      ; 004aed5b
        ;   XREF to: 004aed6b (CONDITIONAL_JUMP)  ; LAB_004aed6b
    FLD double ptr [ESP]                ; 004aed5d
    FCOMP double ptr [0x005d6feb]       ; 004aed60 | DAT_005d6feb
    FNSTSW AX                           ; 004aed66
    SAHF                                ; 004aed68
    JC 0x004aed7d                       ; 004aed69
        ;   XREF to: 004aed7d (CONDITIONAL_JUMP)  ; LAB_004aed7d
    MOV ESP,EBP                         ; 004aed6b
        ;   Label: LAB_004aed6b
    POP EBP                             ; 004aed6d
    POP EDI                             ; 004aed6e
    POP ESI                             ; 004aed6f
    POP EBX                             ; 004aed70
    RET                                 ; 004aed71
    XOR EDI,EDI                         ; 004aed72
        ;   Label: LAB_004aed72
    MOV dword ptr [ESP + 0x8],EDI       ; 004aed74
    JMP 0x004aebc3                      ; 004aed78
        ;   XREF to: 004aebc3 (UNCONDITIONAL_JUMP)  ; LAB_004aebc3
    PUSH EBX                            ; 004aed7d
        ;   Label: LAB_004aed7d
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004aed7e
    LEA ESI,[ESP + 0x5c]                ; 004aed84
    LEA EDI,[ESP + 0x44]                ; 004aed88
    CALL dword ptr [EAX + 0x24]         ; 004aed8c
    MOV ECX,0x6                         ; 004aed8f
    LEA ESI,[ESP + 0x5c]                ; 004aed94
    ADD ESP,0x4                         ; 004aed98
    MOVSD.REP ES:EDI,ESI                ; 004aed9b
    LEA EAX,[ESP + 0x40]                ; 004aed9d
    FLD float ptr [ESP + 0x40]          ; 004aeda1
    FLD float ptr [ESP + 0x44]          ; 004aeda5
    FLD float ptr [ESP + 0x48]          ; 004aeda9
    LEA EDI,[ESP + 0x94]                ; 004aedad
    LEA ESI,[ESP + 0x1b4]               ; 004aedb4
    FXCH ST2                            ; 004aedbb
    FADD float ptr [EAX + 0xc]          ; 004aedbd
    FXCH                                ; 004aedc0
    FADD float ptr [EAX + 0x10]         ; 004aedc2
    FXCH ST2                            ; 004aedc5
    FADD float ptr [EAX + 0x14]         ; 004aedc7
    FXCH                                ; 004aedca
    FSTP float ptr [ESP + 0x1b4]        ; 004aedcc
    FXCH                                ; 004aedd3
    FSTP float ptr [ESP + 0x1b8]        ; 004aedd5
    FSTP float ptr [ESP + 0x1bc]        ; 004aeddc
    MOVSD ES:EDI,ESI                    ; 004aede3
    MOVSD ES:EDI,ESI                    ; 004aede4
    MOVSD ES:EDI,ESI                    ; 004aede5
    FLD float ptr [ESP + 0x94]          ; 004aede6
    FMUL float ptr [0x005d6ff3]         ; 004aeded | DAT_005d6ff3
    FLD float ptr [ESP + 0x98]          ; 004aedf3
    FMUL float ptr [0x005d6ff3]         ; 004aedfa | DAT_005d6ff3
    FLD float ptr [ESP + 0x9c]          ; 004aee00
    FMUL float ptr [0x005d6ff3]         ; 004aee07 | DAT_005d6ff3
    LEA EAX,[EBX + 0x20]                ; 004aee0d
    LEA EDI,[ESP + 0x10c]               ; 004aee10
    LEA ESI,[ESP + 0xf4]                ; 004aee17
    FXCH ST2                            ; 004aee1e
    FSTP float ptr [ESP + 0xf4]         ; 004aee20
    FSTP float ptr [ESP + 0xf8]         ; 004aee27
    FSTP float ptr [ESP + 0xfc]         ; 004aee2e
    MOVSD ES:EDI,ESI                    ; 004aee35
    MOVSD ES:EDI,ESI                    ; 004aee36
    MOVSD ES:EDI,ESI                    ; 004aee37
    FLD float ptr [EAX]                 ; 004aee38
    FLD float ptr [EAX + 0x4]           ; 004aee3a
    FLD float ptr [EAX + 0x8]           ; 004aee3d
    LEA EDI,[ESP + 0xa0]                ; 004aee40
    LEA ESI,[ESP + 0x148]               ; 004aee47
    FXCH ST2                            ; 004aee4e
    FADD float ptr [ESP + 0x10c]        ; 004aee50
    FXCH                                ; 004aee57
    FADD float ptr [ESP + 0x110]        ; 004aee59
    FXCH ST2                            ; 004aee60
    FADD float ptr [ESP + 0x114]        ; 004aee62
    FXCH                                ; 004aee69
    FSTP float ptr [ESP + 0x148]        ; 004aee6b
    FXCH                                ; 004aee72
    FSTP float ptr [ESP + 0x14c]        ; 004aee74
    FSTP float ptr [ESP + 0x150]        ; 004aee7b
    MOVSD ES:EDI,ESI                    ; 004aee82
    MOVSD ES:EDI,ESI                    ; 004aee83
    MOVSD ES:EDI,ESI                    ; 004aee84
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 004aee85
    MOV ESI,dword ptr [ESP + 0x1d4]     ; 004aee8c
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004aee93
    PUSH ESI                            ; 004aee99
    LEA ESI,[ESP + 0x14]                ; 004aee9a
    LEA EDI,[ESP + 0x2c]                ; 004aee9e
    CALL dword ptr [EAX + 0x24]         ; 004aeea2
    MOV ECX,0x6                         ; 004aeea5
    LEA ESI,[ESP + 0x14]                ; 004aeeaa
    ADD ESP,0x4                         ; 004aeeae
    MOVSD.REP ES:EDI,ESI                ; 004aeeb1
    LEA EAX,[ESP + 0x28]                ; 004aeeb3
    FLD float ptr [ESP + 0x28]          ; 004aeeb7
    FLD float ptr [ESP + 0x2c]          ; 004aeebb
    FLD float ptr [ESP + 0x30]          ; 004aeebf
    LEA EDI,[ESP + 0xe8]                ; 004aeec3
    LEA ESI,[ESP + 0x100]               ; 004aeeca
    FXCH ST2                            ; 004aeed1
    FADD float ptr [EAX + 0xc]          ; 004aeed3
    FXCH                                ; 004aeed6
    FADD float ptr [EAX + 0x10]         ; 004aeed8
    FXCH ST2                            ; 004aeedb
    FADD float ptr [EAX + 0x14]         ; 004aeedd
    FXCH                                ; 004aeee0
    FSTP float ptr [ESP + 0x100]        ; 004aeee2
    FXCH                                ; 004aeee9
    FSTP float ptr [ESP + 0x104]        ; 004aeeeb
    FSTP float ptr [ESP + 0x108]        ; 004aeef2
    MOVSD ES:EDI,ESI                    ; 004aeef9
    MOVSD ES:EDI,ESI                    ; 004aeefa
    MOVSD ES:EDI,ESI                    ; 004aeefb
    FLD float ptr [ESP + 0xe8]          ; 004aeefc
    FMUL float ptr [0x005d6ff3]         ; 004aef03 | DAT_005d6ff3
    FLD float ptr [ESP + 0xec]          ; 004aef09
    FMUL float ptr [0x005d6ff3]         ; 004aef10 | DAT_005d6ff3
    FLD float ptr [ESP + 0xf0]          ; 004aef16
    FMUL float ptr [0x005d6ff3]         ; 004aef1d | DAT_005d6ff3
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 004aef23
    LEA EDI,[ESP + 0x190]               ; 004aef2a
    LEA ESI,[ESP + 0x70]                ; 004aef31
    FXCH ST2                            ; 004aef35
    FSTP float ptr [ESP + 0x70]         ; 004aef37
    FSTP float ptr [ESP + 0x74]         ; 004aef3b
    FSTP float ptr [ESP + 0x78]         ; 004aef3f
    MOVSD ES:EDI,ESI                    ; 004aef43
    MOVSD ES:EDI,ESI                    ; 004aef44
    MOVSD ES:EDI,ESI                    ; 004aef45
    FLD float ptr [EAX + 0x20]          ; 004aef46
    FLD float ptr [EAX + 0x24]          ; 004aef49
    FLD float ptr [EAX + 0x28]          ; 004aef4c
    LEA EDI,[ESP + 0x19c]               ; 004aef4f
    LEA ESI,[ESP + 0xac]                ; 004aef56
    FXCH ST2                            ; 004aef5d
    FADD float ptr [ESP + 0x190]        ; 004aef5f
    FXCH                                ; 004aef66
    FADD float ptr [ESP + 0x194]        ; 004aef68
    FXCH ST2                            ; 004aef6f
    FADD float ptr [ESP + 0x198]        ; 004aef71
    FXCH                                ; 004aef78
    FSTP float ptr [ESP + 0xac]         ; 004aef7a
    FXCH                                ; 004aef81
    FSTP float ptr [ESP + 0xb0]         ; 004aef83
    FSTP float ptr [ESP + 0xb4]         ; 004aef8a
    MOVSD ES:EDI,ESI                    ; 004aef91
    MOVSD ES:EDI,ESI                    ; 004aef92
    MOVSD ES:EDI,ESI                    ; 004aef93
    FLD float ptr [ESP + 0x19c]         ; 004aef94
    FLD float ptr [ESP + 0x1a0]         ; 004aef9b
    FLD float ptr [ESP + 0x1a4]         ; 004aefa2
    LEA EDI,[ESP + 0x154]               ; 004aefa9
    LEA ESI,[ESP + 0x1a8]               ; 004aefb0
    FXCH ST2                            ; 004aefb7
    FSUB float ptr [ESP + 0xa0]         ; 004aefb9
    FXCH                                ; 004aefc0
    FSUB float ptr [ESP + 0xa4]         ; 004aefc2
    FXCH ST2                            ; 004aefc9
    FSUB float ptr [ESP + 0xa8]         ; 004aefcb
    FXCH                                ; 004aefd2
    FSTP float ptr [ESP + 0x1a8]        ; 004aefd4
    FXCH                                ; 004aefdb
    FSTP float ptr [ESP + 0x1ac]        ; 004aefdd
    FSTP float ptr [ESP + 0x1b0]        ; 004aefe4
    MOVSD ES:EDI,ESI                    ; 004aefeb
    MOVSD ES:EDI,ESI                    ; 004aefec
    MOVSD ES:EDI,ESI                    ; 004aefed
    FLD float ptr [ESP + 0x158]         ; 004aefee
    FMUL ST0                            ; 004aeff5
    FLD float ptr [ESP + 0x154]         ; 004aeff7
    FMUL ST0                            ; 004aeffe
    FADDP                               ; 004af000
    FLD float ptr [ESP + 0x15c]         ; 004af002
    FMUL ST0                            ; 004af009
    FADDP                               ; 004af00b
    FSQRT                               ; 004af00d
    FLDZ                                ; 004af00f
    FXCH                                ; 004af011
    FSTP float ptr [ESP + 0x1cc]        ; 004af013
    FCOMP float ptr [ESP + 0x1cc]       ; 004af01a
    FNSTSW AX                           ; 004af021
    SAHF                                ; 004af023
    JNC 0x004af1cb                      ; 004af024
        ;   XREF to: 004af1cb (CONDITIONAL_JUMP)  ; LAB_004af1cb
    FLD1                                ; 004af02a
    FLD float ptr [ESP + 0x154]         ; 004af02c
    FXCH                                ; 004af033
    FDIV float ptr [ESP + 0x1cc]        ; 004af035
    FXCH                                ; 004af03c
    FMUL ST1                            ; 004af03e
    FLD float ptr [ESP + 0x158]         ; 004af040
    FMUL ST2                            ; 004af047
    FLD float ptr [ESP + 0x15c]         ; 004af049
    FMULP ST3                           ; 004af050
    FXCH                                ; 004af052
    FSTP float ptr [ESP + 0x154]        ; 004af054
    FSTP float ptr [ESP + 0x158]        ; 004af05b
    FSTP float ptr [ESP + 0x15c]        ; 004af062
    FLD float ptr [0x005d6ff7]          ; 004af069 | DAT_005d6ff7
        ;   Label: LAB_004af069
    FLD float ptr [ESP + 0x154]         ; 004af06f
    FMUL ST1                            ; 004af076
    FLD float ptr [ESP + 0x158]         ; 004af078
    FMUL ST2                            ; 004af07f
    FLD float ptr [ESP + 0x15c]         ; 004af081
    FMULP ST3                           ; 004af088
    FLD float ptr [ESP + 0x19c]         ; 004af08a
    FLD float ptr [ESP + 0x1a0]         ; 004af091
    FLD float ptr [ESP + 0x1a4]         ; 004af098
    LEA EDI,[ESP + 0x118]               ; 004af09f
    LEA ESI,[ESP + 0x16c]               ; 004af0a6
    LEA EDX,[ESP + 0x13c]               ; 004af0ad
    FXCH ST4                            ; 004af0b4
    FSTP float ptr [ESP + 0x16c]        ; 004af0b6
    FXCH ST2                            ; 004af0bd
    FSTP float ptr [ESP + 0x170]        ; 004af0bf
    FXCH ST3                            ; 004af0c6
    FSTP float ptr [ESP + 0x174]        ; 004af0c8
    MOVSD ES:EDI,ESI                    ; 004af0cf
    MOVSD ES:EDI,ESI                    ; 004af0d0
    MOVSD ES:EDI,ESI                    ; 004af0d1
    LEA EAX,[ESP + 0x19c]               ; 004af0d2
    LEA EDI,[ESP + 0x13c]               ; 004af0d9
    LEA ESI,[ESP + 0xd0]                ; 004af0e0
    FXCH ST2                            ; 004af0e7
    FADD float ptr [ESP + 0x118]        ; 004af0e9
    FXCH ST2                            ; 004af0f0
    FADD float ptr [ESP + 0x11c]        ; 004af0f2
    FXCH                                ; 004af0f9
    FADD float ptr [ESP + 0x120]        ; 004af0fb
    FXCH ST2                            ; 004af102
    FSTP float ptr [ESP + 0xd0]         ; 004af104
    FSTP float ptr [ESP + 0xd4]         ; 004af10b
    FSTP float ptr [ESP + 0xd8]         ; 004af112
    MOVSD ES:EDI,ESI                    ; 004af119
    MOVSD ES:EDI,ESI                    ; 004af11a
    MOVSD ES:EDI,ESI                    ; 004af11b
    CMP EAX,EDX                         ; 004af11c
    JZ 0x004af14a                       ; 004af11e
        ;   XREF to: 004af14a (CONDITIONAL_JUMP)  ; LAB_004af14a
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004af120
    MOV dword ptr [ESP + 0x19c],EAX     ; 004af127
    MOV EAX,dword ptr [ESP + 0x140]     ; 004af12e
    MOV dword ptr [ESP + 0x1a0],EAX     ; 004af135
    MOV EAX,dword ptr [ESP + 0x144]     ; 004af13c
    MOV dword ptr [ESP + 0x1a4],EAX     ; 004af143
    PUSH 0x1                            ; 004af14a
        ;   Label: LAB_004af14a
    MOV ECX,dword ptr [0x0061b5a8]      ; 004af14c | g_CDemonSetPtr
    PUSH ECX                            ; 004af152 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0 ; 004af153
        ;   XREF to: 00537eb0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 004af158
    PUSH EBX                            ; 004af15b
    MOV ESI,dword ptr [0x0061b5a8]      ; 004af15c | g_CDemonSetPtr
    PUSH ESI                            ; 004af162 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 004af163
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004af168
    LEA EDX,[ESP + 0x19c]               ; 004af16b
    PUSH EDX                            ; 004af172
    LEA EDX,[ESP + 0xa4]                ; 004af173
    PUSH EDX                            ; 004af17a
    MOV EAX,[0x0061b5a8]                ; 004af17b | g_CDemonSetPtr
    PUSH EAX                            ; 004af180 | g_CDemonSetInstance
    MOV dword ptr [EAX + 0x14d144],0x0  ; 004af181 | g_CDemonSetInstance.collision_actor
    CALL core_setcolid.cpp_FUN_00535ee0 ; 004af18b
        ;   XREF to: 00535ee0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00535ee0()
    ADD ESP,0xc                         ; 004af190
    MOV EDI,dword ptr [0x0061b5a8]      ; 004af193 | g_CDemonSetPtr
    PUSH EDI                            ; 004af199 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 004af19a
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004af19f
    MOV EAX,[0x0061b5a8]                ; 004af1a2 | g_CDemonSetPtr | g_CDemonSetInstance
    MOV EDX,dword ptr [ESP + 0x1d4]     ; 004af1a7
    CMP EDX,dword ptr [EAX + 0x14d144]  ; 004af1ae | g_CDemonSetInstance.collision_actor
    JNZ 0x004aed6b                      ; 004af1b4
        ;   XREF to: 004aed6b (CONDITIONAL_JUMP)  ; LAB_004aed6b
    MOV dword ptr [EBX + 0x10a74],0x1   ; 004af1ba
    MOV ESP,EBP                         ; 004af1c4
    POP EBP                             ; 004af1c6
    POP EDI                             ; 004af1c7
    POP ESI                             ; 004af1c8
    POP EBX                             ; 004af1c9
    RET                                 ; 004af1ca
    XOR EDI,EDI                         ; 004af1cb
        ;   Label: LAB_004af1cb
    MOV dword ptr [ESP + 0x158],EDI     ; 004af1cd
    MOV dword ptr [ESP + 0x154],EDI     ; 004af1d4
    MOV dword ptr [ESP + 0x15c],EDI     ; 004af1db
    JMP 0x004af069                      ; 004af1e2
        ;   XREF to: 004af069 (UNCONDITIONAL_JUMP)  ; LAB_004af069
    CMP dword ptr [EBX + 0x25640],0x0   ; 004af1e7
        ;   Label: LAB_004af1e7
    JZ 0x004aed6b                       ; 004af1ee
        ;   XREF to: 004aed6b (CONDITIONAL_JUMP)  ; LAB_004aed6b
    LEA EAX,[EBX + 0x2b4]               ; 004af1f4
    PUSH EAX                            ; 004af1fa
    CALL core_motion.cpp_FUN_005035c0   ; 004af1fb
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004af200
    ADD ESP,0x4                         ; 004af203
    TEST EAX,EAX                        ; 004af206
    JNZ 0x004aed6b                      ; 004af208
        ;   XREF to: 004aed6b (CONDITIONAL_JUMP)  ; LAB_004aed6b
    MOV dword ptr [EBX + 0x10a80],0x1   ; 004af20e
    MOV ESP,EBP                         ; 004af218
    POP EBP                             ; 004af21a
    POP EDI                             ; 004af21b
    POP ESI                             ; 004af21c
    POP EBX                             ; 004af21d
    RET                                 ; 004af21e
    MOV EAX,[0x01cedef4]                ; 004af21f | DAT_01cedef4
        ;   Label: LAB_004af21f
    MOV EDX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004af224
    MOV EAX,dword ptr [EBX + 0x6c]      ; 004af22b
    PUSH EAX                            ; 004af22e
    LEA EAX,[ESP + 0xe0]                ; 004af22f
    PUSH EAX                            ; 004af236
    LEA EAX,[EBX + 0x20]                ; 004af237
    PUSH EAX                            ; 004af23a
    ADD EDX,0x10a9c                     ; 004af23b
    PUSH EDX                            ; 004af241
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650 ; 004af242
        ;   XREF to: 00513650 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 004af247
    TEST EAX,EAX                        ; 004af24a
    JZ 0x004aed6b                       ; 004af24c
        ;   XREF to: 004aed6b (CONDITIONAL_JUMP)  ; LAB_004aed6b
    FLD float ptr [ESP + 0xe0]          ; 004af252
    FSUB float ptr [EBX + 0x34]         ; 004af259
    SUB ESP,0x4                         ; 004af25c
    FSTP float ptr [ESP]                ; 004af25f
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 004af262
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0()
    MOV dword ptr [ESP + 0x1dc],EAX     ; 004af267
    FLD float ptr [ESP + 0x1dc]         ; 004af26e
    FMUL float ptr [0x005d6fcb]         ; 004af275 | DAT_005d6fcb
    ADD ESP,0x4                         ; 004af27b
    FMUL double ptr [0x005d6fc3]        ; 004af27e | DAT_005d6fc3
    FLD float ptr [ESP + 0x1d0]         ; 004af284
    FCHS                                ; 004af28b
    FSTP float ptr [ESP + 0x1c4]        ; 004af28d
    FST float ptr [EBX + 0x10a90]       ; 004af294
    FCOMP float ptr [ESP + 0x1c4]       ; 004af29a
    FNSTSW AX                           ; 004af2a1
    SAHF                                ; 004af2a3
    JC 0x004af39d                       ; 004af2a4
        ;   XREF to: 004af39d (CONDITIONAL_JUMP)  ; LAB_004af39d
    FLD float ptr [EBX + 0x10a90]       ; 004af2aa
        ;   Label: LAB_004af2aa
    FCOMP float ptr [ESP + 0x1d0]       ; 004af2b0
    FNSTSW AX                           ; 004af2b7
    SAHF                                ; 004af2b9
    JBE 0x004af2c9                      ; 004af2ba
        ;   XREF to: 004af2c9 (CONDITIONAL_JUMP)  ; LAB_004af2c9
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 004af2bc
    MOV dword ptr [EBX + 0x10a90],EAX   ; 004af2c3
    LEA EDI,[ESP + 0x178]               ; 004af2c9
        ;   Label: LAB_004af2c9
    LEA ESI,[ESP + 0x160]               ; 004af2d0
    LEA EAX,[EBX + 0x20]                ; 004af2d7
    MOV dword ptr [EBX + 0x10a68],0x1   ; 004af2da
    MOV EDX,dword ptr [0x01cedef4]      ; 004af2e4 | DAT_01cedef4
    FLD float ptr [EAX + 0x4]           ; 004af2ea
    FLD float ptr [EAX + 0x8]           ; 004af2ed
    MOV EDX,dword ptr [EDX*0x4 + 0x1cedee4] ; 004af2f0
    FLD float ptr [EAX]                 ; 004af2f7
    LEA EAX,[ESP + 0x178]               ; 004af2f9
    FSUB float ptr [EDX + 0x20]         ; 004af300
    FXCH ST2                            ; 004af303
    FSUB float ptr [EDX + 0x24]         ; 004af305
    FXCH                                ; 004af308
    FSUB float ptr [EDX + 0x28]         ; 004af30a
    FXCH ST2                            ; 004af30d
    FSTP float ptr [ESP + 0x160]        ; 004af30f
    FSTP float ptr [ESP + 0x164]        ; 004af316
    FSTP float ptr [ESP + 0x168]        ; 004af31d
    LEA EDX,[ESP + 0x130]               ; 004af324
    MOVSD ES:EDI,ESI                    ; 004af32b
    MOVSD ES:EDI,ESI                    ; 004af32c
    MOVSD ES:EDI,ESI                    ; 004af32d
    CMP EDX,EAX                         ; 004af32e
    JZ 0x004af35c                       ; 004af330
        ;   XREF to: 004af35c (CONDITIONAL_JUMP)  ; LAB_004af35c
    MOV EAX,dword ptr [ESP + 0x178]     ; 004af332
    MOV dword ptr [ESP + 0x130],EAX     ; 004af339
    MOV EAX,dword ptr [ESP + 0x17c]     ; 004af340
    MOV dword ptr [ESP + 0x134],EAX     ; 004af347
    MOV EAX,dword ptr [ESP + 0x180]     ; 004af34e
    MOV dword ptr [ESP + 0x138],EAX     ; 004af355
    FLD float ptr [ESP + 0x134]         ; 004af35c
        ;   Label: LAB_004af35c
    FMUL ST0                            ; 004af363
    FLD float ptr [ESP + 0x130]         ; 004af365
    FMUL ST0                            ; 004af36c
    FADDP                               ; 004af36e
    FLD float ptr [ESP + 0x138]         ; 004af370
    FMUL ST0                            ; 004af377
    FADDP                               ; 004af379
    FSQRT                               ; 004af37b
    FCOMP double ptr [0x005d6fd3]       ; 004af37d | DAT_005d6fd3
    FNSTSW AX                           ; 004af383
    SAHF                                ; 004af385
    JBE 0x004aed6b                      ; 004af386
        ;   XREF to: 004aed6b (CONDITIONAL_JUMP)  ; LAB_004aed6b
    MOV dword ptr [EBX + 0x10a70],0x1   ; 004af38c
    MOV ESP,EBP                         ; 004af396
    POP EBP                             ; 004af398
    POP EDI                             ; 004af399
    POP ESI                             ; 004af39a
    POP EBX                             ; 004af39b
    RET                                 ; 004af39c
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 004af39d
        ;   Label: LAB_004af39d
    MOV dword ptr [EBX + 0x10a90],EAX   ; 004af3a4
    JMP 0x004af2aa                      ; 004af3aa
        ;   XREF to: 004af2aa (UNCONDITIONAL_JUMP)  ; LAB_004af2aa

