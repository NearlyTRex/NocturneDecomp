; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CStake_spawn_FUN_004941c0(CStake *this_ptr,CVector3f *spawn_position,CVector3f *orientation_angles,CVector3f *surface_normal)
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
;   core_fire.cpp_CFireEffect_createStake_FUN_0049d2c0 at 0049d39a
;
; Referenced Globals:
;   undefined4 DAT_005d5396
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_box.cpp_CBox_setupCorners_FUN_005b1c80
;   core_box.cpp_CBox_setupVelocities_FUN_005b4610
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
;   core_dirmat.cpp_FUN_00449530
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004941c0
        ;   Label: core_fire.cpp_CStake_spawn_FUN_004941c0
    PUSH ESI                            ; 004941c1
    PUSH EDI                            ; 004941c2
    PUSH EBP                            ; 004941c3
    SUB ESP,0xe4                        ; 004941c4
    MOV EBX,dword ptr [ESP + 0x104]     ; 004941ca
    MOV EDX,dword ptr [ESP + 0x100]     ; 004941d1
    PUSH EDX                            ; 004941d8
    LEA EAX,[ESP + 0x4]                 ; 004941d9
    PUSH EAX                            ; 004941dd
    MOV EDI,0x41200000                  ; 004941de
    LEA ESI,[ESP + 0xa8]                ; 004941e3
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 004941ea
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004941ef
    XOR ECX,ECX                         ; 004941f2
    LEA EAX,[ESP + 0xc4]                ; 004941f4
    MOV dword ptr [ESP + 0xc4],ECX      ; 004941fb
    PUSH EAX                            ; 00494202
    LEA EAX,[ESP + 0x4]                 ; 00494203
    MOV dword ptr [ESP + 0xcc],ECX      ; 00494207
    PUSH EAX                            ; 0049420e
    MOV dword ptr [ESP + 0xd4],EDI      ; 0049420f
    LEA EDI,[ESP + 0x78]                ; 00494216
    CALL core_dirmat.cpp_FUN_00449530   ; 0049421a
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0xa8]                ; 0049421f
    ADD ESP,0x8                         ; 00494226
    MOVSD ES:EDI,ESI                    ; 00494229
    MOVSD ES:EDI,ESI                    ; 0049422a
    MOVSD ES:EDI,ESI                    ; 0049422b
    FLD float ptr [EBX + 0x4]           ; 0049422c
    FMUL float ptr [ESP + 0x74]         ; 0049422f
    FLD float ptr [EBX]                 ; 00494233
    FMUL float ptr [ESP + 0x70]         ; 00494235
    FADDP                               ; 00494239
    FLD float ptr [EBX + 0x8]           ; 0049423b
    FMUL float ptr [ESP + 0x78]         ; 0049423e
    FADDP                               ; 00494242
    FMUL float ptr [0x005d5396]         ; 00494244 | DAT_005d5396
    FLD float ptr [EBX]                 ; 0049424a
    FXCH                                ; 0049424c
    FSTP float ptr [ESP + 0xdc]         ; 0049424e
    FMUL float ptr [ESP + 0xdc]         ; 00494255
    FLD float ptr [EBX + 0x4]           ; 0049425c
    FMUL float ptr [ESP + 0xdc]         ; 0049425f
    FLD float ptr [EBX + 0x8]           ; 00494266
    FMUL float ptr [ESP + 0xdc]         ; 00494269
    LEA EAX,[ESP + 0x94]                ; 00494270
    LEA EDI,[ESP + 0x40]                ; 00494277
    LEA ESI,[ESP + 0x64]                ; 0049427b
    FXCH ST2                            ; 0049427f
    FSTP float ptr [ESP + 0x64]         ; 00494281
    FSTP float ptr [ESP + 0x68]         ; 00494285
    FSTP float ptr [ESP + 0x6c]         ; 00494289
    MOVSD ES:EDI,ESI                    ; 0049428d
    MOVSD ES:EDI,ESI                    ; 0049428e
    MOVSD ES:EDI,ESI                    ; 0049428f
    LEA EBX,[ESP + 0x70]                ; 00494290
    FLD float ptr [ESP + 0x40]          ; 00494294
    FLD float ptr [ESP + 0x44]          ; 00494298
    FLD float ptr [ESP + 0x48]          ; 0049429c
    LEA EDI,[ESP + 0x94]                ; 004942a0
    LEA ESI,[ESP + 0x58]                ; 004942a7
    FXCH ST2                            ; 004942ab
    FSUB float ptr [ESP + 0x70]         ; 004942ad
    FXCH                                ; 004942b1
    FSUB float ptr [ESP + 0x74]         ; 004942b3
    FXCH ST2                            ; 004942b7
    FSUB float ptr [ESP + 0x78]         ; 004942b9
    FXCH                                ; 004942bd
    FSTP float ptr [ESP + 0x58]         ; 004942bf
    FXCH                                ; 004942c3
    FSTP float ptr [ESP + 0x5c]         ; 004942c5
    FSTP float ptr [ESP + 0x60]         ; 004942c9
    MOVSD ES:EDI,ESI                    ; 004942cd
    MOVSD ES:EDI,ESI                    ; 004942ce
    MOVSD ES:EDI,ESI                    ; 004942cf
    CMP EBX,EAX                         ; 004942d0
    JNZ 0x0049448f                      ; 004942d2
        ;   XREF to: 0049448f (CONDITIONAL_JUMP)  ; LAB_0049448f
    FLD float ptr [ESP + 0x70]          ; 004942d8
        ;   Label: LAB_004942d8
    FLD float ptr [ESP + 0x74]          ; 004942dc
    FLD float ptr [ESP + 0x78]          ; 004942e0
    LEA EDI,[ESP + 0x4c]                ; 004942e4
    LEA ESI,[ESP + 0x88]                ; 004942e8
    LEA EAX,[ESP + 0x4c]                ; 004942ef
    LEA EBX,[ESP + 0x70]                ; 004942f3
    FXCH ST2                            ; 004942f7
    FCHS                                ; 004942f9
    FXCH                                ; 004942fb
    FCHS                                ; 004942fd
    FXCH ST2                            ; 004942ff
    FCHS                                ; 00494301
    FXCH ST2                            ; 00494303
    FSTP float ptr [ESP + 0x8c]         ; 00494305
    FXCH                                ; 0049430c
    FSTP float ptr [ESP + 0x90]         ; 0049430e
    FSTP float ptr [ESP + 0x88]         ; 00494315
    MOVSD ES:EDI,ESI                    ; 0049431c
    MOVSD ES:EDI,ESI                    ; 0049431d
    MOVSD ES:EDI,ESI                    ; 0049431e
    CMP EBX,EAX                         ; 0049431f
    JZ 0x0049433b                       ; 00494321
        ;   XREF to: 0049433b (CONDITIONAL_JUMP)  ; LAB_0049433b
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00494323
    MOV dword ptr [ESP + 0x70],EAX      ; 00494327
    MOV EAX,dword ptr [ESP + 0x50]      ; 0049432b
    MOV dword ptr [ESP + 0x74],EAX      ; 0049432f
    MOV EAX,dword ptr [ESP + 0x54]      ; 00494333
    MOV dword ptr [ESP + 0x78],EAX      ; 00494337
    MOV EAX,dword ptr [ESP + 0xf8]      ; 0049433b
        ;   Label: LAB_0049433b
    PUSH 0x1c3def8                      ; 00494342
    LEA EDI,[ESP + 0x2c]                ; 00494347
    MOV dword ptr [EAX],0x0             ; 0049434b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 00494351
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV ECX,0x6                         ; 00494356
    LEA ESI,[EAX + 0x338]               ; 0049435b
    ADD ESP,0x4                         ; 00494361
    LEA EBX,[ESP + 0xac]                ; 00494364
    MOVSD.REP ES:EDI,ESI                ; 0049436b
    LEA EAX,[ESP + 0xb8]                ; 0049436d
    FLD float ptr [ESP + 0x34]          ; 00494374
    FLD float ptr [ESP + 0x38]          ; 00494378
    FLD float ptr [ESP + 0x3c]          ; 0049437c
    LEA EDI,[ESP + 0xb8]                ; 00494380
    LEA ESI,[ESP + 0xd0]                ; 00494387
    FXCH ST2                            ; 0049438e
    FSUB float ptr [ESP + 0x28]         ; 00494390
    FXCH                                ; 00494394
    FSUB float ptr [ESP + 0x2c]         ; 00494396
    FXCH ST2                            ; 0049439a
    FSUB float ptr [ESP + 0x30]         ; 0049439c
    FXCH                                ; 004943a0
    FSTP float ptr [ESP + 0xd0]         ; 004943a2
    FXCH                                ; 004943a9
    FSTP float ptr [ESP + 0xd4]         ; 004943ab
    FSTP float ptr [ESP + 0xd8]         ; 004943b2
    MOVSD ES:EDI,ESI                    ; 004943b9
    MOVSD ES:EDI,ESI                    ; 004943ba
    MOVSD ES:EDI,ESI                    ; 004943bb
    CMP EBX,EAX                         ; 004943bc
    JZ 0x004943ea                       ; 004943be
        ;   XREF to: 004943ea (CONDITIONAL_JUMP)  ; LAB_004943ea
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004943c0
    MOV dword ptr [ESP + 0xac],EAX      ; 004943c7
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004943ce
    MOV dword ptr [ESP + 0xb0],EAX      ; 004943d5
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004943dc
    MOV dword ptr [ESP + 0xb4],EAX      ; 004943e3
    LEA EAX,[ESP + 0xac]                ; 004943ea
        ;   Label: LAB_004943ea
    PUSH 0x40000000                     ; 004943f1
    PUSH EAX                            ; 004943f6
    MOV EBP,dword ptr [ESP + 0x108]     ; 004943f7
    PUSH EBP                            ; 004943fe
    MOV EAX,dword ptr [ESP + 0x108]     ; 004943ff
    MOV EBX,dword ptr [ESP + 0x104]     ; 00494406
    PUSH EAX                            ; 0049440d
    ADD EBX,0x4                         ; 0049440e
    PUSH EBX                            ; 00494411
    CALL core_box.cpp_CBox_setupCorners_FUN_005b1c80 ; 00494412
        ;   XREF to: 005b1c80 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupCorners_FUN_005b1c80(CBox * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * extents, ...)
    ADD ESP,0x14                        ; 00494417
    PUSH 0x4116cbe4                     ; 0049441a
    PUSH 0xc116cbe4                     ; 0049441f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00494424
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xe8],EAX      ; 00494429
    FLD float ptr [ESP + 0xe8]          ; 00494430
    ADD ESP,0x8                         ; 00494437
    XOR EDX,EDX                         ; 0049443a
    PUSH 0x4116cbe4                     ; 0049443c
    FSTP float ptr [ESP + 0x80]         ; 00494441
    PUSH 0xc116cbe4                     ; 00494448
    MOV dword ptr [ESP + 0x8c],EDX      ; 0049444d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00494454
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xe8],EAX      ; 00494459
    FLD float ptr [ESP + 0xe8]          ; 00494460
    ADD ESP,0x8                         ; 00494467
    LEA EAX,[ESP + 0x7c]                ; 0049446a
    PUSH EAX                            ; 0049446e
    LEA EAX,[ESP + 0x74]                ; 0049446f
    PUSH EAX                            ; 00494473
    PUSH EBX                            ; 00494474
    FSTP float ptr [ESP + 0x8c]         ; 00494475
    CALL core_box.cpp_CBox_setupVelocities_FUN_005b4610 ; 0049447c
        ;   XREF to: 005b4610 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupVelocities_FUN_005b4610(CBox * this_ptr, CVector3f * linear_velocity, CVector3f * angular_velocity)
    ADD ESP,0xc                         ; 00494481
    ADD ESP,0xe4                        ; 00494484
    POP EBP                             ; 0049448a
    POP EDI                             ; 0049448b
    POP ESI                             ; 0049448c
    POP EBX                             ; 0049448d
    RET                                 ; 0049448e
    MOV EAX,dword ptr [ESP + 0x94]      ; 0049448f
        ;   Label: LAB_0049448f
    MOV dword ptr [ESP + 0x70],EAX      ; 00494496
    MOV EAX,dword ptr [ESP + 0x98]      ; 0049449a
    MOV dword ptr [ESP + 0x74],EAX      ; 004944a1
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004944a5
    MOV dword ptr [ESP + 0x78],EAX      ; 004944ac
    JMP 0x004942d8                      ; 004944b0
        ;   XREF to: 004942d8 (UNCONDITIONAL_JUMP)  ; LAB_004942d8

