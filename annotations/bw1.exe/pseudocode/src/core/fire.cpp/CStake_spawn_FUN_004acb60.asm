; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CStake_spawn_FUN_004acb60(CStake *this_ptr,CVector3f *spawn_position,CVector3f *orientation_angles,CVector3f *surface_normal)
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
;   core_fire.cpp_CFireEffect_createStake_FUN_004b5bc0 at 004b5c9a
;
; Referenced Globals:
;   undefined4 DAT_005df1d8
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_box.cpp_CBox_setupCorners_FUN_0041dac0
;   core_box.cpp_CBox_setupVelocities_FUN_00420450
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;   core_dirmat.cpp_FUN_0045f690
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004acb60
        ;   Label: core_fire.cpp_CStake_spawn_FUN_004acb60
    PUSH ESI                            ; 004acb61
    PUSH EDI                            ; 004acb62
    PUSH EBP                            ; 004acb63
    SUB ESP,0xe4                        ; 004acb64
    MOV EBX,dword ptr [ESP + 0x104]     ; 004acb6a
    MOV EDX,dword ptr [ESP + 0x100]     ; 004acb71
    PUSH EDX                            ; 004acb78
    LEA EAX,[ESP + 0x4]                 ; 004acb79
    PUSH EAX                            ; 004acb7d
    MOV EDI,0x41200000                  ; 004acb7e
    LEA ESI,[ESP + 0xa8]                ; 004acb83
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 004acb8a
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004acb8f
    XOR ECX,ECX                         ; 004acb92
    LEA EAX,[ESP + 0xc4]                ; 004acb94
    MOV dword ptr [ESP + 0xc4],ECX      ; 004acb9b
    PUSH EAX                            ; 004acba2
    LEA EAX,[ESP + 0x4]                 ; 004acba3
    MOV dword ptr [ESP + 0xcc],ECX      ; 004acba7
    PUSH EAX                            ; 004acbae
    MOV dword ptr [ESP + 0xd4],EDI      ; 004acbaf
    LEA EDI,[ESP + 0x78]                ; 004acbb6
    CALL core_dirmat.cpp_FUN_0045f690   ; 004acbba
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0xa8]                ; 004acbbf
    ADD ESP,0x8                         ; 004acbc6
    MOVSD ES:EDI,ESI                    ; 004acbc9
    MOVSD ES:EDI,ESI                    ; 004acbca
    MOVSD ES:EDI,ESI                    ; 004acbcb
    FLD float ptr [EBX + 0x4]           ; 004acbcc
    FMUL float ptr [ESP + 0x74]         ; 004acbcf
    FLD float ptr [EBX]                 ; 004acbd3
    FMUL float ptr [ESP + 0x70]         ; 004acbd5
    FADDP                               ; 004acbd9
    FLD float ptr [EBX + 0x8]           ; 004acbdb
    FMUL float ptr [ESP + 0x78]         ; 004acbde
    FADDP                               ; 004acbe2
    FMUL float ptr [0x005df1d8]         ; 004acbe4 | DAT_005df1d8
    FLD float ptr [EBX]                 ; 004acbea
    FXCH                                ; 004acbec
    FSTP float ptr [ESP + 0xdc]         ; 004acbee
    FMUL float ptr [ESP + 0xdc]         ; 004acbf5
    FLD float ptr [EBX + 0x4]           ; 004acbfc
    FMUL float ptr [ESP + 0xdc]         ; 004acbff
    FLD float ptr [EBX + 0x8]           ; 004acc06
    FMUL float ptr [ESP + 0xdc]         ; 004acc09
    LEA EAX,[ESP + 0x94]                ; 004acc10
    LEA EDI,[ESP + 0x40]                ; 004acc17
    LEA ESI,[ESP + 0x64]                ; 004acc1b
    FXCH ST2                            ; 004acc1f
    FSTP float ptr [ESP + 0x64]         ; 004acc21
    FSTP float ptr [ESP + 0x68]         ; 004acc25
    FSTP float ptr [ESP + 0x6c]         ; 004acc29
    MOVSD ES:EDI,ESI                    ; 004acc2d
    MOVSD ES:EDI,ESI                    ; 004acc2e
    MOVSD ES:EDI,ESI                    ; 004acc2f
    LEA EBX,[ESP + 0x70]                ; 004acc30
    FLD float ptr [ESP + 0x40]          ; 004acc34
    FLD float ptr [ESP + 0x44]          ; 004acc38
    FLD float ptr [ESP + 0x48]          ; 004acc3c
    LEA EDI,[ESP + 0x94]                ; 004acc40
    LEA ESI,[ESP + 0x58]                ; 004acc47
    FXCH ST2                            ; 004acc4b
    FSUB float ptr [ESP + 0x70]         ; 004acc4d
    FXCH                                ; 004acc51
    FSUB float ptr [ESP + 0x74]         ; 004acc53
    FXCH ST2                            ; 004acc57
    FSUB float ptr [ESP + 0x78]         ; 004acc59
    FXCH                                ; 004acc5d
    FSTP float ptr [ESP + 0x58]         ; 004acc5f
    FXCH                                ; 004acc63
    FSTP float ptr [ESP + 0x5c]         ; 004acc65
    FSTP float ptr [ESP + 0x60]         ; 004acc69
    MOVSD ES:EDI,ESI                    ; 004acc6d
    MOVSD ES:EDI,ESI                    ; 004acc6e
    MOVSD ES:EDI,ESI                    ; 004acc6f
    CMP EBX,EAX                         ; 004acc70
    JNZ 0x004ace2f                      ; 004acc72
        ;   XREF to: 004ace2f (CONDITIONAL_JUMP)  ; LAB_004ace2f
    FLD float ptr [ESP + 0x70]          ; 004acc78
        ;   Label: LAB_004acc78
    FLD float ptr [ESP + 0x74]          ; 004acc7c
    FLD float ptr [ESP + 0x78]          ; 004acc80
    LEA EDI,[ESP + 0x4c]                ; 004acc84
    LEA ESI,[ESP + 0x88]                ; 004acc88
    LEA EAX,[ESP + 0x4c]                ; 004acc8f
    LEA EBX,[ESP + 0x70]                ; 004acc93
    FXCH ST2                            ; 004acc97
    FCHS                                ; 004acc99
    FXCH                                ; 004acc9b
    FCHS                                ; 004acc9d
    FXCH ST2                            ; 004acc9f
    FCHS                                ; 004acca1
    FXCH ST2                            ; 004acca3
    FSTP float ptr [ESP + 0x8c]         ; 004acca5
    FXCH                                ; 004accac
    FSTP float ptr [ESP + 0x90]         ; 004accae
    FSTP float ptr [ESP + 0x88]         ; 004accb5
    MOVSD ES:EDI,ESI                    ; 004accbc
    MOVSD ES:EDI,ESI                    ; 004accbd
    MOVSD ES:EDI,ESI                    ; 004accbe
    CMP EBX,EAX                         ; 004accbf
    JZ 0x004accdb                       ; 004accc1
        ;   XREF to: 004accdb (CONDITIONAL_JUMP)  ; LAB_004accdb
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004accc3
    MOV dword ptr [ESP + 0x70],EAX      ; 004accc7
    MOV EAX,dword ptr [ESP + 0x50]      ; 004acccb
    MOV dword ptr [ESP + 0x74],EAX      ; 004acccf
    MOV EAX,dword ptr [ESP + 0x54]      ; 004accd3
    MOV dword ptr [ESP + 0x78],EAX      ; 004accd7
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004accdb
        ;   Label: LAB_004accdb
    PUSH 0x1c570b8                      ; 004acce2
    LEA EDI,[ESP + 0x2c]                ; 004acce7
    MOV dword ptr [EAX],0x0             ; 004acceb
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 004accf1
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 004accf6
    LEA ESI,[EAX + 0x338]               ; 004accfb
    ADD ESP,0x4                         ; 004acd01
    LEA EBX,[ESP + 0xac]                ; 004acd04
    MOVSD.REP ES:EDI,ESI                ; 004acd0b
    LEA EAX,[ESP + 0xb8]                ; 004acd0d
    FLD float ptr [ESP + 0x34]          ; 004acd14
    FLD float ptr [ESP + 0x38]          ; 004acd18
    FLD float ptr [ESP + 0x3c]          ; 004acd1c
    LEA EDI,[ESP + 0xb8]                ; 004acd20
    LEA ESI,[ESP + 0xd0]                ; 004acd27
    FXCH ST2                            ; 004acd2e
    FSUB float ptr [ESP + 0x28]         ; 004acd30
    FXCH                                ; 004acd34
    FSUB float ptr [ESP + 0x2c]         ; 004acd36
    FXCH ST2                            ; 004acd3a
    FSUB float ptr [ESP + 0x30]         ; 004acd3c
    FXCH                                ; 004acd40
    FSTP float ptr [ESP + 0xd0]         ; 004acd42
    FXCH                                ; 004acd49
    FSTP float ptr [ESP + 0xd4]         ; 004acd4b
    FSTP float ptr [ESP + 0xd8]         ; 004acd52
    MOVSD ES:EDI,ESI                    ; 004acd59
    MOVSD ES:EDI,ESI                    ; 004acd5a
    MOVSD ES:EDI,ESI                    ; 004acd5b
    CMP EBX,EAX                         ; 004acd5c
    JZ 0x004acd8a                       ; 004acd5e
        ;   XREF to: 004acd8a (CONDITIONAL_JUMP)  ; LAB_004acd8a
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004acd60
    MOV dword ptr [ESP + 0xac],EAX      ; 004acd67
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004acd6e
    MOV dword ptr [ESP + 0xb0],EAX      ; 004acd75
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004acd7c
    MOV dword ptr [ESP + 0xb4],EAX      ; 004acd83
    LEA EAX,[ESP + 0xac]                ; 004acd8a
        ;   Label: LAB_004acd8a
    PUSH 0x40000000                     ; 004acd91
    PUSH EAX                            ; 004acd96
    MOV EBP,dword ptr [ESP + 0x108]     ; 004acd97
    PUSH EBP                            ; 004acd9e
    MOV EAX,dword ptr [ESP + 0x108]     ; 004acd9f
    MOV EBX,dword ptr [ESP + 0x104]     ; 004acda6
    PUSH EAX                            ; 004acdad
    ADD EBX,0x4                         ; 004acdae
    PUSH EBX                            ; 004acdb1
    CALL core_box.cpp_CBox_setupCorners_FUN_0041dac0 ; 004acdb2
        ;   XREF to: 0041dac0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupCorners_FUN_0041dac0(CBox * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * extents, ...)
    ADD ESP,0x14                        ; 004acdb7
    PUSH 0x4116cbe4                     ; 004acdba
    PUSH 0xc116cbe4                     ; 004acdbf
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004acdc4
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0xe8],EAX      ; 004acdc9
    FLD float ptr [ESP + 0xe8]          ; 004acdd0
    ADD ESP,0x8                         ; 004acdd7
    XOR EDX,EDX                         ; 004acdda
    PUSH 0x4116cbe4                     ; 004acddc
    FSTP float ptr [ESP + 0x80]         ; 004acde1
    PUSH 0xc116cbe4                     ; 004acde8
    MOV dword ptr [ESP + 0x8c],EDX      ; 004acded
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004acdf4
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0xe8],EAX      ; 004acdf9
    FLD float ptr [ESP + 0xe8]          ; 004ace00
    ADD ESP,0x8                         ; 004ace07
    LEA EAX,[ESP + 0x7c]                ; 004ace0a
    PUSH EAX                            ; 004ace0e
    LEA EAX,[ESP + 0x74]                ; 004ace0f
    PUSH EAX                            ; 004ace13
    PUSH EBX                            ; 004ace14
    FSTP float ptr [ESP + 0x8c]         ; 004ace15
    CALL core_box.cpp_CBox_setupVelocities_FUN_00420450 ; 004ace1c
        ;   XREF to: 00420450 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupVelocities_FUN_00420450(CBox * this_ptr, CVector3f * linear_velocity, CVector3f * angular_velocity)
    ADD ESP,0xc                         ; 004ace21
    ADD ESP,0xe4                        ; 004ace24
    POP EBP                             ; 004ace2a
    POP EDI                             ; 004ace2b
    POP ESI                             ; 004ace2c
    POP EBX                             ; 004ace2d
    RET                                 ; 004ace2e
    MOV EAX,dword ptr [ESP + 0x94]      ; 004ace2f
        ;   Label: LAB_004ace2f
    MOV dword ptr [ESP + 0x70],EAX      ; 004ace36
    MOV EAX,dword ptr [ESP + 0x98]      ; 004ace3a
    MOV dword ptr [ESP + 0x74],EAX      ; 004ace41
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004ace45
    MOV dword ptr [ESP + 0x78],EAX      ; 004ace4c
    JMP 0x004acc78                      ; 004ace50
        ;   XREF to: 004acc78 (UNCONDITIONAL_JUMP)  ; LAB_004acc78

