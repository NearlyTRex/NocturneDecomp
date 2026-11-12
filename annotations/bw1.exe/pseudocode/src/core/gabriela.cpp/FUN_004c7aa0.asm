; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gabriela_cpp_FUN_004c7aa0(CDemonActor *param_1)
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
;   core_gabriela.cpp_CGabriella_process_FUN_004c65f0 at 004c6f02
;
; Referenced Globals:
;   undefined4 DAT_005e103c
;   undefined4 DAT_005e1044
;   undefined4 DAT_005e104c
;   undefined4 DAT_005e1054
;   undefined4 DAT_005e105c
;   undefined4 DAT_005e1064
;   undefined4 DAT_005e106c
;   undefined4 DAT_005e1070
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01d06ab4
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.collision_actor
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_hero.cpp_FUN_004ec350
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0
;   core_setcolid.cpp_FUN_00557300
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c7aa0
        ;   Label: core_gabriela.cpp_FUN_004c7aa0
    PUSH ESI                            ; 004c7aa1
    PUSH EDI                            ; 004c7aa2
    PUSH EBP                            ; 004c7aa3
    MOV EBP,ESP                         ; 004c7aa4
    SUB ESP,0x1dc                       ; 004c7aa6
    AND ESP,0xfffffff8                  ; 004c7aac
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c7aaf
    PUSH 0x30                           ; 004c7ab2
    PUSH 0x0                            ; 004c7ab4
    LEA EAX,[EBX + 0xc1d8]              ; 004c7ab6
    MOV EDX,0x3e800000                  ; 004c7abc
    PUSH EAX                            ; 004c7ac1
    MOV dword ptr [ESP + 0x1dc],EDX     ; 004c7ac2
    CALL crt_memory.c_memset_FUN_005bfb70 ; 004c7ac9
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    MOV ECX,dword ptr [EBX + 0x1ffa8]   ; 004c7ace
    ADD ESP,0xc                         ; 004c7ad4
    TEST ECX,ECX                        ; 004c7ad7
    JZ 0x004c7d0b                       ; 004c7ad9
        ;   XREF to: 004c7d0b (CONDITIONAL_JUMP)  ; LAB_004c7d0b
    LEA EDI,[ESP + 0x124]               ; 004c7adf
    LEA EDX,[EBX + 0x20]                ; 004c7ae6
    LEA ESI,[ESP + 0x88]                ; 004c7ae9
    MOV EAX,[0x01d06ab4]                ; 004c7af0 | DAT_01d06ab4
    FLD float ptr [EDX]                 ; 004c7af5
    FLD float ptr [EDX + 0x4]           ; 004c7af7
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004c7afa
    FLD float ptr [EDX + 0x8]           ; 004c7b01
    FXCH ST2                            ; 004c7b04
    FSUB float ptr [EAX + 0x20]         ; 004c7b06
    FXCH                                ; 004c7b09
    FSUB float ptr [EAX + 0x24]         ; 004c7b0b
    FXCH ST2                            ; 004c7b0e
    FSUB float ptr [EAX + 0x28]         ; 004c7b10
    FXCH                                ; 004c7b13
    FSTP float ptr [ESP + 0x88]         ; 004c7b15
    FXCH                                ; 004c7b1c
    FSTP float ptr [ESP + 0x8c]         ; 004c7b1e
    FSTP float ptr [ESP + 0x90]         ; 004c7b25
    MOVSD ES:EDI,ESI                    ; 004c7b2c
    MOVSD ES:EDI,ESI                    ; 004c7b2d
    MOVSD ES:EDI,ESI                    ; 004c7b2e
    FLD float ptr [ESP + 0x128]         ; 004c7b2f
    FMUL ST0                            ; 004c7b36
    FLD float ptr [ESP + 0x124]         ; 004c7b38
    FMUL ST0                            ; 004c7b3f
    FADDP                               ; 004c7b41
    FLD float ptr [ESP + 0x12c]         ; 004c7b43
    FMUL ST0                            ; 004c7b4a
    FADDP                               ; 004c7b4c
    FSQRT                               ; 004c7b4e
    MOV ESI,dword ptr [EBX + 0x1ffa8]   ; 004c7b50
    FSTP float ptr [ESP + 0x8]          ; 004c7b56
    CMP ESI,0x3                         ; 004c7b5a
    JZ 0x004c7d12                       ; 004c7b5d
        ;   XREF to: 004c7d12 (CONDITIONAL_JUMP)  ; LAB_004c7d12
    FLD float ptr [ESP + 0x8]           ; 004c7b63
        ;   Label: LAB_004c7b63
    FCOMP double ptr [0x005e103c]       ; 004c7b67 | DAT_005e103c
    FNSTSW AX                           ; 004c7b6d
    SAHF                                ; 004c7b6f
    JNC 0x004c81bf                      ; 004c7b70
        ;   XREF to: 004c81bf (CONDITIONAL_JUMP)  ; LAB_004c81bf
    MOV dword ptr [ESP + 0xc],0x461c3f9a ; 004c7b76
    XOR EDX,EDX                         ; 004c7b7e
    MOV ESI,dword ptr [EBX + 0x1ffa8]   ; 004c7b80
    MOV dword ptr [ESP + 0x1d4],EDX     ; 004c7b86
    CMP ESI,0x2                         ; 004c7b8d
    JZ 0x004c7b97                       ; 004c7b90
        ;   XREF to: 004c7b97 (CONDITIONAL_JUMP)  ; LAB_004c7b97
    CMP ESI,0x3                         ; 004c7b92
    JNZ 0x004c7bac                      ; 004c7b95
        ;   XREF to: 004c7bac (CONDITIONAL_JUMP)  ; LAB_004c7bac
    LEA EAX,[ESP + 0xc]                 ; 004c7b97
        ;   Label: LAB_004c7b97
    PUSH EAX                            ; 004c7b9b
    PUSH EBX                            ; 004c7b9c
    CALL core_hero.cpp_FUN_004ec350     ; 004c7b9d
        ;   XREF to: 004ec350 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004ec350()
    ADD ESP,0x8                         ; 004c7ba2
    MOV dword ptr [ESP + 0x1d4],EAX     ; 004c7ba5
    CMP dword ptr [ESP + 0x1d4],0x0     ; 004c7bac
        ;   Label: LAB_004c7bac
    JZ 0x004c8187                       ; 004c7bb4
        ;   XREF to: 004c8187 (CONDITIONAL_JUMP)  ; LAB_004c8187
    FLD float ptr [ESP + 0xc]           ; 004c7bba
    FCOMP double ptr [0x005e1054]       ; 004c7bbe | DAT_005e1054
    FNSTSW AX                           ; 004c7bc4
    SAHF                                ; 004c7bc6
    JNC 0x004c8187                      ; 004c7bc7
        ;   XREF to: 004c8187 (CONDITIONAL_JUMP)  ; LAB_004c8187
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 004c7bcd
    JNZ 0x004c7bf6                      ; 004c7bd4
        ;   XREF to: 004c7bf6 (CONDITIONAL_JUMP)  ; LAB_004c7bf6
    LEA EAX,[EBX + 0x158]               ; 004c7bd6
    PUSH EAX                            ; 004c7bdc
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004c7bdd
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c7be2
    ADD ESP,0x4                         ; 004c7be5
    TEST EAX,EAX                        ; 004c7be8
    JNZ 0x004c7bf6                      ; 004c7bea
        ;   XREF to: 004c7bf6 (CONDITIONAL_JUMP)  ; LAB_004c7bf6
    MOV dword ptr [EBX + 0xc1f0],0x1    ; 004c7bec
    MOV EDX,dword ptr [ESP + 0x1d4]     ; 004c7bf6
        ;   Label: LAB_004c7bf6
    LEA EDI,[ESP + 0xc4]                ; 004c7bfd
    LEA ESI,[ESP + 0xb8]                ; 004c7c04
    LEA EAX,[EBX + 0x20]                ; 004c7c0b
    FLD float ptr [EDX + 0x20]          ; 004c7c0e
    FLD float ptr [EDX + 0x24]          ; 004c7c11
    FLD float ptr [EDX + 0x28]          ; 004c7c14
    FXCH ST2                            ; 004c7c17
    FSUB float ptr [EAX]                ; 004c7c19
    FXCH                                ; 004c7c1b
    FSUB float ptr [EAX + 0x4]          ; 004c7c1d
    FXCH ST2                            ; 004c7c20
    FSUB float ptr [EAX + 0x8]          ; 004c7c22
    FXCH                                ; 004c7c25
    FSTP float ptr [ESP + 0xb8]         ; 004c7c27
    FXCH                                ; 004c7c2e
    FSTP float ptr [ESP + 0xbc]         ; 004c7c30
    FSTP float ptr [ESP + 0xc0]         ; 004c7c37
    LEA EAX,[ESP + 0xc4]                ; 004c7c3e
    MOVSD ES:EDI,ESI                    ; 004c7c45
    MOVSD ES:EDI,ESI                    ; 004c7c46
    MOVSD ES:EDI,ESI                    ; 004c7c47
    PUSH EAX                            ; 004c7c48
    LEA ESI,[ESP + 0x188]               ; 004c7c49
    LEA EDI,[ESP + 0x80]                ; 004c7c50
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004c7c57
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x188]               ; 004c7c5c
    ADD ESP,0x4                         ; 004c7c63
    MOVSD ES:EDI,ESI                    ; 004c7c66
    MOVSD ES:EDI,ESI                    ; 004c7c67
    MOVSD ES:EDI,ESI                    ; 004c7c68
    FLD float ptr [ESP + 0x80]          ; 004c7c69
    FSUB float ptr [EBX + 0x34]         ; 004c7c70
    SUB ESP,0x4                         ; 004c7c73
    FSTP float ptr [ESP]                ; 004c7c76
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004c7c79
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x1dc],EAX     ; 004c7c7e
    FLD float ptr [ESP + 0x1dc]         ; 004c7c85
    FMUL float ptr [0x005e1044]         ; 004c7c8c | DAT_005e1044
    ADD ESP,0x4                         ; 004c7c92
    FMUL double ptr [0x005e103c]        ; 004c7c95 | DAT_005e103c
    FLD float ptr [ESP + 0x1d0]         ; 004c7c9b
    FCHS                                ; 004c7ca2
    FSTP float ptr [ESP + 0x1c8]        ; 004c7ca4
    FST float ptr [EBX + 0xc200]        ; 004c7cab
    FCOMP float ptr [ESP + 0x1c8]       ; 004c7cb1
    FNSTSW AX                           ; 004c7cb8
    SAHF                                ; 004c7cba
    JNC 0x004c7cca                      ; 004c7cbb
        ;   XREF to: 004c7cca (CONDITIONAL_JUMP)  ; LAB_004c7cca
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 004c7cbd
    MOV dword ptr [EBX + 0xc200],EAX    ; 004c7cc4
    FLD float ptr [EBX + 0xc200]        ; 004c7cca
        ;   Label: LAB_004c7cca
    FCOMP float ptr [ESP + 0x1d0]       ; 004c7cd0
    FNSTSW AX                           ; 004c7cd7
    SAHF                                ; 004c7cd9
    JBE 0x004c7ce9                      ; 004c7cda
        ;   XREF to: 004c7ce9 (CONDITIONAL_JUMP)  ; LAB_004c7ce9
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 004c7cdc
    MOV dword ptr [EBX + 0xc200],EAX    ; 004c7ce3
    FLD float ptr [EBX + 0xc200]        ; 004c7ce9
        ;   Label: LAB_004c7ce9
    FST double ptr [ESP]                ; 004c7cef
    FCOMP double ptr [0x005e105c]       ; 004c7cf2 | DAT_005e105c
    FNSTSW AX                           ; 004c7cf8
    SAHF                                ; 004c7cfa
    JBE 0x004c7d0b                      ; 004c7cfb
        ;   XREF to: 004c7d0b (CONDITIONAL_JUMP)  ; LAB_004c7d0b
    FLD double ptr [ESP]                ; 004c7cfd
    FCOMP double ptr [0x005e1064]       ; 004c7d00 | DAT_005e1064
    FNSTSW AX                           ; 004c7d06
    SAHF                                ; 004c7d08
    JC 0x004c7d1d                       ; 004c7d09
        ;   XREF to: 004c7d1d (CONDITIONAL_JUMP)  ; LAB_004c7d1d
    MOV ESP,EBP                         ; 004c7d0b
        ;   Label: LAB_004c7d0b
    POP EBP                             ; 004c7d0d
    POP EDI                             ; 004c7d0e
    POP ESI                             ; 004c7d0f
    POP EBX                             ; 004c7d10
    RET                                 ; 004c7d11
    XOR EDI,EDI                         ; 004c7d12
        ;   Label: LAB_004c7d12
    MOV dword ptr [ESP + 0x8],EDI       ; 004c7d14
    JMP 0x004c7b63                      ; 004c7d18
        ;   XREF to: 004c7b63 (UNCONDITIONAL_JUMP)  ; LAB_004c7b63
    PUSH EBX                            ; 004c7d1d
        ;   Label: LAB_004c7d1d
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c7d1e
    LEA ESI,[ESP + 0x5c]                ; 004c7d24
    LEA EDI,[ESP + 0x44]                ; 004c7d28
    CALL dword ptr [EAX + 0x1c]         ; 004c7d2c
    MOV ECX,0x6                         ; 004c7d2f
    LEA ESI,[ESP + 0x5c]                ; 004c7d34
    ADD ESP,0x4                         ; 004c7d38
    MOVSD.REP ES:EDI,ESI                ; 004c7d3b
    LEA EAX,[ESP + 0x40]                ; 004c7d3d
    FLD float ptr [ESP + 0x40]          ; 004c7d41
    FLD float ptr [ESP + 0x44]          ; 004c7d45
    FLD float ptr [ESP + 0x48]          ; 004c7d49
    LEA EDI,[ESP + 0x94]                ; 004c7d4d
    LEA ESI,[ESP + 0x1b4]               ; 004c7d54
    FXCH ST2                            ; 004c7d5b
    FADD float ptr [EAX + 0xc]          ; 004c7d5d
    FXCH                                ; 004c7d60
    FADD float ptr [EAX + 0x10]         ; 004c7d62
    FXCH ST2                            ; 004c7d65
    FADD float ptr [EAX + 0x14]         ; 004c7d67
    FXCH                                ; 004c7d6a
    FSTP float ptr [ESP + 0x1b4]        ; 004c7d6c
    FXCH                                ; 004c7d73
    FSTP float ptr [ESP + 0x1b8]        ; 004c7d75
    FSTP float ptr [ESP + 0x1bc]        ; 004c7d7c
    MOVSD ES:EDI,ESI                    ; 004c7d83
    MOVSD ES:EDI,ESI                    ; 004c7d84
    MOVSD ES:EDI,ESI                    ; 004c7d85
    FLD float ptr [ESP + 0x94]          ; 004c7d86
    FMUL float ptr [0x005e106c]         ; 004c7d8d | DAT_005e106c
    FLD float ptr [ESP + 0x98]          ; 004c7d93
    FMUL float ptr [0x005e106c]         ; 004c7d9a | DAT_005e106c
    FLD float ptr [ESP + 0x9c]          ; 004c7da0
    FMUL float ptr [0x005e106c]         ; 004c7da7 | DAT_005e106c
    LEA EAX,[EBX + 0x20]                ; 004c7dad
    LEA EDI,[ESP + 0x10c]               ; 004c7db0
    LEA ESI,[ESP + 0xf4]                ; 004c7db7
    FXCH ST2                            ; 004c7dbe
    FSTP float ptr [ESP + 0xf4]         ; 004c7dc0
    FSTP float ptr [ESP + 0xf8]         ; 004c7dc7
    FSTP float ptr [ESP + 0xfc]         ; 004c7dce
    MOVSD ES:EDI,ESI                    ; 004c7dd5
    MOVSD ES:EDI,ESI                    ; 004c7dd6
    MOVSD ES:EDI,ESI                    ; 004c7dd7
    FLD float ptr [EAX]                 ; 004c7dd8
    FLD float ptr [EAX + 0x4]           ; 004c7dda
    FLD float ptr [EAX + 0x8]           ; 004c7ddd
    LEA EDI,[ESP + 0xa0]                ; 004c7de0
    LEA ESI,[ESP + 0x148]               ; 004c7de7
    FXCH ST2                            ; 004c7dee
    FADD float ptr [ESP + 0x10c]        ; 004c7df0
    FXCH                                ; 004c7df7
    FADD float ptr [ESP + 0x110]        ; 004c7df9
    FXCH ST2                            ; 004c7e00
    FADD float ptr [ESP + 0x114]        ; 004c7e02
    FXCH                                ; 004c7e09
    FSTP float ptr [ESP + 0x148]        ; 004c7e0b
    FXCH                                ; 004c7e12
    FSTP float ptr [ESP + 0x14c]        ; 004c7e14
    FSTP float ptr [ESP + 0x150]        ; 004c7e1b
    MOVSD ES:EDI,ESI                    ; 004c7e22
    MOVSD ES:EDI,ESI                    ; 004c7e23
    MOVSD ES:EDI,ESI                    ; 004c7e24
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 004c7e25
    MOV ESI,dword ptr [ESP + 0x1d4]     ; 004c7e2c
    MOV EAX,dword ptr [EAX + 0x154]     ; 004c7e33
    PUSH ESI                            ; 004c7e39
    LEA ESI,[ESP + 0x14]                ; 004c7e3a
    LEA EDI,[ESP + 0x2c]                ; 004c7e3e
    CALL dword ptr [EAX + 0x1c]         ; 004c7e42
    MOV ECX,0x6                         ; 004c7e45
    LEA ESI,[ESP + 0x14]                ; 004c7e4a
    ADD ESP,0x4                         ; 004c7e4e
    MOVSD.REP ES:EDI,ESI                ; 004c7e51
    LEA EAX,[ESP + 0x28]                ; 004c7e53
    FLD float ptr [ESP + 0x28]          ; 004c7e57
    FLD float ptr [ESP + 0x2c]          ; 004c7e5b
    FLD float ptr [ESP + 0x30]          ; 004c7e5f
    LEA EDI,[ESP + 0xe8]                ; 004c7e63
    LEA ESI,[ESP + 0x100]               ; 004c7e6a
    FXCH ST2                            ; 004c7e71
    FADD float ptr [EAX + 0xc]          ; 004c7e73
    FXCH                                ; 004c7e76
    FADD float ptr [EAX + 0x10]         ; 004c7e78
    FXCH ST2                            ; 004c7e7b
    FADD float ptr [EAX + 0x14]         ; 004c7e7d
    FXCH                                ; 004c7e80
    FSTP float ptr [ESP + 0x100]        ; 004c7e82
    FXCH                                ; 004c7e89
    FSTP float ptr [ESP + 0x104]        ; 004c7e8b
    FSTP float ptr [ESP + 0x108]        ; 004c7e92
    MOVSD ES:EDI,ESI                    ; 004c7e99
    MOVSD ES:EDI,ESI                    ; 004c7e9a
    MOVSD ES:EDI,ESI                    ; 004c7e9b
    FLD float ptr [ESP + 0xe8]          ; 004c7e9c
    FMUL float ptr [0x005e106c]         ; 004c7ea3 | DAT_005e106c
    FLD float ptr [ESP + 0xec]          ; 004c7ea9
    FMUL float ptr [0x005e106c]         ; 004c7eb0 | DAT_005e106c
    FLD float ptr [ESP + 0xf0]          ; 004c7eb6
    FMUL float ptr [0x005e106c]         ; 004c7ebd | DAT_005e106c
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 004c7ec3
    LEA EDI,[ESP + 0x190]               ; 004c7eca
    LEA ESI,[ESP + 0x70]                ; 004c7ed1
    FXCH ST2                            ; 004c7ed5
    FSTP float ptr [ESP + 0x70]         ; 004c7ed7
    FSTP float ptr [ESP + 0x74]         ; 004c7edb
    FSTP float ptr [ESP + 0x78]         ; 004c7edf
    MOVSD ES:EDI,ESI                    ; 004c7ee3
    MOVSD ES:EDI,ESI                    ; 004c7ee4
    MOVSD ES:EDI,ESI                    ; 004c7ee5
    FLD float ptr [EAX + 0x20]          ; 004c7ee6
    FLD float ptr [EAX + 0x24]          ; 004c7ee9
    FLD float ptr [EAX + 0x28]          ; 004c7eec
    LEA EDI,[ESP + 0x19c]               ; 004c7eef
    LEA ESI,[ESP + 0xac]                ; 004c7ef6
    FXCH ST2                            ; 004c7efd
    FADD float ptr [ESP + 0x190]        ; 004c7eff
    FXCH                                ; 004c7f06
    FADD float ptr [ESP + 0x194]        ; 004c7f08
    FXCH ST2                            ; 004c7f0f
    FADD float ptr [ESP + 0x198]        ; 004c7f11
    FXCH                                ; 004c7f18
    FSTP float ptr [ESP + 0xac]         ; 004c7f1a
    FXCH                                ; 004c7f21
    FSTP float ptr [ESP + 0xb0]         ; 004c7f23
    FSTP float ptr [ESP + 0xb4]         ; 004c7f2a
    MOVSD ES:EDI,ESI                    ; 004c7f31
    MOVSD ES:EDI,ESI                    ; 004c7f32
    MOVSD ES:EDI,ESI                    ; 004c7f33
    FLD float ptr [ESP + 0x19c]         ; 004c7f34
    FLD float ptr [ESP + 0x1a0]         ; 004c7f3b
    FLD float ptr [ESP + 0x1a4]         ; 004c7f42
    LEA EDI,[ESP + 0x154]               ; 004c7f49
    LEA ESI,[ESP + 0x1a8]               ; 004c7f50
    FXCH ST2                            ; 004c7f57
    FSUB float ptr [ESP + 0xa0]         ; 004c7f59
    FXCH                                ; 004c7f60
    FSUB float ptr [ESP + 0xa4]         ; 004c7f62
    FXCH ST2                            ; 004c7f69
    FSUB float ptr [ESP + 0xa8]         ; 004c7f6b
    FXCH                                ; 004c7f72
    FSTP float ptr [ESP + 0x1a8]        ; 004c7f74
    FXCH                                ; 004c7f7b
    FSTP float ptr [ESP + 0x1ac]        ; 004c7f7d
    FSTP float ptr [ESP + 0x1b0]        ; 004c7f84
    MOVSD ES:EDI,ESI                    ; 004c7f8b
    MOVSD ES:EDI,ESI                    ; 004c7f8c
    MOVSD ES:EDI,ESI                    ; 004c7f8d
    FLD float ptr [ESP + 0x158]         ; 004c7f8e
    FMUL ST0                            ; 004c7f95
    FLD float ptr [ESP + 0x154]         ; 004c7f97
    FMUL ST0                            ; 004c7f9e
    FADDP                               ; 004c7fa0
    FLD float ptr [ESP + 0x15c]         ; 004c7fa2
    FMUL ST0                            ; 004c7fa9
    FADDP                               ; 004c7fab
    FSQRT                               ; 004c7fad
    FLDZ                                ; 004c7faf
    FXCH                                ; 004c7fb1
    FSTP float ptr [ESP + 0x1cc]        ; 004c7fb3
    FCOMP float ptr [ESP + 0x1cc]       ; 004c7fba
    FNSTSW AX                           ; 004c7fc1
    SAHF                                ; 004c7fc3
    JNC 0x004c816b                      ; 004c7fc4
        ;   XREF to: 004c816b (CONDITIONAL_JUMP)  ; LAB_004c816b
    FLD1                                ; 004c7fca
    FLD float ptr [ESP + 0x154]         ; 004c7fcc
    FXCH                                ; 004c7fd3
    FDIV float ptr [ESP + 0x1cc]        ; 004c7fd5
    FXCH                                ; 004c7fdc
    FMUL ST1                            ; 004c7fde
    FLD float ptr [ESP + 0x158]         ; 004c7fe0
    FMUL ST2                            ; 004c7fe7
    FLD float ptr [ESP + 0x15c]         ; 004c7fe9
    FMULP ST3                           ; 004c7ff0
    FXCH                                ; 004c7ff2
    FSTP float ptr [ESP + 0x154]        ; 004c7ff4
    FSTP float ptr [ESP + 0x158]        ; 004c7ffb
    FSTP float ptr [ESP + 0x15c]        ; 004c8002
    FLD float ptr [0x005e1070]          ; 004c8009 | DAT_005e1070
        ;   Label: LAB_004c8009
    FLD float ptr [ESP + 0x154]         ; 004c800f
    FMUL ST1                            ; 004c8016
    FLD float ptr [ESP + 0x158]         ; 004c8018
    FMUL ST2                            ; 004c801f
    FLD float ptr [ESP + 0x15c]         ; 004c8021
    FMULP ST3                           ; 004c8028
    FLD float ptr [ESP + 0x19c]         ; 004c802a
    FLD float ptr [ESP + 0x1a0]         ; 004c8031
    FLD float ptr [ESP + 0x1a4]         ; 004c8038
    LEA EDI,[ESP + 0x118]               ; 004c803f
    LEA ESI,[ESP + 0x16c]               ; 004c8046
    LEA EDX,[ESP + 0x13c]               ; 004c804d
    FXCH ST4                            ; 004c8054
    FSTP float ptr [ESP + 0x16c]        ; 004c8056
    FXCH ST2                            ; 004c805d
    FSTP float ptr [ESP + 0x170]        ; 004c805f
    FXCH ST3                            ; 004c8066
    FSTP float ptr [ESP + 0x174]        ; 004c8068
    MOVSD ES:EDI,ESI                    ; 004c806f
    MOVSD ES:EDI,ESI                    ; 004c8070
    MOVSD ES:EDI,ESI                    ; 004c8071
    LEA EAX,[ESP + 0x19c]               ; 004c8072
    LEA EDI,[ESP + 0x13c]               ; 004c8079
    LEA ESI,[ESP + 0xd0]                ; 004c8080
    FXCH ST2                            ; 004c8087
    FADD float ptr [ESP + 0x118]        ; 004c8089
    FXCH ST2                            ; 004c8090
    FADD float ptr [ESP + 0x11c]        ; 004c8092
    FXCH                                ; 004c8099
    FADD float ptr [ESP + 0x120]        ; 004c809b
    FXCH ST2                            ; 004c80a2
    FSTP float ptr [ESP + 0xd0]         ; 004c80a4
    FSTP float ptr [ESP + 0xd4]         ; 004c80ab
    FSTP float ptr [ESP + 0xd8]         ; 004c80b2
    MOVSD ES:EDI,ESI                    ; 004c80b9
    MOVSD ES:EDI,ESI                    ; 004c80ba
    MOVSD ES:EDI,ESI                    ; 004c80bb
    CMP EAX,EDX                         ; 004c80bc
    JZ 0x004c80ea                       ; 004c80be
        ;   XREF to: 004c80ea (CONDITIONAL_JUMP)  ; LAB_004c80ea
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004c80c0
    MOV dword ptr [ESP + 0x19c],EAX     ; 004c80c7
    MOV EAX,dword ptr [ESP + 0x140]     ; 004c80ce
    MOV dword ptr [ESP + 0x1a0],EAX     ; 004c80d5
    MOV EAX,dword ptr [ESP + 0x144]     ; 004c80dc
    MOV dword ptr [ESP + 0x1a4],EAX     ; 004c80e3
    PUSH 0x1                            ; 004c80ea
        ;   Label: LAB_004c80ea
    MOV ECX,dword ptr [0x00622c18]      ; 004c80ec | g_CDemonSetPtr
    PUSH ECX                            ; 004c80f2 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0 ; 004c80f3
        ;   XREF to: 005592d0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 004c80f8
    PUSH EBX                            ; 004c80fb
    MOV ESI,dword ptr [0x00622c18]      ; 004c80fc | g_CDemonSetPtr
    PUSH ESI                            ; 004c8102 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 004c8103
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004c8108
    LEA EDX,[ESP + 0x19c]               ; 004c810b
    PUSH EDX                            ; 004c8112
    LEA EDX,[ESP + 0xa4]                ; 004c8113
    PUSH EDX                            ; 004c811a
    MOV EAX,[0x00622c18]                ; 004c811b | g_CDemonSetPtr
    PUSH EAX                            ; 004c8120 | g_CDemonSetInstance
    MOV dword ptr [EAX + 0x14d144],0x0  ; 004c8121 | g_CDemonSetInstance.collision_actor
    CALL core_setcolid.cpp_FUN_00557300 ; 004c812b
        ;   XREF to: 00557300 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00557300()
    ADD ESP,0xc                         ; 004c8130
    MOV EDI,dword ptr [0x00622c18]      ; 004c8133 | g_CDemonSetPtr
    PUSH EDI                            ; 004c8139 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 004c813a
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004c813f
    MOV EAX,[0x00622c18]                ; 004c8142 | g_CDemonSetPtr | g_CDemonSetInstance
    MOV EDX,dword ptr [ESP + 0x1d4]     ; 004c8147
    CMP EDX,dword ptr [EAX + 0x14d144]  ; 004c814e | g_CDemonSetInstance.collision_actor
    JNZ 0x004c7d0b                      ; 004c8154
        ;   XREF to: 004c7d0b (CONDITIONAL_JUMP)  ; LAB_004c7d0b
    MOV dword ptr [EBX + 0xc1e4],0x1    ; 004c815a
    MOV ESP,EBP                         ; 004c8164
    POP EBP                             ; 004c8166
    POP EDI                             ; 004c8167
    POP ESI                             ; 004c8168
    POP EBX                             ; 004c8169
    RET                                 ; 004c816a
    XOR EDI,EDI                         ; 004c816b
        ;   Label: LAB_004c816b
    MOV dword ptr [ESP + 0x158],EDI     ; 004c816d
    MOV dword ptr [ESP + 0x154],EDI     ; 004c8174
    MOV dword ptr [ESP + 0x15c],EDI     ; 004c817b
    JMP 0x004c8009                      ; 004c8182
        ;   XREF to: 004c8009 (UNCONDITIONAL_JUMP)  ; LAB_004c8009
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 004c8187
        ;   Label: LAB_004c8187
    JZ 0x004c7d0b                       ; 004c818e
        ;   XREF to: 004c7d0b (CONDITIONAL_JUMP)  ; LAB_004c7d0b
    LEA EAX,[EBX + 0x158]               ; 004c8194
    PUSH EAX                            ; 004c819a
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004c819b
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004c81a0
    ADD ESP,0x4                         ; 004c81a3
    TEST EAX,EAX                        ; 004c81a6
    JNZ 0x004c7d0b                      ; 004c81a8
        ;   XREF to: 004c7d0b (CONDITIONAL_JUMP)  ; LAB_004c7d0b
    MOV dword ptr [EBX + 0xc1f0],0x1    ; 004c81ae
    MOV ESP,EBP                         ; 004c81b8
    POP EBP                             ; 004c81ba
    POP EDI                             ; 004c81bb
    POP ESI                             ; 004c81bc
    POP EBX                             ; 004c81bd
    RET                                 ; 004c81be
    MOV EAX,[0x01d06ab4]                ; 004c81bf | DAT_01d06ab4
        ;   Label: LAB_004c81bf
    MOV EDX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004c81c4
    MOV EAX,dword ptr [EBX + 0x6c]      ; 004c81cb
    PUSH EAX                            ; 004c81ce
    LEA EAX,[ESP + 0xe0]                ; 004c81cf
    PUSH EAX                            ; 004c81d6
    LEA EAX,[EBX + 0x20]                ; 004c81d7
    PUSH EAX                            ; 004c81da
    ADD EDX,0xc208                      ; 004c81db
    PUSH EDX                            ; 004c81e1
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0 ; 004c81e2
        ;   XREF to: 005349a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 004c81e7
    TEST EAX,EAX                        ; 004c81ea
    JZ 0x004c7d0b                       ; 004c81ec
        ;   XREF to: 004c7d0b (CONDITIONAL_JUMP)  ; LAB_004c7d0b
    FLD float ptr [ESP + 0xe0]          ; 004c81f2
    FSUB float ptr [EBX + 0x34]         ; 004c81f9
    SUB ESP,0x4                         ; 004c81fc
    FSTP float ptr [ESP]                ; 004c81ff
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004c8202
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x1dc],EAX     ; 004c8207
    FLD float ptr [ESP + 0x1dc]         ; 004c820e
    FMUL float ptr [0x005e1044]         ; 004c8215 | DAT_005e1044
    ADD ESP,0x4                         ; 004c821b
    FMUL double ptr [0x005e103c]        ; 004c821e | DAT_005e103c
    FLD float ptr [ESP + 0x1d0]         ; 004c8224
    FCHS                                ; 004c822b
    FSTP float ptr [ESP + 0x1c4]        ; 004c822d
    FST float ptr [EBX + 0xc200]        ; 004c8234
    FCOMP float ptr [ESP + 0x1c4]       ; 004c823a
    FNSTSW AX                           ; 004c8241
    SAHF                                ; 004c8243
    JC 0x004c833d                       ; 004c8244
        ;   XREF to: 004c833d (CONDITIONAL_JUMP)  ; LAB_004c833d
    FLD float ptr [EBX + 0xc200]        ; 004c824a
        ;   Label: LAB_004c824a
    FCOMP float ptr [ESP + 0x1d0]       ; 004c8250
    FNSTSW AX                           ; 004c8257
    SAHF                                ; 004c8259
    JBE 0x004c8269                      ; 004c825a
        ;   XREF to: 004c8269 (CONDITIONAL_JUMP)  ; LAB_004c8269
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 004c825c
    MOV dword ptr [EBX + 0xc200],EAX    ; 004c8263
    LEA EDI,[ESP + 0x178]               ; 004c8269
        ;   Label: LAB_004c8269
    LEA ESI,[ESP + 0x160]               ; 004c8270
    LEA EAX,[EBX + 0x20]                ; 004c8277
    MOV dword ptr [EBX + 0xc1d8],0x1    ; 004c827a
    MOV EDX,dword ptr [0x01d06ab4]      ; 004c8284 | DAT_01d06ab4
    FLD float ptr [EAX + 0x4]           ; 004c828a
    FLD float ptr [EAX + 0x8]           ; 004c828d
    MOV EDX,dword ptr [EDX*0x4 + 0x1d06aa4] ; 004c8290
    FLD float ptr [EAX]                 ; 004c8297
    LEA EAX,[ESP + 0x178]               ; 004c8299
    FSUB float ptr [EDX + 0x20]         ; 004c82a0
    FXCH ST2                            ; 004c82a3
    FSUB float ptr [EDX + 0x24]         ; 004c82a5
    FXCH                                ; 004c82a8
    FSUB float ptr [EDX + 0x28]         ; 004c82aa
    FXCH ST2                            ; 004c82ad
    FSTP float ptr [ESP + 0x160]        ; 004c82af
    FSTP float ptr [ESP + 0x164]        ; 004c82b6
    FSTP float ptr [ESP + 0x168]        ; 004c82bd
    LEA EDX,[ESP + 0x130]               ; 004c82c4
    MOVSD ES:EDI,ESI                    ; 004c82cb
    MOVSD ES:EDI,ESI                    ; 004c82cc
    MOVSD ES:EDI,ESI                    ; 004c82cd
    CMP EDX,EAX                         ; 004c82ce
    JZ 0x004c82fc                       ; 004c82d0
        ;   XREF to: 004c82fc (CONDITIONAL_JUMP)  ; LAB_004c82fc
    MOV EAX,dword ptr [ESP + 0x178]     ; 004c82d2
    MOV dword ptr [ESP + 0x130],EAX     ; 004c82d9
    MOV EAX,dword ptr [ESP + 0x17c]     ; 004c82e0
    MOV dword ptr [ESP + 0x134],EAX     ; 004c82e7
    MOV EAX,dword ptr [ESP + 0x180]     ; 004c82ee
    MOV dword ptr [ESP + 0x138],EAX     ; 004c82f5
    FLD float ptr [ESP + 0x134]         ; 004c82fc
        ;   Label: LAB_004c82fc
    FMUL ST0                            ; 004c8303
    FLD float ptr [ESP + 0x130]         ; 004c8305
    FMUL ST0                            ; 004c830c
    FADDP                               ; 004c830e
    FLD float ptr [ESP + 0x138]         ; 004c8310
    FMUL ST0                            ; 004c8317
    FADDP                               ; 004c8319
    FSQRT                               ; 004c831b
    FCOMP double ptr [0x005e104c]       ; 004c831d | DAT_005e104c
    FNSTSW AX                           ; 004c8323
    SAHF                                ; 004c8325
    JBE 0x004c7d0b                      ; 004c8326
        ;   XREF to: 004c7d0b (CONDITIONAL_JUMP)  ; LAB_004c7d0b
    MOV dword ptr [EBX + 0xc1e0],0x1    ; 004c832c
    MOV ESP,EBP                         ; 004c8336
    POP EBP                             ; 004c8338
    POP EDI                             ; 004c8339
    POP ESI                             ; 004c833a
    POP EBX                             ; 004c833b
    RET                                 ; 004c833c
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 004c833d
        ;   Label: LAB_004c833d
    MOV dword ptr [EBX + 0xc200],EAX    ; 004c8344
    JMP 0x004c824a                      ; 004c834a
        ;   XREF to: 004c824a (UNCONDITIONAL_JUMP)  ; LAB_004c824a

