; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter *this_ptr,CBodyPart *body_part,int part_index,int render_in_background)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CBodyPart *      Stack[0x8]:4   body_part
; int              Stack[0xc]:4   part_index
; int              Stack[0x10]:4   render_in_background
; Local Variables:
; undefined        Stack[-0xc8]:1  local_c8
; undefined        Stack[-0x98]:1  local_98
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x6c]:4  local_6c
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[21]:
;   core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00412170 at 004122d8
;   core_batman.cpp_CBatman_processDismemberment_FUN_00413c40 at 00413d25
;   core_boneguy.cpp_CBoneGuy_explode_FUN_0041d540 at 0041d66b
;   core_bride.cpp_CBride_processDismemberment_FUN_004248e0 at 004249b7
;   core_carved.cpp_FUN_0042b580 at 0042b660
;   core_charactr.cpp_CCharacter_detachBodyPart_FUN_004311a0 at 004311f4
;   core_construc.cpp_FUN_004472a0 at 004473c3
;   core_cow.cpp_CZombieCow_processDismemberment_FUN_00448b70 at 00448c2a
;   core_djien.cpp_CDjien_damageSack_FUN_00460f90 at 0046102e
;   core_dracbrid.cpp_CDraculaBride_dismemberPart_FUN_0047cf20 at 0047cf73
;   ... and 11 more
;
; Referenced Globals:
;   undefined4 DAT_007c623c
;
; Called Functions:
;   core_bodypart.cpp_CBodyPart_addAttachedModel_FUN_0041aaa0
;   core_bodypart.cpp_CBodyPart_addFire_FUN_0041ab20
;   core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_0056a7d0
;   core_xform.cpp_FUN_005b5080
;   core_xform.cpp_matrixToEulerAngles_FUN_005b5930
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431210
        ;   Label: core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210
    PUSH ESI                            ; 00431211
    PUSH EDI                            ; 00431212
    PUSH EBP                            ; 00431213
    MOV EBP,ESP                         ; 00431214
    SUB ESP,0xb8                        ; 00431216
    SUB EBP,0x72                        ; 0043121c
    MOV EAX,dword ptr [EBP + 0x86]      ; 0043121f
    MOV EBX,dword ptr [EBP + 0x86]      ; 00431225
    MOV DL,byte ptr [EAX + 0x24a8]      ; 0043122b
    ADD EBX,0x158                       ; 00431231
    TEST DL,DL                          ; 00431237
    JZ 0x00431255                       ; 00431239
        ;   XREF to: 00431255 (CONDITIONAL_JUMP)  ; LAB_00431255
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0043123b
    MOV EDX,dword ptr [EBP + 0x86]      ; 00431241
    SHL EAX,0x2                         ; 00431247
    ADD EAX,EDX                         ; 0043124a
    CMP dword ptr [EAX + 0x2298],0x0    ; 0043124c
    JNZ 0x0043125d                      ; 00431253
        ;   XREF to: 0043125d (CONDITIONAL_JUMP)  ; LAB_0043125d
    LEA ESP,[EBP + 0x72]                ; 00431255
        ;   Label: LAB_00431255
    POP EBP                             ; 00431258
    POP EDI                             ; 00431259
    POP ESI                             ; 0043125a
    POP EBX                             ; 0043125b
    RET                                 ; 0043125c
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0043125d
        ;   Label: LAB_0043125d
    PUSH ESI                            ; 00431263
    MOV EDI,dword ptr [EBP + 0x8a]      ; 00431264
    PUSH EDI                            ; 0043126a
    PUSH EBX                            ; 0043126b
    CALL core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_0056a7d0 ; 0043126c
        ;   XREF to: 0056a7d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_dismemberPart_FUN_0056a7d0(CDeformableModelInstance * this_ptr, CBodyPart * body_part, int part_index)
    XOR EAX,EAX                         ; 00431271
    MOV dword ptr [EBP + 0x6a],EAX      ; 00431273
    MOV EAX,dword ptr [EBP + 0x86]      ; 00431276
    MOV EDX,dword ptr [EAX + 0x3004]    ; 0043127c
    ADD ESP,0xc                         ; 00431282
    TEST EDX,EDX                        ; 00431285
    JLE 0x004312c5                      ; 00431287
        ;   XREF to: 004312c5 (CONDITIONAL_JUMP)  ; LAB_004312c5
    MOV EBX,dword ptr [EBP + 0x86]      ; 00431289
    ADD EAX,0xfd8                       ; 0043128f
    ADD EBX,0x3008                      ; 00431294
    MOV dword ptr [EBP + 0x62],EAX      ; 0043129a
    MOV ECX,dword ptr [EBP + 0x8e]      ; 0043129d
        ;   Label: LAB_0043129d
    CMP ECX,dword ptr [EBX]             ; 004312a3
    JZ 0x0043136d                       ; 004312a5
        ;   XREF to: 0043136d (CONDITIONAL_JUMP)  ; LAB_0043136d
    MOV ECX,dword ptr [EBP + 0x6a]      ; 004312ab
        ;   Label: LAB_004312ab
    MOV ESI,dword ptr [EBP + 0x86]      ; 004312ae
    ADD EBX,0x38                        ; 004312b4
    INC ECX                             ; 004312b7
    MOV EDI,dword ptr [ESI + 0x3004]    ; 004312b8
    MOV dword ptr [EBP + 0x6a],ECX      ; 004312be
    CMP ECX,EDI                         ; 004312c1
    JL 0x0043129d                       ; 004312c3
        ;   XREF to: 0043129d (CONDITIONAL_JUMP)  ; LAB_0043129d
    XOR EAX,EAX                         ; 004312c5
        ;   Label: LAB_004312c5
    MOV dword ptr [EBP + 0x6e],EAX      ; 004312c7
    MOV EAX,dword ptr [EBP + 0x86]      ; 004312ca
    CMP dword ptr [EAX + 0x3120],0x0    ; 004312d0
    JLE 0x00431315                      ; 004312d7
        ;   XREF to: 00431315 (CONDITIONAL_JUMP)  ; LAB_00431315
    MOV EBX,dword ptr [EBP + 0x86]      ; 004312d9
    ADD EAX,0xfd8                       ; 004312df
    ADD EBX,0x312c                      ; 004312e4
    MOV dword ptr [EBP + 0x66],EAX      ; 004312ea
    MOV ESI,dword ptr [EBP + 0x8e]      ; 004312ed
        ;   Label: LAB_004312ed
    CMP ESI,dword ptr [EBX]             ; 004312f3
    JZ 0x004313e5                       ; 004312f5
        ;   XREF to: 004313e5 (CONDITIONAL_JUMP)  ; LAB_004313e5
    MOV EDX,dword ptr [EBP + 0x6e]      ; 004312fb
        ;   Label: LAB_004312fb
    MOV ESI,dword ptr [EBP + 0x86]      ; 004312fe
    ADD EBX,0x18                        ; 00431304
    INC EDX                             ; 00431307
    MOV ECX,dword ptr [ESI + 0x3120]    ; 00431308
    MOV dword ptr [EBP + 0x6e],EDX      ; 0043130e
    CMP EDX,ECX                         ; 00431311
    JL 0x004312ed                       ; 00431313
        ;   XREF to: 004312ed (CONDITIONAL_JUMP)  ; LAB_004312ed
    MOV EBX,dword ptr [EBP + 0x86]      ; 00431315
        ;   Label: LAB_00431315
    MOV EDI,dword ptr [EBP + 0x8e]      ; 0043131b
    XOR ESI,ESI                         ; 00431321
    CMP EDI,dword ptr [EBX + 0x25ac]    ; 00431323
        ;   Label: LAB_00431323
    JNZ 0x0043134a                      ; 00431329
        ;   XREF to: 0043134a (CONDITIONAL_JUMP)  ; LAB_0043134a
    PUSH 0x0                            ; 0043132b
    MOV EAX,dword ptr [EBP + 0x86]      ; 0043132d
    PUSH ESI                            ; 00431333
    MOV EDX,dword ptr [EBP + 0x86]      ; 00431334
    MOV EAX,dword ptr [EAX + 0x154]     ; 0043133a
    PUSH EDX                            ; 00431340
    CALL dword ptr [EAX + 0x128]        ; 00431341
    ADD ESP,0xc                         ; 00431347
    INC ESI                             ; 0043134a
        ;   Label: LAB_0043134a
    ADD EBX,0x78                        ; 0043134b
    CMP ESI,0x2                         ; 0043134e
    JL 0x00431323                       ; 00431351
        ;   XREF to: 00431323 (CONDITIONAL_JUMP)  ; LAB_00431323
    MOV EAX,dword ptr [EBP + 0x8a]      ; 00431353
    MOV EBX,dword ptr [EBP + 0x92]      ; 00431359
    MOV dword ptr [EAX + 0x158],EBX     ; 0043135f
    LEA ESP,[EBP + 0x72]                ; 00431365
    POP EBP                             ; 00431368
    POP EDI                             ; 00431369
    POP ESI                             ; 0043136a
    POP EBX                             ; 0043136b
    RET                                 ; 0043136c
    IMUL EAX,dword ptr [EBX + 0x4],0x30 ; 0043136d
        ;   Label: LAB_0043136d
    ADD EAX,dword ptr [EBP + 0x62]      ; 00431371
    PUSH EAX                            ; 00431374
    LEA EAX,[EBX + 0x8]                 ; 00431375
    PUSH EAX                            ; 00431378
    LEA ESI,[EBP + -0x46]               ; 00431379
    LEA EDI,[EBP + -0x16]               ; 0043137c
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 0043137f
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 00431384
    LEA ESI,[EBP + -0x46]               ; 00431389
    LEA EAX,[EBP + -0x16]               ; 0043138c
    ADD ESP,0x8                         ; 0043138f
    MOVSD.REP ES:EDI,ESI                ; 00431392
    PUSH EAX                            ; 00431394
    LEA ESI,[EBP + 0x1a]                ; 00431395
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005b5930 ; 00431398
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_005b5930()
    ADD ESP,0x4                         ; 0043139d
    LEA EAX,[EBP + 0x26]                ; 004313a0
    PUSH EAX                            ; 004313a3
    MOV EAX,dword ptr [EBP + -0xa]      ; 004313a4
    MOV dword ptr [EBP + 0x32],EAX      ; 004313a7
    MOV EAX,dword ptr [EBP + 0x6]       ; 004313aa
    LEA EDI,[EBP + 0x26]                ; 004313ad
    MOV dword ptr [EBP + 0x36],EAX      ; 004313b0
    MOV EAX,dword ptr [EBP + 0x16]      ; 004313b3
    LEA ESI,[EBP + 0x1a]                ; 004313b6
    MOV dword ptr [EBP + 0x3a],EAX      ; 004313b9
    LEA EAX,[EBP + 0x3e]                ; 004313bc
    MOVSD ES:EDI,ESI                    ; 004313bf
    MOVSD ES:EDI,ESI                    ; 004313c0
    MOVSD ES:EDI,ESI                    ; 004313c1
    PUSH EAX                            ; 004313c2
    LEA EDI,[EBP + 0x3e]                ; 004313c3
    PUSH 0x7c623c                       ; 004313c6 | DAT_007c623c
    MOV EAX,dword ptr [EBP + 0x8a]      ; 004313cb
    LEA ESI,[EBP + 0x32]                ; 004313d1
    PUSH EAX                            ; 004313d4
    MOVSD ES:EDI,ESI                    ; 004313d5
    MOVSD ES:EDI,ESI                    ; 004313d6
    MOVSD ES:EDI,ESI                    ; 004313d7
    CALL core_bodypart.cpp_CBodyPart_addAttachedModel_FUN_0041aaa0 ; 004313d8
        ;   XREF to: 0041aaa0 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_addAttachedModel_FUN_0041aaa0(CBodyPart * this_ptr, char * model_name, CVector3f * position_offset, CVector3f * euler_angles)
    ADD ESP,0x10                        ; 004313dd
    JMP 0x004312ab                      ; 004313e0
        ;   XREF to: 004312ab (UNCONDITIONAL_JUMP)  ; LAB_004312ab
    MOV EDI,dword ptr [EBX + 0x4]       ; 004313e5
        ;   Label: LAB_004313e5
    TEST EDI,EDI                        ; 004313e8
    JL 0x004312fb                       ; 004313ea
        ;   XREF to: 004312fb (CONDITIONAL_JUMP)  ; LAB_004312fb
    IMUL EAX,EDI,0x30                   ; 004313f0
    ADD EAX,dword ptr [EBP + 0x66]      ; 004313f3
    PUSH EAX                            ; 004313f6
    LEA EAX,[EBX + 0x8]                 ; 004313f7
    PUSH EAX                            ; 004313fa
    LEA ESI,[EBP + 0x56]                ; 004313fb
    LEA EDI,[EBP + 0x4a]                ; 004313fe
    CALL core_xform.cpp_FUN_005b5080    ; 00431401
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[EBP + 0x56]                ; 00431406
    LEA EAX,[EBP + 0x4a]                ; 00431409
    ADD ESP,0x8                         ; 0043140c
    MOVSD ES:EDI,ESI                    ; 0043140f
    MOVSD ES:EDI,ESI                    ; 00431410
    MOVSD ES:EDI,ESI                    ; 00431411
    PUSH EAX                            ; 00431412
    MOV ESI,dword ptr [EBP + 0x8a]      ; 00431413
    PUSH ESI                            ; 00431419
    CALL core_bodypart.cpp_CBodyPart_addFire_FUN_0041ab20 ; 0043141a
        ;   XREF to: 0041ab20 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_addFire_FUN_0041ab20(CBodyPart * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 0043141f
    JMP 0x004312fb                      ; 00431422
        ;   XREF to: 004312fb (UNCONDITIONAL_JUMP)  ; LAB_004312fb

