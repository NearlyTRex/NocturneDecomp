; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_stranger_cpp_CStranger_tryDescendLadder_FUN_0058d3c0(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x158]:8  local_158
; undefined        Stack[-0x150]:1  local_150
; undefined        Stack[-0x138]:1  local_138
; undefined        Stack[-0x114]:1  local_114
; undefined        Stack[-0xf0]:1  local_f0
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_stranger.cpp_CStranger_handleActionButton_FUN_00591120 at 005913b5
;
; Referenced Globals:
;   undefined4 s_Ladder_dot_f_005f6d60+1
;   undefined4 DAT_005f6d79
;   undefined4 DAT_005f6d81
;   undefined4 DAT_005f6d89
;   undefined4 DAT_005f6d91
;   undefined4 DAT_005f6d99
;   undefined4 DAT_005f6da1
;   CConsole* g_CConsolePtr = 007db5f0
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CConsole g_CConsoleInstance
;   undefined4 g_CLadderClassInfo.name_hash
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;   engine_console.cpp_FUN_00445430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058d3c0
        ;   Label: core_stranger.cpp_CStranger_tryDescendLadder_FUN_0058d3c0
    PUSH ESI                            ; 0058d3c1
    PUSH EDI                            ; 0058d3c2
    PUSH EBP                            ; 0058d3c3
    MOV EBP,ESP                         ; 0058d3c4
    SUB ESP,0x150                       ; 0058d3c6
    AND ESP,0xfffffff8                  ; 0058d3cc
    PUSH 0x0                            ; 0058d3cf
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058d3d1
    PUSH EAX                            ; 0058d3d4
    MOV dword ptr [EAX + 0x20000],0x0   ; 0058d3d5
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590 ; 0058d3df
        ;   XREF to: 00434590 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0x154],EAX     ; 0058d3e4
    FLD float ptr [ESP + 0x154]         ; 0058d3eb
    ADD ESP,0x8                         ; 0058d3f2
    FCOMP double ptr [0x005f6d79]       ; 0058d3f5 | DAT_005f6d79
    FNSTSW AX                           ; 0058d3fb
    SAHF                                ; 0058d3fd
    JC 0x0058d442                       ; 0058d3fe
        ;   XREF to: 0058d442 (CONDITIONAL_JUMP)  ; LAB_0058d442
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058d400
    MOV ECX,dword ptr [EAX + 0x25b0]    ; 0058d403
    TEST ECX,ECX                        ; 0058d409
    JNZ 0x0058d442                      ; 0058d40b
        ;   XREF to: 0058d442 (CONDITIONAL_JUMP)  ; LAB_0058d442
    CMP dword ptr [EAX + 0x2628],0x0    ; 0058d40d
    JNZ 0x0058d442                      ; 0058d414
        ;   XREF to: 0058d442 (CONDITIONAL_JUMP)  ; LAB_0058d442
    MOV dword ptr [ESP + 0x140],ECX     ; 0058d416
    ADD EAX,0x20                        ; 0058d41d
    MOV dword ptr [ESP + 0x144],ECX     ; 0058d420
    MOV dword ptr [ESP + 0x138],EAX     ; 0058d427
    MOV EAX,[0x00622c18]                ; 0058d42e | g_CDemonSetPtr
        ;   Label: LAB_0058d42e
    MOV EBX,dword ptr [ESP + 0x140]     ; 0058d433
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 0058d43a | g_CDemonSetInstance.actor_count
    JL 0x0058d46d                       ; 0058d440
        ;   XREF to: 0058d46d (CONDITIONAL_JUMP)  ; LAB_0058d46d
    XOR EAX,EAX                         ; 0058d442
        ;   Label: LAB_0058d442
    MOV ESP,EBP                         ; 0058d444
    POP EBP                             ; 0058d446
    POP EDI                             ; 0058d447
    POP ESI                             ; 0058d448
    POP EBX                             ; 0058d449
    RET                                 ; 0058d44a
    MOV ECX,dword ptr [ESP + 0x140]     ; 0058d44b
        ;   Label: LAB_0058d44b
    MOV EDX,dword ptr [ESP + 0x144]     ; 0058d452
    INC ECX                             ; 0058d459
    ADD EDX,0x4                         ; 0058d45a
    MOV dword ptr [ESP + 0x140],ECX     ; 0058d45d
    MOV dword ptr [ESP + 0x144],EDX     ; 0058d464
    JMP 0x0058d42e                      ; 0058d46b
        ;   XREF to: 0058d42e (UNCONDITIONAL_JUMP)  ; LAB_0058d42e
    MOV ECX,dword ptr [ESP + 0x144]     ; 0058d46d
        ;   Label: LAB_0058d46d
    MOV EBX,dword ptr [0x01d1bcdc]      ; 0058d474 | g_CLadderClassInfo.name_hash
    ADD EAX,ECX                         ; 0058d47a
    PUSH EBX                            ; 0058d47c
    MOV EAX,dword ptr [EAX + 0x14d168]  ; 0058d47d | g_CDemonSetInstance.actors[0]
    PUSH EAX                            ; 0058d483
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0058d484
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 0058d489
    MOV EBX,EAX                         ; 0058d48c
    MOV dword ptr [ESP + 0x148],EAX     ; 0058d48e
    TEST EAX,EAX                        ; 0058d495
    JZ 0x0058d44b                       ; 0058d497
        ;   XREF to: 0058d44b (CONDITIONAL_JUMP)  ; LAB_0058d44b
    FLD float ptr [EBX + 0x24]          ; 0058d499
    FADD float ptr [EAX + 0x2d8]        ; 0058d49c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058d4a2
    FSUBR float ptr [EAX + 0x24]        ; 0058d4a5
    FABS                                ; 0058d4a8
    FCOMP double ptr [0x005f6d89]       ; 0058d4aa | DAT_005f6d89
    FNSTSW AX                           ; 0058d4b0
    SAHF                                ; 0058d4b2
    JA 0x0058d44b                       ; 0058d4b3
        ;   XREF to: 0058d44b (CONDITIONAL_JUMP)  ; LAB_0058d44b
    MOV ESI,dword ptr [ESP + 0x138]     ; 0058d4b5
    PUSH ESI                            ; 0058d4bc
    PUSH EBX                            ; 0058d4bd
    LEA ESI,[ESP + 0x54]                ; 0058d4be
    LEA EDI,[ESP + 0x78]                ; 0058d4c2
    CALL core_actor.cpp_FUN_00408bb0    ; 0058d4c6
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x54]                ; 0058d4cb
    ADD ESP,0x8                         ; 0058d4cf
    MOVSD ES:EDI,ESI                    ; 0058d4d2
    MOVSD ES:EDI,ESI                    ; 0058d4d3
    MOVSD ES:EDI,ESI                    ; 0058d4d4
    FLD float ptr [ESP + 0x78]          ; 0058d4d5
    FST double ptr [ESP + 0x8]          ; 0058d4d9
    FABS                                ; 0058d4dd
    FCOMP double ptr [0x005f6d91]       ; 0058d4df | DAT_005f6d91
    FNSTSW AX                           ; 0058d4e5
    SAHF                                ; 0058d4e7
    JA 0x0058d44b                       ; 0058d4e8
        ;   XREF to: 0058d44b (CONDITIONAL_JUMP)  ; LAB_0058d44b
    FLDZ                                ; 0058d4ee
    FCOMP double ptr [ESP + 0x8]        ; 0058d4f0
    FNSTSW AX                           ; 0058d4f4
    SAHF                                ; 0058d4f6
    JC 0x0058d44b                       ; 0058d4f7
        ;   XREF to: 0058d44b (CONDITIONAL_JUMP)  ; LAB_0058d44b
    PUSH EBX                            ; 0058d4fd
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058d4fe
    LEA ESI,[ESP + 0x14]                ; 0058d504
    LEA EDI,[ESP + 0x2c]                ; 0058d508
    CALL dword ptr [EAX + 0x1c]         ; 0058d50c
    MOV ECX,0x6                         ; 0058d50f
    LEA ESI,[ESP + 0x14]                ; 0058d514
    ADD ESP,0x4                         ; 0058d518
    MOVSD.REP ES:EDI,ESI                ; 0058d51b
    FLD float ptr [ESP + 0x70]          ; 0058d51d
    FCOMP float ptr [ESP + 0x34]        ; 0058d521
    FNSTSW AX                           ; 0058d525
    SAHF                                ; 0058d527
    JBE 0x0058d549                      ; 0058d528
        ;   XREF to: 0058d549 (CONDITIONAL_JUMP)  ; LAB_0058d549
    FLD float ptr [ESP + 0x34]          ; 0058d52a
    FLD1                                ; 0058d52e
    FADDP                               ; 0058d530
    FLD float ptr [ESP + 0x70]          ; 0058d532
    FCOMPP                              ; 0058d536
    FNSTSW AX                           ; 0058d538
    SAHF                                ; 0058d53a
    JA 0x0058d44b                       ; 0058d53b
        ;   XREF to: 0058d44b (CONDITIONAL_JUMP)  ; LAB_0058d44b
    MOV EAX,dword ptr [ESP + 0x34]      ; 0058d541
    MOV dword ptr [ESP + 0x70],EAX      ; 0058d545
    FLD float ptr [ESP + 0x70]          ; 0058d549
        ;   Label: LAB_0058d549
    FCOMP float ptr [ESP + 0x28]        ; 0058d54d
    FNSTSW AX                           ; 0058d551
    SAHF                                ; 0058d553
    JNC 0x0058d577                      ; 0058d554
        ;   XREF to: 0058d577 (CONDITIONAL_JUMP)  ; LAB_0058d577
    FLD float ptr [ESP + 0x28]          ; 0058d556
    FADD double ptr [0x005f6d99]        ; 0058d55a | DAT_005f6d99
    FLD float ptr [ESP + 0x70]          ; 0058d560
    FCOMPP                              ; 0058d564
    FNSTSW AX                           ; 0058d566
    SAHF                                ; 0058d568
    JC 0x0058d44b                       ; 0058d569
        ;   XREF to: 0058d44b (CONDITIONAL_JUMP)  ; LAB_0058d44b
    MOV EAX,dword ptr [ESP + 0x28]      ; 0058d56f
    MOV dword ptr [ESP + 0x70],EAX      ; 0058d573
    FLD float ptr [ESP + 0x28]          ; 0058d577
        ;   Label: LAB_0058d577
    FLD float ptr [ESP + 0x2c]          ; 0058d57b
    FLD float ptr [ESP + 0x30]          ; 0058d57f
    LEA EDI,[ESP + 0x94]                ; 0058d583
    LEA ESI,[ESP + 0xc4]                ; 0058d58a
    FXCH ST2                            ; 0058d591
    FADD float ptr [ESP + 0x34]         ; 0058d593
    FXCH                                ; 0058d597
    FADD float ptr [ESP + 0x38]         ; 0058d599
    FXCH ST2                            ; 0058d59d
    FADD float ptr [ESP + 0x3c]         ; 0058d59f
    FXCH                                ; 0058d5a3
    FSTP float ptr [ESP + 0xc4]         ; 0058d5a5
    FXCH                                ; 0058d5ac
    FSTP float ptr [ESP + 0xc8]         ; 0058d5ae
    FSTP float ptr [ESP + 0xcc]         ; 0058d5b5
    MOVSD ES:EDI,ESI                    ; 0058d5bc
    MOVSD ES:EDI,ESI                    ; 0058d5bd
    MOVSD ES:EDI,ESI                    ; 0058d5be
    FLD float ptr [0x005f6d81]          ; 0058d5bf | DAT_005f6d81
    FLD float ptr [ESP + 0x94]          ; 0058d5c5
    FMUL ST1                            ; 0058d5cc
    FLD float ptr [ESP + 0x98]          ; 0058d5ce
    FMUL ST2                            ; 0058d5d5
    FLD float ptr [ESP + 0x9c]          ; 0058d5d7
    FMULP ST3                           ; 0058d5de
    LEA EDI,[ESP + 0x40]                ; 0058d5e0
    LEA ESI,[ESP + 0x58]                ; 0058d5e4
    FXCH                                ; 0058d5e8
    FSTP float ptr [ESP + 0x58]         ; 0058d5ea
    FSTP float ptr [ESP + 0x5c]         ; 0058d5ee
    FSTP float ptr [ESP + 0x60]         ; 0058d5f2
    MOVSD ES:EDI,ESI                    ; 0058d5f6
    MOVSD ES:EDI,ESI                    ; 0058d5f7
    MOVSD ES:EDI,ESI                    ; 0058d5f8
    MOV EAX,dword ptr [ESP + 0x48]      ; 0058d5f9
    MOV dword ptr [ESP + 0x78],EAX      ; 0058d5fd
    LEA EAX,[ESP + 0x70]                ; 0058d601
    PUSH EAX                            ; 0058d605
    MOV EDI,dword ptr [ESP + 0x14c]     ; 0058d606
    PUSH EDI                            ; 0058d60d
    LEA ESI,[ESP + 0xc0]                ; 0058d60e
    LEA EBX,[ESP + 0x78]                ; 0058d615
    CALL core_actor.cpp_FUN_00408b40    ; 0058d619
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA EDI,[ESP + 0xe4]                ; 0058d61e
    LEA ESI,[ESP + 0xc0]                ; 0058d625
    ADD ESP,0x8                         ; 0058d62c
    LEA EAX,[ESP + 0xdc]                ; 0058d62f
    MOVSD ES:EDI,ESI                    ; 0058d636
    MOVSD ES:EDI,ESI                    ; 0058d637
    MOVSD ES:EDI,ESI                    ; 0058d638
    CMP EBX,EAX                         ; 0058d639
    JZ 0x0058d65e                       ; 0058d63b
        ;   XREF to: 0058d65e (CONDITIONAL_JUMP)  ; LAB_0058d65e
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0058d63d
    MOV dword ptr [ESP + 0x70],EAX      ; 0058d644
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0058d648
    MOV dword ptr [ESP + 0x74],EAX      ; 0058d64f
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0058d653
    MOV dword ptr [ESP + 0x78],EAX      ; 0058d65a
    MOV EAX,dword ptr [ESP + 0x148]     ; 0058d65e
        ;   Label: LAB_0058d65e
    FLD float ptr [ESP + 0x74]          ; 0058d665
    FADD float ptr [EAX + 0x2d8]        ; 0058d669
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058d66f
    FSTP float ptr [ESP + 0x74]         ; 0058d672
    MOV EAX,dword ptr [EAX + 0x44]      ; 0058d676
    MOV dword ptr [ESP + 0x128],EAX     ; 0058d679
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058d680
    MOV EAX,dword ptr [EAX + 0x50]      ; 0058d683
    MOV dword ptr [ESP + 0x12c],EAX     ; 0058d686
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058d68d
    MOV EAX,dword ptr [EAX + 0x5c]      ; 0058d690
    MOV dword ptr [ESP + 0x124],EAX     ; 0058d693
    MOV EAX,dword ptr [ESP + 0x148]     ; 0058d69a
    MOV EAX,dword ptr [EAX + 0x44]      ; 0058d6a1
    MOV dword ptr [ESP + 0x130],EAX     ; 0058d6a4
    MOV EAX,dword ptr [ESP + 0x148]     ; 0058d6ab
    MOV EAX,dword ptr [EAX + 0x50]      ; 0058d6b2
    MOV dword ptr [ESP + 0x134],EAX     ; 0058d6b5
    MOV EAX,dword ptr [ESP + 0x148]     ; 0058d6bc
    MOV EAX,dword ptr [EAX + 0x5c]      ; 0058d6c3
    FLD double ptr [0x005f6da1]         ; 0058d6c6 | DAT_005f6da1
    MOV dword ptr [ESP + 0x13c],EAX     ; 0058d6cc
    FCOS                                ; 0058d6d3
    FLD float ptr [ESP + 0x12c]         ; 0058d6d5
    FMUL float ptr [ESP + 0x134]        ; 0058d6dc
    FLD float ptr [ESP + 0x128]         ; 0058d6e3
    FMUL float ptr [ESP + 0x130]        ; 0058d6ea
    FADDP                               ; 0058d6f1
    FLD float ptr [ESP + 0x124]         ; 0058d6f3
    FMUL float ptr [ESP + 0x13c]        ; 0058d6fa
    FADDP                               ; 0058d701
    FABS                                ; 0058d703
    FSTP double ptr [ESP]               ; 0058d705
    FCOMP double ptr [ESP]              ; 0058d708
    FNSTSW AX                           ; 0058d70b
    SAHF                                ; 0058d70d
    JA 0x0058d44b                       ; 0058d70e
        ;   XREF to: 0058d44b (CONDITIONAL_JUMP)  ; LAB_0058d44b
    MOV EAX,dword ptr [ESP + 0x148]     ; 0058d714
    ADD EAX,0x20                        ; 0058d71b
    PUSH EAX                            ; 0058d71e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058d71f
    PUSH EAX                            ; 0058d722
    LEA ESI,[ESP + 0xf0]                ; 0058d723
    LEA EDI,[ESP + 0x90]                ; 0058d72a
    CALL core_actor.cpp_FUN_00408bb0    ; 0058d731
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0xf0]                ; 0058d736
    ADD ESP,0x8                         ; 0058d73d
    MOVSD ES:EDI,ESI                    ; 0058d740
    MOVSD ES:EDI,ESI                    ; 0058d741
    MOVSD ES:EDI,ESI                    ; 0058d742
    FLD float ptr [ESP + 0x90]          ; 0058d743
    FLDZ                                ; 0058d74a
    FCOMPP                              ; 0058d74c
    FNSTSW AX                           ; 0058d74e
    SAHF                                ; 0058d750
    JNC 0x0058d44b                      ; 0058d751
        ;   XREF to: 0058d44b (CONDITIONAL_JUMP)  ; LAB_0058d44b
    MOV EDX,dword ptr [ESP + 0x4]       ; 0058d757
    PUSH EDX                            ; 0058d75b
    MOV ECX,dword ptr [ESP + 0x4]       ; 0058d75c
    PUSH ECX                            ; 0058d760
    PUSH 0x5f6d61                       ; 0058d761 | s_Ladder_dot_f_005f6d60+1
    MOV EBX,dword ptr [0x00611100]      ; 0058d766 | g_CConsolePtr
    PUSH EBX                            ; 0058d76c | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 0058d76d
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x10                        ; 0058d772
    PUSH 0x1                            ; 0058d775
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058d777
    PUSH 0x38                           ; 0058d77a
    ADD EAX,0x158                       ; 0058d77c
    MOV EBX,dword ptr [ESP + 0x150]     ; 0058d781
    PUSH EAX                            ; 0058d788
    MOV dword ptr [EAX + 0x1fea8],EBX   ; 0058d789
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0058d78f
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058d794
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058d797
    MOV EBX,EAX                         ; 0058d79a
    MOV dword ptr [EAX + 0xc1e4],0x0    ; 0058d79c
    MOV EAX,dword ptr [ESP + 0x148]     ; 0058d7a6
    MOV EDI,0xbfc00000                  ; 0058d7ad
    MOV EAX,dword ptr [EAX + 0x2d8]     ; 0058d7b2
    XOR ESI,ESI                         ; 0058d7b8
    MOV dword ptr [ESP + 0x80],EAX      ; 0058d7ba
    LEA EAX,[ESP + 0x7c]                ; 0058d7c1
    MOV dword ptr [ESP + 0x7c],ESI      ; 0058d7c5
    PUSH EAX                            ; 0058d7c9
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0058d7ca
    MOV dword ptr [ESP + 0x88],EDI      ; 0058d7d1
    PUSH EAX                            ; 0058d7d8
    LEA ESI,[ESP + 0xb4]                ; 0058d7d9
    LEA EDI,[ESP + 0xa8]                ; 0058d7e0
    CALL core_actor.cpp_FUN_00408b40    ; 0058d7e7
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0xb4]                ; 0058d7ec
    ADD ESP,0x8                         ; 0058d7f3
    ADD EBX,0x20228                     ; 0058d7f6
    MOVSD ES:EDI,ESI                    ; 0058d7fc
    MOVSD ES:EDI,ESI                    ; 0058d7fd
    MOVSD ES:EDI,ESI                    ; 0058d7fe
    LEA EAX,[ESP + 0xd0]                ; 0058d7ff
    FLD float ptr [ESP + 0xa0]          ; 0058d806
    FLD float ptr [ESP + 0xa4]          ; 0058d80d
    FLD float ptr [ESP + 0xa8]          ; 0058d814
    LEA EDI,[ESP + 0xd0]                ; 0058d81b
    LEA ESI,[ESP + 0x10c]               ; 0058d822
    FXCH ST2                            ; 0058d829
    FSUB float ptr [EBX + 0xfffdfdf8]   ; 0058d82b
    FXCH                                ; 0058d831
    FSUB float ptr [EBX + 0xfffdfdfc]   ; 0058d833
    FXCH ST2                            ; 0058d839
    FSUB float ptr [EBX + 0xfffdfe00]   ; 0058d83b
    FXCH                                ; 0058d841
    FSTP float ptr [ESP + 0x10c]        ; 0058d843
    FXCH                                ; 0058d84a
    FSTP float ptr [ESP + 0x110]        ; 0058d84c
    FSTP float ptr [ESP + 0x114]        ; 0058d853
    MOVSD ES:EDI,ESI                    ; 0058d85a
    MOVSD ES:EDI,ESI                    ; 0058d85b
    MOVSD ES:EDI,ESI                    ; 0058d85c
    CMP EBX,EAX                         ; 0058d85d
    JZ 0x0058d87e                       ; 0058d85f
        ;   XREF to: 0058d87e (CONDITIONAL_JUMP)  ; LAB_0058d87e
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0058d861
    MOV dword ptr [EBX],EAX             ; 0058d868
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0058d86a
    MOV dword ptr [EBX + 0x4],EAX       ; 0058d871
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0058d874
    MOV dword ptr [EBX + 0x8],EAX       ; 0058d87b
    FLD float ptr [ESP + 0x70]          ; 0058d87e
        ;   Label: LAB_0058d87e
    FLD float ptr [ESP + 0x74]          ; 0058d882
    FLD float ptr [ESP + 0x78]          ; 0058d886
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058d88a
    LEA EDI,[ESP + 0x64]                ; 0058d88d
    LEA ESI,[ESP + 0x118]               ; 0058d891
    FXCH ST2                            ; 0058d898
    FSUB float ptr [EAX + 0x20]         ; 0058d89a
    FXCH                                ; 0058d89d
    FSUB float ptr [EAX + 0x24]         ; 0058d89f
    FXCH ST2                            ; 0058d8a2
    FSUB float ptr [EAX + 0x28]         ; 0058d8a4
    FXCH                                ; 0058d8a7
    FSTP float ptr [ESP + 0x118]        ; 0058d8a9
    FXCH                                ; 0058d8b0
    FSTP float ptr [ESP + 0x11c]        ; 0058d8b2
    FSTP float ptr [ESP + 0x120]        ; 0058d8b9
    LEA EAX,[ESP + 0x64]                ; 0058d8c0
    MOVSD ES:EDI,ESI                    ; 0058d8c4
    MOVSD ES:EDI,ESI                    ; 0058d8c5
    MOVSD ES:EDI,ESI                    ; 0058d8c6
    PUSH EAX                            ; 0058d8c7
    LEA ESI,[ESP + 0xf8]                ; 0058d8c8
    LEA EDI,[ESP + 0x104]               ; 0058d8cf
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 0058d8d6
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0xf8]                ; 0058d8db
    ADD ESP,0x4                         ; 0058d8e2
    MOVSD ES:EDI,ESI                    ; 0058d8e5
    MOVSD ES:EDI,ESI                    ; 0058d8e6
    MOVSD ES:EDI,ESI                    ; 0058d8e7
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058d8e8
    MOV EAX,dword ptr [ESP + 0x104]     ; 0058d8eb
    MOV dword ptr [EBX + 0x20238],0x3f800000 ; 0058d8f2
    MOV dword ptr [EBX + 0x20234],EAX   ; 0058d8fc
    MOV EAX,0x1                         ; 0058d902
    MOV ESP,EBP                         ; 0058d907
    POP EBP                             ; 0058d909
    POP EDI                             ; 0058d90a
    POP ESI                             ; 0058d90b
    POP EBX                             ; 0058d90c
    RET                                 ; 0058d90d

