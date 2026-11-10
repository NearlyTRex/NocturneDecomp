; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_zombiepr_cpp_FUN_0058efb0(CCharacter *param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_zombiepriest.cpp_FUN_0058d960 at 0058e5c0
;
; Referenced Globals:
;   TerminatedCString s_CTommyGun_005d8c28
;   undefined4 DAT_005d8c38
;   undefined4 DAT_005d8c40
;   undefined4 DAT_005d8c48
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_actor.cpp_isOfClass_FUN_0040c790
;   core_bodypart.cpp_FUN_00416bd0
;   core_bodypart.cpp_FUN_00416c50
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058efb0
        ;   Label: unkafter_zombiepr.cpp_FUN_0058efb0
    PUSH ESI                            ; 0058efb1
    PUSH EDI                            ; 0058efb2
    PUSH EBP                            ; 0058efb3
    MOV EBP,ESP                         ; 0058efb4
    SUB ESP,0xfc                        ; 0058efb6
    AND ESP,0xfffffff8                  ; 0058efbc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058efbf
    CMP dword ptr [EAX + 0xcdd8],0x0    ; 0058efc2
    JNZ 0x0058f341                      ; 0058efc9
        ;   XREF to: 0058f341 (CONDITIONAL_JUMP)  ; LAB_0058f341
    FLD float ptr [EAX + 0xd058]        ; 0058efcf
    FSUB float ptr [EBP + 0x18]         ; 0058efd5
    FST float ptr [EAX + 0xd058]        ; 0058efd8
    FLDZ                                ; 0058efde
    FCOMPP                              ; 0058efe0
    FNSTSW AX                           ; 0058efe2
    SAHF                                ; 0058efe4
    JC 0x0058f0c0                       ; 0058efe5
        ;   XREF to: 0058f0c0 (CONDITIONAL_JUMP)  ; LAB_0058f0c0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058efeb
        ;   Label: LAB_0058efeb
    MOV EAX,dword ptr [EAX + 0x2624]    ; 0058efee
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058eff4
    SHL EAX,0x2                         ; 0058eff7
    ADD EAX,EBX                         ; 0058effa
    CMP dword ptr [EAX + 0x2298],0x0    ; 0058effc
    JZ 0x0058f341                       ; 0058f003
        ;   XREF to: 0058f341 (CONDITIONAL_JUMP)  ; LAB_0058f341
    MOV EDI,dword ptr [EBX + 0x2628]    ; 0058f009
    TEST EDI,EDI                        ; 0058f00f
    JNZ 0x0058f341                      ; 0058f011
        ;   XREF to: 0058f341 (CONDITIONAL_JUMP)  ; LAB_0058f341
    FLD float ptr [EBX + 0xd05c]        ; 0058f017
    FLDZ                                ; 0058f01d
    FCOMPP                              ; 0058f01f
    FNSTSW AX                           ; 0058f021
    SAHF                                ; 0058f023
    JC 0x0058f0fe                       ; 0058f024
        ;   XREF to: 0058f0fe (CONDITIONAL_JUMP)  ; LAB_0058f0fe
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058f02a
    MOV EDX,dword ptr [EAX + 0xd060]    ; 0058f02d
    ADD EBX,0x20                        ; 0058f033
    TEST EDX,EDX                        ; 0058f036
    JNZ 0x0058f129                      ; 0058f038
        ;   XREF to: 0058f129 (CONDITIONAL_JUMP)  ; LAB_0058f129
    MOV dword ptr [ESP + 0xe4],EDI      ; 0058f03e
    MOV dword ptr [ESP + 0xec],EDI      ; 0058f045
    MOV dword ptr [ESP + 0xe8],EBX      ; 0058f04c
    MOV dword ptr [ESP + 0xf0],EDI      ; 0058f053
    MOV dword ptr [ESP + 0xf4],EDI      ; 0058f05a
    MOV EAX,[0x00603b28]                ; 0058f061 | g_CDemonSetPtr
        ;   Label: LAB_0058f061
    MOV EBX,dword ptr [ESP + 0xec]      ; 0058f066
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 0058f06d | g_CDemonSetInstance.actor_count
    JGE 0x0058f437                      ; 0058f073
        ;   XREF to: 0058f437 (CONDITIONAL_JUMP)  ; LAB_0058f437
    ADD EAX,dword ptr [ESP + 0xf0]      ; 0058f079
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 0058f080 | g_CDemonSetInstance.actors[0]
    PUSH EBX                            ; 0058f086
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058f087
    CALL dword ptr [EAX + 0x94]         ; 0058f08d
    ADD ESP,0x4                         ; 0058f093
    TEST EAX,EAX                        ; 0058f096
    JZ 0x0058f363                       ; 0058f098
        ;   XREF to: 0058f363 (CONDITIONAL_JUMP)  ; LAB_0058f363
    MOV EBX,dword ptr [ESP + 0xec]      ; 0058f09e
        ;   Label: LAB_0058f09e
    MOV ECX,dword ptr [ESP + 0xf0]      ; 0058f0a5
    INC EBX                             ; 0058f0ac
    ADD ECX,0x4                         ; 0058f0ad
    MOV dword ptr [ESP + 0xec],EBX      ; 0058f0b0
    MOV dword ptr [ESP + 0xf0],ECX      ; 0058f0b7
    JMP 0x0058f061                      ; 0058f0be
        ;   XREF to: 0058f061 (UNCONDITIONAL_JUMP)  ; LAB_0058f061
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058f0c0
        ;   Label: LAB_0058f0c0
    MOV ECX,dword ptr [EAX + 0xd054]    ; 0058f0c3
    PUSH 0x41200000                     ; 0058f0c9
    INC ECX                             ; 0058f0ce
    PUSH 0x40a00000                     ; 0058f0cf
    MOV dword ptr [EAX + 0xd054],ECX    ; 0058f0d4
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0058f0da
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x100],EAX     ; 0058f0df
    FLD float ptr [ESP + 0x100]         ; 0058f0e6
    ADD ESP,0x8                         ; 0058f0ed
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058f0f0
    FSTP float ptr [EAX + 0xd058]       ; 0058f0f3
    JMP 0x0058efeb                      ; 0058f0f9
        ;   XREF to: 0058efeb (UNCONDITIONAL_JUMP)  ; LAB_0058efeb
    FLD float ptr [EBX + 0xd05c]        ; 0058f0fe
        ;   Label: LAB_0058f0fe
    FSUB float ptr [EBP + 0x18]         ; 0058f104
    FST float ptr [EBX + 0xd05c]        ; 0058f107
    FLDZ                                ; 0058f10d
    FCOMPP                              ; 0058f10f
    FNSTSW AX                           ; 0058f111
    SAHF                                ; 0058f113
    JBE 0x0058f341                      ; 0058f114
        ;   XREF to: 0058f341 (CONDITIONAL_JUMP)  ; LAB_0058f341
    MOV dword ptr [EBX + 0xd05c],EDI    ; 0058f11a
    XOR EAX,EAX                         ; 0058f120
    MOV ESP,EBP                         ; 0058f122
    POP EBP                             ; 0058f124
    POP EDI                             ; 0058f125
    POP ESI                             ; 0058f126
    POP EBX                             ; 0058f127
    RET                                 ; 0058f128
    PUSH EDX                            ; 0058f129
        ;   Label: LAB_0058f129
    MOV ESI,dword ptr [EDX + 0x154]     ; 0058f12a
    CALL dword ptr [ESI + 0x94]         ; 0058f130
    ADD ESP,0x4                         ; 0058f136
    TEST EAX,EAX                        ; 0058f139
    JNZ 0x0058f2f3                      ; 0058f13b
        ;   XREF to: 0058f2f3 (CONDITIONAL_JUMP)  ; LAB_0058f2f3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058f141
    MOV EAX,dword ptr [EAX + 0xd060]    ; 0058f144
    FLD float ptr [EBX]                 ; 0058f14a
    FSUB float ptr [EAX + 0x20]         ; 0058f14c
    FMUL ST0                            ; 0058f14f
    FLD float ptr [EBX + 0x8]           ; 0058f151
    FSUB float ptr [EAX + 0x28]         ; 0058f154
    FMUL ST0                            ; 0058f157
    FADDP                               ; 0058f159
    FSQRT                               ; 0058f15b
    FMUL double ptr [0x005d8c38]        ; 0058f15d | DAT_005d8c38
    FSUBR double ptr [0x005d8c40]       ; 0058f163 | DAT_005d8c40
    FST float ptr [ESP + 0x4]           ; 0058f169
    FLD1                                ; 0058f16d
    FCOMPP                              ; 0058f16f
    FNSTSW AX                           ; 0058f171
    SAHF                                ; 0058f173
    JBE 0x0058f17e                      ; 0058f174
        ;   XREF to: 0058f17e (CONDITIONAL_JUMP)  ; LAB_0058f17e
    MOV dword ptr [ESP + 0x4],0x3f800000 ; 0058f176
    FLD float ptr [EBP + 0x18]          ; 0058f17e
        ;   Label: LAB_0058f17e
    FMUL float ptr [ESP + 0x4]          ; 0058f181
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058f185
    FADD float ptr [EAX + 0xd05c]       ; 0058f188
    MOV ESI,0xffffffff                  ; 0058f18e
    FST float ptr [EAX + 0xd05c]        ; 0058f193
    FLDZ                                ; 0058f199
    FCOMPP                              ; 0058f19b
    FNSTSW AX                           ; 0058f19d
    SAHF                                ; 0058f19f
    JBE 0x0058f2de                      ; 0058f1a0
        ;   XREF to: 0058f2de (CONDITIONAL_JUMP)  ; LAB_0058f2de
    MOV ECX,dword ptr [EBP + 0x14]      ; 0058f1a6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058f1a9
    PUSH ECX                            ; 0058f1ac
    MOV EAX,dword ptr [EAX + 0xd060]    ; 0058f1ad
    PUSH EAX                            ; 0058f1b3
    MOV EBX,dword ptr [EAX + 0x154]     ; 0058f1b4
    CALL dword ptr [EBX + 0x84]         ; 0058f1ba
    ADD ESP,0x8                         ; 0058f1c0
    CMP EAX,0x3                         ; 0058f1c3
    JNZ 0x0058f2de                      ; 0058f1c6
        ;   XREF to: 0058f2de (CONDITIONAL_JUMP)  ; LAB_0058f2de
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058f1cc
    MOV EBX,dword ptr [EBX + 0xd060]    ; 0058f1cf
    PUSH EBX                            ; 0058f1d5
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058f1d6
    LEA ESI,[ESP + 0x4c]                ; 0058f1dc
    LEA EDI,[ESP + 0x34]                ; 0058f1e0
    CALL dword ptr [EAX + 0x1c]         ; 0058f1e4
    MOV ECX,0x6                         ; 0058f1e7
    ADD ESP,0x4                         ; 0058f1ec
    LEA EAX,[ESP + 0xe0]                ; 0058f1ef
    LEA ESI,[ESP + 0x48]                ; 0058f1f6
    PUSH EAX                            ; 0058f1fa
    MOVSD.REP ES:EDI,ESI                ; 0058f1fb
    LEA EAX,[ESP + 0x40]                ; 0058f1fd
    MOV ESI,0x3f000000                  ; 0058f201
    PUSH EAX                            ; 0058f206
    LEA EAX,[ESP + 0x38]                ; 0058f207
    MOV dword ptr [ESP + 0xe8],ESI      ; 0058f20b
    PUSH EAX                            ; 0058f212
    LEA ESI,[ESP + 0x6c]                ; 0058f213
    LEA EDI,[ESP + 0xc0]                ; 0058f217
    CALL core_bodypart.cpp_FUN_00416c50 ; 0058f21e
        ;   XREF to: 00416c50 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_00416c50()
    LEA ESI,[ESP + 0x6c]                ; 0058f223
    ADD ESP,0x8                         ; 0058f227
    LEA EAX,[ESP + 0xb8]                ; 0058f22a
    MOVSD ES:EDI,ESI                    ; 0058f231
    MOVSD ES:EDI,ESI                    ; 0058f232
    MOVSD ES:EDI,ESI                    ; 0058f233
    PUSH EAX                            ; 0058f234
    LEA ESI,[ESP + 0xb0]                ; 0058f235
    LEA EDI,[ESP + 0x74]                ; 0058f23c
    CALL core_bodypart.cpp_FUN_00416bd0 ; 0058f240
        ;   XREF to: 00416bd0 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_00416bd0()
    LEA ESI,[ESP + 0xb0]                ; 0058f245
    ADD ESP,0x8                         ; 0058f24c
    LEA EAX,[ESP + 0xcc]                ; 0058f24f
    FLD float ptr [ESP + 0x38]          ; 0058f256
    MOVSD ES:EDI,ESI                    ; 0058f25a
    MOVSD ES:EDI,ESI                    ; 0058f25b
    MOVSD ES:EDI,ESI                    ; 0058f25c
    PUSH EAX                            ; 0058f25d
    LEA EDI,[ESP + 0xd0]                ; 0058f25e
    FADD double ptr [0x005d8c48]        ; 0058f265 | DAT_005d8c48
    LEA ESI,[ESP + 0x70]                ; 0058f26b
    FSTP float ptr [ESP + 0x78]         ; 0058f26f
    MOVSD ES:EDI,ESI                    ; 0058f273
    MOVSD ES:EDI,ESI                    ; 0058f274
    MOVSD ES:EDI,ESI                    ; 0058f275
    PUSH EBX                            ; 0058f276
    LEA ESI,[ESP + 0xc8]                ; 0058f277
    CALL core_actor.cpp_FUN_00408b80    ; 0058f27e
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0058f283
    LEA EDI,[ESP + 0x90]                ; 0058f286
    PUSH 0x3d0efa35                     ; 0058f28d
    XOR EAX,EAX                         ; 0058f292
    PUSH 0x3e99999a                     ; 0058f294
    MOV dword ptr [ESP + 0x90],EAX      ; 0058f299
    MOV dword ptr [ESP + 0x94],EAX      ; 0058f2a0
    LEA EAX,[ESP + 0x8c]                ; 0058f2a7
    LEA ESI,[ESP + 0xc8]                ; 0058f2ae
    PUSH EAX                            ; 0058f2b5
    XOR EDX,EDX                         ; 0058f2b6
    LEA EAX,[ESP + 0x9c]                ; 0058f2b8
    PUSH EDX                            ; 0058f2bf
    MOVSD ES:EDI,ESI                    ; 0058f2c0
    MOVSD ES:EDI,ESI                    ; 0058f2c1
    MOVSD ES:EDI,ESI                    ; 0058f2c2
    PUSH EAX                            ; 0058f2c3
    MOV ECX,dword ptr [EBP + 0x14]      ; 0058f2c4
    MOV EDI,0x3fc00000                  ; 0058f2c7
    PUSH ECX                            ; 0058f2cc
    MOV dword ptr [ESP + 0x9c],EDI      ; 0058f2cd
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 0058f2d4
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0058f2d9
    MOV ESI,EAX                         ; 0058f2dc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058f2de
        ;   Label: LAB_0058f2de
    ADD EAX,0x158                       ; 0058f2e1
    TEST ESI,ESI                        ; 0058f2e6
    JL 0x0058f31d                       ; 0058f2e8
        ;   XREF to: 0058f31d (CONDITIONAL_JUMP)  ; LAB_0058f31d
    JG 0x0058f34a                       ; 0058f2ea
        ;   XREF to: 0058f34a (CONDITIONAL_JUMP)  ; LAB_0058f34a
    MOV EAX,0x1                         ; 0058f2ec
    JMP 0x0058f343                      ; 0058f2f1
        ;   XREF to: 0058f343 (UNCONDITIONAL_JUMP)  ; LAB_0058f343
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058f2f3
        ;   Label: LAB_0058f2f3
    PUSH 0x1                            ; 0058f2f6
    ADD EAX,0x158                       ; 0058f2f8
    PUSH 0x1                            ; 0058f2fd
    MOV dword ptr [EAX + 0xcf08],EDI    ; 0058f2ff
    PUSH EAX                            ; 0058f305
    MOV dword ptr [EAX + 0xcf04],EDI    ; 0058f306
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058f30c
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058f311
    XOR EAX,EAX                         ; 0058f314
    MOV ESP,EBP                         ; 0058f316
    POP EBP                             ; 0058f318
    POP EDI                             ; 0058f319
    POP ESI                             ; 0058f31a
    POP EBX                             ; 0058f31b
    RET                                 ; 0058f31c
    PUSH 0x1                            ; 0058f31d
        ;   Label: LAB_0058f31d
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058f31f
    PUSH 0x1                            ; 0058f322
    MOV dword ptr [EBX + 0xd060],0x0    ; 0058f324
    PUSH EAX                            ; 0058f32e
    MOV dword ptr [EBX + 0xd05c],0x41a00000 ; 0058f32f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058f339
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058f33e
    XOR EAX,EAX                         ; 0058f341
        ;   Label: LAB_0058f341
    MOV ESP,EBP                         ; 0058f343
        ;   Label: LAB_0058f343
    POP EBP                             ; 0058f345
    POP EDI                             ; 0058f346
    POP ESI                             ; 0058f347
    POP EBX                             ; 0058f348
    RET                                 ; 0058f349
    PUSH 0x1                            ; 0058f34a
        ;   Label: LAB_0058f34a
    PUSH 0x7                            ; 0058f34c
    PUSH EAX                            ; 0058f34e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058f34f
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 0058f354
    ADD ESP,0xc                         ; 0058f359
    MOV ESP,EBP                         ; 0058f35c
    POP EBP                             ; 0058f35e
    POP EDI                             ; 0058f35f
    POP ESI                             ; 0058f360
    POP EBX                             ; 0058f361
    RET                                 ; 0058f362
    PUSH 0x5d8c28                       ; 0058f363 | = "CTommyGun"
        ;   Label: LAB_0058f363
    PUSH EBX                            ; 0058f368
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 0058f369
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0058f36e
    TEST EAX,EAX                        ; 0058f371
    JZ 0x0058f09e                       ; 0058f373
        ;   XREF to: 0058f09e (CONDITIONAL_JUMP)  ; LAB_0058f09e
    LEA EAX,[EBX + 0x20]                ; 0058f379
    MOV ESI,dword ptr [ESP + 0xe8]      ; 0058f37c
    LEA EDI,[ESP + 0x78]                ; 0058f383
    FLD float ptr [EAX]                 ; 0058f387
    FLD float ptr [EAX + 0x4]           ; 0058f389
    FLD float ptr [EAX + 0x8]           ; 0058f38c
    FXCH ST2                            ; 0058f38f
    FSUB float ptr [ESI]                ; 0058f391
    FXCH                                ; 0058f393
    FSUB float ptr [ESI + 0x4]          ; 0058f395
    FXCH ST2                            ; 0058f398
    FSUB float ptr [ESI + 0x8]          ; 0058f39a
    FXCH                                ; 0058f39d
    FSTP float ptr [ESP + 0x9c]         ; 0058f39f
    FXCH                                ; 0058f3a6
    FSTP float ptr [ESP + 0xa0]         ; 0058f3a8
    LEA ESI,[ESP + 0x9c]                ; 0058f3af
    FSTP float ptr [ESP + 0xa4]         ; 0058f3b6
    MOVSD ES:EDI,ESI                    ; 0058f3bd
    MOVSD ES:EDI,ESI                    ; 0058f3be
    MOVSD ES:EDI,ESI                    ; 0058f3bf
    FLD float ptr [ESP + 0x7c]          ; 0058f3c0
    FMUL ST0                            ; 0058f3c4
    FST float ptr [ESP + 0x7c]          ; 0058f3c6
    FMUL float ptr [ESP + 0x7c]         ; 0058f3ca
    FST float ptr [ESP + 0x7c]          ; 0058f3ce
    FMUL float ptr [ESP + 0x7c]         ; 0058f3d2
    FLD float ptr [ESP + 0x78]          ; 0058f3d6
    FMUL ST0                            ; 0058f3da
    FADDP                               ; 0058f3dc
    FLD float ptr [ESP + 0x80]          ; 0058f3de
    FMUL ST0                            ; 0058f3e5
    FADDP                               ; 0058f3e7
    FSQRT                               ; 0058f3e9
    FST float ptr [ESP]                 ; 0058f3eb
    FCOMP double ptr [0x005d8c40]       ; 0058f3ee | DAT_005d8c40
    FNSTSW AX                           ; 0058f3f4
    SAHF                                ; 0058f3f6
    JC 0x0058f09e                       ; 0058f3f7
        ;   XREF to: 0058f09e (CONDITIONAL_JUMP)  ; LAB_0058f09e
    CMP dword ptr [ESP],0x41700000      ; 0058f3fd
    JG 0x0058f09e                       ; 0058f404
        ;   XREF to: 0058f09e (CONDITIONAL_JUMP)  ; LAB_0058f09e
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0058f40a
    MOV dword ptr [ESP + EAX*0x1 + 0x8],EBX ; 0058f411
    MOV EBX,dword ptr [ESP + 0xe4]      ; 0058f415
    LEA ECX,[EAX + 0x4]                 ; 0058f41c
    INC EBX                             ; 0058f41f
    MOV dword ptr [ESP + 0xf4],ECX      ; 0058f420
    MOV dword ptr [ESP + 0xe4],EBX      ; 0058f427
    CMP ECX,0x28                        ; 0058f42e
    JL 0x0058f09e                       ; 0058f431
        ;   XREF to: 0058f09e (CONDITIONAL_JUMP)  ; LAB_0058f09e
    MOV EDI,dword ptr [ESP + 0xe4]      ; 0058f437
        ;   Label: LAB_0058f437
    CMP EDI,0x1                         ; 0058f43e
    JL 0x0058f341                       ; 0058f441
        ;   XREF to: 0058f341 (CONDITIONAL_JUMP)  ; LAB_0058f341
    LEA EAX,[EDI + -0x1]                ; 0058f447
    PUSH EAX                            ; 0058f44a
    PUSH 0x0                            ; 0058f44b
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 0058f44d
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0058f452
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058f455
    PUSH 0x1                            ; 0058f458
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0xc] ; 0058f45a
    MOV dword ptr [EBX + 0xd05c],0xc2200000 ; 0058f45e
    PUSH 0x1                            ; 0058f468
    MOV EDX,dword ptr [EBX + 0xd054]    ; 0058f46a
    MOV dword ptr [EBX + 0xd060],EAX    ; 0058f470
    LEA EAX,[EBX + 0x158]               ; 0058f476
    INC EDX                             ; 0058f47c
    PUSH EAX                            ; 0058f47d
    MOV dword ptr [EBX + 0xd054],EDX    ; 0058f47e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058f484
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 0058f489
    ADD ESP,0xc                         ; 0058f48e
    MOV ESP,EBP                         ; 0058f491
    POP EBP                             ; 0058f493
    POP EDI                             ; 0058f494
    POP ESI                             ; 0058f495
    POP EBX                             ; 0058f496
    RET                                 ; 0058f497

