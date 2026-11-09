; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_FUN_00419b90(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0xc8]:8  local_c8
; undefined8       Stack[-0xc0]:8  local_c0
; undefined8       Stack[-0xb8]:8  local_b8
; undefined8       Stack[-0xb0]:8  local_b0
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined        Stack[-0xa0]:1  local_a0
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined        Stack[-0x64]:1  local_64
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[22]:
;   core_batcreat.cpp_FUN_00412170 at 00412397
;   core_batman.cpp_FUN_00413c40 at 00413de4
;   core_bodypart.cpp_FUN_004193c0 at 00419711
;   core_boneguy.cpp_FUN_0041d540 at 0041d67e
;   core_bride.cpp_CBride_processDismemberment_FUN_004248e0 at 00424a12
;   core_carved.cpp_FUN_0042b580 at 0042b71f
;   core_charactr.cpp_FUN_004311a0 at 004311fd
;   core_construc.cpp_FUN_004472a0 at 004473e8
;   core_cow.cpp_FUN_00448b70 at 00448cfc
;   core_dracbrid.cpp_FUN_0047cf20 at 0047cf7c
;   ... and 12 more
;
; Referenced Globals:
;   undefined4 DAT_005d44d1
;   undefined4 DAT_005d44d9
;   undefined4 DAT_02c8af28
;   undefined4 DAT_02c8af2c
;   undefined4 DAT_02c8af30
;
; Called Functions:
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_0040cc00
;   core_bodypart.cpp_FUN_00418d00
;   core_bodypart.cpp_FUN_0041a700
;   core_bodypart.cpp_FUN_0041ad40
;   core_dirmat.cpp_FUN_0045f700
;   crt_math.c_round_FUN_005c03a0
;   crt_memory.c_memset_FUN_005bfb70
;   engine_keyframe.c_calculateSurfaceNormal_FUN_004fc9c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419b90
        ;   Label: core_bodypart.cpp_FUN_00419b90
    PUSH ESI                            ; 00419b91
    PUSH EDI                            ; 00419b92
    PUSH EBP                            ; 00419b93
    MOV EBP,ESP                         ; 00419b94
    SUB ESP,0xb8                        ; 00419b96
    AND ESP,0xfffffff8                  ; 00419b9c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00419b9f
    CMP dword ptr [EBX + 0x174],0x3     ; 00419ba2
    JL 0x00419bb4                       ; 00419ba9
        ;   XREF to: 00419bb4 (CONDITIONAL_JUMP)  ; LAB_00419bb4
    CMP dword ptr [EBX + 0x180],0x1     ; 00419bab
    JGE 0x00419c14                      ; 00419bb2
        ;   XREF to: 00419c14 (CONDITIONAL_JUMP)  ; LAB_00419c14
    PUSH 0x0                            ; 00419bb4
        ;   Label: LAB_00419bb4
    PUSH 0x0                            ; 00419bb6
    PUSH EBX                            ; 00419bb8
    MOV dword ptr [EBX + 0x70],0x2      ; 00419bb9
    CALL core_bodypart.cpp_FUN_00418d00 ; 00419bc0
        ;   XREF to: 00418d00 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_00418d00()
    LEA EAX,[EBX + 0x168]               ; 00419bc5
    ADD ESP,0xc                         ; 00419bcb
    MOV EDX,EAX                         ; 00419bce
    CMP EAX,0x2c8af28                   ; 00419bd0
    JZ 0x00419bf1                       ; 00419bd5
        ;   XREF to: 00419bf1 (CONDITIONAL_JUMP)  ; LAB_00419bf1
    MOV ECX,dword ptr [0x02c8af28]      ; 00419bd7 | DAT_02c8af28
    MOV dword ptr [EAX],ECX             ; 00419bdd
    MOV ECX,dword ptr [0x02c8af2c]      ; 00419bdf | DAT_02c8af2c
    MOV dword ptr [EAX + 0x4],ECX       ; 00419be5
    MOV ECX,dword ptr [0x02c8af30]      ; 00419be8 | DAT_02c8af30
    MOV dword ptr [EAX + 0x8],ECX       ; 00419bee
    ADD EBX,0x15c                       ; 00419bf1
        ;   Label: LAB_00419bf1
    CMP EBX,EDX                         ; 00419bf7
    JNZ 0x00419c02                      ; 00419bf9
        ;   XREF to: 00419c02 (CONDITIONAL_JUMP)  ; LAB_00419c02
    MOV ESP,EBP                         ; 00419bfb
        ;   Label: LAB_00419bfb
    POP EBP                             ; 00419bfd
    POP EDI                             ; 00419bfe
    POP ESI                             ; 00419bff
    POP EBX                             ; 00419c00
    RET                                 ; 00419c01
    MOV EAX,dword ptr [EDX]             ; 00419c02
        ;   Label: LAB_00419c02
    MOV dword ptr [EBX],EAX             ; 00419c04
    MOV EAX,dword ptr [EDX + 0x4]       ; 00419c06
    MOV dword ptr [EBX + 0x4],EAX       ; 00419c09
    MOV EAX,dword ptr [EDX + 0x8]       ; 00419c0c
    MOV dword ptr [EBX + 0x8],EAX       ; 00419c0f
    JMP 0x00419bfb                      ; 00419c12
        ;   XREF to: 00419bfb (UNCONDITIONAL_JUMP)  ; LAB_00419bfb
    LEA EAX,[ESP + 0x4c]                ; 00419c14
        ;   Label: LAB_00419c14
    PUSH EAX                            ; 00419c18
    LEA EAX,[ESP + 0x74]                ; 00419c19
    PUSH EAX                            ; 00419c1d
    PUSH EBX                            ; 00419c1e
    CALL core_bodypart.cpp_FUN_0041a700 ; 00419c1f
        ;   XREF to: 0041a700 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_FUN_0041a700(CBodyPart * this_ptr, CVector3i * out_bbox_min, CVector3i * out_bbox_max)
    ADD ESP,0xc                         ; 00419c24
    MOV EDX,dword ptr [ESP + 0x70]      ; 00419c27
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00419c2b
    ADD EDX,ESI                         ; 00419c2f
    MOV EAX,EDX                         ; 00419c31
    SAR EDX,0x1f                        ; 00419c33
    SUB EAX,EDX                         ; 00419c36
    SAR EAX,0x1                         ; 00419c38
    MOV EDX,dword ptr [ESP + 0x74]      ; 00419c3a
    MOV EDI,EAX                         ; 00419c3e
    MOV EAX,dword ptr [ESP + 0x50]      ; 00419c40
    ADD EDX,EAX                         ; 00419c44
    MOV EAX,EDX                         ; 00419c46
    SAR EDX,0x1f                        ; 00419c48
    SUB EAX,EDX                         ; 00419c4b
    SAR EAX,0x1                         ; 00419c4d
    MOV EDX,EAX                         ; 00419c4f
    MOV dword ptr [ESP + 0x24],EAX      ; 00419c51
    NEG EDX                             ; 00419c55
    MOV ECX,dword ptr [ESP + 0x54]      ; 00419c57
    MOV dword ptr [ESP + 0x24],EDX      ; 00419c5b
    MOV EDX,dword ptr [ESP + 0x78]      ; 00419c5f
    ADD EDX,ECX                         ; 00419c63
    MOV EAX,EDX                         ; 00419c65
    SAR EDX,0x1f                        ; 00419c67
    SUB EAX,EDX                         ; 00419c6a
    SAR EAX,0x1                         ; 00419c6c
    NEG EDI                             ; 00419c6e
    MOV dword ptr [ESP + 0x20],EAX      ; 00419c70
    MOV ESI,EAX                         ; 00419c74
    XOR EDX,EDX                         ; 00419c76
    NEG ESI                             ; 00419c78
    MOV EAX,dword ptr [EBX + 0x174]     ; 00419c7a
    MOV dword ptr [ESP + 0x20],ESI      ; 00419c80
    TEST EAX,EAX                        ; 00419c84
    JLE 0x00419cc0                      ; 00419c86
        ;   XREF to: 00419cc0 (CONDITIONAL_JUMP)  ; LAB_00419cc0
    XOR ESI,ESI                         ; 00419c88
    MOV EAX,dword ptr [EBX + 0x178]     ; 00419c8a
        ;   Label: LAB_00419c8a
    ADD dword ptr [ESI + EAX*0x1],EDI   ; 00419c90
    MOV ECX,dword ptr [ESP + 0x24]      ; 00419c93
    ADD dword ptr [ESI + EAX*0x1 + 0x4],ECX ; 00419c97
    MOV ECX,dword ptr [ESP + 0x20]      ; 00419c9b
    ADD dword ptr [ESI + EAX*0x1 + 0x8],ECX ; 00419c9f
    INC EDX                             ; 00419ca3
    MOV EAX,dword ptr [EBX + 0x174]     ; 00419ca4
    ADD ESI,0xc                         ; 00419caa
    CMP EDX,EAX                         ; 00419cad
    JL 0x00419c8a                       ; 00419caf
        ;   XREF to: 00419c8a (CONDITIONAL_JUMP)  ; LAB_00419c8a
    LEA EAX,[EAX]                       ; 00419cb1
    LEA EDX,[EDX]                       ; 00419cb7
    LEA EAX,[EAX]                       ; 00419cbd
    MOV EDX,dword ptr [ESP + 0x70]      ; 00419cc0
        ;   Label: LAB_00419cc0
    MOV EAX,dword ptr [ESP + 0x24]      ; 00419cc4
    MOV ECX,dword ptr [ESP + 0x74]      ; 00419cc8
    MOV ESI,dword ptr [ESP + 0x78]      ; 00419ccc
    ADD EDX,EDI                         ; 00419cd0
    ADD ECX,EAX                         ; 00419cd2
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419cd4
    MOV dword ptr [ESP + 0x70],EDX      ; 00419cd8
    ADD ESI,EAX                         ; 00419cdc
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00419cde
    MOV dword ptr [ESP + 0x74],ECX      ; 00419ce2
    ADD EAX,EDI                         ; 00419ce6
    MOV EDX,dword ptr [ESP + 0x50]      ; 00419ce8
    MOV dword ptr [ESP + 0x4c],EAX      ; 00419cec
    MOV EAX,dword ptr [ESP + 0x24]      ; 00419cf0
    MOV ECX,dword ptr [ESP + 0x54]      ; 00419cf4
    ADD EDX,EAX                         ; 00419cf8
    ADD ECX,dword ptr [ESP + 0x20]      ; 00419cfa
    MOV EAX,dword ptr [ESP + 0x70]      ; 00419cfe
    MOV dword ptr [ESP + 0xb0],EAX      ; 00419d02
    FLD double ptr [0x005d44d1]         ; 00419d09 | DAT_005d44d1
    FILD dword ptr [ESP + 0xb0]         ; 00419d0f
    FMUL ST1                            ; 00419d16
    MOV dword ptr [ESP + 0x78],ESI      ; 00419d18
    MOV dword ptr [ESP + 0x50],EDX      ; 00419d1c
    MOV dword ptr [ESP + 0x54],ECX      ; 00419d20
    FSTP float ptr [EBX + 0x15c]        ; 00419d24
    MOV EAX,dword ptr [ESP + 0x74]      ; 00419d2a
    MOV dword ptr [ESP + 0xb0],EAX      ; 00419d2e
    FILD dword ptr [ESP + 0xb0]         ; 00419d35
    FMUL ST1                            ; 00419d3c
    FSTP float ptr [EBX + 0x160]        ; 00419d3e
    MOV EAX,dword ptr [ESP + 0x78]      ; 00419d44
    MOV dword ptr [ESP + 0xb0],EAX      ; 00419d48
    FILD dword ptr [ESP + 0xb0]         ; 00419d4f
    FMUL ST1                            ; 00419d56
    FSTP float ptr [EBX + 0x164]        ; 00419d58
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00419d5e
    MOV dword ptr [ESP + 0xb0],EAX      ; 00419d62
    FILD dword ptr [ESP + 0xb0]         ; 00419d69
    FMUL ST1                            ; 00419d70
    FSTP float ptr [EBX + 0x168]        ; 00419d72
    MOV EAX,dword ptr [ESP + 0x50]      ; 00419d78
    MOV dword ptr [ESP + 0xb0],EAX      ; 00419d7c
    MOV dword ptr [ESP + 0xb4],EDI      ; 00419d83
    FILD dword ptr [ESP + 0xb0]         ; 00419d8a
    FMUL ST1                            ; 00419d91
    FILD dword ptr [ESP + 0xb4]         ; 00419d93
    FMUL ST2                            ; 00419d9a
    FXCH                                ; 00419d9c
    FSTP float ptr [EBX + 0x16c]        ; 00419d9e
    MOV EAX,dword ptr [ESP + 0x54]      ; 00419da4
    MOV dword ptr [ESP + 0xb4],EAX      ; 00419da8
    FILD dword ptr [ESP + 0xb4]         ; 00419daf
    MOV EAX,dword ptr [ESP + 0x20]      ; 00419db6
    FMUL ST2                            ; 00419dba
    MOV dword ptr [ESP + 0xb4],EAX      ; 00419dbc
    MOV EAX,dword ptr [ESP + 0x24]      ; 00419dc3
    FILD dword ptr [ESP + 0xb4]         ; 00419dc7
    MOV dword ptr [ESP + 0xb4],EAX      ; 00419dce
    FMUL ST3                            ; 00419dd5
    FILD dword ptr [ESP + 0xb4]         ; 00419dd7
    FMULP ST4                           ; 00419dde
    FXCH                                ; 00419de0
    FSTP float ptr [EBX + 0x170]        ; 00419de2
    FXCH ST2                            ; 00419de8
    FSTP float ptr [ESP + 0xb0]         ; 00419dea
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00419df1
    FXCH                                ; 00419df8
    FSTP float ptr [ESP + 0xb0]         ; 00419dfa
    MOV dword ptr [ESP + 0x80],EAX      ; 00419e01
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00419e08
    MOV dword ptr [ESP + 0x84],EAX      ; 00419e0f
    LEA EAX,[ESP + 0x7c]                ; 00419e16
    PUSH EAX                            ; 00419e1a
    LEA ESI,[ESP + 0x2c]                ; 00419e1b
    LEA EDI,[ESP + 0x38]                ; 00419e1f
    PUSH EBX                            ; 00419e23
    FSTP float ptr [ESP + 0x84]         ; 00419e24
    CALL core_actor.cpp_FUN_00408ac0    ; 00419e2b
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0x30]                ; 00419e30
    ADD ESP,0x8                         ; 00419e34
    LEA EAX,[EBX + 0x20]                ; 00419e37
    MOVSD ES:EDI,ESI                    ; 00419e3a
    MOVSD ES:EDI,ESI                    ; 00419e3b
    MOVSD ES:EDI,ESI                    ; 00419e3c
    FLD float ptr [EAX]                 ; 00419e3d
    FLD float ptr [EAX + 0x4]           ; 00419e3f
    FLD float ptr [EAX + 0x8]           ; 00419e42
    FXCH ST2                            ; 00419e45
    FSUB float ptr [ESP + 0x34]         ; 00419e47
    FXCH                                ; 00419e4b
    FSUB float ptr [ESP + 0x38]         ; 00419e4d
    FXCH ST2                            ; 00419e51
    FSUB float ptr [ESP + 0x3c]         ; 00419e53
    FXCH                                ; 00419e57
    FSTP float ptr [EAX]                ; 00419e59
    FXCH                                ; 00419e5b
    FSTP float ptr [EAX + 0x4]          ; 00419e5d
    FSTP float ptr [EAX + 0x8]          ; 00419e60
    MOV ESI,dword ptr [EBX + 0x28c]     ; 00419e63
    XOR EDX,EDX                         ; 00419e69
    TEST ESI,ESI                        ; 00419e6b
    JLE 0x00419eb0                      ; 00419e6d
        ;   XREF to: 00419eb0 (CONDITIONAL_JUMP)  ; LAB_00419eb0
    LEA EAX,[EBX + 0x290]               ; 00419e6f
    FLD float ptr [EAX]                 ; 00419e75
        ;   Label: LAB_00419e75
    FADD float ptr [ESP + 0x7c]         ; 00419e77
    FLD float ptr [EAX + 0x4]           ; 00419e7b
    FXCH                                ; 00419e7e
    FSTP float ptr [EAX]                ; 00419e80
    FADD float ptr [ESP + 0x80]         ; 00419e82
    FLD float ptr [EAX + 0x8]           ; 00419e89
    FXCH                                ; 00419e8c
    FSTP float ptr [EAX + 0x4]          ; 00419e8e
    FADD float ptr [ESP + 0x84]         ; 00419e91
    INC EDX                             ; 00419e98
    FSTP float ptr [EAX + 0x8]          ; 00419e99
    MOV EDI,dword ptr [EBX + 0x28c]     ; 00419e9c
    ADD EAX,0x194                       ; 00419ea2
    CMP EDX,EDI                         ; 00419ea7
    JL 0x00419e75                       ; 00419ea9
        ;   XREF to: 00419e75 (CONDITIONAL_JUMP)  ; LAB_00419e75
    LEA EAX,[EAX]                       ; 00419eab
    MOV ECX,ECX                         ; 00419eae
    XOR EAX,EAX                         ; 00419eb0
        ;   Label: LAB_00419eb0
    MOV EDX,dword ptr [EBX + 0x74c]     ; 00419eb2
    MOV dword ptr [ESP + 0xa8],EAX      ; 00419eb8
    TEST EDX,EDX                        ; 00419ebf
    JLE 0x00419f90                      ; 00419ec1
        ;   XREF to: 00419f90 (CONDITIONAL_JUMP)  ; LAB_00419f90
    LEA EAX,[EBX + 0x750]               ; 00419ec7
    MOV dword ptr [ESP + 0x9c],EAX      ; 00419ecd
    LEA EAX,[EBX + 0x77c]               ; 00419ed4
    MOV dword ptr [ESP + 0xac],EAX      ; 00419eda
    IMUL EAX,dword ptr [ESP + 0xa8],0x2b0 ; 00419ee1
        ;   Label: LAB_00419ee1
    ADD EAX,dword ptr [ESP + 0x9c]      ; 00419eec
    LEA EDI,[ESP + 0x88]                ; 00419ef3
    FLD float ptr [EAX]                 ; 00419efa
    FLD float ptr [EAX + 0x4]           ; 00419efc
    FLD float ptr [EAX + 0x8]           ; 00419eff
    FXCH ST2                            ; 00419f02
    FADD float ptr [ESP + 0x7c]         ; 00419f04
    LEA ESI,[ESP + 0x64]                ; 00419f08
    FSTP float ptr [EAX]                ; 00419f0c
    FADD float ptr [ESP + 0x80]         ; 00419f0e
    PUSH EAX                            ; 00419f15
    FSTP float ptr [EAX + 0x4]          ; 00419f16
    FADD float ptr [ESP + 0x88]         ; 00419f19
    PUSH EBX                            ; 00419f20
    FSTP float ptr [EAX + 0x8]          ; 00419f21
    CALL core_actor.cpp_FUN_00408b40    ; 00419f24
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x6c]                ; 00419f29
    ADD ESP,0x8                         ; 00419f2d
    MOVSD ES:EDI,ESI                    ; 00419f30
    MOVSD ES:EDI,ESI                    ; 00419f31
    MOVSD ES:EDI,ESI                    ; 00419f32
    MOV EDX,dword ptr [ESP + 0xac]      ; 00419f33
    MOV EAX,dword ptr [ESP + 0x88]      ; 00419f3a
    MOV dword ptr [EDX],EAX             ; 00419f41
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00419f43
    MOV dword ptr [EDX + 0x4],EAX       ; 00419f4a
    MOV EAX,dword ptr [ESP + 0x90]      ; 00419f4d
    LEA EDI,[EDX + 0x2b0]               ; 00419f54
    MOV dword ptr [EDX + 0x8],EAX       ; 00419f5a
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00419f5d
    MOV dword ptr [ESP + 0xac],EDI      ; 00419f64
    INC EAX                             ; 00419f6b
    MOV EDX,dword ptr [EBX + 0x74c]     ; 00419f6c
    MOV dword ptr [ESP + 0xa8],EAX      ; 00419f72
    CMP EAX,EDX                         ; 00419f79
    JL 0x00419ee1                       ; 00419f7b
        ;   XREF to: 00419ee1 (CONDITIONAL_JUMP)  ; LAB_00419ee1
    LEA EAX,[EAX]                       ; 00419f81
    LEA EDX,[EDX]                       ; 00419f87
    LEA EAX,[EAX]                       ; 00419f8d
    MOV EDX,dword ptr [EBX + 0x174]     ; 00419f90
        ;   Label: LAB_00419f90
    LEA EAX,[EDX*0x4 + 0x0]             ; 00419f96
    SUB EAX,EDX                         ; 00419f9d
    SHL EAX,0x2                         ; 00419f9f
    PUSH EAX                            ; 00419fa2
    PUSH 0x0                            ; 00419fa3
    MOV ECX,dword ptr [EBX + 0x17c]     ; 00419fa5
    PUSH ECX                            ; 00419fab
    XOR ESI,ESI                         ; 00419fac
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00419fae
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00419fb3
    MOV EDI,dword ptr [EBX + 0x180]     ; 00419fb6
    MOV dword ptr [ESP + 0xa4],ESI      ; 00419fbc
    TEST EDI,EDI                        ; 00419fc3
    JLE 0x0041a059                      ; 00419fc5
        ;   XREF to: 0041a059 (CONDITIONAL_JUMP)  ; LAB_0041a059
    MOV dword ptr [ESP + 0xa0],ESI      ; 00419fcb
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00419fd2
        ;   Label: LAB_00419fd2
    MOV ESI,dword ptr [EBX + 0x184]     ; 00419fd9
    ADD ESI,EAX                         ; 00419fdf
    MOV dword ptr [ESI + 0x4],0x3       ; 00419fe1
    PUSH ESI                            ; 00419fe8
    MOV EDX,dword ptr [EBX + 0x178]     ; 00419fe9
    PUSH EDX                            ; 00419fef
    XOR EDI,EDI                         ; 00419ff0
    CALL engine_keyframe.c_calculateSurfaceNormal_FUN_004fc9c0 ; 00419ff2
        ;   XREF to: 004fc9c0 (UNCONDITIONAL_CALL)  ; undefined engine_keyframe.c_calculateSurfaceNormal_FUN_004fc9c0()
    MOV ECX,dword ptr [ESI + 0x4]       ; 00419ff7
    ADD ESP,0x8                         ; 00419ffa
    TEST ECX,ECX                        ; 00419ffd
    JLE 0x0041a02b                      ; 00419fff
        ;   XREF to: 0041a02b (CONDITIONAL_JUMP)  ; LAB_0041a02b
    MOV EDX,ESI                         ; 0041a001
    IMUL ECX,dword ptr [EDX + 0x18],0xc ; 0041a003
        ;   Label: LAB_0041a003
    MOV EAX,dword ptr [EBX + 0x17c]     ; 0041a007
    ADD EAX,ECX                         ; 0041a00d
    MOV ECX,dword ptr [ESI + 0x8]       ; 0041a00f
    ADD dword ptr [EAX],ECX             ; 0041a012
    MOV ECX,dword ptr [ESI + 0xc]       ; 0041a014
    ADD dword ptr [EAX + 0x4],ECX       ; 0041a017
    MOV ECX,dword ptr [ESI + 0x10]      ; 0041a01a
    ADD dword ptr [EAX + 0x8],ECX       ; 0041a01d
    INC EDI                             ; 0041a020
    MOV ECX,dword ptr [ESI + 0x4]       ; 0041a021
    ADD EDX,0xc                         ; 0041a024
    CMP EDI,ECX                         ; 0041a027
    JL 0x0041a003                       ; 0041a029
        ;   XREF to: 0041a003 (CONDITIONAL_JUMP)  ; LAB_0041a003
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0041a02b
        ;   Label: LAB_0041a02b
    MOV EDX,dword ptr [ESP + 0xa4]      ; 0041a032
    MOV ECX,dword ptr [EBX + 0x180]     ; 0041a039
    ADD EAX,0x3c                        ; 0041a03f
    INC EDX                             ; 0041a042
    MOV dword ptr [ESP + 0xa0],EAX      ; 0041a043
    MOV dword ptr [ESP + 0xa4],EDX      ; 0041a04a
    CMP EDX,ECX                         ; 0041a051
    JL 0x00419fd2                       ; 0041a053
        ;   XREF to: 00419fd2 (CONDITIONAL_JUMP)  ; LAB_00419fd2
    MOV ESI,dword ptr [EBX + 0x174]     ; 0041a059
        ;   Label: LAB_0041a059
    XOR EDI,EDI                         ; 0041a05f
    TEST ESI,ESI                        ; 0041a061
    JLE 0x0041a0fe                      ; 0041a063
        ;   XREF to: 0041a0fe (CONDITIONAL_JUMP)  ; LAB_0041a0fe
    XOR ESI,ESI                         ; 0041a069
    MOV EDX,dword ptr [EBX + 0x17c]     ; 0041a06b
        ;   Label: LAB_0041a06b
    ADD EDX,ESI                         ; 0041a071
    FILD dword ptr [EDX]                ; 0041a073
    FST double ptr [ESP + 0x18]         ; 0041a075
    FMUL double ptr [ESP + 0x18]        ; 0041a079
    FILD dword ptr [EDX + 0x4]          ; 0041a07d
    FST double ptr [ESP + 0x8]          ; 0041a080
    FMUL double ptr [ESP + 0x8]         ; 0041a084
    FILD dword ptr [EDX + 0x8]          ; 0041a088
    FXCH                                ; 0041a08b
    FADDP ST2,ST0                       ; 0041a08d
    FST double ptr [ESP + 0x10]         ; 0041a08f
    FMUL double ptr [ESP + 0x10]        ; 0041a093
    FADDP                               ; 0041a097
    FSQRT                               ; 0041a099
    FLDZ                                ; 0041a09b
    FXCH                                ; 0041a09d
    FSTP double ptr [ESP]               ; 0041a09f
    FCOMP double ptr [ESP]              ; 0041a0a2
    FNSTSW AX                           ; 0041a0a5
    SAHF                                ; 0041a0a7
    JNC 0x0041a1e7                      ; 0041a0a8
        ;   XREF to: 0041a1e7 (CONDITIONAL_JUMP)  ; LAB_0041a1e7
    FLD double ptr [ESP + 0x18]         ; 0041a0ae
    FLD double ptr [0x005d44d9]         ; 0041a0b2 | DAT_005d44d9
    FDIV double ptr [ESP]               ; 0041a0b8
    FXCH                                ; 0041a0bb
    FMUL ST1                            ; 0041a0bd
    FLD double ptr [ESP + 0x8]          ; 0041a0bf
    FMUL ST2                            ; 0041a0c3
    FLD double ptr [ESP + 0x10]         ; 0041a0c5
    FMULP ST3                           ; 0041a0c9
    FXCH                                ; 0041a0cb
    CALL crt_math.c_round_FUN_005c03a0  ; 0041a0cd
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 0041a0d2
    CALL crt_math.c_round_FUN_005c03a0  ; 0041a0d4
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST2                            ; 0041a0d9
    CALL crt_math.c_round_FUN_005c03a0  ; 0041a0db
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 0041a0e0
    FISTP dword ptr [EDX]               ; 0041a0e2
    FXCH                                ; 0041a0e4
    FISTP dword ptr [EDX + 0x4]         ; 0041a0e6
    FISTP dword ptr [EDX + 0x8]         ; 0041a0e9
    INC EDI                             ; 0041a0ec
        ;   Label: LAB_0041a0ec
    MOV EAX,dword ptr [EBX + 0x174]     ; 0041a0ed
    ADD ESI,0xc                         ; 0041a0f3
    CMP EDI,EAX                         ; 0041a0f6
    JL 0x0041a06b                       ; 0041a0f8
        ;   XREF to: 0041a06b (CONDITIONAL_JUMP)  ; LAB_0041a06b
    PUSH EBX                            ; 0041a0fe
        ;   Label: LAB_0041a0fe
    CALL core_bodypart.cpp_FUN_0041ad40 ; 0041a0ff
        ;   XREF to: 0041ad40 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_0041ad40()
    LEA EDX,[EBX + 0xd10]               ; 0041a104
    LEA EAX,[EBX + 0x280]               ; 0041a10a
    ADD ESP,0x4                         ; 0041a110
    CMP EDX,EAX                         ; 0041a113
    JZ 0x0041a127                       ; 0041a115
        ;   XREF to: 0041a127 (CONDITIONAL_JUMP)  ; LAB_0041a127
    MOV ECX,dword ptr [EAX]             ; 0041a117
    MOV dword ptr [EDX],ECX             ; 0041a119
    MOV ECX,dword ptr [EAX + 0x4]       ; 0041a11b
    MOV dword ptr [EDX + 0x4],ECX       ; 0041a11e
    MOV ECX,dword ptr [EAX + 0x8]       ; 0041a121
    MOV dword ptr [EDX + 0x8],ECX       ; 0041a124
    LEA EAX,[EBX + 0x280]               ; 0041a127
        ;   Label: LAB_0041a127
    PUSH EAX                            ; 0041a12d
    LEA EAX,[EBX + 0xce8]               ; 0041a12e
    PUSH EAX                            ; 0041a134
    LEA ESI,[ESP + 0x48]                ; 0041a135
    LEA EDI,[ESP + 0x60]                ; 0041a139
    CALL core_dirmat.cpp_FUN_0045f700   ; 0041a13d
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    LEA ESI,[ESP + 0x48]                ; 0041a142
    LEA EAX,[ESP + 0x60]                ; 0041a146
    ADD ESP,0x8                         ; 0041a14a
    LEA EDX,[EBX + 0xd1c]               ; 0041a14d
    MOVSD ES:EDI,ESI                    ; 0041a153
    MOVSD ES:EDI,ESI                    ; 0041a154
    MOVSD ES:EDI,ESI                    ; 0041a155
    CMP EDX,EAX                         ; 0041a156
    JZ 0x0041a16e                       ; 0041a158
        ;   XREF to: 0041a16e (CONDITIONAL_JUMP)  ; LAB_0041a16e
    MOV EAX,dword ptr [ESP + 0x58]      ; 0041a15a
    MOV dword ptr [EDX],EAX             ; 0041a15e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0041a160
    MOV dword ptr [EDX + 0x4],EAX       ; 0041a164
    MOV EAX,dword ptr [ESP + 0x60]      ; 0041a167
    MOV dword ptr [EDX + 0x8],EAX       ; 0041a16b
    PUSH 0x40490fdb                     ; 0041a16e
        ;   Label: LAB_0041a16e
    PUSH 0xc0490fdb                     ; 0041a173
    CALL core_actor.cpp_FUN_0040cc00    ; 0041a178
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0xbc],EAX      ; 0041a17d
    FLD float ptr [ESP + 0xbc]          ; 0041a184
    ADD ESP,0x8                         ; 0041a18b
    PUSH 0x40490fdb                     ; 0041a18e
    PUSH 0xc0490fdb                     ; 0041a193
    FSTP float ptr [EBX + 0xd40]        ; 0041a198
    CALL core_actor.cpp_FUN_0040cc00    ; 0041a19e
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0xbc],EAX      ; 0041a1a3
    FLD float ptr [ESP + 0xbc]          ; 0041a1aa
    ADD ESP,0x8                         ; 0041a1b1
    PUSH 0x4116cbe4                     ; 0041a1b4
    PUSH 0xc116cbe4                     ; 0041a1b9
    FSTP float ptr [EBX + 0xd48]        ; 0041a1be
    CALL core_actor.cpp_FUN_0040cc00    ; 0041a1c4
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0xbc],EAX      ; 0041a1c9
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0041a1d0
    MOV dword ptr [EBX + 0xd44],EAX     ; 0041a1d7
    ADD ESP,0x8                         ; 0041a1dd
    MOV ESP,EBP                         ; 0041a1e0
    POP EBP                             ; 0041a1e2
    POP EDI                             ; 0041a1e3
    POP ESI                             ; 0041a1e4
    POP EBX                             ; 0041a1e5
    RET                                 ; 0041a1e6
    MOV dword ptr [EDX + 0x8],0x0       ; 0041a1e7
        ;   Label: LAB_0041a1e7
    MOV EAX,dword ptr [EDX + 0x8]       ; 0041a1ee
    MOV dword ptr [EDX + 0x4],EAX       ; 0041a1f1
    MOV dword ptr [EDX],EAX             ; 0041a1f4
    JMP 0x0041a0ec                      ; 0041a1f6
        ;   XREF to: 0041a0ec (UNCONDITIONAL_JUMP)  ; LAB_0041a0ec

