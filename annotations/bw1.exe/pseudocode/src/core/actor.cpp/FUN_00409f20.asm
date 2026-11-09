; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_actor_cpp_FUN_00409f20(CDemonActor *param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 s_CHero_005d25e0+1
;   TerminatedCString s_s_causing_5_2f_damage_to_005d25e7
;   TerminatedCString s_CHero_005d2606
;   TerminatedCString s_s_causing_5_2f_damage_to_005d260c
;   undefined4 DAT_005d2631
;   undefined4 DAT_005d2639
;   CConsole* g_CConsolePtr = 007db5f0
;   CGore* g_CGorePtr = 01cd0e3c
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CCharacterClassInfo.name_hash
;   CConsole g_CConsoleInstance
;   undefined4 g_CCrateClassInfo.name_hash
;   undefined4 g_CFlameCanClassInfo.name_hash
;   undefined4 g_CGlassClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   ... and 11 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_FUN_0040c550
;   core_box.cpp_FUN_00421b90
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_crate.cpp_FUN_00449600
;   core_flamecan.cpp_CFlameCan_ignite_FUN_004b9180
;   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004e3a40
;   core_glass.cpp_FUN_004e34b0
;   core_gore.cpp_FUN_004e6060
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0
;   core_setcolid.cpp_FUN_00557300
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409f20
        ;   Label: core_actor.cpp_FUN_00409f20
    PUSH ESI                            ; 00409f21
    PUSH EDI                            ; 00409f22
    PUSH EBP                            ; 00409f23
    MOV EBP,ESP                         ; 00409f24
    SUB ESP,0x344                       ; 00409f26
    AND ESP,0xfffffff8                  ; 00409f2c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00409f2f
    XOR EDX,EDX                         ; 00409f32
    MOV ECX,dword ptr [EBP + 0x18]      ; 00409f34
    MOV dword ptr [ESP + 0x314],EDX     ; 00409f37
    CMP ECX,0x1                         ; 00409f3e
    XOR EDI,EDI                         ; 00409f41
    MOV dword ptr [ESP + 0x220],EDI     ; 00409f43
    MOV dword ptr [ESP + 0x224],EDI     ; 00409f4a
    PUSH EBX                            ; 00409f51
    MOV EAX,dword ptr [EBX + 0x154]     ; 00409f52
    LEA ESI,[ESP + 0x1dc]               ; 00409f58
    LEA EDI,[ESP + 0x1f4]               ; 00409f5f
    CALL dword ptr [EAX + 0x1c]         ; 00409f66
    MOV ECX,0x6                         ; 00409f69
    LEA ESI,[ESP + 0x1dc]               ; 00409f6e
    ADD ESP,0x4                         ; 00409f75
    MOVSD.REP ES:EDI,ESI                ; 00409f78
    MOV EAX,dword ptr [ESP + 0x204]     ; 00409f7a
    MOV dword ptr [ESP + 0x228],EAX     ; 00409f81
    LEA EAX,[ESP + 0x220]               ; 00409f88
    PUSH EAX                            ; 00409f8f
    PUSH EBX                            ; 00409f90
    LEA ESI,[ESP + 0x21c]               ; 00409f91
    LEA EDI,[ESP + 0x240]               ; 00409f98
    CALL core_actor.cpp_FUN_00408b40    ; 00409f9f
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00409fa4
    LEA ESI,[ESP + 0x214]               ; 00409fa7
    MOV EDX,dword ptr [ESP + 0x314]     ; 00409fae
    MOVSD ES:EDI,ESI                    ; 00409fb5
    MOVSD ES:EDI,ESI                    ; 00409fb6
    MOVSD ES:EDI,ESI                    ; 00409fb7
    CMP EDX,0x1                         ; 00409fb8
    JNZ 0x0040a09c                      ; 00409fbb
        ;   XREF to: 0040a09c (CONDITIONAL_JUMP)  ; LAB_0040a09c
    MOV EDI,0xc0400000                  ; 00409fc1
    LEA EAX,[ESP + 0x2bc]               ; 00409fc6
    LEA ESI,[ESP + 0x2e0]               ; 00409fcd
    XOR ECX,ECX                         ; 00409fd4
    PUSH EAX                            ; 00409fd6
    MOV dword ptr [ESP + 0x2c0],ECX     ; 00409fd7
    MOV dword ptr [ESP + 0x2c4],ECX     ; 00409fde
    PUSH EBX                            ; 00409fe5
    MOV dword ptr [ESP + 0x2cc],EDI     ; 00409fe6
    LEA EDI,[ESP + 0x24c]               ; 00409fed
    CALL core_actor.cpp_FUN_00408ac0    ; 00409ff4
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0x2e8]               ; 00409ff9
    LEA EAX,[ESP + 0x2a0]               ; 0040a000
    ADD ESP,0x8                         ; 0040a007
    LEA EDX,[ESP + 0x22c]               ; 0040a00a
    FLD float ptr [ESP + 0x238]         ; 0040a011
    FLD float ptr [ESP + 0x23c]         ; 0040a018
    MOVSD ES:EDI,ESI                    ; 0040a01f
    MOVSD ES:EDI,ESI                    ; 0040a020
    MOVSD ES:EDI,ESI                    ; 0040a021
    FLD float ptr [ESP + 0x240]         ; 0040a022
    LEA EDI,[ESP + 0x298]               ; 0040a029
    LEA ESI,[ESP + 0x208]               ; 0040a030
    FXCH ST2                            ; 0040a037
    FADD float ptr [ESP + 0x244]        ; 0040a039
    FXCH                                ; 0040a040
    FADD float ptr [ESP + 0x248]        ; 0040a042
    FXCH ST2                            ; 0040a049
    FADD float ptr [ESP + 0x24c]        ; 0040a04b
    FXCH                                ; 0040a052
    FSTP float ptr [ESP + 0x208]        ; 0040a054
    FXCH                                ; 0040a05b
    FSTP float ptr [ESP + 0x20c]        ; 0040a05d
    FSTP float ptr [ESP + 0x210]        ; 0040a064
    MOVSD ES:EDI,ESI                    ; 0040a06b
    MOVSD ES:EDI,ESI                    ; 0040a06c
    MOVSD ES:EDI,ESI                    ; 0040a06d
    CMP EDX,EAX                         ; 0040a06e
    JZ 0x0040a09c                       ; 0040a070
        ;   XREF to: 0040a09c (CONDITIONAL_JUMP)  ; LAB_0040a09c
    MOV EAX,dword ptr [ESP + 0x298]     ; 0040a072
    MOV dword ptr [ESP + 0x22c],EAX     ; 0040a079
    MOV EAX,dword ptr [ESP + 0x29c]     ; 0040a080
    MOV dword ptr [ESP + 0x230],EAX     ; 0040a087
    MOV EAX,dword ptr [ESP + 0x2a0]     ; 0040a08e
    MOV dword ptr [ESP + 0x234],EAX     ; 0040a095
    MOV EAX,0x40000000                  ; 0040a09c
        ;   Label: LAB_0040a09c
    MOV ESI,0x3f800000                  ; 0040a0a1
    LEA EDI,[ESP + 0x2c8]               ; 0040a0a6
    MOV dword ptr [ESP + 0x328],EAX     ; 0040a0ad
    LEA EAX,[ESP + 0x304]               ; 0040a0b4
    XOR EDX,EDX                         ; 0040a0bb
    PUSH EAX                            ; 0040a0bd
    MOV dword ptr [ESP + 0x308],EDX     ; 0040a0be
    MOV dword ptr [ESP + 0x310],ESI     ; 0040a0c5
    PUSH EBX                            ; 0040a0cc
    LEA ESI,[ESP + 0x270]               ; 0040a0cd
    MOV dword ptr [ESP + 0x310],EDX     ; 0040a0d4
    CALL core_actor.cpp_FUN_00408ac0    ; 0040a0db
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0x270]               ; 0040a0e0
    ADD ESP,0x8                         ; 0040a0e7
    MOVSD ES:EDI,ESI                    ; 0040a0ea
    MOVSD ES:EDI,ESI                    ; 0040a0eb
    MOVSD ES:EDI,ESI                    ; 0040a0ec
    PUSH EBX                            ; 0040a0ed
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040a0ee
    CALL dword ptr [EAX + 0x94]         ; 0040a0f4
    ADD ESP,0x4                         ; 0040a0fa
    MOV EDI,dword ptr [ESP + 0x314]     ; 0040a0fd
    MOV dword ptr [ESP + 0x310],EAX     ; 0040a104
    TEST EDI,EDI                        ; 0040a10b
    JNZ 0x0040a50e                      ; 0040a10d
        ;   XREF to: 0040a50e (CONDITIONAL_JUMP)  ; LAB_0040a50e
    MOV dword ptr [ESP + 0x320],EDI     ; 0040a113
    MOV dword ptr [ESP + 0x324],EDI     ; 0040a11a
    MOV EAX,[0x00622c18]                ; 0040a121 | g_CDemonSetPtr
        ;   Label: LAB_0040a121
    MOV EDX,dword ptr [ESP + 0x320]     ; 0040a126
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 0040a12d | g_CDemonSetInstance.field1364324_0x14d164
    JGE 0x0040a50e                      ; 0040a133
        ;   XREF to: 0040a50e (CONDITIONAL_JUMP)  ; LAB_0040a50e
    ADD EAX,dword ptr [ESP + 0x324]     ; 0040a139
    MOV EDI,dword ptr [EAX + 0x14d168]  ; 0040a140 | g_CDemonSetInstance.field1364328_0x14d168
    CMP EDI,EBX                         ; 0040a146
    JNZ 0x0040a16c                      ; 0040a148
        ;   XREF to: 0040a16c (CONDITIONAL_JUMP)  ; LAB_0040a16c
    MOV EDI,dword ptr [ESP + 0x320]     ; 0040a14a
        ;   Label: LAB_0040a14a
    MOV ESI,dword ptr [ESP + 0x324]     ; 0040a151
    INC EDI                             ; 0040a158
    ADD ESI,0x4                         ; 0040a159
    MOV dword ptr [ESP + 0x320],EDI     ; 0040a15c
    MOV dword ptr [ESP + 0x324],ESI     ; 0040a163
    JMP 0x0040a121                      ; 0040a16a
        ;   XREF to: 0040a121 (UNCONDITIONAL_JUMP)  ; LAB_0040a121
    CMP EDI,dword ptr [ESP + 0x310]     ; 0040a16c
        ;   Label: LAB_0040a16c
    JZ 0x0040a14a                       ; 0040a173
        ;   XREF to: 0040a14a (CONDITIONAL_JUMP)  ; LAB_0040a14a
    MOV EDX,dword ptr [0x007c637c]      ; 0040a175 | g_CCharacterClassInfo.name_hash
    PUSH EDX                            ; 0040a17b
    PUSH EDI                            ; 0040a17c
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0040a17d
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 0040a182
    MOV ESI,EAX                         ; 0040a185
    TEST EAX,EAX                        ; 0040a187
    JZ 0x0040a2a4                       ; 0040a189
        ;   XREF to: 0040a2a4 (CONDITIONAL_JUMP)  ; LAB_0040a2a4
    CMP dword ptr [ESP + 0x310],0x0     ; 0040a18f
    JZ 0x0040a1c6                       ; 0040a197
        ;   XREF to: 0040a1c6 (CONDITIONAL_JUMP)  ; LAB_0040a1c6
    PUSH EAX                            ; 0040a199
    MOV EDI,dword ptr [EAX + 0x154]     ; 0040a19a
    CALL dword ptr [EDI + 0xe0]         ; 0040a1a0
    ADD ESP,0x4                         ; 0040a1a6
    TEST EAX,EAX                        ; 0040a1a9
    JZ 0x0040a1c6                       ; 0040a1ab
        ;   XREF to: 0040a1c6 (CONDITIONAL_JUMP)  ; LAB_0040a1c6
    PUSH 0x5d25e1                       ; 0040a1ad | s_CHero_005d25e0+1
    MOV EDI,dword ptr [ESP + 0x314]     ; 0040a1b2
    PUSH EDI                            ; 0040a1b9
    CALL core_actor.cpp_FUN_0040c550    ; 0040a1ba
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0040a1bf
    TEST EAX,EAX                        ; 0040a1c2
    JNZ 0x0040a14a                      ; 0040a1c4
        ;   XREF to: 0040a14a (CONDITIONAL_JUMP)  ; LAB_0040a14a
    MOV dword ptr [ESP + 0x328],0x40000000 ; 0040a1c6
        ;   Label: LAB_0040a1c6
    LEA EAX,[ESP + 0x100]               ; 0040a1d1
    PUSH EAX                            ; 0040a1d8
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 0040a1d9
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0040a1de
    PUSH ESI                            ; 0040a1e1
    LEA EAX,[ESP + 0x104]               ; 0040a1e2
    PUSH EAX                            ; 0040a1e9
    MOV ECX,dword ptr [EBP + 0x18]      ; 0040a1ea
    PUSH ECX                            ; 0040a1ed
    MOV EDX,dword ptr [EBX + 0x154]     ; 0040a1ee
    PUSH EBX                            ; 0040a1f4
    CALL dword ptr [EDX + 0x7c]         ; 0040a1f5
    ADD ESP,0x10                        ; 0040a1f8
    LEA EAX,[ESP + 0x100]               ; 0040a1fb
    PUSH EAX                            ; 0040a202
    LEA EAX,[ESP + 0x23c]               ; 0040a203
    PUSH 0x40000000                     ; 0040a20a
    PUSH EAX                            ; 0040a20f
    MOV EDI,dword ptr [ESI + 0x154]     ; 0040a210
    PUSH ESI                            ; 0040a216
    CALL dword ptr [EDI + 0x100]        ; 0040a217
    ADD ESP,0x10                        ; 0040a21d
    FLDZ                                ; 0040a220
    FLD float ptr [ESP + 0x104]         ; 0040a222
    FSTP double ptr [ESP + 0x8]         ; 0040a229
    FCOMP double ptr [ESP + 0x8]        ; 0040a22d
    FNSTSW AX                           ; 0040a231
    SAHF                                ; 0040a233
    JNC 0x0040a14a                      ; 0040a234
        ;   XREF to: 0040a14a (CONDITIONAL_JUMP)  ; LAB_0040a14a
    FLD double ptr [ESP + 0x8]          ; 0040a23a
    FMUL double ptr [0x005d2631]        ; 0040a23e | DAT_005d2631
    MOV EDI,dword ptr [ESI + 0x27a0]    ; 0040a244
    FLD1                                ; 0040a24a
    FADDP                               ; 0040a24c
    PUSH EDI                            ; 0040a24e
    CALL crt_math.c_round_FUN_005c03a0  ; 0040a24f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x344]       ; 0040a254
    MOV EAX,dword ptr [ESP + 0x344]     ; 0040a25b
    PUSH EAX                            ; 0040a262
    LEA EAX,[ESP + 0x2d0]               ; 0040a263
    PUSH EAX                            ; 0040a26a
    LEA EAX,[ESP + 0x244]               ; 0040a26b
    PUSH EAX                            ; 0040a272
    MOV EDX,dword ptr [0x0061dca4]      ; 0040a273 | g_CGorePtr
    PUSH EDX                            ; 0040a279
    CALL core_gore.cpp_FUN_004e6060     ; 0040a27a
        ;   XREF to: 004e6060 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004e6060(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 0040a27f
    PUSH ESI                            ; 0040a282
    LEA EAX,[ESP + 0x104]               ; 0040a283
    PUSH EAX                            ; 0040a28a
    MOV ECX,dword ptr [EBP + 0x18]      ; 0040a28b
    PUSH ECX                            ; 0040a28e
    MOV EDX,dword ptr [EBX + 0x154]     ; 0040a28f
    PUSH EBX                            ; 0040a295
    CALL dword ptr [EDX + 0x80]         ; 0040a296
    ADD ESP,0x10                        ; 0040a29c
    JMP 0x0040a14a                      ; 0040a29f
        ;   XREF to: 0040a14a (UNCONDITIONAL_JUMP)  ; LAB_0040a14a
    MOV ECX,dword ptr [0x02c8ae44]      ; 0040a2a4 | g_CTriggerClassInfo.name_hash
        ;   Label: LAB_0040a2a4
    PUSH ECX                            ; 0040a2aa
    PUSH EDI                            ; 0040a2ab
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0040a2ac
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV dword ptr [ESP + 0x340],EAX     ; 0040a2b1
    ADD ESP,0x8                         ; 0040a2b8
    TEST EAX,EAX                        ; 0040a2bb
    JZ 0x0040a3e8                       ; 0040a2bd
        ;   XREF to: 0040a3e8 (CONDITIONAL_JUMP)  ; LAB_0040a3e8
    PUSH EBX                            ; 0040a2c3
    PUSH EAX                            ; 0040a2c4
    CALL core_trigger.cpp_FUN_0059bdf0  ; 0040a2c5
        ;   XREF to: 0059bdf0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_FUN_0059bdf0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0040a2ca
    TEST EAX,EAX                        ; 0040a2cd
    JZ 0x0040a14a                       ; 0040a2cf
        ;   XREF to: 0040a14a (CONDITIONAL_JUMP)  ; LAB_0040a14a
    LEA EAX,[ESP + 0x238]               ; 0040a2d5
    PUSH dword ptr [ESP + 0x328]        ; 0040a2dc
    PUSH EAX                            ; 0040a2e3
    MOV ESI,dword ptr [ESP + 0x340]     ; 0040a2e4
    PUSH ESI                            ; 0040a2eb
    LEA ESI,[ESP + 0x2e0]               ; 0040a2ec
    LEA EDI,[ESP + 0x304]               ; 0040a2f3
    CALL core_actor.cpp_FUN_00408bb0    ; 0040a2fa
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x2e0]               ; 0040a2ff
    ADD ESP,0x8                         ; 0040a306
    LEA EAX,[ESP + 0x2fc]               ; 0040a309
    MOVSD ES:EDI,ESI                    ; 0040a310
    MOVSD ES:EDI,ESI                    ; 0040a311
    MOVSD ES:EDI,ESI                    ; 0040a312
    PUSH EAX                            ; 0040a313
    MOV EDI,dword ptr [ESP + 0x340]     ; 0040a314
    MOV EAX,dword ptr [ESP + 0x340]     ; 0040a31b
    PUSH EDI                            ; 0040a322
    MOV EAX,dword ptr [EAX + 0x154]     ; 0040a323
    LEA ESI,[ESP + 0x19c]               ; 0040a329
    CALL dword ptr [EAX + 0x1c]         ; 0040a330
    MOV ECX,0x6                         ; 0040a333
    LEA EDI,[ESP + 0x1cc]               ; 0040a338
    ADD ESP,0x4                         ; 0040a33f
    LEA EAX,[ESP + 0x1c8]               ; 0040a342
    LEA ESI,[ESP + 0x198]               ; 0040a349
    PUSH EAX                            ; 0040a350
    MOVSD.REP ES:EDI,ESI                ; 0040a351
    CALL core_box.cpp_FUN_00421b90      ; 0040a353
        ;   XREF to: 00421b90 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_00421b90()
    ADD ESP,0xc                         ; 0040a358
    TEST EAX,EAX                        ; 0040a35b
    JZ 0x0040a14a                       ; 0040a35d
        ;   XREF to: 0040a14a (CONDITIONAL_JUMP)  ; LAB_0040a14a
    LEA EAX,[ESP + 0x10]                ; 0040a363
    PUSH EAX                            ; 0040a367
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 0040a368
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0040a36d
    MOV EAX,dword ptr [ESP + 0x338]     ; 0040a370
    PUSH EAX                            ; 0040a377
    LEA EAX,[ESP + 0x14]                ; 0040a378
    PUSH EAX                            ; 0040a37c
    MOV EDX,dword ptr [EBP + 0x18]      ; 0040a37d
    PUSH EDX                            ; 0040a380
    MOV ESI,dword ptr [EBX + 0x154]     ; 0040a381
    PUSH EBX                            ; 0040a387
    CALL dword ptr [ESI + 0x7c]         ; 0040a388
    ADD ESP,0x10                        ; 0040a38b
    MOV ECX,dword ptr [ESP + 0x338]     ; 0040a38e
    PUSH ECX                            ; 0040a395
    FLD float ptr [ESP + 0x18]          ; 0040a396
    SUB ESP,0x8                         ; 0040a39a
    FSTP double ptr [ESP]               ; 0040a39d
    PUSH EBX                            ; 0040a3a0
    PUSH 0x5d25e7                       ; 0040a3a1 | = "%s causing %5.2f damage to %s\n"
    MOV ESI,dword ptr [0x00611100]      ; 0040a3a6 | g_CConsolePtr
    PUSH ESI                            ; 0040a3ac | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 0040a3ad
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x18                        ; 0040a3b2
    MOV EDI,dword ptr [ESP + 0x338]     ; 0040a3b5
    PUSH dword ptr [ESP + 0x14]         ; 0040a3bc
    PUSH EDI                            ; 0040a3c0
    CALL core_trigger.cpp_FUN_0059be30  ; 0040a3c1
        ;   XREF to: 0059be30 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_FUN_0059be30(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 0040a3c6
    PUSH EDI                            ; 0040a3c9
    LEA EAX,[ESP + 0x14]                ; 0040a3ca
    PUSH EAX                            ; 0040a3ce
    MOV EDX,dword ptr [EBP + 0x18]      ; 0040a3cf
    PUSH EDX                            ; 0040a3d2
    MOV ESI,dword ptr [EBX + 0x154]     ; 0040a3d3
    PUSH EBX                            ; 0040a3d9
    CALL dword ptr [ESI + 0x80]         ; 0040a3da
    ADD ESP,0x10                        ; 0040a3e0
    JMP 0x0040a14a                      ; 0040a3e3
        ;   XREF to: 0040a14a (UNCONDITIONAL_JUMP)  ; LAB_0040a14a
    MOV EAX,[0x01cd0dfc]                ; 0040a3e8 | g_CGlassClassInfo.name_hash
        ;   Label: LAB_0040a3e8
    PUSH EAX                            ; 0040a3ed
    PUSH EDI                            ; 0040a3ee
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0040a3ef
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV dword ptr [ESP + 0x33c],EAX     ; 0040a3f4
    ADD ESP,0x8                         ; 0040a3fb
    TEST EAX,EAX                        ; 0040a3fe
    JZ 0x0040a14a                       ; 0040a400
        ;   XREF to: 0040a14a (CONDITIONAL_JUMP)  ; LAB_0040a14a
    LEA EAX,[ESP + 0x238]               ; 0040a406
    PUSH dword ptr [ESP + 0x328]        ; 0040a40d
    PUSH EAX                            ; 0040a414
    MOV ECX,dword ptr [ESP + 0x33c]     ; 0040a415
    PUSH ECX                            ; 0040a41c
    LEA ESI,[ESP + 0x298]               ; 0040a41d
    LEA EDI,[ESP + 0x280]               ; 0040a424
    CALL core_actor.cpp_FUN_00408bb0    ; 0040a42b
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x298]               ; 0040a430
    ADD ESP,0x8                         ; 0040a437
    LEA EAX,[ESP + 0x278]               ; 0040a43a
    MOVSD ES:EDI,ESI                    ; 0040a441
    MOVSD ES:EDI,ESI                    ; 0040a442
    MOVSD ES:EDI,ESI                    ; 0040a443
    PUSH EAX                            ; 0040a444
    MOV ESI,dword ptr [ESP + 0x33c]     ; 0040a445
    MOV EAX,dword ptr [ESP + 0x33c]     ; 0040a44c
    PUSH ESI                            ; 0040a453
    MOV EAX,dword ptr [EAX + 0x154]     ; 0040a454
    LEA ESI,[ESP + 0x184]               ; 0040a45a
    LEA EDI,[ESP + 0x1b4]               ; 0040a461
    CALL dword ptr [EAX + 0x1c]         ; 0040a468
    MOV ECX,0x6                         ; 0040a46b
    ADD ESP,0x4                         ; 0040a470
    LEA EAX,[ESP + 0x1b0]               ; 0040a473
    LEA ESI,[ESP + 0x180]               ; 0040a47a
    PUSH EAX                            ; 0040a481
    MOVSD.REP ES:EDI,ESI                ; 0040a482
    CALL core_box.cpp_FUN_00421b90      ; 0040a484
        ;   XREF to: 00421b90 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_00421b90()
    ADD ESP,0xc                         ; 0040a489
    TEST EAX,EAX                        ; 0040a48c
    JZ 0x0040a14a                       ; 0040a48e
        ;   XREF to: 0040a14a (CONDITIONAL_JUMP)  ; LAB_0040a14a
    LEA EAX,[ESP + 0x4c]                ; 0040a494
    PUSH EAX                            ; 0040a498
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 0040a499
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0040a49e
    MOV EDI,dword ptr [ESP + 0x334]     ; 0040a4a1
    PUSH EDI                            ; 0040a4a8
    LEA ESI,[ESP + 0x50]                ; 0040a4a9
    PUSH ESI                            ; 0040a4ad
    MOV EDX,dword ptr [EBP + 0x18]      ; 0040a4ae
    PUSH EDX                            ; 0040a4b1
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040a4b2
    PUSH EBX                            ; 0040a4b8
    CALL dword ptr [EAX + 0x7c]         ; 0040a4b9
    ADD ESP,0x10                        ; 0040a4bc
    PUSH EDI                            ; 0040a4bf
    LEA EAX,[ESP + 0x50]                ; 0040a4c0
    PUSH EAX                            ; 0040a4c4
    MOV EDI,dword ptr [EBP + 0x18]      ; 0040a4c5
    PUSH EDI                            ; 0040a4c8
    MOV ESI,dword ptr [EBX + 0x154]     ; 0040a4c9
    PUSH EBX                            ; 0040a4cf
    CALL dword ptr [ESI + 0x80]         ; 0040a4d0
    ADD ESP,0x10                        ; 0040a4d6
    MOV EAX,dword ptr [ESP + 0x334]     ; 0040a4d9
    PUSH EAX                            ; 0040a4e0
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004e3a40 ; 0040a4e1
        ;   XREF to: 004e3a40 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004e3a40(CGlass * this_ptr)
    ADD ESP,0x4                         ; 0040a4e6
    TEST EAX,EAX                        ; 0040a4e9
    JZ 0x0040a14a                       ; 0040a4eb
        ;   XREF to: 0040a14a (CONDITIONAL_JUMP)  ; LAB_0040a14a
    LEA EAX,[ESP + 0x238]               ; 0040a4f1
    PUSH EAX                            ; 0040a4f8
    MOV EDX,dword ptr [ESP + 0x338]     ; 0040a4f9
    PUSH EDX                            ; 0040a500
    CALL core_glass.cpp_FUN_004e34b0    ; 0040a501
        ;   XREF to: 004e34b0 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004e34b0()
    ADD ESP,0x8                         ; 0040a506
    JMP 0x0040a14a                      ; 0040a509
        ;   XREF to: 0040a14a (UNCONDITIONAL_JUMP)  ; LAB_0040a14a
    MOV EAX,dword ptr [ESP + 0x314]     ; 0040a50e
        ;   Label: LAB_0040a50e
    CMP EAX,0x1                         ; 0040a515
    JZ 0x0040a523                       ; 0040a518
        ;   XREF to: 0040a523 (CONDITIONAL_JUMP)  ; LAB_0040a523
    XOR EAX,EAX                         ; 0040a51a
        ;   Label: LAB_0040a51a
    MOV ESP,EBP                         ; 0040a51c
    POP EBP                             ; 0040a51e
    POP EDI                             ; 0040a51f
    POP ESI                             ; 0040a520
    POP EBX                             ; 0040a521
    RET                                 ; 0040a522
    PUSH EAX                            ; 0040a523
        ;   Label: LAB_0040a523
    MOV EDX,dword ptr [0x00622c18]      ; 0040a524 | g_CDemonSetPtr
    PUSH EDX                            ; 0040a52a | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0 ; 0040a52b
        ;   XREF to: 005592d0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 0040a530
    PUSH EBX                            ; 0040a533
    MOV ECX,dword ptr [0x00622c18]      ; 0040a534 | g_CDemonSetPtr
    PUSH ECX                            ; 0040a53a | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0040a53b
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0040a540
    MOV ESI,dword ptr [0x00622c18]      ; 0040a543 | g_CDemonSetPtr
    PUSH ESI                            ; 0040a549 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00559210 ; 0040a54a
        ;   XREF to: 00559210 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_FUN_00559210(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0040a54f
    MOV EDI,dword ptr [ESP + 0x310]     ; 0040a552
    TEST EDI,EDI                        ; 0040a559
    JNZ 0x0040a6d9                      ; 0040a55b
        ;   XREF to: 0040a6d9 (CONDITIONAL_JUMP)  ; LAB_0040a6d9
    XOR ECX,ECX                         ; 0040a561
        ;   Label: LAB_0040a561
    MOV dword ptr [ESP + 0x32c],ECX     ; 0040a563
    LEA EAX,[ESP + 0x238]               ; 0040a56a
        ;   Label: LAB_0040a56a
    PUSH EAX                            ; 0040a571
    LEA EAX,[ESP + 0x230]               ; 0040a572
    PUSH EAX                            ; 0040a579
    MOV ESI,dword ptr [0x00622c18]      ; 0040a57a | g_CDemonSetPtr
    PUSH ESI                            ; 0040a580 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00557300 ; 0040a581
        ;   XREF to: 00557300 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00557300()
    MOV dword ptr [ESP + 0x34c],EAX     ; 0040a586
    FLD float ptr [ESP + 0x34c]         ; 0040a58d
    ADD ESP,0xc                         ; 0040a594
    FLDZ                                ; 0040a597
    FXCH                                ; 0040a599
    FSTP double ptr [ESP]               ; 0040a59b
    FCOMP double ptr [ESP]              ; 0040a59e
    FNSTSW AX                           ; 0040a5a1
    SAHF                                ; 0040a5a3
    JA 0x0040a51a                       ; 0040a5a4
        ;   XREF to: 0040a51a (CONDITIONAL_JUMP)  ; LAB_0040a51a
    FLD1                                ; 0040a5aa
    FCOMP double ptr [ESP]              ; 0040a5ac
    FNSTSW AX                           ; 0040a5af
    SAHF                                ; 0040a5b1
    JC 0x0040a51a                       ; 0040a5b2
        ;   XREF to: 0040a51a (CONDITIONAL_JUMP)  ; LAB_0040a51a
    MOV EDI,dword ptr [0x007c637c]      ; 0040a5b8 | g_CCharacterClassInfo.name_hash
    MOV EAX,[0x00622c18]                ; 0040a5be | g_CDemonSetPtr
    PUSH EDI                            ; 0040a5c3
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0040a5c4 | g_CDemonSetInstance.field1364292_0x14d144
    PUSH EDX                            ; 0040a5ca
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0040a5cb
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 0040a5d0
    MOV dword ptr [ESP + 0x33c],EAX     ; 0040a5d3
    TEST EAX,EAX                        ; 0040a5da
    JZ 0x0040a5fb                       ; 0040a5dc
        ;   XREF to: 0040a5fb (CONDITIONAL_JUMP)  ; LAB_0040a5fb
    PUSH EAX                            ; 0040a5de
    MOV ESI,dword ptr [EAX + 0x154]     ; 0040a5df
    CALL dword ptr [ESI + 0x10c]        ; 0040a5e5
    ADD ESP,0x4                         ; 0040a5eb
    TEST EAX,EAX                        ; 0040a5ee
    JLE 0x0040a5fb                      ; 0040a5f0
        ;   XREF to: 0040a5fb (CONDITIONAL_JUMP)  ; LAB_0040a5fb
    XOR ECX,ECX                         ; 0040a5f2
    MOV dword ptr [ESP + 0x33c],ECX     ; 0040a5f4
    MOV ESI,dword ptr [0x01cd0dfc]      ; 0040a5fb | g_CGlassClassInfo.name_hash
        ;   Label: LAB_0040a5fb
    MOV EAX,[0x00622c18]                ; 0040a601 | g_CDemonSetPtr
    PUSH ESI                            ; 0040a606
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 0040a607 | g_CDemonSetInstance.field1364292_0x14d144
    PUSH EDI                            ; 0040a60d
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0040a60e
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 0040a613
    MOV ESI,EAX                         ; 0040a616
    MOV EAX,[0x02c8ae44]                ; 0040a618 | g_CTriggerClassInfo.name_hash
    PUSH EAX                            ; 0040a61d
    MOV EAX,[0x00622c18]                ; 0040a61e | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0040a623 | g_CDemonSetInstance.field1364292_0x14d144
    PUSH EDX                            ; 0040a629
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0040a62a
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV ECX,dword ptr [0x007dc6d8]      ; 0040a62f | g_CCrateClassInfo.name_hash
    ADD ESP,0x8                         ; 0040a635
    MOV EDI,EAX                         ; 0040a638
    MOV dword ptr [ESP + 0x318],EAX     ; 0040a63a
    MOV EAX,[0x00622c18]                ; 0040a641 | g_CDemonSetPtr
    PUSH ECX                            ; 0040a646
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0040a647 | g_CDemonSetInstance.field1364292_0x14d144
    PUSH EDX                            ; 0040a64d
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0040a64e
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV dword ptr [ESP + 0x324],EAX     ; 0040a653
    ADD ESP,0x8                         ; 0040a65a
    MOV ECX,dword ptr [0x01cc4184]      ; 0040a65d | g_CFlameCanClassInfo.name_hash
    MOV EAX,[0x00622c18]                ; 0040a663 | g_CDemonSetPtr
    PUSH ECX                            ; 0040a668
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0040a669 | g_CDemonSetInstance.field1364292_0x14d144
    PUSH EDX                            ; 0040a66f
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0040a670
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 0040a675
    MOV ECX,dword ptr [ESP + 0x33c]     ; 0040a678
    TEST ECX,ECX                        ; 0040a67f
    JZ 0x0040a90c                       ; 0040a681
        ;   XREF to: 0040a90c (CONDITIONAL_JUMP)  ; LAB_0040a90c
    MOV ESI,dword ptr [ESP + 0x310]     ; 0040a687
    TEST ESI,ESI                        ; 0040a68e
    JZ 0x0040a6ee                       ; 0040a690
        ;   XREF to: 0040a6ee (CONDITIONAL_JUMP)  ; LAB_0040a6ee
    PUSH ECX                            ; 0040a692
    MOV EAX,dword ptr [ECX + 0x154]     ; 0040a693
    CALL dword ptr [EAX + 0xe0]         ; 0040a699
    ADD ESP,0x4                         ; 0040a69f
    TEST EAX,EAX                        ; 0040a6a2
    JZ 0x0040a6ee                       ; 0040a6a4
        ;   XREF to: 0040a6ee (CONDITIONAL_JUMP)  ; LAB_0040a6ee
    PUSH 0x5d2606                       ; 0040a6a6 | = "CHero"
    PUSH ESI                            ; 0040a6ab
    CALL core_actor.cpp_FUN_0040c550    ; 0040a6ac
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0040a6b1
    TEST EAX,EAX                        ; 0040a6b4
    JZ 0x0040a6ee                       ; 0040a6b6
        ;   XREF to: 0040a6ee (CONDITIONAL_JUMP)  ; LAB_0040a6ee
    MOV ESI,dword ptr [ESP + 0x32c]     ; 0040a6b8
        ;   Label: LAB_0040a6b8
    INC ESI                             ; 0040a6bf
    MOV dword ptr [ESP + 0x32c],ESI     ; 0040a6c0
    CMP ESI,0x4                         ; 0040a6c7
    JL 0x0040a56a                       ; 0040a6ca
        ;   XREF to: 0040a56a (CONDITIONAL_JUMP)  ; LAB_0040a56a
    XOR EAX,EAX                         ; 0040a6d0
    MOV ESP,EBP                         ; 0040a6d2
    POP EBP                             ; 0040a6d4
    POP EDI                             ; 0040a6d5
    POP ESI                             ; 0040a6d6
    POP EBX                             ; 0040a6d7
    RET                                 ; 0040a6d8
    PUSH EDI                            ; 0040a6d9
        ;   Label: LAB_0040a6d9
    MOV EDX,dword ptr [0x00622c18]      ; 0040a6da | g_CDemonSetPtr
    PUSH EDX                            ; 0040a6e0 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0040a6e1
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0040a6e6
    JMP 0x0040a561                      ; 0040a6e9
        ;   XREF to: 0040a561 (UNCONDITIONAL_JUMP)  ; LAB_0040a561
    LEA EAX,[ESP + 0x88]                ; 0040a6ee
        ;   Label: LAB_0040a6ee
    PUSH EAX                            ; 0040a6f5
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 0040a6f6
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0040a6fb
    MOV EDX,dword ptr [ESP + 0x33c]     ; 0040a6fe
    MOV EAX,[0x00622c18]                ; 0040a705 | g_CDemonSetPtr
    PUSH EDX                            ; 0040a70a
    LEA ESI,[ESP + 0x8c]                ; 0040a70b
    MOV EAX,dword ptr [EAX + 0x14d148]  ; 0040a712 | g_CDemonSetInstance.field1364296_0x14d148
    PUSH ESI                            ; 0040a718
    MOV ECX,dword ptr [EBP + 0x18]      ; 0040a719
    MOV dword ptr [ESP + 0x90],EAX      ; 0040a71c
    PUSH ECX                            ; 0040a723
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040a724
    PUSH EBX                            ; 0040a72a
    CALL dword ptr [EAX + 0x7c]         ; 0040a72b
    MOV EAX,[0x00622c18]                ; 0040a72e | g_CDemonSetPtr
    LEA ESI,[EAX + 0x14d11c]            ; 0040a733
    LEA EDI,[ESP + 0x260]               ; 0040a739
    ADD ESP,0x10                        ; 0040a740
    FLD float ptr [ESI + 0x4]           ; 0040a743 | g_CDemonSetInstance.field1364256_0x14d120
    FLD float ptr [ESI + 0x8]           ; 0040a746 | g_CDemonSetInstance.field1364260_0x14d124
    FLD float ptr [ESI]                 ; 0040a749 | g_CDemonSetInstance.field1364252_0x14d11c
    LEA ESI,[ESP + 0x280]               ; 0040a74b
    FSUB float ptr [EAX + 0x14d110]     ; 0040a752 | g_CDemonSetInstance.field1364240_0x14d110
    FXCH ST2                            ; 0040a758
    FSUB float ptr [EAX + 0x14d114]     ; 0040a75a | g_CDemonSetInstance.field1364244_0x14d114
    FXCH                                ; 0040a760
    FSUB float ptr [EAX + 0x14d118]     ; 0040a762 | g_CDemonSetInstance.field1364248_0x14d118
    FXCH ST2                            ; 0040a768
    FSTP float ptr [ESP + 0x280]        ; 0040a76a
    FSTP float ptr [ESP + 0x284]        ; 0040a771
    FSTP float ptr [ESP + 0x288]        ; 0040a778
    MOVSD ES:EDI,ESI                    ; 0040a77f
    MOVSD ES:EDI,ESI                    ; 0040a780
    MOVSD ES:EDI,ESI                    ; 0040a781
    FLD float ptr [ESP + 0x254]         ; 0040a782
    FMUL ST0                            ; 0040a789
    FLD float ptr [ESP + 0x250]         ; 0040a78b
    FMUL ST0                            ; 0040a792
    FADDP                               ; 0040a794
    FLD float ptr [ESP + 0x258]         ; 0040a796
    FMUL ST0                            ; 0040a79d
    FADDP                               ; 0040a79f
    FSQRT                               ; 0040a7a1
    FDIVR double ptr [0x005d2639]       ; 0040a7a3 | DAT_005d2639
    FLD float ptr [ESP + 0x250]         ; 0040a7a9
    FXCH                                ; 0040a7b0
    FSTP float ptr [ESP + 0x330]        ; 0040a7b2
    FMUL float ptr [ESP + 0x330]        ; 0040a7b9
    FLD float ptr [ESP + 0x254]         ; 0040a7c0
    FMUL float ptr [ESP + 0x330]        ; 0040a7c7
    FLD float ptr [ESP + 0x258]         ; 0040a7ce
    FMUL float ptr [ESP + 0x330]        ; 0040a7d5
    LEA EDI,[ESP + 0x25c]               ; 0040a7dc
    LEA ESI,[ESP + 0x2ec]               ; 0040a7e3
    FXCH ST2                            ; 0040a7ea
    FSTP float ptr [ESP + 0x2ec]        ; 0040a7ec
    FSTP float ptr [ESP + 0x2f0]        ; 0040a7f3
    FSTP float ptr [ESP + 0x2f4]        ; 0040a7fa
    MOVSD ES:EDI,ESI                    ; 0040a801
    MOVSD ES:EDI,ESI                    ; 0040a802
    MOVSD ES:EDI,ESI                    ; 0040a803
    LEA EAX,[ESP + 0x94]                ; 0040a804
    LEA ESI,[ESP + 0x25c]               ; 0040a80b
    CMP EAX,ESI                         ; 0040a812
    JZ 0x0040a840                       ; 0040a814
        ;   XREF to: 0040a840 (CONDITIONAL_JUMP)  ; LAB_0040a840
    MOV EAX,dword ptr [ESP + 0x25c]     ; 0040a816
    MOV dword ptr [ESP + 0x94],EAX      ; 0040a81d
    MOV EAX,dword ptr [ESP + 0x260]     ; 0040a824
    MOV dword ptr [ESP + 0x98],EAX      ; 0040a82b
    MOV EAX,dword ptr [ESP + 0x264]     ; 0040a832
    MOV dword ptr [ESP + 0x9c],EAX      ; 0040a839
    MOV EAX,[0x00622c18]                ; 0040a840 | g_CDemonSetPtr
        ;   Label: LAB_0040a840
    ADD EAX,0x14d138                    ; 0040a845
    PUSH EAX                            ; 0040a84a
    MOV ESI,dword ptr [ESP + 0x340]     ; 0040a84b
    PUSH ESI                            ; 0040a852
    LEA ESI,[ESP + 0x2ac]               ; 0040a853
    LEA EDI,[ESP + 0x2b8]               ; 0040a85a
    CALL core_actor.cpp_FUN_00408bb0    ; 0040a861
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x2ac]               ; 0040a866
    ADD ESP,0x8                         ; 0040a86d
    MOVSD ES:EDI,ESI                    ; 0040a870
    MOVSD ES:EDI,ESI                    ; 0040a871
    MOVSD ES:EDI,ESI                    ; 0040a872
    LEA EAX,[ESP + 0x2b0]               ; 0040a873
    LEA ESI,[ESP + 0xa4]                ; 0040a87a
    CMP ESI,EAX                         ; 0040a881
    JZ 0x0040a8af                       ; 0040a883
        ;   XREF to: 0040a8af (CONDITIONAL_JUMP)  ; LAB_0040a8af
    MOV EAX,dword ptr [ESP + 0x2b0]     ; 0040a885
    MOV dword ptr [ESP + 0xa4],EAX      ; 0040a88c
    MOV EAX,dword ptr [ESP + 0x2b4]     ; 0040a893
    MOV dword ptr [ESP + 0xa8],EAX      ; 0040a89a
    MOV EAX,dword ptr [ESP + 0x2b8]     ; 0040a8a1
    MOV dword ptr [ESP + 0xac],EAX      ; 0040a8a8
    LEA EDX,[ESP + 0x88]                ; 0040a8af
        ;   Label: LAB_0040a8af
    MOV EAX,dword ptr [ESP + 0x33c]     ; 0040a8b6
    PUSH EDX                            ; 0040a8bd
    MOV EDI,dword ptr [ESP + 0x340]     ; 0040a8be
    MOV EAX,dword ptr [EAX + 0x154]     ; 0040a8c5
    PUSH EDI                            ; 0040a8cb
    CALL dword ptr [EAX + 0x108]        ; 0040a8cc
    ADD ESP,0x8                         ; 0040a8d2
    PUSH EDI                            ; 0040a8d5
    LEA EAX,[ESP + 0x8c]                ; 0040a8d6
    PUSH EAX                            ; 0040a8dd
    MOV EDX,dword ptr [EBP + 0x18]      ; 0040a8de
    PUSH EDX                            ; 0040a8e1
    MOV ESI,dword ptr [EBX + 0x154]     ; 0040a8e2
    PUSH EBX                            ; 0040a8e8
    CALL dword ptr [ESI + 0x80]         ; 0040a8e9
    MOV EAX,[0x00622c18]                ; 0040a8ef | g_CDemonSetPtr
    ADD ESP,0x10                        ; 0040a8f4
    MOV ECX,dword ptr [EAX + 0x14d144]  ; 0040a8f7 | g_CDemonSetInstance.field1364292_0x14d144
    PUSH ECX                            ; 0040a8fd
    PUSH EAX                            ; 0040a8fe | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0040a8ff
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0040a904
    JMP 0x0040a6b8                      ; 0040a907
        ;   XREF to: 0040a6b8 (UNCONDITIONAL_JUMP)  ; LAB_0040a6b8
    TEST ESI,ESI                        ; 0040a90c
        ;   Label: LAB_0040a90c
    JNZ 0x0040a93d                      ; 0040a90e
        ;   XREF to: 0040a93d (CONDITIONAL_JUMP)  ; LAB_0040a93d
    TEST EDI,EDI                        ; 0040a910
    JNZ 0x0040a9ae                      ; 0040a912
        ;   XREF to: 0040a9ae (CONDITIONAL_JUMP)  ; LAB_0040a9ae
    MOV ESI,dword ptr [ESP + 0x31c]     ; 0040a918
    TEST ESI,ESI                        ; 0040a91f
    JNZ 0x0040aa51                      ; 0040a921
        ;   XREF to: 0040aa51 (CONDITIONAL_JUMP)  ; LAB_0040aa51
    TEST EAX,EAX                        ; 0040a927
    JZ 0x0040a51a                       ; 0040a929
        ;   XREF to: 0040a51a (CONDITIONAL_JUMP)  ; LAB_0040a51a
    PUSH EAX                            ; 0040a92f
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004b9180 ; 0040a930
        ;   XREF to: 004b9180 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004b9180(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 0040a935
    JMP 0x0040a6b8                      ; 0040a938
        ;   XREF to: 0040a6b8 (UNCONDITIONAL_JUMP)  ; LAB_0040a6b8
    LEA EAX,[ESP + 0xc4]                ; 0040a93d
        ;   Label: LAB_0040a93d
    PUSH EAX                            ; 0040a944
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 0040a945
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0040a94a
    PUSH ESI                            ; 0040a94d
    LEA EAX,[ESP + 0xc8]                ; 0040a94e
    PUSH EAX                            ; 0040a955
    MOV EDX,dword ptr [EBP + 0x18]      ; 0040a956
    PUSH EDX                            ; 0040a959
    MOV EDI,dword ptr [EBX + 0x154]     ; 0040a95a
    PUSH EBX                            ; 0040a960
    CALL dword ptr [EDI + 0x7c]         ; 0040a961
    ADD ESP,0x10                        ; 0040a964
    PUSH ESI                            ; 0040a967
    LEA EAX,[ESP + 0xc8]                ; 0040a968
    PUSH EAX                            ; 0040a96f
    MOV ECX,dword ptr [EBP + 0x18]      ; 0040a970
    PUSH ECX                            ; 0040a973
    MOV EDI,dword ptr [EBX + 0x154]     ; 0040a974
    PUSH EBX                            ; 0040a97a
    CALL dword ptr [EDI + 0x80]         ; 0040a97b
    ADD ESP,0x10                        ; 0040a981
    PUSH ESI                            ; 0040a984
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004e3a40 ; 0040a985
        ;   XREF to: 004e3a40 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004e3a40(CGlass * this_ptr)
    ADD ESP,0x4                         ; 0040a98a
    TEST EAX,EAX                        ; 0040a98d
    JZ 0x0040a51a                       ; 0040a98f
        ;   XREF to: 0040a51a (CONDITIONAL_JUMP)  ; LAB_0040a51a
    MOV EAX,[0x00622c18]                ; 0040a995 | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 0040a99a
    PUSH EAX                            ; 0040a99f
    PUSH ESI                            ; 0040a9a0
    CALL core_glass.cpp_FUN_004e34b0    ; 0040a9a1
        ;   XREF to: 004e34b0 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004e34b0()
    ADD ESP,0x8                         ; 0040a9a6
    JMP 0x0040a6b8                      ; 0040a9a9
        ;   XREF to: 0040a6b8 (UNCONDITIONAL_JUMP)  ; LAB_0040a6b8
    PUSH EBX                            ; 0040a9ae
        ;   Label: LAB_0040a9ae
    PUSH EDI                            ; 0040a9af
    CALL core_trigger.cpp_FUN_0059bdf0  ; 0040a9b0
        ;   XREF to: 0059bdf0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_FUN_0059bdf0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0040a9b5
    TEST EAX,EAX                        ; 0040a9b8
    JZ 0x0040aa36                       ; 0040a9ba
        ;   XREF to: 0040aa36 (CONDITIONAL_JUMP)  ; LAB_0040aa36
    LEA EAX,[ESP + 0x13c]               ; 0040a9bc
    PUSH EAX                            ; 0040a9c3
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 0040a9c4
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0040a9c9
    PUSH EDI                            ; 0040a9cc
    LEA EDX,[ESP + 0x140]               ; 0040a9cd
    PUSH EDX                            ; 0040a9d4
    MOV EDX,dword ptr [EBP + 0x18]      ; 0040a9d5
    PUSH EDX                            ; 0040a9d8
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040a9d9
    PUSH EBX                            ; 0040a9df
    CALL dword ptr [EAX + 0x7c]         ; 0040a9e0
    ADD ESP,0x10                        ; 0040a9e3
    PUSH EDI                            ; 0040a9e6
    FLD float ptr [ESP + 0x144]         ; 0040a9e7
    SUB ESP,0x8                         ; 0040a9ee
    FSTP double ptr [ESP]               ; 0040a9f1
    PUSH EBX                            ; 0040a9f4
    PUSH 0x5d260c                       ; 0040a9f5 | = "%s causing %5.2f damage to %s\n"
    MOV ECX,dword ptr [0x00611100]      ; 0040a9fa | g_CConsolePtr
    PUSH ECX                            ; 0040aa00 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 0040aa01
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x18                        ; 0040aa06
    PUSH dword ptr [ESP + 0x140]        ; 0040aa09
    PUSH EDI                            ; 0040aa10
    CALL core_trigger.cpp_FUN_0059be30  ; 0040aa11
        ;   XREF to: 0059be30 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_FUN_0059be30(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 0040aa16
    PUSH ESI                            ; 0040aa19
    LEA EAX,[ESP + 0x140]               ; 0040aa1a
    PUSH EAX                            ; 0040aa21
    MOV ESI,dword ptr [EBP + 0x18]      ; 0040aa22
    PUSH ESI                            ; 0040aa25
    MOV EDI,dword ptr [EBX + 0x154]     ; 0040aa26
    PUSH EBX                            ; 0040aa2c
    CALL dword ptr [EDI + 0x80]         ; 0040aa2d
    ADD ESP,0x10                        ; 0040aa33
    MOV EDI,dword ptr [ESP + 0x318]     ; 0040aa36
        ;   Label: LAB_0040aa36
    PUSH EDI                            ; 0040aa3d
    MOV EAX,[0x00622c18]                ; 0040aa3e | g_CDemonSetPtr
    PUSH EAX                            ; 0040aa43 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0040aa44
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0040aa49
    JMP 0x0040a6b8                      ; 0040aa4c
        ;   XREF to: 0040a6b8 (UNCONDITIONAL_JUMP)  ; LAB_0040a6b8
    PUSH ESI                            ; 0040aa51
        ;   Label: LAB_0040aa51
    CALL core_crate.cpp_FUN_00449600    ; 0040aa52
        ;   XREF to: 00449600 (UNCONDITIONAL_CALL)  ; void core_crate.cpp_FUN_00449600(CCrate * this_ptr)
    ADD ESP,0x4                         ; 0040aa57
    JMP 0x0040a6b8                      ; 0040aa5a
        ;   XREF to: 0040a6b8 (UNCONDITIONAL_JUMP)  ; LAB_0040a6b8

