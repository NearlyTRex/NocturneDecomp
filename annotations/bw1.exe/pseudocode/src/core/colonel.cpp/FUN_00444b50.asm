; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_colonel_cpp_FUN_00444b50(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0xec]:4  local_ec
; undefined8       Stack[-0xe8]:8  local_e8
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined        Stack[-0xd8]:1  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined        Stack[-0xc0]:1  local_c0
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined        Stack[-0x9c]:1  local_9c
; undefined4       Stack[-0x98]:4  local_98
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
; undefined        Stack[-0x54]:1  local_54
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
; XREF[1]:
;   core_colonel.cpp_CColonel_process_FUN_00444550 at 004445da
;
; Referenced Globals:
;   undefined4 DAT_005d6cb3
;   undefined4 DAT_005d6cb7
;   undefined4 DAT_005d6cbf
;   undefined4 DAT_005d6cc7
;   undefined4 DAT_005d6ccf
;   undefined4 DAT_005d6cd7
;   undefined4 DAT_005d6cdf
;   undefined4 DAT_005d6ce7
;   undefined4 DAT_005d6cef
;   undefined4 DAT_005d6cf3
;   undefined4 DAT_01d06ab4
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_hero.cpp_FUN_004ec350
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0
;   core_path.cpp_getPathMap_FUN_005351f0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444b50
        ;   Label: core_colonel.cpp_FUN_00444b50
    PUSH ESI                            ; 00444b51
    PUSH EDI                            ; 00444b52
    PUSH EBP                            ; 00444b53
    MOV EBP,ESP                         ; 00444b54
    SUB ESP,0xd4                        ; 00444b56
    AND ESP,0xfffffff8                  ; 00444b5c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00444b5f
    MOV ECX,0x3e800000                  ; 00444b62
    MOV ESI,0x3f490fdb                  ; 00444b67
    MOV EAX,[0x01d06ab4]                ; 00444b6c | DAT_01d06ab4
    PUSH 0x30                           ; 00444b71
    XOR EDX,EDX                         ; 00444b73
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 00444b75
    PUSH EDX                            ; 00444b7c
    MOV dword ptr [ESP + 0xc8],EAX      ; 00444b7d
    LEA EAX,[EBX + 0xc1d8]              ; 00444b84
    MOV dword ptr [ESP + 0xcc],EDX      ; 00444b8a
    PUSH EAX                            ; 00444b91
    MOV dword ptr [ESP + 0xd8],ECX      ; 00444b92
    MOV dword ptr [ESP + 0xc8],ESI      ; 00444b99
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00444ba0
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    MOV EDI,dword ptr [EBX + 0x1ffa8]   ; 00444ba5
    ADD ESP,0xc                         ; 00444bab
    TEST EDI,EDI                        ; 00444bae
    JZ 0x00444fb4                       ; 00444bb0
        ;   XREF to: 00444fb4 (CONDITIONAL_JUMP)  ; LAB_00444fb4
    LEA EDI,[ESP + 0x64]                ; 00444bb6
    LEA EDX,[EBX + 0x20]                ; 00444bba
    LEA ESI,[ESP + 0x40]                ; 00444bbd
    MOV EAX,[0x01d06ab4]                ; 00444bc1 | DAT_01d06ab4
    FLD float ptr [EDX]                 ; 00444bc6
    FLD float ptr [EDX + 0x4]           ; 00444bc8
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 00444bcb
    FLD float ptr [EDX + 0x8]           ; 00444bd2
    FXCH ST2                            ; 00444bd5
    FSUB float ptr [EAX + 0x20]         ; 00444bd7
    FXCH                                ; 00444bda
    FSUB float ptr [EAX + 0x24]         ; 00444bdc
    FXCH ST2                            ; 00444bdf
    FSUB float ptr [EAX + 0x28]         ; 00444be1
    FXCH                                ; 00444be4
    FSTP float ptr [ESP + 0x40]         ; 00444be6
    FXCH                                ; 00444bea
    FSTP float ptr [ESP + 0x44]         ; 00444bec
    FSTP float ptr [ESP + 0x48]         ; 00444bf0
    MOVSD ES:EDI,ESI                    ; 00444bf4
    MOVSD ES:EDI,ESI                    ; 00444bf5
    MOVSD ES:EDI,ESI                    ; 00444bf6
    FLD float ptr [ESP + 0x68]          ; 00444bf7
    FMUL ST0                            ; 00444bfb
    FLD float ptr [ESP + 0x64]          ; 00444bfd
    FMUL ST0                            ; 00444c01
    FADDP                               ; 00444c03
    FLD float ptr [ESP + 0x6c]          ; 00444c05
    FMUL ST0                            ; 00444c09
    FADDP                               ; 00444c0b
    FSQRT                               ; 00444c0d
    MOV EAX,dword ptr [EBX + 0x1ffa8]   ; 00444c0f
    FSTP float ptr [ESP + 0xa4]         ; 00444c15
    CMP EAX,0x3                         ; 00444c1c
    JNZ 0x00444fbb                      ; 00444c1f
        ;   XREF to: 00444fbb (CONDITIONAL_JUMP)  ; LAB_00444fbb
    MOV EDX,dword ptr [EBX + 0x1ffa8]   ; 00444c25
        ;   Label: LAB_00444c25
    CMP EDX,0x2                         ; 00444c2b
    JNZ 0x00444fd6                      ; 00444c2e
        ;   XREF to: 00444fd6 (CONDITIONAL_JUMP)  ; LAB_00444fd6
    LEA EAX,[ESP + 0x8]                 ; 00444c34
        ;   Label: LAB_00444c34
    PUSH EAX                            ; 00444c38
    PUSH EBX                            ; 00444c39
    CALL core_hero.cpp_FUN_004ec350     ; 00444c3a
        ;   XREF to: 004ec350 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004ec350()
    MOV EDX,EAX                         ; 00444c3f
    ADD ESP,0x8                         ; 00444c41
    TEST EAX,EAX                        ; 00444c44
    JZ 0x00444c6a                       ; 00444c46
        ;   XREF to: 00444c6a (CONDITIONAL_JUMP)  ; LAB_00444c6a
    FLD float ptr [ESP + 0x8]           ; 00444c48
    FCOMP double ptr [0x005d6cb7]       ; 00444c4c | DAT_005d6cb7
    FNSTSW AX                           ; 00444c52
    SAHF                                ; 00444c54
    JNC 0x00444c6a                      ; 00444c55
        ;   XREF to: 00444c6a (CONDITIONAL_JUMP)  ; LAB_00444c6a
    MOV ESI,0x1                         ; 00444c57
    MOV dword ptr [ESP + 0xc0],EDX      ; 00444c5c
    MOV dword ptr [ESP + 0xc4],ESI      ; 00444c63
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00444c6a
        ;   Label: LAB_00444c6a
    LEA EDI,[ESP + 0x7c]                ; 00444c71
    LEA ESI,[ESP + 0x1c]                ; 00444c75
    LEA EDX,[EBX + 0x20]                ; 00444c79
    FLD float ptr [EAX + 0x24]          ; 00444c7c
    FLD float ptr [EAX + 0x28]          ; 00444c7f
    FLD float ptr [EAX + 0x20]          ; 00444c82
    LEA EAX,[ESP + 0x7c]                ; 00444c85
    FSUB float ptr [EDX]                ; 00444c89
    FXCH ST2                            ; 00444c8b
    FSUB float ptr [EDX + 0x4]          ; 00444c8d
    FXCH                                ; 00444c90
    FSUB float ptr [EDX + 0x8]          ; 00444c92
    FXCH ST2                            ; 00444c95
    FSTP float ptr [ESP + 0x1c]         ; 00444c97
    FSTP float ptr [ESP + 0x20]         ; 00444c9b
    FSTP float ptr [ESP + 0x24]         ; 00444c9f
    LEA EDX,[ESP + 0x64]                ; 00444ca3
    MOVSD ES:EDI,ESI                    ; 00444ca7
    MOVSD ES:EDI,ESI                    ; 00444ca8
    MOVSD ES:EDI,ESI                    ; 00444ca9
    CMP EDX,EAX                         ; 00444caa
    JZ 0x00444ccc                       ; 00444cac
        ;   XREF to: 00444ccc (CONDITIONAL_JUMP)  ; LAB_00444ccc
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00444cae
    MOV dword ptr [ESP + 0x64],EAX      ; 00444cb2
    MOV EAX,dword ptr [ESP + 0x80]      ; 00444cb6
    MOV dword ptr [ESP + 0x68],EAX      ; 00444cbd
    MOV EAX,dword ptr [ESP + 0x84]      ; 00444cc1
    MOV dword ptr [ESP + 0x6c],EAX      ; 00444cc8
    FLD float ptr [ESP + 0x68]          ; 00444ccc
        ;   Label: LAB_00444ccc
    FMUL ST0                            ; 00444cd0
    FLD float ptr [ESP + 0x64]          ; 00444cd2
    FMUL ST0                            ; 00444cd6
    FADDP                               ; 00444cd8
    FLD float ptr [ESP + 0x6c]          ; 00444cda
    FMUL ST0                            ; 00444cde
    FADDP                               ; 00444ce0
    FSQRT                               ; 00444ce2
    FSTP float ptr [ESP + 0xa0]         ; 00444ce4
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00444ceb
    FLD float ptr [ESP + 0xa0]          ; 00444cf2
    MOV dword ptr [ESP + 0xc],EAX       ; 00444cf9
    FCOMP double ptr [0x005d6cbf]       ; 00444cfd | DAT_005d6cbf
    FNSTSW AX                           ; 00444d03
    SAHF                                ; 00444d05
    JNC 0x0044501a                      ; 00444d06
        ;   XREF to: 0044501a (CONDITIONAL_JUMP)  ; LAB_0044501a
    MOV ESI,dword ptr [ESP + 0xc4]      ; 00444d0c
    LEA EAX,[EBX + 0x158]               ; 00444d13
    CMP ESI,0x1                         ; 00444d19
    JNZ 0x0044500c                      ; 00444d1c
        ;   XREF to: 0044500c (CONDITIONAL_JUMP)  ; LAB_0044500c
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 00444d22
    JNZ 0x00444fe4                      ; 00444d29
        ;   XREF to: 00444fe4 (CONDITIONAL_JUMP)  ; LAB_00444fe4
    MOV dword ptr [EBX + 0xc1f0],ESI    ; 00444d2f
    CMP dword ptr [ESP + 0xc4],0x1      ; 00444d35
        ;   Label: LAB_00444d35
    JNZ 0x00444e11                      ; 00444d3d
        ;   XREF to: 00444e11 (CONDITIONAL_JUMP)  ; LAB_00444e11
    LEA EAX,[ESP + 0x64]                ; 00444d43
    PUSH EAX                            ; 00444d47
    LEA ESI,[ESP + 0x2c]                ; 00444d48
    LEA EDI,[ESP + 0x50]                ; 00444d4c
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 00444d50
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x2c]                ; 00444d55
    ADD ESP,0x4                         ; 00444d59
    MOVSD ES:EDI,ESI                    ; 00444d5c
    MOVSD ES:EDI,ESI                    ; 00444d5d
    MOVSD ES:EDI,ESI                    ; 00444d5e
    FLD float ptr [ESP + 0x50]          ; 00444d5f
    FSUB float ptr [EBX + 0x34]         ; 00444d63
    SUB ESP,0x4                         ; 00444d66
    FSTP float ptr [ESP]                ; 00444d69
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00444d6c
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0xd4],EAX      ; 00444d71
    FLD float ptr [ESP + 0xd4]          ; 00444d78
    FMUL float ptr [0x005d6cc7]         ; 00444d7f | DAT_005d6cc7
    ADD ESP,0x4                         ; 00444d85
    FMUL double ptr [0x005d6ccf]        ; 00444d88 | DAT_005d6ccf
    FLD float ptr [ESP + 0xcc]          ; 00444d8e
    FCHS                                ; 00444d95
    FSTP float ptr [ESP + 0xa8]         ; 00444d97
    FST float ptr [EBX + 0xc200]        ; 00444d9e
    FCOMP float ptr [ESP + 0xa8]        ; 00444da4
    FNSTSW AX                           ; 00444dab
    SAHF                                ; 00444dad
    JNC 0x00444dbd                      ; 00444dae
        ;   XREF to: 00444dbd (CONDITIONAL_JUMP)  ; LAB_00444dbd
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00444db0
    MOV dword ptr [EBX + 0xc200],EAX    ; 00444db7
    FLD float ptr [EBX + 0xc200]        ; 00444dbd
        ;   Label: LAB_00444dbd
    FCOMP float ptr [ESP + 0xcc]        ; 00444dc3
    FNSTSW AX                           ; 00444dca
    SAHF                                ; 00444dcc
    JBE 0x00444ddc                      ; 00444dcd
        ;   XREF to: 00444ddc (CONDITIONAL_JUMP)  ; LAB_00444ddc
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00444dcf
    MOV dword ptr [EBX + 0xc200],EAX    ; 00444dd6
    FLD float ptr [EBX + 0xc200]        ; 00444ddc
        ;   Label: LAB_00444ddc
    FST double ptr [ESP]                ; 00444de2
    FCOMP double ptr [0x005d6cdf]       ; 00444de5 | DAT_005d6cdf
    FNSTSW AX                           ; 00444deb
    SAHF                                ; 00444ded
    JBE 0x00444e11                      ; 00444dee
        ;   XREF to: 00444e11 (CONDITIONAL_JUMP)  ; LAB_00444e11
    FLD double ptr [ESP]                ; 00444df0
    FCOMP double ptr [0x005d6ce7]       ; 00444df3 | DAT_005d6ce7
    FNSTSW AX                           ; 00444df9
    SAHF                                ; 00444dfb
    JNC 0x00444e11                      ; 00444dfc
        ;   XREF to: 00444e11 (CONDITIONAL_JUMP)  ; LAB_00444e11
    CMP dword ptr [EBX + 0xc1e4],0x0    ; 00444dfe
    JZ 0x00444e11                       ; 00444e05
        ;   XREF to: 00444e11 (CONDITIONAL_JUMP)  ; LAB_00444e11
    MOV dword ptr [EBX + 0xc200],0x0    ; 00444e07
    MOV EDX,dword ptr [ESP + 0xc0]      ; 00444e11
        ;   Label: LAB_00444e11
    LEA EDI,[ESP + 0x58]                ; 00444e18
    LEA ESI,[ESP + 0x88]                ; 00444e1c
    LEA EAX,[EBX + 0x20]                ; 00444e23
    FLD float ptr [EDX + 0x24]          ; 00444e26
    FLD float ptr [EDX + 0x28]          ; 00444e29
    FLD float ptr [EDX + 0x20]          ; 00444e2c
    LEA EDX,[ESP + 0x64]                ; 00444e2f
    FSUB float ptr [EAX]                ; 00444e33
    FXCH ST2                            ; 00444e35
    FSUB float ptr [EAX + 0x4]          ; 00444e37
    FXCH                                ; 00444e3a
    FSUB float ptr [EAX + 0x8]          ; 00444e3c
    FXCH ST2                            ; 00444e3f
    FSTP float ptr [ESP + 0x88]         ; 00444e41
    FSTP float ptr [ESP + 0x8c]         ; 00444e48
    FSTP float ptr [ESP + 0x90]         ; 00444e4f
    LEA EAX,[ESP + 0x58]                ; 00444e56
    MOVSD ES:EDI,ESI                    ; 00444e5a
    MOVSD ES:EDI,ESI                    ; 00444e5b
    MOVSD ES:EDI,ESI                    ; 00444e5c
    CMP EDX,EAX                         ; 00444e5d
    JZ 0x00444e79                       ; 00444e5f
        ;   XREF to: 00444e79 (CONDITIONAL_JUMP)  ; LAB_00444e79
    MOV EAX,dword ptr [ESP + 0x58]      ; 00444e61
    MOV dword ptr [ESP + 0x64],EAX      ; 00444e65
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00444e69
    MOV dword ptr [ESP + 0x68],EAX      ; 00444e6d
    MOV EAX,dword ptr [ESP + 0x60]      ; 00444e71
    MOV dword ptr [ESP + 0x6c],EAX      ; 00444e75
    LEA EAX,[ESP + 0x64]                ; 00444e79
        ;   Label: LAB_00444e79
    PUSH EAX                            ; 00444e7d
    LEA ESI,[ESP + 0x98]                ; 00444e7e
    LEA EDI,[ESP + 0x74]                ; 00444e85
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 00444e89
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x98]                ; 00444e8e
    LEA EDX,[ESP + 0x74]                ; 00444e95
    ADD ESP,0x4                         ; 00444e99
    LEA EAX,[ESP + 0x64]                ; 00444e9c
    MOVSD ES:EDI,ESI                    ; 00444ea0
    MOVSD ES:EDI,ESI                    ; 00444ea1
    MOVSD ES:EDI,ESI                    ; 00444ea2
    CMP EAX,EDX                         ; 00444ea3
    JZ 0x00444ebf                       ; 00444ea5
        ;   XREF to: 00444ebf (CONDITIONAL_JUMP)  ; LAB_00444ebf
    MOV EAX,dword ptr [ESP + 0x70]      ; 00444ea7
    MOV dword ptr [ESP + 0x64],EAX      ; 00444eab
    MOV EAX,dword ptr [ESP + 0x74]      ; 00444eaf
    MOV dword ptr [ESP + 0x68],EAX      ; 00444eb3
    MOV EAX,dword ptr [ESP + 0x78]      ; 00444eb7
    MOV dword ptr [ESP + 0x6c],EAX      ; 00444ebb
    FLD float ptr [ESP + 0x68]          ; 00444ebf
        ;   Label: LAB_00444ebf
    FSUB float ptr [EBX + 0x34]         ; 00444ec3
    SUB ESP,0x4                         ; 00444ec6
    FSTP float ptr [ESP]                ; 00444ec9
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00444ecc
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0xd4],EAX      ; 00444ed1
    FLD float ptr [ESP + 0xd4]          ; 00444ed8
    ADD ESP,0x4                         ; 00444edf
    FST float ptr [ESP + 0x38]          ; 00444ee2
    FCOMP float ptr [ESP + 0xbc]        ; 00444ee6
    FNSTSW AX                           ; 00444eed
    SAHF                                ; 00444eef
    JBE 0x00444efd                      ; 00444ef0
        ;   XREF to: 00444efd (CONDITIONAL_JUMP)  ; LAB_00444efd
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00444ef2
    MOV dword ptr [ESP + 0x38],EAX      ; 00444ef9
    FLD float ptr [ESP + 0x38]          ; 00444efd
        ;   Label: LAB_00444efd
    FLD float ptr [ESP + 0xbc]          ; 00444f01
    FCHS                                ; 00444f08
    FSTP float ptr [ESP + 0xb4]         ; 00444f0a
    FCOMP float ptr [ESP + 0xb4]        ; 00444f11
    FNSTSW AX                           ; 00444f18
    SAHF                                ; 00444f1a
    JNC 0x00444f28                      ; 00444f1b
        ;   XREF to: 00444f28 (CONDITIONAL_JUMP)  ; LAB_00444f28
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00444f1d
    MOV dword ptr [ESP + 0x38],EAX      ; 00444f24
    FLD float ptr [EBP + 0x18]          ; 00444f28
        ;   Label: LAB_00444f28
    FLD float ptr [ESP + 0x38]          ; 00444f2b
    FSUB float ptr [EBX + 0x1ffb8]      ; 00444f2f
    FXCH                                ; 00444f35
    FMUL float ptr [0x005d6cef]         ; 00444f37 | DAT_005d6cef
    FXCH                                ; 00444f3d
    FSTP float ptr [ESP + 0xc8]         ; 00444f3f
    FSTP float ptr [ESP + 0xb8]         ; 00444f46
    FLD float ptr [ESP + 0xc8]          ; 00444f4d
    FCOMP float ptr [ESP + 0xb8]        ; 00444f54
    FNSTSW AX                           ; 00444f5b
    SAHF                                ; 00444f5d
    JBE 0x00444f6e                      ; 00444f5e
        ;   XREF to: 00444f6e (CONDITIONAL_JUMP)  ; LAB_00444f6e
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00444f60
    MOV dword ptr [ESP + 0xc8],EAX      ; 00444f67
    FLD float ptr [EBP + 0x18]          ; 00444f6e
        ;   Label: LAB_00444f6e
    FMUL float ptr [0x005d6cf3]         ; 00444f71 | DAT_005d6cf3
    FLD float ptr [ESP + 0xc8]          ; 00444f77
    FXCH                                ; 00444f7e
    FSTP float ptr [ESP + 0xac]         ; 00444f80
    FCOMP float ptr [ESP + 0xac]        ; 00444f87
    FNSTSW AX                           ; 00444f8e
    SAHF                                ; 00444f90
    JNC 0x00444fa1                      ; 00444f91
        ;   XREF to: 00444fa1 (CONDITIONAL_JUMP)  ; LAB_00444fa1
    MOV EAX,dword ptr [ESP + 0xac]      ; 00444f93
    MOV dword ptr [ESP + 0xc8],EAX      ; 00444f9a
    FLD float ptr [EBX + 0x1ffb8]       ; 00444fa1
        ;   Label: LAB_00444fa1
    FADD float ptr [ESP + 0xc8]         ; 00444fa7
    FSTP float ptr [EBX + 0x1ffb8]      ; 00444fae
    MOV ESP,EBP                         ; 00444fb4
        ;   Label: LAB_00444fb4
    POP EBP                             ; 00444fb6
    POP EDI                             ; 00444fb7
    POP ESI                             ; 00444fb8
    POP EBX                             ; 00444fb9
    RET                                 ; 00444fba
    FLD float ptr [ESP + 0xa4]          ; 00444fbb
        ;   Label: LAB_00444fbb
    FCOMP float ptr [0x005d6cb3]        ; 00444fc2 | DAT_005d6cb3
    FNSTSW AX                           ; 00444fc8
    SAHF                                ; 00444fca
    JC 0x00444c25                       ; 00444fcb
        ;   XREF to: 00444c25 (CONDITIONAL_JUMP)  ; LAB_00444c25
    JMP 0x00444c6a                      ; 00444fd1
        ;   XREF to: 00444c6a (UNCONDITIONAL_JUMP)  ; LAB_00444c6a
    CMP EDX,0x3                         ; 00444fd6
        ;   Label: LAB_00444fd6
    JZ 0x00444c34                       ; 00444fd9
        ;   XREF to: 00444c34 (CONDITIONAL_JUMP)  ; LAB_00444c34
    JMP 0x00444c6a                      ; 00444fdf
        ;   XREF to: 00444c6a (UNCONDITIONAL_JUMP)  ; LAB_00444c6a
    PUSH EAX                            ; 00444fe4
        ;   Label: LAB_00444fe4
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00444fe5
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00444fea
    ADD ESP,0x4                         ; 00444fed
    CMP EAX,0x2                         ; 00444ff0
    JZ 0x00444d35                       ; 00444ff3
        ;   XREF to: 00444d35 (CONDITIONAL_JUMP)  ; LAB_00444d35
    CMP EAX,ESI                         ; 00444ff9
    JZ 0x00444d35                       ; 00444ffb
        ;   XREF to: 00444d35 (CONDITIONAL_JUMP)  ; LAB_00444d35
    MOV dword ptr [EBX + 0xc1e4],ESI    ; 00445001
    JMP 0x00444d35                      ; 00445007
        ;   XREF to: 00444d35 (UNCONDITIONAL_JUMP)  ; LAB_00444d35
    PUSH EAX                            ; 0044500c
        ;   Label: LAB_0044500c
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0044500d
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00445012
    JMP 0x00444d35                      ; 00445015
        ;   XREF to: 00444d35 (UNCONDITIONAL_JUMP)  ; LAB_00444d35
    MOV EDI,dword ptr [ESP + 0xc4]      ; 0044501a
        ;   Label: LAB_0044501a
    XOR EAX,EAX                         ; 00445021
    TEST EDI,EDI                        ; 00445023
    JNZ 0x00445043                      ; 00445025
        ;   XREF to: 00445043 (CONDITIONAL_JUMP)  ; LAB_00445043
    MOV EAX,[0x01d06ab4]                ; 00445027 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0044502c
    PUSH EAX                            ; 00445033
    MOV EDX,dword ptr [EAX + 0x154]     ; 00445034
    CALL dword ptr [EDX + 0xc4]         ; 0044503a
    ADD ESP,0x4                         ; 00445040
    TEST EAX,EAX                        ; 00445043
        ;   Label: LAB_00445043
    JNZ 0x0044505a                      ; 00445045
        ;   XREF to: 0044505a (CONDITIONAL_JUMP)  ; LAB_0044505a
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00445047
    ADD EAX,0x20                        ; 0044504e
    PUSH EAX                            ; 00445051
    CALL core_path.cpp_getPathMap_FUN_005351f0 ; 00445052
        ;   XREF to: 005351f0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_005351f0(CLocation * location)
    ADD ESP,0x4                         ; 00445057
    MOV EDX,dword ptr [EBX + 0x6c]      ; 0044505a
        ;   Label: LAB_0044505a
    PUSH EDX                            ; 0044505d
    LEA EDX,[ESP + 0x14]                ; 0044505e
    PUSH EDX                            ; 00445062
    LEA EDX,[EBX + 0x20]                ; 00445063
    PUSH EDX                            ; 00445066
    PUSH EAX                            ; 00445067
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0 ; 00445068
        ;   XREF to: 005349a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 0044506d
    TEST EAX,EAX                        ; 00445070
    JZ 0x00444e11                       ; 00445072
        ;   XREF to: 00444e11 (CONDITIONAL_JUMP)  ; LAB_00444e11
    FLD float ptr [ESP + 0x14]          ; 00445078
    FSUB float ptr [EBX + 0x34]         ; 0044507c
    SUB ESP,0x4                         ; 0044507f
    FSTP float ptr [ESP]                ; 00445082
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00445085
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0xd4],EAX      ; 0044508a
    FLD float ptr [ESP + 0xd4]          ; 00445091
    FMUL float ptr [0x005d6cc7]         ; 00445098 | DAT_005d6cc7
    ADD ESP,0x4                         ; 0044509e
    FMUL double ptr [0x005d6ccf]        ; 004450a1 | DAT_005d6ccf
    FLD float ptr [ESP + 0xcc]          ; 004450a7
    FCHS                                ; 004450ae
    FSTP float ptr [ESP + 0xb0]         ; 004450b0
    FST float ptr [EBX + 0xc200]        ; 004450b7
    FCOMP float ptr [ESP + 0xb0]        ; 004450bd
    FNSTSW AX                           ; 004450c4
    SAHF                                ; 004450c6
    JC 0x00445110                       ; 004450c7
        ;   XREF to: 00445110 (CONDITIONAL_JUMP)  ; LAB_00445110
    FLD float ptr [EBX + 0xc200]        ; 004450c9
        ;   Label: LAB_004450c9
    FCOMP float ptr [ESP + 0xcc]        ; 004450cf
    FNSTSW AX                           ; 004450d6
    SAHF                                ; 004450d8
    JBE 0x004450e8                      ; 004450d9
        ;   XREF to: 004450e8 (CONDITIONAL_JUMP)  ; LAB_004450e8
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004450db
    MOV dword ptr [EBX + 0xc200],EAX    ; 004450e2
    FLD float ptr [ESP + 0xc]           ; 004450e8
        ;   Label: LAB_004450e8
    FCOMP double ptr [0x005d6cd7]       ; 004450ec | DAT_005d6cd7
    FNSTSW AX                           ; 004450f2
    SAHF                                ; 004450f4
    JNC 0x0044511f                      ; 004450f5
        ;   XREF to: 0044511f (CONDITIONAL_JUMP)  ; LAB_0044511f
    CMP dword ptr [ESP + 0xc4],0x1      ; 004450f7
    JZ 0x0044511f                       ; 004450ff
        ;   XREF to: 0044511f (CONDITIONAL_JUMP)  ; LAB_0044511f
    MOV dword ptr [EBX + 0xc1d8],0x1    ; 00445101
    JMP 0x00444e11                      ; 0044510b
        ;   XREF to: 00444e11 (UNCONDITIONAL_JUMP)  ; LAB_00444e11
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00445110
        ;   Label: LAB_00445110
    MOV dword ptr [EBX + 0xc200],EAX    ; 00445117
    JMP 0x004450c9                      ; 0044511d
        ;   XREF to: 004450c9 (UNCONDITIONAL_JUMP)  ; LAB_004450c9
    MOV dword ptr [EBX + 0xc1e0],0x1    ; 0044511f
        ;   Label: LAB_0044511f
    MOV dword ptr [EBX + 0xc1d8],0x1    ; 00445129
    JMP 0x00444e11                      ; 00445133
        ;   XREF to: 00444e11 (UNCONDITIONAL_JUMP)  ; LAB_00444e11

