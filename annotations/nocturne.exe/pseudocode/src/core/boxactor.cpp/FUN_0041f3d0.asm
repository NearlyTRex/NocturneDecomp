; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boxactor_cpp_FUN_0041f3d0(CBoxActor *param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0xe4]:1  local_e4
; undefined        Stack[-0xb4]:1  local_b4
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   undefined4 DAT_005be368
;   undefined4 DAT_0076483c
;   undefined4 DAT_01e57284
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_getRandomInt_FUN_0040de00
;   core_boxactor.cpp_CBoxActor_process_FUN_0041e5e0
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0044cd90
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0
;   core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0
;   core_set.cpp_CDemonSet_addDynamicLight_FUN_0050a970
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
;   core_xform.cpp_matrixToEulerAngles_FUN_0055b180
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;   crt_stdlib.c_rand_FUN_0056488c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041f3d0
        ;   Label: core_boxactor.cpp_FUN_0041f3d0
    PUSH EBP                            ; 0041f3d1
    SUB ESP,0xdc                        ; 0041f3d2
    MOV EBX,dword ptr [ESP + 0xe8]      ; 0041f3d8
    PUSH dword ptr [ESP + 0xec]         ; 0041f3df
    PUSH EBX                            ; 0041f3e6
    CALL core_boxactor.cpp_CBoxActor_process_FUN_0041e5e0 ; 0041f3e7
        ;   XREF to: 0041e5e0 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_process_FUN_0041e5e0(CBoxActor * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBX + 0x664]     ; 0041f3ec
    ADD ESP,0x8                         ; 0041f3f2
    CMP EDX,0x2                         ; 0041f3f5
    JZ 0x0041f41d                       ; 0041f3f8
        ;   XREF to: 0041f41d (CONDITIONAL_JUMP)  ; LAB_0041f41d
    CMP dword ptr [EBX + 0x664],0x3     ; 0041f3fa
        ;   Label: LAB_0041f3fa
    JZ 0x0041f497                       ; 0041f401
        ;   XREF to: 0041f497 (CONDITIONAL_JUMP)  ; LAB_0041f497
    CMP dword ptr [EBX + 0x231c],0x0    ; 0041f407
    JNZ 0x0041f505                      ; 0041f40e
        ;   XREF to: 0041f505 (CONDITIONAL_JUMP)  ; LAB_0041f505
    ADD ESP,0xdc                        ; 0041f414
    POP EBP                             ; 0041f41a
    POP EBX                             ; 0041f41b
    RET                                 ; 0041f41c
    FLD float ptr [EBX + 0x362c]        ; 0041f41d
        ;   Label: LAB_0041f41d
    FSUB float ptr [ESP + 0xec]         ; 0041f423
    FST float ptr [EBX + 0x362c]        ; 0041f42a
    FLDZ                                ; 0041f430
    FCOMPP                              ; 0041f432
    FNSTSW AX                           ; 0041f434
    SAHF                                ; 0041f436
    JC 0x0041f3fa                       ; 0041f437
        ;   XREF to: 0041f3fa (CONDITIONAL_JUMP)  ; LAB_0041f3fa
    PUSH 0x0                            ; 0041f439
    PUSH 0x0                            ; 0041f43b
    PUSH 0x0                            ; 0041f43d
    PUSH 0x7                            ; 0041f43f
    PUSH 0x0                            ; 0041f441
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 0041f443
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040de00(int min_value, int max_value)
    MOV EDX,EAX                         ; 0041f448
    SHL EAX,0x2                         ; 0041f44a
    ADD EAX,EDX                         ; 0041f44d
    SHL EAX,0x2                         ; 0041f44f
    SUB EAX,EDX                         ; 0041f452
    SHL EAX,0x2                         ; 0041f454
    ADD ESP,0x8                         ; 0041f457
    ADD EAX,0x76483c                    ; 0041f45a | DAT_0076483c
    PUSH EAX                            ; 0041f45f
    LEA EAX,[EBX + 0x668]               ; 0041f460
    PUSH EAX                            ; 0041f466
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0 ; 0041f467
        ;   XREF to: 004501c0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_004501c0(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 0041f46c
    PUSH 0x3e19999a                     ; 0041f46f
    PUSH 0x0                            ; 0041f474
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0041f476
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0xe0],EAX      ; 0041f47b
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0041f482
    MOV dword ptr [EBX + 0x362c],EAX    ; 0041f489
    ADD ESP,0x8                         ; 0041f48f
    JMP 0x0041f3fa                      ; 0041f492
        ;   XREF to: 0041f3fa (UNCONDITIONAL_JUMP)  ; LAB_0041f3fa
    LEA EAX,[EBX + 0x20]                ; 0041f497
        ;   Label: LAB_0041f497
    PUSH EAX                            ; 0041f49a
    ADD EBX,0x3630                      ; 0041f49b
    PUSH EBX                            ; 0041f4a1
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0044cd90 ; 0041f4a2
        ;   XREF to: 0044cd90 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0044cd90(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 0041f4a7
    CALL crt_stdlib.c_rand_FUN_0056488c ; 0041f4aa
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_0056488c()
    MOV EDX,EAX                         ; 0041f4af
    AND EDX,0x7fff                      ; 0041f4b1
    MOV EAX,EDX                         ; 0041f4b7
    MOV dword ptr [EBX + 0x3c],EDX      ; 0041f4b9
    SAR EDX,0x1f                        ; 0041f4bc
    SHL EDX,0x8                         ; 0041f4bf
    SBB EAX,EDX                         ; 0041f4c2
    SAR EAX,0x8                         ; 0041f4c4
    MOV EDX,EAX                         ; 0041f4c7
    SAR EDX,0x1f                        ; 0041f4c9
    SHL EDX,0x2                         ; 0041f4cc
    SBB EAX,EDX                         ; 0041f4cf
    SAR EAX,0x2                         ; 0041f4d1
    PUSH 0x40000000                     ; 0041f4d4
    PUSH EBX                            ; 0041f4d9
    MOV byte ptr [EBX + 0x1c],AL        ; 0041f4da
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0 ; 0041f4dd
        ;   XREF to: 0044cde0 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 0041f4e2
    PUSH EBX                            ; 0041f4e5
    MOV EBP,dword ptr [0x005be368]      ; 0041f4e6 | DAT_005be368
    PUSH EBP                            ; 0041f4ec | DAT_01e57284
    MOV dword ptr [EBX + 0x20],0x0      ; 0041f4ed
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0 ; 0041f4f4
        ;   XREF to: 0050a9f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0(CDemonSet * this_ptr, CDemonGlobe * globe)
    ADD ESP,0x8                         ; 0041f4f9
    ADD ESP,0xdc                        ; 0041f4fc
    POP EBP                             ; 0041f502
    POP EBX                             ; 0041f503
    RET                                 ; 0041f504
    LEA EAX,[EBX + 0x3614]              ; 0041f505
        ;   Label: LAB_0041f505
    PUSH EAX                            ; 0041f50b
    LEA EAX,[ESP + 0xd0]                ; 0041f50c
    PUSH EAX                            ; 0041f513
    PUSH EBX                            ; 0041f514
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0041f515
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    LEA EAX,[ESP + 0xd8]                ; 0041f51a
    LEA EDX,[EBX + 0x76c]               ; 0041f521
    ADD ESP,0xc                         ; 0041f527
    CMP EDX,EAX                         ; 0041f52a
    JZ 0x0041f54b                       ; 0041f52c
        ;   XREF to: 0041f54b (CONDITIONAL_JUMP)  ; LAB_0041f54b
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0041f52e
    MOV dword ptr [EDX],EAX             ; 0041f535
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0041f537
    MOV dword ptr [EDX + 0x4],EAX       ; 0041f53e
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0041f541
    MOV dword ptr [EDX + 0x8],EAX       ; 0041f548
    PUSH EDI                            ; 0041f54b
        ;   Label: LAB_0041f54b
    PUSH ESI                            ; 0041f54c
    LEA EAX,[EBX + 0x3620]              ; 0041f54d
    PUSH EAX                            ; 0041f553
    PUSH 0x2dd1184                      ; 0041f554 | DAT_02dd1184
    LEA EAX,[ESP + 0xa0]                ; 0041f559
    PUSH EAX                            ; 0041f560
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 0041f561
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0041f566
    LEA EAX,[EBX + 0x30]                ; 0041f569
    PUSH EAX                            ; 0041f56c
    PUSH 0x2dd1184                      ; 0041f56d | DAT_02dd1184
    LEA EAX,[ESP + 0x40]                ; 0041f572
    PUSH EAX                            ; 0041f576
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 0041f577
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0041f57c
    LEA EAX,[ESP + 0x38]                ; 0041f57f
    PUSH EAX                            ; 0041f583
    LEA EAX,[ESP + 0x9c]                ; 0041f584
    PUSH EAX                            ; 0041f58b
    LEA ESI,[ESP + 0x10]                ; 0041f58c
    LEA EDI,[ESP + 0x70]                ; 0041f590
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0041f594
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    ADD ESP,0x8                         ; 0041f599
    LEA EAX,[ESP + 0xc8]                ; 0041f59c
    MOV ECX,0xc                         ; 0041f5a3
    PUSH EAX                            ; 0041f5a8
    LEA EAX,[ESP + 0x6c]                ; 0041f5a9
    LEA ESI,[ESP + 0xc]                 ; 0041f5ad
    PUSH EAX                            ; 0041f5b1
    MOVSD.REP ES:EDI,ESI                ; 0041f5b2
    CALL core_xform.cpp_matrixToEulerAngles_FUN_0055b180 ; 0041f5b4
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_0055b180(CMatrix3x4f * matrix_in, CVector3f * euler_out)
    ADD ESP,0x8                         ; 0041f5b9
    LEA EAX,[ESP + 0xc8]                ; 0041f5bc
    LEA ESI,[EBX + 0x668]               ; 0041f5c3
    PUSH EAX                            ; 0041f5c9
    ADD EBX,0x778                       ; 0041f5ca
    PUSH EBX                            ; 0041f5d0
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 0041f5d1
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0041f5d6
    PUSH ESI                            ; 0041f5d9
    MOV EDI,dword ptr [0x005be368]      ; 0041f5da | DAT_005be368
    PUSH EDI                            ; 0041f5e0 | DAT_01e57284
    CALL core_set.cpp_CDemonSet_addDynamicLight_FUN_0050a970 ; 0041f5e1
        ;   XREF to: 0050a970 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addDynamicLight_FUN_0050a970(CDemonSet * this_ptr, CDemonLight * light)
    ADD ESP,0x8                         ; 0041f5e6
    POP ESI                             ; 0041f5e9
    POP EDI                             ; 0041f5ea
    ADD ESP,0xdc                        ; 0041f5eb
    POP EBP                             ; 0041f5f1
    POP EBX                             ; 0041f5f2
    RET                                 ; 0041f5f3

