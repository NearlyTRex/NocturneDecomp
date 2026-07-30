; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spike_cpp_CSpike_process_FUN_00533210(CSpike *param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   double DOUBLE_00595032 = 0.0000100000000000000
;   undefined4 DAT_005b7650
;
; Called Functions:
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   core_spike.cpp_FUN_00533750
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00533210
        ;   Label: core_spike.cpp_CSpike_process_FUN_00533210
    PUSH ESI                            ; 00533211
    PUSH EDI                            ; 00533212
    PUSH EBP                            ; 00533213
    SUB ESP,0x40                        ; 00533214
    MOV EBX,dword ptr [ESP + 0x54]      ; 00533217
    MOV EDX,dword ptr [EBX + 0x2cc]     ; 0053321b
    TEST EDX,EDX                        ; 00533221
    JZ 0x0053322e                       ; 00533223
        ;   XREF to: 0053322e (CONDITIONAL_JUMP)  ; LAB_0053322e
    CMP EDX,0x1                         ; 00533225
    JNZ 0x00533395                      ; 00533228
        ;   XREF to: 00533395 (CONDITIONAL_JUMP)  ; LAB_00533395
    LEA EAX,[EBX + 0x2e8]               ; 0053322e
        ;   Label: LAB_0053322e
    PUSH EAX                            ; 00533234
    MOV EBP,dword ptr [0x005b7650]      ; 00533235 | DAT_005b7650
    PUSH EBP                            ; 0053323b
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 0053323c
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00533241
    TEST EAX,EAX                        ; 00533244
    JZ 0x00533252                       ; 00533246
        ;   XREF to: 00533252 (CONDITIONAL_JUMP)  ; LAB_00533252
    MOV dword ptr [EBX + 0x2d4],0x1     ; 00533248
    LEA EAX,[EBX + 0x34c]               ; 00533252
        ;   Label: LAB_00533252
    PUSH EAX                            ; 00533258
    MOV EAX,[0x005b7650]                ; 00533259 | DAT_005b7650
    PUSH EAX                            ; 0053325e
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 0053325f
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00533264
    TEST EAX,EAX                        ; 00533267
    JZ 0x005333e2                       ; 00533269
        ;   XREF to: 005333e2 (CONDITIONAL_JUMP)  ; LAB_005333e2
    MOV dword ptr [EBX + 0x2d4],0x0     ; 0053326f
    MOV ECX,dword ptr [EBX + 0x2d0]     ; 00533279
        ;   Label: LAB_00533279
    TEST ECX,ECX                        ; 0053327f
    JZ 0x0053338d                       ; 00533281
        ;   XREF to: 0053338d (CONDITIONAL_JUMP)  ; LAB_0053338d
    CMP ECX,0x2                         ; 00533287
    JNZ 0x00533296                      ; 0053328a
        ;   XREF to: 00533296 (CONDITIONAL_JUMP)  ; LAB_00533296
    MOV dword ptr [EBX + 0x2d0],0x3     ; 0053328c
    FLD float ptr [EBX + 0x480]         ; 00533296
        ;   Label: LAB_00533296
    FSUB float ptr [ESP + 0x58]         ; 0053329c
    FST float ptr [EBX + 0x480]         ; 005332a0
    FLDZ                                ; 005332a6
    FCOMPP                              ; 005332a8
    FNSTSW AX                           ; 005332aa
    SAHF                                ; 005332ac
    JC 0x0053338d                       ; 005332ad
        ;   XREF to: 0053338d (CONDITIONAL_JUMP)  ; LAB_0053338d
    MOV EDI,dword ptr [EBX + 0x2d0]     ; 005332b3
    MOV dword ptr [EBX + 0x480],0x0     ; 005332b9
    TEST EDI,EDI                        ; 005332c3
    JNZ 0x005333f4                      ; 005332c5
        ;   XREF to: 005333f4 (CONDITIONAL_JUMP)  ; LAB_005333f4
    MOV dword ptr [EBX + 0x2d0],0x1     ; 005332cb
    MOV dword ptr [EBX + 0x554],EDI     ; 005332d5
    LEA ESI,[EBX + 0x20]                ; 005332db
        ;   Label: LAB_005332db
    MOV EAX,dword ptr [ESI]             ; 005332de
    MOV dword ptr [ESP + 0x18],EAX      ; 005332e0
    LEA EAX,[ESI + 0x4]                 ; 005332e4
    MOV EAX,dword ptr [EAX]             ; 005332e7
    MOV dword ptr [ESP + 0x1c],EAX      ; 005332e9
    LEA EAX,[ESI + 0x8]                 ; 005332ed
    MOV EAX,dword ptr [EAX]             ; 005332f0
    MOV dword ptr [ESP + 0x20],EAX      ; 005332f2
    FLD float ptr [EBX + 0x2e4]         ; 005332f6
    FMUL float ptr [EBX + 0x554]        ; 005332fc
    XOR EAX,EAX                         ; 00533302
    FSTP float ptr [ESP + 0x3c]         ; 00533304
    MOV dword ptr [ESP],EAX             ; 00533308
    MOV dword ptr [ESP + 0x4],EAX       ; 0053330b
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0053330f
    MOV dword ptr [ESP + 0x8],EAX       ; 00533313
    MOV EAX,ESP                         ; 00533317
    PUSH EAX                            ; 00533319
    LEA EAX,[ESP + 0x28]                ; 0053331a
    PUSH EAX                            ; 0053331e
    PUSH EBX                            ; 0053331f
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 00533320
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    LEA EDX,[EBX + 0x2d8]               ; 00533325
    FLD float ptr [EDX]                 ; 0053332b
    FADD float ptr [EAX]                ; 0053332d
    ADD ESP,0xc                         ; 0053332f
    FSTP float ptr [ESP + 0xc]          ; 00533332
    FLD float ptr [EDX + 0x4]           ; 00533336
    FADD float ptr [EAX + 0x4]          ; 00533339
    FSTP float ptr [ESP + 0x10]         ; 0053333c
    FLD float ptr [EDX + 0x8]           ; 00533340
    FADD float ptr [EAX + 0x8]          ; 00533343
    MOV EAX,dword ptr [ESP + 0xc]       ; 00533346
    FSTP float ptr [ESP + 0x14]         ; 0053334a
    MOV dword ptr [ESI],EAX             ; 0053334e
    MOV EAX,dword ptr [ESP + 0x10]      ; 00533350
    MOV dword ptr [ESI + 0x4],EAX       ; 00533354
    MOV EAX,dword ptr [ESP + 0x14]      ; 00533357
    MOV dword ptr [ESI + 0x8],EAX       ; 0053335b
    FLD float ptr [ESP + 0x18]          ; 0053335e
    FSUB float ptr [ESI]                ; 00533362
    FMUL ST0                            ; 00533364
    FLD float ptr [ESP + 0x1c]          ; 00533366
    FSUB float ptr [ESI + 0x4]          ; 0053336a
    FMUL ST0                            ; 0053336d
    FLD float ptr [ESP + 0x20]          ; 0053336f
    FXCH                                ; 00533373
    FADDP ST2,ST0                       ; 00533375
    FSUB float ptr [ESI + 0x8]          ; 00533377
    FMUL ST0                            ; 0053337a
    FADDP                               ; 0053337c
    FCOMP double ptr [0x00595032]       ; 0053337e | DOUBLE_00595032
    FNSTSW AX                           ; 00533384
    SAHF                                ; 00533386
    JA 0x00533516                       ; 00533387
        ;   XREF to: 00533516 (CONDITIONAL_JUMP)  ; LAB_00533516
    ADD ESP,0x40                        ; 0053338d
        ;   Label: LAB_0053338d
    POP EBP                             ; 00533390
    POP EDI                             ; 00533391
    POP ESI                             ; 00533392
    POP EBX                             ; 00533393
    RET                                 ; 00533394
    LEA EAX,[EBX + 0x3b0]               ; 00533395
        ;   Label: LAB_00533395
    PUSH EAX                            ; 0053339b
    MOV ESI,dword ptr [0x005b7650]      ; 0053339c | DAT_005b7650
    PUSH ESI                            ; 005333a2
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 005333a3
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005333a8
    TEST EAX,EAX                        ; 005333ab
    JZ 0x005333b9                       ; 005333ad
        ;   XREF to: 005333b9 (CONDITIONAL_JUMP)  ; LAB_005333b9
    MOV dword ptr [EBX + 0x2d4],0x1     ; 005333af
    LEA EAX,[EBX + 0x414]               ; 005333b9
        ;   Label: LAB_005333b9
    PUSH EAX                            ; 005333bf
    MOV EDI,dword ptr [0x005b7650]      ; 005333c0 | DAT_005b7650
    PUSH EDI                            ; 005333c6
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 005333c7
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005333cc
    TEST EAX,EAX                        ; 005333cf
    JZ 0x005333e2                       ; 005333d1
        ;   XREF to: 005333e2 (CONDITIONAL_JUMP)  ; LAB_005333e2
    MOV dword ptr [EBX + 0x2d4],0x1     ; 005333d3
    JMP 0x00533296                      ; 005333dd
        ;   XREF to: 00533296 (UNCONDITIONAL_JUMP)  ; LAB_00533296
    CMP dword ptr [EBX + 0x2d4],0x0     ; 005333e2
        ;   Label: LAB_005333e2
    JZ 0x00533279                       ; 005333e9
        ;   XREF to: 00533279 (CONDITIONAL_JUMP)  ; LAB_00533279
    JMP 0x00533296                      ; 005333ef
        ;   XREF to: 00533296 (UNCONDITIONAL_JUMP)  ; LAB_00533296
    CMP EDI,0x1                         ; 005333f4
        ;   Label: LAB_005333f4
    JNZ 0x0053348f                      ; 005333f7
        ;   XREF to: 0053348f (CONDITIONAL_JUMP)  ; LAB_0053348f
    FLD float ptr [ESP + 0x58]          ; 005333fd
    FDIV float ptr [EBX + 0x478]        ; 00533401
    FADD float ptr [EBX + 0x554]        ; 00533407
    FST float ptr [EBX + 0x554]         ; 0053340d
    FLD1                                ; 00533413
    FCOMPP                              ; 00533415
    FNSTSW AX                           ; 00533417
    SAHF                                ; 00533419
    JNC 0x005332db                      ; 0053341a
        ;   XREF to: 005332db (CONDITIONAL_JUMP)  ; LAB_005332db
    MOV dword ptr [EBX + 0x2d0],0x2     ; 00533420
    MOV EDI,dword ptr [EBX + 0x2cc]     ; 0053342a
    MOV dword ptr [EBX + 0x554],0x3f800000 ; 00533430
    CMP EDI,0x2                         ; 0053343a
    JZ 0x00533455                       ; 0053343d
        ;   XREF to: 00533455 (CONDITIONAL_JUMP)  ; LAB_00533455
    CMP EDI,0x1                         ; 0053343f
    JZ 0x00533464                       ; 00533442
        ;   XREF to: 00533464 (CONDITIONAL_JUMP)  ; LAB_00533464
    MOV EAX,dword ptr [EBX + 0x54c]     ; 00533444
    MOV dword ptr [EBX + 0x480],EAX     ; 0053344a
    JMP 0x005332db                      ; 00533450
        ;   XREF to: 005332db (UNCONDITIONAL_JUMP)  ; LAB_005332db
    MOV dword ptr [EBX + 0x2d4],0x0     ; 00533455
        ;   Label: LAB_00533455
    JMP 0x005332db                      ; 0053345f
        ;   XREF to: 005332db (UNCONDITIONAL_JUMP)  ; LAB_005332db
    PUSH 0x3fa00000                     ; 00533464
        ;   Label: LAB_00533464
    PUSH 0x3f400000                     ; 00533469
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0053346e
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x44],EAX      ; 00533473
    FLD float ptr [ESP + 0x44]          ; 00533477
    FMUL float ptr [EBX + 0x54c]        ; 0053347b
    ADD ESP,0x8                         ; 00533481
    FSTP float ptr [EBX + 0x480]        ; 00533484
    JMP 0x005332db                      ; 0053348a
        ;   XREF to: 005332db (UNCONDITIONAL_JUMP)  ; LAB_005332db
    CMP EDI,0x2                         ; 0053348f
        ;   Label: LAB_0053348f
    JNZ 0x005334ad                      ; 00533492
        ;   XREF to: 005334ad (CONDITIONAL_JUMP)  ; LAB_005334ad
    MOV dword ptr [EBX + 0x554],0x3f800000 ; 00533494
    MOV dword ptr [EBX + 0x2d0],0x3     ; 0053349e
    JMP 0x005332db                      ; 005334a8
        ;   XREF to: 005332db (UNCONDITIONAL_JUMP)  ; LAB_005332db
    CMP EDI,0x3                         ; 005334ad
        ;   Label: LAB_005334ad
    JNZ 0x005332db                      ; 005334b0
        ;   XREF to: 005332db (CONDITIONAL_JUMP)  ; LAB_005332db
    FLD float ptr [ESP + 0x58]          ; 005334b6
    FDIV float ptr [EBX + 0x47c]        ; 005334ba
    FSUBR float ptr [EBX + 0x554]       ; 005334c0
    FST float ptr [EBX + 0x554]         ; 005334c6
    FLDZ                                ; 005334cc
    FCOMPP                              ; 005334ce
    FNSTSW AX                           ; 005334d0
    SAHF                                ; 005334d2
    JBE 0x005332db                      ; 005334d3
        ;   XREF to: 005332db (CONDITIONAL_JUMP)  ; LAB_005332db
    MOV dword ptr [EBX + 0x2d0],0x0     ; 005334d9
    MOV ECX,dword ptr [EBX + 0x2cc]     ; 005334e3
    MOV dword ptr [EBX + 0x554],0x0     ; 005334e9
    CMP ECX,0x2                         ; 005334f3
    JZ 0x00533455                       ; 005334f6
        ;   XREF to: 00533455 (CONDITIONAL_JUMP)  ; LAB_00533455
    CMP ECX,0x1                         ; 005334fc
    JZ 0x00533464                       ; 005334ff
        ;   XREF to: 00533464 (CONDITIONAL_JUMP)  ; LAB_00533464
    MOV EAX,dword ptr [EBX + 0x54c]     ; 00533505
    MOV dword ptr [EBX + 0x480],EAX     ; 0053350b
    JMP 0x005332db                      ; 00533511
        ;   XREF to: 005332db (UNCONDITIONAL_JUMP)  ; LAB_005332db
    PUSH EBX                            ; 00533516
        ;   Label: LAB_00533516
    CALL core_spike.cpp_FUN_00533750    ; 00533517
        ;   XREF to: 00533750 (UNCONDITIONAL_CALL)  ; void core_spike.cpp_FUN_00533750(CSpike * this_ptr)
    ADD ESP,0x4                         ; 0053351c
    ADD ESP,0x40                        ; 0053351f
    POP EBP                             ; 00533522
    POP EDI                             ; 00533523
    POP ESI                             ; 00533524
    POP EBX                             ; 00533525
    RET                                 ; 00533526

