; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_icepick_cpp_FUN_004f1b50(CIcePick *this_ptr,float delta_time)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_icepick.cpp_CIcePick_process_FUN_004f0e50 at 004f1201
;
; Referenced Globals:
;   undefined4 DAT_005e5417
;   undefined4 DAT_005e541f
;   undefined4 DAT_005e5427
;   undefined4 DAT_005e542f
;   undefined4 DAT_005e5437
;   undefined4 DAT_005e543f
;   undefined4 DAT_005e5447
;   undefined4 DAT_005e544b
;   undefined4 DAT_01d06ab4
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_charactr.cpp_FUN_00434c60
;   core_hero.cpp_FUN_004ec350
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0
;   core_path.cpp_getPathMap_FUN_005351f0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f1b50
        ;   Label: core_icepick.cpp_FUN_004f1b50
    PUSH ESI                            ; 004f1b51
    PUSH EDI                            ; 004f1b52
    PUSH EBP                            ; 004f1b53
    MOV EBP,ESP                         ; 004f1b54
    SUB ESP,0xe0                        ; 004f1b56
    AND ESP,0xfffffff8                  ; 004f1b5c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f1b5f
    MOV ECX,0x3e800000                  ; 004f1b62
    MOV ESI,0x3f490fdb                  ; 004f1b67
    MOV EAX,[0x01d06ab4]                ; 004f1b6c | DAT_01d06ab4
    PUSH 0x30                           ; 004f1b71
    XOR EDX,EDX                         ; 004f1b73
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004f1b75
    PUSH EDX                            ; 004f1b7c
    MOV dword ptr [ESP + 0xc8],EAX      ; 004f1b7d
    LEA EAX,[EBX + 0xc1d8]              ; 004f1b84
    MOV dword ptr [ESP + 0xd0],EDX      ; 004f1b8a
    PUSH EAX                            ; 004f1b91
    MOV dword ptr [ESP + 0xd8],ECX      ; 004f1b92
    MOV dword ptr [ESP + 0xc8],ESI      ; 004f1b99
    CALL crt_memory.c_memset_FUN_005bfb70 ; 004f1ba0
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    MOV EDI,dword ptr [EBX + 0x1ffa8]   ; 004f1ba5
    ADD ESP,0xc                         ; 004f1bab
    TEST EDI,EDI                        ; 004f1bae
    JZ 0x004f206b                       ; 004f1bb0
        ;   XREF to: 004f206b (CONDITIONAL_JUMP)  ; LAB_004f206b
    LEA EAX,[EBX + 0x20]                ; 004f1bb6
    LEA EDI,[ESP + 0x14]                ; 004f1bb9
    MOV ESI,dword ptr [0x01d06ab4]      ; 004f1bbd | DAT_01d06ab4
    FLD float ptr [EAX]                 ; 004f1bc3
    FLD float ptr [EAX + 0x4]           ; 004f1bc5
    MOV ESI,dword ptr [ESI*0x4 + 0x1d06aa4] ; 004f1bc8
    FLD float ptr [EAX + 0x8]           ; 004f1bcf
    FXCH ST2                            ; 004f1bd2
    FSUB float ptr [ESI + 0x20]         ; 004f1bd4
    FXCH                                ; 004f1bd7
    FSUB float ptr [ESI + 0x24]         ; 004f1bd9
    FXCH ST2                            ; 004f1bdc
    FSUB float ptr [ESI + 0x28]         ; 004f1bde
    FXCH                                ; 004f1be1
    FSTP float ptr [ESP + 0x68]         ; 004f1be3
    FXCH                                ; 004f1be7
    FSTP float ptr [ESP + 0x6c]         ; 004f1be9
    LEA ESI,[ESP + 0x68]                ; 004f1bed
    FSTP float ptr [ESP + 0x70]         ; 004f1bf1
    MOVSD ES:EDI,ESI                    ; 004f1bf5
    MOVSD ES:EDI,ESI                    ; 004f1bf6
    MOVSD ES:EDI,ESI                    ; 004f1bf7
    FLD float ptr [ESP + 0x18]          ; 004f1bf8
    FMUL ST0                            ; 004f1bfc
    FLD float ptr [ESP + 0x14]          ; 004f1bfe
    FMUL ST0                            ; 004f1c02
    FADDP                               ; 004f1c04
    FLD float ptr [ESP + 0x1c]          ; 004f1c06
    FMUL ST0                            ; 004f1c0a
    FADDP                               ; 004f1c0c
    FSQRT                               ; 004f1c0e
    MOV EAX,dword ptr [EBX + 0x1ffa8]   ; 004f1c10
    FSTP float ptr [ESP + 0xd4]         ; 004f1c16
    CMP EAX,0x3                         ; 004f1c1d
    JNZ 0x004f1c2b                      ; 004f1c20
        ;   XREF to: 004f1c2b (CONDITIONAL_JUMP)  ; LAB_004f1c2b
    XOR EDX,EDX                         ; 004f1c22
    MOV dword ptr [ESP + 0xd4],EDX      ; 004f1c24
    MOV EAX,[0x01d06ab4]                ; 004f1c2b | DAT_01d06ab4
        ;   Label: LAB_004f1c2b
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004f1c30
    MOV ECX,0x41a00000                  ; 004f1c37
    PUSH EAX                            ; 004f1c3c
    MOV ESI,dword ptr [EAX + 0x154]     ; 004f1c3d
    MOV dword ptr [ESP + 0xbc],ECX      ; 004f1c43
    CALL dword ptr [ESI + 0x148]        ; 004f1c4a
    ADD ESP,0x4                         ; 004f1c50
    TEST EAX,EAX                        ; 004f1c53
    JZ 0x004f1c62                       ; 004f1c55
        ;   XREF to: 004f1c62 (CONDITIONAL_JUMP)  ; LAB_004f1c62
    MOV dword ptr [ESP + 0xb8],0x41f00000 ; 004f1c57
    FLD float ptr [ESP + 0xd4]          ; 004f1c62
        ;   Label: LAB_004f1c62
    FCOMP float ptr [ESP + 0xb8]        ; 004f1c69
    FNSTSW AX                           ; 004f1c70
    SAHF                                ; 004f1c72
    JNC 0x004f1cd4                      ; 004f1c73
        ;   XREF to: 004f1cd4 (CONDITIONAL_JUMP)  ; LAB_004f1cd4
    MOV EDI,dword ptr [EBX + 0x1ffa8]   ; 004f1c75
    CMP EDI,0x2                         ; 004f1c7b
    JNZ 0x004f2072                      ; 004f1c7e
        ;   XREF to: 004f2072 (CONDITIONAL_JUMP)  ; LAB_004f2072
    LEA EAX,[ESP + 0xa4]                ; 004f1c84
        ;   Label: LAB_004f1c84
    PUSH EAX                            ; 004f1c8b
    MOV EDX,0x461c3f9a                  ; 004f1c8c
    PUSH EBX                            ; 004f1c91
    MOV dword ptr [ESP + 0xac],EDX      ; 004f1c92
    CALL core_hero.cpp_FUN_004ec350     ; 004f1c99
        ;   XREF to: 004ec350 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004ec350()
    MOV ESI,EAX                         ; 004f1c9e
    ADD ESP,0x8                         ; 004f1ca0
    TEST EAX,EAX                        ; 004f1ca3
    JZ 0x004f2080                       ; 004f1ca5
        ;   XREF to: 004f2080 (CONDITIONAL_JUMP)  ; LAB_004f2080
    FLD float ptr [ESP + 0xa4]          ; 004f1cab
    FCOMP float ptr [ESP + 0xb8]        ; 004f1cb2
    FNSTSW AX                           ; 004f1cb9
    SAHF                                ; 004f1cbb
    JNC 0x004f2080                      ; 004f1cbc
        ;   XREF to: 004f2080 (CONDITIONAL_JUMP)  ; LAB_004f2080
    MOV dword ptr [ESP + 0xc0],ESI      ; 004f1cc2
    MOV dword ptr [ESP + 0xc8],0x1      ; 004f1cc9
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004f1cd4
        ;   Label: LAB_004f1cd4
    LEA EDI,[ESP + 0x50]                ; 004f1cdb
    LEA EDX,[ESP + 0x50]                ; 004f1cdf
    LEA ESI,[EBX + 0x20]                ; 004f1ce3
    FLD float ptr [EAX + 0x24]          ; 004f1ce6
    FLD float ptr [EAX + 0x28]          ; 004f1ce9
    FLD float ptr [EAX + 0x20]          ; 004f1cec
    LEA EAX,[ESP + 0x14]                ; 004f1cef
    FSUB float ptr [ESI]                ; 004f1cf3
    FXCH ST2                            ; 004f1cf5
    FSUB float ptr [ESI + 0x4]          ; 004f1cf7
    FXCH                                ; 004f1cfa
    FSUB float ptr [ESI + 0x8]          ; 004f1cfc
    FXCH ST2                            ; 004f1cff
    FSTP float ptr [ESP + 0x98]         ; 004f1d01
    FSTP float ptr [ESP + 0x9c]         ; 004f1d08
    LEA ESI,[ESP + 0x98]                ; 004f1d0f
    FSTP float ptr [ESP + 0xa0]         ; 004f1d16
    MOVSD ES:EDI,ESI                    ; 004f1d1d
    MOVSD ES:EDI,ESI                    ; 004f1d1e
    MOVSD ES:EDI,ESI                    ; 004f1d1f
    CMP EAX,EDX                         ; 004f1d20
    JZ 0x004f1d3c                       ; 004f1d22
        ;   XREF to: 004f1d3c (CONDITIONAL_JUMP)  ; LAB_004f1d3c
    MOV EAX,dword ptr [ESP + 0x50]      ; 004f1d24
    MOV dword ptr [ESP + 0x14],EAX      ; 004f1d28
    MOV EAX,dword ptr [ESP + 0x54]      ; 004f1d2c
    MOV dword ptr [ESP + 0x18],EAX      ; 004f1d30
    MOV EAX,dword ptr [ESP + 0x58]      ; 004f1d34
    MOV dword ptr [ESP + 0x1c],EAX      ; 004f1d38
    FLD float ptr [ESP + 0x18]          ; 004f1d3c
        ;   Label: LAB_004f1d3c
    FMUL ST0                            ; 004f1d40
    FLD float ptr [ESP + 0x14]          ; 004f1d42
    FMUL ST0                            ; 004f1d46
    FADDP                               ; 004f1d48
    FLD float ptr [ESP + 0x1c]          ; 004f1d4a
    FMUL ST0                            ; 004f1d4e
    FADDP                               ; 004f1d50
    FSQRT                               ; 004f1d52
    MOV dword ptr [EBX + 0x2508],0x0    ; 004f1d54
    FSTP float ptr [ESP + 0xd0]         ; 004f1d5e
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004f1d65
    FLD float ptr [ESP + 0xd0]          ; 004f1d6c
    MOV dword ptr [ESP + 0x10],EAX      ; 004f1d73
    FCOMP double ptr [0x005e5417]       ; 004f1d77 | DAT_005e5417
    FNSTSW AX                           ; 004f1d7d
    SAHF                                ; 004f1d7f
    JNC 0x004f215a                      ; 004f1d80
        ;   XREF to: 004f215a (CONDITIONAL_JUMP)  ; LAB_004f215a
    MOV ECX,dword ptr [ESP + 0xc8]      ; 004f1d86
    LEA EAX,[EBX + 0x158]               ; 004f1d8d
    CMP ECX,0x1                         ; 004f1d93
    JNZ 0x004f20c9                      ; 004f1d96
        ;   XREF to: 004f20c9 (CONDITIONAL_JUMP)  ; LAB_004f20c9
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 004f1d9c
    JNZ 0x004f209c                      ; 004f1da3
        ;   XREF to: 004f209c (CONDITIONAL_JUMP)  ; LAB_004f209c
    MOV dword ptr [EBX + 0xc1f0],ECX    ; 004f1da9
    MOV dword ptr [EBX + 0x2fd0],0x0    ; 004f1daf
        ;   Label: LAB_004f1daf
    CMP dword ptr [ESP + 0xc8],0x1      ; 004f1db9
        ;   Label: LAB_004f1db9
    JNZ 0x004f1e9d                      ; 004f1dc1
        ;   XREF to: 004f1e9d (CONDITIONAL_JUMP)  ; LAB_004f1e9d
    LEA EAX,[ESP + 0x14]                ; 004f1dc7
    PUSH EAX                            ; 004f1dcb
    LEA ESI,[ESP + 0x3c]                ; 004f1dcc
    LEA EDI,[ESP + 0x90]                ; 004f1dd0
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004f1dd7
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x3c]                ; 004f1ddc
    ADD ESP,0x4                         ; 004f1de0
    MOVSD ES:EDI,ESI                    ; 004f1de3
    MOVSD ES:EDI,ESI                    ; 004f1de4
    MOVSD ES:EDI,ESI                    ; 004f1de5
    FLD float ptr [ESP + 0x90]          ; 004f1de6
    FSUB float ptr [EBX + 0x34]         ; 004f1ded
    SUB ESP,0x4                         ; 004f1df0
    FSTP float ptr [ESP]                ; 004f1df3
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004f1df6
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0xe0],EAX      ; 004f1dfb
    FLD float ptr [ESP + 0xe0]          ; 004f1e02
    FMUL float ptr [0x005e541f]         ; 004f1e09 | DAT_005e541f
    ADD ESP,0x4                         ; 004f1e0f
    FMUL double ptr [0x005e5427]        ; 004f1e12 | DAT_005e5427
    FLD float ptr [ESP + 0xcc]          ; 004f1e18
    FCHS                                ; 004f1e1f
    FSTP float ptr [ESP + 0xa8]         ; 004f1e21
    FST float ptr [EBX + 0xc200]        ; 004f1e28
    FCOMP float ptr [ESP + 0xa8]        ; 004f1e2e
    FNSTSW AX                           ; 004f1e35
    SAHF                                ; 004f1e37
    JNC 0x004f1e47                      ; 004f1e38
        ;   XREF to: 004f1e47 (CONDITIONAL_JUMP)  ; LAB_004f1e47
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004f1e3a
    MOV dword ptr [EBX + 0xc200],EAX    ; 004f1e41
    FLD float ptr [EBX + 0xc200]        ; 004f1e47
        ;   Label: LAB_004f1e47
    FCOMP float ptr [ESP + 0xcc]        ; 004f1e4d
    FNSTSW AX                           ; 004f1e54
    SAHF                                ; 004f1e56
    JBE 0x004f1e66                      ; 004f1e57
        ;   XREF to: 004f1e66 (CONDITIONAL_JUMP)  ; LAB_004f1e66
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004f1e59
    MOV dword ptr [EBX + 0xc200],EAX    ; 004f1e60
    FLD float ptr [EBX + 0xc200]        ; 004f1e66
        ;   Label: LAB_004f1e66
    FST double ptr [ESP + 0x8]          ; 004f1e6c
    FCOMP double ptr [0x005e5437]       ; 004f1e70 | DAT_005e5437
    FNSTSW AX                           ; 004f1e76
    SAHF                                ; 004f1e78
    JBE 0x004f1e9d                      ; 004f1e79
        ;   XREF to: 004f1e9d (CONDITIONAL_JUMP)  ; LAB_004f1e9d
    FLD double ptr [ESP + 0x8]          ; 004f1e7b
    FCOMP double ptr [0x005e543f]       ; 004f1e7f | DAT_005e543f
    FNSTSW AX                           ; 004f1e85
    SAHF                                ; 004f1e87
    JNC 0x004f1e9d                      ; 004f1e88
        ;   XREF to: 004f1e9d (CONDITIONAL_JUMP)  ; LAB_004f1e9d
    CMP dword ptr [EBX + 0xc1e4],0x0    ; 004f1e8a
    JZ 0x004f1e9d                       ; 004f1e91
        ;   XREF to: 004f1e9d (CONDITIONAL_JUMP)  ; LAB_004f1e9d
    MOV dword ptr [EBX + 0xc200],0x0    ; 004f1e93
    FLDZ                                ; 004f1e9d
        ;   Label: LAB_004f1e9d
    FLD float ptr [EBX + 0x2508]        ; 004f1e9f
    FSTP double ptr [ESP]               ; 004f1ea5
    FCOMP double ptr [ESP]              ; 004f1ea8
    FNSTSW AX                           ; 004f1eab
    SAHF                                ; 004f1ead
    JNC 0x004f2303                      ; 004f1eae
        ;   XREF to: 004f2303 (CONDITIONAL_JUMP)  ; LAB_004f2303
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004f1eb4
    MOV dword ptr [EBX + 0x2508],0x0    ; 004f1ebb
    MOV dword ptr [EBX + 0xc200],EAX    ; 004f1ec5
    MOV ESI,dword ptr [ESP + 0xc0]      ; 004f1ecb
        ;   Label: LAB_004f1ecb
    LEA EDI,[ESP + 0x5c]                ; 004f1ed2
    LEA EAX,[EBX + 0x20]                ; 004f1ed6
    FLD float ptr [ESI + 0x24]          ; 004f1ed9
    FLD float ptr [ESI + 0x28]          ; 004f1edc
    FLD float ptr [ESI + 0x20]          ; 004f1edf
    LEA ESI,[ESP + 0x74]                ; 004f1ee2
    FSUB float ptr [EAX]                ; 004f1ee6
    FXCH ST2                            ; 004f1ee8
    FSUB float ptr [EAX + 0x4]          ; 004f1eea
    FXCH                                ; 004f1eed
    FSUB float ptr [EAX + 0x8]          ; 004f1eef
    FXCH ST2                            ; 004f1ef2
    FSTP float ptr [ESP + 0x74]         ; 004f1ef4
    FSTP float ptr [ESP + 0x78]         ; 004f1ef8
    FSTP float ptr [ESP + 0x7c]         ; 004f1efc
    MOVSD ES:EDI,ESI                    ; 004f1f00
    MOVSD ES:EDI,ESI                    ; 004f1f01
    MOVSD ES:EDI,ESI                    ; 004f1f02
    LEA EAX,[ESP + 0x14]                ; 004f1f03
    LEA ESI,[ESP + 0x5c]                ; 004f1f07
    CMP EAX,ESI                         ; 004f1f0b
    JZ 0x004f1f27                       ; 004f1f0d
        ;   XREF to: 004f1f27 (CONDITIONAL_JUMP)  ; LAB_004f1f27
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004f1f0f
    MOV dword ptr [ESP + 0x14],EAX      ; 004f1f13
    MOV EAX,dword ptr [ESP + 0x60]      ; 004f1f17
    MOV dword ptr [ESP + 0x18],EAX      ; 004f1f1b
    MOV EAX,dword ptr [ESP + 0x64]      ; 004f1f1f
    MOV dword ptr [ESP + 0x1c],EAX      ; 004f1f23
    LEA EAX,[ESP + 0x14]                ; 004f1f27
        ;   Label: LAB_004f1f27
    PUSH EAX                            ; 004f1f2b
    LEA ESI,[ESP + 0x48]                ; 004f1f2c
    LEA EDI,[ESP + 0x84]                ; 004f1f30
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004f1f37
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x48]                ; 004f1f3c
    ADD ESP,0x4                         ; 004f1f40
    MOVSD ES:EDI,ESI                    ; 004f1f43
    MOVSD ES:EDI,ESI                    ; 004f1f44
    MOVSD ES:EDI,ESI                    ; 004f1f45
    LEA EAX,[ESP + 0x14]                ; 004f1f46
    LEA ESI,[ESP + 0x80]                ; 004f1f4a
    CMP EAX,ESI                         ; 004f1f51
    JZ 0x004f1f76                       ; 004f1f53
        ;   XREF to: 004f1f76 (CONDITIONAL_JUMP)  ; LAB_004f1f76
    MOV EAX,dword ptr [ESP + 0x80]      ; 004f1f55
    MOV dword ptr [ESP + 0x14],EAX      ; 004f1f5c
    MOV EAX,dword ptr [ESP + 0x84]      ; 004f1f60
    MOV dword ptr [ESP + 0x18],EAX      ; 004f1f67
    MOV EAX,dword ptr [ESP + 0x88]      ; 004f1f6b
    MOV dword ptr [ESP + 0x1c],EAX      ; 004f1f72
    FLD float ptr [ESP + 0x18]          ; 004f1f76
        ;   Label: LAB_004f1f76
    FSUB float ptr [EBX + 0x34]         ; 004f1f7a
    SUB ESP,0x4                         ; 004f1f7d
    FSTP float ptr [ESP]                ; 004f1f80
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004f1f83
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0xe0],EAX      ; 004f1f88
    FLD float ptr [ESP + 0xe0]          ; 004f1f8f
    ADD ESP,0x4                         ; 004f1f96
    FST float ptr [ESP + 0x30]          ; 004f1f99
    FCOMP float ptr [ESP + 0xbc]        ; 004f1f9d
    FNSTSW AX                           ; 004f1fa4
    SAHF                                ; 004f1fa6
    JBE 0x004f1fb4                      ; 004f1fa7
        ;   XREF to: 004f1fb4 (CONDITIONAL_JUMP)  ; LAB_004f1fb4
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004f1fa9
    MOV dword ptr [ESP + 0x30],EAX      ; 004f1fb0
    FLD float ptr [ESP + 0x30]          ; 004f1fb4
        ;   Label: LAB_004f1fb4
    FLD float ptr [ESP + 0xbc]          ; 004f1fb8
    FCHS                                ; 004f1fbf
    FSTP float ptr [ESP + 0xd8]         ; 004f1fc1
    FCOMP float ptr [ESP + 0xd8]        ; 004f1fc8
    FNSTSW AX                           ; 004f1fcf
    SAHF                                ; 004f1fd1
    JNC 0x004f1fdf                      ; 004f1fd2
        ;   XREF to: 004f1fdf (CONDITIONAL_JUMP)  ; LAB_004f1fdf
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004f1fd4
    MOV dword ptr [ESP + 0x30],EAX      ; 004f1fdb
    FLD float ptr [EBP + 0x18]          ; 004f1fdf
        ;   Label: LAB_004f1fdf
    FLD float ptr [ESP + 0x30]          ; 004f1fe2
    FSUB float ptr [EBX + 0x1ffc0]      ; 004f1fe6
    FXCH                                ; 004f1fec
    FMUL float ptr [0x005e5447]         ; 004f1fee | DAT_005e5447
    FXCH                                ; 004f1ff4
    FSTP float ptr [ESP + 0xc4]         ; 004f1ff6
    FSTP float ptr [ESP + 0xb0]         ; 004f1ffd
    FLD float ptr [ESP + 0xc4]          ; 004f2004
    FCOMP float ptr [ESP + 0xb0]        ; 004f200b
    FNSTSW AX                           ; 004f2012
    SAHF                                ; 004f2014
    JBE 0x004f2025                      ; 004f2015
        ;   XREF to: 004f2025 (CONDITIONAL_JUMP)  ; LAB_004f2025
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004f2017
    MOV dword ptr [ESP + 0xc4],EAX      ; 004f201e
    FLD float ptr [EBP + 0x18]          ; 004f2025
        ;   Label: LAB_004f2025
    FMUL float ptr [0x005e544b]         ; 004f2028 | DAT_005e544b
    FLD float ptr [ESP + 0xc4]          ; 004f202e
    FXCH                                ; 004f2035
    FSTP float ptr [ESP + 0xac]         ; 004f2037
    FCOMP float ptr [ESP + 0xac]        ; 004f203e
    FNSTSW AX                           ; 004f2045
    SAHF                                ; 004f2047
    JNC 0x004f2058                      ; 004f2048
        ;   XREF to: 004f2058 (CONDITIONAL_JUMP)  ; LAB_004f2058
    MOV EAX,dword ptr [ESP + 0xac]      ; 004f204a
    MOV dword ptr [ESP + 0xc4],EAX      ; 004f2051
    FLD float ptr [EBX + 0x1ffc0]       ; 004f2058
        ;   Label: LAB_004f2058
    FADD float ptr [ESP + 0xc4]         ; 004f205e
    FSTP float ptr [EBX + 0x1ffc0]      ; 004f2065
    MOV ESP,EBP                         ; 004f206b
        ;   Label: LAB_004f206b
    POP EBP                             ; 004f206d
    POP EDI                             ; 004f206e
    POP ESI                             ; 004f206f
    POP EBX                             ; 004f2070
    RET                                 ; 004f2071
    CMP EDI,0x3                         ; 004f2072
        ;   Label: LAB_004f2072
    JZ 0x004f1c84                       ; 004f2075
        ;   XREF to: 004f1c84 (CONDITIONAL_JUMP)  ; LAB_004f1c84
    JMP 0x004f1cd4                      ; 004f207b
        ;   XREF to: 004f1cd4 (UNCONDITIONAL_JUMP)  ; LAB_004f1cd4
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 004f2080
        ;   Label: LAB_004f2080
    JZ 0x004f1cd4                       ; 004f2087
        ;   XREF to: 004f1cd4 (CONDITIONAL_JUMP)  ; LAB_004f1cd4
    MOV dword ptr [EBX + 0xc1f0],0x1    ; 004f208d
    JMP 0x004f1cd4                      ; 004f2097
        ;   XREF to: 004f1cd4 (UNCONDITIONAL_JUMP)  ; LAB_004f1cd4
    PUSH EAX                            ; 004f209c
        ;   Label: LAB_004f209c
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004f209d
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f20a2
    ADD ESP,0x4                         ; 004f20a5
    CMP EAX,0x2                         ; 004f20a8
    JZ 0x004f1daf                       ; 004f20ab
        ;   XREF to: 004f1daf (CONDITIONAL_JUMP)  ; LAB_004f1daf
    CMP EAX,0x1                         ; 004f20b1
    JZ 0x004f1daf                       ; 004f20b4
        ;   XREF to: 004f1daf (CONDITIONAL_JUMP)  ; LAB_004f1daf
    MOV dword ptr [EBX + 0xc1e4],0x1    ; 004f20ba
    JMP 0x004f1daf                      ; 004f20c4
        ;   XREF to: 004f1daf (UNCONDITIONAL_JUMP)  ; LAB_004f1daf
    PUSH EAX                            ; 004f20c9
        ;   Label: LAB_004f20c9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004f20ca
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f20cf
    ADD ESP,0x4                         ; 004f20d2
    CMP EAX,0xa                         ; 004f20d5
    JNZ 0x004f20ed                      ; 004f20d8
        ;   XREF to: 004f20ed (CONDITIONAL_JUMP)  ; LAB_004f20ed
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 004f20da
    JZ 0x004f20ed                       ; 004f20e1
        ;   XREF to: 004f20ed (CONDITIONAL_JUMP)  ; LAB_004f20ed
    MOV dword ptr [EBX + 0xc1f0],0x1    ; 004f20e3
    MOV EAX,[0x01d06ab4]                ; 004f20ed | DAT_01d06ab4
        ;   Label: LAB_004f20ed
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004f20f2
    PUSH EAX                            ; 004f20f9
    MOV EDX,dword ptr [EAX + 0x154]     ; 004f20fa
    CALL dword ptr [EDX + 0x148]        ; 004f2100
    ADD ESP,0x4                         ; 004f2106
    TEST EAX,EAX                        ; 004f2109
    JNZ 0x004f1db9                      ; 004f210b
        ;   XREF to: 004f1db9 (CONDITIONAL_JUMP)  ; LAB_004f1db9
    PUSH dword ptr [EBP + 0x18]         ; 004f2111
    PUSH EBX                            ; 004f2114
    CALL core_charactr.cpp_FUN_00434c60 ; 004f2115
        ;   XREF to: 00434c60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434c60()
    ADD ESP,0x8                         ; 004f211a
    CMP EAX,0x1                         ; 004f211d
    JC 0x004f1db9                       ; 004f2120
        ;   XREF to: 004f1db9 (CONDITIONAL_JUMP)  ; LAB_004f1db9
    JA 0x004f2150                       ; 004f2126
        ;   XREF to: 004f2150 (CONDITIONAL_JUMP)  ; LAB_004f2150
    MOV dword ptr [EBX + 0xc1d8],0x1    ; 004f2128
    JMP 0x004f1db9                      ; 004f2132
        ;   XREF to: 004f1db9 (UNCONDITIONAL_JUMP)  ; LAB_004f1db9
    MOV dword ptr [EBX + 0xc1e0],0x1    ; 004f2137
        ;   Label: LAB_004f2137
    MOV dword ptr [EBX + 0xc1d8],0x1    ; 004f2141
    JMP 0x004f1db9                      ; 004f214b
        ;   XREF to: 004f1db9 (UNCONDITIONAL_JUMP)  ; LAB_004f1db9
    CMP EAX,0x2                         ; 004f2150
        ;   Label: LAB_004f2150
    JZ 0x004f2137                       ; 004f2153
        ;   XREF to: 004f2137 (CONDITIONAL_JUMP)  ; LAB_004f2137
    JMP 0x004f1db9                      ; 004f2155
        ;   XREF to: 004f1db9 (UNCONDITIONAL_JUMP)  ; LAB_004f1db9
    MOV EDI,dword ptr [ESP + 0xc8]      ; 004f215a
        ;   Label: LAB_004f215a
    XOR ESI,ESI                         ; 004f2161
    TEST EDI,EDI                        ; 004f2163
    JNZ 0x004f22cd                      ; 004f2165
        ;   XREF to: 004f22cd (CONDITIONAL_JUMP)  ; LAB_004f22cd
    MOV EAX,[0x01d06ab4]                ; 004f216b | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004f2170
    PUSH EAX                            ; 004f2177
    MOV ESI,dword ptr [EAX + 0x154]     ; 004f2178
    CALL dword ptr [ESI + 0xc4]         ; 004f217e
    MOV ESI,EAX                         ; 004f2184
    MOV EAX,[0x01d06ab4]                ; 004f2186 | DAT_01d06ab4
    ADD ESP,0x4                         ; 004f218b
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004f218e
    PUSH EAX                            ; 004f2195
    MOV EDX,dword ptr [EAX + 0x154]     ; 004f2196
    CALL dword ptr [EDX + 0x148]        ; 004f219c
    ADD ESP,0x4                         ; 004f21a2
    TEST EAX,EAX                        ; 004f21a5
    JZ 0x004f22ac                       ; 004f21a7
        ;   XREF to: 004f22ac (CONDITIONAL_JUMP)  ; LAB_004f22ac
    TEST ESI,ESI                        ; 004f21ad
        ;   Label: LAB_004f21ad
    JNZ 0x004f21c6                      ; 004f21af
        ;   XREF to: 004f21c6 (CONDITIONAL_JUMP)  ; LAB_004f21c6
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004f21b1
    ADD EAX,0x20                        ; 004f21b8
    PUSH EAX                            ; 004f21bb
    CALL core_path.cpp_getPathMap_FUN_005351f0 ; 004f21bc
        ;   XREF to: 005351f0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_005351f0(CLocation * location)
    ADD ESP,0x4                         ; 004f21c1
    MOV ESI,EAX                         ; 004f21c4
    MOV EAX,dword ptr [EBX + 0x6c]      ; 004f21c6
        ;   Label: LAB_004f21c6
    PUSH EAX                            ; 004f21c9
    LEA EAX,[ESP + 0x24]                ; 004f21ca
    PUSH EAX                            ; 004f21ce
    LEA EAX,[EBX + 0x20]                ; 004f21cf
    PUSH EAX                            ; 004f21d2
    PUSH ESI                            ; 004f21d3
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0 ; 004f21d4
        ;   XREF to: 005349a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 004f21d9
    TEST EAX,EAX                        ; 004f21dc
    JZ 0x004f1e9d                       ; 004f21de
        ;   XREF to: 004f1e9d (CONDITIONAL_JUMP)  ; LAB_004f1e9d
    FLD float ptr [ESP + 0x24]          ; 004f21e4
    FSUB float ptr [EBX + 0x34]         ; 004f21e8
    SUB ESP,0x4                         ; 004f21eb
    FSTP float ptr [ESP]                ; 004f21ee
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004f21f1
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0xe0],EAX      ; 004f21f6
    FLD float ptr [ESP + 0xe0]          ; 004f21fd
    FMUL float ptr [0x005e541f]         ; 004f2204 | DAT_005e541f
    ADD ESP,0x4                         ; 004f220a
    FMUL double ptr [0x005e5427]        ; 004f220d | DAT_005e5427
    FLD float ptr [ESP + 0xcc]          ; 004f2213
    FCHS                                ; 004f221a
    FSTP float ptr [ESP + 0xb4]         ; 004f221c
    FST float ptr [EBX + 0xc200]        ; 004f2223
    FCOMP float ptr [ESP + 0xb4]        ; 004f2229
    FNSTSW AX                           ; 004f2230
    SAHF                                ; 004f2232
    JC 0x004f22d8                       ; 004f2233
        ;   XREF to: 004f22d8 (CONDITIONAL_JUMP)  ; LAB_004f22d8
    FLD float ptr [EBX + 0xc200]        ; 004f2239
        ;   Label: LAB_004f2239
    FCOMP float ptr [ESP + 0xcc]        ; 004f223f
    FNSTSW AX                           ; 004f2246
    SAHF                                ; 004f2248
    JBE 0x004f2258                      ; 004f2249
        ;   XREF to: 004f2258 (CONDITIONAL_JUMP)  ; LAB_004f2258
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004f224b
    MOV dword ptr [EBX + 0xc200],EAX    ; 004f2252
    FLD float ptr [ESP + 0x10]          ; 004f2258
        ;   Label: LAB_004f2258
    FCOMP double ptr [0x005e542f]       ; 004f225c | DAT_005e542f
    FNSTSW AX                           ; 004f2262
    SAHF                                ; 004f2264
    JNC 0x004f22ea                      ; 004f2265
        ;   XREF to: 004f22ea (CONDITIONAL_JUMP)  ; LAB_004f22ea
    CMP dword ptr [ESP + 0xc8],0x1      ; 004f226b
    JZ 0x004f22ea                       ; 004f2273
        ;   XREF to: 004f22ea (CONDITIONAL_JUMP)  ; LAB_004f22ea
    MOV dword ptr [EBX + 0xc1d8],0x1    ; 004f2275
    JMP 0x004f1e9d                      ; 004f227f
        ;   XREF to: 004f1e9d (UNCONDITIONAL_JUMP)  ; LAB_004f1e9d
    MOV dword ptr [EBX + 0xc1d8],0x1    ; 004f2284
        ;   Label: LAB_004f2284
    JMP 0x004f21ad                      ; 004f228e
        ;   XREF to: 004f21ad (UNCONDITIONAL_JUMP)  ; LAB_004f21ad
    MOV dword ptr [EBX + 0xc1e0],0x1    ; 004f2293
        ;   Label: LAB_004f2293
    MOV dword ptr [EBX + 0xc1d8],0x1    ; 004f229d
    JMP 0x004f21ad                      ; 004f22a7
        ;   XREF to: 004f21ad (UNCONDITIONAL_JUMP)  ; LAB_004f21ad
    PUSH dword ptr [EBP + 0x18]         ; 004f22ac
        ;   Label: LAB_004f22ac
    PUSH EBX                            ; 004f22af
    CALL core_charactr.cpp_FUN_00434c60 ; 004f22b0
        ;   XREF to: 00434c60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434c60()
    ADD ESP,0x8                         ; 004f22b5
    CMP EAX,0x1                         ; 004f22b8
    JC 0x004f21ad                       ; 004f22bb
        ;   XREF to: 004f21ad (CONDITIONAL_JUMP)  ; LAB_004f21ad
    JBE 0x004f2284                      ; 004f22c1
        ;   XREF to: 004f2284 (CONDITIONAL_JUMP)  ; LAB_004f2284
    CMP EAX,0x2                         ; 004f22c3
    JZ 0x004f2293                       ; 004f22c6
        ;   XREF to: 004f2293 (CONDITIONAL_JUMP)  ; LAB_004f2293
    JMP 0x004f21ad                      ; 004f22c8
        ;   XREF to: 004f21ad (UNCONDITIONAL_JUMP)  ; LAB_004f21ad
    MOV dword ptr [EBX + 0x2fd0],ESI    ; 004f22cd
        ;   Label: LAB_004f22cd
    JMP 0x004f21ad                      ; 004f22d3
        ;   XREF to: 004f21ad (UNCONDITIONAL_JUMP)  ; LAB_004f21ad
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004f22d8
        ;   Label: LAB_004f22d8
    MOV dword ptr [EBX + 0xc200],EAX    ; 004f22df
    JMP 0x004f2239                      ; 004f22e5
        ;   XREF to: 004f2239 (UNCONDITIONAL_JUMP)  ; LAB_004f2239
    MOV dword ptr [EBX + 0xc1e0],0x1    ; 004f22ea
        ;   Label: LAB_004f22ea
    MOV dword ptr [EBX + 0xc1d8],0x1    ; 004f22f4
    JMP 0x004f1e9d                      ; 004f22fe
        ;   XREF to: 004f1e9d (UNCONDITIONAL_JUMP)  ; LAB_004f1e9d
    JBE 0x004f1ecb                      ; 004f2303
        ;   XREF to: 004f1ecb (CONDITIONAL_JUMP)  ; LAB_004f1ecb
        ;   Label: LAB_004f2303
    FLD float ptr [ESP + 0xcc]          ; 004f2309
    MOV dword ptr [EBX + 0x2508],0x0    ; 004f2310
    FCHS                                ; 004f231a
    FSTP float ptr [EBX + 0xc200]       ; 004f231c
    JMP 0x004f1ecb                      ; 004f2322
        ;   XREF to: 004f1ecb (UNCONDITIONAL_JUMP)  ; LAB_004f1ecb

