; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool __cdecl core_waypoint_cpp_CWayPoint_isReachable_FUN_005523b0(float *param_1,float *param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_00552680 at 005526a0
;
; Referenced Globals:
;   undefined4 DAT_00597748
;   undefined4 DAT_00597750
;   undefined4 DAT_00597758
;   undefined4 DAT_00597760
;
; Called Functions:
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600
;   core_path.cpp_getPathMap_FUN_004f1e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005523b0
        ;   Label: core_waypoint.cpp_CWayPoint_isReachable_FUN_005523b0
    PUSH EBP                            ; 005523b1
    MOV EBP,ESP                         ; 005523b2
    SUB ESP,0x24                        ; 005523b4
    AND ESP,0xfffffff8                  ; 005523b7
    MOV EDX,dword ptr [EBP + 0xc]       ; 005523ba
    MOV ECX,dword ptr [EBP + 0x10]      ; 005523bd
    FLD float ptr [EDX]                 ; 005523c0
    FSUB float ptr [ECX]                ; 005523c2
    FSTP float ptr [ESP + 0xc]          ; 005523c4
    FLD float ptr [EDX + 0x4]           ; 005523c8
    FSUB float ptr [ECX + 0x4]          ; 005523cb
    FSTP float ptr [ESP + 0x10]         ; 005523ce
    FLD float ptr [EDX + 0x8]           ; 005523d2
    FSUB float ptr [ECX + 0x8]          ; 005523d5
    MOV EBX,dword ptr [EBP + 0x14]      ; 005523d8
    FSTP float ptr [ESP + 0x14]         ; 005523db
    TEST EBX,EBX                        ; 005523df
    JZ 0x0055241d                       ; 005523e1
        ;   XREF to: 0055241d (CONDITIONAL_JUMP)  ; LAB_0055241d
    FLD float ptr [ESP + 0x10]          ; 005523e3
    FABS                                ; 005523e7
    FCOMP double ptr [0x00597758]       ; 005523e9 | DAT_00597758
    FNSTSW AX                           ; 005523ef
    SAHF                                ; 005523f1
    JA 0x00552416                       ; 005523f2
        ;   XREF to: 00552416 (CONDITIONAL_JUMP)  ; LAB_00552416
    FLD float ptr [ESP + 0xc]           ; 005523f4
    FABS                                ; 005523f8
    FCOMP double ptr [0x00597760]       ; 005523fa | DAT_00597760
    FNSTSW AX                           ; 00552400
    SAHF                                ; 00552402
    JA 0x00552416                       ; 00552403
        ;   XREF to: 00552416 (CONDITIONAL_JUMP)  ; LAB_00552416
    FLD float ptr [ESP + 0x14]          ; 00552405
    FABS                                ; 00552409
    FCOMP double ptr [0x00597760]       ; 0055240b | DAT_00597760
    FNSTSW AX                           ; 00552411
    SAHF                                ; 00552413
    JBE 0x00552457                      ; 00552414
        ;   XREF to: 00552457 (CONDITIONAL_JUMP)  ; LAB_00552457
    XOR EAX,EAX                         ; 00552416
        ;   Label: LAB_00552416
    MOV ESP,EBP                         ; 00552418
    POP EBP                             ; 0055241a
    POP EBX                             ; 0055241b
    RET                                 ; 0055241c
    FLD float ptr [ESP + 0x10]          ; 0055241d
        ;   Label: LAB_0055241d
    FABS                                ; 00552421
    FCOMP double ptr [0x00597748]       ; 00552423 | DAT_00597748
    FNSTSW AX                           ; 00552429
    SAHF                                ; 0055242b
    JA 0x00552416                       ; 0055242c
        ;   XREF to: 00552416 (CONDITIONAL_JUMP)  ; LAB_00552416
    FLD float ptr [ESP + 0xc]           ; 0055242e
    FABS                                ; 00552432
    FCOMP double ptr [0x00597750]       ; 00552434 | DAT_00597750
    FNSTSW AX                           ; 0055243a
    SAHF                                ; 0055243c
    JA 0x00552416                       ; 0055243d
        ;   XREF to: 00552416 (CONDITIONAL_JUMP)  ; LAB_00552416
    FLD float ptr [ESP + 0x14]          ; 0055243f
    FABS                                ; 00552443
    FCOMP double ptr [0x00597750]       ; 00552445 | DAT_00597750
    FNSTSW AX                           ; 0055244b
    SAHF                                ; 0055244d
    JBE 0x00552457                      ; 0055244e
        ;   XREF to: 00552457 (CONDITIONAL_JUMP)  ; LAB_00552457
    XOR EAX,EAX                         ; 00552450
    MOV ESP,EBP                         ; 00552452
    POP EBP                             ; 00552454
    POP EBX                             ; 00552455
    RET                                 ; 00552456
    MOV EAX,dword ptr [EDX]             ; 00552457
        ;   Label: LAB_00552457
    MOV dword ptr [ESP + 0x18],EAX      ; 00552459
    LEA EAX,[EDX + 0x4]                 ; 0055245d
    MOV EAX,dword ptr [EAX]             ; 00552460
    MOV dword ptr [ESP + 0x1c],EAX      ; 00552462
    LEA EAX,[EDX + 0x8]                 ; 00552466
    MOV EAX,dword ptr [EAX]             ; 00552469
    PUSH ECX                            ; 0055246b
    MOV dword ptr [ESP + 0x24],EAX      ; 0055246c
    CALL core_path.cpp_getPathMap_FUN_004f1e00 ; 00552470
        ;   XREF to: 004f1e00 (UNCONDITIONAL_CALL)  ; undefined core_path.cpp_getPathMap_FUN_004f1e00()
    ADD ESP,0x4                         ; 00552475
    PUSH 0x0                            ; 00552478
    LEA EDX,[ESP + 0x4]                 ; 0055247a
    PUSH EDX                            ; 0055247e
    LEA EDX,[ESP + 0x20]                ; 0055247f
    PUSH EDX                            ; 00552483
    PUSH EAX                            ; 00552484
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600 ; 00552485
        ;   XREF to: 004f1600 (UNCONDITIONAL_CALL)  ; undefined core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600()
    ADD ESP,0x10                        ; 0055248a
    CMP EAX,0x1                         ; 0055248d
    SETZ AL                             ; 00552490
    AND EAX,0xff                        ; 00552493
    MOV ESP,EBP                         ; 00552498
    POP EBP                             ; 0055249a
    POP EBX                             ; 0055249b
    RET                                 ; 0055249c

