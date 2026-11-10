; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_FUN_0048f2e0(CDemonRaytrace *this_ptr,CVector3f *offset,CVector3f *rotation,CVector3f *extent,CVector3f *light_position)
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
;   core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_00559440 at 005594aa
;
; Referenced Globals:
;   undefined4 DAT_005dbb2c
;   undefined4 DAT_005dbb34
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;   core_dirmat.cpp_FUN_0045f690
;   core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0048f920
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048f2e0
        ;   Label: core_dtrace.cpp_FUN_0048f2e0
    PUSH ESI                            ; 0048f2e1
    PUSH EDI                            ; 0048f2e2
    PUSH EBP                            ; 0048f2e3
    MOV EBP,ESP                         ; 0048f2e4
    SUB ESP,0xac                        ; 0048f2e6
    AND ESP,0xfffffff8                  ; 0048f2ec
    MOV EBX,dword ptr [EBP + 0x24]      ; 0048f2ef
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0048f2f2
    PUSH EDX                            ; 0048f2f5
    LEA EAX,[ESP + 0x10]                ; 0048f2f6
    PUSH EAX                            ; 0048f2fa
    LEA EDI,[ESP + 0x6c]                ; 0048f2fb
    LEA ESI,[ESP + 0x48]                ; 0048f2ff
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 0048f303
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    FLD float ptr [EBX]                 ; 0048f308
    ADD ESP,0x8                         ; 0048f30a
    FLD float ptr [EBX + 0x4]           ; 0048f30d
    MOV EAX,dword ptr [EBP + 0x20]      ; 0048f310
    FLD float ptr [EBX + 0x8]           ; 0048f313
    FXCH ST2                            ; 0048f316
    FSUB float ptr [EAX]                ; 0048f318
    FXCH                                ; 0048f31a
    FSUB float ptr [EAX + 0x4]          ; 0048f31c
    FXCH ST2                            ; 0048f31f
    FSUB float ptr [EAX + 0x8]          ; 0048f321
    FXCH                                ; 0048f324
    FSTP float ptr [ESP + 0x40]         ; 0048f326
    FXCH                                ; 0048f32a
    FSTP float ptr [ESP + 0x44]         ; 0048f32c
    FSTP float ptr [ESP + 0x48]         ; 0048f330
    MOVSD ES:EDI,ESI                    ; 0048f334
    MOVSD ES:EDI,ESI                    ; 0048f335
    MOVSD ES:EDI,ESI                    ; 0048f336
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048f337
    FLD float ptr [ESP + 0x64]          ; 0048f33a
    FDIV float ptr [EAX + 0x34]         ; 0048f33e
    FLD float ptr [ESP + 0x68]          ; 0048f341
    FDIV float ptr [EAX + 0x38]         ; 0048f345
    FLD float ptr [ESP + 0x6c]          ; 0048f348
    FDIV float ptr [EAX + 0x3c]         ; 0048f34c
    FXCH ST2                            ; 0048f34f
    FLD double ptr [0x005dbb2c]         ; 0048f351 | DAT_005dbb2c
    FXCH                                ; 0048f357
    FMUL ST1                            ; 0048f359
    FLD1                                ; 0048f35b
    FADDP                               ; 0048f35d
    CALL crt_math.c_round_FUN_005c03a0  ; 0048f35f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x94]        ; 0048f364
    MOV EAX,dword ptr [ESP + 0x94]      ; 0048f36b
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048f372
    FILD dword ptr [ESP + 0xa8]         ; 0048f379
    FDIVR float ptr [ESP + 0x64]        ; 0048f380
    FXCH ST2                            ; 0048f384
    FMUL ST1                            ; 0048f386
    FLD1                                ; 0048f388
    FADDP                               ; 0048f38a
    CALL crt_math.c_round_FUN_005c03a0  ; 0048f38c
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x98]        ; 0048f391
    MOV EAX,dword ptr [ESP + 0x98]      ; 0048f398
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048f39f
    FILD dword ptr [ESP + 0xa8]         ; 0048f3a6
    FDIVR float ptr [ESP + 0x68]        ; 0048f3ad
    FXCH ST3                            ; 0048f3b1
    FMULP                               ; 0048f3b3
    FLD1                                ; 0048f3b5
    FADDP                               ; 0048f3b7
    CALL crt_math.c_round_FUN_005c03a0  ; 0048f3b9
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0xa0]        ; 0048f3be
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0048f3c5
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048f3cc
    FILD dword ptr [ESP + 0xa8]         ; 0048f3d3
    FDIVR float ptr [ESP + 0x6c]        ; 0048f3da
    XOR ECX,ECX                         ; 0048f3de
    MOV dword ptr [ESP + 0x9c],ECX      ; 0048f3e0
    MOV EBX,dword ptr [ESP + 0x94]      ; 0048f3e7
    FXCH                                ; 0048f3ee
    FSTP float ptr [ESP]                ; 0048f3f0
    FXCH                                ; 0048f3f3
    FSTP float ptr [ESP + 0x4]          ; 0048f3f5
    FSTP float ptr [ESP + 0x8]          ; 0048f3f9
    TEST EBX,EBX                        ; 0048f3fd
    JLE 0x0048f5a4                      ; 0048f3ff
        ;   XREF to: 0048f5a4 (CONDITIONAL_JUMP)  ; LAB_0048f5a4
    XOR EAX,EAX                         ; 0048f405
        ;   Label: LAB_0048f405
    MOV EDX,dword ptr [ESP + 0x98]      ; 0048f407
    MOV dword ptr [ESP + 0xa4],EAX      ; 0048f40e
    TEST EDX,EDX                        ; 0048f415
    JLE 0x0048f586                      ; 0048f417
        ;   XREF to: 0048f586 (CONDITIONAL_JUMP)  ; LAB_0048f586
    MOV ESI,dword ptr [ESP + 0xa0]      ; 0048f41d
        ;   Label: LAB_0048f41d
    XOR EBX,EBX                         ; 0048f424
    TEST ESI,ESI                        ; 0048f426
    JLE 0x0048f568                      ; 0048f428
        ;   XREF to: 0048f568 (CONDITIONAL_JUMP)  ; LAB_0048f568
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0048f42e
        ;   Label: LAB_0048f42e
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048f435
    FLD float ptr [ESP]                 ; 0048f43c
    FILD dword ptr [ESP + 0xa8]         ; 0048f43f
    FMUL ST1                            ; 0048f446
    MOV EAX,dword ptr [EBP + 0x20]      ; 0048f448
    FADD float ptr [EAX]                ; 0048f44b
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0048f44d
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048f454
    FXCH                                ; 0048f45b
    FLD double ptr [0x005dbb34]         ; 0048f45d | DAT_005dbb34
    FXCH                                ; 0048f463
    FMUL ST1                            ; 0048f465
    FLD float ptr [ESP + 0x4]           ; 0048f467
    FILD dword ptr [ESP + 0xa8]         ; 0048f46b
    FMUL ST1                            ; 0048f472
    FXCH ST2                            ; 0048f474
    FADDP ST4,ST0                       ; 0048f476
    MOV EAX,dword ptr [EBP + 0x20]      ; 0048f478
    FXCH ST3                            ; 0048f47b
    FSTP float ptr [ESP + 0x34]         ; 0048f47d
    FADD float ptr [EAX + 0x4]          ; 0048f481
    MOV dword ptr [ESP + 0xa8],EBX      ; 0048f484
    FXCH ST2                            ; 0048f48b
    FMUL ST1                            ; 0048f48d
    FILD dword ptr [ESP + 0xa8]         ; 0048f48f
    FXCH                                ; 0048f496
    FADDP ST3,ST0                       ; 0048f498
    FLD float ptr [ESP + 0x8]           ; 0048f49a
    FXCH                                ; 0048f49e
    FMUL ST1                            ; 0048f4a0
    FXCH ST3                            ; 0048f4a2
    FSTP float ptr [ESP + 0x38]         ; 0048f4a4
    FXCH ST2                            ; 0048f4a8
    FADD float ptr [EAX + 0x8]          ; 0048f4aa
    FXCH ST2                            ; 0048f4ad
    FMULP                               ; 0048f4af
    LEA ESI,[ESP + 0x58]                ; 0048f4b1
    LEA EAX,[ESP + 0x34]                ; 0048f4b5
    LEA EDI,[ESP + 0x7c]                ; 0048f4b9
    PUSH EAX                            ; 0048f4bd
    LEA EAX,[ESP + 0x10]                ; 0048f4be
    FADDP                               ; 0048f4c2
    PUSH EAX                            ; 0048f4c4
    FSTP float ptr [ESP + 0x44]         ; 0048f4c5
    CALL core_dirmat.cpp_FUN_0045f690   ; 0048f4c9
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x60]                ; 0048f4ce
    ADD ESP,0x8                         ; 0048f4d2
    MOVSD ES:EDI,ESI                    ; 0048f4d5
    MOVSD ES:EDI,ESI                    ; 0048f4d6
    MOVSD ES:EDI,ESI                    ; 0048f4d7
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048f4d8
    FLD float ptr [ESP + 0x7c]          ; 0048f4db
    FLD float ptr [ESP + 0x80]          ; 0048f4df
    FLD float ptr [ESP + 0x84]          ; 0048f4e6
    LEA EDI,[ESP + 0x4c]                ; 0048f4ed
    LEA ESI,[ESP + 0x70]                ; 0048f4f1
    FXCH ST2                            ; 0048f4f5
    FADD float ptr [EAX]                ; 0048f4f7
    FXCH                                ; 0048f4f9
    FADD float ptr [EAX + 0x4]          ; 0048f4fb
    FXCH ST2                            ; 0048f4fe
    FADD float ptr [EAX + 0x8]          ; 0048f500
    FXCH                                ; 0048f503
    FSTP float ptr [ESP + 0x70]         ; 0048f505
    FXCH                                ; 0048f509
    FSTP float ptr [ESP + 0x74]         ; 0048f50b
    FSTP float ptr [ESP + 0x78]         ; 0048f50f
    MOVSD ES:EDI,ESI                    ; 0048f513
    MOVSD ES:EDI,ESI                    ; 0048f514
    MOVSD ES:EDI,ESI                    ; 0048f515
    LEA EAX,[ESP + 0x4c]                ; 0048f516
    LEA ESI,[ESP + 0x88]                ; 0048f51a
    CMP ESI,EAX                         ; 0048f521
    JZ 0x0048f546                       ; 0048f523
        ;   XREF to: 0048f546 (CONDITIONAL_JUMP)  ; LAB_0048f546
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0048f525
    MOV dword ptr [ESP + 0x88],EAX      ; 0048f529
    MOV EAX,dword ptr [ESP + 0x50]      ; 0048f530
    MOV dword ptr [ESP + 0x8c],EAX      ; 0048f534
    MOV EAX,dword ptr [ESP + 0x54]      ; 0048f53b
    MOV dword ptr [ESP + 0x90],EAX      ; 0048f53f
    LEA EAX,[ESP + 0x88]                ; 0048f546
        ;   Label: LAB_0048f546
    PUSH EAX                            ; 0048f54d
    MOV EDI,dword ptr [EBP + 0x14]      ; 0048f54e
    PUSH EDI                            ; 0048f551
    CALL core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0048f920 ; 0048f552
        ;   XREF to: 0048f920 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0048f920(CDemonRaytrace * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0048f557
    INC EBX                             ; 0048f55a
    CMP EBX,dword ptr [ESP + 0xa0]      ; 0048f55b
    JL 0x0048f42e                       ; 0048f562
        ;   XREF to: 0048f42e (CONDITIONAL_JUMP)  ; LAB_0048f42e
    MOV ECX,dword ptr [ESP + 0xa4]      ; 0048f568
        ;   Label: LAB_0048f568
    INC ECX                             ; 0048f56f
    MOV EBX,dword ptr [ESP + 0x98]      ; 0048f570
    MOV dword ptr [ESP + 0xa4],ECX      ; 0048f577
    CMP ECX,EBX                         ; 0048f57e
    JL 0x0048f41d                       ; 0048f580
        ;   XREF to: 0048f41d (CONDITIONAL_JUMP)  ; LAB_0048f41d
    MOV ESI,dword ptr [ESP + 0x9c]      ; 0048f586
        ;   Label: LAB_0048f586
    INC ESI                             ; 0048f58d
    MOV EDI,dword ptr [ESP + 0x94]      ; 0048f58e
    MOV dword ptr [ESP + 0x9c],ESI      ; 0048f595
    CMP ESI,EDI                         ; 0048f59c
    JL 0x0048f405                       ; 0048f59e
        ;   XREF to: 0048f405 (CONDITIONAL_JUMP)  ; LAB_0048f405
    MOV ESP,EBP                         ; 0048f5a4
        ;   Label: LAB_0048f5a4
    POP EBP                             ; 0048f5a6
    POP EDI                             ; 0048f5a7
    POP ESI                             ; 0048f5a8
    POP EBX                             ; 0048f5a9
    RET                                 ; 0048f5aa

