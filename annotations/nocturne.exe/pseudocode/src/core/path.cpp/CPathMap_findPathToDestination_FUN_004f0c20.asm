; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_path_cpp_CPathMap_findPathToDestination_FUN_004f0c20(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   dest_position
; CVector3f *      Stack[0xc]:4   out_euler_angles
; int              Stack[0x10]:4   direction_hint
; Local Variables:
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined        Stack[-0x10c]:1  local_10c
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined        Stack[-0xf4]:1  local_f4
; undefined        Stack[-0xe8]:1  local_e8
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined        Stack[-0xd0]:1  local_d0
; undefined        Stack[-0xc4]:1  local_c4
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600 at 004f163e
;
; Referenced Globals:
;   void* switchdataD_004f0bf4 = 004f0c8c
;   TerminatedCString s_core_path_cpp_0058cd97
;   TerminatedCString s_Out_of_bounds1_0058cda8
;   TerminatedCString s_core_path_cpp_0058cdb8
;   TerminatedCString s_Out_of_bounds2_0058cdc9
;   TerminatedCString s_core_path_cpp_0058cdd9
;   TerminatedCString s_Out_of_bounds3_0058cdea
;   TerminatedCString s_core_path_cpp_0058cdfa
;   TerminatedCString s_Out_of_bounds4_0058ce0b
;   undefined4 DAT_005be0e8
;   undefined4 DAT_005be10c
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_01e3161c
;   undefined4 DAT_01e31620
;   ... and 7 more
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700
;   core_main.c_FUN_004c8440
;   core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_004f0790
;   core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0
;   core_path.cpp_CPathMap_getDirection_FUN_004efeb0
;   core_path.cpp_CPathMap_isLineWalkable_FUN_004f0540
;   core_path.cpp_CPathMap_searchGrid_FUN_004f20a0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0c20
        ;   Label: core_path.cpp_CPathMap_findPathToDestination_FUN_004f0c20
    PUSH ESI                            ; 004f0c21
    PUSH EDI                            ; 004f0c22
    PUSH EBP                            ; 004f0c23
    SUB ESP,0x108                       ; 004f0c24
    MOV EBP,dword ptr [ESP + 0x11c]     ; 004f0c2a
    MOV EBX,dword ptr [ESP + 0x128]     ; 004f0c31
    MOV EDX,dword ptr [ESP + 0x120]     ; 004f0c38
    PUSH EDX                            ; 004f0c3f
    PUSH 0x1fba938                      ; 004f0c40 | DAT_01fba938
    LEA ESI,[ESP + 0xc8]                ; 004f0c45
    CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700 ; 004f0c4c
        ;   XREF to: 0046b700 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700()
    LEA ESI,[ESP + 0xc8]                ; 004f0c51
    ADD ESP,0x8                         ; 004f0c58
    LEA EDI,[EBP + 0x18]                ; 004f0c5b
    MOV EAX,EBX                         ; 004f0c5e
    MOV EDX,EBX                         ; 004f0c60
    MOVSD ES:EDI,ESI                    ; 004f0c62
    MOVSD ES:EDI,ESI                    ; 004f0c63
    MOVSD ES:EDI,ESI                    ; 004f0c64
    SAR EDX,0x1f                        ; 004f0c65
    MOV ESI,0x9                         ; 004f0c68
    IDIV ESI                            ; 004f0c6d
    XOR ECX,ECX                         ; 004f0c6f
    MOV dword ptr [ESP + 0x78],ECX      ; 004f0c71
    MOV dword ptr [ESP + 0x7c],ECX      ; 004f0c75
    MOV dword ptr [ESP + 0x80],ECX      ; 004f0c79
    CMP EDX,0x8                         ; 004f0c80
    JA 0x004f0c8c                       ; 004f0c83
        ;   XREF to: 004f0c8c (CONDITIONAL_JUMP)  ; caseD_0
    JMP dword ptr [EDX*0x4 + 0x4f0bf4]  ; 004f0c85 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0xc]       ; 004f0c8c
        ;   Label: caseD_0
    MOV EDX,dword ptr [EBP + 0x18]      ; 004f0c8f
    SUB EAX,EDX                         ; 004f0c92
    MOV dword ptr [ESP + 0x6c],EAX      ; 004f0c94
    CDQ                                 ; 004f0c98
    XOR EAX,EDX                         ; 004f0c99
    SUB EAX,EDX                         ; 004f0c9b
    CMP EAX,0x32                        ; 004f0c9d
    JL 0x004f0dab                       ; 004f0ca0
        ;   XREF to: 004f0dab (CONDITIONAL_JUMP)  ; LAB_004f0dab
    MOV EAX,dword ptr [ESP + 0x120]     ; 004f0ca6
    FLD float ptr [EBP]                 ; 004f0cad
    FSUB float ptr [EAX]                ; 004f0cb0
    FSTP float ptr [ESP + 0xcc]         ; 004f0cb2
    FLD float ptr [EBP + 0x4]           ; 004f0cb9
    FSUB float ptr [EAX + 0x4]          ; 004f0cbc
    FSTP float ptr [ESP + 0xd0]         ; 004f0cbf
    FLD float ptr [EBP + 0x8]           ; 004f0cc6
    FSUB float ptr [EAX + 0x8]          ; 004f0cc9
    LEA EAX,[ESP + 0xcc]                ; 004f0ccc
    PUSH EAX                            ; 004f0cd3
    LEA EAX,[ESP + 0x4c]                ; 004f0cd4
    PUSH EAX                            ; 004f0cd8
    FSTP float ptr [ESP + 0xdc]         ; 004f0cd9
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004f0ce0
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
        ;   Label: LAB_004f0ce0
    ADD ESP,0x8                         ; 004f0ce5
    MOV ECX,dword ptr [ESP + 0x124]     ; 004f0ce8
    CMP EAX,ECX                         ; 004f0cef
    JZ 0x004f0d03                       ; 004f0cf1
        ;   XREF to: 004f0d03 (CONDITIONAL_JUMP)  ; LAB_004f0d03
    MOV EDX,dword ptr [EAX]             ; 004f0cf3
    MOV dword ptr [ECX],EDX             ; 004f0cf5
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f0cf7
    MOV dword ptr [ECX + 0x4],EDX       ; 004f0cfa
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f0cfd
    MOV dword ptr [ECX + 0x8],EDX       ; 004f0d00
    MOV EAX,0x2                         ; 004f0d03
        ;   Label: LAB_004f0d03
    ADD ESP,0x108                       ; 004f0d08
    POP EBP                             ; 004f0d0e
    POP EDI                             ; 004f0d0f
    POP ESI                             ; 004f0d10
    POP EBX                             ; 004f0d11
    RET                                 ; 004f0d12
    MOV dword ptr [ESP + 0x78],0x4      ; 004f0d13
        ;   Label: caseD_1
    JMP 0x004f0c8c                      ; 004f0d1b
        ;   XREF to: 004f0c8c (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV dword ptr [ESP + 0x78],0xfffffffc ; 004f0d20
        ;   Label: caseD_2
    JMP 0x004f0c8c                      ; 004f0d28
        ;   XREF to: 004f0c8c (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV dword ptr [ESP + 0x80],0x4      ; 004f0d2d
        ;   Label: caseD_3
    JMP 0x004f0c8c                      ; 004f0d38
        ;   XREF to: 004f0c8c (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV dword ptr [ESP + 0x80],0xfffffffc ; 004f0d3d
        ;   Label: caseD_4
    JMP 0x004f0c8c                      ; 004f0d48
        ;   XREF to: 004f0c8c (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EAX,0x4                         ; 004f0d4d
        ;   Label: caseD_5
    MOV dword ptr [ESP + 0x80],EAX      ; 004f0d52
    MOV dword ptr [ESP + 0x78],EAX      ; 004f0d59
    JMP 0x004f0c8c                      ; 004f0d5d
        ;   XREF to: 004f0c8c (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EDI,0x4                         ; 004f0d62
        ;   Label: caseD_6
    MOV ESI,0xfffffffc                  ; 004f0d67
    MOV dword ptr [ESP + 0x80],EDI      ; 004f0d6c
    MOV dword ptr [ESP + 0x78],ESI      ; 004f0d73
    JMP 0x004f0c8c                      ; 004f0d77
        ;   XREF to: 004f0c8c (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV ECX,0xfffffffc                  ; 004f0d7c
        ;   Label: caseD_7
    MOV dword ptr [ESP + 0x80],ECX      ; 004f0d81
    MOV dword ptr [ESP + 0x78],ECX      ; 004f0d88
    JMP 0x004f0c8c                      ; 004f0d8c
        ;   XREF to: 004f0c8c (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EDX,0xfffffffc                  ; 004f0d91
        ;   Label: caseD_8
    MOV EAX,0x4                         ; 004f0d96
    MOV dword ptr [ESP + 0x80],EDX      ; 004f0d9b
    MOV dword ptr [ESP + 0x78],EAX      ; 004f0da2
    JMP 0x004f0c8c                      ; 004f0da6
        ;   XREF to: 004f0c8c (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f0dab
        ;   Label: LAB_004f0dab
    MOV ECX,dword ptr [EBP + 0x20]      ; 004f0dae
    SUB EAX,ECX                         ; 004f0db1
    MOV dword ptr [ESP + 0x74],EAX      ; 004f0db3
    CDQ                                 ; 004f0db7
    XOR EAX,EDX                         ; 004f0db8
    SUB EAX,EDX                         ; 004f0dba
    CMP EAX,0x32                        ; 004f0dbc
    JL 0x004f0e35                       ; 004f0dbf
        ;   XREF to: 004f0e35 (CONDITIONAL_JUMP)  ; LAB_004f0e35
    MOV EAX,dword ptr [ESP + 0x120]     ; 004f0dc1
    FLD float ptr [EBP]                 ; 004f0dc8
    FSUB float ptr [EAX]                ; 004f0dcb
    FSTP float ptr [ESP + 0xb4]         ; 004f0dcd
    FLD float ptr [EBP + 0x4]           ; 004f0dd4
    FSUB float ptr [EAX + 0x4]          ; 004f0dd7
    FSTP float ptr [ESP + 0xb8]         ; 004f0dda
    FLD float ptr [EBP + 0x8]           ; 004f0de1
    FSUB float ptr [EAX + 0x8]          ; 004f0de4
    LEA EAX,[ESP + 0xb4]                ; 004f0de7
    PUSH EAX                            ; 004f0dee
    LEA EAX,[ESP + 0x94]                ; 004f0def
    PUSH EAX                            ; 004f0df6
    FSTP float ptr [ESP + 0xc4]         ; 004f0df7
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004f0dfe
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 004f0e03
    MOV EDX,dword ptr [ESP + 0x124]     ; 004f0e06
    CMP EAX,EDX                         ; 004f0e0d
    JZ 0x004f0d03                       ; 004f0e0f
        ;   XREF to: 004f0d03 (CONDITIONAL_JUMP)  ; LAB_004f0d03
    MOV ECX,dword ptr [EAX]             ; 004f0e15
    MOV dword ptr [EDX],ECX             ; 004f0e17
    MOV ECX,dword ptr [EAX + 0x4]       ; 004f0e19
    MOV dword ptr [EDX + 0x4],ECX       ; 004f0e1c
    MOV ECX,dword ptr [EAX + 0x8]       ; 004f0e1f
    MOV dword ptr [EDX + 0x8],ECX       ; 004f0e22
    MOV EAX,0x2                         ; 004f0e25
    ADD ESP,0x108                       ; 004f0e2a
    POP EBP                             ; 004f0e30
    POP EDI                             ; 004f0e31
    POP ESI                             ; 004f0e32
    POP EBX                             ; 004f0e33
    RET                                 ; 004f0e34
    MOV EBX,0x32                        ; 004f0e35
        ;   Label: LAB_004f0e35
    MOV EAX,dword ptr [EBP + 0x18]      ; 004f0e3a
    MOV EDI,dword ptr [EBP + 0x24]      ; 004f0e3d
    MOV EDX,dword ptr [EBP + 0x2c]      ; 004f0e40
    SUB EAX,EDI                         ; 004f0e43
    MOV dword ptr [0x01e31628],EBX      ; 004f0e45 | DAT_01e31628
    MOV [0x01e3161c],EAX                ; 004f0e4b | DAT_01e3161c
    MOV EAX,dword ptr [EBP + 0x20]      ; 004f0e50
    MOV dword ptr [0x01e31624],EBX      ; 004f0e53 | DAT_01e31624
    SUB EAX,EDX                         ; 004f0e59
    MOV ECX,dword ptr [0x01e3161c]      ; 004f0e5b | DAT_01e3161c
    MOV [0x01e31620],EAX                ; 004f0e61 | DAT_01e31620
    TEST ECX,ECX                        ; 004f0e66
    JL 0x004f0e6f                       ; 004f0e68
        ;   XREF to: 004f0e6f (CONDITIONAL_JUMP)  ; LAB_004f0e6f
    CMP ECX,0x64                        ; 004f0e6a
    JL 0x004f0ed5                       ; 004f0e6d
        ;   XREF to: 004f0ed5 (CONDITIONAL_JUMP)  ; LAB_004f0ed5
    MOV EAX,dword ptr [ESP + 0x120]     ; 004f0e6f
        ;   Label: LAB_004f0e6f
    FLD float ptr [EBP]                 ; 004f0e76
    FSUB float ptr [EAX]                ; 004f0e79
    FSTP float ptr [ESP + 0x3c]         ; 004f0e7b
    FLD float ptr [EBP + 0x4]           ; 004f0e7f
    FSUB float ptr [EAX + 0x4]          ; 004f0e82
    FSTP float ptr [ESP + 0x40]         ; 004f0e85
    FLD float ptr [EBP + 0x8]           ; 004f0e89
    FSUB float ptr [EAX + 0x8]          ; 004f0e8c
    LEA EAX,[ESP + 0x3c]                ; 004f0e8f
    PUSH EAX                            ; 004f0e93
    LEA EAX,[ESP + 0x58]                ; 004f0e94
    PUSH EAX                            ; 004f0e98
    FSTP float ptr [ESP + 0x4c]         ; 004f0e99
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004f0e9d
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 004f0ea2
    MOV EBP,dword ptr [ESP + 0x124]     ; 004f0ea5
    CMP EAX,EBP                         ; 004f0eac
    JZ 0x004f0d03                       ; 004f0eae
        ;   XREF to: 004f0d03 (CONDITIONAL_JUMP)  ; LAB_004f0d03
    MOV EDX,dword ptr [EAX]             ; 004f0eb4
    MOV dword ptr [EBP],EDX             ; 004f0eb6
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f0eb9
    MOV dword ptr [EBP + 0x4],EDX       ; 004f0ebc
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f0ebf
    MOV dword ptr [EBP + 0x8],EDX       ; 004f0ec2
    MOV EAX,0x2                         ; 004f0ec5
    ADD ESP,0x108                       ; 004f0eca
    POP EBP                             ; 004f0ed0
    POP EDI                             ; 004f0ed1
    POP ESI                             ; 004f0ed2
    POP EBX                             ; 004f0ed3
    RET                                 ; 004f0ed4
    TEST EAX,EAX                        ; 004f0ed5
        ;   Label: LAB_004f0ed5
    JL 0x004f0e6f                       ; 004f0ed7
        ;   XREF to: 004f0e6f (CONDITIONAL_JUMP)  ; LAB_004f0e6f
    CMP EAX,0x64                        ; 004f0ed9
    JGE 0x004f0e6f                      ; 004f0edc
        ;   XREF to: 004f0e6f (CONDITIONAL_JUMP)  ; LAB_004f0e6f
    CMP ECX,EBX                         ; 004f0ede
    JNZ 0x004f0eea                      ; 004f0ee0
        ;   XREF to: 004f0eea (CONDITIONAL_JUMP)  ; LAB_004f0eea
    CMP EAX,EBX                         ; 004f0ee2
    JZ 0x004f10cc                       ; 004f0ee4
        ;   XREF to: 004f10cc (CONDITIONAL_JUMP)  ; LAB_004f10cc
    FLD float ptr [EBP]                 ; 004f0eea
        ;   Label: LAB_004f0eea
    MOV EAX,dword ptr [ESP + 0x120]     ; 004f0eed
    CALL crt_math.c_round_FUN_00563a30  ; 004f0ef4
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x104]       ; 004f0ef9
    FLD float ptr [EAX]                 ; 004f0f00
    CALL crt_math.c_round_FUN_00563a30  ; 004f0f02
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    MOV EAX,dword ptr [ESP + 0x104]     ; 004f0f07
    FISTP dword ptr [ESP + 0x104]       ; 004f0f0e
    SUB EAX,dword ptr [ESP + 0x104]     ; 004f0f15
    CDQ                                 ; 004f0f1c
    XOR EAX,EDX                         ; 004f0f1d
    SUB EAX,EDX                         ; 004f0f1f
    FLD float ptr [EBP + 0x8]           ; 004f0f21
    MOV EAX,dword ptr [ESP + 0x120]     ; 004f0f24
    CALL crt_math.c_round_FUN_00563a30  ; 004f0f2b
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x104]       ; 004f0f30
    FLD float ptr [EAX + 0x8]           ; 004f0f37
    CALL crt_math.c_round_FUN_00563a30  ; 004f0f3a
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    MOV EAX,dword ptr [ESP + 0x104]     ; 004f0f3f
    FISTP dword ptr [ESP + 0x104]       ; 004f0f46
    SUB EAX,dword ptr [ESP + 0x104]     ; 004f0f4d
    CDQ                                 ; 004f0f54
    XOR EAX,EDX                         ; 004f0f55
    SUB EAX,EDX                         ; 004f0f57
    MOV ESI,dword ptr [EBP + 0x1c]      ; 004f0f59
    PUSH ESI                            ; 004f0f5c
    MOV EDI,dword ptr [0x01e3161c]      ; 004f0f5d | DAT_01e3161c
    PUSH EDI                            ; 004f0f63
    MOV EAX,[0x01e31620]                ; 004f0f64 | DAT_01e31620
    PUSH EAX                            ; 004f0f69
    PUSH EBP                            ; 004f0f6a
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f0f6b
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 004f0f70
    MOV EDX,dword ptr [EBP + 0x10]      ; 004f0f73
    PUSH EDX                            ; 004f0f76
    MOV ECX,dword ptr [0x01e31624]      ; 004f0f77 | DAT_01e31624
    PUSH ECX                            ; 004f0f7d
    MOV ESI,dword ptr [0x01e31628]      ; 004f0f7e | DAT_01e31628
    PUSH ESI                            ; 004f0f84
    PUSH EBP                            ; 004f0f85
    MOV EBX,EAX                         ; 004f0f86
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f0f88
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 004f0f8d
    PUSH EAX                            ; 004f0f90
    MOV EDI,dword ptr [0x01e31628]      ; 004f0f91 | DAT_01e31628
    PUSH EDI                            ; 004f0f97
    MOV EAX,[0x01e31624]                ; 004f0f98 | DAT_01e31624
    PUSH EAX                            ; 004f0f9d
    PUSH EBX                            ; 004f0f9e
    MOV EDX,dword ptr [0x01e31620]      ; 004f0f9f | DAT_01e31620
    PUSH EDX                            ; 004f0fa5
    MOV ECX,dword ptr [0x01e3161c]      ; 004f0fa6 | DAT_01e3161c
    PUSH ECX                            ; 004f0fac
    PUSH EBP                            ; 004f0fad
    CALL core_path.cpp_CPathMap_isLineWalkable_FUN_004f0540 ; 004f0fae
        ;   XREF to: 004f0540 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_isLineWalkable_FUN_004f0540(CPathMap * this_ptr, int start_x, int start_z, int start_height, ...)
    ADD ESP,0x1c                        ; 004f0fb3
    TEST EAX,EAX                        ; 004f0fb6
    JZ 0x004f113c                       ; 004f0fb8
        ;   XREF to: 004f113c (CONDITIONAL_JUMP)  ; LAB_004f113c
    MOV EAX,[0x01fba96c]                ; 004f0fbe | DAT_01fba96c
    MOV dword ptr [ESP + 0xe4],EAX      ; 004f0fc3
    MOV EAX,0x1fba96c                   ; 004f0fca
    MOV EAX,dword ptr [EAX + 0x4]       ; 004f0fcf | DAT_01fba970
    MOV dword ptr [ESP + 0xe8],EAX      ; 004f0fd2
    MOV EAX,0x1fba96c                   ; 004f0fd9
    MOV EAX,dword ptr [EAX + 0x8]       ; 004f0fde | DAT_01fba974
    MOV dword ptr [ESP + 0xec],EAX      ; 004f0fe1
    LEA EAX,[ESP + 0x9c]                ; 004f0fe8
    CMP EAX,EBP                         ; 004f0fef
    JZ 0x004f1011                       ; 004f0ff1
        ;   XREF to: 004f1011 (CONDITIONAL_JUMP)  ; LAB_004f1011
    MOV EAX,dword ptr [EBP]             ; 004f0ff3
    MOV dword ptr [ESP + 0x9c],EAX      ; 004f0ff6
    MOV EAX,dword ptr [EBP + 0x4]       ; 004f0ffd
    MOV dword ptr [ESP + 0xa0],EAX      ; 004f1000
    MOV EAX,dword ptr [EBP + 0x8]       ; 004f1007
    MOV dword ptr [ESP + 0xa4],EAX      ; 004f100a
    MOV EAX,dword ptr [ESP + 0x78]      ; 004f1011
        ;   Label: LAB_004f1011
    MOV dword ptr [ESP + 0x104],EAX     ; 004f1015
    FILD dword ptr [ESP + 0x104]        ; 004f101c
    MOV EAX,dword ptr [ESP + 0x80]      ; 004f1023
    FMUL float ptr [ESP + 0xe4]         ; 004f102a
    MOV dword ptr [ESP + 0x104],EAX     ; 004f1031
    FILD dword ptr [ESP + 0x104]        ; 004f1038
    FMUL float ptr [ESP + 0xec]         ; 004f103f
    MOV EAX,dword ptr [ESP + 0x120]     ; 004f1046
    FXCH                                ; 004f104d
    FADD float ptr [ESP + 0x9c]         ; 004f104f
    FXCH                                ; 004f1056
    FADD float ptr [ESP + 0xa4]         ; 004f1058
    FXCH                                ; 004f105f
    FSTP float ptr [ESP + 0x9c]         ; 004f1061
    FSTP float ptr [ESP + 0xa4]         ; 004f1068
    FLD float ptr [EBP]                 ; 004f106f
    FSUB float ptr [EAX]                ; 004f1072
    FSTP float ptr [ESP + 0x60]         ; 004f1074
    FLD float ptr [EBP + 0x4]           ; 004f1078
    FSUB float ptr [EAX + 0x4]          ; 004f107b
    FSTP float ptr [ESP + 0x64]         ; 004f107e
    FLD float ptr [EBP + 0x8]           ; 004f1082
    FSUB float ptr [EAX + 0x8]          ; 004f1085
    LEA EAX,[ESP + 0x60]                ; 004f1088
    PUSH EAX                            ; 004f108c
    LEA EAX,[ESP + 0xf4]                ; 004f108d
    PUSH EAX                            ; 004f1094
    FSTP float ptr [ESP + 0x70]         ; 004f1095
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004f1099
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 004f109e
    MOV ESI,dword ptr [ESP + 0x124]     ; 004f10a1
    CMP EAX,ESI                         ; 004f10a8
    JZ 0x004f10bc                       ; 004f10aa
        ;   XREF to: 004f10bc (CONDITIONAL_JUMP)  ; LAB_004f10bc
    MOV EDX,dword ptr [EAX]             ; 004f10ac
    MOV dword ptr [ESI],EDX             ; 004f10ae
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f10b0
    MOV dword ptr [ESI + 0x4],EDX       ; 004f10b3
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f10b6
    MOV dword ptr [ESI + 0x8],EDX       ; 004f10b9
    MOV EAX,0x1                         ; 004f10bc
        ;   Label: LAB_004f10bc
    ADD ESP,0x108                       ; 004f10c1
    POP EBP                             ; 004f10c7
    POP EDI                             ; 004f10c8
    POP ESI                             ; 004f10c9
    POP EBX                             ; 004f10ca
    RET                                 ; 004f10cb
    MOV EAX,dword ptr [ESP + 0x120]     ; 004f10cc
        ;   Label: LAB_004f10cc
    FLD float ptr [EBP]                 ; 004f10d3
    FSUB float ptr [EAX]                ; 004f10d6
    FSTP float ptr [ESP + 0xd8]         ; 004f10d8
    FLD float ptr [EBP + 0x4]           ; 004f10df
    FSUB float ptr [EAX + 0x4]          ; 004f10e2
    FSTP float ptr [ESP + 0xdc]         ; 004f10e5
    FLD float ptr [EBP + 0x8]           ; 004f10ec
    FSUB float ptr [EAX + 0x8]          ; 004f10ef
    LEA EAX,[ESP + 0xd8]                ; 004f10f2
    PUSH EAX                            ; 004f10f9
    LEA EAX,[ESP + 0xac]                ; 004f10fa
    PUSH EAX                            ; 004f1101
    FSTP float ptr [ESP + 0xe8]         ; 004f1102
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004f1109
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 004f110e
    MOV EDI,dword ptr [ESP + 0x124]     ; 004f1111
    CMP EAX,EDI                         ; 004f1118
    JZ 0x004f112c                       ; 004f111a
        ;   XREF to: 004f112c (CONDITIONAL_JUMP)  ; LAB_004f112c
    MOV EDX,dword ptr [EAX]             ; 004f111c
    MOV dword ptr [EDI],EDX             ; 004f111e
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f1120
    MOV dword ptr [EDI + 0x4],EDX       ; 004f1123
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f1126
    MOV dword ptr [EDI + 0x8],EDX       ; 004f1129
    MOV EAX,0x1                         ; 004f112c
        ;   Label: LAB_004f112c
    ADD ESP,0x108                       ; 004f1131
    POP EBP                             ; 004f1137
    POP EDI                             ; 004f1138
    POP ESI                             ; 004f1139
    POP EBX                             ; 004f113a
    RET                                 ; 004f113b
    MOV EBX,dword ptr [0x01e31620]      ; 004f113c | DAT_01e31620
        ;   Label: LAB_004f113c
    PUSH EBX                            ; 004f1142
    MOV ESI,dword ptr [0x01e3161c]      ; 004f1143 | DAT_01e3161c
    PUSH ESI                            ; 004f1149
    MOV EDI,dword ptr [0x01e31628]      ; 004f114a | DAT_01e31628
    PUSH EDI                            ; 004f1150
    MOV EAX,[0x01e31624]                ; 004f1151 | DAT_01e31624
    PUSH EAX                            ; 004f1156
    PUSH EBP                            ; 004f1157
    CALL core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_004f0790 ; 004f1158
        ;   XREF to: 004f0790 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_004f0790(CPathMap * this_ptr, int start_x, int start_z, int end_x, ...)
    ADD ESP,0x14                        ; 004f115d
    TEST EAX,EAX                        ; 004f1160
    JZ 0x004f123d                       ; 004f1162
        ;   XREF to: 004f123d (CONDITIONAL_JUMP)  ; LAB_004f123d
    CMP EAX,0x1                         ; 004f1168
    JNZ 0x004f11fc                      ; 004f116b
        ;   XREF to: 004f11fc (CONDITIONAL_JUMP)  ; LAB_004f11fc
    MOV EDI,dword ptr [0x01e3161c]      ; 004f1171 | DAT_01e3161c
    MOV EAX,[0x01e31624]                ; 004f1177 | DAT_01e31624
    CMP EAX,EDI                         ; 004f117c
    JLE 0x004f11d7                      ; 004f117e
        ;   XREF to: 004f11d7 (CONDITIONAL_JUMP)  ; LAB_004f11d7
    MOV EAX,0x3                         ; 004f1180
        ;   Label: LAB_004f1180
    MOV EBX,dword ptr [ESP + 0x120]     ; 004f1185
        ;   Label: LAB_004f1185
    PUSH EBX                            ; 004f118c
    PUSH -0x1                           ; 004f118d
    PUSH -0x1                           ; 004f118f
    MOV EDX,dword ptr [ESP + 0x130]     ; 004f1191
    PUSH EAX                            ; 004f1198
    MOV dword ptr [EDX],0x0             ; 004f1199
    PUSH EBP                            ; 004f119f
    MOV dword ptr [EDX + 0x8],0x0       ; 004f11a0
    CALL core_path.cpp_CPathMap_getDirection_FUN_004efeb0 ; 004f11a7
        ;   XREF to: 004efeb0 (UNCONDITIONAL_CALL)  ; undefined core_path.cpp_CPathMap_getDirection_FUN_004efeb0()
    MOV dword ptr [ESP + 0x118],EAX     ; 004f11ac
    FLD float ptr [ESP + 0x118]         ; 004f11b3
    ADD ESP,0x14                        ; 004f11ba
    MOV EAX,dword ptr [ESP + 0x124]     ; 004f11bd
    FSTP float ptr [EAX + 0x4]          ; 004f11c4
    MOV EAX,0x1                         ; 004f11c7
    ADD ESP,0x108                       ; 004f11cc
    POP EBP                             ; 004f11d2
    POP EDI                             ; 004f11d3
    POP ESI                             ; 004f11d4
    POP EBX                             ; 004f11d5
    RET                                 ; 004f11d6
    JGE 0x004f11e0                      ; 004f11d7
        ;   XREF to: 004f11e0 (CONDITIONAL_JUMP)  ; LAB_004f11e0
        ;   Label: LAB_004f11d7
    MOV EAX,0x4                         ; 004f11d9
    JMP 0x004f1185                      ; 004f11de
        ;   XREF to: 004f1185 (UNCONDITIONAL_JUMP)  ; LAB_004f1185
    MOV ECX,dword ptr [0x01e31620]      ; 004f11e0 | DAT_01e31620
        ;   Label: LAB_004f11e0
    CMP ECX,dword ptr [0x01e31628]      ; 004f11e6 | DAT_01e31628
    JGE 0x004f11f5                      ; 004f11ec
        ;   XREF to: 004f11f5 (CONDITIONAL_JUMP)  ; LAB_004f11f5
    MOV EAX,0x1                         ; 004f11ee
    JMP 0x004f1185                      ; 004f11f3
        ;   XREF to: 004f1185 (UNCONDITIONAL_JUMP)  ; LAB_004f1185
    MOV EAX,0x2                         ; 004f11f5
        ;   Label: LAB_004f11f5
    JMP 0x004f1185                      ; 004f11fa
        ;   XREF to: 004f1185 (UNCONDITIONAL_JUMP)  ; LAB_004f1185
    MOV ECX,dword ptr [0x01e31620]      ; 004f11fc | DAT_01e31620
        ;   Label: LAB_004f11fc
    MOV EAX,[0x01e31628]                ; 004f1202 | DAT_01e31628
    CMP EAX,ECX                         ; 004f1207
    JLE 0x004f1215                      ; 004f1209
        ;   XREF to: 004f1215 (CONDITIONAL_JUMP)  ; LAB_004f1215
    MOV EAX,0x1                         ; 004f120b
    JMP 0x004f1185                      ; 004f1210
        ;   XREF to: 004f1185 (UNCONDITIONAL_JUMP)  ; LAB_004f1185
    JGE 0x004f1221                      ; 004f1215
        ;   XREF to: 004f1221 (CONDITIONAL_JUMP)  ; LAB_004f1221
        ;   Label: LAB_004f1215
    MOV EAX,0x2                         ; 004f1217
    JMP 0x004f1185                      ; 004f121c
        ;   XREF to: 004f1185 (UNCONDITIONAL_JUMP)  ; LAB_004f1185
    MOV ESI,dword ptr [0x01e3161c]      ; 004f1221 | DAT_01e3161c
        ;   Label: LAB_004f1221
    CMP ESI,dword ptr [0x01e31624]      ; 004f1227 | DAT_01e31624
    JL 0x004f1180                       ; 004f122d
        ;   XREF to: 004f1180 (CONDITIONAL_JUMP)  ; LAB_004f1180
    MOV EAX,0x4                         ; 004f1233
    JMP 0x004f1185                      ; 004f1238
        ;   XREF to: 004f1185 (UNCONDITIONAL_JUMP)  ; LAB_004f1185
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004f123d
        ;   Label: LAB_004f123d
    PUSH EDX                            ; 004f1240
    PUSH EBP                            ; 004f1241
    CALL core_path.cpp_CPathMap_searchGrid_FUN_004f20a0 ; 004f1242
        ;   XREF to: 004f20a0 (UNCONDITIONAL_CALL)  ; uint core_path.cpp_CPathMap_searchGrid_FUN_004f20a0(CPathMap * this_ptr, int start_height)
    ADD ESP,0x8                         ; 004f1247
    TEST EAX,EAX                        ; 004f124a
    JNZ 0x004f1281                      ; 004f124c
        ;   XREF to: 004f1281 (CONDITIONAL_JUMP)  ; LAB_004f1281
    MOV EAX,dword ptr [ESP + 0x120]     ; 004f124e
    FLD float ptr [EBP]                 ; 004f1255
    FSUB float ptr [EAX]                ; 004f1258
    FSTP float ptr [ESP + 0x18]         ; 004f125a
    FLD float ptr [EBP + 0x4]           ; 004f125e
    FSUB float ptr [EAX + 0x4]          ; 004f1261
    FSTP float ptr [ESP + 0x1c]         ; 004f1264
    FLD float ptr [EBP + 0x8]           ; 004f1268
    FSUB float ptr [EAX + 0x8]          ; 004f126b
    LEA EAX,[ESP + 0x18]                ; 004f126e
    PUSH EAX                            ; 004f1272
    LEA EAX,[ESP + 0x28]                ; 004f1273
    PUSH EAX                            ; 004f1277
    FSTP float ptr [ESP + 0x28]         ; 004f1278
    JMP 0x004f0ce0                      ; 004f127c
        ;   XREF to: 004f0ce0 (UNCONDITIONAL_JUMP)  ; LAB_004f0ce0
    MOV EBX,dword ptr [0x01e31628]      ; 004f1281 | DAT_01e31628
        ;   Label: LAB_004f1281
    LEA EAX,[EBX*0x4 + 0x0]             ; 004f1287
    SUB EAX,EBX                         ; 004f128e
    SHL EAX,0x3                         ; 004f1290
    ADD EAX,EBX                         ; 004f1293
    SHL EAX,0x4                         ; 004f1295
    LEA EDX,[EAX + EBP*0x1]             ; 004f1298
    MOV EAX,[0x01e31624]                ; 004f129b | DAT_01e31624
    MOV EBX,dword ptr [EBP + 0x10]      ; 004f12a0
    MOV EAX,dword ptr [EDX + EAX*0x4 + 0x30] ; 004f12a3
    SUB EAX,EBX                         ; 004f12a7
    CDQ                                 ; 004f12a9
    XOR EAX,EDX                         ; 004f12aa
    SUB EAX,EDX                         ; 004f12ac
    CMP EAX,0x3                         ; 004f12ae
    JG 0x004f13dd                       ; 004f12b1
        ;   XREF to: 004f13dd (CONDITIONAL_JUMP)  ; LAB_004f13dd
    MOV EDI,0xffffffff                  ; 004f12b7
    MOV ESI,dword ptr [0x01e31628]      ; 004f12bc | DAT_01e31628
    MOV EBX,dword ptr [0x01e31624]      ; 004f12c2 | DAT_01e31624
    MOV dword ptr [ESP + 0x100],EDI     ; 004f12c8
    MOV EAX,dword ptr [ESP + 0x100]     ; 004f12cf
        ;   Label: LAB_004f12cf
    MOV dword ptr [ESP + 0x100],EDI     ; 004f12d6
    IMUL EDI,ESI,0x64                   ; 004f12dd
    MOVZX EDI,byte ptr [EDI + EBX*0x1 + 0x1e40098] ; 004f12e0 | DAT_01e41452
    MOV dword ptr [ESP + 0xfc],EAX      ; 004f12e8
    TEST EDI,EDI                        ; 004f12ef
    JZ 0x004f144e                       ; 004f12f1
        ;   XREF to: 004f144e (CONDITIONAL_JUMP)  ; LAB_004f144e
    MOV EAX,dword ptr [EDI*0x4 + 0x5be0e8] ; 004f12f7 | DAT_005be0e8
    MOV EDX,dword ptr [EDI*0x4 + 0x5be10c] ; 004f12fe | DAT_005be10c
    SUB EBX,EAX                         ; 004f1305
    SUB ESI,EDX                         ; 004f1307
    TEST EBX,EBX                        ; 004f1309
    JL 0x004f14b0                       ; 004f130b
        ;   XREF to: 004f14b0 (CONDITIONAL_JUMP)  ; LAB_004f14b0
    TEST ESI,ESI                        ; 004f1311
        ;   Label: LAB_004f1311
    JL 0x004f14d7                       ; 004f1313
        ;   XREF to: 004f14d7 (CONDITIONAL_JUMP)  ; LAB_004f14d7
    CMP EBX,0x64                        ; 004f1319
        ;   Label: LAB_004f1319
    JL 0x004f1340                       ; 004f131c
        ;   XREF to: 004f1340 (CONDITIONAL_JUMP)  ; LAB_004f1340
    MOV EAX,0x58cdd9                    ; 004f131e | = "..\\core\\path.cpp"
    MOV EDX,0x549                       ; 004f1323
    PUSH 0x58cdea                       ; 004f1328 | = "Out of bounds3!"
    MOV [0x01cc4800],EAX                ; 004f132d | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004f1332 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f1338
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f133d
    CMP ESI,0x64                        ; 004f1340
        ;   Label: LAB_004f1340
    JL 0x004f1367                       ; 004f1343
        ;   XREF to: 004f1367 (CONDITIONAL_JUMP)  ; LAB_004f1367
    MOV ECX,0x58cdfa                    ; 004f1345 | = "..\\core\\path.cpp"
    MOV EAX,0x54a                       ; 004f134a
    PUSH 0x58ce0b                       ; 004f134f | = "Out of bounds4!"
    MOV dword ptr [0x01cc4800],ECX      ; 004f1354 | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 004f135a | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f135f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f1364
    CMP EBX,dword ptr [0x01e3161c]      ; 004f1367 | DAT_01e3161c
        ;   Label: LAB_004f1367
    JNZ 0x004f12cf                      ; 004f136d
        ;   XREF to: 004f12cf (CONDITIONAL_JUMP)  ; LAB_004f12cf
    CMP ESI,dword ptr [0x01e31620]      ; 004f1373 | DAT_01e31620
    JNZ 0x004f12cf                      ; 004f1379
        ;   XREF to: 004f12cf (CONDITIONAL_JUMP)  ; LAB_004f12cf
    MOV EBX,dword ptr [ESP + 0x120]     ; 004f137f
    MOV EAX,dword ptr [ESP + 0x124]     ; 004f1386
    PUSH EBX                            ; 004f138d
    MOV ESI,dword ptr [ESP + 0x100]     ; 004f138e
    MOV dword ptr [EAX],0x0             ; 004f1395
    PUSH ESI                            ; 004f139b
    MOV dword ptr [EAX + 0x8],0x0       ; 004f139c
    MOV EAX,dword ptr [ESP + 0x108]     ; 004f13a3
    PUSH EAX                            ; 004f13aa
    PUSH EDI                            ; 004f13ab
    PUSH EBP                            ; 004f13ac
    CALL core_path.cpp_CPathMap_getDirection_FUN_004efeb0 ; 004f13ad
        ;   XREF to: 004efeb0 (UNCONDITIONAL_CALL)  ; undefined core_path.cpp_CPathMap_getDirection_FUN_004efeb0()
    MOV dword ptr [ESP + 0x118],EAX     ; 004f13b2
    FLD float ptr [ESP + 0x118]         ; 004f13b9
    ADD ESP,0x14                        ; 004f13c0
    MOV EAX,dword ptr [ESP + 0x124]     ; 004f13c3
    FSTP float ptr [EAX + 0x4]          ; 004f13ca
    MOV EAX,0x1                         ; 004f13cd
    ADD ESP,0x108                       ; 004f13d2
    POP EBP                             ; 004f13d8
    POP EDI                             ; 004f13d9
    POP ESI                             ; 004f13da
    POP EBX                             ; 004f13db
    RET                                 ; 004f13dc
    MOV EAX,dword ptr [ESP + 0x120]     ; 004f13dd
        ;   Label: LAB_004f13dd
    FLD float ptr [EBP]                 ; 004f13e4
    FSUB float ptr [EAX]                ; 004f13e7
    FSTP float ptr [ESP + 0x84]         ; 004f13e9
    FLD float ptr [EBP + 0x4]           ; 004f13f0
    FSUB float ptr [EAX + 0x4]          ; 004f13f3
    FSTP float ptr [ESP + 0x88]         ; 004f13f6
    FLD float ptr [EBP + 0x8]           ; 004f13fd
    FSUB float ptr [EAX + 0x8]          ; 004f1400
    LEA EAX,[ESP + 0x84]                ; 004f1403
    PUSH EAX                            ; 004f140a
    LEA EAX,[ESP + 0x34]                ; 004f140b
    PUSH EAX                            ; 004f140f
    FSTP float ptr [ESP + 0x94]         ; 004f1410
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004f1417
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 004f141c
    MOV EDX,dword ptr [ESP + 0x124]     ; 004f141f
    CMP EAX,EDX                         ; 004f1426
    JZ 0x004f0d03                       ; 004f1428
        ;   XREF to: 004f0d03 (CONDITIONAL_JUMP)  ; LAB_004f0d03
    MOV ECX,dword ptr [EAX]             ; 004f142e
    MOV dword ptr [EDX],ECX             ; 004f1430
    MOV ECX,dword ptr [EAX + 0x4]       ; 004f1432
    MOV dword ptr [EDX + 0x4],ECX       ; 004f1435
    MOV ECX,dword ptr [EAX + 0x8]       ; 004f1438
    MOV dword ptr [EDX + 0x8],ECX       ; 004f143b
    MOV EAX,0x2                         ; 004f143e
    ADD ESP,0x108                       ; 004f1443
    POP EBP                             ; 004f1449
    POP EDI                             ; 004f144a
    POP ESI                             ; 004f144b
    POP EBX                             ; 004f144c
    RET                                 ; 004f144d
    MOV EAX,dword ptr [ESP + 0x120]     ; 004f144e
        ;   Label: LAB_004f144e
    FLD float ptr [EBP]                 ; 004f1455
    FSUB float ptr [EAX]                ; 004f1458
    FSTP float ptr [ESP]                ; 004f145a
    FLD float ptr [EBP + 0x4]           ; 004f145d
    FSUB float ptr [EAX + 0x4]          ; 004f1460
    FSTP float ptr [ESP + 0x4]          ; 004f1463
    FLD float ptr [EBP + 0x8]           ; 004f1467
    FSUB float ptr [EAX + 0x8]          ; 004f146a
    MOV EAX,ESP                         ; 004f146d
    PUSH EAX                            ; 004f146f
    LEA EAX,[ESP + 0x10]                ; 004f1470
    PUSH EAX                            ; 004f1474
    FSTP float ptr [ESP + 0x10]         ; 004f1475
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004f1479
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 004f147e
    MOV EDX,dword ptr [ESP + 0x124]     ; 004f1481
    CMP EAX,EDX                         ; 004f1488
    JZ 0x004f0d03                       ; 004f148a
        ;   XREF to: 004f0d03 (CONDITIONAL_JUMP)  ; LAB_004f0d03
    MOV ECX,dword ptr [EAX]             ; 004f1490
    MOV dword ptr [EDX],ECX             ; 004f1492
    MOV ECX,dword ptr [EAX + 0x4]       ; 004f1494
    MOV dword ptr [EDX + 0x4],ECX       ; 004f1497
    MOV ECX,dword ptr [EAX + 0x8]       ; 004f149a
    MOV dword ptr [EDX + 0x8],ECX       ; 004f149d
    MOV EAX,0x2                         ; 004f14a0
    ADD ESP,0x108                       ; 004f14a5
    POP EBP                             ; 004f14ab
    POP EDI                             ; 004f14ac
    POP ESI                             ; 004f14ad
    POP EBX                             ; 004f14ae
    RET                                 ; 004f14af
    MOV ECX,0x58cd97                    ; 004f14b0 | = "..\\core\\path.cpp"
        ;   Label: LAB_004f14b0
    MOV EAX,0x547                       ; 004f14b5
    PUSH 0x58cda8                       ; 004f14ba | = "Out of bounds1!"
    MOV dword ptr [0x01cc4800],ECX      ; 004f14bf | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 004f14c5 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f14ca
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f14cf
    JMP 0x004f1311                      ; 004f14d2
        ;   XREF to: 004f1311 (UNCONDITIONAL_JUMP)  ; LAB_004f1311
    MOV EDX,0x58cdb8                    ; 004f14d7 | = "..\\core\\path.cpp"
        ;   Label: LAB_004f14d7
    MOV ECX,0x548                       ; 004f14dc
    PUSH 0x58cdc9                       ; 004f14e1 | = "Out of bounds2!"
    MOV dword ptr [0x01cc4800],EDX      ; 004f14e6 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004f14ec | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f14f2
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f14f7
    JMP 0x004f1319                      ; 004f14fa
        ;   XREF to: 004f1319 (UNCONDITIONAL_JUMP)  ; LAB_004f1319

