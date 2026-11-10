; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_waypoint_cpp_FUN_005882d0(undefined4 param_1,int param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[3]:
;   core_charactr.cpp_FUN_0042b420 at 0042b434
;   core_hostage.cpp_CHostage_process_FUN_004d1660 at 004d227a
;   unkafter_basicene.cpp_FUN_0059ee00 at 0059eec1
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CDemonSetInstance.waypoint_count
;   undefined4 DAT_0265fb64
;
; Called Functions:
;   core_waypoint.cpp_FUN_00587c30
;   crt_string.c_memmove_FUN_005ba1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005882d0
        ;   Label: core_waypoint.cpp_FUN_005882d0
    PUSH EBP                            ; 005882d1
    SUB ESP,0x10                        ; 005882d2
    MOV EBX,dword ptr [ESP + 0x20]      ; 005882d5
    TEST EBX,EBX                        ; 005882d9
    JNZ 0x005882e5                      ; 005882db
        ;   XREF to: 005882e5 (CONDITIONAL_JUMP)  ; LAB_005882e5
    XOR EAX,EAX                         ; 005882dd
    ADD ESP,0x10                        ; 005882df
        ;   Label: LAB_005882df
    POP EBP                             ; 005882e2
    POP EBX                             ; 005882e3
    RET                                 ; 005882e4
    MOV EDX,dword ptr [ESP + 0x24]      ; 005882e5
        ;   Label: LAB_005882e5
    PUSH EDX                            ; 005882e9
    PUSH 0x0                            ; 005882ea
    LEA EAX,[EBX + 0x20]                ; 005882ec
    PUSH EAX                            ; 005882ef
    MOV ECX,dword ptr [ESP + 0x28]      ; 005882f0
    PUSH ECX                            ; 005882f4
    CALL core_waypoint.cpp_FUN_00587c30 ; 005882f5
        ;   XREF to: 00587c30 (UNCONDITIONAL_CALL)  ; undefined core_waypoint.cpp_FUN_00587c30()
    ADD ESP,0x10                        ; 005882fa
    TEST EAX,EAX                        ; 005882fd
    JNZ 0x00588333                      ; 005882ff
        ;   XREF to: 00588333 (CONDITIONAL_JUMP)  ; LAB_00588333
    CMP dword ptr [EBX + 0x4d0],0x1     ; 00588301
    JL 0x005882df                       ; 00588308
        ;   XREF to: 005882df (CONDITIONAL_JUMP)  ; LAB_005882df
    PUSH EDI                            ; 0058830a
    PUSH ESI                            ; 0058830b
    XOR ESI,ESI                         ; 0058830c
    MOV EDX,dword ptr [0x0061b5a8]      ; 0058830e | g_CDemonSetPtr
        ;   Label: LAB_0058830e
    CMP ESI,dword ptr [EDX + 0x154e74]  ; 00588314 | g_CDemonSetInstance.waypoint_count
    JGE 0x0058833b                      ; 0058831a
        ;   XREF to: 0058833b (CONDITIONAL_JUMP)  ; LAB_0058833b
    MOV EDX,dword ptr [EDX + EAX*0x1 + 0x154e78] ; 0058831c
    ADD EAX,0x4                         ; 00588323
    INC ESI                             ; 00588326
    MOV dword ptr [EDX + 0x6b4],0x7149f2ca ; 00588327
    JMP 0x0058830e                      ; 00588331
        ;   XREF to: 0058830e (UNCONDITIONAL_JUMP)  ; LAB_0058830e
    MOV EAX,EBX                         ; 00588333
        ;   Label: LAB_00588333
    ADD ESP,0x10                        ; 00588335
    POP EBP                             ; 00588338
    POP EBX                             ; 00588339
    RET                                 ; 0058833a
    MOV ESI,0x1                         ; 0058833b
        ;   Label: LAB_0058833b
    MOV dword ptr [0x0265fb64],EBX      ; 00588340 | DAT_0265fb64
    MOV dword ptr [EBX + 0x6b4],0x0     ; 00588346
    DEC ESI                             ; 00588350
        ;   Label: LAB_00588350
    LEA EBX,[ESI*0x4 + 0x0]             ; 00588351
    PUSH EBX                            ; 00588358
    PUSH 0x265fb68                      ; 00588359
    MOV EAX,[0x0265fb64]                ; 0058835e | DAT_0265fb64
    PUSH 0x265fb64                      ; 00588363 | DAT_0265fb64
    MOV dword ptr [ESP + 0x18],EAX      ; 00588368
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0058836c
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00588371
    MOV EAX,dword ptr [ESP + 0xc]       ; 00588374
    XOR EBP,EBP                         ; 00588378
    MOV EDX,dword ptr [EAX + 0x4d0]     ; 0058837a
    MOV dword ptr [ESP + 0x14],EBP      ; 00588380
    TEST EDX,EDX                        ; 00588384
    JLE 0x005883fe                      ; 00588386
        ;   XREF to: 005883fe (CONDITIONAL_JUMP)  ; LAB_005883fe
    MOV EBP,EBX                         ; 0058838c
    MOV EDI,EAX                         ; 0058838e
    MOV EAX,dword ptr [ESP + 0xc]       ; 00588390
        ;   Label: LAB_00588390
    FLD float ptr [EAX + 0x6b4]         ; 00588394
    FADD float ptr [EDI + 0x4d8]        ; 0058839a
    MOV ECX,dword ptr [EDI + 0x4d4]     ; 005883a0
    FST float ptr [ESP + 0x10]          ; 005883a6
    FCOMP float ptr [ECX + 0x6b4]       ; 005883aa
    FNSTSW AX                           ; 005883b0
    SAHF                                ; 005883b2
    JNC 0x005883e4                      ; 005883b3
        ;   XREF to: 005883e4 (CONDITIONAL_JUMP)  ; LAB_005883e4
    MOV EAX,dword ptr [ESP + 0x10]      ; 005883b5
    XOR EDX,EDX                         ; 005883b9
    MOV dword ptr [ECX + 0x6b4],EAX     ; 005883bb
    TEST ESI,ESI                        ; 005883c1
    JLE 0x005883d6                      ; 005883c3
        ;   XREF to: 005883d6 (CONDITIONAL_JUMP)  ; LAB_005883d6
    LEA EBX,[ESI*0x4 + 0x0]             ; 005883c5
    XOR EAX,EAX                         ; 005883cc
    CMP ECX,dword ptr [EAX + 0x265fb64] ; 005883ce | DAT_0265fb64
        ;   Label: LAB_005883ce
    JNZ 0x0058843e                      ; 005883d4
        ;   XREF to: 0058843e (CONDITIONAL_JUMP)  ; LAB_0058843e
    CMP EDX,ESI                         ; 005883d6
        ;   Label: LAB_005883d6
    JNZ 0x005883e4                      ; 005883d8
        ;   XREF to: 005883e4 (CONDITIONAL_JUMP)  ; LAB_005883e4
    ADD EBP,0x4                         ; 005883da
    INC ESI                             ; 005883dd
    MOV dword ptr [EBP + 0x265fb60],ECX ; 005883de | DAT_0265fb64
    MOV ECX,dword ptr [ESP + 0x14]      ; 005883e4
        ;   Label: LAB_005883e4
    MOV EDX,dword ptr [ESP + 0xc]       ; 005883e8
    ADD EDI,0x8                         ; 005883ec
    INC ECX                             ; 005883ef
    MOV EBX,dword ptr [EDX + 0x4d0]     ; 005883f0
    MOV dword ptr [ESP + 0x14],ECX      ; 005883f6
    CMP ECX,EBX                         ; 005883fa
    JL 0x00588390                       ; 005883fc
        ;   XREF to: 00588390 (CONDITIONAL_JUMP)  ; LAB_00588390
    TEST ESI,ESI                        ; 005883fe
        ;   Label: LAB_005883fe
    JG 0x00588350                       ; 00588400
        ;   XREF to: 00588350 (CONDITIONAL_JUMP)  ; LAB_00588350
    MOV ESI,0x6fa18f08                  ; 00588406
    XOR EBP,EBP                         ; 0058840b
    XOR EDI,EDI                         ; 0058840d
    MOV dword ptr [ESP + 0x8],ESI       ; 0058840f
    XOR ESI,ESI                         ; 00588413
    MOV EAX,[0x0061b5a8]                ; 00588415 | g_CDemonSetPtr
        ;   Label: LAB_00588415
    CMP EDI,dword ptr [EAX + 0x154e74]  ; 0058841a | g_CDemonSetInstance.waypoint_count
    JGE 0x00588472                      ; 00588420
        ;   XREF to: 00588472 (CONDITIONAL_JUMP)  ; LAB_00588472
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x154e78] ; 00588422
    FLD float ptr [EBX + 0x6b4]         ; 00588429
    FCOMP float ptr [ESP + 0x8]         ; 0058842f
    FNSTSW AX                           ; 00588433
    SAHF                                ; 00588435
    JC 0x00588448                       ; 00588436
        ;   XREF to: 00588448 (CONDITIONAL_JUMP)  ; LAB_00588448
    INC EDI                             ; 00588438
        ;   Label: LAB_00588438
    ADD ESI,0x4                         ; 00588439
    JMP 0x00588415                      ; 0058843c
        ;   XREF to: 00588415 (UNCONDITIONAL_JUMP)  ; LAB_00588415
    ADD EAX,0x4                         ; 0058843e
        ;   Label: LAB_0058843e
    INC EDX                             ; 00588441
    CMP EAX,EBX                         ; 00588442
    JL 0x005883ce                       ; 00588444
        ;   XREF to: 005883ce (CONDITIONAL_JUMP)  ; LAB_005883ce
    JMP 0x005883d6                      ; 00588446
        ;   XREF to: 005883d6 (UNCONDITIONAL_JUMP)  ; LAB_005883d6
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00588448
        ;   Label: LAB_00588448
    PUSH ECX                            ; 0058844c
    PUSH 0x0                            ; 0058844d
    LEA EAX,[EBX + 0x20]                ; 0058844f
    PUSH EAX                            ; 00588452
    MOV EAX,dword ptr [ESP + 0x30]      ; 00588453
    PUSH EAX                            ; 00588457
    CALL core_waypoint.cpp_FUN_00587c30 ; 00588458
        ;   XREF to: 00587c30 (UNCONDITIONAL_CALL)  ; undefined core_waypoint.cpp_FUN_00587c30()
    ADD ESP,0x10                        ; 0058845d
    TEST EAX,EAX                        ; 00588460
    JZ 0x00588438                       ; 00588462
        ;   XREF to: 00588438 (CONDITIONAL_JUMP)  ; LAB_00588438
    MOV EAX,dword ptr [EBX + 0x6b4]     ; 00588464
    MOV EBP,EBX                         ; 0058846a
    MOV dword ptr [ESP + 0x8],EAX       ; 0058846c
    JMP 0x00588438                      ; 00588470
        ;   XREF to: 00588438 (UNCONDITIONAL_JUMP)  ; LAB_00588438
    MOV EAX,EBP                         ; 00588472
        ;   Label: LAB_00588472
    POP ESI                             ; 00588474
    POP EDI                             ; 00588475
    ADD ESP,0x10                        ; 00588476
    POP EBP                             ; 00588479
    POP EBX                             ; 0058847a
    RET                                 ; 0058847b

