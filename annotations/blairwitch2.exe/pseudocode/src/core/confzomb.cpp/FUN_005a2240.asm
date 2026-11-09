; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_confzomb_cpp_FUN_005a2240(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005efe97
;   undefined4 DAT_005efe9c
;   TerminatedCString s_Chasing_005efea1
;   TerminatedCString s_MeleeAttack_005efea9
;   TerminatedCString s_RangeAttack_005efeb5
;   TerminatedCString s_Death_005efec1
;   TerminatedCString s_Animation_005efec7
;   undefined4 DAT_005efed1
;   TerminatedCString s_Chasing_005efed6
;   TerminatedCString s_MeleeAttack_005efede
;   TerminatedCString s_ChaseComplete_005efeea
;   TerminatedCString s_RangeAttack_005efef8
;   TerminatedCString s_ChaseComplete_005eff04
;   undefined4 DAT_005eff13
;   undefined4 DAT_005fef90
;
; Called Functions:
;   core_cloth.cpp_FUN_005b1890
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   unkaddr_0059d350.cpp_FUN_0059d7f0
;   unkaddr_0059d350.cpp_FUN_0059daa0
;   unkaddr_0059d350.cpp_FUN_0059dae0
;   unkafter_basicene.cpp_FUN_0059f570
;   unkafter_basicene.cpp_FUN_005a01a0
;   unkafter_superopt.cpp_FUN_005a8180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a2240
        ;   Label: core_confzomb.cpp_FUN_005a2240
    PUSH ESI                            ; 005a2241
    PUSH EDI                            ; 005a2242
    SUB ESP,0x38                        ; 005a2243
    MOV EBX,dword ptr [ESP + 0x48]      ; 005a2246
    LEA EAX,[EBX + 0x264]               ; 005a224a
    PUSH dword ptr [ESP + 0x4c]         ; 005a2250
    PUSH EAX                            ; 005a2254
    CALL unkafter_superopt.cpp_FUN_005a8180 ; 005a2255
        ;   XREF to: 005a8180 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8180()
    ADD ESP,0x8                         ; 005a225a
    PUSH 0x5efe97                       ; 005a225d | DAT_005efe97
    LEA EAX,[EBX + 0x10af8]             ; 005a2262
    PUSH EAX                            ; 005a2268
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a2269
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a226e
    TEST EAX,EAX                        ; 005a2271
    JNZ 0x005a2345                      ; 005a2273
        ;   XREF to: 005a2345 (CONDITIONAL_JUMP)  ; LAB_005a2345
    PUSH 0x5efe9c                       ; 005a2279 | DAT_005efe9c
        ;   Label: LAB_005a2279
    LEA ESI,[EBX + 0x10af8]             ; 005a227e
    PUSH ESI                            ; 005a2284
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a2285
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a228a
    TEST EAX,EAX                        ; 005a228d
    JZ 0x005a235d                       ; 005a228f
        ;   XREF to: 005a235d (CONDITIONAL_JUMP)  ; LAB_005a235d
    CMP dword ptr [EBX + 0x113b8],0x0   ; 005a2295
        ;   Label: LAB_005a2295
    JZ 0x005a23a4                       ; 005a229c
        ;   XREF to: 005a23a4 (CONDITIONAL_JUMP)  ; LAB_005a23a4
    PUSH 0x5efec1                       ; 005a22a2 | = "Death"
        ;   Label: LAB_005a22a2
    LEA ESI,[EBX + 0x10af8]             ; 005a22a7
    PUSH ESI                            ; 005a22ad
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a22ae
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a22b3
    TEST EAX,EAX                        ; 005a22b6
    JZ 0x005a23d8                       ; 005a22b8
        ;   XREF to: 005a23d8 (CONDITIONAL_JUMP)  ; LAB_005a23d8
    CMP dword ptr [EBX + 0x10a78],0x0   ; 005a22be
        ;   Label: LAB_005a22be
    JNZ 0x005a2419                      ; 005a22c5
        ;   XREF to: 005a2419 (CONDITIONAL_JUMP)  ; LAB_005a2419
    LEA ESI,[EBX + 0x11354]             ; 005a22cb
        ;   Label: LAB_005a22cb
    FLD float ptr [0x005eff13]          ; 005a22d1 | DAT_005eff13
    FLD float ptr [ESI]                 ; 005a22d7
    FMUL ST1                            ; 005a22d9
    FLD float ptr [ESI + 0x4]           ; 005a22db
    FMUL ST2                            ; 005a22de
    FLD float ptr [ESI + 0x8]           ; 005a22e0
    FMULP ST3                           ; 005a22e3
    MOV EDI,ESP                         ; 005a22e5
    LEA ESI,[ESP + 0xc]                 ; 005a22e7
    FXCH                                ; 005a22eb
    FSTP float ptr [ESP + 0xc]          ; 005a22ed
    FSTP float ptr [ESP + 0x10]         ; 005a22f1
    FSTP float ptr [ESP + 0x14]         ; 005a22f5
    MOVSD ES:EDI,ESI                    ; 005a22f9
    MOVSD ES:EDI,ESI                    ; 005a22fa
    MOVSD ES:EDI,ESI                    ; 005a22fb
    FLD float ptr [ESP + 0x4c]          ; 005a22fc
    FLD float ptr [ESP]                 ; 005a2300
    FMUL ST1                            ; 005a2303
    LEA EAX,[ESP + 0x18]                ; 005a2305
    FLD float ptr [ESP + 0x4]           ; 005a2309
    FMUL ST2                            ; 005a230d
    PUSH EAX                            ; 005a230f
    ADD EBX,0x2d0c                      ; 005a2310
    FLD float ptr [ESP + 0xc]           ; 005a2316
    FMULP ST3                           ; 005a231a
    PUSH EBX                            ; 005a231c
    LEA EDI,[ESP + 0x20]                ; 005a231d
    LEA ESI,[ESP + 0x2c]                ; 005a2321
    FXCH                                ; 005a2325
    FSTP float ptr [ESP + 0x2c]         ; 005a2327
    FSTP float ptr [ESP + 0x30]         ; 005a232b
    FSTP float ptr [ESP + 0x34]         ; 005a232f
    MOVSD ES:EDI,ESI                    ; 005a2333
    MOVSD ES:EDI,ESI                    ; 005a2334
    MOVSD ES:EDI,ESI                    ; 005a2335
    CALL core_cloth.cpp_FUN_005b1890    ; 005a2336
        ;   XREF to: 005b1890 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_005b1890(CClothList * this_ptr, CVector3f * wind_velocity)
    ADD ESP,0x8                         ; 005a233b
    ADD ESP,0x38                        ; 005a233e
    POP EDI                             ; 005a2341
    POP ESI                             ; 005a2342
    POP EBX                             ; 005a2343
    RET                                 ; 005a2344
    PUSH 0x1                            ; 005a2345
        ;   Label: LAB_005a2345
    PUSH 0x8                            ; 005a2347
    LEA EAX,[EBX + 0x2b4]               ; 005a2349
    PUSH EAX                            ; 005a234f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a2350
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a2355
    JMP 0x005a2279                      ; 005a2358
        ;   XREF to: 005a2279 (UNCONDITIONAL_JUMP)  ; LAB_005a2279
    PUSH 0x5efea1                       ; 005a235d | = "Chasing"
        ;   Label: LAB_005a235d
    PUSH ESI                            ; 005a2362
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a2363
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a2368
    TEST EAX,EAX                        ; 005a236b
    JNZ 0x005a2295                      ; 005a236d
        ;   XREF to: 005a2295 (CONDITIONAL_JUMP)  ; LAB_005a2295
    PUSH 0x5efea9                       ; 005a2373 | = "MeleeAttack"
    PUSH ESI                            ; 005a2378
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a2379
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a237e
    TEST EAX,EAX                        ; 005a2381
    JNZ 0x005a2295                      ; 005a2383
        ;   XREF to: 005a2295 (CONDITIONAL_JUMP)  ; LAB_005a2295
    PUSH 0x5efeb5                       ; 005a2389 | = "RangeAttack"
    PUSH ESI                            ; 005a238e
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a238f
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a2394
    TEST EAX,EAX                        ; 005a2397
    JNZ 0x005a2295                      ; 005a2399
        ;   XREF to: 005a2295 (CONDITIONAL_JUMP)  ; LAB_005a2295
    JMP 0x005a22a2                      ; 005a239f
        ;   XREF to: 005a22a2 (UNCONDITIONAL_JUMP)  ; LAB_005a22a2
    MOV ECX,dword ptr [EBX + 0x113c4]   ; 005a23a4
        ;   Label: LAB_005a23a4
    TEST ECX,0x7fffffff                 ; 005a23aa
    JNZ 0x005a22a2                      ; 005a23b0
        ;   XREF to: 005a22a2 (CONDITIONAL_JUMP)  ; LAB_005a22a2
    PUSH 0x3f000000                     ; 005a23b6
    PUSH 0x3f800000                     ; 005a23bb
    PUSH ECX                            ; 005a23c0
    PUSH EBX                            ; 005a23c1
    CALL unkafter_basicene.cpp_FUN_005a01a0 ; 005a23c2
        ;   XREF to: 005a01a0 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_005a01a0()
    ADD ESP,0x10                        ; 005a23c7
    PUSH EBX                            ; 005a23ca
    CALL unkafter_basicene.cpp_FUN_0059f570 ; 005a23cb
        ;   XREF to: 0059f570 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059f570()
    ADD ESP,0x4                         ; 005a23d0
    JMP 0x005a22a2                      ; 005a23d3
        ;   XREF to: 005a22a2 (UNCONDITIONAL_JUMP)  ; LAB_005a22a2
    PUSH 0x5efec7                       ; 005a23d8 | = "Animation"
        ;   Label: LAB_005a23d8
    PUSH ESI                            ; 005a23dd
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a23de
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a23e3
    TEST EAX,EAX                        ; 005a23e6
    JNZ 0x005a22be                      ; 005a23e8
        ;   XREF to: 005a22be (CONDITIONAL_JUMP)  ; LAB_005a22be
    PUSH 0x5efed1                       ; 005a23ee | DAT_005efed1
    PUSH ESI                            ; 005a23f3
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a23f4
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a23f9
    TEST EAX,EAX                        ; 005a23fc
    JNZ 0x005a22be                      ; 005a23fe
        ;   XREF to: 005a22be (CONDITIONAL_JUMP)  ; LAB_005a22be
    PUSH EBX                            ; 005a2404
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005a2405
    CALL dword ptr [EAX + 0x17c]        ; 005a240b
    ADD ESP,0x4                         ; 005a2411
    JMP 0x005a22be                      ; 005a2414
        ;   XREF to: 005a22be (UNCONDITIONAL_JUMP)  ; LAB_005a22be
    PUSH 0x5efed6                       ; 005a2419 | = "Chasing"
        ;   Label: LAB_005a2419
    LEA ESI,[EBX + 0x10af8]             ; 005a241e
    PUSH ESI                            ; 005a2424
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a2425
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a242a
    TEST EAX,EAX                        ; 005a242d
    JZ 0x005a22cb                       ; 005a242f
        ;   XREF to: 005a22cb (CONDITIONAL_JUMP)  ; LAB_005a22cb
    PUSH 0x5efede                       ; 005a2435 | = "MeleeAttack"
    PUSH 0x5efeea                       ; 005a243a | = "ChaseComplete"
    PUSH ESI                            ; 005a243f
    CALL unkaddr_0059d350.cpp_FUN_0059dae0 ; 005a2440
        ;   XREF to: 0059dae0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059dae0()
    ADD ESP,0xc                         ; 005a2445
    TEST EAX,EAX                        ; 005a2448
    JZ 0x005a22cb                       ; 005a244a
        ;   XREF to: 005a22cb (CONDITIONAL_JUMP)  ; LAB_005a22cb
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 005a2450
    LEA EAX,[EBX + 0x20]                ; 005a2456
    FLD float ptr [EDX + 0x20]          ; 005a2459
    FSUB float ptr [EAX]                ; 005a245c
    FMUL ST0                            ; 005a245e
    FLD float ptr [EDX + 0x28]          ; 005a2460
    FSUB float ptr [EAX + 0x8]          ; 005a2463
    FMUL ST0                            ; 005a2466
    FADDP                               ; 005a2468
    FSQRT                               ; 005a246a
    FCOMP float ptr [0x005fef90]        ; 005a246c | DAT_005fef90
    FNSTSW AX                           ; 005a2472
    SAHF                                ; 005a2474
    JNC 0x005a22cb                      ; 005a2475
        ;   XREF to: 005a22cb (CONDITIONAL_JUMP)  ; LAB_005a22cb
    PUSH 0x5efef8                       ; 005a247b | = "RangeAttack"
    PUSH 0x5eff04                       ; 005a2480 | = "ChaseComplete"
    FLD float ptr [0x005fef90]          ; 005a2485 | DAT_005fef90
    PUSH ESI                            ; 005a248b
    FSTP float ptr [EBX + 0x11394]      ; 005a248c
    CALL unkaddr_0059d350.cpp_FUN_0059d7f0 ; 005a2492
        ;   XREF to: 0059d7f0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d7f0()
    ADD ESP,0xc                         ; 005a2497
    JMP 0x005a22cb                      ; 005a249a
        ;   XREF to: 005a22cb (UNCONDITIONAL_JUMP)  ; LAB_005a22cb

