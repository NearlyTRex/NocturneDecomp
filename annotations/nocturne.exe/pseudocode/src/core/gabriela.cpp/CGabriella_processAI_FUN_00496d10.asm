; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gabriela_cpp_CGabriella_processAI_FUN_00496d10(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x12c]:4  local_12c
; undefined8       Stack[-0x128]:8  local_128
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined        Stack[-0xfc]:1  local_fc
; undefined        Stack[-0xe4]:1  local_e4
; undefined        Stack[-0xc0]:1  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_00495a20 at 0049628f
;
; Referenced Globals:
;   undefined4 DAT_00582082
;   undefined4 DAT_0058208a
;   undefined4 DAT_00582092
;   undefined4 DAT_0058209a
;   undefined4 DAT_005820a2
;   undefined4 DAT_005820aa
;   undefined4 DAT_005820b2
;   undefined4 DAT_005820b6
;   undefined4 DAT_005be368
;   undefined4 DAT_01cae0e8
;   undefined4 DAT_01e57284
;   undefined4 DAT_01fa3fe0
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_hero.cpp_CHero_closestEnemy_FUN_004b5d00
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
;   core_setcolid.cpp_CDemonSet_init_FUN_00511750
;   core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496d10
        ;   Label: core_gabriela.cpp_CGabriella_processAI_FUN_00496d10
    PUSH ESI                            ; 00496d11
    PUSH EDI                            ; 00496d12
    PUSH EBP                            ; 00496d13
    MOV EBP,ESP                         ; 00496d14
    SUB ESP,0x114                       ; 00496d16
    AND ESP,0xfffffff8                  ; 00496d1c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00496d1f
    PUSH 0x2c                           ; 00496d22
    PUSH 0x0                            ; 00496d24
    LEA EAX,[EBX + 0xbc94]              ; 00496d26
    MOV EDX,0x3e800000                  ; 00496d2c
    PUSH EAX                            ; 00496d31
    MOV dword ptr [ESP + 0x118],EDX     ; 00496d32
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00496d39
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    MOV ECX,dword ptr [EBX + 0x1fa38]   ; 00496d3e
    ADD ESP,0xc                         ; 00496d44
    TEST ECX,ECX                        ; 00496d47
    JZ 0x00496f15                       ; 00496d49
        ;   XREF to: 00496f15 (CONDITIONAL_JUMP)  ; LAB_00496f15
    MOV EAX,[0x01cae0e8]                ; 00496d4f | DAT_01cae0e8
    LEA EDX,[EBX + 0x20]                ; 00496d54
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 00496d57
    FLD float ptr [EDX]                 ; 00496d5e
    FSUB float ptr [EAX + 0x20]         ; 00496d60
    FSTP float ptr [ESP + 0xa4]         ; 00496d63
    FLD float ptr [EDX + 0x4]           ; 00496d6a
    FSUB float ptr [EAX + 0x24]         ; 00496d6d
    FST float ptr [ESP + 0xa8]          ; 00496d70
    FMUL float ptr [ESP + 0xa8]         ; 00496d77
    FLD float ptr [ESP + 0xa4]          ; 00496d7e
    FMUL ST0                            ; 00496d85
    FLD float ptr [EDX + 0x8]           ; 00496d87
    FSUB float ptr [EAX + 0x28]         ; 00496d8a
    FXCH                                ; 00496d8d
    FADDP ST2,ST0                       ; 00496d8f
    FST float ptr [ESP + 0xac]          ; 00496d91
    FMUL float ptr [ESP + 0xac]         ; 00496d98
    FADDP                               ; 00496d9f
    FSQRT                               ; 00496da1
    MOV ESI,dword ptr [EBX + 0x1fa38]   ; 00496da3
    FSTP float ptr [ESP + 0x8]          ; 00496da9
    CMP ESI,0x3                         ; 00496dad
    JZ 0x00496f1c                       ; 00496db0
        ;   XREF to: 00496f1c (CONDITIONAL_JUMP)  ; LAB_00496f1c
    FLD float ptr [ESP + 0x8]           ; 00496db6
        ;   Label: LAB_00496db6
    FCOMP double ptr [0x00582082]       ; 00496dba | DAT_00582082
    FNSTSW AX                           ; 00496dc0
    SAHF                                ; 00496dc2
    JNC 0x00497257                      ; 00496dc3
        ;   XREF to: 00497257 (CONDITIONAL_JUMP)  ; LAB_00497257
    MOV dword ptr [ESP + 0xc],0x461c3f9a ; 00496dc9
    MOV ECX,dword ptr [EBX + 0x1fa38]   ; 00496dd1
    XOR ESI,ESI                         ; 00496dd7
    CMP ECX,0x2                         ; 00496dd9
    JZ 0x00496de3                       ; 00496ddc
        ;   XREF to: 00496de3 (CONDITIONAL_JUMP)  ; LAB_00496de3
    CMP ECX,0x3                         ; 00496dde
    JNZ 0x00496df3                      ; 00496de1
        ;   XREF to: 00496df3 (CONDITIONAL_JUMP)  ; LAB_00496df3
    LEA EAX,[ESP + 0xc]                 ; 00496de3
        ;   Label: LAB_00496de3
    PUSH EAX                            ; 00496de7
    PUSH EBX                            ; 00496de8
    CALL core_hero.cpp_CHero_closestEnemy_FUN_004b5d00 ; 00496de9
        ;   XREF to: 004b5d00 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_CHero_closestEnemy_FUN_004b5d00()
    ADD ESP,0x8                         ; 00496dee
    MOV ESI,EAX                         ; 00496df1
    TEST ESI,ESI                        ; 00496df3
        ;   Label: LAB_00496df3
    JZ 0x0049721f                       ; 00496df5
        ;   XREF to: 0049721f (CONDITIONAL_JUMP)  ; LAB_0049721f
    FLD float ptr [ESP + 0xc]           ; 00496dfb
    FCOMP double ptr [0x0058209a]       ; 00496dff | DAT_0058209a
    FNSTSW AX                           ; 00496e05
    SAHF                                ; 00496e07
    JNC 0x0049721f                      ; 00496e08
        ;   XREF to: 0049721f (CONDITIONAL_JUMP)  ; LAB_0049721f
    CMP dword ptr [EBX + 0x1fa3c],0x0   ; 00496e0e
    JNZ 0x00496e37                      ; 00496e15
        ;   XREF to: 00496e37 (CONDITIONAL_JUMP)  ; LAB_00496e37
    LEA EAX,[EBX + 0x150]               ; 00496e17
    PUSH EAX                            ; 00496e1d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00496e1e
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00496e23
    ADD ESP,0x4                         ; 00496e26
    TEST EAX,EAX                        ; 00496e29
    JNZ 0x00496e37                      ; 00496e2b
        ;   XREF to: 00496e37 (CONDITIONAL_JUMP)  ; LAB_00496e37
    MOV dword ptr [EBX + 0xbcac],0x1    ; 00496e2d
    LEA EDX,[ESI + 0x20]                ; 00496e37
        ;   Label: LAB_00496e37
    LEA EAX,[EBX + 0x20]                ; 00496e3a
    FLD float ptr [EDX]                 ; 00496e3d
    FSUB float ptr [EAX]                ; 00496e3f
    FSTP float ptr [ESP + 0xbc]         ; 00496e41
    FLD float ptr [EDX + 0x4]           ; 00496e48
    FSUB float ptr [EAX + 0x4]          ; 00496e4b
    FSTP float ptr [ESP + 0xc0]         ; 00496e4e
    FLD float ptr [EDX + 0x8]           ; 00496e55
    FSUB float ptr [EAX + 0x8]          ; 00496e58
    LEA EAX,[ESP + 0xbc]                ; 00496e5b
    PUSH EAX                            ; 00496e62
    LEA EAX,[ESP + 0x48]                ; 00496e63
    PUSH EAX                            ; 00496e67
    FSTP float ptr [ESP + 0xcc]         ; 00496e68
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 00496e6f
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    FLD float ptr [EAX + 0x4]           ; 00496e74
    ADD ESP,0x8                         ; 00496e77
    FSUB float ptr [EBX + 0x34]         ; 00496e7a
    SUB ESP,0x4                         ; 00496e7d
    FSTP float ptr [ESP]                ; 00496e80
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 00496e83
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x114],EAX     ; 00496e88
    FLD float ptr [ESP + 0x114]         ; 00496e8f
    FMUL double ptr [0x0058208a]        ; 00496e96 | DAT_0058208a
    ADD ESP,0x4                         ; 00496e9c
    FMUL double ptr [0x00582082]        ; 00496e9f | DAT_00582082
    FLD float ptr [ESP + 0x10c]         ; 00496ea5
    FCHS                                ; 00496eac
    FSTP float ptr [ESP + 0x104]        ; 00496eae
    FST float ptr [EBX + 0xbcb8]        ; 00496eb5
    FCOMP float ptr [ESP + 0x104]       ; 00496ebb
    FNSTSW AX                           ; 00496ec2
    SAHF                                ; 00496ec4
    JNC 0x00496ed4                      ; 00496ec5
        ;   XREF to: 00496ed4 (CONDITIONAL_JUMP)  ; LAB_00496ed4
    MOV EAX,dword ptr [ESP + 0x104]     ; 00496ec7
    MOV dword ptr [EBX + 0xbcb8],EAX    ; 00496ece
    FLD float ptr [EBX + 0xbcb8]        ; 00496ed4
        ;   Label: LAB_00496ed4
    FCOMP float ptr [ESP + 0x10c]       ; 00496eda
    FNSTSW AX                           ; 00496ee1
    SAHF                                ; 00496ee3
    JBE 0x00496ef3                      ; 00496ee4
        ;   XREF to: 00496ef3 (CONDITIONAL_JUMP)  ; LAB_00496ef3
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00496ee6
    MOV dword ptr [EBX + 0xbcb8],EAX    ; 00496eed
    FLD float ptr [EBX + 0xbcb8]        ; 00496ef3
        ;   Label: LAB_00496ef3
    FST double ptr [ESP]                ; 00496ef9
    FCOMP double ptr [0x005820a2]       ; 00496efc | DAT_005820a2
    FNSTSW AX                           ; 00496f02
    SAHF                                ; 00496f04
    JBE 0x00496f15                      ; 00496f05
        ;   XREF to: 00496f15 (CONDITIONAL_JUMP)  ; LAB_00496f15
    FLD double ptr [ESP]                ; 00496f07
    FCOMP double ptr [0x005820aa]       ; 00496f0a | DAT_005820aa
    FNSTSW AX                           ; 00496f10
    SAHF                                ; 00496f12
    JC 0x00496f27                       ; 00496f13
        ;   XREF to: 00496f27 (CONDITIONAL_JUMP)  ; LAB_00496f27
    MOV ESP,EBP                         ; 00496f15
        ;   Label: LAB_00496f15
    POP EBP                             ; 00496f17
    POP EDI                             ; 00496f18
    POP ESI                             ; 00496f19
    POP EBX                             ; 00496f1a
    RET                                 ; 00496f1b
    XOR EDI,EDI                         ; 00496f1c
        ;   Label: LAB_00496f1c
    MOV dword ptr [ESP + 0x8],EDI       ; 00496f1e
    JMP 0x00496db6                      ; 00496f22
        ;   XREF to: 00496db6 (UNCONDITIONAL_JUMP)  ; LAB_00496db6
    LEA EDX,[ESP + 0x2c]                ; 00496f27
        ;   Label: LAB_00496f27
    PUSH EDX                            ; 00496f2b
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00496f2c
    PUSH EBX                            ; 00496f32
    CALL dword ptr [EAX + 0x14]         ; 00496f33
    LEA EDX,[EAX + 0xc]                 ; 00496f36
    FLD float ptr [EAX]                 ; 00496f39
    FADD float ptr [EDX]                ; 00496f3b
    ADD ESP,0x8                         ; 00496f3d
    FST float ptr [ESP + 0x50]          ; 00496f40
    FLD float ptr [EAX + 0x4]           ; 00496f44
    FADD float ptr [EDX + 0x4]          ; 00496f47
    FXCH                                ; 00496f4a
    FMUL float ptr [0x005820b2]         ; 00496f4c | DAT_005820b2
    FXCH                                ; 00496f52
    FST float ptr [ESP + 0x54]          ; 00496f54
    FLD float ptr [EAX + 0x8]           ; 00496f58
    FADD float ptr [EDX + 0x8]          ; 00496f5b
    FXCH                                ; 00496f5e
    FMUL float ptr [0x005820b2]         ; 00496f60 | DAT_005820b2
    FXCH                                ; 00496f66
    FST float ptr [ESP + 0x58]          ; 00496f68
    FMUL float ptr [0x005820b2]         ; 00496f6c | DAT_005820b2
    LEA EAX,[EBX + 0x20]                ; 00496f72
    FXCH ST2                            ; 00496f75
    FSTP float ptr [ESP + 0xd4]         ; 00496f77
    FSTP float ptr [ESP + 0xd8]         ; 00496f7e
    FSTP float ptr [ESP + 0xdc]         ; 00496f85
    FLD float ptr [EAX]                 ; 00496f8c
    FADD float ptr [ESP + 0xd4]         ; 00496f8e
    FSTP float ptr [ESP + 0xb0]         ; 00496f95
    FLD float ptr [EAX + 0x4]           ; 00496f9c
    FADD float ptr [ESP + 0xd8]         ; 00496f9f
    FSTP float ptr [ESP + 0xb4]         ; 00496fa6
    FLD float ptr [EAX + 0x8]           ; 00496fad
    LEA EAX,[ESP + 0x14]                ; 00496fb0
    PUSH EAX                            ; 00496fb4
    FADD float ptr [ESP + 0xe0]         ; 00496fb5
    PUSH ESI                            ; 00496fbc
    FSTP float ptr [ESP + 0xc0]         ; 00496fbd
    MOV EDX,dword ptr [ESI + 0x14c]     ; 00496fc4
    CALL dword ptr [EDX + 0x14]         ; 00496fca
    LEA EDX,[EAX + 0xc]                 ; 00496fcd
    FLD float ptr [EAX]                 ; 00496fd0
    FADD float ptr [EDX]                ; 00496fd2
    ADD ESP,0x8                         ; 00496fd4
    FST float ptr [ESP + 0xf8]          ; 00496fd7
    FLD float ptr [EAX + 0x4]           ; 00496fde
    FADD float ptr [EDX + 0x4]          ; 00496fe1
    FXCH                                ; 00496fe4
    FMUL float ptr [0x005820b2]         ; 00496fe6 | DAT_005820b2
    FXCH                                ; 00496fec
    FST float ptr [ESP + 0xfc]          ; 00496fee
    FLD float ptr [EAX + 0x8]           ; 00496ff5
    FADD float ptr [EDX + 0x8]          ; 00496ff8
    FXCH                                ; 00496ffb
    FMUL float ptr [0x005820b2]         ; 00496ffd | DAT_005820b2
    FXCH                                ; 00497003
    FST float ptr [ESP + 0x100]         ; 00497005
    FMUL float ptr [0x005820b2]         ; 0049700c | DAT_005820b2
    LEA EAX,[ESI + 0x20]                ; 00497012
    FXCH ST2                            ; 00497015
    FSTP float ptr [ESP + 0xc8]         ; 00497017
    FSTP float ptr [ESP + 0xcc]         ; 0049701e
    FSTP float ptr [ESP + 0xd0]         ; 00497025
    FLD float ptr [EAX]                 ; 0049702c
    FADD float ptr [ESP + 0xc8]         ; 0049702e
    FST float ptr [ESP + 0xe0]          ; 00497035
    FLD float ptr [EAX + 0x4]           ; 0049703c
    FADD float ptr [ESP + 0xcc]         ; 0049703f
    FXCH                                ; 00497046
    FSUB float ptr [ESP + 0xb0]         ; 00497048
    FXCH                                ; 0049704f
    FST float ptr [ESP + 0xe4]          ; 00497051
    FSUB float ptr [ESP + 0xb4]         ; 00497058
    FLD float ptr [EAX + 0x8]           ; 0049705f
    FXCH                                ; 00497062
    FST float ptr [ESP + 0x60]          ; 00497064
    FMUL float ptr [ESP + 0x60]         ; 00497068
    FXCH ST2                            ; 0049706c
    FSTP float ptr [ESP + 0x5c]         ; 0049706e
    FADD float ptr [ESP + 0xd0]         ; 00497072
    FLD float ptr [ESP + 0x5c]          ; 00497079
    FMUL ST0                            ; 0049707d
    FXCH                                ; 0049707f
    FST float ptr [ESP + 0xe8]          ; 00497081
    FSUB float ptr [ESP + 0xb8]         ; 00497088
    FXCH                                ; 0049708f
    FADDP ST2,ST0                       ; 00497091
    FST float ptr [ESP + 0x64]          ; 00497093
    FMUL float ptr [ESP + 0x64]         ; 00497097
    FADDP                               ; 0049709b
    FSQRT                               ; 0049709d
    FST float ptr [ESP + 0x10]          ; 0049709f
    FLDZ                                ; 004970a3
    FCOMPP                              ; 004970a5
    FNSTSW AX                           ; 004970a7
    SAHF                                ; 004970a9
    JNC 0x0049720c                      ; 004970aa
        ;   XREF to: 0049720c (CONDITIONAL_JUMP)  ; LAB_0049720c
    FLD1                                ; 004970b0
    FLD float ptr [ESP + 0x5c]          ; 004970b2
    FXCH                                ; 004970b6
    FDIV float ptr [ESP + 0x10]         ; 004970b8
    FXCH                                ; 004970bc
    FMUL ST1                            ; 004970be
    FLD float ptr [ESP + 0x60]          ; 004970c0
    FMUL ST2                            ; 004970c4
    FLD float ptr [ESP + 0x64]          ; 004970c6
    FMULP ST3                           ; 004970ca
    FXCH                                ; 004970cc
    FSTP float ptr [ESP + 0x5c]         ; 004970ce
    FSTP float ptr [ESP + 0x60]         ; 004970d2
    FSTP float ptr [ESP + 0x64]         ; 004970d6
    FLD float ptr [0x005820b6]          ; 004970da | DAT_005820b6
        ;   Label: LAB_004970da
    FLD float ptr [ESP + 0x5c]          ; 004970e0
    FMUL ST1                            ; 004970e4
    FLD float ptr [ESP + 0x60]          ; 004970e6
    FMUL ST2                            ; 004970ea
    FLD float ptr [ESP + 0x64]          ; 004970ec
    FMULP ST3                           ; 004970f0
    FLD float ptr [ESP + 0xe0]          ; 004970f2
    FLD float ptr [ESP + 0xe4]          ; 004970f9
    FLD float ptr [ESP + 0xe8]          ; 00497100
    LEA EDX,[ESP + 0x80]                ; 00497107
    LEA EAX,[ESP + 0xe0]                ; 0049710e
    FXCH ST4                            ; 00497115
    FSTP float ptr [ESP + 0xec]         ; 00497117
    FXCH ST2                            ; 0049711e
    FSTP float ptr [ESP + 0xf0]         ; 00497120
    FXCH ST3                            ; 00497127
    FSTP float ptr [ESP + 0xf4]         ; 00497129
    FXCH ST2                            ; 00497130
    FADD float ptr [ESP + 0xec]         ; 00497132
    FXCH ST2                            ; 00497139
    FADD float ptr [ESP + 0xf0]         ; 0049713b
    FXCH                                ; 00497142
    FADD float ptr [ESP + 0xf4]         ; 00497144
    FXCH ST2                            ; 0049714b
    FSTP float ptr [ESP + 0x80]         ; 0049714d
    FSTP float ptr [ESP + 0x84]         ; 00497154
    FSTP float ptr [ESP + 0x88]         ; 0049715b
    CMP EAX,EDX                         ; 00497162
    JZ 0x00497190                       ; 00497164
        ;   XREF to: 00497190 (CONDITIONAL_JUMP)  ; LAB_00497190
    MOV EAX,dword ptr [ESP + 0x80]      ; 00497166
    MOV dword ptr [ESP + 0xe0],EAX      ; 0049716d
    MOV EAX,dword ptr [ESP + 0x84]      ; 00497174
    MOV dword ptr [ESP + 0xe4],EAX      ; 0049717b
    MOV EAX,dword ptr [ESP + 0x88]      ; 00497182
    MOV dword ptr [ESP + 0xe8],EAX      ; 00497189
    PUSH 0x1                            ; 00497190
        ;   Label: LAB_00497190
    MOV EDX,dword ptr [0x005be368]      ; 00497192 | DAT_005be368
    PUSH EDX                            ; 00497198 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800 ; 00497199
        ;   XREF to: 00511800 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_setRayType_FUN_00511800()
    ADD ESP,0x8                         ; 0049719e
    PUSH EBX                            ; 004971a1
    MOV ECX,dword ptr [0x005be368]      ; 004971a2 | DAT_005be368
    PUSH ECX                            ; 004971a8 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 004971a9
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    ADD ESP,0x8                         ; 004971ae
    LEA EDX,[ESP + 0xe0]                ; 004971b1
    PUSH EDX                            ; 004971b8
    LEA EDX,[ESP + 0xb4]                ; 004971b9
    PUSH EDX                            ; 004971c0
    MOV EAX,[0x005be368]                ; 004971c1 | DAT_005be368
    PUSH EAX                            ; 004971c6 | DAT_01e57284
    MOV dword ptr [EAX + 0x14cd5c],0x0  ; 004971c7 | DAT_01fa3fe0
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00 ; 004971d1
        ;   XREF to: 0050fb00 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_raycast_FUN_0050fb00()
    ADD ESP,0xc                         ; 004971d6
    MOV EDI,dword ptr [0x005be368]      ; 004971d9 | DAT_005be368
    PUSH EDI                            ; 004971df | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 004971e0
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_init_FUN_00511750()
    MOV EAX,[0x005be368]                ; 004971e5 | DAT_005be368 | DAT_01e57284
    MOV EDX,dword ptr [EAX + 0x14cd5c]  ; 004971ea | DAT_01fa3fe0
    ADD ESP,0x4                         ; 004971f0
    CMP ESI,EDX                         ; 004971f3
    JNZ 0x00496f15                      ; 004971f5
        ;   XREF to: 00496f15 (CONDITIONAL_JUMP)  ; LAB_00496f15
    MOV dword ptr [EBX + 0xbca0],0x1    ; 004971fb
    MOV ESP,EBP                         ; 00497205
    POP EBP                             ; 00497207
    POP EDI                             ; 00497208
    POP ESI                             ; 00497209
    POP EBX                             ; 0049720a
    RET                                 ; 0049720b
    XOR ECX,ECX                         ; 0049720c
        ;   Label: LAB_0049720c
    MOV dword ptr [ESP + 0x60],ECX      ; 0049720e
    MOV dword ptr [ESP + 0x5c],ECX      ; 00497212
    MOV dword ptr [ESP + 0x64],ECX      ; 00497216
    JMP 0x004970da                      ; 0049721a
        ;   XREF to: 004970da (UNCONDITIONAL_JUMP)  ; LAB_004970da
    CMP dword ptr [EBX + 0x1fa3c],0x0   ; 0049721f
        ;   Label: LAB_0049721f
    JZ 0x00496f15                       ; 00497226
        ;   XREF to: 00496f15 (CONDITIONAL_JUMP)  ; LAB_00496f15
    LEA EAX,[EBX + 0x150]               ; 0049722c
    PUSH EAX                            ; 00497232
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00497233
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00497238
    ADD ESP,0x4                         ; 0049723b
    TEST EAX,EAX                        ; 0049723e
    JNZ 0x00496f15                      ; 00497240
        ;   XREF to: 00496f15 (CONDITIONAL_JUMP)  ; LAB_00496f15
    MOV dword ptr [EBX + 0xbcac],0x1    ; 00497246
    MOV ESP,EBP                         ; 00497250
    POP EBP                             ; 00497252
    POP EDI                             ; 00497253
    POP ESI                             ; 00497254
    POP EBX                             ; 00497255
    RET                                 ; 00497256
    MOV EAX,[0x01cae0e8]                ; 00497257 | DAT_01cae0e8
        ;   Label: LAB_00497257
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0049725c
    LEA EDX,[EAX + 0xbcc0]              ; 00497263
    MOV EAX,dword ptr [EBX + 0x6c]      ; 00497269
    PUSH EAX                            ; 0049726c
    LEA EAX,[ESP + 0x6c]                ; 0049726d
    PUSH EAX                            ; 00497271
    LEA EAX,[EBX + 0x20]                ; 00497272
    PUSH EAX                            ; 00497275
    PUSH EDX                            ; 00497276
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600 ; 00497277
        ;   XREF to: 004f1600 (UNCONDITIONAL_CALL)  ; undefined core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600()
    ADD ESP,0x10                        ; 0049727c
    TEST EAX,EAX                        ; 0049727f
    JZ 0x00496f15                       ; 00497281
        ;   XREF to: 00496f15 (CONDITIONAL_JUMP)  ; LAB_00496f15
    FLD float ptr [ESP + 0x6c]          ; 00497287
    FSUB float ptr [EBX + 0x34]         ; 0049728b
    SUB ESP,0x4                         ; 0049728e
    FSTP float ptr [ESP]                ; 00497291
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 00497294
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x114],EAX     ; 00497299
    FLD float ptr [ESP + 0x114]         ; 004972a0
    FMUL double ptr [0x0058208a]        ; 004972a7 | DAT_0058208a
    ADD ESP,0x4                         ; 004972ad
    FMUL double ptr [0x00582082]        ; 004972b0 | DAT_00582082
    FLD float ptr [ESP + 0x10c]         ; 004972b6
    FCHS                                ; 004972bd
    FSTP float ptr [ESP + 0x108]        ; 004972bf
    FST float ptr [EBX + 0xbcb8]        ; 004972c6
    FCOMP float ptr [ESP + 0x108]       ; 004972cc
    FNSTSW AX                           ; 004972d3
    SAHF                                ; 004972d5
    JC 0x004973a2                       ; 004972d6
        ;   XREF to: 004973a2 (CONDITIONAL_JUMP)  ; LAB_004973a2
    FLD float ptr [EBX + 0xbcb8]        ; 004972dc
        ;   Label: LAB_004972dc
    FCOMP float ptr [ESP + 0x10c]       ; 004972e2
    FNSTSW AX                           ; 004972e9
    SAHF                                ; 004972eb
    JBE 0x004972fb                      ; 004972ec
        ;   XREF to: 004972fb (CONDITIONAL_JUMP)  ; LAB_004972fb
    MOV EAX,dword ptr [ESP + 0x10c]     ; 004972ee
    MOV dword ptr [EBX + 0xbcb8],EAX    ; 004972f5
    MOV EAX,[0x01cae0e8]                ; 004972fb | DAT_01cae0e8
        ;   Label: LAB_004972fb
    MOV dword ptr [EBX + 0xbc94],0x1    ; 00497300
    LEA EDX,[EBX + 0x20]                ; 0049730a
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 0049730d
    FLD float ptr [EDX]                 ; 00497314
    FSUB float ptr [EAX + 0x20]         ; 00497316
    FSTP float ptr [ESP + 0x74]         ; 00497319
    FLD float ptr [EDX + 0x4]           ; 0049731d
    FSUB float ptr [EAX + 0x24]         ; 00497320
    FSTP float ptr [ESP + 0x78]         ; 00497323
    FLD float ptr [EDX + 0x8]           ; 00497327
    LEA EDX,[ESP + 0x74]                ; 0049732a
    FSUB float ptr [EAX + 0x28]         ; 0049732e
    LEA EAX,[ESP + 0x8c]                ; 00497331
    FSTP float ptr [ESP + 0x7c]         ; 00497338
    CMP EAX,EDX                         ; 0049733c
    JZ 0x00497361                       ; 0049733e
        ;   XREF to: 00497361 (CONDITIONAL_JUMP)  ; LAB_00497361
    MOV EAX,dword ptr [ESP + 0x74]      ; 00497340
    MOV dword ptr [ESP + 0x8c],EAX      ; 00497344
    MOV EAX,dword ptr [ESP + 0x78]      ; 0049734b
    MOV dword ptr [ESP + 0x90],EAX      ; 0049734f
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00497356
    MOV dword ptr [ESP + 0x94],EAX      ; 0049735a
    FLD float ptr [ESP + 0x90]          ; 00497361
        ;   Label: LAB_00497361
    FMUL ST0                            ; 00497368
    FLD float ptr [ESP + 0x8c]          ; 0049736a
    FMUL ST0                            ; 00497371
    FADDP                               ; 00497373
    FLD float ptr [ESP + 0x94]          ; 00497375
    FMUL ST0                            ; 0049737c
    FADDP                               ; 0049737e
    FSQRT                               ; 00497380
    FCOMP double ptr [0x00582092]       ; 00497382 | DAT_00582092
    FNSTSW AX                           ; 00497388
    SAHF                                ; 0049738a
    JBE 0x00496f15                      ; 0049738b
        ;   XREF to: 00496f15 (CONDITIONAL_JUMP)  ; LAB_00496f15
    MOV dword ptr [EBX + 0xbc9c],0x1    ; 00497391
    MOV ESP,EBP                         ; 0049739b
    POP EBP                             ; 0049739d
    POP EDI                             ; 0049739e
    POP ESI                             ; 0049739f
    POP EBX                             ; 004973a0
    RET                                 ; 004973a1
    MOV EAX,dword ptr [ESP + 0x108]     ; 004973a2
        ;   Label: LAB_004973a2
    MOV dword ptr [EBX + 0xbcb8],EAX    ; 004973a9
    JMP 0x004972dc                      ; 004973af
        ;   XREF to: 004972dc (UNCONDITIONAL_JUMP)  ; LAB_004972dc

