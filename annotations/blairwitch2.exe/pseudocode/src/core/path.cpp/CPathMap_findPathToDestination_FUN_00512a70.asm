; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_path_cpp_CPathMap_findPathToDestination_FUN_00512a70(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint)
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
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650 at 0051368e
;
; Referenced Globals:
;   void* switchdataD_00512a44 = 00512ad9
;   TerminatedCString s_core_path_cpp_005e17a1
;   TerminatedCString s_Out_of_bounds1_005e17b2
;   TerminatedCString s_core_path_cpp_005e17c2
;   TerminatedCString s_Out_of_bounds2_005e17d3
;   TerminatedCString s_core_path_cpp_005e17e3
;   TerminatedCString s_Out_of_bounds3_005e17f4
;   TerminatedCString s_core_path_cpp_005e1804
;   TerminatedCString s_Out_of_bounds4_005e1815
;   undefined4 DAT_0061b328
;   undefined4 DAT_0061b34c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01e501fc
;   undefined4 DAT_01e50200
;   ... and 7 more
;
; Called Functions:
;   core_dtrace.cpp_FUN_00476a50
;   core_main.c_FUN_004e4500
;   core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_005125e0
;   core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0
;   core_path.cpp_CPathMap_isLineWalkable_FUN_00512390
;   core_path.cpp_CPathMap_searchGrid_FUN_00514140
;   core_path.cpp_FUN_00511df0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00512a70
        ;   Label: core_path.cpp_CPathMap_findPathToDestination_FUN_00512a70
    PUSH ESI                            ; 00512a71
    PUSH EDI                            ; 00512a72
    PUSH EBP                            ; 00512a73
    SUB ESP,0x1d4                       ; 00512a74
    MOV EBP,dword ptr [ESP + 0x1e8]     ; 00512a7a
    MOV EBX,dword ptr [ESP + 0x1f4]     ; 00512a81
    MOV EDX,dword ptr [ESP + 0x1ec]     ; 00512a88
    PUSH EDX                            ; 00512a8f
    PUSH 0x1fc9c68                      ; 00512a90 | g_CDemonRaytraceInstance
    LEA ESI,[ESP + 0xec]                ; 00512a95
    CALL core_dtrace.cpp_FUN_00476a50   ; 00512a9c
        ;   XREF to: 00476a50 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00476a50()
    LEA ESI,[ESP + 0xec]                ; 00512aa1
    ADD ESP,0x8                         ; 00512aa8
    LEA EDI,[EBP + 0x18]                ; 00512aab
    MOV EAX,EBX                         ; 00512aae
    MOV EDX,EBX                         ; 00512ab0
    MOVSD ES:EDI,ESI                    ; 00512ab2
    MOVSD ES:EDI,ESI                    ; 00512ab3
    MOVSD ES:EDI,ESI                    ; 00512ab4
    SAR EDX,0x1f                        ; 00512ab5
    MOV ESI,0x9                         ; 00512ab8
    IDIV ESI                            ; 00512abd
    XOR ECX,ECX                         ; 00512abf
    MOV dword ptr [ESP + 0x30],ECX      ; 00512ac1
    MOV dword ptr [ESP + 0x34],ECX      ; 00512ac5
    MOV dword ptr [ESP + 0x38],ECX      ; 00512ac9
    CMP EDX,0x8                         ; 00512acd
    JA 0x00512ad9                       ; 00512ad0
        ;   XREF to: 00512ad9 (CONDITIONAL_JUMP)  ; caseD_0
    JMP dword ptr [EDX*0x4 + 0x512a44]  ; 00512ad2 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0xc]       ; 00512ad9
        ;   Label: caseD_0
    MOV EDX,dword ptr [EBP + 0x18]      ; 00512adc
    SUB EAX,EDX                         ; 00512adf
    MOV dword ptr [ESP + 0xc0],EAX      ; 00512ae1
    CDQ                                 ; 00512ae8
    XOR EAX,EDX                         ; 00512ae9
    SUB EAX,EDX                         ; 00512aeb
    CMP EAX,0x32                        ; 00512aed
    JL 0x00512c25                       ; 00512af0
        ;   XREF to: 00512c25 (CONDITIONAL_JUMP)  ; LAB_00512c25
    FLD float ptr [EBP]                 ; 00512af6
    FLD float ptr [EBP + 0x4]           ; 00512af9
    FLD float ptr [EBP + 0x8]           ; 00512afc
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 00512aff
    LEA EDI,[ESP + 0x108]               ; 00512b06
    LEA ESI,[ESP + 0xb4]                ; 00512b0d
    FXCH ST2                            ; 00512b14
    FSUB float ptr [EAX]                ; 00512b16
    FXCH                                ; 00512b18
    FSUB float ptr [EAX + 0x4]          ; 00512b1a
    FXCH ST2                            ; 00512b1d
    FSUB float ptr [EAX + 0x8]          ; 00512b1f
    FXCH                                ; 00512b22
    FSTP float ptr [ESP + 0xb4]         ; 00512b24
    FXCH                                ; 00512b2b
    FSTP float ptr [ESP + 0xb8]         ; 00512b2d
    FSTP float ptr [ESP + 0xbc]         ; 00512b34
    LEA EAX,[ESP + 0x108]               ; 00512b3b
    MOVSD ES:EDI,ESI                    ; 00512b42
    MOVSD ES:EDI,ESI                    ; 00512b43
    MOVSD ES:EDI,ESI                    ; 00512b44
    PUSH EAX                            ; 00512b45
    LEA ESI,[ESP + 0x40]                ; 00512b46
    LEA EDI,[ESP + 0x124]               ; 00512b4a
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 00512b51
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x40]                ; 00512b56
    ADD ESP,0x4                         ; 00512b5a
    LEA EAX,[ESP + 0x120]               ; 00512b5d
    MOV ECX,dword ptr [ESP + 0x1f0]     ; 00512b64
    MOVSD ES:EDI,ESI                    ; 00512b6b
    MOVSD ES:EDI,ESI                    ; 00512b6c
    MOVSD ES:EDI,ESI                    ; 00512b6d
    CMP EAX,ECX                         ; 00512b6e
    JZ 0x00512b8f                       ; 00512b70
        ;   XREF to: 00512b8f (CONDITIONAL_JUMP)  ; LAB_00512b8f
    MOV EAX,dword ptr [ESP + 0x120]     ; 00512b72
    MOV dword ptr [ECX],EAX             ; 00512b79
    MOV EAX,dword ptr [ESP + 0x124]     ; 00512b7b
    MOV dword ptr [ECX + 0x4],EAX       ; 00512b82
    MOV EAX,dword ptr [ESP + 0x128]     ; 00512b85
    MOV dword ptr [ECX + 0x8],EAX       ; 00512b8c
    MOV EAX,0x2                         ; 00512b8f
        ;   Label: LAB_00512b8f
    ADD ESP,0x1d4                       ; 00512b94
    POP EBP                             ; 00512b9a
    POP EDI                             ; 00512b9b
    POP ESI                             ; 00512b9c
    POP EBX                             ; 00512b9d
    RET                                 ; 00512b9e
    MOV dword ptr [ESP + 0x30],0x4      ; 00512b9f
        ;   Label: caseD_1
    JMP 0x00512ad9                      ; 00512ba7
        ;   XREF to: 00512ad9 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV dword ptr [ESP + 0x30],0xfffffffc ; 00512bac
        ;   Label: caseD_2
    JMP 0x00512ad9                      ; 00512bb4
        ;   XREF to: 00512ad9 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV dword ptr [ESP + 0x38],0x4      ; 00512bb9
        ;   Label: caseD_3
    JMP 0x00512ad9                      ; 00512bc1
        ;   XREF to: 00512ad9 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV dword ptr [ESP + 0x38],0xfffffffc ; 00512bc6
        ;   Label: caseD_4
    JMP 0x00512ad9                      ; 00512bce
        ;   XREF to: 00512ad9 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EAX,0x4                         ; 00512bd3
        ;   Label: caseD_5
    MOV dword ptr [ESP + 0x38],EAX      ; 00512bd8
    MOV dword ptr [ESP + 0x30],EAX      ; 00512bdc
    JMP 0x00512ad9                      ; 00512be0
        ;   XREF to: 00512ad9 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EDI,0x4                         ; 00512be5
        ;   Label: caseD_6
    MOV ESI,0xfffffffc                  ; 00512bea
    MOV dword ptr [ESP + 0x38],EDI      ; 00512bef
    MOV dword ptr [ESP + 0x30],ESI      ; 00512bf3
    JMP 0x00512ad9                      ; 00512bf7
        ;   XREF to: 00512ad9 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV ECX,0xfffffffc                  ; 00512bfc
        ;   Label: caseD_7
    MOV dword ptr [ESP + 0x38],ECX      ; 00512c01
    MOV dword ptr [ESP + 0x30],ECX      ; 00512c05
    JMP 0x00512ad9                      ; 00512c09
        ;   XREF to: 00512ad9 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EDX,0xfffffffc                  ; 00512c0e
        ;   Label: caseD_8
    MOV EAX,0x4                         ; 00512c13
    MOV dword ptr [ESP + 0x38],EDX      ; 00512c18
    MOV dword ptr [ESP + 0x30],EAX      ; 00512c1c
    JMP 0x00512ad9                      ; 00512c20
        ;   XREF to: 00512ad9 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EAX,dword ptr [EBP + 0x14]      ; 00512c25
        ;   Label: LAB_00512c25
    MOV ECX,dword ptr [EBP + 0x20]      ; 00512c28
    SUB EAX,ECX                         ; 00512c2b
    MOV dword ptr [ESP + 0xc8],EAX      ; 00512c2d
    CDQ                                 ; 00512c34
    XOR EAX,EDX                         ; 00512c35
    SUB EAX,EDX                         ; 00512c37
    CMP EAX,0x32                        ; 00512c39
    JL 0x00512ce9                       ; 00512c3c
        ;   XREF to: 00512ce9 (CONDITIONAL_JUMP)  ; LAB_00512ce9
    FLD float ptr [EBP]                 ; 00512c42
    FLD float ptr [EBP + 0x4]           ; 00512c45
    FLD float ptr [EBP + 0x8]           ; 00512c48
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 00512c4b
    LEA EDI,[ESP + 0x15c]               ; 00512c52
    LEA ESI,[ESP + 0xc]                 ; 00512c59
    FXCH ST2                            ; 00512c5d
    FSUB float ptr [EAX]                ; 00512c5f
    FXCH                                ; 00512c61
    FSUB float ptr [EAX + 0x4]          ; 00512c63
    FXCH ST2                            ; 00512c66
    FSUB float ptr [EAX + 0x8]          ; 00512c68
    FXCH                                ; 00512c6b
    FSTP float ptr [ESP + 0xc]          ; 00512c6d
    FXCH                                ; 00512c71
    FSTP float ptr [ESP + 0x10]         ; 00512c73
    FSTP float ptr [ESP + 0x14]         ; 00512c77
    LEA EAX,[ESP + 0x15c]               ; 00512c7b
    MOVSD ES:EDI,ESI                    ; 00512c82
    MOVSD ES:EDI,ESI                    ; 00512c83
    MOVSD ES:EDI,ESI                    ; 00512c84
    PUSH EAX                            ; 00512c85
    LEA ESI,[ESP + 0x154]               ; 00512c86
    LEA EDI,[ESP + 0x190]               ; 00512c8d
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 00512c94
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x154]               ; 00512c99
    ADD ESP,0x4                         ; 00512ca0
    LEA EAX,[ESP + 0x18c]               ; 00512ca3
    MOV EDX,dword ptr [ESP + 0x1f0]     ; 00512caa
    MOVSD ES:EDI,ESI                    ; 00512cb1
    MOVSD ES:EDI,ESI                    ; 00512cb2
    MOVSD ES:EDI,ESI                    ; 00512cb3
    CMP EAX,EDX                         ; 00512cb4
    JZ 0x00512b8f                       ; 00512cb6
        ;   XREF to: 00512b8f (CONDITIONAL_JUMP)  ; LAB_00512b8f
    MOV EAX,dword ptr [ESP + 0x18c]     ; 00512cbc
    MOV dword ptr [EDX],EAX             ; 00512cc3
    MOV EAX,dword ptr [ESP + 0x190]     ; 00512cc5
    MOV dword ptr [EDX + 0x4],EAX       ; 00512ccc
    MOV EAX,dword ptr [ESP + 0x194]     ; 00512ccf
    MOV dword ptr [EDX + 0x8],EAX       ; 00512cd6
    MOV EAX,0x2                         ; 00512cd9
    ADD ESP,0x1d4                       ; 00512cde
    POP EBP                             ; 00512ce4
    POP EDI                             ; 00512ce5
    POP ESI                             ; 00512ce6
    POP EBX                             ; 00512ce7
    RET                                 ; 00512ce8
    MOV EBX,0x32                        ; 00512ce9
        ;   Label: LAB_00512ce9
    MOV EAX,dword ptr [EBP + 0x18]      ; 00512cee
    MOV EDI,dword ptr [EBP + 0x24]      ; 00512cf1
    MOV EDX,dword ptr [EBP + 0x2c]      ; 00512cf4
    SUB EAX,EDI                         ; 00512cf7
    MOV dword ptr [0x01e50208],EBX      ; 00512cf9 | DAT_01e50208
    MOV [0x01e501fc],EAX                ; 00512cff | DAT_01e501fc
    MOV EAX,dword ptr [EBP + 0x20]      ; 00512d04
    MOV dword ptr [0x01e50204],EBX      ; 00512d07 | DAT_01e50204
    SUB EAX,EDX                         ; 00512d0d
    MOV ECX,dword ptr [0x01e501fc]      ; 00512d0f | DAT_01e501fc
    MOV [0x01e50200],EAX                ; 00512d15 | DAT_01e50200
    TEST ECX,ECX                        ; 00512d1a
    JL 0x00512d27                       ; 00512d1c
        ;   XREF to: 00512d27 (CONDITIONAL_JUMP)  ; LAB_00512d27
    CMP ECX,0x64                        ; 00512d1e
    JL 0x00512dd2                       ; 00512d21
        ;   XREF to: 00512dd2 (CONDITIONAL_JUMP)  ; LAB_00512dd2
    FLD float ptr [EBP]                 ; 00512d27
        ;   Label: LAB_00512d27
    FLD float ptr [EBP + 0x4]           ; 00512d2a
    FLD float ptr [EBP + 0x8]           ; 00512d2d
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 00512d30
    LEA EDI,[ESP + 0x9c]                ; 00512d37
    LEA ESI,[ESP + 0x78]                ; 00512d3e
    FXCH ST2                            ; 00512d42
    FSUB float ptr [EAX]                ; 00512d44
    FXCH                                ; 00512d46
    FSUB float ptr [EAX + 0x4]          ; 00512d48
    FXCH ST2                            ; 00512d4b
    FSUB float ptr [EAX + 0x8]          ; 00512d4d
    FXCH                                ; 00512d50
    FSTP float ptr [ESP + 0x78]         ; 00512d52
    FXCH                                ; 00512d56
    FSTP float ptr [ESP + 0x7c]         ; 00512d58
    FSTP float ptr [ESP + 0x80]         ; 00512d5c
    LEA EAX,[ESP + 0x9c]                ; 00512d63
    MOVSD ES:EDI,ESI                    ; 00512d6a
    MOVSD ES:EDI,ESI                    ; 00512d6b
    MOVSD ES:EDI,ESI                    ; 00512d6c
    PUSH EAX                            ; 00512d6d
    LEA ESI,[ESP + 0x19c]               ; 00512d6e
    LEA EDI,[ESP + 0x148]               ; 00512d75
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 00512d7c
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x19c]               ; 00512d81
    ADD ESP,0x4                         ; 00512d88
    LEA EAX,[ESP + 0x144]               ; 00512d8b
    MOV EBP,dword ptr [ESP + 0x1f0]     ; 00512d92
    MOVSD ES:EDI,ESI                    ; 00512d99
    MOVSD ES:EDI,ESI                    ; 00512d9a
    MOVSD ES:EDI,ESI                    ; 00512d9b
    CMP EAX,EBP                         ; 00512d9c
    JZ 0x00512b8f                       ; 00512d9e
        ;   XREF to: 00512b8f (CONDITIONAL_JUMP)  ; LAB_00512b8f
    MOV EAX,dword ptr [ESP + 0x144]     ; 00512da4
    MOV dword ptr [EBP],EAX             ; 00512dab
    MOV EAX,dword ptr [ESP + 0x148]     ; 00512dae
    MOV dword ptr [EBP + 0x4],EAX       ; 00512db5
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00512db8
    MOV dword ptr [EBP + 0x8],EAX       ; 00512dbf
    MOV EAX,0x2                         ; 00512dc2
    ADD ESP,0x1d4                       ; 00512dc7
    POP EBP                             ; 00512dcd
    POP EDI                             ; 00512dce
    POP ESI                             ; 00512dcf
    POP EBX                             ; 00512dd0
    RET                                 ; 00512dd1
    TEST EAX,EAX                        ; 00512dd2
        ;   Label: LAB_00512dd2
    JL 0x00512d27                       ; 00512dd4
        ;   XREF to: 00512d27 (CONDITIONAL_JUMP)  ; LAB_00512d27
    CMP EAX,0x64                        ; 00512dda
    JGE 0x00512d27                      ; 00512ddd
        ;   XREF to: 00512d27 (CONDITIONAL_JUMP)  ; LAB_00512d27
    CMP ECX,EBX                         ; 00512de3
    JNZ 0x00512def                      ; 00512de5
        ;   XREF to: 00512def (CONDITIONAL_JUMP)  ; LAB_00512def
    CMP EAX,EBX                         ; 00512de7
    JZ 0x0051300f                       ; 00512de9
        ;   XREF to: 0051300f (CONDITIONAL_JUMP)  ; LAB_0051300f
    FLD float ptr [EBP]                 ; 00512def
        ;   Label: LAB_00512def
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 00512df2
    CALL crt_math.c_round_FUN_005b7ff0  ; 00512df9
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x1d0]       ; 00512dfe
    FLD float ptr [EAX]                 ; 00512e05
    CALL crt_math.c_round_FUN_005b7ff0  ; 00512e07
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 00512e0c
    FISTP dword ptr [ESP + 0x1d0]       ; 00512e13
    SUB EAX,dword ptr [ESP + 0x1d0]     ; 00512e1a
    CDQ                                 ; 00512e21
    XOR EAX,EDX                         ; 00512e22
    SUB EAX,EDX                         ; 00512e24
    FLD float ptr [EBP + 0x8]           ; 00512e26
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 00512e29
    CALL crt_math.c_round_FUN_005b7ff0  ; 00512e30
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x1d0]       ; 00512e35
    FLD float ptr [EAX + 0x8]           ; 00512e3c
    CALL crt_math.c_round_FUN_005b7ff0  ; 00512e3f
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 00512e44
    FISTP dword ptr [ESP + 0x1d0]       ; 00512e4b
    SUB EAX,dword ptr [ESP + 0x1d0]     ; 00512e52
    CDQ                                 ; 00512e59
    XOR EAX,EDX                         ; 00512e5a
    SUB EAX,EDX                         ; 00512e5c
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00512e5e
    PUSH ESI                            ; 00512e61
    MOV EDI,dword ptr [0x01e501fc]      ; 00512e62 | DAT_01e501fc
    PUSH EDI                            ; 00512e68
    MOV EAX,[0x01e50200]                ; 00512e69 | DAT_01e50200
    PUSH EAX                            ; 00512e6e
    PUSH EBP                            ; 00512e6f
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0 ; 00512e70
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00512e75
    MOV EDX,dword ptr [EBP + 0x10]      ; 00512e78
    PUSH EDX                            ; 00512e7b
    MOV ECX,dword ptr [0x01e50204]      ; 00512e7c | DAT_01e50204
    PUSH ECX                            ; 00512e82
    MOV ESI,dword ptr [0x01e50208]      ; 00512e83 | DAT_01e50208
    PUSH ESI                            ; 00512e89
    PUSH EBP                            ; 00512e8a
    MOV EBX,EAX                         ; 00512e8b
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0 ; 00512e8d
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00512e92
    PUSH EAX                            ; 00512e95
    MOV EDI,dword ptr [0x01e50208]      ; 00512e96 | DAT_01e50208
    PUSH EDI                            ; 00512e9c
    MOV EAX,[0x01e50204]                ; 00512e9d | DAT_01e50204
    PUSH EAX                            ; 00512ea2
    PUSH EBX                            ; 00512ea3
    MOV EDX,dword ptr [0x01e50200]      ; 00512ea4 | DAT_01e50200
    PUSH EDX                            ; 00512eaa
    MOV ECX,dword ptr [0x01e501fc]      ; 00512eab | DAT_01e501fc
    PUSH ECX                            ; 00512eb1
    PUSH EBP                            ; 00512eb2
    CALL core_path.cpp_CPathMap_isLineWalkable_FUN_00512390 ; 00512eb3
        ;   XREF to: 00512390 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_isLineWalkable_FUN_00512390(CPathMap * this_ptr, int start_x, int start_z, int start_height, ...)
    ADD ESP,0x1c                        ; 00512eb8
    TEST EAX,EAX                        ; 00512ebb
    JZ 0x005130a6                       ; 00512ebd
        ;   XREF to: 005130a6 (CONDITIONAL_JUMP)  ; LAB_005130a6
    LEA EDI,[ESP + 0x174]               ; 00512ec3
    MOV ESI,0x1fc9c9c                   ; 00512eca
    MOVSD ES:EDI,ESI                    ; 00512ecf | g_CDemonRaytraceInstance.adjusted_size.x
    MOVSD ES:EDI,ESI                    ; 00512ed0 | g_CDemonRaytraceInstance.adjusted_size.y
    MOVSD ES:EDI,ESI                    ; 00512ed1 | g_CDemonRaytraceInstance.adjusted_size.z
    LEA EDI,[ESP + 0x114]               ; 00512ed2
    LEA ESI,[ESP + 0x174]               ; 00512ed9
    LEA EAX,[ESP + 0xa8]                ; 00512ee0
    MOVSD ES:EDI,ESI                    ; 00512ee7
    MOVSD ES:EDI,ESI                    ; 00512ee8
    MOVSD ES:EDI,ESI                    ; 00512ee9
    CMP EAX,EBP                         ; 00512eea
    JZ 0x00512f0c                       ; 00512eec
        ;   XREF to: 00512f0c (CONDITIONAL_JUMP)  ; LAB_00512f0c
    MOV EAX,dword ptr [EBP]             ; 00512eee
    MOV dword ptr [ESP + 0xa8],EAX      ; 00512ef1
    MOV EAX,dword ptr [EBP + 0x4]       ; 00512ef8
    MOV dword ptr [ESP + 0xac],EAX      ; 00512efb
    MOV EAX,dword ptr [EBP + 0x8]       ; 00512f02
    MOV dword ptr [ESP + 0xb0],EAX      ; 00512f05
    MOV EAX,dword ptr [ESP + 0x30]      ; 00512f0c
        ;   Label: LAB_00512f0c
    MOV dword ptr [ESP + 0x1d0],EAX     ; 00512f10
    FILD dword ptr [ESP + 0x1d0]        ; 00512f17
    MOV EAX,dword ptr [ESP + 0x38]      ; 00512f1e
    FMUL float ptr [ESP + 0x114]        ; 00512f22
    MOV dword ptr [ESP + 0x1d0],EAX     ; 00512f29
    FILD dword ptr [ESP + 0x1d0]        ; 00512f30
    FMUL float ptr [ESP + 0x11c]        ; 00512f37
    LEA EDI,[ESP + 0xcc]                ; 00512f3e
    LEA ESI,[ESP + 0xd8]                ; 00512f45
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 00512f4c
    FXCH                                ; 00512f53
    FADD float ptr [ESP + 0xa8]         ; 00512f55
    FXCH                                ; 00512f5c
    FADD float ptr [ESP + 0xb0]         ; 00512f5e
    FXCH                                ; 00512f65
    FSTP float ptr [ESP + 0xa8]         ; 00512f67
    FSTP float ptr [ESP + 0xb0]         ; 00512f6e
    FLD float ptr [EBP]                 ; 00512f75
    FLD float ptr [EBP + 0x4]           ; 00512f78
    FLD float ptr [EBP + 0x8]           ; 00512f7b
    FXCH ST2                            ; 00512f7e
    FSUB float ptr [EAX]                ; 00512f80
    FXCH                                ; 00512f82
    FSUB float ptr [EAX + 0x4]          ; 00512f84
    FXCH ST2                            ; 00512f87
    FSUB float ptr [EAX + 0x8]          ; 00512f89
    FXCH                                ; 00512f8c
    FSTP float ptr [ESP + 0xd8]         ; 00512f8e
    FXCH                                ; 00512f95
    FSTP float ptr [ESP + 0xdc]         ; 00512f97
    FSTP float ptr [ESP + 0xe0]         ; 00512f9e
    LEA EAX,[ESP + 0xcc]                ; 00512fa5
    MOVSD ES:EDI,ESI                    ; 00512fac
    MOVSD ES:EDI,ESI                    ; 00512fad
    MOVSD ES:EDI,ESI                    ; 00512fae
    PUSH EAX                            ; 00512faf
    LEA ESI,[ESP + 0x13c]               ; 00512fb0
    LEA EDI,[ESP + 0x100]               ; 00512fb7
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 00512fbe
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x13c]               ; 00512fc3
    ADD ESP,0x4                         ; 00512fca
    MOVSD ES:EDI,ESI                    ; 00512fcd
    MOVSD ES:EDI,ESI                    ; 00512fce
    MOVSD ES:EDI,ESI                    ; 00512fcf
    LEA EAX,[ESP + 0xfc]                ; 00512fd0
    MOV ESI,dword ptr [ESP + 0x1f0]     ; 00512fd7
    CMP EAX,ESI                         ; 00512fde
    JZ 0x00512fff                       ; 00512fe0
        ;   XREF to: 00512fff (CONDITIONAL_JUMP)  ; LAB_00512fff
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00512fe2
    MOV dword ptr [ESI],EAX             ; 00512fe9
    MOV EAX,dword ptr [ESP + 0x100]     ; 00512feb
    MOV dword ptr [ESI + 0x4],EAX       ; 00512ff2
    MOV EAX,dword ptr [ESP + 0x104]     ; 00512ff5
    MOV dword ptr [ESI + 0x8],EAX       ; 00512ffc
    MOV EAX,0x1                         ; 00512fff
        ;   Label: LAB_00512fff
    ADD ESP,0x1d4                       ; 00513004
    POP EBP                             ; 0051300a
    POP EDI                             ; 0051300b
    POP ESI                             ; 0051300c
    POP EBX                             ; 0051300d
    RET                                 ; 0051300e
    FLD float ptr [EBP]                 ; 0051300f
        ;   Label: LAB_0051300f
    FLD float ptr [EBP + 0x4]           ; 00513012
    FLD float ptr [EBP + 0x8]           ; 00513015
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 00513018
    LEA EDI,[ESP + 0x1a4]               ; 0051301f
    LEA ESI,[ESP + 0x1b0]               ; 00513026
    FXCH ST2                            ; 0051302d
    FSUB float ptr [EAX]                ; 0051302f
    FXCH                                ; 00513031
    FSUB float ptr [EAX + 0x4]          ; 00513033
    FXCH ST2                            ; 00513036
    FSUB float ptr [EAX + 0x8]          ; 00513038
    FXCH                                ; 0051303b
    FSTP float ptr [ESP + 0x1b0]        ; 0051303d
    FXCH                                ; 00513044
    FSTP float ptr [ESP + 0x1b4]        ; 00513046
    FSTP float ptr [ESP + 0x1b8]        ; 0051304d
    LEA EAX,[ESP + 0x1a4]               ; 00513054
    MOVSD ES:EDI,ESI                    ; 0051305b
    MOVSD ES:EDI,ESI                    ; 0051305c
    MOVSD ES:EDI,ESI                    ; 0051305d
    PUSH EAX                            ; 0051305e
    LEA ESI,[ESP + 0x28]                ; 0051305f
    LEA EDI,[ESP + 0x4]                 ; 00513063
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 00513067
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x28]                ; 0051306c
    ADD ESP,0x4                         ; 00513070
    MOVSD ES:EDI,ESI                    ; 00513073
    MOVSD ES:EDI,ESI                    ; 00513074
    MOVSD ES:EDI,ESI                    ; 00513075
    MOV EAX,ESP                         ; 00513076
    MOV EDI,dword ptr [ESP + 0x1f0]     ; 00513078
    CMP EAX,EDI                         ; 0051307f
    JZ 0x00513096                       ; 00513081
        ;   XREF to: 00513096 (CONDITIONAL_JUMP)  ; LAB_00513096
    MOV EAX,dword ptr [ESP]             ; 00513083
    MOV dword ptr [EDI],EAX             ; 00513086
    MOV EAX,dword ptr [ESP + 0x4]       ; 00513088
    MOV dword ptr [EDI + 0x4],EAX       ; 0051308c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0051308f
    MOV dword ptr [EDI + 0x8],EAX       ; 00513093
    MOV EAX,0x1                         ; 00513096
        ;   Label: LAB_00513096
    ADD ESP,0x1d4                       ; 0051309b
    POP EBP                             ; 005130a1
    POP EDI                             ; 005130a2
    POP ESI                             ; 005130a3
    POP EBX                             ; 005130a4
    RET                                 ; 005130a5
    MOV EBX,dword ptr [0x01e50200]      ; 005130a6 | DAT_01e50200
        ;   Label: LAB_005130a6
    PUSH EBX                            ; 005130ac
    MOV ESI,dword ptr [0x01e501fc]      ; 005130ad | DAT_01e501fc
    PUSH ESI                            ; 005130b3
    MOV EDI,dword ptr [0x01e50208]      ; 005130b4 | DAT_01e50208
    PUSH EDI                            ; 005130ba
    MOV EAX,[0x01e50204]                ; 005130bb | DAT_01e50204
    PUSH EAX                            ; 005130c0
    PUSH EBP                            ; 005130c1
    CALL core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_005125e0 ; 005130c2
        ;   XREF to: 005125e0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_005125e0(CPathMap * this_ptr, int start_x, int start_z, int end_x, ...)
    ADD ESP,0x14                        ; 005130c7
    TEST EAX,EAX                        ; 005130ca
    JZ 0x005131a7                       ; 005130cc
        ;   XREF to: 005131a7 (CONDITIONAL_JUMP)  ; LAB_005131a7
    CMP EAX,0x1                         ; 005130d2
    JNZ 0x00513166                      ; 005130d5
        ;   XREF to: 00513166 (CONDITIONAL_JUMP)  ; LAB_00513166
    MOV EDI,dword ptr [0x01e501fc]      ; 005130db | DAT_01e501fc
    MOV EAX,[0x01e50204]                ; 005130e1 | DAT_01e50204
    CMP EAX,EDI                         ; 005130e6
    JLE 0x00513141                      ; 005130e8
        ;   XREF to: 00513141 (CONDITIONAL_JUMP)  ; LAB_00513141
    MOV EAX,0x3                         ; 005130ea
        ;   Label: LAB_005130ea
    MOV EBX,dword ptr [ESP + 0x1ec]     ; 005130ef
        ;   Label: LAB_005130ef
    PUSH EBX                            ; 005130f6
    PUSH -0x1                           ; 005130f7
    PUSH -0x1                           ; 005130f9
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 005130fb
    PUSH EAX                            ; 00513102
    MOV dword ptr [EDX],0x0             ; 00513103
    PUSH EBP                            ; 00513109
    MOV dword ptr [EDX + 0x8],0x0       ; 0051310a
    CALL core_path.cpp_FUN_00511df0     ; 00513111
        ;   XREF to: 00511df0 (UNCONDITIONAL_CALL)  ; undefined core_path.cpp_FUN_00511df0()
    MOV dword ptr [ESP + 0x1e4],EAX     ; 00513116
    FLD float ptr [ESP + 0x1e4]         ; 0051311d
    ADD ESP,0x14                        ; 00513124
    MOV EAX,dword ptr [ESP + 0x1f0]     ; 00513127
    FSTP float ptr [EAX + 0x4]          ; 0051312e
    MOV EAX,0x1                         ; 00513131
    ADD ESP,0x1d4                       ; 00513136
    POP EBP                             ; 0051313c
    POP EDI                             ; 0051313d
    POP ESI                             ; 0051313e
    POP EBX                             ; 0051313f
    RET                                 ; 00513140
    JGE 0x0051314a                      ; 00513141
        ;   XREF to: 0051314a (CONDITIONAL_JUMP)  ; LAB_0051314a
        ;   Label: LAB_00513141
    MOV EAX,0x4                         ; 00513143
    JMP 0x005130ef                      ; 00513148
        ;   XREF to: 005130ef (UNCONDITIONAL_JUMP)  ; LAB_005130ef
    MOV ECX,dword ptr [0x01e50200]      ; 0051314a | DAT_01e50200
        ;   Label: LAB_0051314a
    CMP ECX,dword ptr [0x01e50208]      ; 00513150 | DAT_01e50208
    JGE 0x0051315f                      ; 00513156
        ;   XREF to: 0051315f (CONDITIONAL_JUMP)  ; LAB_0051315f
    MOV EAX,0x1                         ; 00513158
    JMP 0x005130ef                      ; 0051315d
        ;   XREF to: 005130ef (UNCONDITIONAL_JUMP)  ; LAB_005130ef
    MOV EAX,0x2                         ; 0051315f
        ;   Label: LAB_0051315f
    JMP 0x005130ef                      ; 00513164
        ;   XREF to: 005130ef (UNCONDITIONAL_JUMP)  ; LAB_005130ef
    MOV ECX,dword ptr [0x01e50200]      ; 00513166 | DAT_01e50200
        ;   Label: LAB_00513166
    MOV EAX,[0x01e50208]                ; 0051316c | DAT_01e50208
    CMP EAX,ECX                         ; 00513171
    JLE 0x0051317f                      ; 00513173
        ;   XREF to: 0051317f (CONDITIONAL_JUMP)  ; LAB_0051317f
    MOV EAX,0x1                         ; 00513175
    JMP 0x005130ef                      ; 0051317a
        ;   XREF to: 005130ef (UNCONDITIONAL_JUMP)  ; LAB_005130ef
    JGE 0x0051318b                      ; 0051317f
        ;   XREF to: 0051318b (CONDITIONAL_JUMP)  ; LAB_0051318b
        ;   Label: LAB_0051317f
    MOV EAX,0x2                         ; 00513181
    JMP 0x005130ef                      ; 00513186
        ;   XREF to: 005130ef (UNCONDITIONAL_JUMP)  ; LAB_005130ef
    MOV ESI,dword ptr [0x01e501fc]      ; 0051318b | DAT_01e501fc
        ;   Label: LAB_0051318b
    CMP ESI,dword ptr [0x01e50204]      ; 00513191 | DAT_01e50204
    JL 0x005130ea                       ; 00513197
        ;   XREF to: 005130ea (CONDITIONAL_JUMP)  ; LAB_005130ea
    MOV EAX,0x4                         ; 0051319d
    JMP 0x005130ef                      ; 005131a2
        ;   XREF to: 005130ef (UNCONDITIONAL_JUMP)  ; LAB_005130ef
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005131a7
        ;   Label: LAB_005131a7
    PUSH EDX                            ; 005131aa
    PUSH EBP                            ; 005131ab
    CALL core_path.cpp_CPathMap_searchGrid_FUN_00514140 ; 005131ac
        ;   XREF to: 00514140 (UNCONDITIONAL_CALL)  ; uint core_path.cpp_CPathMap_searchGrid_FUN_00514140(CPathMap * this_ptr, int start_height)
    ADD ESP,0x8                         ; 005131b1
    TEST EAX,EAX                        ; 005131b4
    JNZ 0x00513263                      ; 005131b6
        ;   XREF to: 00513263 (CONDITIONAL_JUMP)  ; LAB_00513263
    FLD float ptr [EBP]                 ; 005131bc
    FLD float ptr [EBP + 0x4]           ; 005131bf
    FLD float ptr [EBP + 0x8]           ; 005131c2
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 005131c5
    LEA EDI,[ESP + 0x168]               ; 005131cc
    LEA ESI,[ESP + 0x48]                ; 005131d3
    FXCH ST2                            ; 005131d7
    FSUB float ptr [EAX]                ; 005131d9
    FXCH                                ; 005131db
    FSUB float ptr [EAX + 0x4]          ; 005131dd
    FXCH ST2                            ; 005131e0
    FSUB float ptr [EAX + 0x8]          ; 005131e2
    FXCH                                ; 005131e5
    FSTP float ptr [ESP + 0x48]         ; 005131e7
    FXCH                                ; 005131eb
    FSTP float ptr [ESP + 0x4c]         ; 005131ed
    FSTP float ptr [ESP + 0x50]         ; 005131f1
    LEA EAX,[ESP + 0x168]               ; 005131f5
    MOVSD ES:EDI,ESI                    ; 005131fc
    MOVSD ES:EDI,ESI                    ; 005131fd
    MOVSD ES:EDI,ESI                    ; 005131fe
    PUSH EAX                            ; 005131ff
    LEA ESI,[ESP + 0x1c0]               ; 00513200
    LEA EDI,[ESP + 0x184]               ; 00513207
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 0051320e
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x1c0]               ; 00513213
    ADD ESP,0x4                         ; 0051321a
    LEA EAX,[ESP + 0x180]               ; 0051321d
    MOV ECX,dword ptr [ESP + 0x1f0]     ; 00513224
    MOVSD ES:EDI,ESI                    ; 0051322b
    MOVSD ES:EDI,ESI                    ; 0051322c
    MOVSD ES:EDI,ESI                    ; 0051322d
    CMP EAX,ECX                         ; 0051322e
    JZ 0x00512b8f                       ; 00513230
        ;   XREF to: 00512b8f (CONDITIONAL_JUMP)  ; LAB_00512b8f
    MOV EAX,dword ptr [ESP + 0x180]     ; 00513236
    MOV dword ptr [ECX],EAX             ; 0051323d
    MOV EAX,dword ptr [ESP + 0x184]     ; 0051323f
    MOV dword ptr [ECX + 0x4],EAX       ; 00513246
    MOV EAX,dword ptr [ESP + 0x188]     ; 00513249
    MOV dword ptr [ECX + 0x8],EAX       ; 00513250
    MOV EAX,0x2                         ; 00513253
    ADD ESP,0x1d4                       ; 00513258
    POP EBP                             ; 0051325e
    POP EDI                             ; 0051325f
    POP ESI                             ; 00513260
    POP EBX                             ; 00513261
    RET                                 ; 00513262
    MOV EBX,dword ptr [0x01e50208]      ; 00513263 | DAT_01e50208
        ;   Label: LAB_00513263
    LEA EAX,[EBX*0x4 + 0x0]             ; 00513269
    SUB EAX,EBX                         ; 00513270
    SHL EAX,0x3                         ; 00513272
    ADD EAX,EBX                         ; 00513275
    SHL EAX,0x4                         ; 00513277
    LEA EDX,[EAX + EBP*0x1]             ; 0051327a
    MOV EAX,[0x01e50204]                ; 0051327d | DAT_01e50204
    MOV EBX,dword ptr [EBP + 0x10]      ; 00513282
    MOV EAX,dword ptr [EDX + EAX*0x4 + 0x30] ; 00513285
    SUB EAX,EBX                         ; 00513289
    CDQ                                 ; 0051328b
    XOR EAX,EDX                         ; 0051328c
    SUB EAX,EDX                         ; 0051328e
    CMP EAX,0x3                         ; 00513290
    JG 0x005133c0                       ; 00513293
        ;   XREF to: 005133c0 (CONDITIONAL_JUMP)  ; LAB_005133c0
    MOV EBX,0xffffffff                  ; 00513299
    MOV ESI,dword ptr [0x01e50208]      ; 0051329e | DAT_01e50208
    MOV EDI,dword ptr [0x01e50204]      ; 005132a4 | DAT_01e50204
    MOV dword ptr [ESP + 0x1cc],EBX     ; 005132aa
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 005132b1
        ;   Label: LAB_005132b1
    MOV dword ptr [ESP + 0x1c8],EAX     ; 005132b8
    IMUL EAX,ESI,0x64                   ; 005132bf
    MOV dword ptr [ESP + 0x1cc],EBX     ; 005132c2
    XOR EBX,EBX                         ; 005132c9
    MOV BL,byte ptr [EDI + EAX*0x1 + 0x1e5ec78] ; 005132cb | DAT_01e60032
    TEST EBX,EBX                        ; 005132d2
    JZ 0x00513458                       ; 005132d4
        ;   XREF to: 00513458 (CONDITIONAL_JUMP)  ; LAB_00513458
    MOV EAX,dword ptr [EBX*0x4 + 0x61b328] ; 005132da | DAT_0061b328
    MOV EDX,dword ptr [EBX*0x4 + 0x61b34c] ; 005132e1 | DAT_0061b34c
    SUB EDI,EAX                         ; 005132e8
    SUB ESI,EDX                         ; 005132ea
    TEST EDI,EDI                        ; 005132ec
    JL 0x005134f9                       ; 005132ee
        ;   XREF to: 005134f9 (CONDITIONAL_JUMP)  ; LAB_005134f9
    TEST ESI,ESI                        ; 005132f4
        ;   Label: LAB_005132f4
    JL 0x00513520                       ; 005132f6
        ;   XREF to: 00513520 (CONDITIONAL_JUMP)  ; LAB_00513520
    CMP EDI,0x64                        ; 005132fc
        ;   Label: LAB_005132fc
    JL 0x00513323                       ; 005132ff
        ;   XREF to: 00513323 (CONDITIONAL_JUMP)  ; LAB_00513323
    MOV EAX,0x5e17e3                    ; 00513301 | = "..\\core\\path.cpp"
    MOV EDX,0x549                       ; 00513306
    PUSH 0x5e17f4                       ; 0051330b | = "Out of bounds3!"
    MOV [0x01d046a0],EAX                ; 00513310 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00513315 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0051331b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00513320
    CMP ESI,0x64                        ; 00513323
        ;   Label: LAB_00513323
    JL 0x0051334a                       ; 00513326
        ;   XREF to: 0051334a (CONDITIONAL_JUMP)  ; LAB_0051334a
    MOV ECX,0x5e1804                    ; 00513328 | = "..\\core\\path.cpp"
    MOV EAX,0x54a                       ; 0051332d
    PUSH 0x5e1815                       ; 00513332 | = "Out of bounds4!"
    MOV dword ptr [0x01d046a0],ECX      ; 00513337 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0051333d | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00513342
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00513347
    CMP EDI,dword ptr [0x01e501fc]      ; 0051334a | DAT_01e501fc
        ;   Label: LAB_0051334a
    JNZ 0x005132b1                      ; 00513350
        ;   XREF to: 005132b1 (CONDITIONAL_JUMP)  ; LAB_005132b1
    CMP ESI,dword ptr [0x01e50200]      ; 00513356 | DAT_01e50200
    JNZ 0x005132b1                      ; 0051335c
        ;   XREF to: 005132b1 (CONDITIONAL_JUMP)  ; LAB_005132b1
    MOV ESI,dword ptr [ESP + 0x1ec]     ; 00513362
    MOV EAX,dword ptr [ESP + 0x1f0]     ; 00513369
    PUSH ESI                            ; 00513370
    MOV EDI,dword ptr [ESP + 0x1cc]     ; 00513371
    MOV dword ptr [EAX],0x0             ; 00513378
    PUSH EDI                            ; 0051337e
    MOV dword ptr [EAX + 0x8],0x0       ; 0051337f
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 00513386
    PUSH EAX                            ; 0051338d
    PUSH EBX                            ; 0051338e
    PUSH EBP                            ; 0051338f
    CALL core_path.cpp_FUN_00511df0     ; 00513390
        ;   XREF to: 00511df0 (UNCONDITIONAL_CALL)  ; undefined core_path.cpp_FUN_00511df0()
    MOV dword ptr [ESP + 0x1e4],EAX     ; 00513395
    FLD float ptr [ESP + 0x1e4]         ; 0051339c
    ADD ESP,0x14                        ; 005133a3
    MOV EAX,dword ptr [ESP + 0x1f0]     ; 005133a6
    FSTP float ptr [EAX + 0x4]          ; 005133ad
    MOV EAX,0x1                         ; 005133b0
    ADD ESP,0x1d4                       ; 005133b5
    POP EBP                             ; 005133bb
    POP EDI                             ; 005133bc
    POP ESI                             ; 005133bd
    POP EBX                             ; 005133be
    RET                                 ; 005133bf
    FLD float ptr [EBP]                 ; 005133c0
        ;   Label: LAB_005133c0
    FLD float ptr [EBP + 0x4]           ; 005133c3
    FLD float ptr [EBP + 0x8]           ; 005133c6
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 005133c9
    LEA EDI,[ESP + 0xf0]                ; 005133d0
    LEA ESI,[ESP + 0x6c]                ; 005133d7
    FXCH ST2                            ; 005133db
    FSUB float ptr [EAX]                ; 005133dd
    FXCH                                ; 005133df
    FSUB float ptr [EAX + 0x4]          ; 005133e1
    FXCH ST2                            ; 005133e4
    FSUB float ptr [EAX + 0x8]          ; 005133e6
    FXCH                                ; 005133e9
    FSTP float ptr [ESP + 0x6c]         ; 005133eb
    FXCH                                ; 005133ef
    FSTP float ptr [ESP + 0x70]         ; 005133f1
    FSTP float ptr [ESP + 0x74]         ; 005133f5
    LEA EAX,[ESP + 0xf0]                ; 005133f9
    MOVSD ES:EDI,ESI                    ; 00513400
    MOVSD ES:EDI,ESI                    ; 00513401
    MOVSD ES:EDI,ESI                    ; 00513402
    PUSH EAX                            ; 00513403
    LEA ESI,[ESP + 0x130]               ; 00513404
    LEA EDI,[ESP + 0x1c]                ; 0051340b
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 0051340f
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x130]               ; 00513414
    ADD ESP,0x4                         ; 0051341b
    LEA EAX,[ESP + 0x18]                ; 0051341e
    MOV EDX,dword ptr [ESP + 0x1f0]     ; 00513422
    MOVSD ES:EDI,ESI                    ; 00513429
    MOVSD ES:EDI,ESI                    ; 0051342a
    MOVSD ES:EDI,ESI                    ; 0051342b
    CMP EAX,EDX                         ; 0051342c
    JZ 0x00512b8f                       ; 0051342e
        ;   XREF to: 00512b8f (CONDITIONAL_JUMP)  ; LAB_00512b8f
    MOV EAX,dword ptr [ESP + 0x18]      ; 00513434
    MOV dword ptr [EDX],EAX             ; 00513438
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0051343a
    MOV dword ptr [EDX + 0x4],EAX       ; 0051343e
    MOV EAX,dword ptr [ESP + 0x20]      ; 00513441
    MOV dword ptr [EDX + 0x8],EAX       ; 00513445
    MOV EAX,0x2                         ; 00513448
    ADD ESP,0x1d4                       ; 0051344d
    POP EBP                             ; 00513453
    POP EDI                             ; 00513454
    POP ESI                             ; 00513455
    POP EBX                             ; 00513456
    RET                                 ; 00513457
    FLD float ptr [EBP]                 ; 00513458
        ;   Label: LAB_00513458
    FLD float ptr [EBP + 0x4]           ; 0051345b
    FLD float ptr [EBP + 0x8]           ; 0051345e
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 00513461
    LEA EDI,[ESP + 0x54]                ; 00513468
    LEA ESI,[ESP + 0x60]                ; 0051346c
    FXCH ST2                            ; 00513470
    FSUB float ptr [EAX]                ; 00513472
    FXCH                                ; 00513474
    FSUB float ptr [EAX + 0x4]          ; 00513476
    FXCH ST2                            ; 00513479
    FSUB float ptr [EAX + 0x8]          ; 0051347b
    FXCH                                ; 0051347e
    FSTP float ptr [ESP + 0x60]         ; 00513480
    FXCH                                ; 00513484
    FSTP float ptr [ESP + 0x64]         ; 00513486
    FSTP float ptr [ESP + 0x68]         ; 0051348a
    LEA EAX,[ESP + 0x54]                ; 0051348e
    MOVSD ES:EDI,ESI                    ; 00513492
    MOVSD ES:EDI,ESI                    ; 00513493
    MOVSD ES:EDI,ESI                    ; 00513494
    PUSH EAX                            ; 00513495
    LEA ESI,[ESP + 0x94]                ; 00513496
    LEA EDI,[ESP + 0x88]                ; 0051349d
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 005134a4
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x94]                ; 005134a9
    ADD ESP,0x4                         ; 005134b0
    LEA EAX,[ESP + 0x84]                ; 005134b3
    MOV EDX,dword ptr [ESP + 0x1f0]     ; 005134ba
    MOVSD ES:EDI,ESI                    ; 005134c1
    MOVSD ES:EDI,ESI                    ; 005134c2
    MOVSD ES:EDI,ESI                    ; 005134c3
    CMP EAX,EDX                         ; 005134c4
    JZ 0x00512b8f                       ; 005134c6
        ;   XREF to: 00512b8f (CONDITIONAL_JUMP)  ; LAB_00512b8f
    MOV EAX,dword ptr [ESP + 0x84]      ; 005134cc
    MOV dword ptr [EDX],EAX             ; 005134d3
    MOV EAX,dword ptr [ESP + 0x88]      ; 005134d5
    MOV dword ptr [EDX + 0x4],EAX       ; 005134dc
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005134df
    MOV dword ptr [EDX + 0x8],EAX       ; 005134e6
    MOV EAX,0x2                         ; 005134e9
    ADD ESP,0x1d4                       ; 005134ee
    POP EBP                             ; 005134f4
    POP EDI                             ; 005134f5
    POP ESI                             ; 005134f6
    POP EBX                             ; 005134f7
    RET                                 ; 005134f8
    MOV ECX,0x5e17a1                    ; 005134f9 | = "..\\core\\path.cpp"
        ;   Label: LAB_005134f9
    MOV EAX,0x547                       ; 005134fe
    PUSH 0x5e17b2                       ; 00513503 | = "Out of bounds1!"
    MOV dword ptr [0x01d046a0],ECX      ; 00513508 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0051350e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00513513
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00513518
    JMP 0x005132f4                      ; 0051351b
        ;   XREF to: 005132f4 (UNCONDITIONAL_JUMP)  ; LAB_005132f4
    MOV EDX,0x5e17c2                    ; 00513520 | = "..\\core\\path.cpp"
        ;   Label: LAB_00513520
    MOV ECX,0x548                       ; 00513525
    PUSH 0x5e17d3                       ; 0051352a | = "Out of bounds2!"
    MOV dword ptr [0x01d046a0],EDX      ; 0051352f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00513535 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0051353b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00513540
    JMP 0x005132fc                      ; 00513543
        ;   XREF to: 005132fc (UNCONDITIONAL_JUMP)  ; LAB_005132fc

