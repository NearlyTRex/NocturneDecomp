; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_process_FUN_00415350(CBodyPart *this_ptr,float delta_time)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_disableBodyPartDamage_005b6c35
;   undefined4 DAT_005b6c52
;   undefined4 DAT_005fba60
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_02cfd900
;   undefined4 DAT_02cfd904
;   undefined4 DAT_02cfd908
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_bodypart.cpp_CBodyPart_processFires_FUN_00415570
;   core_bodypart.cpp_CBodyPart_spawnGore_FUN_00416b20
;   core_bodypart.cpp_FUN_00414910
;   core_box.cpp_CBox_process_FUN_0041b410
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   core_setcolid.cpp_FUN_0053ed10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415350
        ;   Label: core_bodypart.cpp_CBodyPart_process_FUN_00415350
    PUSH ESI                            ; 00415351
    PUSH EDI                            ; 00415352
    PUSH EBP                            ; 00415353
    MOV EBP,ESP                         ; 00415354
    SUB ESP,0x64                        ; 00415356
    AND ESP,0xfffffff8                  ; 00415359
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041535c
    CMP dword ptr [EBX + 0x174],0x3     ; 0041535f
    JL 0x004153e2                       ; 00415366
        ;   XREF to: 004153e2 (CONDITIONAL_JUMP)  ; LAB_004153e2
    CMP dword ptr [EBX + 0x180],0x1     ; 0041536c
    JL 0x004153e2                       ; 00415373
        ;   XREF to: 004153e2 (CONDITIONAL_JUMP)  ; LAB_004153e2
    CMP dword ptr [EBX + 0x158],0x0     ; 00415375
    JZ 0x00415387                       ; 0041537c
        ;   XREF to: 00415387 (CONDITIONAL_JUMP)  ; LAB_00415387
    CMP dword ptr [EBX + 0xf24],0x0     ; 0041537e
    JZ 0x004153cf                       ; 00415385
        ;   XREF to: 004153cf (CONDITIONAL_JUMP)  ; LAB_004153cf
    CMP dword ptr [EBX + 0xf2c],0x0     ; 00415387
        ;   Label: LAB_00415387
    JZ 0x00415440                       ; 0041538e
        ;   XREF to: 00415440 (CONDITIONAL_JUMP)  ; LAB_00415440
    PUSH EBX                            ; 00415394
        ;   Label: LAB_00415394
    CALL core_bodypart.cpp_CBodyPart_spawnGore_FUN_00416b20 ; 00415395
        ;   XREF to: 00416b20 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_spawnGore_FUN_00416b20(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 0041539a
    MOV ECX,dword ptr [EBX + 0xf2c]     ; 0041539d
        ;   Label: LAB_0041539d
    TEST ECX,ECX                        ; 004153a3
    JNZ 0x004153cf                      ; 004153a5
        ;   XREF to: 004153cf (CONDITIONAL_JUMP)  ; LAB_004153cf
    FLD float ptr [EBX + 0xcbc]         ; 004153a7
    FSUB float ptr [EBP + 0x18]         ; 004153ad
    FST float ptr [EBX + 0xcbc]         ; 004153b0
    FLDZ                                ; 004153b6
    FCOMPP                              ; 004153b8
    FNSTSW AX                           ; 004153ba
    SAHF                                ; 004153bc
    JBE 0x00415452                      ; 004153bd
        ;   XREF to: 00415452 (CONDITIONAL_JUMP)  ; LAB_00415452
    MOV dword ptr [EBX + 0xf24],ECX     ; 004153c3
    MOV dword ptr [EBX + 0xcbc],ECX     ; 004153c9
    PUSH dword ptr [EBP + 0x18]         ; 004153cf
        ;   Label: LAB_004153cf
    PUSH EBX                            ; 004153d2
    CALL core_bodypart.cpp_CBodyPart_processFires_FUN_00415570 ; 004153d3
        ;   XREF to: 00415570 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_processFires_FUN_00415570(CBodyPart * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004153d8
    MOV ESP,EBP                         ; 004153db
        ;   Label: LAB_004153db
    POP EBP                             ; 004153dd
    POP EDI                             ; 004153de
    POP ESI                             ; 004153df
    POP EBX                             ; 004153e0
    RET                                 ; 004153e1
    PUSH 0x0                            ; 004153e2
        ;   Label: LAB_004153e2
    PUSH 0x0                            ; 004153e4
    PUSH EBX                            ; 004153e6
    MOV dword ptr [EBX + 0x70],0x2      ; 004153e7
    CALL core_bodypart.cpp_FUN_00414910 ; 004153ee
        ;   XREF to: 00414910 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_00414910()
    LEA EAX,[EBX + 0x168]               ; 004153f3
    ADD ESP,0xc                         ; 004153f9
    MOV EDX,EAX                         ; 004153fc
    CMP EAX,0x2cfd900                   ; 004153fe
    JZ 0x0041541f                       ; 00415403
        ;   XREF to: 0041541f (CONDITIONAL_JUMP)  ; LAB_0041541f
    MOV ECX,dword ptr [0x02cfd900]      ; 00415405 | DAT_02cfd900
    MOV dword ptr [EAX],ECX             ; 0041540b
    MOV ECX,dword ptr [0x02cfd904]      ; 0041540d | DAT_02cfd904
    MOV dword ptr [EAX + 0x4],ECX       ; 00415413
    MOV ECX,dword ptr [0x02cfd908]      ; 00415416 | DAT_02cfd908
    MOV dword ptr [EAX + 0x8],ECX       ; 0041541c
    ADD EBX,0x15c                       ; 0041541f
        ;   Label: LAB_0041541f
    CMP EBX,EDX                         ; 00415425
    JZ 0x004153db                       ; 00415427
        ;   XREF to: 004153db (CONDITIONAL_JUMP)  ; LAB_004153db
    MOV EAX,dword ptr [EDX]             ; 00415429
    MOV dword ptr [EBX],EAX             ; 0041542b
    MOV EAX,dword ptr [EDX + 0x4]       ; 0041542d
    MOV dword ptr [EBX + 0x4],EAX       ; 00415430
    MOV EAX,dword ptr [EDX + 0x8]       ; 00415433
    MOV dword ptr [EBX + 0x8],EAX       ; 00415436
    MOV ESP,EBP                         ; 00415439
    POP EBP                             ; 0041543b
    POP EDI                             ; 0041543c
    POP ESI                             ; 0041543d
    POP EBX                             ; 0041543e
    RET                                 ; 0041543f
    CMP dword ptr [EBX + 0xf24],0x0     ; 00415440
        ;   Label: LAB_00415440
    JNZ 0x00415394                      ; 00415447
        ;   XREF to: 00415394 (CONDITIONAL_JUMP)  ; LAB_00415394
    JMP 0x0041539d                      ; 0041544d
        ;   XREF to: 0041539d (UNCONDITIONAL_JUMP)  ; LAB_0041539d
    LEA EDI,[ESP + 0x54]                ; 00415452
        ;   Label: LAB_00415452
    LEA ESI,[EBX + 0x20]                ; 00415456
    MOVSD ES:EDI,ESI                    ; 00415459
    MOVSD ES:EDI,ESI                    ; 0041545a
    MOVSD ES:EDI,ESI                    ; 0041545b
    LEA ESI,[EBX + 0xcd0]               ; 0041545c
    PUSH dword ptr [EBP + 0x18]         ; 00415462
    PUSH ESI                            ; 00415465
    CALL core_box.cpp_CBox_process_FUN_0041b410 ; 00415466
        ;   XREF to: 0041b410 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_process_FUN_0041b410(CBox * this_ptr, float delta_time)
    LEA EAX,[EBX + 0x20]                ; 0041546b
    MOV EDX,dword ptr [ESI]             ; 0041546e
    MOV dword ptr [EAX],EDX             ; 00415470
    LEA EDX,[EBX + 0x30]                ; 00415472
    MOV ECX,dword ptr [ESI + 0x4]       ; 00415475
    MOV dword ptr [EAX + 0x4],ECX       ; 00415478
    MOV ECX,dword ptr [ESI + 0x8]       ; 0041547b
    MOV dword ptr [EAX + 0x8],ECX       ; 0041547e
    LEA EAX,[EBX + 0xcdc]               ; 00415481
    ADD ESP,0x8                         ; 00415487
    CMP EDX,EAX                         ; 0041548a
    JZ 0x0041549e                       ; 0041548c
        ;   XREF to: 0041549e (CONDITIONAL_JUMP)  ; LAB_0041549e
    MOV ECX,dword ptr [EAX]             ; 0041548e
    MOV dword ptr [EDX],ECX             ; 00415490
    MOV ECX,dword ptr [EAX + 0x4]       ; 00415492
    MOV dword ptr [EDX + 0x4],ECX       ; 00415495
    MOV ECX,dword ptr [EAX + 0x8]       ; 00415498
    MOV dword ptr [EDX + 0x8],ECX       ; 0041549b
    PUSH EBX                            ; 0041549e
        ;   Label: LAB_0041549e
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 0041549f
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    LEA EAX,[EBX + 0xd10]               ; 004154a4
    FLD float ptr [EAX + 0x4]           ; 004154aa
    FMUL ST0                            ; 004154ad
    FLD float ptr [EAX]                 ; 004154af
    FMUL ST0                            ; 004154b1
    FADDP                               ; 004154b3
    FLD float ptr [EAX + 0x8]           ; 004154b5
    FMUL ST0                            ; 004154b8
    FADDP                               ; 004154ba
    ADD ESP,0x4                         ; 004154bc
    FSQRT                               ; 004154bf
    FCOMP double ptr [0x005b6c52]       ; 004154c1 | DAT_005b6c52
    FNSTSW AX                           ; 004154c7
    SAHF                                ; 004154c9
    JBE 0x004153cf                      ; 004154ca
        ;   XREF to: 004153cf (CONDITIONAL_JUMP)  ; LAB_004153cf
    PUSH 0x5b6c35                       ; 004154d0 | = "disableBodyPartDamage"
    MOV ESI,dword ptr [0x005fba60]      ; 004154d5 | DAT_005fba60
    PUSH ESI                            ; 004154db
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 004154dc
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004154e1
    TEST EAX,EAX                        ; 004154e4
    JNZ 0x004153cf                      ; 004154e6
        ;   XREF to: 004153cf (CONDITIONAL_JUMP)  ; LAB_004153cf
    PUSH EBX                            ; 004154ec
    MOV EAX,dword ptr [EBX + 0x154]     ; 004154ed
    LEA ESI,[ESP + 0x40]                ; 004154f3
    CALL dword ptr [EAX + 0x1c]         ; 004154f7
    ADD ESP,0x4                         ; 004154fa
    MOV EAX,ESP                         ; 004154fd
    PUSH EAX                            ; 004154ff
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 00415500
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00415505
    PUSH 0x41700000                     ; 00415508
    PUSH 0x41200000                     ; 0041550d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00415512
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x68],EAX      ; 00415517
    FLD float ptr [ESP + 0x68]          ; 0041551b
    ADD ESP,0x8                         ; 0041551f
    MOV EAX,ESP                         ; 00415522
    MOV dword ptr [ESP + 0x34],EBX      ; 00415524
    PUSH EAX                            ; 00415528
    MOV dword ptr [ESP + 0x3c],EBX      ; 00415529
    LEA EAX,[EBX + 0x20]                ; 0041552d
    PUSH EAX                            ; 00415530
    LEA EAX,[ESP + 0x5c]                ; 00415531
    PUSH EAX                            ; 00415535
    MOV EAX,[0x00603b28]                ; 00415536 | g_CDemonSetPtr
    MOV EDI,0x70                        ; 0041553b
    PUSH EAX                            ; 00415540 | g_CDemonSetInstance
    FSTP float ptr [ESP + 0x14]         ; 00415541
    MOV dword ptr [ESP + 0x40],EDI      ; 00415545
    CALL core_setcolid.cpp_FUN_0053ed10 ; 00415549
        ;   XREF to: 0053ed10 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053ed10()
    ADD ESP,0x10                        ; 0041554e
    PUSH dword ptr [EBP + 0x18]         ; 00415551
    PUSH EBX                            ; 00415554
    CALL core_bodypart.cpp_CBodyPart_processFires_FUN_00415570 ; 00415555
        ;   XREF to: 00415570 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_processFires_FUN_00415570(CBodyPart * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041555a
    MOV ESP,EBP                         ; 0041555d
    POP EBP                             ; 0041555f
    POP EDI                             ; 00415560
    POP ESI                             ; 00415561
    POP EBX                             ; 00415562
    RET                                 ; 00415563

