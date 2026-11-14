; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_turret_cpp_FUN_0057f0b0(CCharacter *param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x178]:1  local_178
; undefined        Stack[-0x130]:1  local_130
;
; Referenced Globals:
;   TerminatedCString s_s_has_no_guard_trigger_005ed7e7
;   undefined4 DAT_005ed804
;   undefined4 DAT_005ed808
;   undefined4 DAT_005ed80c
;   WatcomTypeInfo g_CVectorTypeInfo
;   undefined4 DAT_005fd52c
;   undefined4 DAT_005fd530
;   CConsole* g_CConsolePtr = 007c158c
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CConsole g_CConsoleInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_isOfClass_FUN_0040c840
;   core_box.cpp_CBoundingBox3D_expand_FUN_0041a590
;   core_box.cpp_CBoundingBox3D_reset_FUN_0041b600
;   core_box.cpp_FUN_0041a600
;   core_turret.cpp_CTurret_aimAtTarget_FUN_0057f700
;   core_turret.cpp_CTurret_updatePatrol_FUN_0057fa00
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;   crt_memory.c___arrinit_FUN_005b7f5f
;   engine_console.cpp_CConsole_printf_FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057f0b0
        ;   Label: core_turret.cpp_FUN_0057f0b0
    PUSH ESI                            ; 0057f0b1
    PUSH EDI                            ; 0057f0b2
    PUSH EBP                            ; 0057f0b3
    MOV EBP,ESP                         ; 0057f0b4
    SUB ESP,0x1dc                       ; 0057f0b6
    AND ESP,0xfffffff8                  ; 0057f0bc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f0bf
    MOV EDX,dword ptr [EAX + 0x8dc]     ; 0057f0c2
    TEST EDX,EDX                        ; 0057f0c8
    JZ 0x0057f2ac                       ; 0057f0ca
        ;   XREF to: 0057f2ac (CONDITIONAL_JUMP)  ; LAB_0057f2ac
    MOV EAX,EDX                         ; 0057f0d0
    PUSH EAX                            ; 0057f0d2
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 0057f0d3
    LEA ESI,[ESP + 0xc4]                ; 0057f0d9
    LEA EDI,[ESP + 0x7c]                ; 0057f0e0
    CALL dword ptr [EDX + 0x24]         ; 0057f0e4
    MOV ECX,0x6                         ; 0057f0e7
    LEA ESI,[ESP + 0xc4]                ; 0057f0ec
    ADD ESP,0x4                         ; 0057f0f3
    LEA EAX,[ESP + 0xd8]                ; 0057f0f6
    XOR EBX,EBX                         ; 0057f0fd
    PUSH EAX                            ; 0057f0ff
    MOVSD.REP ES:EDI,ESI                ; 0057f100
    CALL core_box.cpp_CBoundingBox3D_reset_FUN_0041b600 ; 0057f102
        ;   XREF to: 0041b600 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_reset_FUN_0041b600(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 0057f107
    PUSH EBX                            ; 0057f10a
        ;   Label: LAB_0057f10a
    LEA EAX,[ESP + 0x7c]                ; 0057f10b
    PUSH EAX                            ; 0057f10f
    LEA ESI,[ESP + 0x1b8]               ; 0057f110
    LEA EDI,[ESP + 0x170]               ; 0057f117
    CALL core_box.cpp_FUN_0041a600      ; 0057f11e
        ;   XREF to: 0041a600 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a600()
    ADD ESP,0x8                         ; 0057f123
    LEA EAX,[ESP + 0x168]               ; 0057f126
    LEA ESI,[ESP + 0x1b0]               ; 0057f12d
    PUSH EAX                            ; 0057f134
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f135
    MOVSD ES:EDI,ESI                    ; 0057f138
    MOVSD ES:EDI,ESI                    ; 0057f139
    MOVSD ES:EDI,ESI                    ; 0057f13a
    MOV ESI,dword ptr [EAX + 0x8dc]     ; 0057f13b
    PUSH ESI                            ; 0057f141
    LEA ESI,[ESP + 0x164]               ; 0057f142
    LEA EDI,[ESP + 0x1c4]               ; 0057f149
    CALL core_actor.cpp_FUN_00408d70    ; 0057f150
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0057f155
    LEA EAX,[ESP + 0x1bc]               ; 0057f158
    LEA ESI,[ESP + 0x15c]               ; 0057f15f
    PUSH EAX                            ; 0057f166
    LEA EAX,[ESP + 0xdc]                ; 0057f167
    INC EBX                             ; 0057f16e
    PUSH EAX                            ; 0057f16f
    MOVSD ES:EDI,ESI                    ; 0057f170
    MOVSD ES:EDI,ESI                    ; 0057f171
    MOVSD ES:EDI,ESI                    ; 0057f172
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041a590 ; 0057f173
        ;   XREF to: 0041a590 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_0041a590(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 0057f178
    CMP EBX,0x8                         ; 0057f17b
    JL 0x0057f10a                       ; 0057f17e
        ;   XREF to: 0057f10a (CONDITIONAL_JUMP)  ; LAB_0057f10a
    FLD float ptr [ESP + 0xd8]          ; 0057f180
    FLD float ptr [ESP + 0xdc]          ; 0057f187
    FLD float ptr [ESP + 0xe0]          ; 0057f18e
    FLD float ptr [ESP + 0xe4]          ; 0057f195
    FLD float ptr [ESP + 0xe8]          ; 0057f19c
    FLD float ptr [ESP + 0xec]          ; 0057f1a3
    MOV EDI,0x4479c000                  ; 0057f1aa
    LEA EAX,[ESP + 0xa8]                ; 0057f1af
    XOR ECX,ECX                         ; 0057f1b6
    MOV dword ptr [ESP + 0x18c],EDI     ; 0057f1b8
    MOV dword ptr [ESP + 0x190],EDI     ; 0057f1bf
    MOV dword ptr [ESP + 0x194],EDI     ; 0057f1c6
    MOV dword ptr [ESP + 0x1d8],ECX     ; 0057f1cd
    ADD EAX,0xc                         ; 0057f1d4
    MOV dword ptr [ESP + 0x1d0],ECX     ; 0057f1d7
    FXCH ST5                            ; 0057f1de
    FLD float ptr [0x005ed804]          ; 0057f1e0 | DAT_005ed804
    FXCH                                ; 0057f1e6
    FADD ST0,ST1                        ; 0057f1e8
    FXCH ST5                            ; 0057f1ea
    FADD ST0,ST1                        ; 0057f1ec
    FXCH ST4                            ; 0057f1ee
    FADDP                               ; 0057f1f0
    FXCH ST2                            ; 0057f1f2
    FLD float ptr [0x005ed808]          ; 0057f1f4 | DAT_005ed808
    FXCH                                ; 0057f1fa
    FADD ST0,ST1                        ; 0057f1fc
    FXCH ST2                            ; 0057f1fe
    FADD ST0,ST1                        ; 0057f200
    FXCH ST6                            ; 0057f202
    FADDP                               ; 0057f204
    FXCH ST3                            ; 0057f206
    FSTP float ptr [ESP + 0xdc]         ; 0057f208
    FXCH                                ; 0057f20f
    FSTP float ptr [ESP + 0xe0]         ; 0057f211
    FSTP float ptr [ESP + 0xe4]         ; 0057f218
    FXCH ST2                            ; 0057f21f
    FSTP float ptr [ESP + 0xe8]         ; 0057f221
    MOV dword ptr [ESP + 0x1d4],EAX     ; 0057f228
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f22f
    FXCH                                ; 0057f232
    FSTP float ptr [ESP + 0xec]         ; 0057f234
    ADD EAX,0x8e0                       ; 0057f23b
    FSTP float ptr [ESP + 0xd8]         ; 0057f240
    MOV dword ptr [ESP + 0x1c8],EAX     ; 0057f247
    MOV EAX,[0x0061b5a8]                ; 0057f24e | g_CDemonSetPtr
        ;   Label: LAB_0057f24e
    MOV EDX,dword ptr [ESP + 0x1d8]     ; 0057f253
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 0057f25a | g_CDemonSetInstance.actor_count
    JGE 0x0057f688                      ; 0057f260
        ;   XREF to: 0057f688 (CONDITIONAL_JUMP)  ; LAB_0057f688
    MOV EBX,dword ptr [ESP + 0x1d0]     ; 0057f266
    MOV ESI,dword ptr [ESP + 0x1c8]     ; 0057f26d
    ADD EAX,EBX                         ; 0057f274
    PUSH ESI                            ; 0057f276
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 0057f277 | g_CDemonSetInstance.actors[0]
    PUSH EBX                            ; 0057f27d
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 0057f27e
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0057f283
    TEST EAX,EAX                        ; 0057f286
    JNZ 0x0057f2c8                      ; 0057f288
        ;   XREF to: 0057f2c8 (CONDITIONAL_JUMP)  ; LAB_0057f2c8
    MOV ECX,dword ptr [ESP + 0x1d8]     ; 0057f28a
        ;   Label: LAB_0057f28a
    MOV EDX,dword ptr [ESP + 0x1d0]     ; 0057f291
    INC ECX                             ; 0057f298
    ADD EDX,0x4                         ; 0057f299
    MOV dword ptr [ESP + 0x1d8],ECX     ; 0057f29c
    MOV dword ptr [ESP + 0x1d0],EDX     ; 0057f2a3
    JMP 0x0057f24e                      ; 0057f2aa
        ;   XREF to: 0057f24e (UNCONDITIONAL_JUMP)  ; LAB_0057f24e
    PUSH EAX                            ; 0057f2ac
        ;   Label: LAB_0057f2ac
    PUSH 0x5ed7e7                       ; 0057f2ad | = "%s has no guard trigger!\n"
    MOV EBX,dword ptr [0x00609ed0]      ; 0057f2b2 | g_CConsolePtr
    PUSH EBX                            ; 0057f2b8 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 0057f2b9
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0057f2be
    MOV ESP,EBP                         ; 0057f2c1
    POP EBP                             ; 0057f2c3
    POP EDI                             ; 0057f2c4
    POP ESI                             ; 0057f2c5
    POP EBX                             ; 0057f2c6
    RET                                 ; 0057f2c7
    LEA EDX,[EBX + 0x20]                ; 0057f2c8
        ;   Label: LAB_0057f2c8
    FLD float ptr [ESP + 0xd8]          ; 0057f2cb
    FCOMP float ptr [EDX]               ; 0057f2d2
    FNSTSW AX                           ; 0057f2d4
    SAHF                                ; 0057f2d6
    JA 0x0057f28a                       ; 0057f2d7
        ;   XREF to: 0057f28a (CONDITIONAL_JUMP)  ; LAB_0057f28a
    FLD float ptr [ESP + 0xdc]          ; 0057f2d9
    FCOMP float ptr [EDX + 0x4]         ; 0057f2e0
    FNSTSW AX                           ; 0057f2e3
    SAHF                                ; 0057f2e5
    JA 0x0057f28a                       ; 0057f2e6
        ;   XREF to: 0057f28a (CONDITIONAL_JUMP)  ; LAB_0057f28a
    FLD float ptr [ESP + 0xe0]          ; 0057f2e8
    FCOMP float ptr [EDX + 0x8]         ; 0057f2ef
    FNSTSW AX                           ; 0057f2f2
    SAHF                                ; 0057f2f4
    JA 0x0057f28a                       ; 0057f2f5
        ;   XREF to: 0057f28a (CONDITIONAL_JUMP)  ; LAB_0057f28a
    FLD float ptr [ESP + 0xe4]          ; 0057f2f7
    FCOMP float ptr [EDX]               ; 0057f2fe
    FNSTSW AX                           ; 0057f300
    SAHF                                ; 0057f302
    JC 0x0057f28a                       ; 0057f303
        ;   XREF to: 0057f28a (CONDITIONAL_JUMP)  ; LAB_0057f28a
    FLD float ptr [ESP + 0xe8]          ; 0057f305
    FCOMP float ptr [EDX + 0x4]         ; 0057f30c
    FNSTSW AX                           ; 0057f30f
    SAHF                                ; 0057f311
    JC 0x0057f28a                       ; 0057f312
        ;   XREF to: 0057f28a (CONDITIONAL_JUMP)  ; LAB_0057f28a
    FLD float ptr [ESP + 0xec]          ; 0057f318
    FCOMP float ptr [EDX + 0x8]         ; 0057f31f
    FNSTSW AX                           ; 0057f322
    SAHF                                ; 0057f324
    JC 0x0057f28a                       ; 0057f325
        ;   XREF to: 0057f28a (CONDITIONAL_JUMP)  ; LAB_0057f28a
    PUSH EBX                            ; 0057f32b
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0057f32c
    CALL dword ptr [EAX + 0x64]         ; 0057f332
    ADD ESP,0x4                         ; 0057f335
    TEST EAX,EAX                        ; 0057f338
    JZ 0x0057f28a                       ; 0057f33a
        ;   XREF to: 0057f28a (CONDITIONAL_JUMP)  ; LAB_0057f28a
    PUSH 0x5f22b0                       ; 0057f340 | g_CVectorTypeInfo
    PUSH 0xa                            ; 0057f345
    LEA EAX,[ESP + 0x8]                 ; 0057f347
    PUSH EAX                            ; 0057f34b
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0057f34c
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0057f351
    MOV EDX,ESP                         ; 0057f354
    PUSH EDX                            ; 0057f356
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0057f357
    PUSH EBX                            ; 0057f35d
    CALL dword ptr [EAX + 0x5c]         ; 0057f35e
    ADD ESP,0x8                         ; 0057f361
    CMP EAX,0x1                         ; 0057f364
    JGE 0x0057f460                      ; 0057f367
        ;   XREF to: 0057f460 (CONDITIONAL_JUMP)  ; LAB_0057f460
    PUSH EBX                            ; 0057f36d
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0057f36e
    LEA ESI,[ESP + 0x94]                ; 0057f374
    LEA EDI,[ESP + 0xac]                ; 0057f37b
    CALL dword ptr [EAX + 0x24]         ; 0057f382
    MOV ECX,0x6                         ; 0057f385
    LEA ESI,[ESP + 0x94]                ; 0057f38a
    ADD ESP,0x4                         ; 0057f391
    MOVSD.REP ES:EDI,ESI                ; 0057f394
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 0057f396
    FLD float ptr [ESP + 0xa8]          ; 0057f39d
    FLD float ptr [ESP + 0xac]          ; 0057f3a4
    FLD float ptr [ESP + 0xb0]          ; 0057f3ab
    LEA EDI,[ESP + 0x174]               ; 0057f3b2
    LEA ESI,[ESP + 0x12c]               ; 0057f3b9
    FXCH ST2                            ; 0057f3c0
    FADD float ptr [EAX]                ; 0057f3c2
    FXCH                                ; 0057f3c4
    FADD float ptr [EAX + 0x4]          ; 0057f3c6
    FXCH ST2                            ; 0057f3c9
    FADD float ptr [EAX + 0x8]          ; 0057f3cb
    FXCH                                ; 0057f3ce
    FSTP float ptr [ESP + 0x12c]        ; 0057f3d0
    FXCH                                ; 0057f3d7
    FSTP float ptr [ESP + 0x130]        ; 0057f3d9
    FSTP float ptr [ESP + 0x134]        ; 0057f3e0
    MOVSD ES:EDI,ESI                    ; 0057f3e7
    MOVSD ES:EDI,ESI                    ; 0057f3e8
    MOVSD ES:EDI,ESI                    ; 0057f3e9
    FLD float ptr [0x005ed80c]          ; 0057f3ea | DAT_005ed80c
    FLD float ptr [ESP + 0x174]         ; 0057f3f0
    FMUL ST1                            ; 0057f3f7
    FLD float ptr [ESP + 0x178]         ; 0057f3f9
    FMUL ST2                            ; 0057f400
    FLD float ptr [ESP + 0x17c]         ; 0057f402
    FMULP ST3                           ; 0057f409
    MOV EDX,ESP                         ; 0057f40b
    LEA EAX,[ESP + 0x120]               ; 0057f40d
    LEA EDI,[ESP + 0x120]               ; 0057f414
    LEA ESI,[ESP + 0x114]               ; 0057f41b
    FXCH                                ; 0057f422
    FSTP float ptr [ESP + 0x114]        ; 0057f424
    FSTP float ptr [ESP + 0x118]        ; 0057f42b
    FSTP float ptr [ESP + 0x11c]        ; 0057f432
    MOVSD ES:EDI,ESI                    ; 0057f439
    MOVSD ES:EDI,ESI                    ; 0057f43a
    MOVSD ES:EDI,ESI                    ; 0057f43b
    CMP EDX,EAX                         ; 0057f43c
    JZ 0x0057f460                       ; 0057f43e
        ;   XREF to: 0057f460 (CONDITIONAL_JUMP)  ; LAB_0057f460
    MOV EAX,dword ptr [ESP + 0x120]     ; 0057f440
    MOV dword ptr [ESP],EAX             ; 0057f447
    MOV EAX,dword ptr [ESP + 0x124]     ; 0057f44a
    MOV dword ptr [ESP + 0x4],EAX       ; 0057f451
    MOV EAX,dword ptr [ESP + 0x128]     ; 0057f455
    MOV dword ptr [ESP + 0x8],EAX       ; 0057f45c
    MOV EAX,ESP                         ; 0057f460
        ;   Label: LAB_0057f460
    PUSH EAX                            ; 0057f462
    PUSH EBX                            ; 0057f463
    LEA ESI,[ESP + 0x1ac]               ; 0057f464
    LEA EDI,[ESP + 0x140]               ; 0057f46b
    CALL core_actor.cpp_FUN_00408d70    ; 0057f472
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0057f477
    LEA EAX,[ESP + 0x138]               ; 0057f47a
    LEA ESI,[ESP + 0x1a4]               ; 0057f481
    PUSH EAX                            ; 0057f488
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f489
    MOVSD ES:EDI,ESI                    ; 0057f48c
    MOVSD ES:EDI,ESI                    ; 0057f48d
    MOVSD ES:EDI,ESI                    ; 0057f48e
    MOV EDI,dword ptr [EAX + 0x8dc]     ; 0057f48f
    PUSH EDI                            ; 0057f495
    LEA ESI,[ESP + 0x1a0]               ; 0057f496
    CALL core_actor.cpp_FUN_00408de0    ; 0057f49d
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA EDI,[ESP + 0x14c]               ; 0057f4a2
    LEA ESI,[ESP + 0x1a0]               ; 0057f4a9
    ADD ESP,0x8                         ; 0057f4b0
    MOVSD ES:EDI,ESI                    ; 0057f4b3
    MOVSD ES:EDI,ESI                    ; 0057f4b4
    MOVSD ES:EDI,ESI                    ; 0057f4b5
    FLD float ptr [ESP + 0x78]          ; 0057f4b6
    FCOMP float ptr [ESP + 0x144]       ; 0057f4ba
    FNSTSW AX                           ; 0057f4c1
    SAHF                                ; 0057f4c3
    JA 0x0057f28a                       ; 0057f4c4
        ;   XREF to: 0057f28a (CONDITIONAL_JUMP)  ; LAB_0057f28a
    FLD float ptr [ESP + 0x7c]          ; 0057f4ca
    FCOMP float ptr [ESP + 0x148]       ; 0057f4ce
    FNSTSW AX                           ; 0057f4d5
    SAHF                                ; 0057f4d7
    JA 0x0057f28a                       ; 0057f4d8
        ;   XREF to: 0057f28a (CONDITIONAL_JUMP)  ; LAB_0057f28a
    FLD float ptr [ESP + 0x80]          ; 0057f4de
    FCOMP float ptr [ESP + 0x14c]       ; 0057f4e5
    FNSTSW AX                           ; 0057f4ec
    SAHF                                ; 0057f4ee
    JA 0x0057f28a                       ; 0057f4ef
        ;   XREF to: 0057f28a (CONDITIONAL_JUMP)  ; LAB_0057f28a
    FLD float ptr [ESP + 0x84]          ; 0057f4f5
    FCOMP float ptr [ESP + 0x144]       ; 0057f4fc
    FNSTSW AX                           ; 0057f503
    SAHF                                ; 0057f505
    JC 0x0057f28a                       ; 0057f506
        ;   XREF to: 0057f28a (CONDITIONAL_JUMP)  ; LAB_0057f28a
    FLD float ptr [ESP + 0x88]          ; 0057f50c
    FCOMP float ptr [ESP + 0x148]       ; 0057f513
    FNSTSW AX                           ; 0057f51a
    SAHF                                ; 0057f51c
    JC 0x0057f28a                       ; 0057f51d
        ;   XREF to: 0057f28a (CONDITIONAL_JUMP)  ; LAB_0057f28a
    FLD float ptr [ESP + 0x8c]          ; 0057f523
    FCOMP float ptr [ESP + 0x14c]       ; 0057f52a
    FNSTSW AX                           ; 0057f531
    SAHF                                ; 0057f533
    JC 0x0057f28a                       ; 0057f534
        ;   XREF to: 0057f28a (CONDITIONAL_JUMP)  ; LAB_0057f28a
    LEA EAX,[ESP + 0x138]               ; 0057f53a
    PUSH EAX                            ; 0057f541
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f542
    PUSH EAX                            ; 0057f545
    LEA ESI,[ESP + 0xf8]                ; 0057f546
    LEA EDI,[ESP + 0x188]               ; 0057f54d
    CALL core_actor.cpp_FUN_00408de0    ; 0057f554
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0xf8]                ; 0057f559
    ADD ESP,0x8                         ; 0057f560
    LEA EAX,[ESP + 0x180]               ; 0057f563
    MOVSD ES:EDI,ESI                    ; 0057f56a
    MOVSD ES:EDI,ESI                    ; 0057f56b
    MOVSD ES:EDI,ESI                    ; 0057f56c
    PUSH EAX                            ; 0057f56d
    LEA ESI,[ESP + 0x100]               ; 0057f56e
    LEA EDI,[ESP + 0x154]               ; 0057f575
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 0057f57c
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x100]               ; 0057f581
    ADD ESP,0x4                         ; 0057f588
    MOVSD ES:EDI,ESI                    ; 0057f58b
    MOVSD ES:EDI,ESI                    ; 0057f58c
    MOVSD ES:EDI,ESI                    ; 0057f58d
    FLD float ptr [ESP + 0x150]         ; 0057f58e
    FCOMP float ptr [0x005fd52c]        ; 0057f595 | DAT_005fd52c
    FNSTSW AX                           ; 0057f59b
    SAHF                                ; 0057f59d
    JC 0x0057f28a                       ; 0057f59e
        ;   XREF to: 0057f28a (CONDITIONAL_JUMP)  ; LAB_0057f28a
    FLD float ptr [ESP + 0x150]         ; 0057f5a4
    FCOMP float ptr [0x005fd530]        ; 0057f5ab | DAT_005fd530
    FNSTSW AX                           ; 0057f5b1
    SAHF                                ; 0057f5b3
    JA 0x0057f28a                       ; 0057f5b4
        ;   XREF to: 0057f28a (CONDITIONAL_JUMP)  ; LAB_0057f28a
    FLD float ptr [ESP + 0x154]         ; 0057f5ba
    FMUL ST0                            ; 0057f5c1
    FLD float ptr [ESP + 0x150]         ; 0057f5c3
    FMUL ST0                            ; 0057f5ca
    FADDP                               ; 0057f5cc
    FLD float ptr [ESP + 0x158]         ; 0057f5ce
    FMUL ST0                            ; 0057f5d5
    FADDP                               ; 0057f5d7
    FSQRT                               ; 0057f5d9
    FLD float ptr [ESP + 0x190]         ; 0057f5db
    FMUL ST0                            ; 0057f5e2
    FLD float ptr [ESP + 0x18c]         ; 0057f5e4
    FMUL ST0                            ; 0057f5eb
    FADDP                               ; 0057f5ed
    FLD float ptr [ESP + 0x194]         ; 0057f5ef
    FMUL ST0                            ; 0057f5f6
    FADDP                               ; 0057f5f8
    FSQRT                               ; 0057f5fa
    FCOMPP                              ; 0057f5fc
    FNSTSW AX                           ; 0057f5fe
    SAHF                                ; 0057f600
    JC 0x0057f28a                       ; 0057f601
        ;   XREF to: 0057f28a (CONDITIONAL_JUMP)  ; LAB_0057f28a
    LEA EAX,[ESP + 0x18c]               ; 0057f607
    LEA EDX,[ESP + 0x150]               ; 0057f60e
    CMP EAX,EDX                         ; 0057f615
    JZ 0x0057f643                       ; 0057f617
        ;   XREF to: 0057f643 (CONDITIONAL_JUMP)  ; LAB_0057f643
    MOV EAX,dword ptr [ESP + 0x150]     ; 0057f619
    MOV dword ptr [ESP + 0x18c],EAX     ; 0057f620
    MOV EAX,dword ptr [ESP + 0x154]     ; 0057f627
    MOV dword ptr [ESP + 0x190],EAX     ; 0057f62e
    MOV EAX,dword ptr [ESP + 0x158]     ; 0057f635
    MOV dword ptr [ESP + 0x194],EAX     ; 0057f63c
    LEA EAX,[ESP + 0x108]               ; 0057f643
        ;   Label: LAB_0057f643
    LEA EDX,[ESP + 0x138]               ; 0057f64a
    CMP EAX,EDX                         ; 0057f651
    JZ 0x0057f28a                       ; 0057f653
        ;   XREF to: 0057f28a (CONDITIONAL_JUMP)  ; LAB_0057f28a
    MOV EAX,dword ptr [ESP + 0x138]     ; 0057f659
    MOV dword ptr [ESP + 0x108],EAX     ; 0057f660
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0057f667
    MOV dword ptr [ESP + 0x10c],EAX     ; 0057f66e
    MOV EAX,dword ptr [ESP + 0x140]     ; 0057f675
    MOV dword ptr [ESP + 0x110],EAX     ; 0057f67c
    JMP 0x0057f28a                      ; 0057f683
        ;   XREF to: 0057f28a (UNCONDITIONAL_JUMP)  ; LAB_0057f28a
    CMP dword ptr [ESP + 0x190],0x42c60000 ; 0057f688
        ;   Label: LAB_0057f688
    JG 0x0057f6e8                       ; 0057f693
        ;   XREF to: 0057f6e8 (CONDITIONAL_JUMP)  ; LAB_0057f6e8
    LEA EAX,[ESP + 0x108]               ; 0057f695
    PUSH dword ptr [EBP + 0x18]         ; 0057f69c
    PUSH EAX                            ; 0057f69f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f6a0
    PUSH EAX                            ; 0057f6a3
    CALL core_turret.cpp_CTurret_aimAtTarget_FUN_0057f700 ; 0057f6a4
        ;   XREF to: 0057f700 (UNCONDITIONAL_CALL)  ; int core_turret.cpp_CTurret_aimAtTarget_FUN_0057f700(CTurret * this_ptr, CVector3f * target_pos, float delta_time)
    ADD ESP,0xc                         ; 0057f6a9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f6ac
    FLD float ptr [EAX + 0x45c]         ; 0057f6af
    FLDZ                                ; 0057f6b5
    FCOMPP                              ; 0057f6b7
    FNSTSW AX                           ; 0057f6b9
    SAHF                                ; 0057f6bb
    JC 0x0057f6d4                       ; 0057f6bc
        ;   XREF to: 0057f6d4 (CONDITIONAL_JUMP)  ; LAB_0057f6d4
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057f6be
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f6c1
    PUSH EDX                            ; 0057f6c4
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0057f6c5
    CALL dword ptr [EAX + 0xec]         ; 0057f6cb
    ADD ESP,0x4                         ; 0057f6d1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f6d4
        ;   Label: LAB_0057f6d4
    MOV dword ptr [EAX + 0x9c8],0x3f800000 ; 0057f6d7
    MOV ESP,EBP                         ; 0057f6e1
    POP EBP                             ; 0057f6e3
    POP EDI                             ; 0057f6e4
    POP ESI                             ; 0057f6e5
    POP EBX                             ; 0057f6e6
    RET                                 ; 0057f6e7
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057f6e8
        ;   Label: LAB_0057f6e8
    PUSH dword ptr [EBP + 0x18]         ; 0057f6eb
    PUSH ECX                            ; 0057f6ee
    CALL core_turret.cpp_CTurret_updatePatrol_FUN_0057fa00 ; 0057f6ef
        ;   XREF to: 0057fa00 (UNCONDITIONAL_CALL)  ; void core_turret.cpp_CTurret_updatePatrol_FUN_0057fa00(CTurret * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0057f6f4
    MOV ESP,EBP                         ; 0057f6f7
    POP EBP                             ; 0057f6f9
    POP EDI                             ; 0057f6fa
    POP ESI                             ; 0057f6fb
    POP EBX                             ; 0057f6fc
    RET                                 ; 0057f6fd

