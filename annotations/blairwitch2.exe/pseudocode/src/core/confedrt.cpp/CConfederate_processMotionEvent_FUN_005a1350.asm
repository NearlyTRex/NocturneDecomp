; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_confedrt_cpp_CConfederate_processMotionEvent_FUN_005a1350(CConfederate *this_ptr,int event_id)
;
; Parameters:
; CConfederate *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   event_id
;
; Referenced Globals:
;   undefined1* switchdataD_005a1334 = 005a136c
;   TerminatedCString s_swordimpactflesh0_wav_005efce7
;   TerminatedCString s_riflebutt01_005efcfe
;   TerminatedCString s_confedstab01_wav_005efd0a
;   TerminatedCString s_confedbutt01_wav_005efd1b
;   undefined4 DAT_005fedbc
;   undefined4 DAT_0061c068
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;   core_basicene.cpp_FUN_0059e880
;   core_basicene.cpp_FUN_0059f740
;   core_confedrt.cpp_FUN_005a14e0
;   core_sound.cpp_CSound_playActorSound_FUN_0055ae50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1350
        ;   Label: core_confedrt.cpp_CConfederate_processMotionEvent_FUN_005a1350
    PUSH ESI                            ; 005a1351
    PUSH EBP                            ; 005a1352
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a1353
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a1357
    SUB EAX,0x206c                      ; 005a135b
    CMP EAX,0x4                         ; 005a1360
    JA 0x005a1375                       ; 005a1363
        ;   XREF to: 005a1375 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5a1334]  ; 005a1365 | caseD_206c | caseD_206d | caseD_206e
        ;   Label: switchD
    PUSH EBX                            ; 005a136c
        ;   Label: caseD_206c
    CALL core_confedrt.cpp_FUN_005a14e0 ; 005a136d
        ;   XREF to: 005a14e0 (UNCONDITIONAL_CALL)  ; undefined core_confedrt.cpp_FUN_005a14e0()
    ADD ESP,0x4                         ; 005a1372
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a1375
        ;   Label: default
    PUSH EDX                            ; 005a1379
    PUSH EBX                            ; 005a137a
    CALL core_basicene.cpp_FUN_0059e880 ; 005a137b
        ;   XREF to: 0059e880 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_0059e880()
    ADD ESP,0x8                         ; 005a1380
    POP EBP                             ; 005a1383
    POP ESI                             ; 005a1384
    POP EBX                             ; 005a1385
    RET                                 ; 005a1386
    MOV ESI,dword ptr [EBX + 0x1185c]   ; 005a1387
        ;   Label: caseD_206f
    PUSH 0x3f800000                     ; 005a138d
    PUSH ESI                            ; 005a1392
    PUSH dword ptr [0x005fedbc]         ; 005a1393 | DAT_005fedbc
    PUSH EBX                            ; 005a1399
    CALL core_basicene.cpp_FUN_0059f740 ; 005a139a
        ;   XREF to: 0059f740 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_0059f740()
    ADD ESP,0x10                        ; 005a139f
    TEST EAX,EAX                        ; 005a13a2
    JZ 0x005a1375                       ; 005a13a4
        ;   XREF to: 005a1375 (CONDITIONAL_JUMP)  ; default
    PUSH EDI                            ; 005a13a6
    LEA EAX,[EBX + 0x20]                ; 005a13a7
    PUSH EAX                            ; 005a13aa
    PUSH 0x5efce7                       ; 005a13ab | = "swordimpactflesh0?.wav"
    PUSH EBX                            ; 005a13b0
    MOV EDI,dword ptr [0x0061c068]      ; 005a13b1 | DAT_0061c068
    PUSH EDI                            ; 005a13b7
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 005a13b8
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 005a13bd
    POP EDI                             ; 005a13c0
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a13c1
    PUSH EDX                            ; 005a13c5
    PUSH EBX                            ; 005a13c6
    CALL core_basicene.cpp_FUN_0059e880 ; 005a13c7
        ;   XREF to: 0059e880 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_0059e880()
    ADD ESP,0x8                         ; 005a13cc
    POP EBP                             ; 005a13cf
    POP ESI                             ; 005a13d0
    POP EBX                             ; 005a13d1
    RET                                 ; 005a13d2
    MOV EDX,dword ptr [EBX + 0x11858]   ; 005a13d3
        ;   Label: caseD_2070
    PUSH 0x3f800000                     ; 005a13d9
    PUSH EDX                            ; 005a13de
    PUSH dword ptr [0x005fedbc]         ; 005a13df | DAT_005fedbc
    PUSH EBX                            ; 005a13e5
    CALL core_basicene.cpp_FUN_0059f740 ; 005a13e6
        ;   XREF to: 0059f740 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_0059f740()
    ADD ESP,0x10                        ; 005a13eb
    TEST EAX,EAX                        ; 005a13ee
    JZ 0x005a1375                       ; 005a13f0
        ;   XREF to: 005a1375 (CONDITIONAL_JUMP)  ; default
    LEA EAX,[EBX + 0x20]                ; 005a13f2
    PUSH EAX                            ; 005a13f5
    PUSH 0x5efcfe                       ; 005a13f6 | = "riflebutt01"
    PUSH EBX                            ; 005a13fb
    MOV ECX,dword ptr [0x0061c068]      ; 005a13fc | DAT_0061c068
    PUSH ECX                            ; 005a1402
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 005a1403
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 005a1408
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a140b
    PUSH EDX                            ; 005a140f
    PUSH EBX                            ; 005a1410
    CALL core_basicene.cpp_FUN_0059e880 ; 005a1411
        ;   XREF to: 0059e880 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_0059e880()
    ADD ESP,0x8                         ; 005a1416
    POP EBP                             ; 005a1419
    POP ESI                             ; 005a141a
    POP EBX                             ; 005a141b
    RET                                 ; 005a141c
    PUSH 0x4                            ; 005a141d
        ;   Label: caseD_206d
    PUSH 0x0                            ; 005a141f
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 005a1421
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 005a1426
    CMP EAX,0x2                         ; 005a1429
    JLE 0x005a1375                      ; 005a142c
        ;   XREF to: 005a1375 (CONDITIONAL_JUMP)  ; default
    LEA EAX,[EBX + 0x20]                ; 005a1432
    PUSH EAX                            ; 005a1435
    PUSH 0x5efd0a                       ; 005a1436 | = "confedstab01.wav"
    PUSH EBX                            ; 005a143b
    MOV EAX,[0x0061c068]                ; 005a143c | DAT_0061c068
    PUSH EAX                            ; 005a1441
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 005a1442
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 005a1447
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a144a
    PUSH EDX                            ; 005a144e
    PUSH EBX                            ; 005a144f
    CALL core_basicene.cpp_FUN_0059e880 ; 005a1450
        ;   XREF to: 0059e880 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_0059e880()
    ADD ESP,0x8                         ; 005a1455
    POP EBP                             ; 005a1458
    POP ESI                             ; 005a1459
    POP EBX                             ; 005a145a
    RET                                 ; 005a145b
    LEA EAX,[EBX + 0x20]                ; 005a145c
        ;   Label: caseD_206e
    PUSH EAX                            ; 005a145f
    PUSH 0x5efd1b                       ; 005a1460 | = "confedbutt01.wav"
    PUSH EBX                            ; 005a1465
    MOV EBP,dword ptr [0x0061c068]      ; 005a1466 | DAT_0061c068
    PUSH EBP                            ; 005a146c
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 005a146d
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 005a1472
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a1475
    PUSH EDX                            ; 005a1479
    PUSH EBX                            ; 005a147a
    CALL core_basicene.cpp_FUN_0059e880 ; 005a147b
        ;   XREF to: 0059e880 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_0059e880()
    ADD ESP,0x8                         ; 005a1480
    POP EBP                             ; 005a1483
    POP ESI                             ; 005a1484
    POP EBX                             ; 005a1485
    RET                                 ; 005a1486

