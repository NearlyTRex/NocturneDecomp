; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_union_cpp_CUnion_processMotionEvent_FUN_005a5300(CUnion *this_ptr,int event_id)
;
; Parameters:
; CUnion *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   event_id
;
; Referenced Globals:
;   undefined1* switchdataD_005a52e4 = 005a531c
;   TerminatedCString s_swordimpactflesh0_wav_005f0582
;   TerminatedCString s_riflebutt01_005f0599
;   TerminatedCString s_confedstab01_wav_005f05a5
;   TerminatedCString s_confedbutt01_wav_005f05b6
;   undefined4 DAT_005ff8fc
;   undefined4 DAT_0061c068
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;   core_basicene.cpp_FUN_0059f740
;   core_basicnpc.cpp_CBasicNPC_processMotionEvent_FUN_005a48f0
;   core_sound.cpp_CSound_playActorSound_FUN_0055ae50
;   core_union.cpp_FUN_005a5460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5300
        ;   Label: core_union.cpp_CUnion_processMotionEvent_FUN_005a5300
    PUSH ESI                            ; 005a5301
    PUSH EBP                            ; 005a5302
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a5303
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a5307
    SUB EAX,0x206c                      ; 005a530b
    CMP EAX,0x4                         ; 005a5310
    JA 0x005a5325                       ; 005a5313
        ;   XREF to: 005a5325 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5a52e4]  ; 005a5315 | caseD_206c | caseD_206d | caseD_206e
        ;   Label: switchD
    PUSH EBX                            ; 005a531c
        ;   Label: caseD_206c
    CALL core_union.cpp_FUN_005a5460    ; 005a531d
        ;   XREF to: 005a5460 (UNCONDITIONAL_CALL)  ; undefined core_union.cpp_FUN_005a5460()
    ADD ESP,0x4                         ; 005a5322
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a5325
        ;   Label: default
    PUSH EDX                            ; 005a5329
    PUSH EBX                            ; 005a532a
    CALL core_basicnpc.cpp_CBasicNPC_processMotionEvent_FUN_005a48f0 ; 005a532b
        ;   XREF to: 005a48f0 (UNCONDITIONAL_CALL)  ; void core_basicnpc.cpp_CBasicNPC_processMotionEvent_FUN_005a48f0(CBasicNPC * this_ptr, int event_id)
    ADD ESP,0x8                         ; 005a5330
    POP EBP                             ; 005a5333
    POP ESI                             ; 005a5334
    POP EBX                             ; 005a5335
    RET                                 ; 005a5336
    MOV ESI,dword ptr [EBX + 0x1185c]   ; 005a5337
        ;   Label: caseD_206f
    PUSH 0x3f800000                     ; 005a533d
    PUSH ESI                            ; 005a5342
    PUSH dword ptr [0x005ff8fc]         ; 005a5343 | DAT_005ff8fc
    PUSH EBX                            ; 005a5349
    CALL core_basicene.cpp_FUN_0059f740 ; 005a534a
        ;   XREF to: 0059f740 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_0059f740()
    ADD ESP,0x10                        ; 005a534f
    TEST EAX,EAX                        ; 005a5352
    JZ 0x005a5325                       ; 005a5354
        ;   XREF to: 005a5325 (CONDITIONAL_JUMP)  ; default
    PUSH EDI                            ; 005a5356
    LEA EAX,[EBX + 0x20]                ; 005a5357
    PUSH EAX                            ; 005a535a
    PUSH 0x5f0582                       ; 005a535b | = "swordimpactflesh0?.wav"
    PUSH EBX                            ; 005a5360
    MOV EDI,dword ptr [0x0061c068]      ; 005a5361 | DAT_0061c068
    PUSH EDI                            ; 005a5367
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 005a5368
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 005a536d
    POP EDI                             ; 005a5370
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a5371
    PUSH EDX                            ; 005a5375
    PUSH EBX                            ; 005a5376
    CALL core_basicnpc.cpp_CBasicNPC_processMotionEvent_FUN_005a48f0 ; 005a5377
        ;   XREF to: 005a48f0 (UNCONDITIONAL_CALL)  ; void core_basicnpc.cpp_CBasicNPC_processMotionEvent_FUN_005a48f0(CBasicNPC * this_ptr, int event_id)
    ADD ESP,0x8                         ; 005a537c
    POP EBP                             ; 005a537f
    POP ESI                             ; 005a5380
    POP EBX                             ; 005a5381
    RET                                 ; 005a5382
    MOV EDX,dword ptr [EBX + 0x11858]   ; 005a5383
        ;   Label: caseD_2070
    PUSH 0x3f800000                     ; 005a5389
    PUSH EDX                            ; 005a538e
    PUSH dword ptr [0x005ff8fc]         ; 005a538f | DAT_005ff8fc
    PUSH EBX                            ; 005a5395
    CALL core_basicene.cpp_FUN_0059f740 ; 005a5396
        ;   XREF to: 0059f740 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_0059f740()
    ADD ESP,0x10                        ; 005a539b
    TEST EAX,EAX                        ; 005a539e
    JZ 0x005a5325                       ; 005a53a0
        ;   XREF to: 005a5325 (CONDITIONAL_JUMP)  ; default
    LEA EAX,[EBX + 0x20]                ; 005a53a2
    PUSH EAX                            ; 005a53a5
    PUSH 0x5f0599                       ; 005a53a6 | = "riflebutt01"
    PUSH EBX                            ; 005a53ab
    MOV ECX,dword ptr [0x0061c068]      ; 005a53ac | DAT_0061c068
    PUSH ECX                            ; 005a53b2
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 005a53b3
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 005a53b8
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a53bb
    PUSH EDX                            ; 005a53bf
    PUSH EBX                            ; 005a53c0
    CALL core_basicnpc.cpp_CBasicNPC_processMotionEvent_FUN_005a48f0 ; 005a53c1
        ;   XREF to: 005a48f0 (UNCONDITIONAL_CALL)  ; void core_basicnpc.cpp_CBasicNPC_processMotionEvent_FUN_005a48f0(CBasicNPC * this_ptr, int event_id)
    ADD ESP,0x8                         ; 005a53c6
    POP EBP                             ; 005a53c9
    POP ESI                             ; 005a53ca
    POP EBX                             ; 005a53cb
    RET                                 ; 005a53cc
    PUSH 0x4                            ; 005a53cd
        ;   Label: caseD_206d
    PUSH 0x0                            ; 005a53cf
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 005a53d1
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 005a53d6
    CMP EAX,0x2                         ; 005a53d9
    JLE 0x005a5325                      ; 005a53dc
        ;   XREF to: 005a5325 (CONDITIONAL_JUMP)  ; default
    LEA EAX,[EBX + 0x20]                ; 005a53e2
    PUSH EAX                            ; 005a53e5
    PUSH 0x5f05a5                       ; 005a53e6 | = "confedstab01.wav"
    PUSH EBX                            ; 005a53eb
    MOV EAX,[0x0061c068]                ; 005a53ec | DAT_0061c068
    PUSH EAX                            ; 005a53f1
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 005a53f2
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 005a53f7
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a53fa
    PUSH EDX                            ; 005a53fe
    PUSH EBX                            ; 005a53ff
    CALL core_basicnpc.cpp_CBasicNPC_processMotionEvent_FUN_005a48f0 ; 005a5400
        ;   XREF to: 005a48f0 (UNCONDITIONAL_CALL)  ; void core_basicnpc.cpp_CBasicNPC_processMotionEvent_FUN_005a48f0(CBasicNPC * this_ptr, int event_id)
    ADD ESP,0x8                         ; 005a5405
    POP EBP                             ; 005a5408
    POP ESI                             ; 005a5409
    POP EBX                             ; 005a540a
    RET                                 ; 005a540b
    LEA EAX,[EBX + 0x20]                ; 005a540c
        ;   Label: caseD_206e
    PUSH EAX                            ; 005a540f
    PUSH 0x5f05b6                       ; 005a5410 | = "confedbutt01.wav"
    PUSH EBX                            ; 005a5415
    MOV EBP,dword ptr [0x0061c068]      ; 005a5416 | DAT_0061c068
    PUSH EBP                            ; 005a541c
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 005a541d
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 005a5422
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a5425
    PUSH EDX                            ; 005a5429
    PUSH EBX                            ; 005a542a
    CALL core_basicnpc.cpp_CBasicNPC_processMotionEvent_FUN_005a48f0 ; 005a542b
        ;   XREF to: 005a48f0 (UNCONDITIONAL_CALL)  ; void core_basicnpc.cpp_CBasicNPC_processMotionEvent_FUN_005a48f0(CBasicNPC * this_ptr, int event_id)
    ADD ESP,0x8                         ; 005a5430
    POP EBP                             ; 005a5433
    POP ESI                             ; 005a5434
    POP EBX                             ; 005a5435
    RET                                 ; 005a5436

