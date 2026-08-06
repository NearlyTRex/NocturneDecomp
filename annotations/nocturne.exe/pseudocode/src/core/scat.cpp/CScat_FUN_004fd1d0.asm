; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_CScat_FUN_004fd1d0(CScat *this_ptr,int hand_index)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
; Local Variables:
; undefined4       Stack[-0x160]:4  local_160
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
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_scat.cpp_CScat_blendLayerAction_FUN_004fcff0 at 004fd1b6
;
; Referenced Globals:
;   undefined4 DAT_005a4508
;   undefined4 DAT_01e53394
;   undefined4 DAT_01e53398
;   undefined4 DAT_01e5339c
;   undefined4 DAT_01e533a0
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
;   core_xform.cpp_multiplyQuaternion_FUN_0055d130
;   core_xform.cpp_quaternionFromAngleX_FUN_0055d4a0
;   core_xform.cpp_quaternionFromAngleY_FUN_0055d4e0
;   core_xform.cpp_quaternionFromAngleZ_FUN_0055d520
;   core_xform.cpp_slerpQuaternion_FUN_0055d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd1d0
        ;   Label: core_scat.cpp_CScat_FUN_004fd1d0
    PUSH ESI                            ; 004fd1d1
    PUSH EDI                            ; 004fd1d2
    PUSH EBP                            ; 004fd1d3
    MOV EBP,ESP                         ; 004fd1d4
    SUB ESP,0x14c                       ; 004fd1d6
    AND ESP,0xfffffff8                  ; 004fd1dc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004fd1df
    CMP dword ptr [EBP + 0x18],0x0      ; 004fd1e2
    JZ 0x004fd268                       ; 004fd1e6
        ;   XREF to: 004fd268 (CONDITIONAL_JUMP)  ; LAB_004fd268
    MOV ESI,dword ptr [0x01e53398]      ; 004fd1ec | DAT_01e53398
    MOV dword ptr [ESP + 0x144],ESI     ; 004fd1f2
    MOV ESI,dword ptr [0x01e533a0]      ; 004fd1f9 | DAT_01e533a0
    PUSH 0xbfc90fdb                     ; 004fd1ff
    MOV dword ptr [ESP + 0x14c],ESI     ; 004fd204
    LEA ESI,[ESP + 0xb8]                ; 004fd20b
    LEA EDI,[ESP + 0x68]                ; 004fd212
    CALL core_xform.cpp_quaternionFromAngleY_FUN_0055d4e0 ; 004fd216
        ;   XREF to: 0055d4e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_0055d4e0(float angle_radians, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0xb8]                ; 004fd21b
    ADD ESP,0x4                         ; 004fd222
    MOVSD ES:EDI,ESI                    ; 004fd225
    MOVSD ES:EDI,ESI                    ; 004fd226
    MOVSD ES:EDI,ESI                    ; 004fd227
    MOVSD ES:EDI,ESI                    ; 004fd228
    PUSH 0xbfc90fdb                     ; 004fd229
    LEA ESI,[ESP + 0xc8]                ; 004fd22e
    LEA EDI,[ESP + 0x28]                ; 004fd235
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_0055d520 ; 004fd239
        ;   XREF to: 0055d520 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleZ_FUN_0055d520(float angle_radians, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0xc8]                ; 004fd23e
    ADD ESP,0x4                         ; 004fd245
        ;   Label: LAB_004fd245
    MOVSD ES:EDI,ESI                    ; 004fd248
    MOVSD ES:EDI,ESI                    ; 004fd249
    MOVSD ES:EDI,ESI                    ; 004fd24a
    MOVSD ES:EDI,ESI                    ; 004fd24b
    MOV ESI,dword ptr [EBX + 0x2a88]    ; 004fd24c
    MOV dword ptr [ESP],ESI             ; 004fd252
    FLD float ptr [ESP]                 ; 004fd255
    FLDZ                                ; 004fd258
    FCOMPP                              ; 004fd25a
    FNSTSW AX                           ; 004fd25c
    SAHF                                ; 004fd25e
    JC 0x004fd2c3                       ; 004fd25f
        ;   XREF to: 004fd2c3 (CONDITIONAL_JUMP)  ; LAB_004fd2c3
    MOV ESP,EBP                         ; 004fd261
    POP EBP                             ; 004fd263
    POP EDI                             ; 004fd264
    POP ESI                             ; 004fd265
    POP EBX                             ; 004fd266
    RET                                 ; 004fd267
    MOV ESI,dword ptr [0x01e53394]      ; 004fd268 | DAT_01e53394
        ;   Label: LAB_004fd268
    MOV dword ptr [ESP + 0x144],ESI     ; 004fd26e
    MOV ESI,dword ptr [0x01e5339c]      ; 004fd275 | DAT_01e5339c
    PUSH 0x3fc90fdb                     ; 004fd27b
    MOV dword ptr [ESP + 0x14c],ESI     ; 004fd280
    LEA ESI,[ESP + 0x98]                ; 004fd287
    LEA EDI,[ESP + 0x68]                ; 004fd28e
    CALL core_xform.cpp_quaternionFromAngleY_FUN_0055d4e0 ; 004fd292
        ;   XREF to: 0055d4e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_0055d4e0(float angle_radians, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x98]                ; 004fd297
    ADD ESP,0x4                         ; 004fd29e
    MOVSD ES:EDI,ESI                    ; 004fd2a1
    MOVSD ES:EDI,ESI                    ; 004fd2a2
    MOVSD ES:EDI,ESI                    ; 004fd2a3
    MOVSD ES:EDI,ESI                    ; 004fd2a4
    PUSH 0x3fc90fdb                     ; 004fd2a5
    LEA ESI,[ESP + 0xa8]                ; 004fd2aa
    LEA EDI,[ESP + 0x28]                ; 004fd2b1
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_0055d520 ; 004fd2b5
        ;   XREF to: 0055d520 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleZ_FUN_0055d520(float angle_radians, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0xa8]                ; 004fd2ba
    JMP 0x004fd245                      ; 004fd2c1
        ;   XREF to: 004fd245 (UNCONDITIONAL_JUMP)  ; LAB_004fd245
    PUSH dword ptr [EBX + 0x1fa58]      ; 004fd2c3
        ;   Label: LAB_004fd2c3
    LEA ESI,[ESP + 0xe8]                ; 004fd2c9
    LEA EDI,[ESP + 0x58]                ; 004fd2d0
    CALL core_xform.cpp_quaternionFromAngleY_FUN_0055d4e0 ; 004fd2d4
        ;   XREF to: 0055d4e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleY_FUN_0055d4e0(float angle_radians, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0xe8]                ; 004fd2d9
    ADD ESP,0x4                         ; 004fd2e0
    MOVSD ES:EDI,ESI                    ; 004fd2e3
    MOVSD ES:EDI,ESI                    ; 004fd2e4
    MOVSD ES:EDI,ESI                    ; 004fd2e5
    MOVSD ES:EDI,ESI                    ; 004fd2e6
    LEA ESI,[ESP + 0x54]                ; 004fd2e7
    PUSH ESI                            ; 004fd2eb
    PUSH dword ptr [EBX + 0x1fa54]      ; 004fd2ec
    LEA ESI,[ESP + 0x1c]                ; 004fd2f2
    LEA EDI,[ESP + 0x4c]                ; 004fd2f6
    CALL core_xform.cpp_quaternionFromAngleX_FUN_0055d4a0 ; 004fd2fa
        ;   XREF to: 0055d4a0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionFromAngleX_FUN_0055d4a0(float angle_radians, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x1c]                ; 004fd2ff
    ADD ESP,0x4                         ; 004fd303
    MOVSD ES:EDI,ESI                    ; 004fd306
    MOVSD ES:EDI,ESI                    ; 004fd307
    MOVSD ES:EDI,ESI                    ; 004fd308
    MOVSD ES:EDI,ESI                    ; 004fd309
    LEA ESI,[ESP + 0x48]                ; 004fd30a
    PUSH ESI                            ; 004fd30e
    LEA ESI,[ESP + 0xc]                 ; 004fd30f
    LEA EDI,[ESP + 0x3c]                ; 004fd313
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 004fd317
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_0055d130(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0xc]                 ; 004fd31c
    ADD ESP,0x8                         ; 004fd320
    MOVSD ES:EDI,ESI                    ; 004fd323
    MOVSD ES:EDI,ESI                    ; 004fd324
    MOVSD ES:EDI,ESI                    ; 004fd325
    MOVSD ES:EDI,ESI                    ; 004fd326
    LEA ESI,[ESP + 0x34]                ; 004fd327
    PUSH ESI                            ; 004fd32b
    LEA ESI,[ESP + 0x68]                ; 004fd32c
    PUSH 0x3f733333                     ; 004fd330
    PUSH ESI                            ; 004fd335
    PUSH 0x5a4508                       ; 004fd336 | DAT_005a4508
    LEA ESI,[ESP + 0x124]               ; 004fd33b
    LEA EDI,[ESP + 0x84]                ; 004fd342
    CALL core_xform.cpp_slerpQuaternion_FUN_0055d2d0 ; 004fd349
        ;   XREF to: 0055d2d0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_0055d2d0(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, float t, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x124]               ; 004fd34e
    ADD ESP,0xc                         ; 004fd355
    MOVSD ES:EDI,ESI                    ; 004fd358
    MOVSD ES:EDI,ESI                    ; 004fd359
    MOVSD ES:EDI,ESI                    ; 004fd35a
    MOVSD ES:EDI,ESI                    ; 004fd35b
    LEA ESI,[ESP + 0x78]                ; 004fd35c
    PUSH ESI                            ; 004fd360
    LEA ESI,[ESP + 0x12c]               ; 004fd361
    LEA EDI,[ESP + 0x13c]               ; 004fd368
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 004fd36f
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_0055d130(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x12c]               ; 004fd374
    ADD ESP,0x8                         ; 004fd37b
    MOVSD ES:EDI,ESI                    ; 004fd37e
    MOVSD ES:EDI,ESI                    ; 004fd37f
    MOVSD ES:EDI,ESI                    ; 004fd380
    MOVSD ES:EDI,ESI                    ; 004fd381
    PUSH dword ptr [ESP]                ; 004fd382
    LEA ESI,[ESP + 0x138]               ; 004fd385
    MOV EDI,dword ptr [ESP + 0x148]     ; 004fd38c
    PUSH ESI                            ; 004fd393
    SHL EDI,0x4                         ; 004fd394
    LEA ESI,[EBX + 0x800]               ; 004fd397
    ADD ESI,EDI                         ; 004fd39d
    PUSH ESI                            ; 004fd39f
    LEA ESI,[ESP + 0xe0]                ; 004fd3a0
    CALL core_xform.cpp_slerpQuaternion_FUN_0055d2d0 ; 004fd3a7
        ;   XREF to: 0055d2d0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_0055d2d0(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, float t, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0xe0]                ; 004fd3ac
    LEA EDI,[EDI + EBX*0x1 + 0x800]     ; 004fd3b3
    ADD ESP,0xc                         ; 004fd3ba
    MOVSD ES:EDI,ESI                    ; 004fd3bd
    MOVSD ES:EDI,ESI                    ; 004fd3be
    MOVSD ES:EDI,ESI                    ; 004fd3bf
    MOVSD ES:EDI,ESI                    ; 004fd3c0
    LEA ESI,[ESP + 0x34]                ; 004fd3c1
    PUSH ESI                            ; 004fd3c5
    LEA ESI,[ESP + 0x28]                ; 004fd3c6
    PUSH ESI                            ; 004fd3ca
    LEA ESI,[ESP + 0x6c]                ; 004fd3cb
    PUSH ESI                            ; 004fd3cf
    LEA ESI,[ESP + 0x110]               ; 004fd3d0
    LEA EDI,[ESP + 0x90]                ; 004fd3d7
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 004fd3de
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_0055d130(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x110]               ; 004fd3e3
    ADD ESP,0x8                         ; 004fd3ea
    MOVSD ES:EDI,ESI                    ; 004fd3ed
    MOVSD ES:EDI,ESI                    ; 004fd3ee
    MOVSD ES:EDI,ESI                    ; 004fd3ef
    MOVSD ES:EDI,ESI                    ; 004fd3f0
    LEA ESI,[ESP + 0x88]                ; 004fd3f1
    PUSH ESI                            ; 004fd3f8
    LEA ESI,[ESP + 0xfc]                ; 004fd3f9
    CALL core_xform.cpp_multiplyQuaternion_FUN_0055d130 ; 004fd400
        ;   XREF to: 0055d130 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_multiplyQuaternion_FUN_0055d130(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, CQuaternion4f * quat_out)
    ADD ESP,0x8                         ; 004fd405
    LEA EDI,[ESP + 0x134]               ; 004fd408
    LEA ESI,[ESP + 0xf4]                ; 004fd40f
    PUSH 0x51b650                       ; 004fd416
    MOV ECX,dword ptr [ESP + 0x14c]     ; 004fd41b
    MOVSD ES:EDI,ESI                    ; 004fd422
    MOVSD ES:EDI,ESI                    ; 004fd423
    MOVSD ES:EDI,ESI                    ; 004fd424
    MOVSD ES:EDI,ESI                    ; 004fd425
    PUSH ECX                            ; 004fd426
    LEA ESI,[ESP + 0x13c]               ; 004fd427
    PUSH dword ptr [ESP + 0x8]          ; 004fd42e
    PUSH ESI                            ; 004fd432
    ADD EBX,0x150                       ; 004fd433
    PUSH EBX                            ; 004fd439
    CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0 ; 004fd43a
        ;   XREF to: 0051cfd0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 004fd43f
    MOV ESP,EBP                         ; 004fd442
    POP EBP                             ; 004fd444
    POP EDI                             ; 004fd445
    POP ESI                             ; 004fd446
    POP EBX                             ; 004fd447
    RET                                 ; 004fd448

