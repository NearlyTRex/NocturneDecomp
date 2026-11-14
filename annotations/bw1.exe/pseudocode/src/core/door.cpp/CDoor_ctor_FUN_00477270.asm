; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDoor * __cdecl core_door_cpp_CDoor_ctor_FUN_00477270(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_door.cpp_factoryFuncDoor_FUN_00477240 at 00477253
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004085c0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;   core_event.cpp_CRuleList_clear_FUN_004aacc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477270
        ;   Label: core_door.cpp_CDoor_ctor_FUN_00477270
    PUSH ESI                            ; 00477271
    PUSH EDI                            ; 00477272
    MOV EBX,dword ptr [ESP + 0x10]      ; 00477273
    PUSH EBX                            ; 00477277
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004085c0 ; 00477278
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004085c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0047727d
    ADD EAX,0x158                       ; 00477280
    PUSH EAX                            ; 00477285
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 00477286
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0047728b
    LEA EBX,[EAX + 0x320]               ; 0047728e
    PUSH EBX                            ; 00477294
    CALL core_event.cpp_CRuleList_clear_FUN_004aacc0 ; 00477295
        ;   XREF to: 004aacc0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CRuleList_clear_FUN_004aacc0(CRuleList * this_ptr)
    ADD ESP,0x4                         ; 0047729a
    SUB EBX,0x478                       ; 0047729d
    PUSH 0x5da752                       ; 004772a3
    LEA EAX,[EBX + 0x158]               ; 004772a8
    PUSH EAX                            ; 004772ae
    MOV dword ptr [EBX + 0x154],0x5ff034 ; 004772af
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 004772b9
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004772be
    ADD ESP,0x8                         ; 004772c8
    MOV dword ptr [EBX + 0x2dc],0x1     ; 004772cb
    LEA EAX,[EBX + 0x994]               ; 004772d5
    MOV dword ptr [EBX + 0x2e0],0x0     ; 004772db
    LEA EDX,[EBX + 0x20]                ; 004772e5
    MOV dword ptr [EBX + 0x2e4],0x0     ; 004772e8
    CMP EAX,EDX                         ; 004772f2
    JZ 0x00477306                       ; 004772f4
        ;   XREF to: 00477306 (CONDITIONAL_JUMP)  ; LAB_00477306
    MOV ECX,dword ptr [EDX]             ; 004772f6
    MOV dword ptr [EAX],ECX             ; 004772f8
    MOV ECX,dword ptr [EDX + 0x4]       ; 004772fa
    MOV dword ptr [EAX + 0x4],ECX       ; 004772fd
    MOV ECX,dword ptr [EDX + 0x8]       ; 00477300
    MOV dword ptr [EAX + 0x8],ECX       ; 00477303
    MOV ESI,0x5da75f                    ; 00477306
        ;   Label: LAB_00477306
    LEA EDI,[EBX + 0x2e8]               ; 0047730b
    PUSH EDI                            ; 00477311
    MOV AL,byte ptr [ESI]               ; 00477312
        ;   Label: LAB_00477312
    MOV byte ptr [EDI],AL               ; 00477314
    CMP AL,0x0                          ; 00477316
    JZ 0x0047732a                       ; 00477318
        ;   XREF to: 0047732a (CONDITIONAL_JUMP)  ; LAB_0047732a
    MOV AL,byte ptr [ESI + 0x1]         ; 0047731a
    ADD ESI,0x2                         ; 0047731d
    MOV byte ptr [EDI + 0x1],AL         ; 00477320
    ADD EDI,0x2                         ; 00477323
    CMP AL,0x0                          ; 00477326
    JNZ 0x00477312                      ; 00477328
        ;   XREF to: 00477312 (CONDITIONAL_JUMP)  ; LAB_00477312
    POP EDI                             ; 0047732a
        ;   Label: LAB_0047732a
    MOV ESI,0x5da76f                    ; 0047732b
    LEA EDI,[EBX + 0x34c]               ; 00477330
    PUSH EDI                            ; 00477336
    MOV AL,byte ptr [ESI]               ; 00477337
        ;   Label: LAB_00477337
    MOV byte ptr [EDI],AL               ; 00477339
    CMP AL,0x0                          ; 0047733b
    JZ 0x0047734f                       ; 0047733d
        ;   XREF to: 0047734f (CONDITIONAL_JUMP)  ; LAB_0047734f
    MOV AL,byte ptr [ESI + 0x1]         ; 0047733f
    ADD ESI,0x2                         ; 00477342
    MOV byte ptr [EDI + 0x1],AL         ; 00477345
    ADD EDI,0x2                         ; 00477348
    CMP AL,0x0                          ; 0047734b
    JNZ 0x00477337                      ; 0047734d
        ;   XREF to: 00477337 (CONDITIONAL_JUMP)  ; LAB_00477337
    POP EDI                             ; 0047734f
        ;   Label: LAB_0047734f
    MOV ESI,0x5da780                    ; 00477350
    MOV byte ptr [EBX + 0x864],0x0      ; 00477355
    LEA EDI,[EBX + 0x92c]               ; 0047735c
    MOV byte ptr [EBX + 0x8c8],0x0      ; 00477362
    PUSH EDI                            ; 00477369
    MOV AL,byte ptr [ESI]               ; 0047736a
        ;   Label: LAB_0047736a
    MOV byte ptr [EDI],AL               ; 0047736c
    CMP AL,0x0                          ; 0047736e
    JZ 0x00477382                       ; 00477370
        ;   XREF to: 00477382 (CONDITIONAL_JUMP)  ; LAB_00477382
    MOV AL,byte ptr [ESI + 0x1]         ; 00477372
    ADD ESI,0x2                         ; 00477375
    MOV byte ptr [EDI + 0x1],AL         ; 00477378
    ADD EDI,0x2                         ; 0047737b
    CMP AL,0x0                          ; 0047737e
    JNZ 0x0047736a                      ; 00477380
        ;   XREF to: 0047736a (CONDITIONAL_JUMP)  ; LAB_0047736a
    POP EDI                             ; 00477382
        ;   Label: LAB_00477382
    MOV dword ptr [EBX + 0x990],0x0     ; 00477383
    MOV dword ptr [EBX + 0x9ac],0x0     ; 0047738d
    MOV dword ptr [EBX + 0x9b0],0x3f800000 ; 00477397
    MOV dword ptr [EBX + 0x9b4],0x3f800000 ; 004773a1
    MOV dword ptr [EBX + 0x9b8],0x3f800000 ; 004773ab
    MOV dword ptr [EBX + 0x2d4],0x0     ; 004773b5
    MOV byte ptr [EBX + 0x3b0],0x0      ; 004773bf
    MOV byte ptr [EBX + 0x414],0x0      ; 004773c6
    MOV dword ptr [EBX + 0x9c8],0x0     ; 004773cd
    MOV dword ptr [EBX + 0x9cc],0x0     ; 004773d7
    MOV dword ptr [EBX + 0x9d0],0x1     ; 004773e1
    MOV dword ptr [EBX + 0x9d4],0x0     ; 004773eb
    MOV ESI,0x5da790                    ; 004773f5
    MOV dword ptr [EBX + 0x9d8],0x3     ; 004773fa
    LEA EDI,[EBX + 0x9e4]               ; 00477404
    MOV dword ptr [EBX + 0x9dc],0x1     ; 0047740a
    PUSH EDI                            ; 00477414
    MOV AL,byte ptr [ESI]               ; 00477415
        ;   Label: LAB_00477415
    MOV byte ptr [EDI],AL               ; 00477417
    CMP AL,0x0                          ; 00477419
    JZ 0x0047742d                       ; 0047741b
        ;   XREF to: 0047742d (CONDITIONAL_JUMP)  ; LAB_0047742d
    MOV AL,byte ptr [ESI + 0x1]         ; 0047741d
    ADD ESI,0x2                         ; 00477420
    MOV byte ptr [EDI + 0x1],AL         ; 00477423
    ADD EDI,0x2                         ; 00477426
    CMP AL,0x0                          ; 00477429
    JNZ 0x00477415                      ; 0047742b
        ;   XREF to: 00477415 (CONDITIONAL_JUMP)  ; LAB_00477415
    POP EDI                             ; 0047742d
        ;   Label: LAB_0047742d
    MOV dword ptr [EBX + 0x9e0],0x0     ; 0047742e
    MOV EAX,EBX                         ; 00477438
    MOV dword ptr [EBX + 0xa48],0x0     ; 0047743a
    POP EDI                             ; 00477444
    POP ESI                             ; 00477445
    POP EBX                             ; 00477446
    RET                                 ; 00477447

