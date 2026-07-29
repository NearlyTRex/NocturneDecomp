; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_FUN_005402f0(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stranger.cpp_FUN_00535900 at 0053634d
;
; Referenced Globals:
;   TerminatedCString s_Bip01_L_Forearm_00595ebf
;   TerminatedCString s_Bip01_L_Forearm_00595ecf
;   TerminatedCString s_Bip01_L_Forearm_00595edf
;   TerminatedCString s_Bip01_L_Forearm_00595eef
;   TerminatedCString s_Bip01_L_Forearm_00595eff
;   TerminatedCString s_Bip01_L_Forearm_00595f0f
;   TerminatedCString s_Bip01_R_Forearm_00595f1f
;   TerminatedCString s_Bip01_R_Forearm_00595f2f
;   TerminatedCString s_Bip01_R_Forearm_00595f3f
;   TerminatedCString s_Bip01_R_Forearm_00595f4f
;   TerminatedCString s_Bip01_R_Forearm_00595f5f
;   TerminatedCString s_Bip01_R_Forearm_00595f6f
;   TerminatedCString s_Bip01_L_Forearm_00595f7f
;   TerminatedCString s_Bip01_L_Forearm_00595f8f
;   double DOUBLE_00595f9f = 0.700000000000000
;   ... and 5 more
;
; Called Functions:
;   core_cloth.cpp_CCloth_grabCloth_FUN_004386b0
;   core_cloth.cpp_CCloth_resetState_FUN_00438750
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005402f0
        ;   Label: core_stranger.cpp_FUN_005402f0
    PUSH ESI                            ; 005402f1
    PUSH EDI                            ; 005402f2
    PUSH EBP                            ; 005402f3
    MOV EBP,ESP                         ; 005402f4
    SUB ESP,0x20                        ; 005402f6
    AND ESP,0xfffffff8                  ; 005402f9
    MOV ESI,dword ptr [EBP + 0x14]      ; 005402fc
    PUSH ESI                            ; 005402ff
    MOV EAX,dword ptr [ESI + 0x14c]     ; 00540300
    XOR EDI,EDI                         ; 00540306
    CALL dword ptr [EAX + 0x104]        ; 00540308
    ADD ESP,0x4                         ; 0054030e
    XOR EDX,EDX                         ; 00540311
    CMP EAX,0x2                         ; 00540313
    JGE 0x00540424                      ; 00540316
        ;   XREF to: 00540424 (CONDITIONAL_JUMP)  ; LAB_00540424
    CMP dword ptr [ESI + 0x2a84],0x0    ; 0054031c
    JNZ 0x0054033b                      ; 00540323
        ;   XREF to: 0054033b (CONDITIONAL_JUMP)  ; LAB_0054033b
    FLD float ptr [ESI + 0x2a88]        ; 00540325
    FCOMP double ptr [0x00595f9f]       ; 0054032b | DOUBLE_00595f9f
    FNSTSW AX                           ; 00540331
    SAHF                                ; 00540333
    JBE 0x0054033b                      ; 00540334
        ;   XREF to: 0054033b (CONDITIONAL_JUMP)  ; LAB_0054033b
    MOV EDX,0x1                         ; 00540336
    MOV EBX,dword ptr [ESI + 0x2a84]    ; 0054033b
        ;   Label: LAB_0054033b
    CMP EBX,0x1                         ; 00540341
    JNZ 0x00540359                      ; 00540344
        ;   XREF to: 00540359 (CONDITIONAL_JUMP)  ; LAB_00540359
    FLD float ptr [ESI + 0x2a88]        ; 00540346
    FCOMP double ptr [0x00595fa7]       ; 0054034c | DOUBLE_00595fa7
    FNSTSW AX                           ; 00540352
    SAHF                                ; 00540354
    JNC 0x00540359                      ; 00540355
        ;   XREF to: 00540359 (CONDITIONAL_JUMP)  ; LAB_00540359
    MOV EDX,EBX                         ; 00540357
    CMP dword ptr [ESI + 0x2a84],0x2    ; 00540359
        ;   Label: LAB_00540359
    JNZ 0x00540378                      ; 00540360
        ;   XREF to: 00540378 (CONDITIONAL_JUMP)  ; LAB_00540378
    FLD float ptr [ESI + 0x2a88]        ; 00540362
    FCOMP double ptr [0x00595faf]       ; 00540368 | DOUBLE_00595faf
    FNSTSW AX                           ; 0054036e
    SAHF                                ; 00540370
    JBE 0x00540378                      ; 00540371
        ;   XREF to: 00540378 (CONDITIONAL_JUMP)  ; LAB_00540378
    MOV EDI,0x1                         ; 00540373
    CMP dword ptr [ESI + 0x2a84],0x3    ; 00540378
        ;   Label: LAB_00540378
    JNZ 0x00540397                      ; 0054037f
        ;   XREF to: 00540397 (CONDITIONAL_JUMP)  ; LAB_00540397
    FLD float ptr [ESI + 0x2a88]        ; 00540381
    FCOMP double ptr [0x00595faf]       ; 00540387 | DOUBLE_00595faf
    FNSTSW AX                           ; 0054038d
    SAHF                                ; 0054038f
    JNC 0x00540397                      ; 00540390
        ;   XREF to: 00540397 (CONDITIONAL_JUMP)  ; LAB_00540397
    MOV EDI,0x1                         ; 00540392
    CMP dword ptr [ESI + 0x2a84],0x4    ; 00540397
        ;   Label: LAB_00540397
    JNZ 0x005403b6                      ; 0054039e
        ;   XREF to: 005403b6 (CONDITIONAL_JUMP)  ; LAB_005403b6
    FLD float ptr [ESI + 0x2a88]        ; 005403a0
    FCOMP double ptr [0x00595fb7]       ; 005403a6 | DOUBLE_00595fb7
    FNSTSW AX                           ; 005403ac
    SAHF                                ; 005403ae
    JNC 0x005403b6                      ; 005403af
        ;   XREF to: 005403b6 (CONDITIONAL_JUMP)  ; LAB_005403b6
    MOV EDI,0x1                         ; 005403b1
    CMP dword ptr [ESI + 0x2a84],0x5    ; 005403b6
        ;   Label: LAB_005403b6
    JNZ 0x005403d5                      ; 005403bd
        ;   XREF to: 005403d5 (CONDITIONAL_JUMP)  ; LAB_005403d5
    FLD float ptr [ESI + 0x2a88]        ; 005403bf
    FCOMP double ptr [0x00595fbf]       ; 005403c5 | DOUBLE_00595fbf
    FNSTSW AX                           ; 005403cb
    SAHF                                ; 005403cd
    JBE 0x005403d5                      ; 005403ce
        ;   XREF to: 005403d5 (CONDITIONAL_JUMP)  ; LAB_005403d5
    MOV EDI,0x1                         ; 005403d0
    CMP dword ptr [ESI + 0x2a84],0x9    ; 005403d5
        ;   Label: LAB_005403d5
    JNZ 0x005403f4                      ; 005403dc
        ;   XREF to: 005403f4 (CONDITIONAL_JUMP)  ; LAB_005403f4
    FLD float ptr [ESI + 0x2a88]        ; 005403de
    FCOMP double ptr [0x00595fb7]       ; 005403e4 | DOUBLE_00595fb7
    FNSTSW AX                           ; 005403ea
    SAHF                                ; 005403ec
    JNC 0x005403f4                      ; 005403ed
        ;   XREF to: 005403f4 (CONDITIONAL_JUMP)  ; LAB_005403f4
    MOV EDI,0x1                         ; 005403ef
    CMP dword ptr [ESI + 0x2a84],0xf    ; 005403f4
        ;   Label: LAB_005403f4
    JNZ 0x00540424                      ; 005403fb
        ;   XREF to: 00540424 (CONDITIONAL_JUMP)  ; LAB_00540424
    FLD float ptr [ESI + 0x2a88]        ; 005403fd
    FST double ptr [ESP]                ; 00540403
    FCOMP double ptr [0x00595fa7]       ; 00540406 | DOUBLE_00595fa7
    FNSTSW AX                           ; 0054040c
    SAHF                                ; 0054040e
    JBE 0x00540424                      ; 0054040f
        ;   XREF to: 00540424 (CONDITIONAL_JUMP)  ; LAB_00540424
    FLD double ptr [ESP]                ; 00540411
    FCOMP double ptr [0x00595fc7]       ; 00540414 | DOUBLE_00595fc7
    FNSTSW AX                           ; 0054041a
    SAHF                                ; 0054041c
    JNC 0x00540424                      ; 0054041d
        ;   XREF to: 00540424 (CONDITIONAL_JUMP)  ; LAB_00540424
    MOV EDI,0x1                         ; 0054041f
    MOV EBX,dword ptr [ESI + 0x2c20]    ; 00540424
        ;   Label: LAB_00540424
    TEST EDX,EDX                        ; 0054042a
    JZ 0x00540561                       ; 0054042c
        ;   XREF to: 00540561 (CONDITIONAL_JUMP)  ; LAB_00540561
    PUSH 0x32                           ; 00540432
    PUSH 0x595ebf                       ; 00540434 | = "Bip01 L Forearm"
    PUSH EBX                            ; 00540439
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_004386b0 ; 0054043a
        ;   XREF to: 004386b0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_004386b0(CCloth * this_ptr, char * bone_name, int vertex_index)
    ADD ESP,0xc                         ; 0054043f
    PUSH 0x33                           ; 00540442
    PUSH 0x595ecf                       ; 00540444 | = "Bip01 L Forearm"
    PUSH EBX                            ; 00540449
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_004386b0 ; 0054044a
        ;   XREF to: 004386b0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_004386b0(CCloth * this_ptr, char * bone_name, int vertex_index)
    ADD ESP,0xc                         ; 0054044f
    PUSH 0x34                           ; 00540452
    PUSH 0x595edf                       ; 00540454 | = "Bip01 L Forearm"
    PUSH EBX                            ; 00540459
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_004386b0 ; 0054045a
        ;   XREF to: 004386b0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_004386b0(CCloth * this_ptr, char * bone_name, int vertex_index)
    ADD ESP,0xc                         ; 0054045f
    PUSH 0x35                           ; 00540462
    PUSH 0x595eef                       ; 00540464 | = "Bip01 L Forearm"
    PUSH EBX                            ; 00540469
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_004386b0 ; 0054046a
        ;   XREF to: 004386b0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_004386b0(CCloth * this_ptr, char * bone_name, int vertex_index)
    ADD ESP,0xc                         ; 0054046f
    PUSH 0x36                           ; 00540472
    PUSH 0x595eff                       ; 00540474 | = "Bip01 L Forearm"
    PUSH EBX                            ; 00540479
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_004386b0 ; 0054047a
        ;   XREF to: 004386b0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_004386b0(CCloth * this_ptr, char * bone_name, int vertex_index)
    ADD ESP,0xc                         ; 0054047f
    PUSH 0x37                           ; 00540482
    PUSH 0x595f0f                       ; 00540484 | = "Bip01 L Forearm"
    PUSH EBX                            ; 00540489
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_004386b0 ; 0054048a
        ;   XREF to: 004386b0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_004386b0(CCloth * this_ptr, char * bone_name, int vertex_index)
    ADD ESP,0xc                         ; 0054048f
    PUSH 0x20                           ; 00540492
    PUSH 0x595f1f                       ; 00540494 | = "Bip01 R Forearm"
    PUSH EBX                            ; 00540499
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_004386b0 ; 0054049a
        ;   XREF to: 004386b0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_004386b0(CCloth * this_ptr, char * bone_name, int vertex_index)
    ADD ESP,0xc                         ; 0054049f
    PUSH 0x21                           ; 005404a2
    PUSH 0x595f2f                       ; 005404a4 | = "Bip01 R Forearm"
    PUSH EBX                            ; 005404a9
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_004386b0 ; 005404aa
        ;   XREF to: 004386b0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_004386b0(CCloth * this_ptr, char * bone_name, int vertex_index)
    ADD ESP,0xc                         ; 005404af
    PUSH 0x22                           ; 005404b2
    PUSH 0x595f3f                       ; 005404b4 | = "Bip01 R Forearm"
    PUSH EBX                            ; 005404b9
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_004386b0 ; 005404ba
        ;   XREF to: 004386b0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_004386b0(CCloth * this_ptr, char * bone_name, int vertex_index)
    ADD ESP,0xc                         ; 005404bf
    PUSH 0x23                           ; 005404c2
    PUSH 0x595f4f                       ; 005404c4 | = "Bip01 R Forearm"
    PUSH EBX                            ; 005404c9
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_004386b0 ; 005404ca
        ;   XREF to: 004386b0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_004386b0(CCloth * this_ptr, char * bone_name, int vertex_index)
    ADD ESP,0xc                         ; 005404cf
    PUSH 0x24                           ; 005404d2
    PUSH 0x595f5f                       ; 005404d4 | = "Bip01 R Forearm"
    PUSH EBX                            ; 005404d9
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_004386b0 ; 005404da
        ;   XREF to: 004386b0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_004386b0(CCloth * this_ptr, char * bone_name, int vertex_index)
    ADD ESP,0xc                         ; 005404df
    PUSH 0x25                           ; 005404e2
    PUSH 0x595f6f                       ; 005404e4 | = "Bip01 R Forearm"
    PUSH EBX                            ; 005404e9
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_004386b0 ; 005404ea
        ;   XREF to: 004386b0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_004386b0(CCloth * this_ptr, char * bone_name, int vertex_index)
    ADD ESP,0xc                         ; 005404ef
    TEST EDI,EDI                        ; 005404f2
        ;   Label: LAB_005404f2
    JZ 0x005405ea                       ; 005404f4
        ;   XREF to: 005405ea (CONDITIONAL_JUMP)  ; LAB_005405ea
    PUSH 0x2f                           ; 005404fa
    PUSH 0x595f7f                       ; 005404fc | = "Bip01 L Forearm"
    PUSH EBX                            ; 00540501
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_004386b0 ; 00540502
        ;   XREF to: 004386b0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_004386b0(CCloth * this_ptr, char * bone_name, int vertex_index)
    ADD ESP,0xc                         ; 00540507
    PUSH 0x32                           ; 0054050a
    PUSH 0x595f8f                       ; 0054050c | = "Bip01 L Forearm"
    PUSH EBX                            ; 00540511
    CALL core_cloth.cpp_CCloth_grabCloth_FUN_004386b0 ; 00540512
        ;   XREF to: 004386b0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_grabCloth_FUN_004386b0(CCloth * this_ptr, char * bone_name, int vertex_index)
    ADD ESP,0xc                         ; 00540517
    ADD ESI,0x150                       ; 0054051a
        ;   Label: LAB_0054051a
    PUSH ESI                            ; 00540520
    ADD EBX,0x3ab24                     ; 00540521
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00540527
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0054052c
    ADD ESP,0x4                         ; 0054052f
    CMP EAX,0x2a                        ; 00540532
    JNZ 0x00540618                      ; 00540535
        ;   XREF to: 00540618 (CONDITIONAL_JUMP)  ; LAB_00540618
    MOV ESI,0xc1a00000                  ; 0054053b
    XOR EDX,EDX                         ; 00540540
    LEA EAX,[ESP + 0x8]                 ; 00540542
    MOV dword ptr [ESP + 0xc],EDX       ; 00540546
    MOV dword ptr [ESP + 0x10],ESI      ; 0054054a
    MOV dword ptr [ESP + 0x8],EDX       ; 0054054e
    CMP EBX,EAX                         ; 00540552
    JNZ 0x00540605                      ; 00540554
        ;   XREF to: 00540605 (CONDITIONAL_JUMP)  ; LAB_00540605
    MOV ESP,EBP                         ; 0054055a
        ;   Label: LAB_0054055a
    POP EBP                             ; 0054055c
    POP EDI                             ; 0054055d
    POP ESI                             ; 0054055e
    POP EBX                             ; 0054055f
    RET                                 ; 00540560
    PUSH 0x32                           ; 00540561
        ;   Label: LAB_00540561
    PUSH EBX                            ; 00540563
    CALL core_cloth.cpp_CCloth_resetState_FUN_00438750 ; 00540564
        ;   XREF to: 00438750 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_resetState_FUN_00438750(CCloth * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 00540569
    PUSH 0x33                           ; 0054056c
    PUSH EBX                            ; 0054056e
    CALL core_cloth.cpp_CCloth_resetState_FUN_00438750 ; 0054056f
        ;   XREF to: 00438750 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_resetState_FUN_00438750(CCloth * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 00540574
    PUSH 0x34                           ; 00540577
    PUSH EBX                            ; 00540579
    CALL core_cloth.cpp_CCloth_resetState_FUN_00438750 ; 0054057a
        ;   XREF to: 00438750 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_resetState_FUN_00438750(CCloth * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 0054057f
    PUSH 0x35                           ; 00540582
    PUSH EBX                            ; 00540584
    CALL core_cloth.cpp_CCloth_resetState_FUN_00438750 ; 00540585
        ;   XREF to: 00438750 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_resetState_FUN_00438750(CCloth * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 0054058a
    PUSH 0x36                           ; 0054058d
    PUSH EBX                            ; 0054058f
    CALL core_cloth.cpp_CCloth_resetState_FUN_00438750 ; 00540590
        ;   XREF to: 00438750 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_resetState_FUN_00438750(CCloth * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 00540595
    PUSH 0x37                           ; 00540598
    PUSH EBX                            ; 0054059a
    CALL core_cloth.cpp_CCloth_resetState_FUN_00438750 ; 0054059b
        ;   XREF to: 00438750 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_resetState_FUN_00438750(CCloth * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 005405a0
    PUSH 0x20                           ; 005405a3
    PUSH EBX                            ; 005405a5
    CALL core_cloth.cpp_CCloth_resetState_FUN_00438750 ; 005405a6
        ;   XREF to: 00438750 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_resetState_FUN_00438750(CCloth * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 005405ab
    PUSH 0x21                           ; 005405ae
    PUSH EBX                            ; 005405b0
    CALL core_cloth.cpp_CCloth_resetState_FUN_00438750 ; 005405b1
        ;   XREF to: 00438750 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_resetState_FUN_00438750(CCloth * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 005405b6
    PUSH 0x22                           ; 005405b9
    PUSH EBX                            ; 005405bb
    CALL core_cloth.cpp_CCloth_resetState_FUN_00438750 ; 005405bc
        ;   XREF to: 00438750 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_resetState_FUN_00438750(CCloth * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 005405c1
    PUSH 0x23                           ; 005405c4
    PUSH EBX                            ; 005405c6
    CALL core_cloth.cpp_CCloth_resetState_FUN_00438750 ; 005405c7
        ;   XREF to: 00438750 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_resetState_FUN_00438750(CCloth * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 005405cc
    PUSH 0x24                           ; 005405cf
    PUSH EBX                            ; 005405d1
    CALL core_cloth.cpp_CCloth_resetState_FUN_00438750 ; 005405d2
        ;   XREF to: 00438750 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_resetState_FUN_00438750(CCloth * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 005405d7
    PUSH 0x25                           ; 005405da
    PUSH EBX                            ; 005405dc
    CALL core_cloth.cpp_CCloth_resetState_FUN_00438750 ; 005405dd
        ;   XREF to: 00438750 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_resetState_FUN_00438750(CCloth * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 005405e2
    JMP 0x005404f2                      ; 005405e5
        ;   XREF to: 005404f2 (UNCONDITIONAL_JUMP)  ; LAB_005404f2
    PUSH 0x2f                           ; 005405ea
        ;   Label: LAB_005405ea
    PUSH EBX                            ; 005405ec
    CALL core_cloth.cpp_CCloth_resetState_FUN_00438750 ; 005405ed
        ;   XREF to: 00438750 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_resetState_FUN_00438750(CCloth * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 005405f2
    PUSH 0x32                           ; 005405f5
    PUSH EBX                            ; 005405f7
    CALL core_cloth.cpp_CCloth_resetState_FUN_00438750 ; 005405f8
        ;   XREF to: 00438750 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_resetState_FUN_00438750(CCloth * this_ptr, int vertex_index)
    ADD ESP,0x8                         ; 005405fd
    JMP 0x0054051a                      ; 00540600
        ;   XREF to: 0054051a (UNCONDITIONAL_JUMP)  ; LAB_0054051a
    MOV dword ptr [EBX + 0x4],EDX       ; 00540605
        ;   Label: LAB_00540605
    MOV dword ptr [EBX],EDX             ; 00540608
    MOV EAX,dword ptr [ESP + 0x10]      ; 0054060a
    MOV dword ptr [EBX + 0x8],EAX       ; 0054060e
    MOV ESP,EBP                         ; 00540611
    POP EBP                             ; 00540613
    POP EDI                             ; 00540614
    POP ESI                             ; 00540615
    POP EBX                             ; 00540616
    RET                                 ; 00540617
    CMP EAX,0x2b                        ; 00540618
        ;   Label: LAB_00540618
    JNZ 0x0054055a                      ; 0054061b
        ;   XREF to: 0054055a (CONDITIONAL_JUMP)  ; LAB_0054055a
    XOR ESI,ESI                         ; 00540621
    MOV EAX,0x41a00000                  ; 00540623
    MOV dword ptr [ESP + 0x18],ESI      ; 00540628
    MOV dword ptr [ESP + 0x1c],EAX      ; 0054062c
    LEA EAX,[ESP + 0x14]                ; 00540630
    MOV dword ptr [ESP + 0x14],ESI      ; 00540634
    CMP EBX,EAX                         ; 00540638
    JZ 0x0054055a                       ; 0054063a
        ;   XREF to: 0054055a (CONDITIONAL_JUMP)  ; LAB_0054055a
    MOV dword ptr [EBX + 0x4],ESI       ; 00540640
    MOV dword ptr [EBX],ESI             ; 00540643
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00540645
    MOV dword ptr [EBX + 0x8],EAX       ; 00540649
    MOV ESP,EBP                         ; 0054064c
    POP EBP                             ; 0054064e
    POP EDI                             ; 0054064f
    POP ESI                             ; 00540650
    POP EBX                             ; 00540651
    RET                                 ; 00540652

