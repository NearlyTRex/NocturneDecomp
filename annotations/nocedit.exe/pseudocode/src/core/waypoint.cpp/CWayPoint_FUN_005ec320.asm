; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_waypoint_cpp_CWayPoint_FUN_005ec320(CWayPoint *this_ptr)
;
; Parameters:
; CWayPoint *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70 at 0042cce5
;   core_charactr.cpp_CCharacter_updateWanderToWaypoint_FUN_0042e050 at 0042e1cb
;   core_hostage.cpp_CHostage_process_FUN_004f4bd0 at 004f5644
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_032690dc
;   undefined4 DAT_032690e0
;   undefined4 DAT_032690e4
;   undefined4 DAT_03f939a4
;   undefined4 DAT_03f939a8
;
; Called Functions:
;   core_waypoint.cpp_CWayPoint_FUN_005ebd40
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ec320
        ;   Label: core_waypoint.cpp_CWayPoint_FUN_005ec320
    PUSH EBP                            ; 005ec321
    SUB ESP,0x10                        ; 005ec322
    MOV EBX,dword ptr [ESP + 0x20]      ; 005ec325
    TEST EBX,EBX                        ; 005ec329
    JNZ 0x005ec335                      ; 005ec32b
        ;   XREF to: 005ec335 (CONDITIONAL_JUMP)  ; LAB_005ec335
    XOR EAX,EAX                         ; 005ec32d
    ADD ESP,0x10                        ; 005ec32f
        ;   Label: LAB_005ec32f
    POP EBP                             ; 005ec332
    POP EBX                             ; 005ec333
    RET                                 ; 005ec334
    PUSH 0x0                            ; 005ec335
        ;   Label: LAB_005ec335
    LEA EAX,[EBX + 0x20]                ; 005ec337
    PUSH EAX                            ; 005ec33a
    MOV EDX,dword ptr [ESP + 0x24]      ; 005ec33b
    PUSH EDX                            ; 005ec33f
    CALL core_waypoint.cpp_CWayPoint_FUN_005ebd40 ; 005ec340
        ;   XREF to: 005ebd40 (UNCONDITIONAL_CALL)  ; int core_waypoint.cpp_CWayPoint_FUN_005ebd40(CWayPoint * this_ptr)
    ADD ESP,0xc                         ; 005ec345
    TEST EAX,EAX                        ; 005ec348
    JNZ 0x005ec37e                      ; 005ec34a
        ;   XREF to: 005ec37e (CONDITIONAL_JUMP)  ; LAB_005ec37e
    CMP dword ptr [EBX + 0x370],0x1     ; 005ec34c
    JL 0x005ec32f                       ; 005ec353
        ;   XREF to: 005ec32f (CONDITIONAL_JUMP)  ; LAB_005ec32f
    PUSH EDI                            ; 005ec355
    PUSH ESI                            ; 005ec356
    XOR ESI,ESI                         ; 005ec357
    MOV EDX,dword ptr [0x006810c8]      ; 005ec359 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_005ec359
    CMP ESI,dword ptr [EDX + 0x154e64]  ; 005ec35f | DAT_032690dc
    JGE 0x005ec386                      ; 005ec365
        ;   XREF to: 005ec386 (CONDITIONAL_JUMP)  ; LAB_005ec386
    MOV EDX,dword ptr [EDX + EAX*0x1 + 0x154e68] ; 005ec367 | DAT_032690e0
    ADD EAX,0x4                         ; 005ec36e
    INC ESI                             ; 005ec371
    MOV dword ptr [EDX + 0x554],0x7149f2ca ; 005ec372
    JMP 0x005ec359                      ; 005ec37c
        ;   XREF to: 005ec359 (UNCONDITIONAL_JUMP)  ; LAB_005ec359
    MOV EAX,EBX                         ; 005ec37e
        ;   Label: LAB_005ec37e
    ADD ESP,0x10                        ; 005ec380
    POP EBP                             ; 005ec383
    POP EBX                             ; 005ec384
    RET                                 ; 005ec385
    MOV ESI,0x1                         ; 005ec386
        ;   Label: LAB_005ec386
    MOV dword ptr [0x03f939a4],EBX      ; 005ec38b | DAT_03f939a4
    MOV dword ptr [EBX + 0x554],0x0     ; 005ec391
    DEC ESI                             ; 005ec39b
        ;   Label: LAB_005ec39b
    LEA EBX,[ESI*0x4 + 0x0]             ; 005ec39c
    PUSH EBX                            ; 005ec3a3
    PUSH 0x3f939a8                      ; 005ec3a4 | DAT_03f939a8
    MOV EAX,[0x03f939a4]                ; 005ec3a9 | DAT_03f939a4
    PUSH 0x3f939a4                      ; 005ec3ae | DAT_03f939a4
    MOV dword ptr [ESP + 0x18],EAX      ; 005ec3b3
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 005ec3b7
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005ec3bc
    MOV EAX,dword ptr [ESP + 0xc]       ; 005ec3bf
    XOR EBP,EBP                         ; 005ec3c3
    MOV EDX,dword ptr [EAX + 0x370]     ; 005ec3c5
    MOV dword ptr [ESP + 0x14],EBP      ; 005ec3cb
    TEST EDX,EDX                        ; 005ec3cf
    JLE 0x005ec449                      ; 005ec3d1
        ;   XREF to: 005ec449 (CONDITIONAL_JUMP)  ; LAB_005ec449
    MOV EBP,EBX                         ; 005ec3d7
    MOV EDI,EAX                         ; 005ec3d9
    MOV EAX,dword ptr [ESP + 0xc]       ; 005ec3db
        ;   Label: LAB_005ec3db
    FLD float ptr [EAX + 0x554]         ; 005ec3df
    FADD float ptr [EDI + 0x378]        ; 005ec3e5
    MOV ECX,dword ptr [EDI + 0x374]     ; 005ec3eb
    FST float ptr [ESP + 0x10]          ; 005ec3f1
    FCOMP float ptr [ECX + 0x554]       ; 005ec3f5
    FNSTSW AX                           ; 005ec3fb
    SAHF                                ; 005ec3fd
    JNC 0x005ec42f                      ; 005ec3fe
        ;   XREF to: 005ec42f (CONDITIONAL_JUMP)  ; LAB_005ec42f
    MOV EAX,dword ptr [ESP + 0x10]      ; 005ec400
    XOR EDX,EDX                         ; 005ec404
    MOV dword ptr [ECX + 0x554],EAX     ; 005ec406
    TEST ESI,ESI                        ; 005ec40c
    JLE 0x005ec421                      ; 005ec40e
        ;   XREF to: 005ec421 (CONDITIONAL_JUMP)  ; LAB_005ec421
    LEA EBX,[ESI*0x4 + 0x0]             ; 005ec410
    XOR EAX,EAX                         ; 005ec417
    CMP ECX,dword ptr [EAX + 0x3f939a4] ; 005ec419 | DAT_03f939a4 | DAT_03f939a8
        ;   Label: LAB_005ec419
    JNZ 0x005ec489                      ; 005ec41f
        ;   XREF to: 005ec489 (CONDITIONAL_JUMP)  ; LAB_005ec489
    CMP EDX,ESI                         ; 005ec421
        ;   Label: LAB_005ec421
    JNZ 0x005ec42f                      ; 005ec423
        ;   XREF to: 005ec42f (CONDITIONAL_JUMP)  ; LAB_005ec42f
    ADD EBP,0x4                         ; 005ec425
    INC ESI                             ; 005ec428
    MOV dword ptr [EBP + 0x3f939a0],ECX ; 005ec429 | DAT_03f939a4 | DAT_03f939a8
    MOV ECX,dword ptr [ESP + 0x14]      ; 005ec42f
        ;   Label: LAB_005ec42f
    MOV EDX,dword ptr [ESP + 0xc]       ; 005ec433
    ADD EDI,0x8                         ; 005ec437
    INC ECX                             ; 005ec43a
    MOV EBX,dword ptr [EDX + 0x370]     ; 005ec43b
    MOV dword ptr [ESP + 0x14],ECX      ; 005ec441
    CMP ECX,EBX                         ; 005ec445
    JL 0x005ec3db                       ; 005ec447
        ;   XREF to: 005ec3db (CONDITIONAL_JUMP)  ; LAB_005ec3db
    TEST ESI,ESI                        ; 005ec449
        ;   Label: LAB_005ec449
    JG 0x005ec39b                       ; 005ec44b
        ;   XREF to: 005ec39b (CONDITIONAL_JUMP)  ; LAB_005ec39b
    MOV ESI,0x6fa18f08                  ; 005ec451
    XOR EBP,EBP                         ; 005ec456
    XOR EDI,EDI                         ; 005ec458
    MOV dword ptr [ESP + 0x8],ESI       ; 005ec45a
    XOR ESI,ESI                         ; 005ec45e
    MOV EAX,[0x006810c8]                ; 005ec460 | g_CDemonSetPtr
        ;   Label: LAB_005ec460
    CMP EDI,dword ptr [EAX + 0x154e64]  ; 005ec465 | DAT_032690dc
    JGE 0x005ec4b8                      ; 005ec46b
        ;   XREF to: 005ec4b8 (CONDITIONAL_JUMP)  ; LAB_005ec4b8
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x154e68] ; 005ec46d | DAT_032690e0 | DAT_032690e4
    FLD float ptr [EBX + 0x554]         ; 005ec474
    FCOMP float ptr [ESP + 0x8]         ; 005ec47a
    FNSTSW AX                           ; 005ec47e
    SAHF                                ; 005ec480
    JC 0x005ec493                       ; 005ec481
        ;   XREF to: 005ec493 (CONDITIONAL_JUMP)  ; LAB_005ec493
    INC EDI                             ; 005ec483
        ;   Label: LAB_005ec483
    ADD ESI,0x4                         ; 005ec484
    JMP 0x005ec460                      ; 005ec487
        ;   XREF to: 005ec460 (UNCONDITIONAL_JUMP)  ; LAB_005ec460
    ADD EAX,0x4                         ; 005ec489
        ;   Label: LAB_005ec489
    INC EDX                             ; 005ec48c
    CMP EAX,EBX                         ; 005ec48d
    JL 0x005ec419                       ; 005ec48f
        ;   XREF to: 005ec419 (CONDITIONAL_JUMP)  ; LAB_005ec419
    JMP 0x005ec421                      ; 005ec491
        ;   XREF to: 005ec421 (UNCONDITIONAL_JUMP)  ; LAB_005ec421
    PUSH 0x0                            ; 005ec493
        ;   Label: LAB_005ec493
    LEA EAX,[EBX + 0x20]                ; 005ec495
    PUSH EAX                            ; 005ec498
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005ec499
    PUSH ECX                            ; 005ec49d
    CALL core_waypoint.cpp_CWayPoint_FUN_005ebd40 ; 005ec49e
        ;   XREF to: 005ebd40 (UNCONDITIONAL_CALL)  ; int core_waypoint.cpp_CWayPoint_FUN_005ebd40(CWayPoint * this_ptr)
    ADD ESP,0xc                         ; 005ec4a3
    TEST EAX,EAX                        ; 005ec4a6
    JZ 0x005ec483                       ; 005ec4a8
        ;   XREF to: 005ec483 (CONDITIONAL_JUMP)  ; LAB_005ec483
    MOV EAX,dword ptr [EBX + 0x554]     ; 005ec4aa
    MOV EBP,EBX                         ; 005ec4b0
    MOV dword ptr [ESP + 0x8],EAX       ; 005ec4b2
    JMP 0x005ec483                      ; 005ec4b6
        ;   XREF to: 005ec483 (UNCONDITIONAL_JUMP)  ; LAB_005ec483
    MOV EAX,EBP                         ; 005ec4b8
        ;   Label: LAB_005ec4b8
    POP ESI                             ; 005ec4ba
    POP EDI                             ; 005ec4bb
    ADD ESP,0x10                        ; 005ec4bc
    POP EBP                             ; 005ec4bf
    POP EBX                             ; 005ec4c0
    RET                                 ; 005ec4c1

