; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_CDemonActor_processMeleeHit_FUN_0040a050(CDemonActor *this_ptr,int hit_type)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hit_type
;
; Referenced Globals:
;   undefined4 s_CHero_005ca67d+1
;   TerminatedCString s_s_causing_5_2f_damage_to_005ca684
;   TerminatedCString s_CHero_005ca6a3
;   TerminatedCString s_s_causing_5_2f_damage_to_005ca6a9
;   undefined4 DAT_005ca6ca
;   undefined4 DAT_005ca6ce
;   undefined4 DAT_005ca6d6
;   CConsole* g_CConsolePtr = 007c158c
;   CGore* g_CGorePtr = 01cb8284
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CCharacterClassInfo.name_hash
;   CConsole g_CConsoleInstance
;   undefined4 g_CCrateClassInfo.name_hash
;   undefined4 g_CFlameCanClassInfo.name_hash
;   undefined4 g_CGlassClassInfo.name_hash
;   ... and 12 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_isOfClass_FUN_0040c840
;   core_box.cpp_FUN_0041bc20
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   core_crate.cpp_FUN_0043a350
;   core_flamecan.cpp_CFlameCan_ignite_FUN_004a08d0
;   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004c72d0
;   core_glass.cpp_FUN_004c6d40
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0
;   core_setcolid.cpp_CDemonSet_skipExactCollisions_FUN_00537df0
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a050
        ;   Label: core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a050
    PUSH ESI                            ; 0040a051
    PUSH EDI                            ; 0040a052
    PUSH EBP                            ; 0040a053
    MOV EBP,ESP                         ; 0040a054
    SUB ESP,0x3dc                       ; 0040a056
    AND ESP,0xfffffff8                  ; 0040a05c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0040a05f
    CMP dword ptr [EBP + 0x18],0x1      ; 0040a062
    MOV ESI,0x3f800000                  ; 0040a066
    LEA EDI,[ESP + 0x198]               ; 0040a06b
    XOR ECX,ECX                         ; 0040a072
    PUSH EBX                            ; 0040a074
    MOV dword ptr [ESP + 0x304],ECX     ; 0040a075
    MOV dword ptr [ESP + 0x308],ECX     ; 0040a07c
    MOV dword ptr [ESP + 0x3c8],ESI     ; 0040a083
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0040a08a
    LEA ESI,[ESP + 0x1fc]               ; 0040a090
    MOV dword ptr [ESP + 0x3ac],ECX     ; 0040a097
    CALL dword ptr [EAX + 0x24]         ; 0040a09e
    MOV ECX,0x6                         ; 0040a0a1
    LEA ESI,[ESP + 0x1fc]               ; 0040a0a6
    ADD ESP,0x4                         ; 0040a0ad
    MOVSD.REP ES:EDI,ESI                ; 0040a0b0
    MOV EAX,dword ptr [ESP + 0x1ac]     ; 0040a0b2
    MOV dword ptr [ESP + 0x308],EAX     ; 0040a0b9
    LEA EAX,[ESP + 0x300]               ; 0040a0c0
    PUSH EAX                            ; 0040a0c7
    PUSH EBX                            ; 0040a0c8
    LEA ESI,[ESP + 0x2fc]               ; 0040a0c9
    LEA EDI,[ESP + 0x2c0]               ; 0040a0d0
    CALL core_actor.cpp_FUN_00408d70    ; 0040a0d7
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0040a0dc
    XOR EDX,EDX                         ; 0040a0df
    LEA ESI,[ESP + 0x2f4]               ; 0040a0e1
    MOV dword ptr [ESP + 0x27c],EDX     ; 0040a0e8
    MOV dword ptr [ESP + 0x280],EDX     ; 0040a0ef
    MOVSD ES:EDI,ESI                    ; 0040a0f6
    MOVSD ES:EDI,ESI                    ; 0040a0f7
    MOVSD ES:EDI,ESI                    ; 0040a0f8
    PUSH EBX                            ; 0040a0f9
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0040a0fa
    LEA ESI,[ESP + 0x1b4]               ; 0040a100
    LEA EDI,[ESP + 0x184]               ; 0040a107
    CALL dword ptr [EAX + 0x24]         ; 0040a10e
    MOV ECX,0x6                         ; 0040a111
    LEA ESI,[ESP + 0x1b4]               ; 0040a116
    ADD ESP,0x4                         ; 0040a11d
    LEA EAX,[ESP + 0x27c]               ; 0040a120
    MOVSD.REP ES:EDI,ESI                ; 0040a127
    PUSH EAX                            ; 0040a129
    FLD float ptr [ESP + 0x198]         ; 0040a12a
    LEA ESI,[ESP + 0x358]               ; 0040a131
    LEA EDI,[ESP + 0x298]               ; 0040a138
    FADD float ptr [0x005ca6ca]         ; 0040a13f | DAT_005ca6ca
    PUSH EBX                            ; 0040a145
    FSTP float ptr [ESP + 0x28c]        ; 0040a146
    CALL core_actor.cpp_FUN_00408d70    ; 0040a14d
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x35c]               ; 0040a152
    LEA EAX,[ESP + 0x29c]               ; 0040a159
    ADD ESP,0x8                         ; 0040a160
    LEA EDX,[ESP + 0x348]               ; 0040a163
    MOVSD ES:EDI,ESI                    ; 0040a16a
    MOVSD ES:EDI,ESI                    ; 0040a16b
    MOVSD ES:EDI,ESI                    ; 0040a16c
    CMP EDX,EAX                         ; 0040a16d
    JZ 0x0040a19b                       ; 0040a16f
        ;   XREF to: 0040a19b (CONDITIONAL_JUMP)  ; LAB_0040a19b
    MOV EAX,dword ptr [ESP + 0x294]     ; 0040a171
    MOV dword ptr [ESP + 0x348],EAX     ; 0040a178
    MOV EAX,dword ptr [ESP + 0x298]     ; 0040a17f
    MOV dword ptr [ESP + 0x34c],EAX     ; 0040a186
    MOV EAX,dword ptr [ESP + 0x29c]     ; 0040a18d
    MOV dword ptr [ESP + 0x350],EAX     ; 0040a194
    MOV EAX,dword ptr [ESP + 0x3c4]     ; 0040a19b
        ;   Label: LAB_0040a19b
    MOV dword ptr [ESP + 0x26c],EAX     ; 0040a1a2
    LEA EAX,[ESP + 0x264]               ; 0040a1a9
    XOR ESI,ESI                         ; 0040a1b0
    PUSH EAX                            ; 0040a1b2
    MOV dword ptr [ESP + 0x268],ESI     ; 0040a1b3
    MOV dword ptr [ESP + 0x26c],ESI     ; 0040a1ba
    PUSH EBX                            ; 0040a1c1
    LEA ESI,[ESP + 0x32c]               ; 0040a1c2
    LEA EDI,[ESP + 0x368]               ; 0040a1c9
    CALL core_actor.cpp_FUN_00408d70    ; 0040a1d0
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x32c]               ; 0040a1d5
    LEA EDX,[ESP + 0x368]               ; 0040a1dc
    ADD ESP,0x8                         ; 0040a1e3
    LEA EAX,[ESP + 0x2d0]               ; 0040a1e6
    MOVSD ES:EDI,ESI                    ; 0040a1ed
    MOVSD ES:EDI,ESI                    ; 0040a1ee
    MOVSD ES:EDI,ESI                    ; 0040a1ef
    CMP EAX,EDX                         ; 0040a1f0
    JZ 0x0040a21e                       ; 0040a1f2
        ;   XREF to: 0040a21e (CONDITIONAL_JUMP)  ; LAB_0040a21e
    MOV EAX,dword ptr [ESP + 0x360]     ; 0040a1f4
    MOV dword ptr [ESP + 0x2d0],EAX     ; 0040a1fb
    MOV EAX,dword ptr [ESP + 0x364]     ; 0040a202
    MOV dword ptr [ESP + 0x2d4],EAX     ; 0040a209
    MOV EAX,dword ptr [ESP + 0x368]     ; 0040a210
    MOV dword ptr [ESP + 0x2d8],EAX     ; 0040a217
    CMP dword ptr [ESP + 0x3a8],0x1     ; 0040a21e
        ;   Label: LAB_0040a21e
    JNZ 0x0040a307                      ; 0040a226
        ;   XREF to: 0040a307 (CONDITIONAL_JUMP)  ; LAB_0040a307
    MOV ESI,0xc0400000                  ; 0040a22c
    LEA EAX,[ESP + 0x270]               ; 0040a231
    LEA EDI,[ESP + 0x318]               ; 0040a238
    XOR EDX,EDX                         ; 0040a23f
    PUSH EAX                            ; 0040a241
    MOV dword ptr [ESP + 0x274],EDX     ; 0040a242
    MOV dword ptr [ESP + 0x27c],ESI     ; 0040a249
    PUSH EBX                            ; 0040a250
    LEA ESI,[ESP + 0x2a8]               ; 0040a251
    MOV dword ptr [ESP + 0x27c],EDX     ; 0040a258
    CALL core_actor.cpp_FUN_00408cf0    ; 0040a25f
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0x2a8]               ; 0040a264
    LEA EDX,[ESP + 0x344]               ; 0040a26b
    ADD ESP,0x8                         ; 0040a272
    LEA EAX,[ESP + 0x36c]               ; 0040a275
    FLD float ptr [ESP + 0x2b8]         ; 0040a27c
    FLD float ptr [ESP + 0x2bc]         ; 0040a283
    MOVSD ES:EDI,ESI                    ; 0040a28a
    MOVSD ES:EDI,ESI                    ; 0040a28b
    MOVSD ES:EDI,ESI                    ; 0040a28c
    FLD float ptr [ESP + 0x2c0]         ; 0040a28d
    LEA EDI,[ESP + 0x33c]               ; 0040a294
    LEA ESI,[ESP + 0x39c]               ; 0040a29b
    FXCH ST2                            ; 0040a2a2
    FADD float ptr [ESP + 0x318]        ; 0040a2a4
    FXCH                                ; 0040a2ab
    FADD float ptr [ESP + 0x31c]        ; 0040a2ad
    FXCH ST2                            ; 0040a2b4
    FADD float ptr [ESP + 0x320]        ; 0040a2b6
    FXCH                                ; 0040a2bd
    FSTP float ptr [ESP + 0x39c]        ; 0040a2bf
    FXCH                                ; 0040a2c6
    FSTP float ptr [ESP + 0x3a0]        ; 0040a2c8
    FSTP float ptr [ESP + 0x3a4]        ; 0040a2cf
    MOVSD ES:EDI,ESI                    ; 0040a2d6
    MOVSD ES:EDI,ESI                    ; 0040a2d7
    MOVSD ES:EDI,ESI                    ; 0040a2d8
    CMP EAX,EDX                         ; 0040a2d9
    JZ 0x0040a307                       ; 0040a2db
        ;   XREF to: 0040a307 (CONDITIONAL_JUMP)  ; LAB_0040a307
    MOV EAX,dword ptr [ESP + 0x33c]     ; 0040a2dd
    MOV dword ptr [ESP + 0x36c],EAX     ; 0040a2e4
    MOV EAX,dword ptr [ESP + 0x340]     ; 0040a2eb
    MOV dword ptr [ESP + 0x370],EAX     ; 0040a2f2
    MOV EAX,dword ptr [ESP + 0x344]     ; 0040a2f9
    MOV dword ptr [ESP + 0x374],EAX     ; 0040a300
    MOV EDX,0x3f800000                  ; 0040a307
        ;   Label: LAB_0040a307
    LEA EAX,[ESP + 0x2c4]               ; 0040a30c
    LEA ESI,[ESP + 0x2ac]               ; 0040a313
    XOR EDI,EDI                         ; 0040a31a
    PUSH EAX                            ; 0040a31c
    MOV dword ptr [ESP + 0x2c8],EDI     ; 0040a31d
    MOV dword ptr [ESP + 0x2cc],EDI     ; 0040a324
    PUSH EBX                            ; 0040a32b
    MOV dword ptr [ESP + 0x2d4],EDX     ; 0040a32c
    LEA EDI,[ESP + 0x260]               ; 0040a333
    CALL core_actor.cpp_FUN_00408cf0    ; 0040a33a
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0x2b4]               ; 0040a33f
    ADD ESP,0x8                         ; 0040a346
    MOVSD ES:EDI,ESI                    ; 0040a349
    MOVSD ES:EDI,ESI                    ; 0040a34a
    MOVSD ES:EDI,ESI                    ; 0040a34b
    PUSH EBX                            ; 0040a34c
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0040a34d
    CALL dword ptr [EAX + 0x9c]         ; 0040a353
    ADD ESP,0x4                         ; 0040a359
    MOV ECX,dword ptr [ESP + 0x3a8]     ; 0040a35c
    MOV dword ptr [ESP + 0x3c8],EAX     ; 0040a363
    TEST ECX,ECX                        ; 0040a36a
    JNZ 0x0040a81f                      ; 0040a36c
        ;   XREF to: 0040a81f (CONDITIONAL_JUMP)  ; LAB_0040a81f
    MOV dword ptr [ESP + 0x3b8],ECX     ; 0040a372
    MOV dword ptr [ESP + 0x3bc],ECX     ; 0040a379
    MOV EAX,[0x0061b5a8]                ; 0040a380 | g_CDemonSetPtr
        ;   Label: LAB_0040a380
    MOV EDX,dword ptr [ESP + 0x3b8]     ; 0040a385
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 0040a38c | g_CDemonSetInstance.actor_count
    JGE 0x0040a81f                      ; 0040a392
        ;   XREF to: 0040a81f (CONDITIONAL_JUMP)  ; LAB_0040a81f
    ADD EAX,dword ptr [ESP + 0x3bc]     ; 0040a398
    MOV EDI,dword ptr [EAX + 0x14d168]  ; 0040a39f | g_CDemonSetInstance.actors[0]
    CMP EDI,EBX                         ; 0040a3a5
    JNZ 0x0040a3cb                      ; 0040a3a7
        ;   XREF to: 0040a3cb (CONDITIONAL_JUMP)  ; LAB_0040a3cb
    MOV EAX,dword ptr [ESP + 0x3b8]     ; 0040a3a9
        ;   Label: LAB_0040a3a9
    MOV EDI,dword ptr [ESP + 0x3bc]     ; 0040a3b0
    INC EAX                             ; 0040a3b7
    ADD EDI,0x4                         ; 0040a3b8
    MOV dword ptr [ESP + 0x3b8],EAX     ; 0040a3bb
    MOV dword ptr [ESP + 0x3bc],EDI     ; 0040a3c2
    JMP 0x0040a380                      ; 0040a3c9
        ;   XREF to: 0040a380 (UNCONDITIONAL_JUMP)  ; LAB_0040a380
    CMP EDI,dword ptr [ESP + 0x3c8]     ; 0040a3cb
        ;   Label: LAB_0040a3cb
    JZ 0x0040a3a9                       ; 0040a3d2
        ;   XREF to: 0040a3a9 (CONDITIONAL_JUMP)  ; LAB_0040a3a9
    MOV EDX,dword ptr [0x007bdc94]      ; 0040a3d4 | g_CCharacterClassInfo.name_hash
    PUSH EDX                            ; 0040a3da
    PUSH EDI                            ; 0040a3db
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0040a3dc
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0040a3e1
    MOV ESI,EAX                         ; 0040a3e4
    TEST EAX,EAX                        ; 0040a3e6
    JZ 0x0040a5b3                       ; 0040a3e8
        ;   XREF to: 0040a5b3 (CONDITIONAL_JUMP)  ; LAB_0040a5b3
    CMP dword ptr [ESP + 0x3c8],0x0     ; 0040a3ee
    JZ 0x0040a425                       ; 0040a3f6
        ;   XREF to: 0040a425 (CONDITIONAL_JUMP)  ; LAB_0040a425
    PUSH EAX                            ; 0040a3f8
    MOV EDI,dword ptr [EAX + 0x2b0]     ; 0040a3f9
    CALL dword ptr [EDI + 0xe8]         ; 0040a3ff
    ADD ESP,0x4                         ; 0040a405
    TEST EAX,EAX                        ; 0040a408
    JZ 0x0040a425                       ; 0040a40a
        ;   XREF to: 0040a425 (CONDITIONAL_JUMP)  ; LAB_0040a425
    PUSH 0x5ca67e                       ; 0040a40c | s_CHero_005ca67d+1
    MOV ECX,dword ptr [ESP + 0x3cc]     ; 0040a411
    PUSH ECX                            ; 0040a418
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 0040a419
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0040a41e
    TEST EAX,EAX                        ; 0040a421
    JNZ 0x0040a3a9                      ; 0040a423
        ;   XREF to: 0040a3a9 (CONDITIONAL_JUMP)  ; LAB_0040a3a9
    LEA EAX,[ESP + 0xcc]                ; 0040a425
        ;   Label: LAB_0040a425
    PUSH EAX                            ; 0040a42c
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0040a42d
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0040a432
    PUSH ESI                            ; 0040a435
    LEA EDX,[ESP + 0xd0]                ; 0040a436
    PUSH EDX                            ; 0040a43d
    MOV EDI,dword ptr [EBP + 0x18]      ; 0040a43e
    PUSH EDI                            ; 0040a441
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0040a442
    PUSH EBX                            ; 0040a448
    CALL dword ptr [EAX + 0x84]         ; 0040a449
    ADD ESP,0x10                        ; 0040a44f
    LEA EAX,[ESP + 0xcc]                ; 0040a452
    PUSH EAX                            ; 0040a459
    LEA EAX,[ESP + 0x2d4]               ; 0040a45a
    PUSH dword ptr [ESP + 0x3c8]        ; 0040a461
    PUSH EAX                            ; 0040a468
    MOV EDI,dword ptr [ESI + 0x2b0]     ; 0040a469
    PUSH ESI                            ; 0040a46f
    CALL dword ptr [EDI + 0x108]        ; 0040a470
    ADD ESP,0x10                        ; 0040a476
    TEST EAX,EAX                        ; 0040a479
    JZ 0x0040a4fe                       ; 0040a47b
        ;   XREF to: 0040a4fe (CONDITIONAL_JUMP)  ; LAB_0040a4fe
    FLD float ptr [ESP + 0xd0]          ; 0040a481
    FLDZ                                ; 0040a488
    FXCH                                ; 0040a48a
    FSTP double ptr [ESP + 0x8]         ; 0040a48c
    FCOMP double ptr [ESP + 0x8]        ; 0040a490
    FNSTSW AX                           ; 0040a494
    SAHF                                ; 0040a496
    JNC 0x0040a4fe                      ; 0040a497
        ;   XREF to: 0040a4fe (CONDITIONAL_JUMP)  ; LAB_0040a4fe
    FLD double ptr [ESP + 0x8]          ; 0040a499
    FMUL double ptr [0x005ca6ce]        ; 0040a49d | DAT_005ca6ce
    MOV EAX,dword ptr [ESI + 0x280c]    ; 0040a4a3
    FLD1                                ; 0040a4a9
    FADDP                               ; 0040a4ab
    PUSH EAX                            ; 0040a4ad
    CALL crt_math.c_round_FUN_005b7ff0  ; 0040a4ae
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x3dc]       ; 0040a4b3
    MOV EDX,dword ptr [ESP + 0x3dc]     ; 0040a4ba
    PUSH EDX                            ; 0040a4c1
    LEA EAX,[ESP + 0x260]               ; 0040a4c2
    PUSH EAX                            ; 0040a4c9
    LEA EAX,[ESP + 0x2dc]               ; 0040a4ca
    PUSH EAX                            ; 0040a4d1
    MOV ECX,dword ptr [0x006167e0]      ; 0040a4d2 | g_CGorePtr
    PUSH ECX                            ; 0040a4d8
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850 ; 0040a4d9
        ;   XREF to: 004c9850 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 0040a4de
    PUSH ESI                            ; 0040a4e1
    LEA EDX,[ESP + 0xd0]                ; 0040a4e2
    PUSH EDX                            ; 0040a4e9
    MOV EDI,dword ptr [EBP + 0x18]      ; 0040a4ea
    PUSH EDI                            ; 0040a4ed
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0040a4ee
    PUSH EBX                            ; 0040a4f4
    CALL dword ptr [EAX + 0x88]         ; 0040a4f5
    ADD ESP,0x10                        ; 0040a4fb
    LEA EAX,[ESP + 0xcc]                ; 0040a4fe
        ;   Label: LAB_0040a4fe
    PUSH EAX                            ; 0040a505
    LEA EAX,[ESP + 0x34c]               ; 0040a506
    PUSH dword ptr [ESP + 0x3c8]        ; 0040a50d
    PUSH EAX                            ; 0040a514
    MOV EDI,dword ptr [ESI + 0x2b0]     ; 0040a515
    PUSH ESI                            ; 0040a51b
    CALL dword ptr [EDI + 0x108]        ; 0040a51c
    ADD ESP,0x10                        ; 0040a522
    TEST EAX,EAX                        ; 0040a525
    JZ 0x0040a3a9                       ; 0040a527
        ;   XREF to: 0040a3a9 (CONDITIONAL_JUMP)  ; LAB_0040a3a9
    FLD float ptr [ESP + 0xd0]          ; 0040a52d
    FLDZ                                ; 0040a534
    FXCH                                ; 0040a536
    FSTP double ptr [ESP + 0x10]        ; 0040a538
    FCOMP double ptr [ESP + 0x10]       ; 0040a53c
    FNSTSW AX                           ; 0040a540
    SAHF                                ; 0040a542
    JNC 0x0040a3a9                      ; 0040a543
        ;   XREF to: 0040a3a9 (CONDITIONAL_JUMP)  ; LAB_0040a3a9
    FLD double ptr [ESP + 0x10]         ; 0040a549
    FMUL double ptr [0x005ca6ce]        ; 0040a54d | DAT_005ca6ce
    MOV EAX,dword ptr [ESI + 0x280c]    ; 0040a553
    FLD1                                ; 0040a559
    FADDP                               ; 0040a55b
    PUSH EAX                            ; 0040a55d
    CALL crt_math.c_round_FUN_005b7ff0  ; 0040a55e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x3dc]       ; 0040a563
    MOV EDX,dword ptr [ESP + 0x3dc]     ; 0040a56a
    PUSH EDX                            ; 0040a571
    LEA EAX,[ESP + 0x260]               ; 0040a572
    PUSH EAX                            ; 0040a579
    LEA EAX,[ESP + 0x354]               ; 0040a57a
    PUSH EAX                            ; 0040a581
    MOV ECX,dword ptr [0x006167e0]      ; 0040a582 | g_CGorePtr
    PUSH ECX                            ; 0040a588
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850 ; 0040a589
        ;   XREF to: 004c9850 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 0040a58e
    PUSH ESI                            ; 0040a591
    LEA ESI,[ESP + 0xd0]                ; 0040a592
    PUSH ESI                            ; 0040a599
    MOV ESI,dword ptr [EBP + 0x18]      ; 0040a59a
    PUSH ESI                            ; 0040a59d
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0040a59e
    PUSH EBX                            ; 0040a5a4
    CALL dword ptr [EAX + 0x88]         ; 0040a5a5
    ADD ESP,0x10                        ; 0040a5ab
    JMP 0x0040a3a9                      ; 0040a5ae
        ;   XREF to: 0040a3a9 (UNCONDITIONAL_JUMP)  ; LAB_0040a3a9
    MOV ECX,dword ptr [0x02653628]      ; 0040a5b3 | g_CTriggerClassInfo.name_hash
        ;   Label: LAB_0040a5b3
    PUSH ECX                            ; 0040a5b9
    PUSH EDI                            ; 0040a5ba
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0040a5bb
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV dword ptr [ESP + 0x3d8],EAX     ; 0040a5c0
    ADD ESP,0x8                         ; 0040a5c7
    TEST EAX,EAX                        ; 0040a5ca
    JZ 0x0040a6fb                       ; 0040a5cc
        ;   XREF to: 0040a6fb (CONDITIONAL_JUMP)  ; LAB_0040a6fb
    PUSH EBX                            ; 0040a5d2
    PUSH EAX                            ; 0040a5d3
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_00578570 ; 0040a5d4
        ;   XREF to: 00578570 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_00578570(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0040a5d9
    TEST EAX,EAX                        ; 0040a5dc
    JZ 0x0040a3a9                       ; 0040a5de
        ;   XREF to: 0040a3a9 (CONDITIONAL_JUMP)  ; LAB_0040a3a9
    LEA EAX,[ESP + 0x2b8]               ; 0040a5e4
    PUSH dword ptr [ESP + 0x3c4]        ; 0040a5eb
    PUSH EAX                            ; 0040a5f2
    MOV EDX,dword ptr [ESP + 0x3d8]     ; 0040a5f3
    PUSH EDX                            ; 0040a5fa
    LEA ESI,[ESP + 0x2e8]               ; 0040a5fb
    LEA EDI,[ESP + 0x24c]               ; 0040a602
    CALL core_actor.cpp_FUN_00408de0    ; 0040a609
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x2e8]               ; 0040a60e
    ADD ESP,0x8                         ; 0040a615
    LEA EAX,[ESP + 0x244]               ; 0040a618
    MOV ECX,dword ptr [ESP + 0x3d4]     ; 0040a61f
    PUSH EAX                            ; 0040a626
    MOV EAX,dword ptr [ESP + 0x3d8]     ; 0040a627
    MOVSD ES:EDI,ESI                    ; 0040a62e
    MOVSD ES:EDI,ESI                    ; 0040a62f
    MOVSD ES:EDI,ESI                    ; 0040a630
    PUSH ECX                            ; 0040a631
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0040a632
    LEA ESI,[ESP + 0x1d4]               ; 0040a638
    LEA EDI,[ESP + 0x1ec]               ; 0040a63f
    CALL dword ptr [EAX + 0x24]         ; 0040a646
    MOV ECX,0x6                         ; 0040a649
    ADD ESP,0x4                         ; 0040a64e
    LEA EAX,[ESP + 0x1e8]               ; 0040a651
    LEA ESI,[ESP + 0x1d0]               ; 0040a658
    PUSH EAX                            ; 0040a65f
    MOVSD.REP ES:EDI,ESI                ; 0040a660
    CALL core_box.cpp_FUN_0041bc20      ; 0040a662
        ;   XREF to: 0041bc20 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041bc20()
    ADD ESP,0xc                         ; 0040a667
    TEST EAX,EAX                        ; 0040a66a
    JZ 0x0040a3a9                       ; 0040a66c
        ;   XREF to: 0040a3a9 (CONDITIONAL_JUMP)  ; LAB_0040a3a9
    LEA EAX,[ESP + 0x90]                ; 0040a672
    PUSH EAX                            ; 0040a679
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0040a67a
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0040a67f
    MOV EDI,dword ptr [ESP + 0x3d0]     ; 0040a682
    PUSH EDI                            ; 0040a689
    LEA EAX,[ESP + 0x94]                ; 0040a68a
    PUSH EAX                            ; 0040a691
    MOV EAX,dword ptr [EBP + 0x18]      ; 0040a692
    PUSH EAX                            ; 0040a695
    MOV ESI,dword ptr [EBX + 0x2b0]     ; 0040a696
    PUSH EBX                            ; 0040a69c
    CALL dword ptr [ESI + 0x84]         ; 0040a69d
    ADD ESP,0x10                        ; 0040a6a3
    PUSH EDI                            ; 0040a6a6
    FLD float ptr [ESP + 0x98]          ; 0040a6a7
    SUB ESP,0x8                         ; 0040a6ae
    FSTP double ptr [ESP]               ; 0040a6b1
    PUSH EBX                            ; 0040a6b4
    PUSH 0x5ca684                       ; 0040a6b5 | = "%s causing %5.2f damage to %s\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 0040a6ba | g_CConsolePtr
    PUSH ECX                            ; 0040a6c0 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0040a6c1
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x18                        ; 0040a6c6
    PUSH dword ptr [ESP + 0x94]         ; 0040a6c9
    PUSH EDI                            ; 0040a6d0
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_005785b0 ; 0040a6d1
        ;   XREF to: 005785b0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_005785b0(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 0040a6d6
    PUSH EDI                            ; 0040a6d9
    LEA EAX,[ESP + 0x94]                ; 0040a6da
    PUSH EAX                            ; 0040a6e1
    MOV EAX,dword ptr [EBP + 0x18]      ; 0040a6e2
    PUSH EAX                            ; 0040a6e5
    MOV ESI,dword ptr [EBX + 0x2b0]     ; 0040a6e6
    PUSH EBX                            ; 0040a6ec
    CALL dword ptr [ESI + 0x88]         ; 0040a6ed
    ADD ESP,0x10                        ; 0040a6f3
    JMP 0x0040a3a9                      ; 0040a6f6
        ;   XREF to: 0040a3a9 (UNCONDITIONAL_JUMP)  ; LAB_0040a3a9
    MOV EAX,[0x01cb8280]                ; 0040a6fb | g_CGlassClassInfo.name_hash
        ;   Label: LAB_0040a6fb
    PUSH EAX                            ; 0040a700
    PUSH EDI                            ; 0040a701
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0040a702
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV dword ptr [ESP + 0x3d4],EAX     ; 0040a707
    ADD ESP,0x8                         ; 0040a70e
    TEST EAX,EAX                        ; 0040a711
    JZ 0x0040a3a9                       ; 0040a713
        ;   XREF to: 0040a3a9 (CONDITIONAL_JUMP)  ; LAB_0040a3a9
    LEA EAX,[ESP + 0x2b8]               ; 0040a719
    PUSH dword ptr [ESP + 0x3c4]        ; 0040a720
    PUSH EAX                            ; 0040a727
    MOV ECX,dword ptr [ESP + 0x3d4]     ; 0040a728
    PUSH ECX                            ; 0040a72f
    LEA ESI,[ESP + 0x2f4]               ; 0040a730
    LEA EDI,[ESP + 0x258]               ; 0040a737
    CALL core_actor.cpp_FUN_00408de0    ; 0040a73e
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x2f4]               ; 0040a743
    ADD ESP,0x8                         ; 0040a74a
    LEA EAX,[ESP + 0x250]               ; 0040a74d
    MOVSD ES:EDI,ESI                    ; 0040a754
    MOVSD ES:EDI,ESI                    ; 0040a755
    MOVSD ES:EDI,ESI                    ; 0040a756
    PUSH EAX                            ; 0040a757
    MOV ESI,dword ptr [ESP + 0x3d4]     ; 0040a758
    MOV EAX,dword ptr [ESP + 0x3d4]     ; 0040a75f
    PUSH ESI                            ; 0040a766
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0040a767
    LEA ESI,[ESP + 0x234]               ; 0040a76d
    LEA EDI,[ESP + 0x21c]               ; 0040a774
    CALL dword ptr [EAX + 0x24]         ; 0040a77b
    MOV ECX,0x6                         ; 0040a77e
    ADD ESP,0x4                         ; 0040a783
    LEA EAX,[ESP + 0x218]               ; 0040a786
    LEA ESI,[ESP + 0x230]               ; 0040a78d
    PUSH EAX                            ; 0040a794
    MOVSD.REP ES:EDI,ESI                ; 0040a795
    CALL core_box.cpp_FUN_0041bc20      ; 0040a797
        ;   XREF to: 0041bc20 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041bc20()
    ADD ESP,0xc                         ; 0040a79c
    TEST EAX,EAX                        ; 0040a79f
    JZ 0x0040a3a9                       ; 0040a7a1
        ;   XREF to: 0040a3a9 (CONDITIONAL_JUMP)  ; LAB_0040a3a9
    LEA EAX,[ESP + 0x144]               ; 0040a7a7
    PUSH EAX                            ; 0040a7ae
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0040a7af
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0040a7b4
    MOV EDI,dword ptr [ESP + 0x3cc]     ; 0040a7b7
    PUSH EDI                            ; 0040a7be
    LEA EAX,[ESP + 0x148]               ; 0040a7bf
    PUSH EAX                            ; 0040a7c6
    MOV EAX,dword ptr [EBP + 0x18]      ; 0040a7c7
    PUSH EAX                            ; 0040a7ca
    MOV ESI,dword ptr [EBX + 0x2b0]     ; 0040a7cb
    PUSH EBX                            ; 0040a7d1
    CALL dword ptr [ESI + 0x84]         ; 0040a7d2
    ADD ESP,0x10                        ; 0040a7d8
    PUSH EDI                            ; 0040a7db
    LEA EAX,[ESP + 0x148]               ; 0040a7dc
    PUSH EAX                            ; 0040a7e3
    MOV ECX,dword ptr [EBP + 0x18]      ; 0040a7e4
    PUSH ECX                            ; 0040a7e7
    MOV ESI,dword ptr [EBX + 0x2b0]     ; 0040a7e8
    PUSH EBX                            ; 0040a7ee
    CALL dword ptr [ESI + 0x88]         ; 0040a7ef
    ADD ESP,0x10                        ; 0040a7f5
    PUSH EDI                            ; 0040a7f8
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004c72d0 ; 0040a7f9
        ;   XREF to: 004c72d0 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004c72d0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 0040a7fe
    TEST EAX,EAX                        ; 0040a801
    JZ 0x0040a3a9                       ; 0040a803
        ;   XREF to: 0040a3a9 (CONDITIONAL_JUMP)  ; LAB_0040a3a9
    LEA EAX,[ESP + 0x2b8]               ; 0040a809
    PUSH EAX                            ; 0040a810
    PUSH EDI                            ; 0040a811
    CALL core_glass.cpp_FUN_004c6d40    ; 0040a812
        ;   XREF to: 004c6d40 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004c6d40()
    ADD ESP,0x8                         ; 0040a817
    JMP 0x0040a3a9                      ; 0040a81a
        ;   XREF to: 0040a3a9 (UNCONDITIONAL_JUMP)  ; LAB_0040a3a9
    MOV EDX,dword ptr [ESP + 0x3a8]     ; 0040a81f
        ;   Label: LAB_0040a81f
    CMP EDX,0x1                         ; 0040a826
    JZ 0x0040a834                       ; 0040a829
        ;   XREF to: 0040a834 (CONDITIONAL_JUMP)  ; LAB_0040a834
    XOR EAX,EAX                         ; 0040a82b
        ;   Label: LAB_0040a82b
    MOV ESP,EBP                         ; 0040a82d
    POP EBP                             ; 0040a82f
    POP EDI                             ; 0040a830
    POP ESI                             ; 0040a831
    POP EBX                             ; 0040a832
    RET                                 ; 0040a833
    PUSH EDX                            ; 0040a834
        ;   Label: LAB_0040a834
    MOV ECX,dword ptr [0x0061b5a8]      ; 0040a835 | g_CDemonSetPtr
    PUSH ECX                            ; 0040a83b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0 ; 0040a83c
        ;   XREF to: 00537eb0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 0040a841
    PUSH EBX                            ; 0040a844
    MOV ESI,dword ptr [0x0061b5a8]      ; 0040a845 | g_CDemonSetPtr
    PUSH ESI                            ; 0040a84b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0040a84c
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0040a851
    MOV EDI,dword ptr [0x0061b5a8]      ; 0040a854 | g_CDemonSetPtr
    PUSH EDI                            ; 0040a85a | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_skipExactCollisions_FUN_00537df0 ; 0040a85b
        ;   XREF to: 00537df0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_skipExactCollisions_FUN_00537df0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0040a860
    MOV EAX,dword ptr [ESP + 0x3c8]     ; 0040a863
    TEST EAX,EAX                        ; 0040a86a
    JNZ 0x0040a9e9                      ; 0040a86c
        ;   XREF to: 0040a9e9 (CONDITIONAL_JUMP)  ; LAB_0040a9e9
    XOR ESI,ESI                         ; 0040a872
        ;   Label: LAB_0040a872
    MOV dword ptr [ESP + 0x3b4],ESI     ; 0040a874
    LEA EAX,[ESP + 0x2b8]               ; 0040a87b
        ;   Label: LAB_0040a87b
    PUSH EAX                            ; 0040a882
    LEA EAX,[ESP + 0x370]               ; 0040a883
    PUSH EAX                            ; 0040a88a
    MOV EDI,dword ptr [0x0061b5a8]      ; 0040a88b | g_CDemonSetPtr
    PUSH EDI                            ; 0040a891 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00535ee0 ; 0040a892
        ;   XREF to: 00535ee0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00535ee0()
    MOV dword ptr [ESP + 0x3e4],EAX     ; 0040a897
    FLD float ptr [ESP + 0x3e4]         ; 0040a89e
    ADD ESP,0xc                         ; 0040a8a5
    FLDZ                                ; 0040a8a8
    FXCH                                ; 0040a8aa
    FSTP double ptr [ESP]               ; 0040a8ac
    FCOMP double ptr [ESP]              ; 0040a8af
    FNSTSW AX                           ; 0040a8b2
    SAHF                                ; 0040a8b4
    JA 0x0040a82b                       ; 0040a8b5
        ;   XREF to: 0040a82b (CONDITIONAL_JUMP)  ; LAB_0040a82b
    FLD1                                ; 0040a8bb
    FCOMP double ptr [ESP]              ; 0040a8bd
    FNSTSW AX                           ; 0040a8c0
    SAHF                                ; 0040a8c2
    JC 0x0040a82b                       ; 0040a8c3
        ;   XREF to: 0040a82b (CONDITIONAL_JUMP)  ; LAB_0040a82b
    MOV EAX,[0x007bdc94]                ; 0040a8c9 | g_CCharacterClassInfo.name_hash
    PUSH EAX                            ; 0040a8ce
    MOV EAX,[0x0061b5a8]                ; 0040a8cf | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0040a8d4 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 0040a8da
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0040a8db
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0040a8e0
    MOV dword ptr [ESP + 0x3d4],EAX     ; 0040a8e3
    TEST EAX,EAX                        ; 0040a8ea
    JZ 0x0040a90b                       ; 0040a8ec
        ;   XREF to: 0040a90b (CONDITIONAL_JUMP)  ; LAB_0040a90b
    PUSH EAX                            ; 0040a8ee
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 0040a8ef
    CALL dword ptr [ESI + 0x114]        ; 0040a8f5
    ADD ESP,0x4                         ; 0040a8fb
    TEST EAX,EAX                        ; 0040a8fe
    JLE 0x0040a90b                      ; 0040a900
        ;   XREF to: 0040a90b (CONDITIONAL_JUMP)  ; LAB_0040a90b
    XOR ECX,ECX                         ; 0040a902
    MOV dword ptr [ESP + 0x3d4],ECX     ; 0040a904
    MOV ESI,dword ptr [0x01cb8280]      ; 0040a90b | g_CGlassClassInfo.name_hash
        ;   Label: LAB_0040a90b
    MOV EAX,[0x0061b5a8]                ; 0040a911 | g_CDemonSetPtr
    PUSH ESI                            ; 0040a916
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 0040a917 | g_CDemonSetInstance.collision_actor
    PUSH EDI                            ; 0040a91d
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0040a91e
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0040a923
    MOV ESI,EAX                         ; 0040a926
    MOV EAX,[0x02653628]                ; 0040a928 | g_CTriggerClassInfo.name_hash
    PUSH EAX                            ; 0040a92d
    MOV EAX,[0x0061b5a8]                ; 0040a92e | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0040a933 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 0040a939
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0040a93a
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV ECX,dword ptr [0x007c2670]      ; 0040a93f | g_CCrateClassInfo.name_hash
    ADD ESP,0x8                         ; 0040a945
    MOV EDI,EAX                         ; 0040a948
    MOV dword ptr [ESP + 0x3ac],EAX     ; 0040a94a
    MOV EAX,[0x0061b5a8]                ; 0040a951 | g_CDemonSetPtr
    PUSH ECX                            ; 0040a956
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0040a957 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 0040a95d
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0040a95e
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV dword ptr [ESP + 0x3b8],EAX     ; 0040a963
    ADD ESP,0x8                         ; 0040a96a
    MOV ECX,dword ptr [0x01cab6f8]      ; 0040a96d | g_CFlameCanClassInfo.name_hash
    MOV EAX,[0x0061b5a8]                ; 0040a973 | g_CDemonSetPtr
    PUSH ECX                            ; 0040a978
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 0040a979 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 0040a97f
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0040a980
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0040a985
    MOV ECX,dword ptr [ESP + 0x3d4]     ; 0040a988
    TEST ECX,ECX                        ; 0040a98f
    JZ 0x0040abf8                       ; 0040a991
        ;   XREF to: 0040abf8 (CONDITIONAL_JUMP)  ; LAB_0040abf8
    MOV ESI,dword ptr [ESP + 0x3c8]     ; 0040a997
    TEST ESI,ESI                        ; 0040a99e
    JZ 0x0040a9fe                       ; 0040a9a0
        ;   XREF to: 0040a9fe (CONDITIONAL_JUMP)  ; LAB_0040a9fe
    PUSH ECX                            ; 0040a9a2
    MOV EAX,dword ptr [ECX + 0x2b0]     ; 0040a9a3
    CALL dword ptr [EAX + 0xe8]         ; 0040a9a9
    ADD ESP,0x4                         ; 0040a9af
    TEST EAX,EAX                        ; 0040a9b2
    JZ 0x0040a9fe                       ; 0040a9b4
        ;   XREF to: 0040a9fe (CONDITIONAL_JUMP)  ; LAB_0040a9fe
    PUSH 0x5ca6a3                       ; 0040a9b6 | = "CHero"
    PUSH ESI                            ; 0040a9bb
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 0040a9bc
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0040a9c1
    TEST EAX,EAX                        ; 0040a9c4
    JZ 0x0040a9fe                       ; 0040a9c6
        ;   XREF to: 0040a9fe (CONDITIONAL_JUMP)  ; LAB_0040a9fe
    MOV ESI,dword ptr [ESP + 0x3b4]     ; 0040a9c8
        ;   Label: LAB_0040a9c8
    INC ESI                             ; 0040a9cf
    MOV dword ptr [ESP + 0x3b4],ESI     ; 0040a9d0
    CMP ESI,0x4                         ; 0040a9d7
    JL 0x0040a87b                       ; 0040a9da
        ;   XREF to: 0040a87b (CONDITIONAL_JUMP)  ; LAB_0040a87b
    XOR EAX,EAX                         ; 0040a9e0
    MOV ESP,EBP                         ; 0040a9e2
    POP EBP                             ; 0040a9e4
    POP EDI                             ; 0040a9e5
    POP ESI                             ; 0040a9e6
    POP EBX                             ; 0040a9e7
    RET                                 ; 0040a9e8
    PUSH EAX                            ; 0040a9e9
        ;   Label: LAB_0040a9e9
    MOV ECX,dword ptr [0x0061b5a8]      ; 0040a9ea | g_CDemonSetPtr
    PUSH ECX                            ; 0040a9f0 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0040a9f1
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0040a9f6
    JMP 0x0040a872                      ; 0040a9f9
        ;   XREF to: 0040a872 (UNCONDITIONAL_JUMP)  ; LAB_0040a872
    LEA EAX,[ESP + 0x18]                ; 0040a9fe
        ;   Label: LAB_0040a9fe
    PUSH EAX                            ; 0040aa02
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0040aa03
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0040aa08
    MOV EAX,[0x0061b5a8]                ; 0040aa0b | g_CDemonSetPtr
    MOV EDX,dword ptr [ESP + 0x3d4]     ; 0040aa10
    MOV EAX,dword ptr [EAX + 0x14d148]  ; 0040aa17 | g_CDemonSetInstance.collision_part_index
    PUSH EDX                            ; 0040aa1d
    MOV dword ptr [ESP + 0x1c],EAX      ; 0040aa1e
    LEA EAX,[ESP + 0x1c]                ; 0040aa22
    PUSH EAX                            ; 0040aa26
    MOV ECX,dword ptr [EBP + 0x18]      ; 0040aa27
    PUSH ECX                            ; 0040aa2a
    MOV ESI,dword ptr [EBX + 0x2b0]     ; 0040aa2b
    PUSH EBX                            ; 0040aa31
    CALL dword ptr [ESI + 0x84]         ; 0040aa32
    MOV EAX,[0x0061b5a8]                ; 0040aa38 | g_CDemonSetPtr
    LEA ESI,[EAX + 0x14d11c]            ; 0040aa3d
    LEA EDI,[ESP + 0x3a0]               ; 0040aa43
    ADD ESP,0x10                        ; 0040aa4a
    FLD float ptr [ESI + 0x4]           ; 0040aa4d | g_CDemonSetInstance.ray_target.y
    FLD float ptr [ESI + 0x8]           ; 0040aa50 | g_CDemonSetInstance.ray_target.z
    FLD float ptr [ESI]                 ; 0040aa53 | g_CDemonSetInstance.ray_target.x
    LEA ESI,[ESP + 0x288]               ; 0040aa55
    FSUB float ptr [EAX + 0x14d110]     ; 0040aa5c | g_CDemonSetInstance.ray_origin.x
    FXCH ST2                            ; 0040aa62
    FSUB float ptr [EAX + 0x14d114]     ; 0040aa64 | g_CDemonSetInstance.ray_origin.y
    FXCH                                ; 0040aa6a
    FSUB float ptr [EAX + 0x14d118]     ; 0040aa6c | g_CDemonSetInstance.ray_origin.z
    FXCH ST2                            ; 0040aa72
    FSTP float ptr [ESP + 0x288]        ; 0040aa74
    FSTP float ptr [ESP + 0x28c]        ; 0040aa7b
    FSTP float ptr [ESP + 0x290]        ; 0040aa82
    MOVSD ES:EDI,ESI                    ; 0040aa89
    MOVSD ES:EDI,ESI                    ; 0040aa8a
    MOVSD ES:EDI,ESI                    ; 0040aa8b
    FLD float ptr [ESP + 0x394]         ; 0040aa8c
    FMUL ST0                            ; 0040aa93
    FLD float ptr [ESP + 0x390]         ; 0040aa95
    FMUL ST0                            ; 0040aa9c
    FADDP                               ; 0040aa9e
    FLD float ptr [ESP + 0x398]         ; 0040aaa0
    FMUL ST0                            ; 0040aaa7
    FADDP                               ; 0040aaa9
    FSQRT                               ; 0040aaab
    FDIVR double ptr [0x005ca6d6]       ; 0040aaad | DAT_005ca6d6
    FLD float ptr [ESP + 0x390]         ; 0040aab3
    FXCH                                ; 0040aaba
    FSTP float ptr [ESP + 0x3c0]        ; 0040aabc
    FMUL float ptr [ESP + 0x3c0]        ; 0040aac3
    FLD float ptr [ESP + 0x394]         ; 0040aaca
    FMUL float ptr [ESP + 0x3c0]        ; 0040aad1
    FLD float ptr [ESP + 0x398]         ; 0040aad8
    FMUL float ptr [ESP + 0x3c0]        ; 0040aadf
    LEA EDI,[ESP + 0x384]               ; 0040aae6
    LEA ESI,[ESP + 0x330]               ; 0040aaed
    FXCH ST2                            ; 0040aaf4
    FSTP float ptr [ESP + 0x330]        ; 0040aaf6
    FSTP float ptr [ESP + 0x334]        ; 0040aafd
    FSTP float ptr [ESP + 0x338]        ; 0040ab04
    MOVSD ES:EDI,ESI                    ; 0040ab0b
    MOVSD ES:EDI,ESI                    ; 0040ab0c
    MOVSD ES:EDI,ESI                    ; 0040ab0d
    LEA EAX,[ESP + 0x384]               ; 0040ab0e
    LEA ESI,[ESP + 0x24]                ; 0040ab15
    CMP ESI,EAX                         ; 0040ab19
    JZ 0x0040ab3e                       ; 0040ab1b
        ;   XREF to: 0040ab3e (CONDITIONAL_JUMP)  ; LAB_0040ab3e
    MOV EAX,dword ptr [ESP + 0x384]     ; 0040ab1d
    MOV dword ptr [ESP + 0x24],EAX      ; 0040ab24
    MOV EAX,dword ptr [ESP + 0x388]     ; 0040ab28
    MOV dword ptr [ESP + 0x28],EAX      ; 0040ab2f
    MOV EAX,dword ptr [ESP + 0x38c]     ; 0040ab33
    MOV dword ptr [ESP + 0x2c],EAX      ; 0040ab3a
    MOV EAX,[0x0061b5a8]                ; 0040ab3e | g_CDemonSetPtr
        ;   Label: LAB_0040ab3e
    ADD EAX,0x14d138                    ; 0040ab43
    PUSH EAX                            ; 0040ab48
    MOV ESI,dword ptr [ESP + 0x3d8]     ; 0040ab49
    PUSH ESI                            ; 0040ab50
    LEA ESI,[ESP + 0x314]               ; 0040ab51
    LEA EDI,[ESP + 0x380]               ; 0040ab58
    CALL core_actor.cpp_FUN_00408de0    ; 0040ab5f
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x314]               ; 0040ab64
    ADD ESP,0x8                         ; 0040ab6b
    MOVSD ES:EDI,ESI                    ; 0040ab6e
    MOVSD ES:EDI,ESI                    ; 0040ab6f
    MOVSD ES:EDI,ESI                    ; 0040ab70
    LEA EAX,[ESP + 0x34]                ; 0040ab71
    LEA ESI,[ESP + 0x378]               ; 0040ab75
    CMP EAX,ESI                         ; 0040ab7c
    JZ 0x0040aba1                       ; 0040ab7e
        ;   XREF to: 0040aba1 (CONDITIONAL_JUMP)  ; LAB_0040aba1
    MOV EAX,dword ptr [ESP + 0x378]     ; 0040ab80
    MOV dword ptr [ESP + 0x34],EAX      ; 0040ab87
    MOV EAX,dword ptr [ESP + 0x37c]     ; 0040ab8b
    MOV dword ptr [ESP + 0x38],EAX      ; 0040ab92
    MOV EAX,dword ptr [ESP + 0x380]     ; 0040ab96
    MOV dword ptr [ESP + 0x3c],EAX      ; 0040ab9d
    LEA ESI,[ESP + 0x18]                ; 0040aba1
        ;   Label: LAB_0040aba1
    MOV EAX,dword ptr [ESP + 0x3d4]     ; 0040aba5
    PUSH ESI                            ; 0040abac
    MOV EDI,dword ptr [ESP + 0x3d8]     ; 0040abad
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0040abb4
    PUSH EDI                            ; 0040abba
    CALL dword ptr [EAX + 0x110]        ; 0040abbb
    ADD ESP,0x8                         ; 0040abc1
    PUSH EDI                            ; 0040abc4
    LEA EAX,[ESP + 0x1c]                ; 0040abc5
    PUSH EAX                            ; 0040abc9
    MOV EDX,dword ptr [EBP + 0x18]      ; 0040abca
    PUSH EDX                            ; 0040abcd
    MOV ESI,dword ptr [EBX + 0x2b0]     ; 0040abce
    PUSH EBX                            ; 0040abd4
    CALL dword ptr [ESI + 0x88]         ; 0040abd5
    MOV EAX,[0x0061b5a8]                ; 0040abdb | g_CDemonSetPtr
    ADD ESP,0x10                        ; 0040abe0
    MOV ECX,dword ptr [EAX + 0x14d144]  ; 0040abe3 | g_CDemonSetInstance.collision_actor
    PUSH ECX                            ; 0040abe9
    PUSH EAX                            ; 0040abea | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0040abeb
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0040abf0
    JMP 0x0040a9c8                      ; 0040abf3
        ;   XREF to: 0040a9c8 (UNCONDITIONAL_JUMP)  ; LAB_0040a9c8
    TEST ESI,ESI                        ; 0040abf8
        ;   Label: LAB_0040abf8
    JNZ 0x0040ac29                      ; 0040abfa
        ;   XREF to: 0040ac29 (CONDITIONAL_JUMP)  ; LAB_0040ac29
    TEST EDI,EDI                        ; 0040abfc
    JNZ 0x0040ac9d                      ; 0040abfe
        ;   XREF to: 0040ac9d (CONDITIONAL_JUMP)  ; LAB_0040ac9d
    MOV ESI,dword ptr [ESP + 0x3b0]     ; 0040ac04
    TEST ESI,ESI                        ; 0040ac0b
    JNZ 0x0040ad35                      ; 0040ac0d
        ;   XREF to: 0040ad35 (CONDITIONAL_JUMP)  ; LAB_0040ad35
    TEST EAX,EAX                        ; 0040ac13
    JZ 0x0040a82b                       ; 0040ac15
        ;   XREF to: 0040a82b (CONDITIONAL_JUMP)  ; LAB_0040a82b
    PUSH EAX                            ; 0040ac1b
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004a08d0 ; 0040ac1c
        ;   XREF to: 004a08d0 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004a08d0(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 0040ac21
    JMP 0x0040a9c8                      ; 0040ac24
        ;   XREF to: 0040a9c8 (UNCONDITIONAL_JUMP)  ; LAB_0040a9c8
    LEA EAX,[ESP + 0x108]               ; 0040ac29
        ;   Label: LAB_0040ac29
    PUSH EAX                            ; 0040ac30
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0040ac31
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0040ac36
    PUSH ESI                            ; 0040ac39
    LEA EDI,[ESP + 0x10c]               ; 0040ac3a
    PUSH EDI                            ; 0040ac41
    MOV EDX,dword ptr [EBP + 0x18]      ; 0040ac42
    PUSH EDX                            ; 0040ac45
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0040ac46
    PUSH EBX                            ; 0040ac4c
    CALL dword ptr [EAX + 0x84]         ; 0040ac4d
    ADD ESP,0x10                        ; 0040ac53
    PUSH ESI                            ; 0040ac56
    LEA EAX,[ESP + 0x10c]               ; 0040ac57
    PUSH EAX                            ; 0040ac5e
    MOV ECX,dword ptr [EBP + 0x18]      ; 0040ac5f
    PUSH ECX                            ; 0040ac62
    MOV EDI,dword ptr [EBX + 0x2b0]     ; 0040ac63
    PUSH EBX                            ; 0040ac69
    CALL dword ptr [EDI + 0x88]         ; 0040ac6a
    ADD ESP,0x10                        ; 0040ac70
    PUSH ESI                            ; 0040ac73
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004c72d0 ; 0040ac74
        ;   XREF to: 004c72d0 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004c72d0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 0040ac79
    TEST EAX,EAX                        ; 0040ac7c
    JZ 0x0040a82b                       ; 0040ac7e
        ;   XREF to: 0040a82b (CONDITIONAL_JUMP)  ; LAB_0040a82b
    MOV EAX,[0x0061b5a8]                ; 0040ac84 | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 0040ac89
    PUSH EAX                            ; 0040ac8e
    PUSH ESI                            ; 0040ac8f
    CALL core_glass.cpp_FUN_004c6d40    ; 0040ac90
        ;   XREF to: 004c6d40 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004c6d40()
    ADD ESP,0x8                         ; 0040ac95
    JMP 0x0040a9c8                      ; 0040ac98
        ;   XREF to: 0040a9c8 (UNCONDITIONAL_JUMP)  ; LAB_0040a9c8
    PUSH EBX                            ; 0040ac9d
        ;   Label: LAB_0040ac9d
    PUSH EDI                            ; 0040ac9e
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_00578570 ; 0040ac9f
        ;   XREF to: 00578570 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_00578570(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0040aca4
    TEST EAX,EAX                        ; 0040aca7
    JZ 0x0040ad19                       ; 0040aca9
        ;   XREF to: 0040ad19 (CONDITIONAL_JUMP)  ; LAB_0040ad19
    LEA EAX,[ESP + 0x54]                ; 0040acab
    PUSH EAX                            ; 0040acaf
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0040acb0
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0040acb5
    PUSH EDI                            ; 0040acb8
    LEA EAX,[ESP + 0x58]                ; 0040acb9
    PUSH EAX                            ; 0040acbd
    MOV EAX,dword ptr [EBP + 0x18]      ; 0040acbe
    PUSH EAX                            ; 0040acc1
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 0040acc2
    PUSH EBX                            ; 0040acc8
    CALL dword ptr [EDX + 0x84]         ; 0040acc9
    ADD ESP,0x10                        ; 0040accf
    PUSH EDI                            ; 0040acd2
    FLD float ptr [ESP + 0x5c]          ; 0040acd3
    SUB ESP,0x8                         ; 0040acd7
    FSTP double ptr [ESP]               ; 0040acda
    PUSH EBX                            ; 0040acdd
    PUSH 0x5ca6a9                       ; 0040acde | = "%s causing %5.2f damage to %s\n"
    MOV EDX,dword ptr [0x00609ed0]      ; 0040ace3 | g_CConsolePtr
    PUSH EDX                            ; 0040ace9 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0040acea
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x18                        ; 0040acef
    PUSH dword ptr [ESP + 0x58]         ; 0040acf2
    PUSH EDI                            ; 0040acf6
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_005785b0 ; 0040acf7
        ;   XREF to: 005785b0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_005785b0(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 0040acfc
    PUSH ESI                            ; 0040acff
    LEA EAX,[ESP + 0x58]                ; 0040ad00
    PUSH EAX                            ; 0040ad04
    MOV ECX,dword ptr [EBP + 0x18]      ; 0040ad05
    PUSH ECX                            ; 0040ad08
    MOV EDI,dword ptr [EBX + 0x2b0]     ; 0040ad09
    PUSH EBX                            ; 0040ad0f
    CALL dword ptr [EDI + 0x88]         ; 0040ad10
    ADD ESP,0x10                        ; 0040ad16
    MOV ESI,dword ptr [ESP + 0x3ac]     ; 0040ad19
        ;   Label: LAB_0040ad19
    PUSH ESI                            ; 0040ad20
    MOV EDI,dword ptr [0x0061b5a8]      ; 0040ad21 | g_CDemonSetPtr
    PUSH EDI                            ; 0040ad27 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0040ad28
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0040ad2d
    JMP 0x0040a9c8                      ; 0040ad30
        ;   XREF to: 0040a9c8 (UNCONDITIONAL_JUMP)  ; LAB_0040a9c8
    PUSH ESI                            ; 0040ad35
        ;   Label: LAB_0040ad35
    CALL core_crate.cpp_FUN_0043a350    ; 0040ad36
        ;   XREF to: 0043a350 (UNCONDITIONAL_CALL)  ; void core_crate.cpp_FUN_0043a350(CCrate * this_ptr)
    ADD ESP,0x4                         ; 0040ad3b
    JMP 0x0040a9c8                      ; 0040ad3e
        ;   XREF to: 0040a9c8 (UNCONDITIONAL_JUMP)  ; LAB_0040a9c8

