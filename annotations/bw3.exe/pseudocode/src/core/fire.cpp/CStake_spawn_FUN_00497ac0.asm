; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CStake_spawn_FUN_00497ac0(CStake *this_ptr,CVector3f *spawn_position,CVector3f *orientation_angles,CVector3f *surface_normal)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   spawn_position
; CVector3f *      Stack[0xc]:4   orientation_angles
; CVector3f *      Stack[0x10]:4   surface_normal
; Local Variables:
; undefined        Stack[-0xf4]:1  local_f4
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
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createStake_FUN_004a25f0 at 004a26ca
;
; Referenced Globals:
;   undefined4 DAT_005c0514
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_box.cpp_CBox_setupCorners_FUN_0041ae00
;   core_box.cpp_CBox_setupVelocities_FUN_0041d790
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
;   core_dirmat.cpp_FUN_0045b800
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00497ac0
        ;   Label: core_fire.cpp_CStake_spawn_FUN_00497ac0
    PUSH ESI                            ; 00497ac1
    PUSH EDI                            ; 00497ac2
    PUSH EBP                            ; 00497ac3
    SUB ESP,0xe4                        ; 00497ac4
    MOV EBX,dword ptr [ESP + 0x104]     ; 00497aca
    MOV EDX,dword ptr [ESP + 0x100]     ; 00497ad1
    PUSH EDX                            ; 00497ad8
    LEA EAX,[ESP + 0x4]                 ; 00497ad9
    PUSH EAX                            ; 00497add
    MOV EDI,0x41200000                  ; 00497ade
    LEA ESI,[ESP + 0xa8]                ; 00497ae3
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 ; 00497aea
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00497aef
    XOR ECX,ECX                         ; 00497af2
    LEA EAX,[ESP + 0xc4]                ; 00497af4
    MOV dword ptr [ESP + 0xc4],ECX      ; 00497afb
    PUSH EAX                            ; 00497b02
    LEA EAX,[ESP + 0x4]                 ; 00497b03
    MOV dword ptr [ESP + 0xcc],ECX      ; 00497b07
    PUSH EAX                            ; 00497b0e
    MOV dword ptr [ESP + 0xd4],EDI      ; 00497b0f
    LEA EDI,[ESP + 0x78]                ; 00497b16
    CALL core_dirmat.cpp_FUN_0045b800   ; 00497b1a
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    LEA ESI,[ESP + 0xa8]                ; 00497b1f
    ADD ESP,0x8                         ; 00497b26
    MOVSD ES:EDI,ESI                    ; 00497b29
    MOVSD ES:EDI,ESI                    ; 00497b2a
    MOVSD ES:EDI,ESI                    ; 00497b2b
    FLD float ptr [EBX + 0x4]           ; 00497b2c
    FMUL float ptr [ESP + 0x74]         ; 00497b2f
    FLD float ptr [EBX]                 ; 00497b33
    FMUL float ptr [ESP + 0x70]         ; 00497b35
    FADDP                               ; 00497b39
    FLD float ptr [EBX + 0x8]           ; 00497b3b
    FMUL float ptr [ESP + 0x78]         ; 00497b3e
    FADDP                               ; 00497b42
    FMUL float ptr [0x005c0514]         ; 00497b44 | DAT_005c0514
    FLD float ptr [EBX]                 ; 00497b4a
    FXCH                                ; 00497b4c
    FSTP float ptr [ESP + 0xdc]         ; 00497b4e
    FMUL float ptr [ESP + 0xdc]         ; 00497b55
    FLD float ptr [EBX + 0x4]           ; 00497b5c
    FMUL float ptr [ESP + 0xdc]         ; 00497b5f
    FLD float ptr [EBX + 0x8]           ; 00497b66
    FMUL float ptr [ESP + 0xdc]         ; 00497b69
    LEA EAX,[ESP + 0x94]                ; 00497b70
    LEA EDI,[ESP + 0x40]                ; 00497b77
    LEA ESI,[ESP + 0x64]                ; 00497b7b
    FXCH ST2                            ; 00497b7f
    FSTP float ptr [ESP + 0x64]         ; 00497b81
    FSTP float ptr [ESP + 0x68]         ; 00497b85
    FSTP float ptr [ESP + 0x6c]         ; 00497b89
    MOVSD ES:EDI,ESI                    ; 00497b8d
    MOVSD ES:EDI,ESI                    ; 00497b8e
    MOVSD ES:EDI,ESI                    ; 00497b8f
    LEA EBX,[ESP + 0x70]                ; 00497b90
    FLD float ptr [ESP + 0x40]          ; 00497b94
    FLD float ptr [ESP + 0x44]          ; 00497b98
    FLD float ptr [ESP + 0x48]          ; 00497b9c
    LEA EDI,[ESP + 0x94]                ; 00497ba0
    LEA ESI,[ESP + 0x58]                ; 00497ba7
    FXCH ST2                            ; 00497bab
    FSUB float ptr [ESP + 0x70]         ; 00497bad
    FXCH                                ; 00497bb1
    FSUB float ptr [ESP + 0x74]         ; 00497bb3
    FXCH ST2                            ; 00497bb7
    FSUB float ptr [ESP + 0x78]         ; 00497bb9
    FXCH                                ; 00497bbd
    FSTP float ptr [ESP + 0x58]         ; 00497bbf
    FXCH                                ; 00497bc3
    FSTP float ptr [ESP + 0x5c]         ; 00497bc5
    FSTP float ptr [ESP + 0x60]         ; 00497bc9
    MOVSD ES:EDI,ESI                    ; 00497bcd
    MOVSD ES:EDI,ESI                    ; 00497bce
    MOVSD ES:EDI,ESI                    ; 00497bcf
    CMP EBX,EAX                         ; 00497bd0
    JNZ 0x00497d8f                      ; 00497bd2
        ;   XREF to: 00497d8f (CONDITIONAL_JUMP)  ; LAB_00497d8f
    FLD float ptr [ESP + 0x70]          ; 00497bd8
        ;   Label: LAB_00497bd8
    FLD float ptr [ESP + 0x74]          ; 00497bdc
    FLD float ptr [ESP + 0x78]          ; 00497be0
    LEA EDI,[ESP + 0x4c]                ; 00497be4
    LEA ESI,[ESP + 0x88]                ; 00497be8
    LEA EAX,[ESP + 0x4c]                ; 00497bef
    LEA EBX,[ESP + 0x70]                ; 00497bf3
    FXCH ST2                            ; 00497bf7
    FCHS                                ; 00497bf9
    FXCH                                ; 00497bfb
    FCHS                                ; 00497bfd
    FXCH ST2                            ; 00497bff
    FCHS                                ; 00497c01
    FXCH ST2                            ; 00497c03
    FSTP float ptr [ESP + 0x8c]         ; 00497c05
    FXCH                                ; 00497c0c
    FSTP float ptr [ESP + 0x90]         ; 00497c0e
    FSTP float ptr [ESP + 0x88]         ; 00497c15
    MOVSD ES:EDI,ESI                    ; 00497c1c
    MOVSD ES:EDI,ESI                    ; 00497c1d
    MOVSD ES:EDI,ESI                    ; 00497c1e
    CMP EBX,EAX                         ; 00497c1f
    JZ 0x00497c3b                       ; 00497c21
        ;   XREF to: 00497c3b (CONDITIONAL_JUMP)  ; LAB_00497c3b
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00497c23
    MOV dword ptr [ESP + 0x70],EAX      ; 00497c27
    MOV EAX,dword ptr [ESP + 0x50]      ; 00497c2b
    MOV dword ptr [ESP + 0x74],EAX      ; 00497c2f
    MOV EAX,dword ptr [ESP + 0x54]      ; 00497c33
    MOV dword ptr [ESP + 0x78],EAX      ; 00497c37
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00497c3b
        ;   Label: LAB_00497c3b
    PUSH 0x1c73698                      ; 00497c42
    LEA EDI,[ESP + 0x2c]                ; 00497c47
    MOV dword ptr [EAX],0x0             ; 00497c4b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 00497c51
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 00497c56
    LEA ESI,[EAX + 0x338]               ; 00497c5b
    ADD ESP,0x4                         ; 00497c61
    LEA EBX,[ESP + 0xac]                ; 00497c64
    MOVSD.REP ES:EDI,ESI                ; 00497c6b
    LEA EAX,[ESP + 0xb8]                ; 00497c6d
    FLD float ptr [ESP + 0x34]          ; 00497c74
    FLD float ptr [ESP + 0x38]          ; 00497c78
    FLD float ptr [ESP + 0x3c]          ; 00497c7c
    LEA EDI,[ESP + 0xb8]                ; 00497c80
    LEA ESI,[ESP + 0xd0]                ; 00497c87
    FXCH ST2                            ; 00497c8e
    FSUB float ptr [ESP + 0x28]         ; 00497c90
    FXCH                                ; 00497c94
    FSUB float ptr [ESP + 0x2c]         ; 00497c96
    FXCH ST2                            ; 00497c9a
    FSUB float ptr [ESP + 0x30]         ; 00497c9c
    FXCH                                ; 00497ca0
    FSTP float ptr [ESP + 0xd0]         ; 00497ca2
    FXCH                                ; 00497ca9
    FSTP float ptr [ESP + 0xd4]         ; 00497cab
    FSTP float ptr [ESP + 0xd8]         ; 00497cb2
    MOVSD ES:EDI,ESI                    ; 00497cb9
    MOVSD ES:EDI,ESI                    ; 00497cba
    MOVSD ES:EDI,ESI                    ; 00497cbb
    CMP EBX,EAX                         ; 00497cbc
    JZ 0x00497cea                       ; 00497cbe
        ;   XREF to: 00497cea (CONDITIONAL_JUMP)  ; LAB_00497cea
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00497cc0
    MOV dword ptr [ESP + 0xac],EAX      ; 00497cc7
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00497cce
    MOV dword ptr [ESP + 0xb0],EAX      ; 00497cd5
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00497cdc
    MOV dword ptr [ESP + 0xb4],EAX      ; 00497ce3
    LEA EAX,[ESP + 0xac]                ; 00497cea
        ;   Label: LAB_00497cea
    PUSH 0x40000000                     ; 00497cf1
    PUSH EAX                            ; 00497cf6
    MOV EBP,dword ptr [ESP + 0x108]     ; 00497cf7
    PUSH EBP                            ; 00497cfe
    MOV EAX,dword ptr [ESP + 0x108]     ; 00497cff
    MOV EBX,dword ptr [ESP + 0x104]     ; 00497d06
    PUSH EAX                            ; 00497d0d
    ADD EBX,0x4                         ; 00497d0e
    PUSH EBX                            ; 00497d11
    CALL core_box.cpp_CBox_setupCorners_FUN_0041ae00 ; 00497d12
        ;   XREF to: 0041ae00 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupCorners_FUN_0041ae00(CBox * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * extents, ...)
    ADD ESP,0x14                        ; 00497d17
    PUSH 0x4116cbe4                     ; 00497d1a
    PUSH 0xc116cbe4                     ; 00497d1f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00497d24
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xe8],EAX      ; 00497d29
    FLD float ptr [ESP + 0xe8]          ; 00497d30
    ADD ESP,0x8                         ; 00497d37
    XOR EDX,EDX                         ; 00497d3a
    PUSH 0x4116cbe4                     ; 00497d3c
    FSTP float ptr [ESP + 0x80]         ; 00497d41
    PUSH 0xc116cbe4                     ; 00497d48
    MOV dword ptr [ESP + 0x8c],EDX      ; 00497d4d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00497d54
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xe8],EAX      ; 00497d59
    FLD float ptr [ESP + 0xe8]          ; 00497d60
    ADD ESP,0x8                         ; 00497d67
    LEA EAX,[ESP + 0x7c]                ; 00497d6a
    PUSH EAX                            ; 00497d6e
    LEA EAX,[ESP + 0x74]                ; 00497d6f
    PUSH EAX                            ; 00497d73
    PUSH EBX                            ; 00497d74
    FSTP float ptr [ESP + 0x8c]         ; 00497d75
    CALL core_box.cpp_CBox_setupVelocities_FUN_0041d790 ; 00497d7c
        ;   XREF to: 0041d790 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupVelocities_FUN_0041d790(CBox * this_ptr, CVector3f * linear_velocity, CVector3f * angular_velocity)
    ADD ESP,0xc                         ; 00497d81
    ADD ESP,0xe4                        ; 00497d84
    POP EBP                             ; 00497d8a
    POP EDI                             ; 00497d8b
    POP ESI                             ; 00497d8c
    POP EBX                             ; 00497d8d
    RET                                 ; 00497d8e
    MOV EAX,dword ptr [ESP + 0x94]      ; 00497d8f
        ;   Label: LAB_00497d8f
    MOV dword ptr [ESP + 0x70],EAX      ; 00497d96
    MOV EAX,dword ptr [ESP + 0x98]      ; 00497d9a
    MOV dword ptr [ESP + 0x74],EAX      ; 00497da1
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00497da5
    MOV dword ptr [ESP + 0x78],EAX      ; 00497dac
    JMP 0x00497bd8                      ; 00497db0
        ;   XREF to: 00497bd8 (UNCONDITIONAL_JUMP)  ; LAB_00497bd8

