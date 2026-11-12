; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_markShadowVoxels_FUN_00477e60(CDemonRaytrace *this_ptr,CVector3f *offset,CVector3f *rotation,CVector3f *extent,CVector3f *light_position)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   offset
; CVector3f *      Stack[0xc]:4   rotation
; CVector3f *      Stack[0x10]:4   extent
; CVector3f *      Stack[0x14]:4   light_position
; Local Variables:
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined        Stack[-0xb4]:1  local_b4
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
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
;   core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_0053ee00 at 0053ee6a
;
; Referenced Globals:
;   undefined4 DAT_005bcbe9
;   undefined4 DAT_005bcbf1
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
;   core_dirmat.cpp_FUN_0045b800
;   core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_004784a0
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477e60
        ;   Label: core_dtrace.cpp_CDemonRaytrace_markShadowVoxels_FUN_00477e60
    PUSH ESI                            ; 00477e61
    PUSH EDI                            ; 00477e62
    PUSH EBP                            ; 00477e63
    MOV EBP,ESP                         ; 00477e64
    SUB ESP,0xac                        ; 00477e66
    AND ESP,0xfffffff8                  ; 00477e6c
    MOV EBX,dword ptr [EBP + 0x24]      ; 00477e6f
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00477e72
    PUSH EDX                            ; 00477e75
    LEA EAX,[ESP + 0x10]                ; 00477e76
    PUSH EAX                            ; 00477e7a
    LEA EDI,[ESP + 0x6c]                ; 00477e7b
    LEA ESI,[ESP + 0x48]                ; 00477e7f
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 ; 00477e83
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    FLD float ptr [EBX]                 ; 00477e88
    ADD ESP,0x8                         ; 00477e8a
    FLD float ptr [EBX + 0x4]           ; 00477e8d
    MOV EAX,dword ptr [EBP + 0x20]      ; 00477e90
    FLD float ptr [EBX + 0x8]           ; 00477e93
    FXCH ST2                            ; 00477e96
    FSUB float ptr [EAX]                ; 00477e98
    FXCH                                ; 00477e9a
    FSUB float ptr [EAX + 0x4]          ; 00477e9c
    FXCH ST2                            ; 00477e9f
    FSUB float ptr [EAX + 0x8]          ; 00477ea1
    FXCH                                ; 00477ea4
    FSTP float ptr [ESP + 0x40]         ; 00477ea6
    FXCH                                ; 00477eaa
    FSTP float ptr [ESP + 0x44]         ; 00477eac
    FSTP float ptr [ESP + 0x48]         ; 00477eb0
    MOVSD ES:EDI,ESI                    ; 00477eb4
    MOVSD ES:EDI,ESI                    ; 00477eb5
    MOVSD ES:EDI,ESI                    ; 00477eb6
    MOV EAX,dword ptr [EBP + 0x14]      ; 00477eb7
    FLD float ptr [ESP + 0x64]          ; 00477eba
    FDIV float ptr [EAX + 0x34]         ; 00477ebe
    FLD float ptr [ESP + 0x68]          ; 00477ec1
    FDIV float ptr [EAX + 0x38]         ; 00477ec5
    FLD float ptr [ESP + 0x6c]          ; 00477ec8
    FDIV float ptr [EAX + 0x3c]         ; 00477ecc
    FXCH ST2                            ; 00477ecf
    FLD double ptr [0x005bcbe9]         ; 00477ed1 | DAT_005bcbe9
    FXCH                                ; 00477ed7
    FMUL ST1                            ; 00477ed9
    FLD1                                ; 00477edb
    FADDP                               ; 00477edd
    CALL crt_math.c_round_FUN_005a3120  ; 00477edf
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x94]        ; 00477ee4
    MOV EAX,dword ptr [ESP + 0x94]      ; 00477eeb
    MOV dword ptr [ESP + 0xa8],EAX      ; 00477ef2
    FILD dword ptr [ESP + 0xa8]         ; 00477ef9
    FDIVR float ptr [ESP + 0x64]        ; 00477f00
    FXCH ST2                            ; 00477f04
    FMUL ST1                            ; 00477f06
    FLD1                                ; 00477f08
    FADDP                               ; 00477f0a
    CALL crt_math.c_round_FUN_005a3120  ; 00477f0c
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x98]        ; 00477f11
    MOV EAX,dword ptr [ESP + 0x98]      ; 00477f18
    MOV dword ptr [ESP + 0xa8],EAX      ; 00477f1f
    FILD dword ptr [ESP + 0xa8]         ; 00477f26
    FDIVR float ptr [ESP + 0x68]        ; 00477f2d
    FXCH ST3                            ; 00477f31
    FMULP                               ; 00477f33
    FLD1                                ; 00477f35
    FADDP                               ; 00477f37
    CALL crt_math.c_round_FUN_005a3120  ; 00477f39
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0xa0]        ; 00477f3e
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00477f45
    MOV dword ptr [ESP + 0xa8],EAX      ; 00477f4c
    FILD dword ptr [ESP + 0xa8]         ; 00477f53
    FDIVR float ptr [ESP + 0x6c]        ; 00477f5a
    XOR ECX,ECX                         ; 00477f5e
    MOV dword ptr [ESP + 0x9c],ECX      ; 00477f60
    MOV EBX,dword ptr [ESP + 0x94]      ; 00477f67
    FXCH                                ; 00477f6e
    FSTP float ptr [ESP]                ; 00477f70
    FXCH                                ; 00477f73
    FSTP float ptr [ESP + 0x4]          ; 00477f75
    FSTP float ptr [ESP + 0x8]          ; 00477f79
    TEST EBX,EBX                        ; 00477f7d
    JLE 0x00478124                      ; 00477f7f
        ;   XREF to: 00478124 (CONDITIONAL_JUMP)  ; LAB_00478124
    XOR EAX,EAX                         ; 00477f85
        ;   Label: LAB_00477f85
    MOV EDX,dword ptr [ESP + 0x98]      ; 00477f87
    MOV dword ptr [ESP + 0xa4],EAX      ; 00477f8e
    TEST EDX,EDX                        ; 00477f95
    JLE 0x00478106                      ; 00477f97
        ;   XREF to: 00478106 (CONDITIONAL_JUMP)  ; LAB_00478106
    MOV ESI,dword ptr [ESP + 0xa0]      ; 00477f9d
        ;   Label: LAB_00477f9d
    XOR EBX,EBX                         ; 00477fa4
    TEST ESI,ESI                        ; 00477fa6
    JLE 0x004780e8                      ; 00477fa8
        ;   XREF to: 004780e8 (CONDITIONAL_JUMP)  ; LAB_004780e8
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00477fae
        ;   Label: LAB_00477fae
    MOV dword ptr [ESP + 0xa8],EAX      ; 00477fb5
    FLD float ptr [ESP]                 ; 00477fbc
    FILD dword ptr [ESP + 0xa8]         ; 00477fbf
    FMUL ST1                            ; 00477fc6
    MOV EAX,dword ptr [EBP + 0x20]      ; 00477fc8
    FADD float ptr [EAX]                ; 00477fcb
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00477fcd
    MOV dword ptr [ESP + 0xa8],EAX      ; 00477fd4
    FXCH                                ; 00477fdb
    FLD double ptr [0x005bcbf1]         ; 00477fdd | DAT_005bcbf1
    FXCH                                ; 00477fe3
    FMUL ST1                            ; 00477fe5
    FLD float ptr [ESP + 0x4]           ; 00477fe7
    FILD dword ptr [ESP + 0xa8]         ; 00477feb
    FMUL ST1                            ; 00477ff2
    FXCH ST2                            ; 00477ff4
    FADDP ST4,ST0                       ; 00477ff6
    MOV EAX,dword ptr [EBP + 0x20]      ; 00477ff8
    FXCH ST3                            ; 00477ffb
    FSTP float ptr [ESP + 0x34]         ; 00477ffd
    FADD float ptr [EAX + 0x4]          ; 00478001
    MOV dword ptr [ESP + 0xa8],EBX      ; 00478004
    FXCH ST2                            ; 0047800b
    FMUL ST1                            ; 0047800d
    FILD dword ptr [ESP + 0xa8]         ; 0047800f
    FXCH                                ; 00478016
    FADDP ST3,ST0                       ; 00478018
    FLD float ptr [ESP + 0x8]           ; 0047801a
    FXCH                                ; 0047801e
    FMUL ST1                            ; 00478020
    FXCH ST3                            ; 00478022
    FSTP float ptr [ESP + 0x38]         ; 00478024
    FXCH ST2                            ; 00478028
    FADD float ptr [EAX + 0x8]          ; 0047802a
    FXCH ST2                            ; 0047802d
    FMULP                               ; 0047802f
    LEA ESI,[ESP + 0x58]                ; 00478031
    LEA EAX,[ESP + 0x34]                ; 00478035
    LEA EDI,[ESP + 0x7c]                ; 00478039
    PUSH EAX                            ; 0047803d
    LEA EAX,[ESP + 0x10]                ; 0047803e
    FADDP                               ; 00478042
    PUSH EAX                            ; 00478044
    FSTP float ptr [ESP + 0x44]         ; 00478045
    CALL core_dirmat.cpp_FUN_0045b800   ; 00478049
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    LEA ESI,[ESP + 0x60]                ; 0047804e
    ADD ESP,0x8                         ; 00478052
    MOVSD ES:EDI,ESI                    ; 00478055
    MOVSD ES:EDI,ESI                    ; 00478056
    MOVSD ES:EDI,ESI                    ; 00478057
    MOV EAX,dword ptr [EBP + 0x18]      ; 00478058
    FLD float ptr [ESP + 0x7c]          ; 0047805b
    FLD float ptr [ESP + 0x80]          ; 0047805f
    FLD float ptr [ESP + 0x84]          ; 00478066
    LEA EDI,[ESP + 0x4c]                ; 0047806d
    LEA ESI,[ESP + 0x70]                ; 00478071
    FXCH ST2                            ; 00478075
    FADD float ptr [EAX]                ; 00478077
    FXCH                                ; 00478079
    FADD float ptr [EAX + 0x4]          ; 0047807b
    FXCH ST2                            ; 0047807e
    FADD float ptr [EAX + 0x8]          ; 00478080
    FXCH                                ; 00478083
    FSTP float ptr [ESP + 0x70]         ; 00478085
    FXCH                                ; 00478089
    FSTP float ptr [ESP + 0x74]         ; 0047808b
    FSTP float ptr [ESP + 0x78]         ; 0047808f
    MOVSD ES:EDI,ESI                    ; 00478093
    MOVSD ES:EDI,ESI                    ; 00478094
    MOVSD ES:EDI,ESI                    ; 00478095
    LEA EAX,[ESP + 0x4c]                ; 00478096
    LEA ESI,[ESP + 0x88]                ; 0047809a
    CMP ESI,EAX                         ; 004780a1
    JZ 0x004780c6                       ; 004780a3
        ;   XREF to: 004780c6 (CONDITIONAL_JUMP)  ; LAB_004780c6
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004780a5
    MOV dword ptr [ESP + 0x88],EAX      ; 004780a9
    MOV EAX,dword ptr [ESP + 0x50]      ; 004780b0
    MOV dword ptr [ESP + 0x8c],EAX      ; 004780b4
    MOV EAX,dword ptr [ESP + 0x54]      ; 004780bb
    MOV dword ptr [ESP + 0x90],EAX      ; 004780bf
    LEA EAX,[ESP + 0x88]                ; 004780c6
        ;   Label: LAB_004780c6
    PUSH EAX                            ; 004780cd
    MOV EDI,dword ptr [EBP + 0x14]      ; 004780ce
    PUSH EDI                            ; 004780d1
    CALL core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_004784a0 ; 004780d2
        ;   XREF to: 004784a0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_004784a0(CDemonRaytrace * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004780d7
    INC EBX                             ; 004780da
    CMP EBX,dword ptr [ESP + 0xa0]      ; 004780db
    JL 0x00477fae                       ; 004780e2
        ;   XREF to: 00477fae (CONDITIONAL_JUMP)  ; LAB_00477fae
    MOV ECX,dword ptr [ESP + 0xa4]      ; 004780e8
        ;   Label: LAB_004780e8
    INC ECX                             ; 004780ef
    MOV EBX,dword ptr [ESP + 0x98]      ; 004780f0
    MOV dword ptr [ESP + 0xa4],ECX      ; 004780f7
    CMP ECX,EBX                         ; 004780fe
    JL 0x00477f9d                       ; 00478100
        ;   XREF to: 00477f9d (CONDITIONAL_JUMP)  ; LAB_00477f9d
    MOV ESI,dword ptr [ESP + 0x9c]      ; 00478106
        ;   Label: LAB_00478106
    INC ESI                             ; 0047810d
    MOV EDI,dword ptr [ESP + 0x94]      ; 0047810e
    MOV dword ptr [ESP + 0x9c],ESI      ; 00478115
    CMP ESI,EDI                         ; 0047811c
    JL 0x00477f85                       ; 0047811e
        ;   XREF to: 00477f85 (CONDITIONAL_JUMP)  ; LAB_00477f85
    MOV ESP,EBP                         ; 00478124
        ;   Label: LAB_00478124
    POP EBP                             ; 00478126
    POP EDI                             ; 00478127
    POP ESI                             ; 00478128
    POP EBX                             ; 00478129
    RET                                 ; 0047812a

