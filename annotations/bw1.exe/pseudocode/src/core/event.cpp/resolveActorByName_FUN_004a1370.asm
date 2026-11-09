; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_event_cpp_resolveActorByName_FUN_004a1370(char *param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_004a70d0 at 004a782f
;   core_event.cpp_FUN_004a1d00 at 004a2189
;   core_event.cpp_parseVectorLocation_FUN_004a14a0 at 004a153e
;
; Referenced Globals:
;   TerminatedCString s_Must_specify_actor_name_005dcbd7
;   undefined4 s_ust_specify_actor_name_005dcbd7+1
;   undefined4 s_st_specify_actor_name_005dcbd7+2
;   undefined4 s_t_specify_actor_name_005dcbd7+3
;   undefined4 DAT_005dcbef
;   TerminatedCString s_Can_t_use_actor_specifie_005dcbf1
;   TerminatedCString s_Actor_s_does_not_exist_005dcc1f
;   TerminatedCString s_Actor_s_is_of_type_s_thi_005dcc3a
;   undefined4 DAT_005ffcb8
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_0061f650
;   CNetGame* g_CNetGamePtr = 01d51c20
;   undefined4 DAT_01c56ed0
;   undefined4 DAT_01c56ed1
;   undefined4 DAT_01c56ed2
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408830
;   core_actor.cpp_isOfClassHash_FUN_0040c5d0
;   core_event.cpp_CEventList_getActorByVarName_FUN_004aa1d0
;   core_mission.cpp_FUN_0051b6c0
;   crt_string.c__stricmp_FUN_005c04e0
;   crt_unknown.c_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1370
        ;   Label: core_event.cpp_resolveActorByName_FUN_004a1370
    PUSH ESI                            ; 004a1371
    PUSH EDI                            ; 004a1372
    PUSH EBP                            ; 004a1373
    MOV EBX,dword ptr [ESP + 0x14]      ; 004a1374
    TEST EBX,EBX                        ; 004a1378
    JZ 0x004a13a7                       ; 004a137a
        ;   XREF to: 004a13a7 (CONDITIONAL_JUMP)  ; LAB_004a13a7
    MOV AH,byte ptr [EBX]               ; 004a137c
    TEST AH,AH                          ; 004a137e
    JZ 0x004a13a7                       ; 004a1380
        ;   XREF to: 004a13a7 (CONDITIONAL_JUMP)  ; LAB_004a13a7
    CMP AH,0x40                         ; 004a1382
    JNZ 0x004a13d2                      ; 004a1385
        ;   XREF to: 004a13d2 (CONDITIONAL_JUMP)  ; LAB_004a13d2
    PUSH EBX                            ; 004a1387
    MOV ESI,dword ptr [0x0061b4d0]      ; 004a1388 | DAT_0061b4d0
    PUSH ESI                            ; 004a138e
    CALL core_event.cpp_CEventList_getActorByVarName_FUN_004aa1d0 ; 004a138f
        ;   XREF to: 004aa1d0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_CEventList_getActorByVarName_FUN_004aa1d0(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 004a1394
    MOV ESI,EAX                         ; 004a1397
    TEST EAX,EAX                        ; 004a1399
    JNZ 0x004a13ff                      ; 004a139b
        ;   XREF to: 004a13ff (CONDITIONAL_JUMP)  ; LAB_004a13ff
    MOV EAX,[0x005ffcb8]                ; 004a139d | DAT_005ffcb8
        ;   Label: LAB_004a139d
    POP EBP                             ; 004a13a2
    POP EDI                             ; 004a13a3
    POP ESI                             ; 004a13a4
    POP EBX                             ; 004a13a5
    RET                                 ; 004a13a6
    MOV ESI,0x5dcbd7                    ; 004a13a7 | = "Must specify actor name"
        ;   Label: LAB_004a13a7
    MOV EDI,0x1c56ed0                   ; 004a13ac
    PUSH EDI                            ; 004a13b1 | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a13b2 | = "Must specify actor name" | s_st_specify_actor_name_005dcbd7+2
        ;   Label: LAB_004a13b2
    MOV byte ptr [EDI],AL               ; 004a13b4 | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a13b6
    JZ 0x004a13ca                       ; 004a13b8
        ;   XREF to: 004a13ca (CONDITIONAL_JUMP)  ; LAB_004a13ca
    MOV AL,byte ptr [ESI + 0x1]         ; 004a13ba | s_ust_specify_actor_name_005dcbd7+1 | s_t_specify_actor_name_005dcbd7+3
    ADD ESI,0x2                         ; 004a13bd
    MOV byte ptr [EDI + 0x1],AL         ; 004a13c0 | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a13c3
    CMP AL,0x0                          ; 004a13c6
    JNZ 0x004a13b2                      ; 004a13c8
        ;   XREF to: 004a13b2 (CONDITIONAL_JUMP)  ; LAB_004a13b2
    POP EDI                             ; 004a13ca
        ;   Label: LAB_004a13ca
    XOR EAX,EAX                         ; 004a13cb
    POP EBP                             ; 004a13cd
    POP EDI                             ; 004a13ce
    POP ESI                             ; 004a13cf
    POP EBX                             ; 004a13d0
    RET                                 ; 004a13d1
    PUSH 0x5dcbef                       ; 004a13d2 | DAT_005dcbef
        ;   Label: LAB_004a13d2
    PUSH EBX                            ; 004a13d7
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004a13d8
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a13dd
    TEST EAX,EAX                        ; 004a13e0
    JNZ 0x004a143d                      ; 004a13e2
        ;   XREF to: 004a143d (CONDITIONAL_JUMP)  ; LAB_004a143d
    MOV EAX,[0x00622580]                ; 004a13e4 | g_CNetGamePtr
    CMP dword ptr [EAX],0x0             ; 004a13e9 | g_CNetGameInstance
    JNZ 0x004a1424                      ; 004a13ec
        ;   XREF to: 004a1424 (CONDITIONAL_JUMP)  ; LAB_004a1424
    MOV ESI,dword ptr [0x01d06ab4]      ; 004a13ee | DAT_01d06ab4
    MOV ESI,dword ptr [ESI*0x4 + 0x1d06aa4] ; 004a13f4
    TEST ESI,ESI                        ; 004a13fb
    JZ 0x004a139d                       ; 004a13fd
        ;   XREF to: 004a139d (CONDITIONAL_JUMP)  ; LAB_004a139d
    MOV EDI,dword ptr [ESP + 0x18]      ; 004a13ff
        ;   Label: LAB_004a13ff
    PUSH EDI                            ; 004a1403
    PUSH ESI                            ; 004a1404
    CALL core_actor.cpp_isOfClassHash_FUN_0040c5d0 ; 004a1405
        ;   XREF to: 0040c5d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClassHash_FUN_0040c5d0()
    ADD ESP,0x8                         ; 004a140a
    TEST EAX,EAX                        ; 004a140d
    JNZ 0x004a1496                      ; 004a140f
        ;   XREF to: 004a1496 (CONDITIONAL_JUMP)  ; LAB_004a1496
    CMP byte ptr [EBX],0x40             ; 004a1415
    JNZ 0x004a146d                      ; 004a1418
        ;   XREF to: 004a146d (CONDITIONAL_JUMP)  ; LAB_004a146d
    MOV EAX,[0x005ffcb8]                ; 004a141a | DAT_005ffcb8
    POP EBP                             ; 004a141f
    POP EDI                             ; 004a1420
    POP ESI                             ; 004a1421
    POP EBX                             ; 004a1422
    RET                                 ; 004a1423
    PUSH 0x5dcbf1                       ; 004a1424 | = "Can't use '$' actor specifier in mult..."
        ;   Label: LAB_004a1424
    PUSH 0x1c56ed0                      ; 004a1429 | DAT_01c56ed0
    CALL crt_unknown.c_FUN_005bfb40     ; 004a142e
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x8                         ; 004a1433
    XOR EAX,EAX                         ; 004a1436
    POP EBP                             ; 004a1438
    POP EDI                             ; 004a1439
    POP ESI                             ; 004a143a
    POP EBX                             ; 004a143b
    RET                                 ; 004a143c
    PUSH EBX                            ; 004a143d
        ;   Label: LAB_004a143d
    MOV EDX,dword ptr [0x0061f650]      ; 004a143e | DAT_0061f650
    PUSH EDX                            ; 004a1444 | DAT_01d2c900
    CALL core_mission.cpp_FUN_0051b6c0  ; 004a1445
        ;   XREF to: 0051b6c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_FUN_0051b6c0(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 004a144a
    MOV ESI,EAX                         ; 004a144d
    TEST EAX,EAX                        ; 004a144f
    JNZ 0x004a13ff                      ; 004a1451
        ;   XREF to: 004a13ff (CONDITIONAL_JUMP)  ; LAB_004a13ff
    PUSH EBX                            ; 004a1453
    PUSH 0x5dcc1f                       ; 004a1454 | = "Actor \"%s\" does not exist."
    PUSH 0x1c56ed0                      ; 004a1459 | DAT_01c56ed0
    CALL crt_unknown.c_FUN_005bfb40     ; 004a145e
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 004a1463
    XOR EAX,EAX                         ; 004a1466
    POP EBP                             ; 004a1468
    POP EDI                             ; 004a1469
    POP ESI                             ; 004a146a
    POP EBX                             ; 004a146b
    RET                                 ; 004a146c
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004a146d
        ;   Label: LAB_004a146d
    PUSH EBP                            ; 004a1471
    PUSH ESI                            ; 004a1472
    CALL core_actor.cpp_FUN_00408830    ; 004a1473
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004a1478
    PUSH EAX                            ; 004a147b
    PUSH EBX                            ; 004a147c
    PUSH 0x5dcc3a                       ; 004a147d | = "Actor \"%s\" is of type %s, this comm..."
    PUSH 0x1c56ed0                      ; 004a1482 | DAT_01c56ed0
    CALL crt_unknown.c_FUN_005bfb40     ; 004a1487
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x14                        ; 004a148c
    XOR EAX,EAX                         ; 004a148f
    POP EBP                             ; 004a1491
    POP EDI                             ; 004a1492
    POP ESI                             ; 004a1493
    POP EBX                             ; 004a1494
    RET                                 ; 004a1495
    MOV EAX,ESI                         ; 004a1496
        ;   Label: LAB_004a1496
    POP EBP                             ; 004a1498
    POP EDI                             ; 004a1499
    POP ESI                             ; 004a149a
    POP EBX                             ; 004a149b
    RET                                 ; 004a149c

