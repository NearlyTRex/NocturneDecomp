; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_set_cpp_FUN_00551d50(CDemonSet *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   orientation
; CVector3f *      Stack[0x10]:4   aabb_min
; CVector3f *      Stack[0x14]:4   aabb_max
; CMatrix3x3f *    Stack[0x18]:4   rotation_matrix
; Local Variables:
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined        Stack[-0x98]:1  local_98
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
; undefined4       Stack[-0x54]:4  local_54
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_00552490 at 005524bd
;
; Referenced Globals:
;   undefined4 DAT_005f0996
;   undefined4 DAT_005f099e
;   undefined4 DAT_00605000
;   undefined4 DAT_01cc804c
;   undefined4 DAT_01fe4e38
;   undefined4 DAT_01fe55bc
;   undefined4 DAT_01fe55d0
;   undefined4 DAT_01fe5a88
;   undefined4 DAT_01fe5c88
;   undefined4 DAT_0202a1f0
;   undefined4 DAT_0202a1f4
;   undefined4 DAT_0202a374
;   undefined4 DAT_0202a378
;   undefined4 DAT_0202a388
;   undefined4 DAT_0202a38c
;   ... and 6 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452de0
;   core_dglobe.cpp_FUN_0045edf0
;   core_dirmat.cpp_FUN_0045f690
;   core_dirmat.cpp_FUN_0045f700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551d50
        ;   Label: core_set.cpp_FUN_00551d50
    PUSH ESI                            ; 00551d51
    PUSH EDI                            ; 00551d52
    PUSH EBP                            ; 00551d53
    MOV EBP,ESP                         ; 00551d54
    SUB ESP,0xd0                        ; 00551d56
    AND ESP,0xfffffff8                  ; 00551d5c
    MOV EDI,dword ptr [EBP + 0x1c]      ; 00551d5f
    MOV EDX,dword ptr [EBP + 0x18]      ; 00551d62
    TEST EDX,EDX                        ; 00551d65
    JNZ 0x00551e67                      ; 00551d67
        ;   XREF to: 00551e67 (CONDITIONAL_JUMP)  ; LAB_00551e67
    MOV EDI,dword ptr [0x01fe55bc]      ; 00551d6d | DAT_01fe55bc
    MOV dword ptr [0x0202a374],EDX      ; 00551d73 | DAT_0202a374
    TEST EDI,EDI                        ; 00551d79
    JLE 0x00551db2                      ; 00551d7b
        ;   XREF to: 00551db2 (CONDITIONAL_JUMP)  ; LAB_00551db2
    LEA ESI,[EDI*0x4 + 0x0]             ; 00551d7d
    XOR EAX,EAX                         ; 00551d84
    MOV EBX,dword ptr [EAX + 0x1fe55c0] ; 00551d86
        ;   Label: LAB_00551d86
    CMP dword ptr [EBX + 0x1cb4],0x0    ; 00551d8c
    JZ 0x00551dab                       ; 00551d93
        ;   XREF to: 00551dab (CONDITIONAL_JUMP)  ; LAB_00551dab
    MOV ECX,dword ptr [0x0202a374]      ; 00551d95 | DAT_0202a374
    ADD EDX,0x4                         ; 00551d9b
    INC ECX                             ; 00551d9e
    MOV dword ptr [EDX + 0x202a374],EBX ; 00551d9f
    MOV dword ptr [0x0202a374],ECX      ; 00551da5 | DAT_0202a374
    ADD EAX,0x4                         ; 00551dab
        ;   Label: LAB_00551dab
    CMP EAX,ESI                         ; 00551dae
    JL 0x00551d86                       ; 00551db0
        ;   XREF to: 00551d86 (CONDITIONAL_JUMP)  ; LAB_00551d86
    XOR EBX,EBX                         ; 00551db2
        ;   Label: LAB_00551db2
    MOV ESI,dword ptr [0x01fe4e38]      ; 00551db4 | DAT_01fe4e38
    MOV dword ptr [0x0202a1f0],EBX      ; 00551dba | DAT_0202a1f0
    TEST ESI,ESI                        ; 00551dc0
    JLE 0x00551df7                      ; 00551dc2
        ;   XREF to: 00551df7 (CONDITIONAL_JUMP)  ; LAB_00551df7
    SHL ESI,0x2                         ; 00551dc4
    XOR EDX,EDX                         ; 00551dc7
    XOR EAX,EAX                         ; 00551dc9
    MOV EBX,dword ptr [EAX + 0x1fe4e3c] ; 00551dcb
        ;   Label: LAB_00551dcb
    CMP dword ptr [EBX + 0x1cb4],0x0    ; 00551dd1
    JZ 0x00551df0                       ; 00551dd8
        ;   XREF to: 00551df0 (CONDITIONAL_JUMP)  ; LAB_00551df0
    MOV ECX,dword ptr [0x0202a1f0]      ; 00551dda | DAT_0202a1f0
    ADD EDX,0x4                         ; 00551de0
    INC ECX                             ; 00551de3
    MOV dword ptr [EDX + 0x202a1f0],EBX ; 00551de4
    MOV dword ptr [0x0202a1f0],ECX      ; 00551dea | DAT_0202a1f0
    ADD EAX,0x4                         ; 00551df0
        ;   Label: LAB_00551df0
    CMP EAX,ESI                         ; 00551df3
    JL 0x00551dcb                       ; 00551df5
        ;   XREF to: 00551dcb (CONDITIONAL_JUMP)  ; LAB_00551dcb
    MOV EAX,[0x01fe55d0]                ; 00551df7 | DAT_01fe55d0
        ;   Label: LAB_00551df7
    MOV [0x0202a388],EAX                ; 00551dfc | DAT_0202a388
    TEST EAX,EAX                        ; 00551e01
    JLE 0x00551e30                      ; 00551e03
        ;   XREF to: 00551e30 (CONDITIONAL_JUMP)  ; LAB_00551e30
    MOV EBX,dword ptr [0x01fe55d0]      ; 00551e05 | DAT_01fe55d0
    XOR EAX,EAX                         ; 00551e0b
    SHL EBX,0x2                         ; 00551e0d
    ADD EAX,0x4                         ; 00551e10
        ;   Label: LAB_00551e10
    MOV EDX,dword ptr [EAX + 0x1fe55d0] ; 00551e13
    MOV dword ptr [EAX + 0x202a388],EDX ; 00551e19
    CMP EAX,EBX                         ; 00551e1f
    JL 0x00551e10                       ; 00551e21
        ;   XREF to: 00551e10 (CONDITIONAL_JUMP)  ; LAB_00551e10
    LEA EAX,[EAX]                       ; 00551e23
    LEA EDX,[EDX]                       ; 00551e29
    NOP                                 ; 00551e2f
    MOV EAX,[0x01fe5c88]                ; 00551e30 | DAT_01fe5c88
        ;   Label: LAB_00551e30
    MOV [0x0202a51c],EAX                ; 00551e35 | DAT_0202a51c
    TEST EAX,EAX                        ; 00551e3a
    JLE 0x00551e60                      ; 00551e3c
        ;   XREF to: 00551e60 (CONDITIONAL_JUMP)  ; LAB_00551e60
    MOV EBX,dword ptr [0x01fe5c88]      ; 00551e3e | DAT_01fe5c88
    XOR EAX,EAX                         ; 00551e44
    SHL EBX,0x2                         ; 00551e46
    ADD EAX,0x4                         ; 00551e49
        ;   Label: LAB_00551e49
    MOV EDX,dword ptr [EAX + 0x1fe5c88] ; 00551e4c
    MOV dword ptr [EAX + 0x202a51c],EDX ; 00551e52
    CMP EAX,EBX                         ; 00551e58
    JL 0x00551e49                       ; 00551e5a
        ;   XREF to: 00551e49 (CONDITIONAL_JUMP)  ; LAB_00551e49
    LEA EAX,[EAX]                       ; 00551e5c
    MOV ESP,EBP                         ; 00551e60
        ;   Label: LAB_00551e60
    POP EBP                             ; 00551e62
    POP EDI                             ; 00551e63
    POP ESI                             ; 00551e64
    POP EBX                             ; 00551e65
    RET                                 ; 00551e66
    MOV EBX,dword ptr [0x01fe55bc]      ; 00551e67 | DAT_01fe55bc
        ;   Label: LAB_00551e67
    XOR ECX,ECX                         ; 00551e6d
    XOR ESI,ESI                         ; 00551e6f
    MOV dword ptr [0x0202a374],ECX      ; 00551e71 | DAT_0202a374
    TEST EBX,EBX                        ; 00551e77
    JLE 0x00551ece                      ; 00551e79
        ;   XREF to: 00551ece (CONDITIONAL_JUMP)  ; LAB_00551ece
    XOR EBX,EBX                         ; 00551e7b
    MOV EAX,dword ptr [EBX + 0x1fe55c0] ; 00551e7d
        ;   Label: LAB_00551e7d
    CMP dword ptr [EAX + 0x1cb4],0x0    ; 00551e83
    JZ 0x00551ec1                       ; 00551e8a
        ;   XREF to: 00551ec1 (CONDITIONAL_JUMP)  ; LAB_00551ec1
    MOV ECX,dword ptr [EBP + 0x24]      ; 00551e8c
    PUSH ECX                            ; 00551e8f
    MOV EDX,dword ptr [EBP + 0x20]      ; 00551e90
    PUSH EDX                            ; 00551e93
    PUSH EDI                            ; 00551e94
    MOV ECX,dword ptr [EBP + 0x18]      ; 00551e95
    PUSH ECX                            ; 00551e98
    PUSH EAX                            ; 00551e99
    CALL core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452de0 ; 00551e9a
        ;   XREF to: 00452de0 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452de0(CDemonCamera * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * bbox_min, ...)
    ADD ESP,0x14                        ; 00551e9f
    TEST EAX,EAX                        ; 00551ea2
    JZ 0x00551ec1                       ; 00551ea4
        ;   XREF to: 00551ec1 (CONDITIONAL_JUMP)  ; LAB_00551ec1
    MOV EDX,dword ptr [0x0202a374]      ; 00551ea6 | DAT_0202a374
    MOV EAX,dword ptr [EBX + 0x1fe55c0] ; 00551eac
    MOV dword ptr [EDX*0x4 + 0x202a378],EAX ; 00551eb2 | DAT_0202a378
    LEA EAX,[EDX + 0x1]                 ; 00551eb9
    MOV [0x0202a374],EAX                ; 00551ebc | DAT_0202a374
    MOV EAX,[0x01fe55bc]                ; 00551ec1 | DAT_01fe55bc
        ;   Label: LAB_00551ec1
    INC ESI                             ; 00551ec6
    ADD EBX,0x4                         ; 00551ec7
    CMP ESI,EAX                         ; 00551eca
    JL 0x00551e7d                       ; 00551ecc
        ;   XREF to: 00551e7d (CONDITIONAL_JUMP)  ; LAB_00551e7d
    MOV ECX,dword ptr [0x01fe4e38]      ; 00551ece | DAT_01fe4e38
        ;   Label: LAB_00551ece
    XOR EDX,EDX                         ; 00551ed4
    XOR ESI,ESI                         ; 00551ed6
    MOV dword ptr [0x0202a1f0],EDX      ; 00551ed8 | DAT_0202a1f0
    TEST ECX,ECX                        ; 00551ede
    JLE 0x00551f33                      ; 00551ee0
        ;   XREF to: 00551f33 (CONDITIONAL_JUMP)  ; LAB_00551f33
    XOR EBX,EBX                         ; 00551ee2
    MOV EAX,dword ptr [EBX + 0x1fe4e3c] ; 00551ee4
        ;   Label: LAB_00551ee4
    CMP dword ptr [EAX + 0x1cb4],0x0    ; 00551eea
    JZ 0x00551f25                       ; 00551ef1
        ;   XREF to: 00551f25 (CONDITIONAL_JUMP)  ; LAB_00551f25
    MOV ECX,dword ptr [EBP + 0x24]      ; 00551ef3
    PUSH ECX                            ; 00551ef6
    MOV EDX,dword ptr [EBP + 0x20]      ; 00551ef7
    PUSH EDX                            ; 00551efa
    PUSH EDI                            ; 00551efb
    MOV ECX,dword ptr [EBP + 0x18]      ; 00551efc
    PUSH ECX                            ; 00551eff
    PUSH EAX                            ; 00551f00
    CALL core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452de0 ; 00551f01
        ;   XREF to: 00452de0 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452de0(CDemonCamera * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * bbox_min, ...)
    ADD ESP,0x14                        ; 00551f06
    TEST EAX,EAX                        ; 00551f09
    JZ 0x00551f25                       ; 00551f0b
        ;   XREF to: 00551f25 (CONDITIONAL_JUMP)  ; LAB_00551f25
    MOV EAX,[0x0202a1f0]                ; 00551f0d | DAT_0202a1f0
    INC EAX                             ; 00551f12
    MOV EDX,dword ptr [EBX + 0x1fe4e3c] ; 00551f13
    MOV dword ptr [EAX*0x4 + 0x202a1f0],EDX ; 00551f19 | DAT_0202a1f4
    MOV [0x0202a1f0],EAX                ; 00551f20 | DAT_0202a1f0
    MOV EDX,dword ptr [0x01fe4e38]      ; 00551f25 | DAT_01fe4e38
        ;   Label: LAB_00551f25
    INC ESI                             ; 00551f2b
    ADD EBX,0x4                         ; 00551f2c
    CMP ESI,EDX                         ; 00551f2f
    JL 0x00551ee4                       ; 00551f31
        ;   XREF to: 00551ee4 (CONDITIONAL_JUMP)  ; LAB_00551ee4
    XOR ECX,ECX                         ; 00551f33
        ;   Label: LAB_00551f33
    MOV ESI,dword ptr [0x01fe5c88]      ; 00551f35 | DAT_01fe5c88
    MOV dword ptr [ESP + 0xcc],ECX      ; 00551f3b
    MOV dword ptr [0x0202a51c],ECX      ; 00551f42 | DAT_0202a51c
    TEST ESI,ESI                        ; 00551f48
    JLE 0x00552039                      ; 00551f4a
        ;   XREF to: 00552039 (CONDITIONAL_JUMP)  ; LAB_00552039
    MOV dword ptr [ESP + 0xc8],ECX      ; 00551f50
    MOV EBX,dword ptr [ESP + 0xc8]      ; 00551f57
        ;   Label: LAB_00551f57
    MOV EBX,dword ptr [EBX + 0x1fe5c8c] ; 00551f5e
    MOV EDX,dword ptr [EBP + 0x18]      ; 00551f64
    LEA EAX,[EBX + 0x104]               ; 00551f67
    LEA EDI,[ESP + 0x78]                ; 00551f6d
    LEA ESI,[ESP + 0x84]                ; 00551f71
    FLD float ptr [EAX + 0x4]           ; 00551f78
    FLD float ptr [EAX + 0x8]           ; 00551f7b
    FLD float ptr [EAX]                 ; 00551f7e
    LEA EAX,[ESP + 0x78]                ; 00551f80
    FSUB float ptr [EDX]                ; 00551f84
    FXCH ST2                            ; 00551f86
    FSUB float ptr [EDX + 0x4]          ; 00551f88
    FXCH                                ; 00551f8b
    FSUB float ptr [EDX + 0x8]          ; 00551f8d
    FXCH ST2                            ; 00551f90
    FSTP float ptr [ESP + 0x84]         ; 00551f92
    FSTP float ptr [ESP + 0x88]         ; 00551f99
    FSTP float ptr [ESP + 0x8c]         ; 00551fa0
    PUSH EAX                            ; 00551fa7
    MOV EDX,dword ptr [EBP + 0x28]      ; 00551fa8
    MOVSD ES:EDI,ESI                    ; 00551fab
    MOVSD ES:EDI,ESI                    ; 00551fac
    MOVSD ES:EDI,ESI                    ; 00551fad
    PUSH EDX                            ; 00551fae
    LEA ESI,[ESP + 0x98]                ; 00551faf
    LEA EDI,[ESP + 0x20]                ; 00551fb6
    CALL core_dirmat.cpp_FUN_0045f700   ; 00551fba
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    LEA ESI,[ESP + 0x98]                ; 00551fbf
    LEA EAX,[ESP + 0x20]                ; 00551fc6
    ADD ESP,0x8                         ; 00551fca
    LEA EDX,[ESP + 0x78]                ; 00551fcd
    MOVSD ES:EDI,ESI                    ; 00551fd1
    MOVSD ES:EDI,ESI                    ; 00551fd2
    MOVSD ES:EDI,ESI                    ; 00551fd3
    CMP EDX,EAX                         ; 00551fd4
    JZ 0x00551ff3                       ; 00551fd6
        ;   XREF to: 00551ff3 (CONDITIONAL_JUMP)  ; LAB_00551ff3
    MOV EAX,dword ptr [ESP + 0x18]      ; 00551fd8
    MOV dword ptr [ESP + 0x78],EAX      ; 00551fdc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00551fe0
    MOV dword ptr [ESP + 0x7c],EAX      ; 00551fe4
    MOV EAX,dword ptr [ESP + 0x20]      ; 00551fe8
    MOV dword ptr [ESP + 0x80],EAX      ; 00551fec
    FLD float ptr [ESP + 0x78]          ; 00551ff3
        ;   Label: LAB_00551ff3
    FADD float ptr [EBX + 0x11d4]       ; 00551ff7
    MOV EAX,dword ptr [EBP + 0x20]      ; 00551ffd
    FCOMP float ptr [EAX]               ; 00552000
    FNSTSW AX                           ; 00552002
    SAHF                                ; 00552004
    JNC 0x0055232a                      ; 00552005
        ;   XREF to: 0055232a (CONDITIONAL_JUMP)  ; LAB_0055232a
    MOV EDX,dword ptr [ESP + 0xc8]      ; 0055200b
        ;   Label: LAB_0055200b
    MOV ECX,dword ptr [ESP + 0xcc]      ; 00552012
    MOV EBX,dword ptr [0x01fe5c88]      ; 00552019 | DAT_01fe5c88
    ADD EDX,0x4                         ; 0055201f
    INC ECX                             ; 00552022
    MOV dword ptr [ESP + 0xc8],EDX      ; 00552023
    MOV dword ptr [ESP + 0xcc],ECX      ; 0055202a
    CMP ECX,EBX                         ; 00552031
    JL 0x00551f57                       ; 00552033
        ;   XREF to: 00551f57 (CONDITIONAL_JUMP)  ; LAB_00551f57
    XOR ESI,ESI                         ; 00552039
        ;   Label: LAB_00552039
    MOV EDI,dword ptr [0x01fe55d0]      ; 0055203b | DAT_01fe55d0
    MOV dword ptr [0x0202a388],ESI      ; 00552041 | DAT_0202a388
    TEST EDI,EDI                        ; 00552047
    JLE 0x0055209a                      ; 00552049
        ;   XREF to: 0055209a (CONDITIONAL_JUMP)  ; LAB_0055209a
    XOR EBX,EBX                         ; 0055204b
    MOV EDX,dword ptr [EBP + 0x24]      ; 0055204d
        ;   Label: LAB_0055204d
    PUSH EDX                            ; 00552050
    MOV ECX,dword ptr [EBP + 0x20]      ; 00552051
    PUSH ECX                            ; 00552054
    MOV EDI,dword ptr [EBP + 0x28]      ; 00552055
    PUSH EDI                            ; 00552058
    MOV EAX,dword ptr [EBP + 0x18]      ; 00552059
    PUSH EAX                            ; 0055205c
    MOV EDX,dword ptr [EBX + 0x1fe55d4] ; 0055205d
    PUSH EDX                            ; 00552063
    CALL core_dglobe.cpp_FUN_0045edf0   ; 00552064
        ;   XREF to: 0045edf0 (UNCONDITIONAL_CALL)  ; int core_dglobe.cpp_FUN_0045edf0(CDemonGlobe * this_ptr, CVector3f * reference_position, CMatrix3x3f * rotation_matrix, CVector3f * aabb_min, ...)
    ADD ESP,0x14                        ; 00552069
    TEST EAX,EAX                        ; 0055206c
    JZ 0x0055208c                       ; 0055206e
        ;   XREF to: 0055208c (CONDITIONAL_JUMP)  ; LAB_0055208c
    MOV EDX,dword ptr [0x0202a388]      ; 00552070 | DAT_0202a388
    MOV EAX,dword ptr [EBX + 0x1fe55d4] ; 00552076
    LEA ECX,[EDX + 0x1]                 ; 0055207c
    MOV dword ptr [EDX*0x4 + 0x202a38c],EAX ; 0055207f | DAT_0202a38c
    MOV dword ptr [0x0202a388],ECX      ; 00552086 | DAT_0202a388
    MOV EDI,dword ptr [0x01fe55d0]      ; 0055208c | DAT_01fe55d0
        ;   Label: LAB_0055208c
    INC ESI                             ; 00552092
    ADD EBX,0x4                         ; 00552093
    CMP ESI,EDI                         ; 00552096
    JL 0x0055204d                       ; 00552098
        ;   XREF to: 0055204d (CONDITIONAL_JUMP)  ; LAB_0055204d
    MOV EAX,[0x01fe5a88]                ; 0055209a | DAT_01fe5a88
        ;   Label: LAB_0055209a
    XOR EDI,EDI                         ; 0055209f
    TEST EAX,EAX                        ; 005520a1
    JLE 0x005520f4                      ; 005520a3
        ;   XREF to: 005520f4 (CONDITIONAL_JUMP)  ; LAB_005520f4
    XOR ESI,ESI                         ; 005520a5
    MOV EDX,dword ptr [EBP + 0x24]      ; 005520a7
        ;   Label: LAB_005520a7
    PUSH EDX                            ; 005520aa
    MOV ECX,dword ptr [EBP + 0x20]      ; 005520ab
    PUSH ECX                            ; 005520ae
    MOV EBX,dword ptr [EBP + 0x28]      ; 005520af
    PUSH EBX                            ; 005520b2
    MOV EAX,dword ptr [EBP + 0x18]      ; 005520b3
    PUSH EAX                            ; 005520b6
    MOV EDX,dword ptr [ESI + 0x1fe5a8c] ; 005520b7
    PUSH EDX                            ; 005520bd
    CALL core_dglobe.cpp_FUN_0045edf0   ; 005520be
        ;   XREF to: 0045edf0 (UNCONDITIONAL_CALL)  ; int core_dglobe.cpp_FUN_0045edf0(CDemonGlobe * this_ptr, CVector3f * reference_position, CMatrix3x3f * rotation_matrix, CVector3f * aabb_min, ...)
    ADD ESP,0x14                        ; 005520c3
    TEST EAX,EAX                        ; 005520c6
    JZ 0x005520e6                       ; 005520c8
        ;   XREF to: 005520e6 (CONDITIONAL_JUMP)  ; LAB_005520e6
    MOV EDX,dword ptr [0x0202a388]      ; 005520ca | DAT_0202a388
    MOV EAX,dword ptr [ESI + 0x1fe5a8c] ; 005520d0
    LEA ECX,[EDX + 0x1]                 ; 005520d6
    MOV dword ptr [EDX*0x4 + 0x202a38c],EAX ; 005520d9 | DAT_0202a390
    MOV dword ptr [0x0202a388],ECX      ; 005520e0 | DAT_0202a388
    MOV EBX,dword ptr [0x01fe5a88]      ; 005520e6 | DAT_01fe5a88
        ;   Label: LAB_005520e6
    INC EDI                             ; 005520ec
    ADD ESI,0x4                         ; 005520ed
    CMP EDI,EBX                         ; 005520f0
    JL 0x005520a7                       ; 005520f2
        ;   XREF to: 005520a7 (CONDITIONAL_JUMP)  ; LAB_005520a7
    CMP dword ptr [0x0202a51c],0x0      ; 005520f4 | DAT_0202a51c
        ;   Label: LAB_005520f4
    JLE 0x00551e60                      ; 005520fb
        ;   XREF to: 00551e60 (CONDITIONAL_JUMP)  ; LAB_00551e60
    MOV EAX,dword ptr [EBP + 0x24]      ; 00552101
    FLD float ptr [EAX]                 ; 00552104
    MOV EAX,dword ptr [EBP + 0x20]      ; 00552106
    FSUB float ptr [EAX]                ; 00552109
    MOV EAX,dword ptr [EBP + 0x24]      ; 0055210b
    FLD float ptr [EAX + 0x4]           ; 0055210e
    MOV EAX,dword ptr [EBP + 0x20]      ; 00552111
    FSUB float ptr [EAX + 0x4]          ; 00552114
    MOV EAX,dword ptr [EBP + 0x24]      ; 00552117
    LEA EDI,[ESP + 0x48]                ; 0055211a
    MOV ESI,ESP                         ; 0055211e
    FLD float ptr [EAX + 0x8]           ; 00552120
    MOV EAX,dword ptr [EBP + 0x20]      ; 00552123
    FXCH ST2                            ; 00552126
    FSTP float ptr [ESP]                ; 00552128
    FXCH                                ; 0055212b
    FSUB float ptr [EAX + 0x8]          ; 0055212d
    FXCH                                ; 00552130
    FSTP float ptr [ESP + 0x4]          ; 00552132
    FSTP float ptr [ESP + 0x8]          ; 00552136
    LEA EAX,[ESP + 0x48]                ; 0055213a
    MOVSD ES:EDI,ESI                    ; 0055213e
    MOVSD ES:EDI,ESI                    ; 0055213f
    MOVSD ES:EDI,ESI                    ; 00552140
    PUSH EAX                            ; 00552141
    MOV EDI,dword ptr [EBP + 0x28]      ; 00552142
    PUSH EDI                            ; 00552145
    LEA ESI,[ESP + 0xa4]                ; 00552146
    CALL core_dirmat.cpp_FUN_0045f690   ; 0055214d
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA EDI,[ESP + 0x44]                ; 00552152
    ADD ESP,0x8                         ; 00552156
    LEA ESI,[ESP + 0x9c]                ; 00552159
    MOV EAX,dword ptr [EBP + 0x18]      ; 00552160
    MOVSD ES:EDI,ESI                    ; 00552163
    MOVSD ES:EDI,ESI                    ; 00552164
    MOVSD ES:EDI,ESI                    ; 00552165
    FLD float ptr [EAX + 0x4]           ; 00552166
    FLD float ptr [EAX + 0x8]           ; 00552169
    FLD float ptr [EAX]                 ; 0055216c
    LEA EDI,[ESP + 0x6c]                ; 0055216e
    LEA ESI,[ESP + 0x60]                ; 00552172
    XOR EAX,EAX                         ; 00552176
    FADD float ptr [ESP + 0x3c]         ; 00552178
    FXCH ST2                            ; 0055217c
    FADD float ptr [ESP + 0x40]         ; 0055217e
    FXCH                                ; 00552182
    FADD float ptr [ESP + 0x44]         ; 00552184
    FXCH ST2                            ; 00552188
    FSTP float ptr [ESP + 0x60]         ; 0055218a
    FSTP float ptr [ESP + 0x64]         ; 0055218e
    FSTP float ptr [ESP + 0x68]         ; 00552192
    MOV dword ptr [ESP + 0x2c],EAX      ; 00552196
    MOV dword ptr [ESP + 0x28],EAX      ; 0055219a
    MOV dword ptr [ESP + 0x24],EAX      ; 0055219e
    MOV dword ptr [ESP + 0x5c],EAX      ; 005521a2
    MOV dword ptr [ESP + 0x58],EAX      ; 005521a6
    MOV dword ptr [ESP + 0x54],EAX      ; 005521aa
    MOVSD ES:EDI,ESI                    ; 005521ae
    MOVSD ES:EDI,ESI                    ; 005521af
    MOVSD ES:EDI,ESI                    ; 005521b0
    MOV EAX,[0x0202a51c]                ; 005521b1 | DAT_0202a51c
    XOR ESI,ESI                         ; 005521b6
    TEST EAX,EAX                        ; 005521b8
    JLE 0x00552254                      ; 005521ba
        ;   XREF to: 00552254 (CONDITIONAL_JUMP)  ; LAB_00552254
    LEA EDI,[EAX*0x4 + 0x0]             ; 005521c0
    XOR EBX,EBX                         ; 005521c7
    MOV EDX,dword ptr [EBX + 0x202a520] ; 005521c9
        ;   Label: LAB_005521c9
    TEST dword ptr [EDX + 0x11d4],0x7fffffff ; 005521cf
    JZ 0x005523c6                       ; 005521d9
        ;   XREF to: 005523c6 (CONDITIONAL_JUMP)  ; LAB_005523c6
    FLD float ptr [EDX + 0x108]         ; 005521df
    FLD float ptr [EDX + 0x104]         ; 005521e5
    FSUB float ptr [ESP + 0x6c]         ; 005521eb
    FXCH                                ; 005521ef
    FSUB float ptr [ESP + 0x70]         ; 005521f1
    FXCH                                ; 005521f5
    FST float ptr [ESP + 0xc0]          ; 005521f7
    FMUL float ptr [ESP + 0xc0]         ; 005521fe
    FXCH                                ; 00552205
    FST float ptr [ESP + 0xbc]          ; 00552207
    FMUL float ptr [ESP + 0xbc]         ; 0055220e
    FLD float ptr [EDX + 0x10c]         ; 00552215
    FSUB float ptr [ESP + 0x74]         ; 0055221b
    FXCH                                ; 0055221f
    FADDP ST2,ST0                       ; 00552221
    FST float ptr [ESP + 0xb8]          ; 00552223
    FMUL float ptr [ESP + 0xb8]         ; 0055222a
    FADDP                               ; 00552231
    FST float ptr [ESP + 0xc4]          ; 00552233
    FCOMP float ptr [EDX + 0x11d8]      ; 0055223a
    FNSTSW AX                           ; 00552240
    SAHF                                ; 00552242
    JBE 0x005523f6                      ; 00552243
        ;   XREF to: 005523f6 (CONDITIONAL_JUMP)  ; LAB_005523f6
    ADD EBX,0x4                         ; 00552249
        ;   Label: LAB_00552249
    CMP EBX,EDI                         ; 0055224c
    JL 0x005521c9                       ; 0055224e
        ;   XREF to: 005521c9 (CONDITIONAL_JUMP)  ; LAB_005521c9
    TEST ESI,ESI                        ; 00552254
        ;   Label: LAB_00552254
    JZ 0x00552474                       ; 00552256
        ;   XREF to: 00552474 (CONDITIONAL_JUMP)  ; LAB_00552474
    LEA EBX,[ESP + 0xc]                 ; 0055225c
    LEA EAX,[ESP + 0x54]                ; 00552260
    FLD float ptr [EAX]                 ; 00552264
    FMUL float ptr [0x00605000]         ; 00552266 | DAT_00605000
    FISTP dword ptr [EBX]               ; 0055226c
    FLD float ptr [EAX + 0x4]           ; 0055226e
    FMUL float ptr [0x00605000]         ; 00552271 | DAT_00605000
    FISTP dword ptr [EBX + 0x4]         ; 00552277
    FLD float ptr [EAX + 0x8]           ; 0055227a
    FMUL float ptr [0x00605000]         ; 0055227d | DAT_00605000
    FISTP dword ptr [EBX + 0x8]         ; 00552283
    LEA EBX,[ESP + 0x30]                ; 00552286
        ;   Label: LAB_00552286
    LEA EAX,[ESP + 0x24]                ; 0055228a
    FLD float ptr [EAX]                 ; 0055228e
    FMUL float ptr [0x00605000]         ; 00552290 | DAT_00605000
    FISTP dword ptr [EBX]               ; 00552296
    FLD float ptr [EAX + 0x4]           ; 00552298
    FMUL float ptr [0x00605000]         ; 0055229b | DAT_00605000
    FISTP dword ptr [EBX + 0x4]         ; 005522a1
    FLD float ptr [EAX + 0x8]           ; 005522a4
    FMUL float ptr [0x00605000]         ; 005522a7 | DAT_00605000
    FISTP dword ptr [EBX + 0x8]         ; 005522ad
    MOV EAX,dword ptr [ESP + 0x30]      ; 005522b0
    ADD EAX,dword ptr [ESP + 0xc]       ; 005522b4
    MOV ECX,dword ptr [ESP + 0x10]      ; 005522b8
    MOV [0x0202a89c],EAX                ; 005522bc | DAT_0202a89c
    MOV EAX,dword ptr [ESP + 0x34]      ; 005522c1
    ADD EAX,ECX                         ; 005522c5
    MOV EBX,dword ptr [ESP + 0x14]      ; 005522c7
    MOV [0x0202a8a0],EAX                ; 005522cb | DAT_0202a8a0
    MOV EAX,dword ptr [ESP + 0x38]      ; 005522d0
    ADD EAX,EBX                         ; 005522d4
    MOV ESI,dword ptr [0x0202a89c]      ; 005522d6 | DAT_0202a89c
    MOV [0x0202a8a4],EAX                ; 005522dc | DAT_0202a8a4
    CMP ESI,0xffff                      ; 005522e1
    JLE 0x005522f3                      ; 005522e7
        ;   XREF to: 005522f3 (CONDITIONAL_JUMP)  ; LAB_005522f3
    MOV dword ptr [0x0202a89c],0xffff   ; 005522e9 | DAT_0202a89c
    CMP dword ptr [0x0202a8a0],0xffff   ; 005522f3 | DAT_0202a8a0
        ;   Label: LAB_005522f3
    JLE 0x00552309                      ; 005522fd
        ;   XREF to: 00552309 (CONDITIONAL_JUMP)  ; LAB_00552309
    MOV dword ptr [0x0202a8a0],0xffff   ; 005522ff | DAT_0202a8a0
    CMP dword ptr [0x0202a8a4],0xffff   ; 00552309 | DAT_0202a8a4
        ;   Label: LAB_00552309
    JLE 0x00551e60                      ; 00552313
        ;   XREF to: 00551e60 (CONDITIONAL_JUMP)  ; LAB_00551e60
    MOV dword ptr [0x0202a8a4],0xffff   ; 00552319 | DAT_0202a8a4
    MOV ESP,EBP                         ; 00552323
    POP EBP                             ; 00552325
    POP EDI                             ; 00552326
    POP ESI                             ; 00552327
    POP EBX                             ; 00552328
    RET                                 ; 00552329
    FLD float ptr [ESP + 0x7c]          ; 0055232a
        ;   Label: LAB_0055232a
    FADD float ptr [EBX + 0x11d4]       ; 0055232e
    MOV EAX,dword ptr [EBP + 0x20]      ; 00552334
    FCOMP float ptr [EAX + 0x4]         ; 00552337
    FNSTSW AX                           ; 0055233a
    SAHF                                ; 0055233c
    JC 0x0055200b                       ; 0055233d
        ;   XREF to: 0055200b (CONDITIONAL_JUMP)  ; LAB_0055200b
    FLD float ptr [ESP + 0x80]          ; 00552343
    FADD float ptr [EBX + 0x11d4]       ; 0055234a
    MOV EAX,dword ptr [EBP + 0x20]      ; 00552350
    FCOMP float ptr [EAX + 0x8]         ; 00552353
    FNSTSW AX                           ; 00552356
    SAHF                                ; 00552358
    JC 0x0055200b                       ; 00552359
        ;   XREF to: 0055200b (CONDITIONAL_JUMP)  ; LAB_0055200b
    FLD float ptr [ESP + 0x78]          ; 0055235f
    FSUB float ptr [EBX + 0x11d4]       ; 00552363
    MOV EAX,dword ptr [EBP + 0x24]      ; 00552369
    FCOMP float ptr [EAX]               ; 0055236c
    FNSTSW AX                           ; 0055236e
    SAHF                                ; 00552370
    JA 0x0055200b                       ; 00552371
        ;   XREF to: 0055200b (CONDITIONAL_JUMP)  ; LAB_0055200b
    FLD float ptr [ESP + 0x7c]          ; 00552377
    FSUB float ptr [EBX + 0x11d4]       ; 0055237b
    MOV EAX,dword ptr [EBP + 0x24]      ; 00552381
    FCOMP float ptr [EAX + 0x4]         ; 00552384
    FNSTSW AX                           ; 00552387
    SAHF                                ; 00552389
    JA 0x0055200b                       ; 0055238a
        ;   XREF to: 0055200b (CONDITIONAL_JUMP)  ; LAB_0055200b
    FLD float ptr [ESP + 0x80]          ; 00552390
    FSUB float ptr [EBX + 0x11d4]       ; 00552397
    MOV EAX,dword ptr [EBP + 0x24]      ; 0055239d
    FCOMP float ptr [EAX + 0x8]         ; 005523a0
    FNSTSW AX                           ; 005523a3
    SAHF                                ; 005523a5
    JA 0x0055200b                       ; 005523a6
        ;   XREF to: 0055200b (CONDITIONAL_JUMP)  ; LAB_0055200b
    MOV EAX,[0x0202a51c]                ; 005523ac | DAT_0202a51c
    LEA ECX,[EAX + 0x1]                 ; 005523b1
    MOV dword ptr [EAX*0x4 + 0x202a520],EBX ; 005523b4 | DAT_0202a520
    MOV dword ptr [0x0202a51c],ECX      ; 005523bb | DAT_0202a51c
    JMP 0x0055200b                      ; 005523c1
        ;   XREF to: 0055200b (UNCONDITIONAL_JUMP)  ; LAB_0055200b
    FLD float ptr [EDX + 0x11c4]        ; 005523c6
        ;   Label: LAB_005523c6
    FADD float ptr [ESP + 0x54]         ; 005523cc
    FSTP float ptr [ESP + 0x54]         ; 005523d0
    FLD float ptr [EDX + 0x11c8]        ; 005523d4
    FADD float ptr [ESP + 0x58]         ; 005523da
    FSTP float ptr [ESP + 0x58]         ; 005523de
    FLD float ptr [EDX + 0x11cc]        ; 005523e2
    FADD float ptr [ESP + 0x5c]         ; 005523e8
    INC ESI                             ; 005523ec
    FSTP float ptr [ESP + 0x5c]         ; 005523ed
    JMP 0x00552249                      ; 005523f1
        ;   XREF to: 00552249 (UNCONDITIONAL_JUMP)  ; LAB_00552249
    MOV EAX,dword ptr [ESP + 0xc4]      ; 005523f6
        ;   Label: LAB_005523f6
    MOV ECX,dword ptr [0x01cc804c]      ; 005523fd | DAT_01cc804c
    SAR EAX,0x1                         ; 00552403
    ADD EAX,ECX                         ; 00552405
    MOV dword ptr [ESP + 0xb0],EAX      ; 00552407
    FLD float ptr [ESP + 0xb0]          ; 0055240e
    FMUL float ptr [EDX + 0x11dc]       ; 00552415
    FLD1                                ; 0055241b
    FSUBRP                              ; 0055241d
    FLD ST0                             ; 0055241f
    FMUL float ptr [0x005f0996]         ; 00552421 | DAT_005f0996
    FST ST1                             ; 00552427
    FMUL float ptr [EDX + 0x11c4]       ; 00552429
    FLD double ptr [0x005f099e]         ; 0055242f | DAT_005f099e
    FXCH                                ; 00552435
    FMUL ST1                            ; 00552437
    FLD float ptr [ESP + 0x24]          ; 00552439
    FXCH                                ; 0055243d
    FADD ST0,ST1                        ; 0055243f
    FLD ST3                             ; 00552441
    FXCH                                ; 00552443
    FSTP ST2                            ; 00552445
    FXCH                                ; 00552447
    FSTP float ptr [ESP + 0x24]         ; 00552449
    FMUL float ptr [EDX + 0x11c8]       ; 0055244d
    FMUL ST1                            ; 00552453
    FADD float ptr [ESP + 0x28]         ; 00552455
    FSTP float ptr [ESP + 0x28]         ; 00552459
    FXCH                                ; 0055245d
    FMUL float ptr [EDX + 0x11cc]       ; 0055245f
    FMULP                               ; 00552465
    FADD float ptr [ESP + 0x2c]         ; 00552467
    FSTP float ptr [ESP + 0x2c]         ; 0055246b
    JMP 0x00552249                      ; 0055246f
        ;   XREF to: 00552249 (UNCONDITIONAL_JUMP)  ; LAB_00552249
    MOV EBX,0xaaaa                      ; 00552474
        ;   Label: LAB_00552474
    MOV dword ptr [ESP + 0x10],EBX      ; 00552479
    MOV dword ptr [ESP + 0x14],EBX      ; 0055247d
    MOV dword ptr [ESP + 0xc],EBX       ; 00552481
    JMP 0x00552286                      ; 00552485
        ;   XREF to: 00552286 (UNCONDITIONAL_JUMP)  ; LAB_00552286

