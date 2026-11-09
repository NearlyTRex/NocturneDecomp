; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_FUN_00520140(CScat *this_ptr,int hand_index)
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
;   core_scat.cpp_FUN_0051ff60 at 00520126
;
; Referenced Globals:
;   undefined4 DAT_005fe2f0
;   undefined4 DAT_01e62074
;   undefined4 DAT_01e62078
;   undefined4 DAT_01e6207c
;   undefined4 DAT_01e62080
;
; Called Functions:
;   core_skeleton.cpp_FUN_005466c0
;   core_xform.cpp_multiplyQuaternion_FUN_00593c60
;   core_xform.cpp_quaternionFromAngleX_FUN_00593fa0
;   core_xform.cpp_quaternionFromAngleY_FUN_00593fe0
;   core_xform.cpp_quaternionFromAngleZ_FUN_00594020
;   core_xform.cpp_slerpQuaternion_FUN_00593df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00520140
        ;   Label: core_scat.cpp_FUN_00520140
    PUSH ESI                            ; 00520141
    PUSH EDI                            ; 00520142
    PUSH EBP                            ; 00520143
    MOV EBP,ESP                         ; 00520144
    SUB ESP,0x14c                       ; 00520146
    AND ESP,0xfffffff8                  ; 0052014c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052014f
    CMP dword ptr [EBP + 0x18],0x0      ; 00520152
    JZ 0x005201d8                       ; 00520156
        ;   XREF to: 005201d8 (CONDITIONAL_JUMP)  ; LAB_005201d8
    MOV ESI,dword ptr [0x01e62078]      ; 0052015c | DAT_01e62078
    MOV dword ptr [ESP + 0x144],ESI     ; 00520162
    MOV ESI,dword ptr [0x01e62080]      ; 00520169 | DAT_01e62080
    PUSH 0xbfc90fdb                     ; 0052016f
    MOV dword ptr [ESP + 0x14c],ESI     ; 00520174
    LEA ESI,[ESP + 0xb8]                ; 0052017b
    LEA EDI,[ESP + 0x68]                ; 00520182
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 00520186
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    LEA ESI,[ESP + 0xb8]                ; 0052018b
    ADD ESP,0x4                         ; 00520192
    MOVSD ES:EDI,ESI                    ; 00520195
    MOVSD ES:EDI,ESI                    ; 00520196
    MOVSD ES:EDI,ESI                    ; 00520197
    MOVSD ES:EDI,ESI                    ; 00520198
    PUSH 0xbfc90fdb                     ; 00520199
    LEA ESI,[ESP + 0xc8]                ; 0052019e
    LEA EDI,[ESP + 0x28]                ; 005201a5
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_00594020 ; 005201a9
        ;   XREF to: 00594020 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleZ_FUN_00594020()
    LEA ESI,[ESP + 0xc8]                ; 005201ae
    ADD ESP,0x4                         ; 005201b5
        ;   Label: LAB_005201b5
    MOVSD ES:EDI,ESI                    ; 005201b8
    MOVSD ES:EDI,ESI                    ; 005201b9
    MOVSD ES:EDI,ESI                    ; 005201ba
    MOVSD ES:EDI,ESI                    ; 005201bb
    MOV ESI,dword ptr [EBX + 0x2d08]    ; 005201bc
    MOV dword ptr [ESP],ESI             ; 005201c2
    FLD float ptr [ESP]                 ; 005201c5
    FLDZ                                ; 005201c8
    FCOMPP                              ; 005201ca
    FNSTSW AX                           ; 005201cc
    SAHF                                ; 005201ce
    JC 0x00520233                       ; 005201cf
        ;   XREF to: 00520233 (CONDITIONAL_JUMP)  ; LAB_00520233
    MOV ESP,EBP                         ; 005201d1
    POP EBP                             ; 005201d3
    POP EDI                             ; 005201d4
    POP ESI                             ; 005201d5
    POP EBX                             ; 005201d6
    RET                                 ; 005201d7
    MOV ESI,dword ptr [0x01e62074]      ; 005201d8 | DAT_01e62074
        ;   Label: LAB_005201d8
    MOV dword ptr [ESP + 0x144],ESI     ; 005201de
    MOV ESI,dword ptr [0x01e6207c]      ; 005201e5 | DAT_01e6207c
    PUSH 0x3fc90fdb                     ; 005201eb
    MOV dword ptr [ESP + 0x14c],ESI     ; 005201f0
    LEA ESI,[ESP + 0x98]                ; 005201f7
    LEA EDI,[ESP + 0x68]                ; 005201fe
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 00520202
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    LEA ESI,[ESP + 0x98]                ; 00520207
    ADD ESP,0x4                         ; 0052020e
    MOVSD ES:EDI,ESI                    ; 00520211
    MOVSD ES:EDI,ESI                    ; 00520212
    MOVSD ES:EDI,ESI                    ; 00520213
    MOVSD ES:EDI,ESI                    ; 00520214
    PUSH 0x3fc90fdb                     ; 00520215
    LEA ESI,[ESP + 0xa8]                ; 0052021a
    LEA EDI,[ESP + 0x28]                ; 00520221
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_00594020 ; 00520225
        ;   XREF to: 00594020 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleZ_FUN_00594020()
    LEA ESI,[ESP + 0xa8]                ; 0052022a
    JMP 0x005201b5                      ; 00520231
        ;   XREF to: 005201b5 (UNCONDITIONAL_JUMP)  ; LAB_005201b5
    PUSH dword ptr [EBX + 0x2565c]      ; 00520233
        ;   Label: LAB_00520233
    LEA ESI,[ESP + 0xe8]                ; 00520239
    LEA EDI,[ESP + 0x58]                ; 00520240
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00593fe0 ; 00520244
        ;   XREF to: 00593fe0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00593fe0()
    LEA ESI,[ESP + 0xe8]                ; 00520249
    ADD ESP,0x4                         ; 00520250
    MOVSD ES:EDI,ESI                    ; 00520253
    MOVSD ES:EDI,ESI                    ; 00520254
    MOVSD ES:EDI,ESI                    ; 00520255
    MOVSD ES:EDI,ESI                    ; 00520256
    LEA ESI,[ESP + 0x54]                ; 00520257
    PUSH ESI                            ; 0052025b
    PUSH dword ptr [EBX + 0x25658]      ; 0052025c
    LEA ESI,[ESP + 0x1c]                ; 00520262
    LEA EDI,[ESP + 0x4c]                ; 00520266
    CALL core_xform.cpp_quaternionFromAngleX_FUN_00593fa0 ; 0052026a
        ;   XREF to: 00593fa0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_00593fa0()
    LEA ESI,[ESP + 0x1c]                ; 0052026f
    ADD ESP,0x4                         ; 00520273
    MOVSD ES:EDI,ESI                    ; 00520276
    MOVSD ES:EDI,ESI                    ; 00520277
    MOVSD ES:EDI,ESI                    ; 00520278
    MOVSD ES:EDI,ESI                    ; 00520279
    LEA ESI,[ESP + 0x48]                ; 0052027a
    PUSH ESI                            ; 0052027e
    LEA ESI,[ESP + 0xc]                 ; 0052027f
    LEA EDI,[ESP + 0x3c]                ; 00520283
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 00520287
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[ESP + 0xc]                 ; 0052028c
    ADD ESP,0x8                         ; 00520290
    MOVSD ES:EDI,ESI                    ; 00520293
    MOVSD ES:EDI,ESI                    ; 00520294
    MOVSD ES:EDI,ESI                    ; 00520295
    MOVSD ES:EDI,ESI                    ; 00520296
    LEA ESI,[ESP + 0x34]                ; 00520297
    PUSH ESI                            ; 0052029b
    LEA ESI,[ESP + 0x68]                ; 0052029c
    PUSH 0x3f733333                     ; 005202a0
    PUSH ESI                            ; 005202a5
    PUSH 0x5fe2f0                       ; 005202a6 | DAT_005fe2f0
    LEA ESI,[ESP + 0x124]               ; 005202ab
    LEA EDI,[ESP + 0x84]                ; 005202b2
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 005202b9
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00593df0()
    LEA ESI,[ESP + 0x124]               ; 005202be
    ADD ESP,0xc                         ; 005202c5
    MOVSD ES:EDI,ESI                    ; 005202c8
    MOVSD ES:EDI,ESI                    ; 005202c9
    MOVSD ES:EDI,ESI                    ; 005202ca
    MOVSD ES:EDI,ESI                    ; 005202cb
    LEA ESI,[ESP + 0x78]                ; 005202cc
    PUSH ESI                            ; 005202d0
    LEA ESI,[ESP + 0x12c]               ; 005202d1
    LEA EDI,[ESP + 0x13c]               ; 005202d8
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 005202df
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[ESP + 0x12c]               ; 005202e4
    ADD ESP,0x8                         ; 005202eb
    MOVSD ES:EDI,ESI                    ; 005202ee
    MOVSD ES:EDI,ESI                    ; 005202ef
    MOVSD ES:EDI,ESI                    ; 005202f0
    MOVSD ES:EDI,ESI                    ; 005202f1
    PUSH dword ptr [ESP]                ; 005202f2
    LEA ESI,[ESP + 0x138]               ; 005202f5
    MOV EDI,dword ptr [ESP + 0x148]     ; 005202fc
    PUSH ESI                            ; 00520303
    SHL EDI,0x4                         ; 00520304
    LEA ESI,[EBX + 0x964]               ; 00520307
    ADD ESI,EDI                         ; 0052030d
    PUSH ESI                            ; 0052030f
    LEA ESI,[ESP + 0xe0]                ; 00520310
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 00520317
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00593df0()
    LEA ESI,[ESP + 0xe0]                ; 0052031c
    LEA EDI,[EDI + EBX*0x1 + 0x964]     ; 00520323
    ADD ESP,0xc                         ; 0052032a
    MOVSD ES:EDI,ESI                    ; 0052032d
    MOVSD ES:EDI,ESI                    ; 0052032e
    MOVSD ES:EDI,ESI                    ; 0052032f
    MOVSD ES:EDI,ESI                    ; 00520330
    LEA ESI,[ESP + 0x34]                ; 00520331
    PUSH ESI                            ; 00520335
    LEA ESI,[ESP + 0x28]                ; 00520336
    PUSH ESI                            ; 0052033a
    LEA ESI,[ESP + 0x6c]                ; 0052033b
    PUSH ESI                            ; 0052033f
    LEA ESI,[ESP + 0x110]               ; 00520340
    LEA EDI,[ESP + 0x90]                ; 00520347
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 0052034e
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    LEA ESI,[ESP + 0x110]               ; 00520353
    ADD ESP,0x8                         ; 0052035a
    MOVSD ES:EDI,ESI                    ; 0052035d
    MOVSD ES:EDI,ESI                    ; 0052035e
    MOVSD ES:EDI,ESI                    ; 0052035f
    MOVSD ES:EDI,ESI                    ; 00520360
    LEA ESI,[ESP + 0x88]                ; 00520361
    PUSH ESI                            ; 00520368
    LEA ESI,[ESP + 0xfc]                ; 00520369
    CALL core_xform.cpp_multiplyQuaternion_FUN_00593c60 ; 00520370
        ;   XREF to: 00593c60 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00593c60()
    ADD ESP,0x8                         ; 00520375
    LEA EDI,[ESP + 0x134]               ; 00520378
    LEA ESI,[ESP + 0xf4]                ; 0052037f
    PUSH 0x544cc0                       ; 00520386
    MOV ECX,dword ptr [ESP + 0x14c]     ; 0052038b
    MOVSD ES:EDI,ESI                    ; 00520392
    MOVSD ES:EDI,ESI                    ; 00520393
    MOVSD ES:EDI,ESI                    ; 00520394
    MOVSD ES:EDI,ESI                    ; 00520395
    PUSH ECX                            ; 00520396
    LEA ESI,[ESP + 0x13c]               ; 00520397
    PUSH dword ptr [ESP + 0x8]          ; 0052039e
    PUSH ESI                            ; 005203a2
    ADD EBX,0x2b4                       ; 005203a3
    PUSH EBX                            ; 005203a9
    CALL core_skeleton.cpp_FUN_005466c0 ; 005203aa
        ;   XREF to: 005466c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_005466c0(CDeformableModelInstance * this_ptr, CQuaternion4f * source_quaternions, float blend_weight, int bone_index, ...)
    ADD ESP,0x14                        ; 005203af
    MOV ESP,EBP                         ; 005203b2
    POP EBP                             ; 005203b4
    POP EDI                             ; 005203b5
    POP ESI                             ; 005203b6
    POP EBX                             ; 005203b7
    RET                                 ; 005203b8

