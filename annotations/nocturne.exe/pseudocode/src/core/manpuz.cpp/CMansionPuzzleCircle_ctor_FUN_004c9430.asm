; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMansionPuzzleCircle * __cdecl core_manpuz_cpp_CMansionPuzzleCircle_ctor_FUN_004c9430(CMansionPuzzleCircle *this_ptr)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_manpuz.cpp_factoryFuncMansionPuzzleCircle_FUN_004c9400 at 004c9413
;
; Referenced Globals:
;   TerminatedCString s_doorpuzz_kfm_00587ef3
;   TerminatedCString s_puzz_rec_kfm_00587f00
;   TerminatedCString s_mirrhack_kfm_00587f0d
;   TerminatedCString s_headlite_raw_00587f1a
;   undefined4 s_headlite_raw_00587f1a+1
;   undefined4 s_headlite_raw_00587f1a+2
;   undefined4 s_headlite_raw_00587f1a+3
;   CDemonActor_vtable g_CMansionPuzzleCircleVTable
;   WatcomTypeInfo g_SPanelTypeInfo_005a0210
;   WatcomTypeInfo g_SGemTypeInfo_005a0230
;   WatcomTypeInfo g_SReflectorTypeInfo_005a0250
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00409d30
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   core_manpuz.cpp_CMansionPuzzleCircle_initPuzzleState_FUN_004ca410
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9430
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_ctor_FUN_004c9430
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c9431
    PUSH EDI                            ; 004c9435
    PUSH ESI                            ; 004c9436
    PUSH EBX                            ; 004c9437
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00409d30 ; 004c9438
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00409d30(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c943d
    ADD EAX,0x150                       ; 004c9440
    PUSH EAX                            ; 004c9445
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 004c9446
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c944b
    ADD EAX,0x17c                       ; 004c944e
    PUSH EAX                            ; 004c9453
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 004c9454
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c9459
    ADD EAX,0x17c                       ; 004c945c
    PUSH EAX                            ; 004c9461
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 004c9462
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c9467
    PUSH 0x5a0210                       ; 004c946a | g_SPanelTypeInfo_005a0210
    PUSH 0xc                            ; 004c946f
    ADD EAX,0x1a0                       ; 004c9471
    PUSH EAX                            ; 004c9476
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004c9477
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004c947c
    PUSH 0x5a0230                       ; 004c947f | g_SGemTypeInfo_005a0230
    PUSH 0xc                            ; 004c9484
    ADD EAX,0x4b0                       ; 004c9486
    PUSH EAX                            ; 004c948b
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004c948c
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004c9491
    PUSH 0x5a0250                       ; 004c9494 | g_SReflectorTypeInfo_005a0250
    PUSH 0x2                            ; 004c9499
    ADD EAX,0x8a0                       ; 004c949b
    PUSH EAX                            ; 004c94a0
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004c94a1
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004c94a6
    LEA EBX,[EAX + 0xffffecc8]          ; 004c94a9
    PUSH 0x587ef3                       ; 004c94af | = "doorpuzz.kfm"
    LEA EAX,[EBX + 0x150]               ; 004c94b4
    PUSH EAX                            ; 004c94ba
    MOV dword ptr [EBX + 0x14c],0x5a0054 ; 004c94bb | g_CMansionPuzzleCircleVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004c94c5
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004c94ca
    PUSH 0x587f00                       ; 004c94cd | = "puzz-rec.kfm"
    LEA EAX,[EBX + 0x2cc]               ; 004c94d2
    PUSH EAX                            ; 004c94d8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004c94d9
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004c94de
    PUSH 0x587f0d                       ; 004c94e1 | = "mirrhack.kfm"
    LEA EAX,[EBX + 0x448]               ; 004c94e6
    PUSH EAX                            ; 004c94ec
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004c94ed
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004c94f2
    MOV ESI,0x587f1a                    ; 004c94f5 | = "headlite.raw"
    LEA EDI,[EBX + 0x14c0]              ; 004c94fa
    PUSH EDI                            ; 004c9500
    MOV AL,byte ptr [ESI]               ; 004c9501 | = "headlite.raw" | s_headlite_raw_00587f1a+2
        ;   Label: LAB_004c9501
    MOV byte ptr [EDI],AL               ; 004c9503
    CMP AL,0x0                          ; 004c9505
    JZ 0x004c9519                       ; 004c9507
        ;   XREF to: 004c9519 (CONDITIONAL_JUMP)  ; LAB_004c9519
    MOV AL,byte ptr [ESI + 0x1]         ; 004c9509 | s_headlite_raw_00587f1a+1 | s_headlite_raw_00587f1a+3
    ADD ESI,0x2                         ; 004c950c
    MOV byte ptr [EDI + 0x1],AL         ; 004c950f
    ADD EDI,0x2                         ; 004c9512
    CMP AL,0x0                          ; 004c9515
    JNZ 0x004c9501                      ; 004c9517
        ;   XREF to: 004c9501 (CONDITIONAL_JUMP)  ; LAB_004c9501
    POP EDI                             ; 004c9519
        ;   Label: LAB_004c9519
    POP ESI                             ; 004c951a
    POP EDI                             ; 004c951b
    LEA EAX,[EBX + 0x5c4]               ; 004c951c
    MOV dword ptr [EAX + 0x8],0x0       ; 004c9522
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c9529
    MOV dword ptr [EAX + 0x4],EDX       ; 004c952c
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c952f
    MOV dword ptr [EAX],EDX             ; 004c9532
    LEA EAX,[EBX + 0x5d0]               ; 004c9534
    MOV dword ptr [EAX + 0x8],0x0       ; 004c953a
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c9541
    MOV dword ptr [EAX + 0x4],EDX       ; 004c9544
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c9547
    MOV dword ptr [EAX],EDX             ; 004c954a
    LEA EAX,[EBX + 0x5dc]               ; 004c954c
    MOV dword ptr [EAX + 0x8],0x0       ; 004c9552
    PUSH EBX                            ; 004c9559
    MOV EDX,dword ptr [EAX + 0x8]       ; 004c955a
    MOV dword ptr [EAX + 0x4],EDX       ; 004c955d
    MOV EDX,dword ptr [EAX + 0x4]       ; 004c9560
    MOV dword ptr [EAX],EDX             ; 004c9563
    CALL core_manpuz.cpp_CMansionPuzzleCircle_initPuzzleState_FUN_004ca410 ; 004c9565
        ;   XREF to: 004ca410 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_initPuzzleState_FUN_004ca410(CMansionPuzzleCircle * this_ptr)
    ADD ESP,0x4                         ; 004c956a
    MOV EAX,EBX                         ; 004c956d
    POP EBX                             ; 004c956f
    RET                                 ; 004c9570

