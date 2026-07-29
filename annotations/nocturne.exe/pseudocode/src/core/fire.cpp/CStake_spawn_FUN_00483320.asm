; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CStake_spawn_FUN_00483320(CStake *this_ptr,CVector3f *spawn_position,CVector3f *orientation_angles,CVector3f *surface_normal)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   spawn_position
; CVector3f *      Stack[0xc]:4   orientation_angles
; CVector3f *      Stack[0x10]:4   surface_normal
; Local Variables:
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
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
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
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createStake_FUN_0048b070 at 0048b116
;
; Referenced Globals:
;   float FLOAT_005810c8 = 2
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_box.cpp_CBox_setupCorners_FUN_0041a6e0
;   core_box.cpp_CBox_setupVelocities_FUN_0041cb40
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483320
        ;   Label: core_fire.cpp_CStake_spawn_FUN_00483320
    PUSH EDI                            ; 00483321
    PUSH EBP                            ; 00483322
    SUB ESP,0xa8                        ; 00483323
    MOV EBX,dword ptr [ESP + 0xc4]      ; 00483329
    MOV EDX,dword ptr [ESP + 0xc0]      ; 00483330
    PUSH EDX                            ; 00483337
    LEA EAX,[ESP + 0x4]                 ; 00483338
    PUSH EAX                            ; 0048333c
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 0048333d
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00483342
    LEA EAX,[ESP + 0x7c]                ; 00483345
    MOV EDI,0x41200000                  ; 00483349
    PUSH EAX                            ; 0048334e
    LEA EAX,[ESP + 0x74]                ; 0048334f
    XOR ECX,ECX                         ; 00483353
    PUSH EAX                            ; 00483355
    LEA EAX,[ESP + 0x8]                 ; 00483356
    MOV dword ptr [ESP + 0x84],ECX      ; 0048335a
    PUSH EAX                            ; 00483361
    MOV dword ptr [ESP + 0x8c],ECX      ; 00483362
    MOV dword ptr [ESP + 0x90],EDI      ; 00483369
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 00483370
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00483375
    FLD float ptr [EBX + 0x4]           ; 00483378
    FMUL float ptr [ESP + 0x74]         ; 0048337b
    FLD float ptr [EBX]                 ; 0048337f
    FMUL float ptr [ESP + 0x70]         ; 00483381
    FADDP                               ; 00483385
    FLD float ptr [EBX + 0x8]           ; 00483387
    FMUL float ptr [ESP + 0x78]         ; 0048338a
    FADDP                               ; 0048338e
    FMUL float ptr [0x005810c8]         ; 00483390 | FLOAT_005810c8
    FLD float ptr [EBX]                 ; 00483396
    FXCH                                ; 00483398
    FSTP float ptr [ESP + 0xa0]         ; 0048339a
    FMUL float ptr [ESP + 0xa0]         ; 004833a1
    FSTP float ptr [ESP + 0x4c]         ; 004833a8
    FLD float ptr [EBX + 0x4]           ; 004833ac
    FMUL float ptr [ESP + 0xa0]         ; 004833af
    FSTP float ptr [ESP + 0x50]         ; 004833b6
    FLD float ptr [EBX + 0x8]           ; 004833ba
    FMUL float ptr [ESP + 0xa0]         ; 004833bd
    LEA EAX,[ESP + 0x94]                ; 004833c4
    LEA EDX,[ESP + 0x70]                ; 004833cb
    FLD float ptr [ESP + 0x4c]          ; 004833cf
    FSUB float ptr [ESP + 0x70]         ; 004833d3
    FLD float ptr [ESP + 0x50]          ; 004833d7
    FXCH                                ; 004833db
    FSTP float ptr [ESP + 0x94]         ; 004833dd
    FSUB float ptr [ESP + 0x74]         ; 004833e4
    FXCH                                ; 004833e8
    FST float ptr [ESP + 0x54]          ; 004833ea
    FSUB float ptr [ESP + 0x78]         ; 004833ee
    FXCH                                ; 004833f2
    FSTP float ptr [ESP + 0x98]         ; 004833f4
    FSTP float ptr [ESP + 0x9c]         ; 004833fb
    CMP EDX,EAX                         ; 00483402
    JNZ 0x004835a1                      ; 00483404
        ;   XREF to: 004835a1 (CONDITIONAL_JUMP)  ; LAB_004835a1
    FLD float ptr [ESP + 0x70]          ; 0048340a
        ;   Label: LAB_0048340a
    FLD float ptr [ESP + 0x74]          ; 0048340e
    FLD float ptr [ESP + 0x78]          ; 00483412
    LEA EAX,[ESP + 0x64]                ; 00483416
    LEA EDX,[ESP + 0x70]                ; 0048341a
    FXCH ST2                            ; 0048341e
    FCHS                                ; 00483420
    FXCH                                ; 00483422
    FCHS                                ; 00483424
    FXCH ST2                            ; 00483426
    FCHS                                ; 00483428
    FXCH ST2                            ; 0048342a
    FSTP float ptr [ESP + 0x68]         ; 0048342c
    FXCH                                ; 00483430
    FSTP float ptr [ESP + 0x6c]         ; 00483432
    FSTP float ptr [ESP + 0x64]         ; 00483436
    CMP EDX,EAX                         ; 0048343a
    JZ 0x00483456                       ; 0048343c
        ;   XREF to: 00483456 (CONDITIONAL_JUMP)  ; LAB_00483456
    MOV EAX,dword ptr [ESP + 0x64]      ; 0048343e
    MOV dword ptr [ESP + 0x70],EAX      ; 00483442
    MOV EAX,dword ptr [ESP + 0x68]      ; 00483446
    MOV dword ptr [ESP + 0x74],EAX      ; 0048344a
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0048344e
    MOV dword ptr [ESP + 0x78],EAX      ; 00483452
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00483456
        ;   Label: LAB_00483456
    PUSH 0x1c08d48                      ; 0048345d
    MOV dword ptr [EAX],0x0             ; 00483462
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 00483468
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    LEA EDX,[EAX + 0x338]               ; 0048346d
    ADD ESP,0x4                         ; 00483473
    MOV EAX,dword ptr [EDX]             ; 00483476
    MOV dword ptr [ESP + 0x28],EAX      ; 00483478
    LEA EAX,[EDX + 0x4]                 ; 0048347c
    MOV EAX,dword ptr [EAX]             ; 0048347f
    MOV dword ptr [ESP + 0x2c],EAX      ; 00483481
    LEA EAX,[EDX + 0x8]                 ; 00483485
    MOV EAX,dword ptr [EAX]             ; 00483488
    MOV dword ptr [ESP + 0x30],EAX      ; 0048348a
    MOV EAX,dword ptr [EDX + 0xc]       ; 0048348e
    ADD EDX,0xc                         ; 00483491
    MOV dword ptr [ESP + 0x34],EAX      ; 00483494
    LEA EAX,[EDX + 0x4]                 ; 00483498
    FLD float ptr [ESP + 0x34]          ; 0048349b
    MOV EAX,dword ptr [EAX]             ; 0048349f
    FSUB float ptr [ESP + 0x28]         ; 004834a1
    MOV dword ptr [ESP + 0x38],EAX      ; 004834a5
    LEA EAX,[EDX + 0x8]                 ; 004834a9
    FLD float ptr [ESP + 0x38]          ; 004834ac
    LEA EDX,[ESP + 0x40]                ; 004834b0
    FSUB float ptr [ESP + 0x2c]         ; 004834b4
    MOV EAX,dword ptr [EAX]             ; 004834b8
    FXCH                                ; 004834ba
    FSTP float ptr [ESP + 0x88]         ; 004834bc
    MOV dword ptr [ESP + 0x3c],EAX      ; 004834c3
    FSTP float ptr [ESP + 0x8c]         ; 004834c7
    FLD float ptr [ESP + 0x3c]          ; 004834ce
    FSUB float ptr [ESP + 0x30]         ; 004834d2
    LEA EAX,[ESP + 0x88]                ; 004834d6
    FSTP float ptr [ESP + 0x90]         ; 004834dd
    CMP EDX,EAX                         ; 004834e4
    JZ 0x00483509                       ; 004834e6
        ;   XREF to: 00483509 (CONDITIONAL_JUMP)  ; LAB_00483509
    MOV EAX,dword ptr [ESP + 0x88]      ; 004834e8
    MOV dword ptr [ESP + 0x40],EAX      ; 004834ef
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004834f3
    MOV dword ptr [ESP + 0x44],EAX      ; 004834fa
    MOV EAX,dword ptr [ESP + 0x90]      ; 004834fe
    MOV dword ptr [ESP + 0x48],EAX      ; 00483505
    LEA EAX,[ESP + 0x40]                ; 00483509
        ;   Label: LAB_00483509
    PUSH 0x40000000                     ; 0048350d
    PUSH EAX                            ; 00483512
    MOV EBP,dword ptr [ESP + 0xc8]      ; 00483513
    PUSH EBP                            ; 0048351a
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0048351b
    MOV EBX,dword ptr [ESP + 0xc4]      ; 00483522
    PUSH EAX                            ; 00483529
    ADD EBX,0x4                         ; 0048352a
    PUSH EBX                            ; 0048352d
    CALL core_box.cpp_CBox_setupCorners_FUN_0041a6e0 ; 0048352e
        ;   XREF to: 0041a6e0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupCorners_FUN_0041a6e0(CBox * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * extents, ...)
    ADD ESP,0x14                        ; 00483533
    PUSH 0x4116cbe4                     ; 00483536
    PUSH 0xc116cbe4                     ; 0048353b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00483540
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0xac],EAX      ; 00483545
    FLD float ptr [ESP + 0xac]          ; 0048354c
    ADD ESP,0x8                         ; 00483553
    XOR EDX,EDX                         ; 00483556
    PUSH 0x4116cbe4                     ; 00483558
    FSTP float ptr [ESP + 0x5c]         ; 0048355d
    PUSH 0xc116cbe4                     ; 00483561
    MOV dword ptr [ESP + 0x68],EDX      ; 00483566
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0048356a
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0xac],EAX      ; 0048356f
    FLD float ptr [ESP + 0xac]          ; 00483576
    ADD ESP,0x8                         ; 0048357d
    LEA EAX,[ESP + 0x58]                ; 00483580
    PUSH EAX                            ; 00483584
    LEA EAX,[ESP + 0x74]                ; 00483585
    PUSH EAX                            ; 00483589
    PUSH EBX                            ; 0048358a
    FSTP float ptr [ESP + 0x68]         ; 0048358b
    CALL core_box.cpp_CBox_setupVelocities_FUN_0041cb40 ; 0048358f
        ;   XREF to: 0041cb40 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupVelocities_FUN_0041cb40(CBox * this_ptr, CVector3f * linear_velocity, CVector3f * angular_velocity)
    ADD ESP,0xc                         ; 00483594
    ADD ESP,0xa8                        ; 00483597
    POP EBP                             ; 0048359d
    POP EDI                             ; 0048359e
    POP EBX                             ; 0048359f
    RET                                 ; 004835a0
    MOV EAX,dword ptr [ESP + 0x94]      ; 004835a1
        ;   Label: LAB_004835a1
    MOV dword ptr [ESP + 0x70],EAX      ; 004835a8
    MOV EAX,dword ptr [ESP + 0x98]      ; 004835ac
    MOV dword ptr [ESP + 0x74],EAX      ; 004835b3
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004835b7
    MOV dword ptr [ESP + 0x78],EAX      ; 004835be
    JMP 0x0048340a                      ; 004835c2
        ;   XREF to: 0048340a (UNCONDITIONAL_JUMP)  ; LAB_0048340a

