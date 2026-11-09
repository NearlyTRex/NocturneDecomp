; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_FUN_00567fd0(CStranger *this_ptr,int arm_side)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   arm_side
; Local Variables:
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined        Stack[-0x1dc]:1  local_1dc
; undefined        Stack[-0x1cc]:1  local_1cc
; undefined        Stack[-0x1bc]:1  local_1bc
; undefined        Stack[-0x1ac]:1  local_1ac
; undefined        Stack[-0x19c]:1  local_19c
; undefined        Stack[-0x18c]:1  local_18c
; undefined        Stack[-0x17c]:1  local_17c
; undefined        Stack[-0x16c]:1  local_16c
; undefined        Stack[-0x15c]:1  local_15c
; undefined        Stack[-0x14c]:1  local_14c
; undefined        Stack[-0x13c]:1  local_13c
; undefined        Stack[-0x12c]:1  local_12c
; undefined        Stack[-0x11c]:1  local_11c
; undefined        Stack[-0x10c]:1  local_10c
; undefined        Stack[-0xfc]:1  local_fc
; undefined        Stack[-0xec]:1  local_ec
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0xcc]:1  local_cc
; undefined        Stack[-0xbc]:1  local_bc
; undefined        Stack[-0xac]:1  local_ac
; undefined        Stack[-0x9c]:1  local_9c
; undefined        Stack[-0x8c]:1  local_8c
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x4c]:1  local_4c
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
;   core_stranger.cpp_CStranger_makeDrawDecision_FUN_00567880 at 00567d5b
;
; Referenced Globals:
;   undefined4 DAT_005eb915
;   undefined4 DAT_005fe2f0
;   undefined4 DAT_0264be3c
;   undefined4 DAT_0264be40
;   undefined4 DAT_0264be44
;   undefined4 DAT_0264be48
;
; Called Functions:
;   core_motion.cpp_FUN_00502f10
;   core_motion.cpp_FUN_00503f50
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_FUN_00545a60
;   core_skeleton.cpp_FUN_005466c0
;   core_xform.cpp_multiplyQuaternion_FUN_00593c60
;   core_xform.cpp_quaternionFromAngleX_FUN_00593fa0
;   core_xform.cpp_quaternionFromAngleY_FUN_00593fe0
;   core_xform.cpp_quaternionFromAngleZ_FUN_00594020
;   core_xform.cpp_slerpQuaternion_FUN_00593df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567fd0
        ;   Label: core_stranger.cpp_FUN_00567fd0
    PUSH ESI                            ; 00567fd1
    PUSH EDI                            ; 00567fd2
    PUSH EBP                            ; 00567fd3
    MOV EBP,ESP                         ; 00567fd4
    SUB ESP,0x1cc                       ; 00567fd6
    AND ESP,0xfffffff8                  ; 00567fdc
    MOV EBX,dword ptr [EBP + 0x14]      ; 00567fdf
    CMP dword ptr [EBP + 0x18],0x0      ; 00567fe2
    JZ 0x005682cd                       ; 00567fe6
        ;   XREF to: 005682cd (CONDITIONAL_JUMP)  ; LAB_005682cd
    PUSH 0xbfc90fdb                     ; 00567fec
    MOV EAX,[0x0264be40]                ; 00567ff1 | DAT_0264be40
    LEA ESI,[ESP + 0x8]                 ; 00567ff6
    MOV dword ptr [ESP + 0x1c0],EAX     ; 00567ffa
    MOV EAX,[0x0264be48]                ; 00568001 | DAT_0264be48
    LEA EDI,[ESP + 0x18]                ; 00568006
    MOV dword ptr [ESP + 0x1bc],EAX     ; 0056800a
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 00568011
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    LEA ESI,[ESP + 0x8]                 ; 00568016
    ADD ESP,0x4                         ; 0056801a
    MOVSD ES:EDI,ESI                    ; 0056801d
    MOVSD ES:EDI,ESI                    ; 0056801e
    MOVSD ES:EDI,ESI                    ; 0056801f
    MOVSD ES:EDI,ESI                    ; 00568020
    PUSH 0xbfc90fdb                     ; 00568021
    LEA ESI,[ESP + 0xf8]                ; 00568026
    LEA EDI,[ESP + 0x28]                ; 0056802d
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_00594020 ; 00568031
        ;   XREF to: 00594020 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleZ_FUN_00594020()
    ADD ESP,0x4                         ; 00568036
    LEA EAX,[EBX + 0x25654]             ; 00568039
    LEA ESI,[ESP + 0xf4]                ; 0056803f
    MOV dword ptr [ESP + 0x1c0],EAX     ; 00568046
        ;   Label: LAB_00568046
    MOVSD ES:EDI,ESI                    ; 0056804d
    MOVSD ES:EDI,ESI                    ; 0056804e
    MOVSD ES:EDI,ESI                    ; 0056804f
    MOVSD ES:EDI,ESI                    ; 00568050
    MOV EAX,dword ptr [EBX + 0x2d08]    ; 00568051
    MOV dword ptr [ESP],EAX             ; 00568057
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 0056805a
    FLD float ptr [EAX + 0x14]          ; 00568061
    FLD1                                ; 00568064
    FSUBRP                              ; 00568066
    FLD float ptr [ESP]                 ; 00568068
    FXCH                                ; 0056806b
    FMUL ST1                            ; 0056806d
    FLD1                                ; 0056806f
    FSUBRP                              ; 00568071
    FMULP                               ; 00568073
    FST float ptr [ESP]                 ; 00568075
    FLDZ                                ; 00568078
    FCOMPP                              ; 0056807a
    FNSTSW AX                           ; 0056807c
    SAHF                                ; 0056807e
    JNC 0x005682c6                      ; 0056807f
        ;   XREF to: 005682c6 (CONDITIONAL_JUMP)  ; LAB_005682c6
    MOV EAX,dword ptr [EBX + 0x2d04]    ; 00568085
    SHL EAX,0x3                         ; 0056808b
    MOV ESI,EAX                         ; 0056808e
    SHL EAX,0x3                         ; 00568090
    SUB EAX,ESI                         ; 00568093
    LEA ESI,[EBX + 0x2834]              ; 00568095
    ADD EAX,ESI                         ; 0056809b
    PUSH 0x1                            ; 0056809d
    ADD EAX,0x8                         ; 0056809f
    PUSH EAX                            ; 005680a2
    LEA EAX,[EBX + 0x2b4]               ; 005680a3
    PUSH EAX                            ; 005680a9
    MOV dword ptr [ESP + 0x1d0],EAX     ; 005680aa
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 005680b1
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005680b6
    PUSH EAX                            ; 005680b9
    CALL core_motion.cpp_FUN_00502f10   ; 005680ba
        ;   XREF to: 00502f10 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_00502f10(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 005680bf
    PUSH dword ptr [EBX + 0x2d08]       ; 005680c2
    PUSH EAX                            ; 005680c8
    MOV EDI,dword ptr [ESP + 0x1cc]     ; 005680c9
    PUSH EDI                            ; 005680d0
    MOV ESI,EAX                         ; 005680d1
    CALL core_motion.cpp_FUN_00503f50   ; 005680d3
        ;   XREF to: 00503f50 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00503f50()
    MOV dword ptr [ESP + 0x1d4],EAX     ; 005680d8
    FLD float ptr [ESP + 0x1d4]         ; 005680df
    ADD ESP,0xc                         ; 005680e6
    PUSH 0x544cc0                       ; 005680e9
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 005680ee
    PUSH EAX                            ; 005680f5
    PUSH dword ptr [ESP + 0x8]          ; 005680f6
    FSTP float ptr [ESP + 0x1b8]        ; 005680fa
    PUSH dword ptr [ESP + 0x1b8]        ; 00568101
    PUSH ESI                            ; 00568108
    PUSH EDI                            ; 00568109
    CALL core_skeleton.cpp_FUN_00545a60 ; 0056810a
        ;   XREF to: 00545a60 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00545a60()
    ADD ESP,0x18                        ; 0056810f
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 00568112
    LEA ESI,[ESP + 0x194]               ; 00568119
    PUSH dword ptr [EAX + 0xc]          ; 00568120
    LEA EDI,[ESP + 0x78]                ; 00568123
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 00568127
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    ADD ESP,0x4                         ; 0056812c
    LEA EAX,[ESP + 0x74]                ; 0056812f
    LEA ESI,[ESP + 0x194]               ; 00568133
    PUSH EAX                            ; 0056813a
    MOVSD ES:EDI,ESI                    ; 0056813b
    MOVSD ES:EDI,ESI                    ; 0056813c
    MOVSD ES:EDI,ESI                    ; 0056813d
    MOVSD ES:EDI,ESI                    ; 0056813e
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 0056813f
    LEA ESI,[ESP + 0x48]                ; 00568146
    PUSH dword ptr [EAX + 0x8]          ; 0056814a
    LEA EDI,[ESP + 0x6c]                ; 0056814d
    CALL core_xform.cpp_quaternionFromAngleX_FUN_00593fa0 ; 00568151
        ;   XREF to: 00593fa0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_00593fa0()
    LEA ESI,[ESP + 0x4c]                ; 00568156
    ADD ESP,0x4                         ; 0056815a
    LEA EAX,[ESP + 0x68]                ; 0056815d
    MOVSD ES:EDI,ESI                    ; 00568161
    MOVSD ES:EDI,ESI                    ; 00568162
    MOVSD ES:EDI,ESI                    ; 00568163
    MOVSD ES:EDI,ESI                    ; 00568164
    PUSH EAX                            ; 00568165
    LEA ESI,[ESP + 0x13c]               ; 00568166
    LEA EDI,[ESP + 0x5c]                ; 0056816d
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 00568171
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    ADD ESP,0x8                         ; 00568176
    LEA ESI,[ESP + 0x134]               ; 00568179
    LEA EAX,[ESP + 0x14]                ; 00568180
    PUSH 0x3f733333                     ; 00568184
    PUSH EAX                            ; 00568189
    MOVSD ES:EDI,ESI                    ; 0056818a
    MOVSD ES:EDI,ESI                    ; 0056818b
    MOVSD ES:EDI,ESI                    ; 0056818c
    MOVSD ES:EDI,ESI                    ; 0056818d
    PUSH 0x5fe2f0                       ; 0056818e | DAT_005fe2f0
    LEA ESI,[ESP + 0x150]               ; 00568193
    LEA EDI,[ESP + 0x90]                ; 0056819a
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 005681a1
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00593df0()
    ADD ESP,0xc                         ; 005681a6
    LEA EAX,[ESP + 0x54]                ; 005681a9
    PUSH dword ptr [ESP]                ; 005681ad
    LEA ESI,[ESP + 0x148]               ; 005681b0
    PUSH EAX                            ; 005681b7
    LEA EAX,[ESP + 0x8c]                ; 005681b8
    MOVSD ES:EDI,ESI                    ; 005681bf
    MOVSD ES:EDI,ESI                    ; 005681c0
    MOVSD ES:EDI,ESI                    ; 005681c1
    MOVSD ES:EDI,ESI                    ; 005681c2
    PUSH EAX                            ; 005681c3
    LEA ESI,[ESP + 0x130]               ; 005681c4
    LEA EDI,[ESP + 0xa0]                ; 005681cb
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 005681d2
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[ESP + 0x130]               ; 005681d7
    ADD ESP,0x8                         ; 005681de
    LEA EAX,[ESP + 0x98]                ; 005681e1
    MOVSD ES:EDI,ESI                    ; 005681e8
    MOVSD ES:EDI,ESI                    ; 005681e9
    MOVSD ES:EDI,ESI                    ; 005681ea
    MOVSD ES:EDI,ESI                    ; 005681eb
    PUSH EAX                            ; 005681ec
    MOV EDI,dword ptr [ESP + 0x1c4]     ; 005681ed
    LEA EAX,[EBX + 0x964]               ; 005681f4
    SHL EDI,0x4                         ; 005681fa
    ADD EAX,EDI                         ; 005681fd
    PUSH EAX                            ; 005681ff
    LEA ESI,[ESP + 0x180]               ; 00568200
    MOV dword ptr [ESP + 0x1c0],EAX     ; 00568207
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 0056820e
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00593df0()
    LEA EAX,[EBX + EDI*0x1]             ; 00568213
    MOV EDI,EAX                         ; 00568216
    LEA ESI,[ESP + 0x180]               ; 00568218
    ADD ESP,0xc                         ; 0056821f
    LEA EDI,[EDI + 0x964]               ; 00568222
    MOV dword ptr [ESP + 0x1b0],EAX     ; 00568228
    MOVSD ES:EDI,ESI                    ; 0056822f
    MOVSD ES:EDI,ESI                    ; 00568230
    MOVSD ES:EDI,ESI                    ; 00568231
    MOVSD ES:EDI,ESI                    ; 00568232
    LEA EAX,[ESP + 0x54]                ; 00568233
    PUSH EAX                            ; 00568237
    LEA EAX,[ESP + 0x28]                ; 00568238
    PUSH EAX                            ; 0056823c
    LEA EAX,[ESP + 0x1c]                ; 0056823d
    PUSH EAX                            ; 00568241
    LEA ESI,[ESP + 0x160]               ; 00568242
    LEA EDI,[ESP + 0xc0]                ; 00568249
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 00568250
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[ESP + 0x160]               ; 00568255
    ADD ESP,0x8                         ; 0056825c
    LEA EAX,[ESP + 0xb8]                ; 0056825f
    MOVSD ES:EDI,ESI                    ; 00568266
    MOVSD ES:EDI,ESI                    ; 00568267
    MOVSD ES:EDI,ESI                    ; 00568268
    MOVSD ES:EDI,ESI                    ; 00568269
    PUSH EAX                            ; 0056826a
    LEA ESI,[ESP + 0x16c]               ; 0056826b
    LEA EDI,[ESP + 0xac]                ; 00568272
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 00568279
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[ESP + 0x16c]               ; 0056827e
    ADD ESP,0x8                         ; 00568285
    MOVSD ES:EDI,ESI                    ; 00568288
    MOVSD ES:EDI,ESI                    ; 00568289
    MOVSD ES:EDI,ESI                    ; 0056828a
    MOVSD ES:EDI,ESI                    ; 0056828b
    PUSH 0x544cc0                       ; 0056828c
    MOV ESI,dword ptr [ESP + 0x1bc]     ; 00568291
    PUSH ESI                            ; 00568298
    LEA EAX,[ESP + 0xac]                ; 00568299
    PUSH dword ptr [ESP + 0x8]          ; 005682a0
    PUSH EAX                            ; 005682a4
    MOV EDI,dword ptr [ESP + 0x1d4]     ; 005682a5
    PUSH EDI                            ; 005682ac
    CALL core_skeleton.cpp_FUN_005466c0 ; 005682ad
        ;   XREF to: 005466c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_005466c0(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    FLD float ptr [EBX + 0x256f8]       ; 005682b2
    ADD ESP,0x14                        ; 005682b8
    FCOMP double ptr [0x005eb915]       ; 005682bb | DAT_005eb915
    FNSTSW AX                           ; 005682c1
    SAHF                                ; 005682c3
    JA 0x0056832c                       ; 005682c4
        ;   XREF to: 0056832c (CONDITIONAL_JUMP)  ; LAB_0056832c
    MOV ESP,EBP                         ; 005682c6
        ;   Label: LAB_005682c6
    POP EBP                             ; 005682c8
    POP EDI                             ; 005682c9
    POP ESI                             ; 005682ca
    POP EBX                             ; 005682cb
    RET                                 ; 005682cc
    PUSH 0x3fc90fdb                     ; 005682cd
        ;   Label: LAB_005682cd
    MOV EAX,[0x0264be3c]                ; 005682d2 | DAT_0264be3c
    LEA ESI,[ESP + 0xc8]                ; 005682d7
    MOV dword ptr [ESP + 0x1c0],EAX     ; 005682de
    MOV EAX,[0x0264be44]                ; 005682e5 | DAT_0264be44
    LEA EDI,[ESP + 0x18]                ; 005682ea
    MOV dword ptr [ESP + 0x1bc],EAX     ; 005682ee
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 005682f5
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    LEA ESI,[ESP + 0xc8]                ; 005682fa
    ADD ESP,0x4                         ; 00568301
    MOVSD ES:EDI,ESI                    ; 00568304
    MOVSD ES:EDI,ESI                    ; 00568305
    MOVSD ES:EDI,ESI                    ; 00568306
    MOVSD ES:EDI,ESI                    ; 00568307
    PUSH 0x3fc90fdb                     ; 00568308
    LEA ESI,[ESP + 0x38]                ; 0056830d
    LEA EDI,[ESP + 0x28]                ; 00568311
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_00594020 ; 00568315
        ;   XREF to: 00594020 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleZ_FUN_00594020()
    ADD ESP,0x4                         ; 0056831a
    LEA EAX,[EBX + 0x25674]             ; 0056831d
    LEA ESI,[ESP + 0x34]                ; 00568323
    JMP 0x00568046                      ; 00568327
        ;   XREF to: 00568046 (UNCONDITIONAL_JUMP)  ; LAB_00568046
    PUSH 0x3fc90fdb                     ; 0056832c
        ;   Label: LAB_0056832c
    LEA ESI,[ESP + 0x188]               ; 00568331
    LEA EDI,[ESP + 0xe8]                ; 00568338
    CALL core_xform.cpp_quaternionFromAngleX_FUN_00593fa0 ; 0056833f
        ;   XREF to: 00593fa0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_00593fa0()
    ADD ESP,0x4                         ; 00568344
    LEA EAX,[ESP + 0xe4]                ; 00568347
    LEA ESI,[ESP + 0x184]               ; 0056834e
    PUSH EAX                            ; 00568355
    LEA EAX,[ESP + 0x88]                ; 00568356
    MOVSD ES:EDI,ESI                    ; 0056835d
    MOVSD ES:EDI,ESI                    ; 0056835e
    MOVSD ES:EDI,ESI                    ; 0056835f
    MOVSD ES:EDI,ESI                    ; 00568360
    PUSH EAX                            ; 00568361
    LEA ESI,[ESP + 0x10c]               ; 00568362
    LEA EDI,[ESP + 0xdc]                ; 00568369
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 00568370
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[ESP + 0x10c]               ; 00568375
    ADD ESP,0x8                         ; 0056837c
    MOVSD ES:EDI,ESI                    ; 0056837f
    MOVSD ES:EDI,ESI                    ; 00568380
    MOVSD ES:EDI,ESI                    ; 00568381
    MOVSD ES:EDI,ESI                    ; 00568382
    LEA EAX,[ESP + 0xd4]                ; 00568383
    PUSH dword ptr [EBX + 0x256f8]      ; 0056838a
    PUSH EAX                            ; 00568390
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 00568391
    PUSH EAX                            ; 00568398
    LEA ESI,[ESP + 0x120]               ; 00568399
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 005683a0
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00593df0()
    ADD ESP,0xc                         ; 005683a5
    MOV EDI,dword ptr [ESP + 0x1b0]     ; 005683a8
    LEA ESI,[ESP + 0x114]               ; 005683af
    LEA EDI,[EDI + 0x964]               ; 005683b6
    MOVSD ES:EDI,ESI                    ; 005683bc
    MOVSD ES:EDI,ESI                    ; 005683bd
    MOVSD ES:EDI,ESI                    ; 005683be
    MOVSD ES:EDI,ESI                    ; 005683bf
    MOV ESP,EBP                         ; 005683c0
    POP EBP                             ; 005683c2
    POP EDI                             ; 005683c3
    POP ESI                             ; 005683c4
    POP EBX                             ; 005683c5
    RET                                 ; 005683c6

