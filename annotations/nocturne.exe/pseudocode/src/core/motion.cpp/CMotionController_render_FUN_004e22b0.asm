; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_render_FUN_004e22b0(CMotionController *this_ptr,CDemonActor *actor)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; Local Variables:
; undefined        Stack[-0xa8]:1  local_a8
; undefined1       Stack[-0xa7]:1  local_a7
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[9]:
;   core_baron.cpp_CBaron_renderTransparent_FUN_004110f0 at 00411280
;   core_batman.cpp_CBatman_renderOpaque_FUN_00414340 at 00414413
;   core_biggs.cpp_CBiggs_renderOpaque_FUN_00415760 at 0041583c
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440 at 004264d3
;   core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_0045a260 at 0045a333
;   core_mimic.cpp_CMimic_renderMirrored_FUN_004d5860 at 004d5aa1
;   core_moloch.cpp_CMoloch_renderOpaque_FUN_004de550 at 004de632
;   core_succubus.cpp_CSuccubus_renderOpaque_FUN_00541640 at 005416fc
;   core_vampboss.cpp_CVampireBoss_renderOpaque_FUN_0054dac0 at 0054db86
;
; Referenced Globals:
;   TerminatedCString s_s_s_0058b4cc
;   TerminatedCString s_s_5_2f_0058b4d5
;   undefined4 DAT_005a0d00
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01cd4318
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_getCurrentStateName_FUN_004e18a0
;   core_motion.cpp_CMotionController_getMotionList_FUN_004e1890
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_2d.c_drawText_FUN_00402600
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e22b0
        ;   Label: core_motion.cpp_CMotionController_render_FUN_004e22b0
    PUSH ESI                            ; 004e22b1
    PUSH EDI                            ; 004e22b2
    PUSH EBP                            ; 004e22b3
    MOV EBP,ESP                         ; 004e22b4
    SUB ESP,0x98                        ; 004e22b6
    SUB EBP,0x7a                        ; 004e22bc
    MOV EDI,dword ptr [EBP + 0x92]      ; 004e22bf
    CMP dword ptr [0x01cd4318],0x0      ; 004e22c5 | DAT_01cd4318
    JNZ 0x004e22d6                      ; 004e22cc
        ;   XREF to: 004e22d6 (CONDITIONAL_JUMP)  ; LAB_004e22d6
    LEA ESP,[EBP + 0x7a]                ; 004e22ce
        ;   Label: LAB_004e22ce
    POP EBP                             ; 004e22d1
    POP EDI                             ; 004e22d2
    POP ESI                             ; 004e22d3
    POP EBX                             ; 004e22d4
    RET                                 ; 004e22d5
    MOV ECX,dword ptr [0x005ae704]      ; 004e22d6 | DAT_005ae704
        ;   Label: LAB_004e22d6
    PUSH ECX                            ; 004e22dc | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 004e22dd
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004e22e2
    TEST EAX,EAX                        ; 004e22e5
    JNZ 0x004e22ce                      ; 004e22e7
        ;   XREF to: 004e22ce (CONDITIONAL_JUMP)  ; LAB_004e22ce
    LEA EDX,[EBP + 0x46]                ; 004e22e9
    MOV dword ptr [EBP + 0x6a],EAX      ; 004e22ec
    PUSH EDX                            ; 004e22ef
    MOV EAX,dword ptr [EDI + 0x14c]     ; 004e22f0
    PUSH EDI                            ; 004e22f6
    LEA EBX,[EBP + 0x5e]                ; 004e22f7
    XOR ESI,ESI                         ; 004e22fa
    CALL dword ptr [EAX + 0x14]         ; 004e22fc
    MOV EDX,dword ptr [0x005ae704]      ; 004e22ff | DAT_005ae704
    MOV EAX,dword ptr [EAX + 0x10]      ; 004e2305
    ADD ESP,0x8                         ; 004e2308
    MOV dword ptr [EBP + 0x6e],EAX      ; 004e230b
    LEA EAX,[EBP + 0x6a]                ; 004e230e
    MOV dword ptr [EBP + 0x72],ESI      ; 004e2311
    FLD float ptr [EAX]                 ; 004e2314
    FMUL float ptr [0x005a0d00]         ; 004e2316 | DAT_005a0d00
    FISTP dword ptr [EBX]               ; 004e231c
    FLD float ptr [EAX + 0x4]           ; 004e231e
    FMUL float ptr [0x005a0d00]         ; 004e2321 | DAT_005a0d00
    FISTP dword ptr [EBX + 0x4]         ; 004e2327
    FLD float ptr [EAX + 0x8]           ; 004e232a
    FMUL float ptr [0x005a0d00]         ; 004e232d | DAT_005a0d00
    FISTP dword ptr [EBX + 0x8]         ; 004e2333
    LEA EAX,[EBP + 0x5e]                ; 004e2336
    PUSH EAX                            ; 004e2339
    MOV EAX,dword ptr [EDX]             ; 004e233a | DAT_01b4d738
    ADD EAX,0xea5d0                     ; 004e233c
    PUSH EAX                            ; 004e2341
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004e2342
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005ae704]                ; 004e2347 | DAT_005ae704
    MOV EAX,dword ptr [EAX]             ; 004e234c | DAT_01b4d738
    MOV DL,byte ptr [EAX + 0xea5e3]     ; 004e234e
    ADD ESP,0x8                         ; 004e2354
    TEST DL,0x80                        ; 004e2357
    JNZ 0x004e22ce                      ; 004e235a
        ;   XREF to: 004e22ce (CONDITIONAL_JUMP)  ; LAB_004e22ce
    MOV EBX,dword ptr [EAX + 0xea5e4]   ; 004e2360
    SAR EBX,0x10                        ; 004e2366
    MOV EDX,dword ptr [EAX + 0xea5e0]   ; 004e2369
    SUB EBX,0x21                        ; 004e236f
    SAR EDX,0x10                        ; 004e2372
    PUSH EBX                            ; 004e2375
    SUB EDX,0x23                        ; 004e2376
    PUSH EDX                            ; 004e2379
    PUSH EDI                            ; 004e237a
    MOV dword ptr [EBP + 0x76],EDX      ; 004e237b
    CALL engine_2d.c_drawText_FUN_00402600 ; 004e237e
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    MOV EAX,dword ptr [EBP + 0x8e]      ; 004e2383
    MOV EDX,dword ptr [EAX + 0x28]      ; 004e2389
    ADD ESP,0xc                         ; 004e238c
    TEST EDX,EDX                        ; 004e238f
    JL 0x004e2448                       ; 004e2391
        ;   XREF to: 004e2448 (CONDITIONAL_JUMP)  ; LAB_004e2448
    PUSH EAX                            ; 004e2397
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004e2398
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EDX,dword ptr [EBP + 0x8e]      ; 004e239d
    MOV EAX,dword ptr [EAX + 0x24]      ; 004e23a3
    MOV ESI,dword ptr [EDX + 0x28]      ; 004e23a6
    ADD ESP,0x4                         ; 004e23a9
    CMP EAX,ESI                         ; 004e23ac
    JZ 0x004e2448                       ; 004e23ae
        ;   XREF to: 004e2448 (CONDITIONAL_JUMP)  ; LAB_004e2448
    LEA EAX,[ESI + ESI*0x1]             ; 004e23b4
    MOV EDI,EAX                         ; 004e23b7
    SHL EDI,0x4                         ; 004e23b9
    PUSH EDX                            ; 004e23bc
    SUB EDI,EAX                         ; 004e23bd
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004e1890 ; 004e23bf
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004e1890(CMotionController * this_ptr)
    ADD EAX,0x4                         ; 004e23c4
    ADD ESP,0x4                         ; 004e23c7
    ADD EAX,EDI                         ; 004e23ca
    PUSH EAX                            ; 004e23cc
    MOV EDX,dword ptr [EBP + 0x8e]      ; 004e23cd
    PUSH EDX                            ; 004e23d3
    CALL core_motion.cpp_CMotionController_getCurrentStateName_FUN_004e18a0 ; 004e23d4
        ;   XREF to: 004e18a0 (UNCONDITIONAL_CALL)  ; char * core_motion.cpp_CMotionController_getCurrentStateName_FUN_004e18a0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004e23d9
    PUSH EAX                            ; 004e23dc
    PUSH 0x58b4cc                       ; 004e23dd | = "%s -> %s"
    LEA EAX,[EBP + -0x1e]               ; 004e23e2
    PUSH EAX                            ; 004e23e5
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004e23e6
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 004e23eb
    LEA EAX,[EBX + 0xb]                 ; 004e23ee
        ;   Label: LAB_004e23ee
    PUSH EAX                            ; 004e23f1
    MOV ECX,dword ptr [EBP + 0x76]      ; 004e23f2
    PUSH ECX                            ; 004e23f5
    LEA EAX,[EBP + -0x1e]               ; 004e23f6
    PUSH EAX                            ; 004e23f9
    CALL engine_2d.c_drawText_FUN_00402600 ; 004e23fa
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 004e23ff
    MOV EAX,dword ptr [EBP + 0x8e]      ; 004e2402
    SUB ESP,0x8                         ; 004e2408
    FLD float ptr [EAX + 0x8]           ; 004e240b
    FSTP double ptr [ESP]               ; 004e240e
    PUSH EAX                            ; 004e2411
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004e2412
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004e2417
    PUSH EAX                            ; 004e241a
    PUSH 0x58b4d5                       ; 004e241b | = "%s : %5.2f"
    LEA EAX,[EBP + -0x1e]               ; 004e2420
    PUSH EAX                            ; 004e2423
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004e2424
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x14                        ; 004e2429
    ADD EBX,0x16                        ; 004e242c
    PUSH EBX                            ; 004e242f
    MOV EDI,dword ptr [EBP + 0x76]      ; 004e2430
    PUSH EDI                            ; 004e2433
    LEA EAX,[EBP + -0x1e]               ; 004e2434
    PUSH EAX                            ; 004e2437
    CALL engine_2d.c_drawText_FUN_00402600 ; 004e2438
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 004e243d
    LEA ESP,[EBP + 0x7a]                ; 004e2440
    POP EBP                             ; 004e2443
    POP EDI                             ; 004e2444
    POP ESI                             ; 004e2445
    POP EBX                             ; 004e2446
    RET                                 ; 004e2447
    MOV EDI,dword ptr [EBP + 0x8e]      ; 004e2448
        ;   Label: LAB_004e2448
    PUSH EDI                            ; 004e244e
    CALL core_motion.cpp_CMotionController_getCurrentStateName_FUN_004e18a0 ; 004e244f
        ;   XREF to: 004e18a0 (UNCONDITIONAL_CALL)  ; char * core_motion.cpp_CMotionController_getCurrentStateName_FUN_004e18a0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004e2454
    LEA EDI,[EBP + -0x1e]               ; 004e2457
    MOV ESI,EAX                         ; 004e245a
    PUSH EDI                            ; 004e245c
    MOV AL,byte ptr [ESI]               ; 004e245d
        ;   Label: LAB_004e245d
    MOV byte ptr [EDI],AL               ; 004e245f
    CMP AL,0x0                          ; 004e2461
    JZ 0x004e2475                       ; 004e2463
        ;   XREF to: 004e2475 (CONDITIONAL_JUMP)  ; LAB_004e2475
    MOV AL,byte ptr [ESI + 0x1]         ; 004e2465
    ADD ESI,0x2                         ; 004e2468
    MOV byte ptr [EDI + 0x1],AL         ; 004e246b
    ADD EDI,0x2                         ; 004e246e
    CMP AL,0x0                          ; 004e2471
    JNZ 0x004e245d                      ; 004e2473
        ;   XREF to: 004e245d (CONDITIONAL_JUMP)  ; LAB_004e245d
    POP EDI                             ; 004e2475
        ;   Label: LAB_004e2475
    JMP 0x004e23ee                      ; 004e2476
        ;   XREF to: 004e23ee (UNCONDITIONAL_JUMP)  ; LAB_004e23ee

